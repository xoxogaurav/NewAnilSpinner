using System.Collections.Generic;
using TMPro;
using UnityEngine;

[System.Serializable]
public class Box
{
    [Header("Set Box ID to assimilate a gain")]
    public string boxID;
    // Case settings
    [HideInInspector]
    [Header("Boxs settings")]
    public SpriteRenderer WheelBoxSprite;
    public Color32 BoxColor = new Color32(255, 255, 255, 255);
    public bool SpecialBox;

    // ImageInsideCase
    [Header("Image inside box settings")]
    public Sprite SpriteInside;
    [HideInInspector]
    public Sprite SpriteInsideTMP;
    [Range(0.2f, 5.0f)]
    public float ImageScale = 1f;
    [Range(1f, 4f)]
    public float ImageYPosition = 2f;
    [HideInInspector]
    public float ImageYPositionTMP;

    // TextInsideCase
    [Header("Text inside box settings")]
    [TextArea]
    public string TextInside;
    [HideInInspector]
    public string TextInsideTMP;
    public TMP_FontAsset FontAsset;
    [HideInInspector]
    public TMP_FontAsset FontAssetTMP;
    public Color32 TextColor = new Color32(255, 255, 255, 255);
    [HideInInspector]
    public Color32 TextColorTMP;
    [Range(3, 50)]
    public float TextFontSize = 8f;
    [Range(1f, 4f)]
    public float TextYPosition = 1f;
    [HideInInspector]
    public float TextYPositionTMP;
}

[ExecuteInEditMode]
public class CustomWheelBox : MonoBehaviour
{
    [Header("Wheel background :")]
    public Sprite WheelBackground;

    [Header("Special box :")]
    public Sprite SpecialBoxSprite;
    public Color32 SpecialBoxColor = new Color32(40, 40, 40, 150);

    [Header("Here you can custom every wheel box :")]
    public List<Box> WheelBoxs;

    private bool firstTimeInitialize = true;
    private SpriteRenderer specialBox;
    private SpriteRenderer wheelBack;
    private char wheelID;

    // Start is called before the first frame update
    void Start()
    {
        GetUniqueWheelID();
        GetEveryBoxsComponnent();
    }

    private void GetUniqueWheelID()
    {
        var IntwheelID = GetComponent<SpinWheel>().TakeTheID();
        var numberBox = 0;
        if (IntwheelID == 0) {
            wheelID = 'w';
            numberBox = 6;
        }
        if (IntwheelID == 1) {
            wheelID = 'x';
            numberBox = 8;
        }
        if (IntwheelID == 2) {
            wheelID = 'y';
            numberBox = 10;
        }

        if (WheelBoxs.Count == 0)
        {
            WheelBoxs = new List<Box>(numberBox);
            for (int i = 0; i < numberBox; i++)
            {
                WheelBoxs.Add(null);
            }
        }
    }

    private void GetEveryBoxsComponnent()
    {
        wheelBack = GameObject.Find($"wheelback{wheelID}").GetComponent<SpriteRenderer>();
        specialBox = GameObject.Find($"SpecialBox{wheelID}").GetComponent<SpriteRenderer>();
        for (int i = 0; i < WheelBoxs.Count; i++)
        {
            WheelBoxs[i].WheelBoxSprite = GameObject.Find($"{wheelID}{i}").GetComponent<SpriteRenderer>();
            var Box = GameObject.Find($"Box{wheelID}{i}").transform;
            WheelBoxs[i].SpriteInsideTMP = Box.GetComponentInChildren<SpriteRenderer>().sprite;
            WheelBoxs[i].TextColorTMP = Box.GetComponentInChildren<TextMeshPro>().color;
            WheelBoxs[i].TextInsideTMP = Box.GetComponentInChildren<TextMeshPro>().text;
            WheelBoxs[i].FontAssetTMP = Box.GetComponentInChildren<TextMeshPro>().font;
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (firstTimeInitialize 
            || specialBox.sprite == null
            || WheelBoxs[0].WheelBoxSprite == null
            || WheelBoxs.Count == 0)
        {
            GetUniqueWheelID();
            GetEveryBoxsComponnent();
            firstTimeInitialize = false;
        }
        else if (!firstTimeInitialize)
        {
            SetSpecialBoxAndWheelBack();

            for (int i = 0; i < WheelBoxs.Count; i++)
            {
                var box = GameObject.Find($"Box{wheelID}{i}");
                var WheelCenterPosition = GameObject.Find($"Box{wheelID}{i}").GetComponent<Transform>().position;

                ChangeBoxColor(i);
                ChangeSpriteInsideBox(i, box);
                ChangeTextInsideBox(i, box);
                ChangeTextColorInsideBox(i, box);
                ChangeImageTextSettings(i, WheelCenterPosition);
                ActiveDesactiveSpecialBox(i);
                box.GetComponentInChildren<TextMeshPro>().font = WheelBoxs[i].FontAsset;
            }
        }
    }

    private void SetSpecialBoxAndWheelBack()
    {
        if (specialBox.sprite != SpecialBoxSprite && SpecialBoxSprite != null)
        {
            specialBox.sprite = SpecialBoxSprite;
        }
        if (SpecialBoxColor != specialBox.color)
        {
            specialBox.color = SpecialBoxColor;
        }
        if (wheelBack != null && wheelBack != WheelBackground)
        {
            wheelBack.sprite = WheelBackground;
        }
    }

    private void ChangeBoxColor(int i)
    {
        if (WheelBoxs[i].WheelBoxSprite != null)
            WheelBoxs[i].WheelBoxSprite.color = WheelBoxs[i].BoxColor;
    }

    private void ChangeSpriteInsideBox(int i, GameObject box)
    {
        box.GetComponentInChildren<SpriteRenderer>().sprite = WheelBoxs[i].SpriteInside;
        WheelBoxs[i].SpriteInsideTMP = WheelBoxs[i].SpriteInside;
    }

    private void ChangeTextInsideBox(int i, GameObject box)
    {
        box.GetComponentInChildren<TextMeshPro>().text = WheelBoxs[i].TextInside;
        WheelBoxs[i].TextInsideTMP = WheelBoxs[i].TextInside;
    }

    private void ChangeTextColorInsideBox(int i, GameObject box)
    {
        box.GetComponentInChildren<TextMeshPro>().color = WheelBoxs[i].TextColor;
        WheelBoxs[i].TextColorTMP = WheelBoxs[i].TextColor;
    }

    private void ChangeImageTextSettings(int i, Vector3 wheelCenterPosition)
    {
        Transform ImageTransform = GameObject.Find($"Box{wheelID}{i}").GetComponentInChildren<SpriteRenderer>().GetComponent<Transform>();
        var SliderScale = new Vector3(WheelBoxs[i].ImageScale, WheelBoxs[i].ImageScale, WheelBoxs[i].ImageScale);
        ImageTransform.localScale = SliderScale;

        var ImageUpVector = ImageTransform.TransformDirection(Vector3.up * WheelBoxs[i].ImageYPosition * transform.localScale.x);

        if (WheelBoxs[i].ImageYPosition != WheelBoxs[i].ImageYPositionTMP) {
            ImageTransform.position = ImageUpVector + wheelCenterPosition;
            WheelBoxs[i].ImageYPositionTMP = WheelBoxs[i].ImageYPosition;
        }

        Transform TextTransform = GameObject.Find($"Box{wheelID}{i}").GetComponentInChildren<RectTransform>();
        var TextUpVector = TextTransform.TransformDirection(Vector3.up * WheelBoxs[i].TextYPosition * transform.localScale.x);

        if (WheelBoxs[i].TextYPosition != WheelBoxs[i].TextYPositionTMP) {
            TextTransform.position = TextUpVector + wheelCenterPosition;
            WheelBoxs[i].TextYPositionTMP = WheelBoxs[i].TextYPosition;
        }

        var TextComponent = TextTransform.GetComponent<TextMeshPro>();
        TextComponent.fontSize = WheelBoxs[i].TextFontSize;
    }

    private void ActiveDesactiveSpecialBox(int i)
    {
        if (WheelBoxs[i].SpecialBox == true)
            WheelBoxs[i].WheelBoxSprite.GetComponent<SpriteMask>().enabled = true;
        else
            WheelBoxs[i].WheelBoxSprite.GetComponent<SpriteMask>().enabled = false;
    }
}