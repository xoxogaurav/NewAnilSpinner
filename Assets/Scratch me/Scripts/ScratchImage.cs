using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine.Rendering;
using UnityEngine.Events;
using System.Collections.Generic;
using System;

#pragma warning disable CS0649

namespace ScratchMe
{
    [ExecuteInEditMode]
    public class ScratchImage : Image, IPointerDownHandler, IPointerUpHandler, IDragHandler
    {
        private static MeshBuilderPool buildersPool = new MeshBuilderPool();

        [SerializeField]
        private ScratchAmountChanged onScratchAmountChanged;

        [SerializeField]
        private UnityEvent onScratchComplete;

        [SerializeField]
        private UnityEvent onStartScratching;

        [SerializeField]
        private Brush brush;

        public Brush Brush
        {
            get
            {
                return brush;
            }

            set
            {
                if (value == null)
                    throw new ArgumentException("Null brush is not allowed");

                brush = value;
            }
        }

        [SerializeField]
        [Range(0.0f, 1.0f)]
        private float fillTextureDownscaleFactor = 0.1f;

        [SerializeField]
        [Range(0.0f, 1.0f)]
        private float targetScratchFactor = 0.05f;

        [SerializeField]
        private bool clearOnCompleteScratch = false;

        [SerializeField]
        private RawImage tempImage;

        private ScratchState scratchState;

        private RenderTexture maskTarget;

        private CommandBuffer drawingBuffer;

        private Texture2D fillTexture;

        private float currentScratchAmount = 1.0f;

        private Dictionary<int, MeshBuilder> builders = new Dictionary<int, MeshBuilder>();

        public float CurrentScratchAmount
        {
            get
            {
                return currentScratchAmount;
            }
        }

        public ScratchAmountChanged OnScratchAmountChanged
        {
            get
            {
                return onScratchAmountChanged;
            }
        }

        public UnityEvent OnScratchComplete
        {
            get
            {
                return onScratchComplete;
            }
        }

        public UnityEvent OnStartScratching
        {
            get
            {
                return onStartScratching;
            }
        }

        protected override void Start()
        {
            base.Start();

            m_Material = new Material(Resources.Load<Shader>("Scratch/Shaders/ScratchImage"));

            if (sprite == null)
                return;

            drawingBuffer = new CommandBuffer();
            CreateRenderTarget();
        }

#if UNITY_EDITOR
        protected override void Reset()
        {
            base.Reset();

            m_Material = new Material(Resources.Load<Shader>("Scratch/Shaders/ScratchImage"));
        }
#endif

        protected override void OnDestroy()
        {
            base.OnDestroy();

            if (RenderTexture.active == maskTarget)
                RenderTexture.active = null;

            DestroyImmediate(maskTarget);
            DestroyImmediate(fillTexture);

            if (drawingBuffer != null)
            {
                drawingBuffer.Dispose();
                drawingBuffer = null;
            }
        }

        protected override void OnRectTransformDimensionsChange()
        {
            base.OnRectTransformDimensionsChange();

            CreateRenderTarget();
        }

        private void CreateRenderTarget()
        {
            var adjustRect = GetPixelAdjustedRect();
            if (adjustRect.width < 1.0f || adjustRect.height < 1.0f)
                return;

            var newImage = new RenderTexture((int)adjustRect.width, (int)adjustRect.height, 32, RenderTextureFormat.Default);
            if (maskTarget != null)
                DestroyImmediate(fillTexture);

            var previousTarget = maskTarget;
            maskTarget = newImage;

            Graphics.Blit(Texture2D.whiteTexture, maskTarget);
            if (previousTarget != null)
            {
                var widthRatio = (float)maskTarget.width / (float)previousTarget.width;
                var heightRatio = (float)maskTarget.height / (float)previousTarget.height;
                Graphics.Blit(previousTarget, maskTarget, new Vector2(widthRatio, heightRatio), Vector2.zero);
            }

            material.SetTexture(PropertyIds.Mask, maskTarget);

            if (tempImage != null)
                tempImage.texture = maskTarget;

            DestroyImmediate(previousTarget);
        }

        public void OnPointerDown(PointerEventData eventData)
        {
            if (builders.ContainsKey(eventData.pointerId))
                return;

            var builder = buildersPool.Allocate();
            builders.Add(eventData.pointerId, builder);
            builder.Brush = brush;
        }

        public void OnPointerUp(PointerEventData eventData)
        {
            if (!builders.ContainsKey(eventData.pointerId))
                return;

            buildersPool.Release(builders[eventData.pointerId]);
            builders.Remove(eventData.pointerId);
        }

        public void OnDrag(PointerEventData eventData)
        {
            if (!builders.ContainsKey(eventData.pointerId))
                return;

            var builder = builders[eventData.pointerId];

            builder.ClearPrevious();
            builder.Append(Color.black, 1.0f, GetLocalPosition(eventData));
            Draw(builder);
        }

        public void Clear()
        {
            if (scratchState == ScratchState.Initial)
                return;

            if (maskTarget != null)
                Graphics.Blit(Texture2D.whiteTexture, maskTarget);

            scratchState = ScratchState.Initial;
            onScratchAmountChanged.Invoke(1.0f);
        }

        private void Draw(MeshBuilder builder)
        {
            if (material == null)
                return;

            if (drawingBuffer == null)
                drawingBuffer = new CommandBuffer();

            drawingBuffer.SetRenderTarget(maskTarget);

            drawingBuffer.SetViewMatrix(Matrix4x4.TRS(Vector3.zero, Quaternion.identity, new Vector3(1, 1, -1)) * Matrix4x4.LookAt(Vector3.zero, Vector3.forward, Vector3.up).inverse);

            drawingBuffer.SetProjectionMatrix(Matrix4x4.Ortho(-(float)maskTarget.width * 0.5f, (float)maskTarget.width * 0.5f, -(float)maskTarget.height * 0.5f, (float)maskTarget.height * 0.5f, 0.01f, 3000.0f));

            drawingBuffer.DrawMesh(builder.Mesh, Matrix4x4.identity, brush.Material);

            Graphics.ExecuteCommandBuffer(drawingBuffer);

            drawingBuffer.Clear();

            var requiredTextureSize = GetPixelAdjustedRect();
            requiredTextureSize.width *= fillTextureDownscaleFactor;
            requiredTextureSize.height *= fillTextureDownscaleFactor;

            if (fillTexture == null || 
                fillTexture.width != (int)requiredTextureSize.width || 
                fillTexture.height != (int)requiredTextureSize.height)
            {
                DestroyImmediate(fillTexture);
                fillTexture = new Texture2D((int)requiredTextureSize.width, (int)requiredTextureSize.height, TextureFormat.RGBA32, false);
            }

            var newFill = FillCalculationUtility.CalculateFillAmount(requiredTextureSize.size, fillTexture, maskTarget);
            if (newFill == currentScratchAmount)
                return;

            if (scratchState == ScratchState.Initial)
            {
                onStartScratching.Invoke();
                scratchState = ScratchState.Scratched;
            }

            var targetFill = Mathf.Max(0.05f, targetScratchFactor);
            currentScratchAmount = newFill;
            onScratchAmountChanged.Invoke(currentScratchAmount);
            if (newFill <= targetFill && scratchState != ScratchState.Complete)
            {
                if (clearOnCompleteScratch)
                    Graphics.Blit(Texture2D.blackTexture, maskTarget);

                scratchState = ScratchState.Complete;
                onScratchComplete.Invoke();
            }
        }

        protected override void OnPopulateMesh(VertexHelper toFill)
        {
            base.OnPopulateMesh(toFill);

            var size = GetPixelAdjustedRect();
            var scale = new Vector3(1.0f / size.width, 1.0f / size.height, 1.0f);
            var halfVector = Vector3.one * 0.5f;

            var verteciesCount = toFill.currentVertCount;
            for (var index = 0; index < verteciesCount; index++)
            {
                UIVertex vertex = new UIVertex();
                toFill.PopulateUIVertex(ref vertex, index);
                vertex.uv1 = (Vector2)(Vector3.Scale(vertex.position, scale) + halfVector);
                toFill.SetUIVertex(vertex, index);
            }
        }

        private Vector3 GetLocalPosition(PointerEventData eventData)
        {
            var local = Vector2.zero;
            RectTransformUtility.ScreenPointToLocalPointInRectangle(GetComponent<RectTransform>(), eventData.position, eventData.pressEventCamera, out local);
            return (Vector3)local + Vector3.forward;
        }

        private void Update()
        {
            var currentCanvas = canvas;
            if (currentCanvas == null)
                return;

            currentCanvas.additionalShaderChannels |= AdditionalCanvasShaderChannels.TexCoord1;
        }
    }
}