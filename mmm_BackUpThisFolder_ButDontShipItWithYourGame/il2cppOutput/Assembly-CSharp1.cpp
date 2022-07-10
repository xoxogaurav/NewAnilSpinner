﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct ABSTweenPlugin_3_tC26278B0CA053BAF4547345679D3E8D1F748AC12;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct ABSTweenPlugin_3_t3823C0F935A3168B9E48DC90ABD9A0CED3D7BB82;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>
struct ABSTweenPlugin_3_tA51581359A1B697A7A0A8F2FFDE00794FA1E67F4;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct ABSTweenPlugin_3_t60F4DE5120CFD5986925189A0E775FAEAB4C59B9;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.String,System.String,DG.Tweening.Plugins.Options.StringOptions>
struct ABSTweenPlugin_3_tE7EF56C4695649256BA2077D8E447E739C869256;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>
struct ABSTweenPlugin_3_t4082710A2BB933E2D055E454B3EFAC4C0A319444;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>
struct ABSTweenPlugin_3_t08B14BED068ACE348E543E45725D6C6BFFA60143;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.SpiralOptions>
struct ABSTweenPlugin_3_tF7CEB9BBF8FF28D2F3BBF9DB950849DCA238F80C;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7;
// System.Action`1<DG.Tweening.DOTweenAnimation>
struct Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`4<DG.Tweening.Plugins.Options.PathOptions,System.Object,UnityEngine.Quaternion,System.Object>
struct Action_4_t46555725CCAEEC44DC0F0A9AEDCEFE0867EE0B85;
// System.Action`4<DG.Tweening.Plugins.Options.PathOptions,DG.Tweening.Tween,UnityEngine.Quaternion,UnityEngine.Transform>
struct Action_4_t9AF66ACF00E5AEB0F9B4A06FAEFEA18B2F266BDB;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Color>
struct DOGetter_1_t4DFFF7454A1BCD259676FED36CCF2114E34B5B95;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Quaternion>
struct DOGetter_1_tB89DD12456B8E79576BB70E1CA6DF899686410D3;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Rect>
struct DOGetter_1_t64F1C0E113DC45CC9A1FD194A80B7B4C40AC4923;
// DG.Tweening.Core.DOGetter`1<System.Single>
struct DOGetter_1_tE8B39477E96408653D0242624F4D7E48ABFD1B03;
// DG.Tweening.Core.DOGetter`1<System.String>
struct DOGetter_1_t65A2B66606014CD7EFBA1D8DDD1273F57511D146;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector2>
struct DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Color>
struct DOSetter_1_t5E2B8A5C7040616545D7D029D20C4BF5F3E6DA89;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Quaternion>
struct DOSetter_1_t9EFF8DD70A15F455A6FE698A22BD0FE9683AC28E;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Rect>
struct DOSetter_1_t1682EBCD9936CA04E27CEC6CFD3F7C8CD8584CDD;
// DG.Tweening.Core.DOSetter`1<System.Single>
struct DOSetter_1_t48D41DB8CE0BFC91A1844C4CC49A8A7222A69200;
// DG.Tweening.Core.DOSetter`1<System.String>
struct DOSetter_1_t999572008E4C4CFE5EF6FA70393F8B092CA8C438;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector2>
struct DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7;
// System.Collections.Generic.List`1<DG.Tweening.Core.ABSSequentiable>
struct List_1_t0C6BF1E3B166E9D2A63FC3291C519D61B950BFDC;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<DG.Tweening.Tween>
struct List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD;
// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>
struct TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D;
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1;
// DG.Tweening.Core.TweenerCore`3<System.String,System.String,DG.Tweening.Plugins.Options.StringOptions>
struct TweenerCore_3_t390910F1CE8B4737AA72FEED470399C8DBE1AF8B;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>
struct TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.SpiralOptions>
struct TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// DG.Tweening.Plugins.Core.PathCore.ControlPoint[]
struct ControlPointU5BU5D_t52F9D1EC70E441ED3915E30FFB75F9B95AD56C59;
// DG.Tweening.DOTweenAnimation[]
struct DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GradientColorKey[]
struct GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// DG.Tweening.Tween[]
struct TweenU5BU5D_t6E5F58C51FA0DA64C990C1C7E02EE9B70220C2F7;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// DG.Tweening.Core.ABSAnimationComponent
struct ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C;
// DG.Tweening.Plugins.Core.PathCore.ABSPathDecoder
struct ABSPathDecoder_t6B479550CEF6C183ACCA13F11E29E019270AB61C;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F;
// System.Reflection.Assembly
struct Assembly_t;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// DG.Tweening.Plugins.Core.PathCore.CatmullRomDecoder
struct CatmullRomDecoder_tBC93937ED94DB6355B974915EE9885854F1A5EB0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// DG.Tweening.Plugins.Core.PathCore.CubicBezierDecoder
struct CubicBezierDecoder_t58382D9354F3F75F8D6A235E945C013EACD3CC1D;
// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617;
// DG.Tweening.DOTweenAnimation
struct DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DG.Tweening.EaseFunction
struct EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// DG.Tweening.Plugins.Core.PathCore.LinearDecoder
struct LinearDecoder_tC7C53176BBF58227DC1855AFDBA3FAFF19860B15;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// DG.Tweening.Plugins.Core.PathCore.Path
struct Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.ResolveEventHandler
struct ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// DG.Tweening.Sequence
struct Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C;
// DG.Tweening.Plugins.SpiralPlugin
struct SpiralPlugin_t0EC3955D810AAED4713FA63AAEACDA66063B604E;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// DG.Tweening.Tween
struct Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C;
// DG.Tweening.TweenCallback
struct TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24;
// DG.Tweening.Tweener
struct Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140;
// System.Type
struct Type_t;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// DG.Tweening.DOTweenCYInstruction/WaitForCompletion
struct WaitForCompletion_tAB7AA0856589EAB871607AC6F70578EFDED1816A;
// DG.Tweening.DOTweenCYInstruction/WaitForElapsedLoops
struct WaitForElapsedLoops_tFF8E4E7D40D733F6146707809EA8A3F28FC526C7;
// DG.Tweening.DOTweenCYInstruction/WaitForKill
struct WaitForKill_tC61AE96CD4540172B46C9FE9FABEA26675CCE73F;
// DG.Tweening.DOTweenCYInstruction/WaitForPosition
struct WaitForPosition_tF0BCBB4A3B9449099865C65EDAAAD360E2EBAD5F;
// DG.Tweening.DOTweenCYInstruction/WaitForRewind
struct WaitForRewind_t873799FBB04DE3DF4EFA17E667A31070558F0F3F;
// DG.Tweening.DOTweenCYInstruction/WaitForStart
struct WaitForStart_t433A743135D1661E680A8AF21FB2EA42E3454D6E;
// DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t0BC7128A84649A7CEEEACF36F41DA06817654A1B;
// DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t92DEC026B7002B0486BADC6128E6F7B57AC40A92;
// DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tB5F45687C977F70DAF77F838AE9774426652A19C;
// DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t1295D5B080BAB3F595980E470DA1E9BAF1B4967B;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_4_t9AF66ACF00E5AEB0F9B4A06FAEFEA18B2F266BDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DOTweenModuleUtils_t4EBAB398B726A88AED897FA67BD8CD035A214EE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rigidbody_t268697F5A994213ED97393309870968BC1C7393C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpiralPlugin_t0EC3955D810AAED4713FA63AAEACDA66063B604E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TargetType_t44905BCDEEA34D8E3E13EE21AE4AB658D194D877_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_tB5F45687C977F70DAF77F838AE9774426652A19C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t1295D5B080BAB3F595980E470DA1E9BAF1B4967B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_0_t0BC7128A84649A7CEEEACF36F41DA06817654A1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass9_0_t92DEC026B7002B0486BADC6128E6F7B57AC40A92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForCompletion_tAB7AA0856589EAB871607AC6F70578EFDED1816A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForElapsedLoops_tFF8E4E7D40D733F6146707809EA8A3F28FC526C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForKill_tC61AE96CD4540172B46C9FE9FABEA26675CCE73F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForPosition_tF0BCBB4A3B9449099865C65EDAAAD360E2EBAD5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForRewind_t873799FBB04DE3DF4EFA17E667A31070558F0F3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForStart_t433A743135D1661E680A8AF21FB2EA42E3454D6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0D1BA8C0E521925077224DB11A6C93FB8E930E14;
IL2CPP_EXTERN_C String_t* _stringLiteral6696B5BAE2BDB2FB41C480BCA3BEA55217F8CC87;
IL2CPP_EXTERN_C String_t* _stringLiteral71F308FB57202965E618BD0381AEBFDEEDF31F75;
IL2CPP_EXTERN_C String_t* _stringLiteral7BCD07D6842DC528F48EA9D13B36828C4A3980CE;
IL2CPP_EXTERN_C String_t* _stringLiteral852803C0E0511404910B712837FFA455156FC4CE;
IL2CPP_EXTERN_C String_t* _stringLiteral8CCF95ED19A7C10C7DD800A4E0C960CACFE7FF1C;
IL2CPP_EXTERN_C String_t* _stringLiteral95736F87FFB47A6CBA1FAEFC7529C2A3F3EE5E7A;
IL2CPP_EXTERN_C String_t* _stringLiteralD8EA9923B74BD243E764B8F9D62174B9D637CB97;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE2996F43EBFFA914B746B5861EC325951281A3EB;
IL2CPP_EXTERN_C String_t* _stringLiteralF0AD9F8B1A2A2D534505FEA8D4D74C1BFD40753F;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponents_TisDOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_mBD8DF07C7D147339501B59183140B9EF098D3204_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DOTweenAnimation_U3CCreateTweenU3Eb__47_0_mBD3557DDE92EE0029CF11BEFCEC3534AD5A5C283_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DOTween_To_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisSpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D_m5F5B0052265CFE642C737BE4805EE5E79C4ECBCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponents_TisDOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_m95D9515665F9034EBE662B8B4835DB6B2817259B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mBA978C54F180239702014DDD75202F19F926C6C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mEDBC45510C70567B8263CF690D19D50EF22235D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mD88C565C80170105E87BB423C5B2F974840EF90F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m75F3ABB694E26670F021136BD3B9E71A65948BC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Physics_SetOrientationOnPath_m7909652CCC78E77ADE33C5BEB4BFF42AA536A7D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenExtensions_Pause_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m42F0E805CDAC03AC764CBEDE7E2F7C607F6B58CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenExtensions_Play_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m2442DE0FF8CACF03EFB5003191303DBC489F9BF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_From_TisTweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_mC60C392D6D33305FE03E8995161FEEAC84674A95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mE67BCE455C598621EAFC075DFFFAF4167B4E2371_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnKill_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m4CF744A4FBB459014140B0874C75DBC7F87FE913_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnPlay_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m9C9D8B73E053554A7422ED2F1A7B1490AE3F9EB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnRewind_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mB9DF6C423E1258FFF3FD11A7A68D79EE7189DB3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnStart_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m28C40BE2EBE0F617AA3E4827F3614CD952C8DF8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnStepComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mFFA7C039D354B88FCFAD8C72833711A4795FC0FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnUpdate_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m3C099B9F7E199FBB7AF586E353AE96D45AA09D9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetAutoKill_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m1A67DB04ED6B16569A6DC9670F7F1849A5376E21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetDelay_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m301CF7B6B171BF1CF43646D0D760594BC46B1FEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetEase_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m3C5C67CF8DAAA89EE45BD950D622DDC7517DD049_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetEase_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m507E6328745F0217F303765142C237DBA1DF2DA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetEase_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_mC1C697C58AA95DBB9C319A551196170C9082E2C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetId_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mBF22773A2E9D87F70207B32FBCD99108EC365E2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetLoops_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m7F9CA723CCD313DB084E94DF8C80C5F579B509B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetRelative_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m65EE3617250D5AD8873E9873D48962D3634F6483_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetSpeedBased_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mEEE8E789F246C3E180032AE6AE597AD27DA887B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetTarget_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mCEF56ADE6E6FB782E6DED1C3D5E9AEB2309FB0F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetTarget_TisTweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271_mF272823B402CB9764160EFC9736A61E67FAB5905_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetTarget_TisTweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B_m97AA03CAB58B00C4DB34E83C88B972A8916083A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetUpdate_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m172E7B547CCEA4E9DACC2AB397958EFEE67BBF36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CDOSpiralU3Eb__0_m1CCDACC82D59B9DD6DCEEE277BE3D1C410B40CEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CDOSpiralU3Eb__1_m2EA9119E181F78B27E9B32146D9861ABD0C3F7E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CDOSpiralU3Eb__0_mA0C2085BFC6B0541C15180DAD8844FAFBF8E303C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CDOOffsetU3Eb__0_m313F8C26E8A72E7404065072AA78E9C737E35620_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CDOOffsetU3Eb__1_m4E8A169B481398D90A901BAD32A1CC0BDD77BAE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CDOTilingU3Eb__0_m32DCD53537E5D9250D043396A6636431DA4AC5DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CDOTilingU3Eb__1_m586EE9E78A2967588A473314F2E4DDF7852A89A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TargetType_t44905BCDEEA34D8E3E13EE21AE4AB658D194D877_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
struct DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33;
struct GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18;
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.SpiralOptions>
struct ABSTweenPlugin_3_tF7CEB9BBF8FF28D2F3BBF9DB950849DCA238F80C  : public RuntimeObject
{
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<DG.Tweening.Tween>
struct List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TweenU5BU5D_t6E5F58C51FA0DA64C990C1C7E02EE9B70220C2F7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TweenU5BU5D_t6E5F58C51FA0DA64C990C1C7E02EE9B70220C2F7* ___s_emptyArray_5;
};

// DG.Tweening.Core.ABSSequentiable
struct ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89  : public RuntimeObject
{
	// DG.Tweening.TweenType DG.Tweening.Core.ABSSequentiable::tweenType
	int32_t ___tweenType_0;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedPosition
	float ___sequencedPosition_1;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedEndPosition
	float ___sequencedEndPosition_2;
	// DG.Tweening.TweenCallback DG.Tweening.Core.ABSSequentiable::onStart
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStart_3;
};
struct Il2CppArrayBounds;

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// DG.Tweening.DOTweenAnimationExtensions
struct DOTweenAnimationExtensions_t322F12945BA2ABB5DA1E5C986FC693E30DE1D5C6  : public RuntimeObject
{
};

// DG.Tweening.DOTweenCYInstruction
struct DOTweenCYInstruction_tA4AF63644C7A2C3348065F4B77D03F295ECEB714  : public RuntimeObject
{
};

// DG.Tweening.DOTweenModuleUnityVersion
struct DOTweenModuleUnityVersion_t5B110826F7687A34DB1F0F14CB31527F39592BD6  : public RuntimeObject
{
};

// DG.Tweening.DOTweenModuleUtils
struct DOTweenModuleUtils_t4EBAB398B726A88AED897FA67BD8CD035A214EE3  : public RuntimeObject
{
};

struct DOTweenModuleUtils_t4EBAB398B726A88AED897FA67BD8CD035A214EE3_StaticFields
{
	// System.Boolean DG.Tweening.DOTweenModuleUtils::_initialized
	bool ____initialized_0;
};

// DG.Tweening.DOTweenProShortcuts
struct DOTweenProShortcuts_t0DD3C1F28916E0363CF70D8DE3CA7DA4CF7A48A0  : public RuntimeObject
{
};

// DG.Tweening.Core.Debugger
struct Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0  : public RuntimeObject
{
};

struct Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_StaticFields
{
	// System.Int32 DG.Tweening.Core.Debugger::logPriority
	int32_t ___logPriority_0;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t0BC7128A84649A7CEEEACF36F41DA06817654A1B  : public RuntimeObject
{
	// UnityEngine.Material DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass8_0::target
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___target_0;
	// System.Int32 DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass8_0::propertyID
	int32_t ___propertyID_1;
};

// DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t92DEC026B7002B0486BADC6128E6F7B57AC40A92  : public RuntimeObject
{
	// UnityEngine.Material DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass9_0::target
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___target_0;
	// System.Int32 DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass9_0::propertyID
	int32_t ___propertyID_1;
};

// DG.Tweening.DOTweenModuleUtils/Physics
struct Physics_t3980A33E52667EA532B690F369BCC1D76A3A77D7  : public RuntimeObject
{
};

// DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tB5F45687C977F70DAF77F838AE9774426652A19C  : public RuntimeObject
{
	// UnityEngine.Transform DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass1_0::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_0;
};

// DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t1295D5B080BAB3F595980E470DA1E9BAF1B4967B  : public RuntimeObject
{
	// UnityEngine.Rigidbody DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass2_0::target
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___target_0;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39 
{
	// System.Boolean DG.Tweening.Plugins.Options.ColorOptions::alphaOnly
	bool ___alphaOnly_0;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39_marshaled_pinvoke
{
	int32_t ___alphaOnly_0;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39_marshaled_com
{
	int32_t ___alphaOnly_0;
};

// DG.Tweening.Plugins.Options.FloatOptions
struct FloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5 
{
	// System.Boolean DG.Tweening.Plugins.Options.FloatOptions::snapping
	bool ___snapping_0;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.FloatOptions
struct FloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5_marshaled_pinvoke
{
	int32_t ___snapping_0;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.FloatOptions
struct FloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5_marshaled_com
{
	int32_t ___snapping_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Keyframe
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// DG.Tweening.Plugins.Options.RectOptions
struct RectOptions_tCE72F3B850FF80059E448A0ED2AA3FF16EE5EDAC 
{
	// System.Boolean DG.Tweening.Plugins.Options.RectOptions::snapping
	bool ___snapping_0;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.RectOptions
struct RectOptions_tCE72F3B850FF80059E448A0ED2AA3FF16EE5EDAC_marshaled_pinvoke
{
	int32_t ___snapping_0;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.RectOptions
struct RectOptions_tCE72F3B850FF80059E448A0ED2AA3FF16EE5EDAC_marshaled_com
{
	int32_t ___snapping_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// DG.Tweening.Plugins.Options.StringOptions
struct StringOptions_tC70D70DB6854CE62E6BBC3AA066517835919E9FA 
{
	// System.Boolean DG.Tweening.Plugins.Options.StringOptions::richTextEnabled
	bool ___richTextEnabled_0;
	// DG.Tweening.ScrambleMode DG.Tweening.Plugins.Options.StringOptions::scrambleMode
	int32_t ___scrambleMode_1;
	// System.Char[] DG.Tweening.Plugins.Options.StringOptions::scrambledChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___scrambledChars_2;
	// System.Int32 DG.Tweening.Plugins.Options.StringOptions::startValueStrippedLength
	int32_t ___startValueStrippedLength_3;
	// System.Int32 DG.Tweening.Plugins.Options.StringOptions::changeValueStrippedLength
	int32_t ___changeValueStrippedLength_4;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.StringOptions
struct StringOptions_tC70D70DB6854CE62E6BBC3AA066517835919E9FA_marshaled_pinvoke
{
	int32_t ___richTextEnabled_0;
	int32_t ___scrambleMode_1;
	uint8_t* ___scrambledChars_2;
	int32_t ___startValueStrippedLength_3;
	int32_t ___changeValueStrippedLength_4;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.StringOptions
struct StringOptions_tC70D70DB6854CE62E6BBC3AA066517835919E9FA_marshaled_com
{
	int32_t ___richTextEnabled_0;
	int32_t ___scrambleMode_1;
	uint8_t* ___scrambledChars_2;
	int32_t ___startValueStrippedLength_3;
	int32_t ___changeValueStrippedLength_4;
};

// DG.Tweening.Tween
struct Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C  : public ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89
{
	// System.Single DG.Tweening.Tween::timeScale
	float ___timeScale_4;
	// System.Boolean DG.Tweening.Tween::isBackwards
	bool ___isBackwards_5;
	// System.Object DG.Tweening.Tween::id
	RuntimeObject* ___id_6;
	// System.String DG.Tweening.Tween::stringId
	String_t* ___stringId_7;
	// System.Int32 DG.Tweening.Tween::intId
	int32_t ___intId_8;
	// System.Object DG.Tweening.Tween::target
	RuntimeObject* ___target_9;
	// DG.Tweening.UpdateType DG.Tweening.Tween::updateType
	int32_t ___updateType_10;
	// System.Boolean DG.Tweening.Tween::isIndependentUpdate
	bool ___isIndependentUpdate_11;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPlay
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPlay_12;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPause
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPause_13;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onRewind
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onRewind_14;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onUpdate
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onUpdate_15;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onStepComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStepComplete_16;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onComplete_17;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onKill
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onKill_18;
	// DG.Tweening.TweenCallback`1<System.Int32> DG.Tweening.Tween::onWaypointChange
	TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67* ___onWaypointChange_19;
	// System.Boolean DG.Tweening.Tween::isFrom
	bool ___isFrom_20;
	// System.Boolean DG.Tweening.Tween::isBlendable
	bool ___isBlendable_21;
	// System.Boolean DG.Tweening.Tween::isRecyclable
	bool ___isRecyclable_22;
	// System.Boolean DG.Tweening.Tween::isSpeedBased
	bool ___isSpeedBased_23;
	// System.Boolean DG.Tweening.Tween::autoKill
	bool ___autoKill_24;
	// System.Single DG.Tweening.Tween::duration
	float ___duration_25;
	// System.Int32 DG.Tweening.Tween::loops
	int32_t ___loops_26;
	// DG.Tweening.LoopType DG.Tweening.Tween::loopType
	int32_t ___loopType_27;
	// System.Single DG.Tweening.Tween::delay
	float ___delay_28;
	// System.Boolean DG.Tweening.Tween::<isRelative>k__BackingField
	bool ___U3CisRelativeU3Ek__BackingField_29;
	// DG.Tweening.Ease DG.Tweening.Tween::easeType
	int32_t ___easeType_30;
	// DG.Tweening.EaseFunction DG.Tweening.Tween::customEase
	EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04* ___customEase_31;
	// System.Single DG.Tweening.Tween::easeOvershootOrAmplitude
	float ___easeOvershootOrAmplitude_32;
	// System.Single DG.Tweening.Tween::easePeriod
	float ___easePeriod_33;
	// System.Type DG.Tweening.Tween::typeofT1
	Type_t* ___typeofT1_34;
	// System.Type DG.Tweening.Tween::typeofT2
	Type_t* ___typeofT2_35;
	// System.Type DG.Tweening.Tween::typeofTPlugOptions
	Type_t* ___typeofTPlugOptions_36;
	// System.Boolean DG.Tweening.Tween::<active>k__BackingField
	bool ___U3CactiveU3Ek__BackingField_37;
	// System.Boolean DG.Tweening.Tween::isSequenced
	bool ___isSequenced_38;
	// DG.Tweening.Sequence DG.Tweening.Tween::sequenceParent
	Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* ___sequenceParent_39;
	// System.Int32 DG.Tweening.Tween::activeId
	int32_t ___activeId_40;
	// DG.Tweening.Core.Enums.SpecialStartupMode DG.Tweening.Tween::specialStartupMode
	int32_t ___specialStartupMode_41;
	// System.Boolean DG.Tweening.Tween::creationLocked
	bool ___creationLocked_42;
	// System.Boolean DG.Tweening.Tween::startupDone
	bool ___startupDone_43;
	// System.Boolean DG.Tweening.Tween::<playedOnce>k__BackingField
	bool ___U3CplayedOnceU3Ek__BackingField_44;
	// System.Single DG.Tweening.Tween::<position>k__BackingField
	float ___U3CpositionU3Ek__BackingField_45;
	// System.Single DG.Tweening.Tween::fullDuration
	float ___fullDuration_46;
	// System.Int32 DG.Tweening.Tween::completedLoops
	int32_t ___completedLoops_47;
	// System.Boolean DG.Tweening.Tween::isPlaying
	bool ___isPlaying_48;
	// System.Boolean DG.Tweening.Tween::isComplete
	bool ___isComplete_49;
	// System.Single DG.Tweening.Tween::elapsedDelay
	float ___elapsedDelay_50;
	// System.Boolean DG.Tweening.Tween::delayComplete
	bool ___delayComplete_51;
	// System.Int32 DG.Tweening.Tween::miscInt
	int32_t ___miscInt_52;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9 
{
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.VectorOptions::axisConstraint
	int32_t ___axisConstraint_0;
	// System.Boolean DG.Tweening.Plugins.Options.VectorOptions::snapping
	bool ___snapping_1;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_marshaled_pinvoke
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_marshaled_com
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36
struct __StaticArrayInitTypeSizeU3D36_tE3135E025C70F21BBD65107243EE57F8AA699792 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D36_tE3135E025C70F21BBD65107243EE57F8AA699792__padding[36];
	};
};

// DG.Tweening.DOTweenCYInstruction/WaitForCompletion
struct WaitForCompletion_tAB7AA0856589EAB871607AC6F70578EFDED1816A  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// DG.Tweening.Tween DG.Tweening.DOTweenCYInstruction/WaitForCompletion::t
	Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t_0;
};

// DG.Tweening.DOTweenCYInstruction/WaitForElapsedLoops
struct WaitForElapsedLoops_tFF8E4E7D40D733F6146707809EA8A3F28FC526C7  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// DG.Tweening.Tween DG.Tweening.DOTweenCYInstruction/WaitForElapsedLoops::t
	Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t_0;
	// System.Int32 DG.Tweening.DOTweenCYInstruction/WaitForElapsedLoops::elapsedLoops
	int32_t ___elapsedLoops_1;
};

// DG.Tweening.DOTweenCYInstruction/WaitForKill
struct WaitForKill_tC61AE96CD4540172B46C9FE9FABEA26675CCE73F  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// DG.Tweening.Tween DG.Tweening.DOTweenCYInstruction/WaitForKill::t
	Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t_0;
};

// DG.Tweening.DOTweenCYInstruction/WaitForPosition
struct WaitForPosition_tF0BCBB4A3B9449099865C65EDAAAD360E2EBAD5F  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// DG.Tweening.Tween DG.Tweening.DOTweenCYInstruction/WaitForPosition::t
	Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t_0;
	// System.Single DG.Tweening.DOTweenCYInstruction/WaitForPosition::position
	float ___position_1;
};

// DG.Tweening.DOTweenCYInstruction/WaitForRewind
struct WaitForRewind_t873799FBB04DE3DF4EFA17E667A31070558F0F3F  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// DG.Tweening.Tween DG.Tweening.DOTweenCYInstruction/WaitForRewind::t
	Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t_0;
};

// DG.Tweening.DOTweenCYInstruction/WaitForStart
struct WaitForStart_t433A743135D1661E680A8AF21FB2EA42E3454D6E  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// DG.Tweening.Tween DG.Tweening.DOTweenCYInstruction/WaitForStart::t
	Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t_0;
};

// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::58B5C465A713FD4102DD5C1A833DA4332B36756DEB7404B2036FFFA8B123CE85
	__StaticArrayInitTypeSizeU3D36_tE3135E025C70F21BBD65107243EE57F8AA699792 ___58B5C465A713FD4102DD5C1A833DA4332B36756DEB7404B2036FFFA8B123CE85_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::C1C758E48BCC016D599C69ADE88E5E73D4556771FC4DCEBDE219592A21976A4F
	__StaticArrayInitTypeSizeU3D36_tE3135E025C70F21BBD65107243EE57F8AA699792 ___C1C758E48BCC016D599C69ADE88E5E73D4556771FC4DCEBDE219592A21976A4F_1;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.AppDomain::_mono_app_domain
	intptr_t ____mono_app_domain_1;
	// System.Object System.AppDomain::_evidence
	RuntimeObject* ____evidence_6;
	// System.Object System.AppDomain::_granted
	RuntimeObject* ____granted_7;
	// System.Int32 System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42* ___AssemblyLoad_9;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___AssemblyResolve_10;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___DomainUnload_11;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___ProcessExit_12;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ResourceResolve_13;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___TypeResolve_14;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* ___UnhandledException_15;
	// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> System.AppDomain::FirstChanceException
	EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7* ___FirstChanceException_16;
	// System.Object System.AppDomain::_domain_manager
	RuntimeObject* ____domain_manager_17;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ReflectionOnlyAssemblyResolve_18;
	// System.Object System.AppDomain::_activation
	RuntimeObject* ____activation_19;
	// System.Object System.AppDomain::_applicationIdentity
	RuntimeObject* ____applicationIdentity_20;
	// System.Collections.Generic.List`1<System.String> System.AppDomain::compatibility_switch
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};

struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_StaticFields
{
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
};

struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_ThreadStaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___type_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_refonly_5;
};
// Native definition for P/Invoke marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};
// Native definition for COM marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Gradient::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.GradientColorKey
struct GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A 
{
	// UnityEngine.Color UnityEngine.GradientColorKey::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_0;
	// System.Single UnityEngine.GradientColorKey::time
	float ___time_1;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// DG.Tweening.Plugins.Options.PathOptions
struct PathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A 
{
	// DG.Tweening.PathMode DG.Tweening.Plugins.Options.PathOptions::mode
	int32_t ___mode_0;
	// DG.Tweening.Plugins.Options.OrientType DG.Tweening.Plugins.Options.PathOptions::orientType
	int32_t ___orientType_1;
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.PathOptions::lockPositionAxis
	int32_t ___lockPositionAxis_2;
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.PathOptions::lockRotationAxis
	int32_t ___lockRotationAxis_3;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::isClosedPath
	bool ___isClosedPath_4;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Options.PathOptions::lookAtPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lookAtPosition_5;
	// UnityEngine.Transform DG.Tweening.Plugins.Options.PathOptions::lookAtTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___lookAtTransform_6;
	// System.Single DG.Tweening.Plugins.Options.PathOptions::lookAhead
	float ___lookAhead_7;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::hasCustomForwardDirection
	bool ___hasCustomForwardDirection_8;
	// UnityEngine.Quaternion DG.Tweening.Plugins.Options.PathOptions::forward
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___forward_9;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::useLocalPosition
	bool ___useLocalPosition_10;
	// UnityEngine.Transform DG.Tweening.Plugins.Options.PathOptions::parent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent_11;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::isRigidbody
	bool ___isRigidbody_12;
	// UnityEngine.Quaternion DG.Tweening.Plugins.Options.PathOptions::startupRot
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___startupRot_13;
	// System.Single DG.Tweening.Plugins.Options.PathOptions::startupZRot
	float ___startupZRot_14;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::addedExtraStartWp
	bool ___addedExtraStartWp_15;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::addedExtraEndWp
	bool ___addedExtraEndWp_16;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.PathOptions
struct PathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A_marshaled_pinvoke
{
	int32_t ___mode_0;
	int32_t ___orientType_1;
	int32_t ___lockPositionAxis_2;
	int32_t ___lockRotationAxis_3;
	int32_t ___isClosedPath_4;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lookAtPosition_5;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___lookAtTransform_6;
	float ___lookAhead_7;
	int32_t ___hasCustomForwardDirection_8;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___forward_9;
	int32_t ___useLocalPosition_10;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent_11;
	int32_t ___isRigidbody_12;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___startupRot_13;
	float ___startupZRot_14;
	int32_t ___addedExtraStartWp_15;
	int32_t ___addedExtraEndWp_16;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.PathOptions
struct PathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A_marshaled_com
{
	int32_t ___mode_0;
	int32_t ___orientType_1;
	int32_t ___lockPositionAxis_2;
	int32_t ___lockRotationAxis_3;
	int32_t ___isClosedPath_4;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lookAtPosition_5;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___lookAtTransform_6;
	float ___lookAhead_7;
	int32_t ___hasCustomForwardDirection_8;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___forward_9;
	int32_t ___useLocalPosition_10;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent_11;
	int32_t ___isRigidbody_12;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___startupRot_13;
	float ___startupZRot_14;
	int32_t ___addedExtraStartWp_15;
	int32_t ___addedExtraEndWp_16;
};

// DG.Tweening.Plugins.Options.QuaternionOptions
struct QuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718 
{
	// DG.Tweening.RotateMode DG.Tweening.Plugins.Options.QuaternionOptions::rotateMode
	int32_t ___rotateMode_0;
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.QuaternionOptions::axisConstraint
	int32_t ___axisConstraint_1;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Options.QuaternionOptions::up
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up_2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// DG.Tweening.Sequence
struct Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C  : public Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C
{
	// System.Collections.Generic.List`1<DG.Tweening.Tween> DG.Tweening.Sequence::sequencedTweens
	List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD* ___sequencedTweens_53;
	// System.Collections.Generic.List`1<DG.Tweening.Core.ABSSequentiable> DG.Tweening.Sequence::_sequencedObjs
	List_1_t0C6BF1E3B166E9D2A63FC3291C519D61B950BFDC* ____sequencedObjs_54;
	// System.Single DG.Tweening.Sequence::lastTweenInsertTime
	float ___lastTweenInsertTime_55;
};

// DG.Tweening.Plugins.SpiralOptions
struct SpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D 
{
	// System.Single DG.Tweening.Plugins.SpiralOptions::depth
	float ___depth_0;
	// System.Single DG.Tweening.Plugins.SpiralOptions::frequency
	float ___frequency_1;
	// System.Single DG.Tweening.Plugins.SpiralOptions::speed
	float ___speed_2;
	// DG.Tweening.SpiralMode DG.Tweening.Plugins.SpiralOptions::mode
	int32_t ___mode_3;
	// System.Boolean DG.Tweening.Plugins.SpiralOptions::snapping
	bool ___snapping_4;
	// System.Single DG.Tweening.Plugins.SpiralOptions::unit
	float ___unit_5;
	// UnityEngine.Quaternion DG.Tweening.Plugins.SpiralOptions::axisQ
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___axisQ_6;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.SpiralOptions
struct SpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D_marshaled_pinvoke
{
	float ___depth_0;
	float ___frequency_1;
	float ___speed_2;
	int32_t ___mode_3;
	int32_t ___snapping_4;
	float ___unit_5;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___axisQ_6;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.SpiralOptions
struct SpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D_marshaled_com
{
	float ___depth_0;
	float ___frequency_1;
	float ___speed_2;
	int32_t ___mode_3;
	int32_t ___snapping_4;
	float ___unit_5;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___axisQ_6;
};

// DG.Tweening.Plugins.SpiralPlugin
struct SpiralPlugin_t0EC3955D810AAED4713FA63AAEACDA66063B604E  : public ABSTweenPlugin_3_tF7CEB9BBF8FF28D2F3BBF9DB950849DCA238F80C
{
};

struct SpiralPlugin_t0EC3955D810AAED4713FA63AAEACDA66063B604E_StaticFields
{
	// UnityEngine.Vector3 DG.Tweening.Plugins.SpiralPlugin::DefaultDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___DefaultDirection_0;
};

// DG.Tweening.Tweener
struct Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140  : public Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C
{
	// System.Boolean DG.Tweening.Tweener::hasManuallySetStartValue
	bool ___hasManuallySetStartValue_53;
	// System.Boolean DG.Tweening.Tweener::isFromAllowed
	bool ___isFromAllowed_54;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___startValue_55;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue_56;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___changeValue_57;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39 ___plugOptions_58;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t4DFFF7454A1BCD259676FED36CCF2114E34B5B95* ___getter_59;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t5E2B8A5C7040616545D7D029D20C4BF5F3E6DA89* ___setter_60;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tC26278B0CA053BAF4547345679D3E8D1F748AC12* ___tweenPlugin_61;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue_55;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue_56;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___changeValue_57;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	QuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718 ___plugOptions_58;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_tB89DD12456B8E79576BB70E1CA6DF899686410D3* ___getter_59;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t9EFF8DD70A15F455A6FE698A22BD0FE9683AC28E* ___setter_60;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t3823C0F935A3168B9E48DC90ABD9A0CED3D7BB82* ___tweenPlugin_61;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>
struct TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___startValue_55;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___endValue_56;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___changeValue_57;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	RectOptions_tCE72F3B850FF80059E448A0ED2AA3FF16EE5EDAC ___plugOptions_58;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t64F1C0E113DC45CC9A1FD194A80B7B4C40AC4923* ___getter_59;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t1682EBCD9936CA04E27CEC6CFD3F7C8CD8584CDD* ___setter_60;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tA51581359A1B697A7A0A8F2FFDE00794FA1E67F4* ___tweenPlugin_61;
};

// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	float ___startValue_55;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	float ___endValue_56;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	float ___changeValue_57;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	FloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5 ___plugOptions_58;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_tE8B39477E96408653D0242624F4D7E48ABFD1B03* ___getter_59;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t48D41DB8CE0BFC91A1844C4CC49A8A7222A69200* ___setter_60;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t60F4DE5120CFD5986925189A0E775FAEAB4C59B9* ___tweenPlugin_61;
};

// DG.Tweening.Core.TweenerCore`3<System.String,System.String,DG.Tweening.Plugins.Options.StringOptions>
struct TweenerCore_3_t390910F1CE8B4737AA72FEED470399C8DBE1AF8B  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	String_t* ___startValue_55;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	String_t* ___endValue_56;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	String_t* ___changeValue_57;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	StringOptions_tC70D70DB6854CE62E6BBC3AA066517835919E9FA ___plugOptions_58;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t65A2B66606014CD7EFBA1D8DDD1273F57511D146* ___getter_59;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t999572008E4C4CFE5EF6FA70393F8B092CA8C438* ___setter_60;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tE7EF56C4695649256BA2077D8E447E739C869256* ___tweenPlugin_61;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startValue_55;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endValue_56;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___changeValue_57;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9 ___plugOptions_58;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66* ___getter_59;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C* ___setter_60;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t4082710A2BB933E2D055E454B3EFAC4C0A319444* ___tweenPlugin_61;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>
struct TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* ___startValue_55;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* ___endValue_56;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* ___changeValue_57;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	PathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A ___plugOptions_58;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* ___getter_59;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358* ___setter_60;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t08B14BED068ACE348E543E45725D6C6BFFA60143* ___tweenPlugin_61;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.SpiralOptions>
struct TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue_55;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue_56;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___changeValue_57;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	SpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D ___plugOptions_58;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* ___getter_59;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358* ___setter_60;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tF7CEB9BBF8FF28D2F3BBF9DB950849DCA238F80C* ___tweenPlugin_61;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue_55;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue_56;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___changeValue_57;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9 ___plugOptions_58;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* ___getter_59;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358* ___setter_60;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7* ___tweenPlugin_61;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// DG.Tweening.Plugins.Core.PathCore.Path
struct Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3  : public RuntimeObject
{
	// System.Single[] DG.Tweening.Plugins.Core.PathCore.Path::wpLengths
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___wpLengths_3;
	// DG.Tweening.PathType DG.Tweening.Plugins.Core.PathCore.Path::type
	int32_t ___type_4;
	// System.Int32 DG.Tweening.Plugins.Core.PathCore.Path::subdivisionsXSegment
	int32_t ___subdivisionsXSegment_5;
	// System.Int32 DG.Tweening.Plugins.Core.PathCore.Path::subdivisions
	int32_t ___subdivisions_6;
	// UnityEngine.Vector3[] DG.Tweening.Plugins.Core.PathCore.Path::wps
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___wps_7;
	// DG.Tweening.Plugins.Core.PathCore.ControlPoint[] DG.Tweening.Plugins.Core.PathCore.Path::controlPoints
	ControlPointU5BU5D_t52F9D1EC70E441ED3915E30FFB75F9B95AD56C59* ___controlPoints_8;
	// System.Single DG.Tweening.Plugins.Core.PathCore.Path::length
	float ___length_9;
	// System.Boolean DG.Tweening.Plugins.Core.PathCore.Path::isFinalized
	bool ___isFinalized_10;
	// System.Single[] DG.Tweening.Plugins.Core.PathCore.Path::timesTable
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___timesTable_11;
	// System.Single[] DG.Tweening.Plugins.Core.PathCore.Path::lengthsTable
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___lengthsTable_12;
	// System.Int32 DG.Tweening.Plugins.Core.PathCore.Path::linearWPIndex
	int32_t ___linearWPIndex_13;
	// System.Boolean DG.Tweening.Plugins.Core.PathCore.Path::addedExtraStartWp
	bool ___addedExtraStartWp_14;
	// System.Boolean DG.Tweening.Plugins.Core.PathCore.Path::addedExtraEndWp
	bool ___addedExtraEndWp_15;
	// DG.Tweening.Plugins.Core.PathCore.Path DG.Tweening.Plugins.Core.PathCore.Path::_incrementalClone
	Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* ____incrementalClone_16;
	// System.Int32 DG.Tweening.Plugins.Core.PathCore.Path::_incrementalIndex
	int32_t ____incrementalIndex_17;
	// DG.Tweening.Plugins.Core.PathCore.ABSPathDecoder DG.Tweening.Plugins.Core.PathCore.Path::_decoder
	ABSPathDecoder_t6B479550CEF6C183ACCA13F11E29E019270AB61C* ____decoder_18;
	// System.Boolean DG.Tweening.Plugins.Core.PathCore.Path::_changed
	bool ____changed_19;
	// UnityEngine.Vector3[] DG.Tweening.Plugins.Core.PathCore.Path::nonLinearDrawWps
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___nonLinearDrawWps_20;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Core.PathCore.Path::targetPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition_21;
	// System.Nullable`1<UnityEngine.Vector3> DG.Tweening.Plugins.Core.PathCore.Path::lookAtPosition
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___lookAtPosition_22;
	// UnityEngine.Color DG.Tweening.Plugins.Core.PathCore.Path::gizmoColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___gizmoColor_23;
};

struct Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3_StaticFields
{
	// DG.Tweening.Plugins.Core.PathCore.CatmullRomDecoder DG.Tweening.Plugins.Core.PathCore.Path::_catmullRomDecoder
	CatmullRomDecoder_tBC93937ED94DB6355B974915EE9885854F1A5EB0* ____catmullRomDecoder_0;
	// DG.Tweening.Plugins.Core.PathCore.LinearDecoder DG.Tweening.Plugins.Core.PathCore.Path::_linearDecoder
	LinearDecoder_tC7C53176BBF58227DC1855AFDBA3FAFF19860B15* ____linearDecoder_1;
	// DG.Tweening.Plugins.Core.PathCore.CubicBezierDecoder DG.Tweening.Plugins.Core.PathCore.Path::_cubicBezierDecoder
	CubicBezierDecoder_t58382D9354F3F75F8D6A235E945C013EACD3CC1D* ____cubicBezierDecoder_2;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Action`1<DG.Tweening.DOTweenAnimation>
struct Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`4<DG.Tweening.Plugins.Options.PathOptions,DG.Tweening.Tween,UnityEngine.Quaternion,UnityEngine.Transform>
struct Action_4_t9AF66ACF00E5AEB0F9B4A06FAEFEA18B2F266BDB  : public MulticastDelegate_t
{
};

// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector2>
struct DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66  : public MulticastDelegate_t
{
};

// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338  : public MulticastDelegate_t
{
};

// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector2>
struct DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C  : public MulticastDelegate_t
{
};

// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// DG.Tweening.TweenCallback
struct TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// DG.Tweening.Core.ABSAnimationComponent
struct ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// DG.Tweening.UpdateType DG.Tweening.Core.ABSAnimationComponent::updateType
	int32_t ___updateType_4;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::isSpeedBased
	bool ___isSpeedBased_5;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnStart
	bool ___hasOnStart_6;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnPlay
	bool ___hasOnPlay_7;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnUpdate
	bool ___hasOnUpdate_8;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnStepComplete
	bool ___hasOnStepComplete_9;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnComplete
	bool ___hasOnComplete_10;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnTweenCreated
	bool ___hasOnTweenCreated_11;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnRewind
	bool ___hasOnRewind_12;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onStart
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onStart_13;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onPlay
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onPlay_14;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onUpdate
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onUpdate_15;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onStepComplete
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onStepComplete_16;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onComplete
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onComplete_17;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onTweenCreated
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onTweenCreated_18;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onRewind
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onRewind_19;
	// DG.Tweening.Tween DG.Tweening.Core.ABSAnimationComponent::tween
	Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___tween_20;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// DG.Tweening.DOTweenAnimation
struct DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89  : public ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C
{
	// System.Boolean DG.Tweening.DOTweenAnimation::targetIsSelf
	bool ___targetIsSelf_22;
	// UnityEngine.GameObject DG.Tweening.DOTweenAnimation::targetGO
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetGO_23;
	// System.Boolean DG.Tweening.DOTweenAnimation::tweenTargetIsTargetGO
	bool ___tweenTargetIsTargetGO_24;
	// System.Single DG.Tweening.DOTweenAnimation::delay
	float ___delay_25;
	// System.Single DG.Tweening.DOTweenAnimation::duration
	float ___duration_26;
	// DG.Tweening.Ease DG.Tweening.DOTweenAnimation::easeType
	int32_t ___easeType_27;
	// UnityEngine.AnimationCurve DG.Tweening.DOTweenAnimation::easeCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___easeCurve_28;
	// DG.Tweening.LoopType DG.Tweening.DOTweenAnimation::loopType
	int32_t ___loopType_29;
	// System.Int32 DG.Tweening.DOTweenAnimation::loops
	int32_t ___loops_30;
	// System.String DG.Tweening.DOTweenAnimation::id
	String_t* ___id_31;
	// System.Boolean DG.Tweening.DOTweenAnimation::isRelative
	bool ___isRelative_32;
	// System.Boolean DG.Tweening.DOTweenAnimation::isFrom
	bool ___isFrom_33;
	// System.Boolean DG.Tweening.DOTweenAnimation::isIndependentUpdate
	bool ___isIndependentUpdate_34;
	// System.Boolean DG.Tweening.DOTweenAnimation::autoKill
	bool ___autoKill_35;
	// System.Boolean DG.Tweening.DOTweenAnimation::isActive
	bool ___isActive_36;
	// System.Boolean DG.Tweening.DOTweenAnimation::isValid
	bool ___isValid_37;
	// UnityEngine.Component DG.Tweening.DOTweenAnimation::target
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___target_38;
	// DG.Tweening.DOTweenAnimation/AnimationType DG.Tweening.DOTweenAnimation::animationType
	int32_t ___animationType_39;
	// DG.Tweening.DOTweenAnimation/TargetType DG.Tweening.DOTweenAnimation::targetType
	int32_t ___targetType_40;
	// DG.Tweening.DOTweenAnimation/TargetType DG.Tweening.DOTweenAnimation::forcedTargetType
	int32_t ___forcedTargetType_41;
	// System.Boolean DG.Tweening.DOTweenAnimation::autoPlay
	bool ___autoPlay_42;
	// System.Boolean DG.Tweening.DOTweenAnimation::useTargetAsV3
	bool ___useTargetAsV3_43;
	// System.Single DG.Tweening.DOTweenAnimation::endValueFloat
	float ___endValueFloat_44;
	// UnityEngine.Vector3 DG.Tweening.DOTweenAnimation::endValueV3
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValueV3_45;
	// UnityEngine.Vector2 DG.Tweening.DOTweenAnimation::endValueV2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endValueV2_46;
	// UnityEngine.Color DG.Tweening.DOTweenAnimation::endValueColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValueColor_47;
	// System.String DG.Tweening.DOTweenAnimation::endValueString
	String_t* ___endValueString_48;
	// UnityEngine.Rect DG.Tweening.DOTweenAnimation::endValueRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___endValueRect_49;
	// UnityEngine.Transform DG.Tweening.DOTweenAnimation::endValueTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___endValueTransform_50;
	// System.Boolean DG.Tweening.DOTweenAnimation::optionalBool0
	bool ___optionalBool0_51;
	// System.Single DG.Tweening.DOTweenAnimation::optionalFloat0
	float ___optionalFloat0_52;
	// System.Int32 DG.Tweening.DOTweenAnimation::optionalInt0
	int32_t ___optionalInt0_53;
	// DG.Tweening.RotateMode DG.Tweening.DOTweenAnimation::optionalRotationMode
	int32_t ___optionalRotationMode_54;
	// DG.Tweening.ScrambleMode DG.Tweening.DOTweenAnimation::optionalScrambleMode
	int32_t ___optionalScrambleMode_55;
	// System.String DG.Tweening.DOTweenAnimation::optionalString
	String_t* ___optionalString_56;
	// System.Boolean DG.Tweening.DOTweenAnimation::_tweenCreated
	bool ____tweenCreated_57;
	// System.Int32 DG.Tweening.DOTweenAnimation::_playCount
	int32_t ____playCount_58;
};

struct DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_StaticFields
{
	// System.Action`1<DG.Tweening.DOTweenAnimation> DG.Tweening.DOTweenAnimation::OnReset
	Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542* ___OnReset_21;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GradientColorKey[]
struct GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18  : public RuntimeArray
{
	ALIGN_FIELD (8) GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A m_Items[1];

	inline GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A value)
	{
		m_Items[index] = value;
	}
};
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339  : public RuntimeArray
{
	ALIGN_FIELD (8) Assembly_t* m_Items[1];

	inline Assembly_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Assembly_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Assembly_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Assembly_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Assembly_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Assembly_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// DG.Tweening.DOTweenAnimation[]
struct DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33  : public RuntimeArray
{
	ALIGN_FIELD (8) DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* m_Items[1];

	inline DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3  : public RuntimeArray
{
	ALIGN_FIELD (8) Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 m_Items[1];

	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T DG.Tweening.TweenSettingsExtensions::SetEase<System.Object>(T,DG.Tweening.Ease)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetEase_TisRuntimeObject_m1889AEFA8CEF7472F2F292AA8DED9CE4AADB35CF_gshared (RuntimeObject* ___t0, int32_t ___ease1, const RuntimeMethod* method) ;
// System.Void DG.Tweening.Core.DOGetter`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOGetter_1__ctor_m718AE8DCD0734283AD4D7B50ABBA14ED1F4A967C_gshared (DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void DG.Tweening.Core.DOSetter`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOSetter_1__ctor_m5034440D649E86F21337C9E4B543B0C6E97A058A_gshared (DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetTarget<System.Object>(T,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetTarget_TisRuntimeObject_mCF848380E6792301099B777BD786D24C155EDFE5_gshared (RuntimeObject* ___t0, RuntimeObject* ___target1, const RuntimeMethod* method) ;
// System.Void System.Action`4<DG.Tweening.Plugins.Options.PathOptions,System.Object,UnityEngine.Quaternion,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_4__ctor_m266C04792B8C202EC0192F907A979FCFE314190E_gshared (Action_4_t46555725CCAEEC44DC0F0A9AEDCEFE0867EE0B85* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::From<System.Object>(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_From_TisRuntimeObject_m18F9FB66E1E1400083082A2DD5378B9B9DF379F3_gshared (RuntimeObject* ___t0, bool ___isRelative1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetRelative<System.Object>(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetRelative_TisRuntimeObject_mA5D7BA78B5523DC9FD8FB8E0B16DE48ACD1EE936_gshared (RuntimeObject* ___t0, bool ___isRelative1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetDelay<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetDelay_TisRuntimeObject_m445C871C485F006B4A7FB7A4F6CF5A72FBC4D413_gshared (RuntimeObject* ___t0, float ___delay1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetLoops<System.Object>(T,System.Int32,DG.Tweening.LoopType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetLoops_TisRuntimeObject_m55DE4F0E60F0EF4B3868810B0DAE90931E0111D9_gshared (RuntimeObject* ___t0, int32_t ___loops1, int32_t ___loopType2, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetAutoKill<System.Object>(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetAutoKill_TisRuntimeObject_m1C8E72C53CBD98A9746DDA001A56721DEC3B2DC7_gshared (RuntimeObject* ___t0, bool ___autoKillOnCompletion1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnKill<System.Object>(T,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_OnKill_TisRuntimeObject_m079FD49FE122B593A452FD7E3E79EEA002D14F51_gshared (RuntimeObject* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetSpeedBased<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetSpeedBased_TisRuntimeObject_mBE3F75D4A5DCF47CD9781E41C999D6CD22BDFE6A_gshared (RuntimeObject* ___t0, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetEase<System.Object>(T,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetEase_TisRuntimeObject_m0BE19CC2AB8DA24EA038AEDFBC2FC8E4F85028AF_gshared (RuntimeObject* ___t0, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___animCurve1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetId<System.Object>(T,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetId_TisRuntimeObject_m7E4EB197FE74BB8372CBFCB7515734502D0FF1EF_gshared (RuntimeObject* ___t0, String_t* ___stringId1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetUpdate<System.Object>(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetUpdate_TisRuntimeObject_m036B5BAF7D6315B9E0B7AD0CBBD7CFEEC6CED946_gshared (RuntimeObject* ___t0, bool ___isIndependentUpdate1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnStart<System.Object>(T,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_OnStart_TisRuntimeObject_m520A807423D9F89B8401A562D0941BAC0060C802_gshared (RuntimeObject* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnPlay<System.Object>(T,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_OnPlay_TisRuntimeObject_mC55B79E4F8FE235150C56AD18BB4F0BE89303A53_gshared (RuntimeObject* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnUpdate<System.Object>(T,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_OnUpdate_TisRuntimeObject_mF0B0740A5477A406F974C728C8BD308A66AB3454_gshared (RuntimeObject* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnStepComplete<System.Object>(T,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_OnStepComplete_TisRuntimeObject_mABBA37B39BAEA8692DABC0685E66A09AD4027118_gshared (RuntimeObject* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnComplete<System.Object>(T,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_OnComplete_TisRuntimeObject_mF076A1EB869F2F1DB7365AA7D12490B715428668_gshared (RuntimeObject* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnRewind<System.Object>(T,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_OnRewind_TisRuntimeObject_mFC28C9C8819AEBD5D764B68193A0AE9ACB81B246_gshared (RuntimeObject* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenExtensions::Play<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenExtensions_Play_TisRuntimeObject_m9C5B8B16699BA91E6605510B84969F71F944D46F_gshared (RuntimeObject* ___t0, const RuntimeMethod* method) ;
// T DG.Tweening.TweenExtensions::Pause<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenExtensions_Pause_TisRuntimeObject_m8B72FD21DD2AB12230B9B80A043E47E51B6944B6_gshared (RuntimeObject* ___t0, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponents_TisRuntimeObject_m1654344F5C897CA86F9AB51530972086BDB05948_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Vector3>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_gshared_inline (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.Vector3>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Nullable_1_GetValueOrDefault_mD88C565C80170105E87BB423C5B2F974840EF90F_gshared_inline (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.Vector3>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m75F3ABB694E26670F021136BD3B9E71A65948BC2_gshared (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOGetter_1__ctor_m59C11B3FE64C69454BE28721314FD6189629F27E_gshared (DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOSetter_1__ctor_m9E67232146D149892F1946395AD1B6B1C53F3B60_gshared (DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.Vector3>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792_gshared (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.DOTween::To<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.SpiralOptions>(DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions>,DG.Tweening.Core.DOGetter`1<T1>,DG.Tweening.Core.DOSetter`1<T1>,T2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B* DOTween_To_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisSpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D_m5F5B0052265CFE642C737BE4805EE5E79C4ECBCF_gshared (ABSTweenPlugin_3_tF7CEB9BBF8FF28D2F3BBF9DB950849DCA238F80C* ___plugin0, DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* ___getter1, DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358* ___setter2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue3, float ___duration4, const RuntimeMethod* method) ;

// DG.Tweening.Sequence DG.Tweening.DOTween::Sequence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* DOTween_Sequence_m57CE12901581E3C5832EAFFB11C1417270E01754 (const RuntimeMethod* method) ;
// UnityEngine.GradientColorKey[] UnityEngine.Gradient::get_colorKeys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* Gradient_get_colorKeys_mA4B24805A35BC4FBF04F182FCDA6E9D0CBB52F0A (Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Single DG.Tweening.TweenExtensions::Duration(DG.Tweening.Tween,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenExtensions_Duration_mE3774FA4E56156515AC760676415731933DC1D79 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, bool ___includeLoops1, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.ShortcutExtensions::DOColor(UnityEngine.Material,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* ShortcutExtensions_DOColor_mCDBC01E948BEF650617C7883545210478198AEEA (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___target0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetEase<DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>>(T,DG.Tweening.Ease)
inline TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* TweenSettingsExtensions_SetEase_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_mC1C697C58AA95DBB9C319A551196170C9082E2C3 (TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* ___t0, int32_t ___ease1, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* (*) (TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3*, int32_t, const RuntimeMethod*))TweenSettingsExtensions_SetEase_TisRuntimeObject_m1889AEFA8CEF7472F2F292AA8DED9CE4AADB35CF_gshared)(___t0, ___ease1, method);
}
// DG.Tweening.Sequence DG.Tweening.TweenSettingsExtensions::Append(DG.Tweening.Sequence,DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* TweenSettingsExtensions_Append_mB8CDE24E0410A61DA0D5AD083F8047C18AED3D68 (Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* ___s0, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.ShortcutExtensions::DOColor(UnityEngine.Material,UnityEngine.Color,System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* ShortcutExtensions_DOColor_m1DEFCA17E6F4C13304B157E8A38572654CF0FD6E (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___target0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue1, String_t* ___property2, float ___duration3, const RuntimeMethod* method) ;
// System.Boolean DG.Tweening.Tween::get_active()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* __this, const RuntimeMethod* method) ;
// System.Void DG.Tweening.Core.Debugger::LogInvalidTween(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_LogInvalidTween_mAFC797931C9804682F44DADE89781FFF5373FE38 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenCYInstruction/WaitForCompletion::.ctor(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForCompletion__ctor_m194FFB6935EC44D8EBF9596755B410A7F3CAECDA (WaitForCompletion_tAB7AA0856589EAB871607AC6F70578EFDED1816A* __this, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___tween0, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenCYInstruction/WaitForRewind::.ctor(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForRewind__ctor_m8FA908A77DFFAACB814B717915EAFBDA10B2FB36 (WaitForRewind_t873799FBB04DE3DF4EFA17E667A31070558F0F3F* __this, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___tween0, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenCYInstruction/WaitForKill::.ctor(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForKill__ctor_m13C20AC2C9C2809AD51B8CEA30F11AACB4ECC64C (WaitForKill_tC61AE96CD4540172B46C9FE9FABEA26675CCE73F* __this, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___tween0, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenCYInstruction/WaitForElapsedLoops::.ctor(DG.Tweening.Tween,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForElapsedLoops__ctor_mA2399269DDE36055552944650E8862464AAFF448 (WaitForElapsedLoops_tFF8E4E7D40D733F6146707809EA8A3F28FC526C7* __this, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___tween0, int32_t ___elapsedLoops1, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenCYInstruction/WaitForPosition::.ctor(DG.Tweening.Tween,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForPosition__ctor_m218039DD8AEC82CDB8BF269764EC8566A4E01F6F (WaitForPosition_tF0BCBB4A3B9449099865C65EDAAAD360E2EBAD5F* __this, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___tween0, float ___position1, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenCYInstruction/WaitForStart::.ctor(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForStart__ctor_m733FFDFE0C36F20AA645593347BDAA8D0610D508 (WaitForStart_t433A743135D1661E680A8AF21FB2EA42E3454D6E* __this, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___tween0, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m4E9AD608BFA5058EA275819037B5EE4E384311AA (U3CU3Ec__DisplayClass8_0_t0BC7128A84649A7CEEEACF36F41DA06817654A1B* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Material::HasProperty(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_HasProperty_m52E2D3BC3049B8B228149E023CD73C34B05A5222 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___nameID0, const RuntimeMethod* method) ;
// System.Void DG.Tweening.Core.Debugger::LogMissingMaterialProperty(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_LogMissingMaterialProperty_m75067D6FDE153CE6A7EB324AD8AE3EF88E94635F (int32_t ___propertyId0, const RuntimeMethod* method) ;
// System.Void DG.Tweening.Core.DOGetter`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
inline void DOGetter_1__ctor_m718AE8DCD0734283AD4D7B50ABBA14ED1F4A967C (DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66*, RuntimeObject*, intptr_t, const RuntimeMethod*))DOGetter_1__ctor_m718AE8DCD0734283AD4D7B50ABBA14ED1F4A967C_gshared)(__this, ___object0, ___method1, method);
}
// System.Void DG.Tweening.Core.DOSetter`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
inline void DOSetter_1__ctor_m5034440D649E86F21337C9E4B543B0C6E97A058A (DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C*, RuntimeObject*, intptr_t, const RuntimeMethod*))DOSetter_1__ctor_m5034440D649E86F21337C9E4B543B0C6E97A058A_gshared)(__this, ___object0, ___method1, method);
}
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTween::To(DG.Tweening.Core.DOGetter`1<UnityEngine.Vector2>,DG.Tweening.Core.DOSetter`1<UnityEngine.Vector2>,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* DOTween_To_mF215C7DB648587734BECEEBB7D450C69536A9E16 (DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66* ___getter0, DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C* ___setter1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endValue2, float ___duration3, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetTarget<DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>>(T,System.Object)
inline TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* TweenSettingsExtensions_SetTarget_TisTweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271_mF272823B402CB9764160EFC9736A61E67FAB5905 (TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* ___t0, RuntimeObject* ___target1, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* (*) (TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271*, RuntimeObject*, const RuntimeMethod*))TweenSettingsExtensions_SetTarget_TisRuntimeObject_mCF848380E6792301099B777BD786D24C155EDFE5_gshared)(___t0, ___target1, method);
}
// System.Void DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m34A953C85477B2BD1B635BDAF8885267ACDAFEEA (U3CU3Ec__DisplayClass9_0_t92DEC026B7002B0486BADC6128E6F7B57AC40A92* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Material::GetTextureOffset(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Material_GetTextureOffset_m184386CB88C6333F160E869ACDC1738DB8269412 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___nameID0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTextureOffset(System.Int32,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTextureOffset_mB28E782AE9F9B4CB9D36F209C976F8A0FE7DF747 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___nameID0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Material::GetTextureScale(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Material_GetTextureScale_m18C0A99FD39A562A8C776265419D381012FE1FB3 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___nameID0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTextureScale(System.Int32,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTextureScale_mBA092A3DCD393695B32801FD05F70A8CC58CB89D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, int32_t ___nameID0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value1, const RuntimeMethod* method) ;
// System.Boolean DG.Tweening.TweenExtensions::IsComplete(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenExtensions_IsComplete_mCB9C775CFE13C8F43A5AD89A171D7A65DD1470AF (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, const RuntimeMethod* method) ;
// System.Void UnityEngine.CustomYieldInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50 (CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617* __this, const RuntimeMethod* method) ;
// System.Boolean DG.Tweening.Tween::get_playedOnce()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Tween_get_playedOnce_mDA42B6964058549DB8BBC9217DBBB2F0EB67A335_inline (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* __this, const RuntimeMethod* method) ;
// System.Single DG.Tweening.Tween::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Tween_get_position_mF8A2FF9C0DA291DEC595AC8C00E2E096A009B5A8_inline (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* __this, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.TweenExtensions::CompletedLoops(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TweenExtensions_CompletedLoops_m253FC273A466CFE503310EC5600F9CF2893E9010 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, const RuntimeMethod* method) ;
// System.Void System.Action`4<DG.Tweening.Plugins.Options.PathOptions,DG.Tweening.Tween,UnityEngine.Quaternion,UnityEngine.Transform>::.ctor(System.Object,System.IntPtr)
inline void Action_4__ctor_mE887FA5D76A46664CDCF21964B144098A77B4DD5 (Action_4_t9AF66ACF00E5AEB0F9B4A06FAEFEA18B2F266BDB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_4_t9AF66ACF00E5AEB0F9B4A06FAEFEA18B2F266BDB*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_4__ctor_m266C04792B8C202EC0192F907A979FCFE314190E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void DG.Tweening.Core.DOTweenExternalCommand::add_SetOrientationOnPath(System.Action`4<DG.Tweening.Plugins.Options.PathOptions,DG.Tweening.Tween,UnityEngine.Quaternion,UnityEngine.Transform>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenExternalCommand_add_SetOrientationOnPath_mF54FD2C2EA761742914CC491054EF011BE2A6C17 (Action_4_t9AF66ACF00E5AEB0F9B4A06FAEFEA18B2F266BDB* ___value0, const RuntimeMethod* method) ;
// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* AppDomain_get_CurrentDomain_m5085B6AF21A19506C85E0650C46BE35A18011CFE (const RuntimeMethod* method) ;
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249 (AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231 (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_rotation_mF2FC85A4A26AD9FED7DE0061889DF5A408461A5D (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.DOTweenModulePhysics::DOPath(UnityEngine.Rigidbody,DG.Tweening.Plugins.Core.PathCore.Path,System.Single,DG.Tweening.PathMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* DOTweenModulePhysics_DOPath_m420764C2597301E7048F11600713705AD0DADC1A (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___target0, Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* ___path1, float ___duration2, int32_t ___pathMode3, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.DOTweenModulePhysics::DOLocalPath(UnityEngine.Rigidbody,DG.Tweening.Plugins.Core.PathCore.Path,System.Single,DG.Tweening.PathMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* DOTweenModulePhysics_DOLocalPath_m720A2CA6D647E4D8AAA386F83F4FE96E08C73082 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___target0, Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* ___path1, float ___duration2, int32_t ___pathMode3, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.ShortcutExtensions::DOPath(UnityEngine.Transform,DG.Tweening.Plugins.Core.PathCore.Path,System.Single,DG.Tweening.PathMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* ShortcutExtensions_DOPath_mC553183F6D3166B6A080C77FDEC1F7208E20D48C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* ___path1, float ___duration2, int32_t ___pathMode3, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.ShortcutExtensions::DOLocalPath(UnityEngine.Transform,DG.Tweening.Plugins.Core.PathCore.Path,System.Single,DG.Tweening.PathMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* ShortcutExtensions_DOLocalPath_m35A57A613EB260260F5825CA4F34EFFA8731C315 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* ___path1, float ___duration2, int32_t ___pathMode3, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Action`1<DG.Tweening.DOTweenAnimation>::Invoke(T)
inline void Action_1_Invoke_mD6928EDD89A12A4CE935F3D87485A923CDB06521_inline (Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542* __this, DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542*, DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void DG.Tweening.DOTweenAnimation::CreateTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_CreateTween_m91F4DAB080F554854AF7953DC7EF81409098F8F2 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenAnimation::Dispatch_OnReset(DG.Tweening.DOTweenAnimation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_Dispatch_OnReset_m9EB81885C06EAC1DB8153F1E9BACFDC1A36CF0B1 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* ___anim0, const RuntimeMethod* method) ;
// System.Boolean DG.Tweening.TweenExtensions::IsActive(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenExtensions_IsActive_m0361F513A18C4128C4DBF88EF1E2F4752D97DF4A (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, const RuntimeMethod* method) ;
// System.Void DG.Tweening.TweenExtensions::Kill(DG.Tweening.Tween,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenExtensions_Kill_m41BEF5EBF8C1633EC918DD60ADF82F5C63EC8ED5 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, bool ___complete1, const RuntimeMethod* method) ;
// UnityEngine.GameObject DG.Tweening.DOTweenAnimation::GetTweenGO()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* DOTweenAnimation_GetTweenGO_mAA4B88621B513AD6D7A76032131659A2453654CC (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m5C8299150E64600CBF5C92706AD610C21D0C0DC5 (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// DG.Tweening.DOTweenAnimation/TargetType DG.Tweening.DOTweenAnimation::TypeToDOTargetType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTweenAnimation_TypeToDOTargetType_mD0026308F78DB2907DAFA8B790AF57437D031D3C (Type_t* ___t0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/Utils::SwitchToRectTransform(UnityEngine.RectTransform,UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Utils_SwitchToRectTransform_m927E0306521B99C5AF717563A4AB216A3846ACFC (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___from0, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___to1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.ShortcutExtensions::DOMove(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ShortcutExtensions_DOMove_m32C4BD3E44498A3C651F30108F0D3402416B868B (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___duration2, bool ___snapping3, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOAnchorPos3D(UnityEngine.RectTransform,UnityEngine.Vector3,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* DOTweenModuleUI_DOAnchorPos3D_m9152258BD8EF0A999624C76BC8149BD46607EF33 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___duration2, bool ___snapping3, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModulePhysics::DOMove(UnityEngine.Rigidbody,UnityEngine.Vector3,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* DOTweenModulePhysics_DOMove_m9218B91AF3CA4CB76EC980F3C19DC290C22DD0D3 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___duration2, bool ___snapping3, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModulePhysics2D::DOMove(UnityEngine.Rigidbody2D,UnityEngine.Vector2,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* DOTweenModulePhysics2D_DOMove_m129881ECAC47858FD6BDF4872DFC10009AA91774 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___target0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endValue1, float ___duration2, bool ___snapping3, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.ShortcutExtensions::DOLocalMove(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ShortcutExtensions_DOLocalMove_mF5E1C871CE07EA143E72E39BD30F3B45AE51A3DD (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___duration2, bool ___snapping3, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions> DG.Tweening.ShortcutExtensions::DORotate(UnityEngine.Transform,UnityEngine.Vector3,System.Single,DG.Tweening.RotateMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* ShortcutExtensions_DORotate_m8395F402E150567DABF9EB86CF1846C7A4D32E03 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___duration2, int32_t ___mode3, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions> DG.Tweening.DOTweenModulePhysics::DORotate(UnityEngine.Rigidbody,UnityEngine.Vector3,System.Single,DG.Tweening.RotateMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* DOTweenModulePhysics_DORotate_m34B2316F2E1B4FABB69B2F982D8D9DA5AC074DC6 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___duration2, int32_t ___mode3, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions> DG.Tweening.DOTweenModulePhysics2D::DORotate(UnityEngine.Rigidbody2D,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* DOTweenModulePhysics2D_DORotate_m8FF3AA95400BD0ED1E539A13B9B33D8DCBE72CAE (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions> DG.Tweening.ShortcutExtensions::DOLocalRotate(UnityEngine.Transform,UnityEngine.Vector3,System.Single,DG.Tweening.RotateMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* ShortcutExtensions_DOLocalRotate_mC6051022B96DE6707945046329534727417E5990 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___duration2, int32_t ___mode3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.ShortcutExtensions::DOScale(UnityEngine.Transform,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ShortcutExtensions_DOScale_m7BBBF6EA15ED2BB02E4E32122D0FE0C8D2A4467D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOSizeDelta(UnityEngine.RectTransform,UnityEngine.Vector2,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* DOTweenModuleUI_DOSizeDelta_mC80355FB2E78330D2EC907DC14F8B6A8179CB09A (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___target0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endValue1, float ___duration2, bool ___snapping3, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.ShortcutExtensions::DOColor(UnityEngine.Light,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* ShortcutExtensions_DOColor_mF3E52C88B276BBF85FE8FB8B19A2E9B10F8B16BE (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___target0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleSprite::DOColor(UnityEngine.SpriteRenderer,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* DOTweenModuleSprite_DOColor_m1D8613D58BC87177BBFB8F8C48803084362CC46F (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___target0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleUI::DOColor(UnityEngine.UI.Graphic,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* DOTweenModuleUI_DOColor_m9CCD69C96E0EC2AF9796758A83BCAE38E8A99257 (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___target0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleUI::DOColor(UnityEngine.UI.Text,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* DOTweenModuleUI_DOColor_mF7C94BF952B9549609B1F7A3892A6F02CEB56F04 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___target0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.ShortcutExtensions::DOFade(UnityEngine.Material,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* ShortcutExtensions_DOFade_m5A41386F66944E37CA6D90C4E9D8DC1CE0B85F2B (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions> DG.Tweening.ShortcutExtensions::DOIntensity(UnityEngine.Light,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* ShortcutExtensions_DOIntensity_mD4FBC2D1FFB2DC824E047B96C012B16129D1887D (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleSprite::DOFade(UnityEngine.SpriteRenderer,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* DOTweenModuleSprite_DOFade_mD42EB7C410F2D7E86EF154211E97C3D72FAB6D99 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleUI::DOFade(UnityEngine.UI.Graphic,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* DOTweenModuleUI_DOFade_mCF2D26E252987610391CA58F42EBF89D497AB42C (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleUI::DOFade(UnityEngine.UI.Text,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* DOTweenModuleUI_DOFade_m86A4E7965D2563BB1530EB2343AB8DA2EF7FDF01 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions> DG.Tweening.DOTweenModuleUI::DOFade(UnityEngine.CanvasGroup,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* DOTweenModuleUI_DOFade_m70733D91ED98AB827DD5162868199BCA07B3C65F (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<System.String,System.String,DG.Tweening.Plugins.Options.StringOptions> DG.Tweening.DOTweenModuleUI::DOText(UnityEngine.UI.Text,System.String,System.Single,System.Boolean,DG.Tweening.ScrambleMode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t390910F1CE8B4737AA72FEED470399C8DBE1AF8B* DOTweenModuleUI_DOText_mB47F3908BD77013A7C5DF5CCFC2E3F4BB60E00F5 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___target0, String_t* ___endValue1, float ___duration2, bool ___richTextEnabled3, int32_t ___scrambleMode4, String_t* ___scrambleChars5, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOPunchPosition(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Int32,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOPunchPosition_mC6141C2E6F415ACB10B664B3F2DDADDEE1CCF9B7 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___punch1, float ___duration2, int32_t ___vibrato3, float ___elasticity4, bool ___snapping5, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.DOTweenModuleUI::DOPunchAnchorPos(UnityEngine.RectTransform,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* DOTweenModuleUI_DOPunchAnchorPos_mA9B79DE480E85187CD9967AEAC55F29FB4C7B587 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___target0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___punch1, float ___duration2, int32_t ___vibrato3, float ___elasticity4, bool ___snapping5, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOPunchScale(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOPunchScale_m11086B1F15446E2DBD1BBED2FE1855DC12C05867 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___punch1, float ___duration2, int32_t ___vibrato3, float ___elasticity4, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOPunchRotation(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOPunchRotation_mBD603C44E24516A904CEF8D707E016B03C71DC5F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___punch1, float ___duration2, int32_t ___vibrato3, float ___elasticity4, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOShakePosition(UnityEngine.Transform,System.Single,UnityEngine.Vector3,System.Int32,System.Single,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOShakePosition_m5480BF63838F01B78EA0BB767A1CA8CCA15336FB (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, float ___duration1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___strength2, int32_t ___vibrato3, float ___randomness4, bool ___snapping5, bool ___fadeOut6, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.DOTweenModuleUI::DOShakeAnchorPos(UnityEngine.RectTransform,System.Single,UnityEngine.Vector2,System.Int32,System.Single,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* DOTweenModuleUI_DOShakeAnchorPos_mA36B5E94FEC480304F89946C695F8DCBF637DC72 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___target0, float ___duration1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___strength2, int32_t ___vibrato3, float ___randomness4, bool ___snapping5, bool ___fadeOut6, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOShakeScale(UnityEngine.Transform,System.Single,UnityEngine.Vector3,System.Int32,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOShakeScale_m455288408E71E6D81BC89D27C4897D3E8AEC7236 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, float ___duration1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___strength2, int32_t ___vibrato3, float ___randomness4, bool ___fadeOut5, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOShakeRotation(UnityEngine.Transform,System.Single,UnityEngine.Vector3,System.Int32,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOShakeRotation_mE14FE3AB153375C93275B2CBF219BA5CDCFF6353 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, float ___duration1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___strength2, int32_t ___vibrato3, float ___randomness4, bool ___fadeOut5, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions> DG.Tweening.ShortcutExtensions::DOAspect(UnityEngine.Camera,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* ShortcutExtensions_DOAspect_mD8D0BCC3716CCFFFE0051D96ECE87ECC27178621 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.ShortcutExtensions::DOColor(UnityEngine.Camera,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* ShortcutExtensions_DOColor_mE810B2031664ACBB5BB58C5288B7168CA88A8972 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___target0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions> DG.Tweening.ShortcutExtensions::DOFieldOfView(UnityEngine.Camera,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* ShortcutExtensions_DOFieldOfView_m82327EC4821621EBF7957C8DE04B0E7C93778220 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions> DG.Tweening.ShortcutExtensions::DOOrthoSize(UnityEngine.Camera,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* ShortcutExtensions_DOOrthoSize_m12DBC3D9BB3AEE9AC4D59C422E2514D74FD27A66 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions> DG.Tweening.ShortcutExtensions::DOPixelRect(UnityEngine.Camera,UnityEngine.Rect,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* ShortcutExtensions_DOPixelRect_mFD604C696CF1FBC886FC54BBF927F115C6BCC809 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___target0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions> DG.Tweening.ShortcutExtensions::DORect(UnityEngine.Camera,UnityEngine.Rect,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* ShortcutExtensions_DORect_m6094E30B85FC49943D3D891FCB75D46D6E625745 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___target0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::From<DG.Tweening.Tweener>(T,System.Boolean)
inline Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* TweenSettingsExtensions_From_TisTweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_mC60C392D6D33305FE03E8995161FEEAC84674A95 (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ___t0, bool ___isRelative1, const RuntimeMethod* method)
{
	return ((  Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* (*) (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, bool, const RuntimeMethod*))TweenSettingsExtensions_From_TisRuntimeObject_m18F9FB66E1E1400083082A2DD5378B9B9DF379F3_gshared)(___t0, ___isRelative1, method);
}
// T DG.Tweening.TweenSettingsExtensions::SetRelative<DG.Tweening.Tween>(T,System.Boolean)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_SetRelative_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m65EE3617250D5AD8873E9873D48962D3634F6483 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, bool ___isRelative1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, bool, const RuntimeMethod*))TweenSettingsExtensions_SetRelative_TisRuntimeObject_mA5D7BA78B5523DC9FD8FB8E0B16DE48ACD1EE936_gshared)(___t0, ___isRelative1, method);
}
// T DG.Tweening.TweenSettingsExtensions::SetTarget<DG.Tweening.Tween>(T,System.Object)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_SetTarget_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mCEF56ADE6E6FB782E6DED1C3D5E9AEB2309FB0F5 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, RuntimeObject* ___target1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, RuntimeObject*, const RuntimeMethod*))TweenSettingsExtensions_SetTarget_TisRuntimeObject_mCF848380E6792301099B777BD786D24C155EDFE5_gshared)(___t0, ___target1, method);
}
// T DG.Tweening.TweenSettingsExtensions::SetDelay<DG.Tweening.Tween>(T,System.Single)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_SetDelay_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m301CF7B6B171BF1CF43646D0D760594BC46B1FEC (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, float ___delay1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, float, const RuntimeMethod*))TweenSettingsExtensions_SetDelay_TisRuntimeObject_m445C871C485F006B4A7FB7A4F6CF5A72FBC4D413_gshared)(___t0, ___delay1, method);
}
// T DG.Tweening.TweenSettingsExtensions::SetLoops<DG.Tweening.Tween>(T,System.Int32,DG.Tweening.LoopType)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_SetLoops_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m7F9CA723CCD313DB084E94DF8C80C5F579B509B0 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, int32_t ___loops1, int32_t ___loopType2, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, int32_t, int32_t, const RuntimeMethod*))TweenSettingsExtensions_SetLoops_TisRuntimeObject_m55DE4F0E60F0EF4B3868810B0DAE90931E0111D9_gshared)(___t0, ___loops1, ___loopType2, method);
}
// T DG.Tweening.TweenSettingsExtensions::SetAutoKill<DG.Tweening.Tween>(T,System.Boolean)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_SetAutoKill_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m1A67DB04ED6B16569A6DC9670F7F1849A5376E21 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, bool ___autoKillOnCompletion1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, bool, const RuntimeMethod*))TweenSettingsExtensions_SetAutoKill_TisRuntimeObject_m1C8E72C53CBD98A9746DDA001A56721DEC3B2DC7_gshared)(___t0, ___autoKillOnCompletion1, method);
}
// System.Void DG.Tweening.TweenCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621 (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnKill<DG.Tweening.Tween>(T,DG.Tweening.TweenCallback)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_OnKill_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m4CF744A4FBB459014140B0874C75DBC7F87FE913 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*, const RuntimeMethod*))TweenSettingsExtensions_OnKill_TisRuntimeObject_m079FD49FE122B593A452FD7E3E79EEA002D14F51_gshared)(___t0, ___action1, method);
}
// T DG.Tweening.TweenSettingsExtensions::SetSpeedBased<DG.Tweening.Tween>(T)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_SetSpeedBased_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mEEE8E789F246C3E180032AE6AE597AD27DA887B8 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, const RuntimeMethod*))TweenSettingsExtensions_SetSpeedBased_TisRuntimeObject_mBE3F75D4A5DCF47CD9781E41C999D6CD22BDFE6A_gshared)(___t0, method);
}
// T DG.Tweening.TweenSettingsExtensions::SetEase<DG.Tweening.Tween>(T,UnityEngine.AnimationCurve)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_SetEase_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m3C5C67CF8DAAA89EE45BD950D622DDC7517DD049 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___animCurve1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, const RuntimeMethod*))TweenSettingsExtensions_SetEase_TisRuntimeObject_m0BE19CC2AB8DA24EA038AEDFBC2FC8E4F85028AF_gshared)(___t0, ___animCurve1, method);
}
// T DG.Tweening.TweenSettingsExtensions::SetEase<DG.Tweening.Tween>(T,DG.Tweening.Ease)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_SetEase_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m507E6328745F0217F303765142C237DBA1DF2DA6 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, int32_t ___ease1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, int32_t, const RuntimeMethod*))TweenSettingsExtensions_SetEase_TisRuntimeObject_m1889AEFA8CEF7472F2F292AA8DED9CE4AADB35CF_gshared)(___t0, ___ease1, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetId<DG.Tweening.Tween>(T,System.String)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_SetId_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mBF22773A2E9D87F70207B32FBCD99108EC365E2B (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, String_t* ___stringId1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, String_t*, const RuntimeMethod*))TweenSettingsExtensions_SetId_TisRuntimeObject_m7E4EB197FE74BB8372CBFCB7515734502D0FF1EF_gshared)(___t0, ___stringId1, method);
}
// T DG.Tweening.TweenSettingsExtensions::SetUpdate<DG.Tweening.Tween>(T,System.Boolean)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_SetUpdate_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m172E7B547CCEA4E9DACC2AB397958EFEE67BBF36 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, bool ___isIndependentUpdate1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, bool, const RuntimeMethod*))TweenSettingsExtensions_SetUpdate_TisRuntimeObject_m036B5BAF7D6315B9E0B7AD0CBBD7CFEEC6CED946_gshared)(___t0, ___isIndependentUpdate1, method);
}
// T DG.Tweening.TweenSettingsExtensions::OnStart<DG.Tweening.Tween>(T,DG.Tweening.TweenCallback)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_OnStart_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m28C40BE2EBE0F617AA3E4827F3614CD952C8DF8F (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*, const RuntimeMethod*))TweenSettingsExtensions_OnStart_TisRuntimeObject_m520A807423D9F89B8401A562D0941BAC0060C802_gshared)(___t0, ___action1, method);
}
// T DG.Tweening.TweenSettingsExtensions::OnPlay<DG.Tweening.Tween>(T,DG.Tweening.TweenCallback)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_OnPlay_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m9C9D8B73E053554A7422ED2F1A7B1490AE3F9EB6 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*, const RuntimeMethod*))TweenSettingsExtensions_OnPlay_TisRuntimeObject_mC55B79E4F8FE235150C56AD18BB4F0BE89303A53_gshared)(___t0, ___action1, method);
}
// T DG.Tweening.TweenSettingsExtensions::OnUpdate<DG.Tweening.Tween>(T,DG.Tweening.TweenCallback)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_OnUpdate_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m3C099B9F7E199FBB7AF586E353AE96D45AA09D9D (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*, const RuntimeMethod*))TweenSettingsExtensions_OnUpdate_TisRuntimeObject_mF0B0740A5477A406F974C728C8BD308A66AB3454_gshared)(___t0, ___action1, method);
}
// T DG.Tweening.TweenSettingsExtensions::OnStepComplete<DG.Tweening.Tween>(T,DG.Tweening.TweenCallback)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_OnStepComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mFFA7C039D354B88FCFAD8C72833711A4795FC0FB (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*, const RuntimeMethod*))TweenSettingsExtensions_OnStepComplete_TisRuntimeObject_mABBA37B39BAEA8692DABC0685E66A09AD4027118_gshared)(___t0, ___action1, method);
}
// T DG.Tweening.TweenSettingsExtensions::OnComplete<DG.Tweening.Tween>(T,DG.Tweening.TweenCallback)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_OnComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mE67BCE455C598621EAFC075DFFFAF4167B4E2371 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*, const RuntimeMethod*))TweenSettingsExtensions_OnComplete_TisRuntimeObject_mF076A1EB869F2F1DB7365AA7D12490B715428668_gshared)(___t0, ___action1, method);
}
// T DG.Tweening.TweenSettingsExtensions::OnRewind<DG.Tweening.Tween>(T,DG.Tweening.TweenCallback)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_OnRewind_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mB9DF6C423E1258FFF3FD11A7A68D79EE7189DB3A (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*, const RuntimeMethod*))TweenSettingsExtensions_OnRewind_TisRuntimeObject_mFC28C9C8819AEBD5D764B68193A0AE9ACB81B246_gshared)(___t0, ___action1, method);
}
// T DG.Tweening.TweenExtensions::Play<DG.Tweening.Tween>(T)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenExtensions_Play_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m2442DE0FF8CACF03EFB5003191303DBC489F9BF6 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, const RuntimeMethod*))TweenExtensions_Play_TisRuntimeObject_m9C5B8B16699BA91E6605510B84969F71F944D46F_gshared)(___t0, method);
}
// T DG.Tweening.TweenExtensions::Pause<DG.Tweening.Tween>(T)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenExtensions_Pause_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m42F0E805CDAC03AC764CBEDE7E2F7C607F6B58CD (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, const RuntimeMethod*))TweenExtensions_Pause_TisRuntimeObject_m8B72FD21DD2AB12230B9B80A043E47E51B6944B6_gshared)(___t0, method);
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::Play(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_Play_mE146D1154F52E49E529517BB36D29EADA337F5FF (RuntimeObject* ___targetOrId0, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::PlayBackwards(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_PlayBackwards_m98D93F84137C304FDA25BF99E45108494E18F39B (RuntimeObject* ___targetOrId0, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::PlayForward(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_PlayForward_m32808EC4264B337995A4E260E96AF7A454029637 (RuntimeObject* ___targetOrId0, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::Pause(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_Pause_m58CD7313179E53DE741D41B6CAAB7ABFF1BABA6C (RuntimeObject* ___targetOrId0, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::TogglePause(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_TogglePause_m306F889F632F7B3C429F108A81AFD644727D0F7D (RuntimeObject* ___targetOrId0, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponents<DG.Tweening.DOTweenAnimation>()
inline DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* GameObject_GetComponents_TisDOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_m95D9515665F9034EBE662B8B4835DB6B2817259B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponents_TisRuntimeObject_m1654344F5C897CA86F9AB51530972086BDB05948_gshared)(__this, method);
}
// System.Boolean DG.Tweening.TweenExtensions::IsInitialized(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenExtensions_IsInitialized_m70878E071A2B3F02B43A47A4CEAE674A64341AF1 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, const RuntimeMethod* method) ;
// System.Void DG.Tweening.TweenExtensions::Rewind(DG.Tweening.Tween,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenExtensions_Rewind_m3E891F32358D3D459EA15BE3A25D49B49D6BAC0C (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, bool ___includeDelay1, const RuntimeMethod* method) ;
// System.Void DG.Tweening.Core.Debugger::LogNullTween(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_LogNullTween_m462D3B435A8ADE6FEB0330E4A31710226DB613BC (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenAnimation::ReEvaluateRelativeTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_ReEvaluateRelativeTween_mD0A5E517DC24E42DA505252FF14510A82AF3D884 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::Restart(System.Object,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_Restart_m1697F3A59A3A78B36022F5E4A082B9116DEBFA11 (RuntimeObject* ___targetOrId0, bool ___includeDelay1, float ___changeDelayTo2, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::Complete(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_Complete_m22D90DCCA1970B8AA12787F43263BF16DC49C4CB (RuntimeObject* ___targetOrId0, bool ___withCallbacks1, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::Kill(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_Kill_m1D0A70349523060E7198D3256BC2DC555E422331 (RuntimeObject* ___targetOrId0, bool ___complete1, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::Play(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_Play_m2992F5D85F5BCA090173D20045950D6EA8CB8A6C (RuntimeObject* ___target0, RuntimeObject* ___id1, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::PlayBackwards(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_PlayBackwards_m80A8FAE081E88DEB0DE7117F784D8B3C9C41E49A (RuntimeObject* ___target0, RuntimeObject* ___id1, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::PlayForward(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_PlayForward_mDEA27C00165C82A075B2F2D37F3BEB47535F3AB8 (RuntimeObject* ___target0, RuntimeObject* ___id1, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponents<DG.Tweening.DOTweenAnimation>()
inline DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* Component_GetComponents_TisDOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_mBD8DF07C7D147339501B59183140B9EF098D3204 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared)(__this, method);
}
// System.Boolean DG.Tweening.TweenExtensions::IsPlaying(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenExtensions_IsPlaying_m21C049B7FC765108ABCD80F6DA263F21A0AF7461 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::Rewind(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_Rewind_mD73DE9114E50F4BC68F8837D5E813A8862D757AD (RuntimeObject* ___targetOrId0, bool ___includeDelay1, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenAnimation::DOPlayNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayNext_mB0A10A4963CBB56BC6AA79B312D7B8C00AADB1CA (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::Restart(System.Object,System.Object,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_Restart_m9227E6E935FB952130604F595D42A08D9136C358 (RuntimeObject* ___target0, RuntimeObject* ___id1, bool ___includeDelay2, float ___changeDelayTo3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DG.Tweening.Tween>::.ctor()
inline void List_1__ctor_mEDBC45510C70567B8263CF690D19D50EF22235D8 (List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<DG.Tweening.Tween>::Add(T)
inline void List_1_Add_mBA978C54F180239702014DDD75202F19F926C6C6_inline (List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD* __this, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD*, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.String::LastIndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Object System.Enum::Parse(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enum_Parse_m2E810F090FE2D6D78D29D87EA6773F8C616E0257 (Type_t* ___enumType0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, float ___time0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* ___keys0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void DG.Tweening.Core.ABSAnimationComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ABSAnimationComponent__ctor_mF2DC2EF90DDA4C57EC4858124EEEE03FE4CBB328 (ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C* __this, const RuntimeMethod* method) ;
// System.Void DG.Tweening.Plugins.SpiralPlugin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpiralPlugin__ctor_m9ACFE0F9B14BBBD77A9570420667150892067033 (SpiralPlugin_t0EC3955D810AAED4713FA63AAEACDA66063B604E* __this, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m806C59F8972EC150A820E385B593EA0B56B29B1F (U3CU3Ec__DisplayClass1_0_tB5F45687C977F70DAF77F838AE9774426652A19C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Vector3>::get_HasValue()
inline bool Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_inline (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE*, const RuntimeMethod*))Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_gshared_inline)(__this, method);
}
// T System.Nullable`1<UnityEngine.Vector3>::GetValueOrDefault()
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Nullable_1_GetValueOrDefault_mD88C565C80170105E87BB423C5B2F974840EF90F_inline (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mD88C565C80170105E87BB423C5B2F974840EF90F_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.Vector3>::.ctor(T)
inline void Nullable_1__ctor_m75F3ABB694E26670F021136BD3B9E71A65948BC2 (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))Nullable_1__ctor_m75F3ABB694E26670F021136BD3B9E71A65948BC2_gshared)(__this, ___value0, method);
}
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.SpiralOptions> DG.Tweening.Plugins.SpiralPlugin::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ABSTweenPlugin_3_tF7CEB9BBF8FF28D2F3BBF9DB950849DCA238F80C* SpiralPlugin_Get_mE4C4E109C56275C41CD556F92D3AD5ED648555E1 (const RuntimeMethod* method) ;
// System.Void DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
inline void DOGetter_1__ctor_m59C11B3FE64C69454BE28721314FD6189629F27E (DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338*, RuntimeObject*, intptr_t, const RuntimeMethod*))DOGetter_1__ctor_m59C11B3FE64C69454BE28721314FD6189629F27E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
inline void DOSetter_1__ctor_m9E67232146D149892F1946395AD1B6B1C53F3B60 (DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358*, RuntimeObject*, intptr_t, const RuntimeMethod*))DOSetter_1__ctor_m9E67232146D149892F1946395AD1B6B1C53F3B60_gshared)(__this, ___object0, ___method1, method);
}
// T System.Nullable`1<UnityEngine.Vector3>::get_Value()
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792 (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE*, const RuntimeMethod*))Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792_gshared)(__this, method);
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.DOTween::To<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.SpiralOptions>(DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions>,DG.Tweening.Core.DOGetter`1<T1>,DG.Tweening.Core.DOSetter`1<T1>,T2,System.Single)
inline TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B* DOTween_To_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisSpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D_m5F5B0052265CFE642C737BE4805EE5E79C4ECBCF (ABSTweenPlugin_3_tF7CEB9BBF8FF28D2F3BBF9DB950849DCA238F80C* ___plugin0, DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* ___getter1, DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358* ___setter2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue3, float ___duration4, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B* (*) (ABSTweenPlugin_3_tF7CEB9BBF8FF28D2F3BBF9DB950849DCA238F80C*, DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338*, DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, float, const RuntimeMethod*))DOTween_To_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisSpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D_m5F5B0052265CFE642C737BE4805EE5E79C4ECBCF_gshared)(___plugin0, ___getter1, ___setter2, ___endValue3, ___duration4, method);
}
// T DG.Tweening.TweenSettingsExtensions::SetTarget<DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.SpiralOptions>>(T,System.Object)
inline TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B* TweenSettingsExtensions_SetTarget_TisTweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B_m97AA03CAB58B00C4DB34E83C88B972A8916083A9 (TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B* ___t0, RuntimeObject* ___target1, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B* (*) (TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B*, RuntimeObject*, const RuntimeMethod*))TweenSettingsExtensions_SetTarget_TisRuntimeObject_mCF848380E6792301099B777BD786D24C155EDFE5_gshared)(___t0, ___target1, method);
}
// System.Void DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m7155F8E8DBB0B55CD44790BE6D26FFC39746D949 (U3CU3Ec__DisplayClass2_0_t1295D5B080BAB3F595980E470DA1E9BAF1B4967B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// DG.Tweening.Sequence DG.Tweening.DOTweenModuleUnityVersion::DOGradientColor(UnityEngine.Material,UnityEngine.Gradient,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* DOTweenModuleUnityVersion_DOGradientColor_mC9C2768747A9B142795620CF5501BCCB0385A64A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___target0, Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___gradient1, float ___duration2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_mC1C697C58AA95DBB9C319A551196170C9082E2C3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* V_0 = NULL;
	GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	float G_B7_0 = 0.0f;
	float G_B6_0 = 0.0f;
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	float G_B10_0 = 0.0f;
	{
		// Sequence s = DOTween.Sequence();
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_0;
		L_0 = DOTween_Sequence_m57CE12901581E3C5832EAFFB11C1417270E01754(NULL);
		V_0 = L_0;
		// GradientColorKey[] colors = gradient.colorKeys;
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_1 = ___gradient1;
		NullCheck(L_1);
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_2;
		L_2 = Gradient_get_colorKeys_mA4B24805A35BC4FBF04F182FCDA6E9D0CBB52F0A(L_1, NULL);
		V_1 = L_2;
		// int len = colors.Length;
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_3 = V_1;
		NullCheck(L_3);
		V_2 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
		// for (int i = 0; i < len; ++i) {
		V_3 = 0;
		goto IL_0098;
	}

IL_0018:
	{
		// GradientColorKey c = colors[i];
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_4 = V_1;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_4 = L_7;
		// if (i == 0 && c.time <= 0) {
		int32_t L_8 = V_3;
		if (L_8)
		{
			goto IL_0041;
		}
	}
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_9 = V_4;
		float L_10 = L_9.___time_1;
		if ((!(((float)L_10) <= ((float)(0.0f)))))
		{
			goto IL_0041;
		}
	}
	{
		// target.color = c.color;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = ___target0;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_12 = V_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12.___color_0;
		NullCheck(L_11);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_11, L_13, NULL);
		// continue;
		goto IL_0094;
	}

IL_0041:
	{
		// float colorDuration = i == len - 1
		//     ? duration - s.Duration(false) // Verifies that total duration is correct
		//     : duration * (i == 0 ? c.time : c.time - colors[i - 1].time);
		int32_t L_14 = V_3;
		int32_t L_15 = V_2;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_15, 1)))))
		{
			goto IL_006d;
		}
	}
	{
		float L_16 = ___duration2;
		int32_t L_17 = V_3;
		G_B6_0 = L_16;
		if (!L_17)
		{
			G_B7_0 = L_16;
			goto IL_0063;
		}
	}
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_18 = V_4;
		float L_19 = L_18.___time_1;
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_20 = V_1;
		int32_t L_21 = V_3;
		NullCheck(L_20);
		float L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_21, 1)))))->___time_1;
		G_B8_0 = ((float)il2cpp_codegen_subtract(L_19, L_22));
		G_B8_1 = G_B6_0;
		goto IL_006a;
	}

IL_0063:
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_23 = V_4;
		float L_24 = L_23.___time_1;
		G_B8_0 = L_24;
		G_B8_1 = G_B7_0;
	}

IL_006a:
	{
		G_B10_0 = ((float)il2cpp_codegen_multiply(G_B8_1, G_B8_0));
		goto IL_0076;
	}

IL_006d:
	{
		float L_25 = ___duration2;
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_26 = V_0;
		float L_27;
		L_27 = TweenExtensions_Duration_mE3774FA4E56156515AC760676415731933DC1D79(L_26, (bool)0, NULL);
		G_B10_0 = ((float)il2cpp_codegen_subtract(L_25, L_27));
	}

IL_0076:
	{
		V_5 = G_B10_0;
		// s.Append(target.DOColor(c.color, colorDuration).SetEase(Ease.Linear));
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_28 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_29 = ___target0;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_30 = V_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = L_30.___color_0;
		float L_32 = V_5;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_33;
		L_33 = ShortcutExtensions_DOColor_mCDBC01E948BEF650617C7883545210478198AEEA(L_29, L_31, L_32, NULL);
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_34;
		L_34 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_mC1C697C58AA95DBB9C319A551196170C9082E2C3(L_33, 1, TweenSettingsExtensions_SetEase_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_mC1C697C58AA95DBB9C319A551196170C9082E2C3_RuntimeMethod_var);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_35;
		L_35 = TweenSettingsExtensions_Append_mB8CDE24E0410A61DA0D5AD083F8047C18AED3D68(L_28, L_34, NULL);
	}

IL_0094:
	{
		// for (int i = 0; i < len; ++i) {
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_0098:
	{
		// for (int i = 0; i < len; ++i) {
		int32_t L_37 = V_3;
		int32_t L_38 = V_2;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0018;
		}
	}
	{
		// return s;
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_39 = V_0;
		return L_39;
	}
}
// DG.Tweening.Sequence DG.Tweening.DOTweenModuleUnityVersion::DOGradientColor(UnityEngine.Material,UnityEngine.Gradient,System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* DOTweenModuleUnityVersion_DOGradientColor_m8B5EA2127C5D9206A1BC6BAC15BD89D5D9077DCC (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___target0, Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___gradient1, String_t* ___property2, float ___duration3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_mC1C697C58AA95DBB9C319A551196170C9082E2C3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* V_0 = NULL;
	GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	float G_B7_0 = 0.0f;
	float G_B6_0 = 0.0f;
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	float G_B10_0 = 0.0f;
	{
		// Sequence s = DOTween.Sequence();
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_0;
		L_0 = DOTween_Sequence_m57CE12901581E3C5832EAFFB11C1417270E01754(NULL);
		V_0 = L_0;
		// GradientColorKey[] colors = gradient.colorKeys;
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_1 = ___gradient1;
		NullCheck(L_1);
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_2;
		L_2 = Gradient_get_colorKeys_mA4B24805A35BC4FBF04F182FCDA6E9D0CBB52F0A(L_1, NULL);
		V_1 = L_2;
		// int len = colors.Length;
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_3 = V_1;
		NullCheck(L_3);
		V_2 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
		// for (int i = 0; i < len; ++i) {
		V_3 = 0;
		goto IL_009a;
	}

IL_0018:
	{
		// GradientColorKey c = colors[i];
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_4 = V_1;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_4 = L_7;
		// if (i == 0 && c.time <= 0) {
		int32_t L_8 = V_3;
		if (L_8)
		{
			goto IL_0042;
		}
	}
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_9 = V_4;
		float L_10 = L_9.___time_1;
		if ((!(((float)L_10) <= ((float)(0.0f)))))
		{
			goto IL_0042;
		}
	}
	{
		// target.SetColor(property, c.color);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11 = ___target0;
		String_t* L_12 = ___property2;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_13 = V_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = L_13.___color_0;
		NullCheck(L_11);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_11, L_12, L_14, NULL);
		// continue;
		goto IL_0096;
	}

IL_0042:
	{
		// float colorDuration = i == len - 1
		//     ? duration - s.Duration(false) // Verifies that total duration is correct
		//     : duration * (i == 0 ? c.time : c.time - colors[i - 1].time);
		int32_t L_15 = V_3;
		int32_t L_16 = V_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_16, 1)))))
		{
			goto IL_006e;
		}
	}
	{
		float L_17 = ___duration3;
		int32_t L_18 = V_3;
		G_B6_0 = L_17;
		if (!L_18)
		{
			G_B7_0 = L_17;
			goto IL_0064;
		}
	}
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_19 = V_4;
		float L_20 = L_19.___time_1;
		GradientColorKeyU5BU5D_tB8929E6EE130CA1F3C1664B300BE83A95A642C18* L_21 = V_1;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		float L_23 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_22, 1)))))->___time_1;
		G_B8_0 = ((float)il2cpp_codegen_subtract(L_20, L_23));
		G_B8_1 = G_B6_0;
		goto IL_006b;
	}

IL_0064:
	{
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_24 = V_4;
		float L_25 = L_24.___time_1;
		G_B8_0 = L_25;
		G_B8_1 = G_B7_0;
	}

IL_006b:
	{
		G_B10_0 = ((float)il2cpp_codegen_multiply(G_B8_1, G_B8_0));
		goto IL_0077;
	}

IL_006e:
	{
		float L_26 = ___duration3;
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_27 = V_0;
		float L_28;
		L_28 = TweenExtensions_Duration_mE3774FA4E56156515AC760676415731933DC1D79(L_27, (bool)0, NULL);
		G_B10_0 = ((float)il2cpp_codegen_subtract(L_26, L_28));
	}

IL_0077:
	{
		V_5 = G_B10_0;
		// s.Append(target.DOColor(c.color, property, colorDuration).SetEase(Ease.Linear));
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_29 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_30 = ___target0;
		GradientColorKey_tBD03A613338639E3774A10265CC5F3619C13421A L_31 = V_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_32 = L_31.___color_0;
		String_t* L_33 = ___property2;
		float L_34 = V_5;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_35;
		L_35 = ShortcutExtensions_DOColor_m1DEFCA17E6F4C13304B157E8A38572654CF0FD6E(L_30, L_32, L_33, L_34, NULL);
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_36;
		L_36 = TweenSettingsExtensions_SetEase_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_mC1C697C58AA95DBB9C319A551196170C9082E2C3(L_35, 1, TweenSettingsExtensions_SetEase_TisTweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3_mC1C697C58AA95DBB9C319A551196170C9082E2C3_RuntimeMethod_var);
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_37;
		L_37 = TweenSettingsExtensions_Append_mB8CDE24E0410A61DA0D5AD083F8047C18AED3D68(L_29, L_36, NULL);
	}

IL_0096:
	{
		// for (int i = 0; i < len; ++i) {
		int32_t L_38 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_009a:
	{
		// for (int i = 0; i < len; ++i) {
		int32_t L_39 = V_3;
		int32_t L_40 = V_2;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0018;
		}
	}
	{
		// return s;
		Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* L_41 = V_0;
		return L_41;
	}
}
// UnityEngine.CustomYieldInstruction DG.Tweening.DOTweenModuleUnityVersion::WaitForCompletion(DG.Tweening.Tween,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617* DOTweenModuleUnityVersion_WaitForCompletion_mCD910620513CFC66E6360BDF100567E534DA8C47 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, bool ___returnCustomYieldInstruction1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForCompletion_tAB7AA0856589EAB871607AC6F70578EFDED1816A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!t.active) {
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = ___t0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// if (Debugger.logPriority > 0) Debugger.LogInvalidTween(t);
		int32_t L_2 = ((Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_il2cpp_TypeInfo_var))->___logPriority_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		// if (Debugger.logPriority > 0) Debugger.LogInvalidTween(t);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_3 = ___t0;
		Debugger_LogInvalidTween_mAFC797931C9804682F44DADE89781FFF5373FE38(L_3, NULL);
	}

IL_0016:
	{
		// return null;
		return (CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617*)NULL;
	}

IL_0018:
	{
		// return new DOTweenCYInstruction.WaitForCompletion(t);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_4 = ___t0;
		WaitForCompletion_tAB7AA0856589EAB871607AC6F70578EFDED1816A* L_5 = (WaitForCompletion_tAB7AA0856589EAB871607AC6F70578EFDED1816A*)il2cpp_codegen_object_new(WaitForCompletion_tAB7AA0856589EAB871607AC6F70578EFDED1816A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitForCompletion__ctor_m194FFB6935EC44D8EBF9596755B410A7F3CAECDA(L_5, L_4, NULL);
		return L_5;
	}
}
// UnityEngine.CustomYieldInstruction DG.Tweening.DOTweenModuleUnityVersion::WaitForRewind(DG.Tweening.Tween,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617* DOTweenModuleUnityVersion_WaitForRewind_m80AF71AC60E938C7E0D4FD01CCBF98667DEDB8A1 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, bool ___returnCustomYieldInstruction1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForRewind_t873799FBB04DE3DF4EFA17E667A31070558F0F3F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!t.active) {
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = ___t0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// if (Debugger.logPriority > 0) Debugger.LogInvalidTween(t);
		int32_t L_2 = ((Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_il2cpp_TypeInfo_var))->___logPriority_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		// if (Debugger.logPriority > 0) Debugger.LogInvalidTween(t);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_3 = ___t0;
		Debugger_LogInvalidTween_mAFC797931C9804682F44DADE89781FFF5373FE38(L_3, NULL);
	}

IL_0016:
	{
		// return null;
		return (CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617*)NULL;
	}

IL_0018:
	{
		// return new DOTweenCYInstruction.WaitForRewind(t);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_4 = ___t0;
		WaitForRewind_t873799FBB04DE3DF4EFA17E667A31070558F0F3F* L_5 = (WaitForRewind_t873799FBB04DE3DF4EFA17E667A31070558F0F3F*)il2cpp_codegen_object_new(WaitForRewind_t873799FBB04DE3DF4EFA17E667A31070558F0F3F_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitForRewind__ctor_m8FA908A77DFFAACB814B717915EAFBDA10B2FB36(L_5, L_4, NULL);
		return L_5;
	}
}
// UnityEngine.CustomYieldInstruction DG.Tweening.DOTweenModuleUnityVersion::WaitForKill(DG.Tweening.Tween,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617* DOTweenModuleUnityVersion_WaitForKill_m5D2A034D4E6912EE8FF0AE063329807F3399FF95 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, bool ___returnCustomYieldInstruction1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForKill_tC61AE96CD4540172B46C9FE9FABEA26675CCE73F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!t.active) {
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = ___t0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// if (Debugger.logPriority > 0) Debugger.LogInvalidTween(t);
		int32_t L_2 = ((Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_il2cpp_TypeInfo_var))->___logPriority_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		// if (Debugger.logPriority > 0) Debugger.LogInvalidTween(t);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_3 = ___t0;
		Debugger_LogInvalidTween_mAFC797931C9804682F44DADE89781FFF5373FE38(L_3, NULL);
	}

IL_0016:
	{
		// return null;
		return (CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617*)NULL;
	}

IL_0018:
	{
		// return new DOTweenCYInstruction.WaitForKill(t);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_4 = ___t0;
		WaitForKill_tC61AE96CD4540172B46C9FE9FABEA26675CCE73F* L_5 = (WaitForKill_tC61AE96CD4540172B46C9FE9FABEA26675CCE73F*)il2cpp_codegen_object_new(WaitForKill_tC61AE96CD4540172B46C9FE9FABEA26675CCE73F_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitForKill__ctor_m13C20AC2C9C2809AD51B8CEA30F11AACB4ECC64C(L_5, L_4, NULL);
		return L_5;
	}
}
// UnityEngine.CustomYieldInstruction DG.Tweening.DOTweenModuleUnityVersion::WaitForElapsedLoops(DG.Tweening.Tween,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617* DOTweenModuleUnityVersion_WaitForElapsedLoops_m347E45F2B3E7F133E50D93DE5712D9FB0E828A79 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, int32_t ___elapsedLoops1, bool ___returnCustomYieldInstruction2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForElapsedLoops_tFF8E4E7D40D733F6146707809EA8A3F28FC526C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!t.active) {
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = ___t0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// if (Debugger.logPriority > 0) Debugger.LogInvalidTween(t);
		int32_t L_2 = ((Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_il2cpp_TypeInfo_var))->___logPriority_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		// if (Debugger.logPriority > 0) Debugger.LogInvalidTween(t);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_3 = ___t0;
		Debugger_LogInvalidTween_mAFC797931C9804682F44DADE89781FFF5373FE38(L_3, NULL);
	}

IL_0016:
	{
		// return null;
		return (CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617*)NULL;
	}

IL_0018:
	{
		// return new DOTweenCYInstruction.WaitForElapsedLoops(t, elapsedLoops);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_4 = ___t0;
		int32_t L_5 = ___elapsedLoops1;
		WaitForElapsedLoops_tFF8E4E7D40D733F6146707809EA8A3F28FC526C7* L_6 = (WaitForElapsedLoops_tFF8E4E7D40D733F6146707809EA8A3F28FC526C7*)il2cpp_codegen_object_new(WaitForElapsedLoops_tFF8E4E7D40D733F6146707809EA8A3F28FC526C7_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForElapsedLoops__ctor_mA2399269DDE36055552944650E8862464AAFF448(L_6, L_4, L_5, NULL);
		return L_6;
	}
}
// UnityEngine.CustomYieldInstruction DG.Tweening.DOTweenModuleUnityVersion::WaitForPosition(DG.Tweening.Tween,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617* DOTweenModuleUnityVersion_WaitForPosition_m39F8AC8FBB5962A4CC8CEFB055C85B13284CC39F (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, float ___position1, bool ___returnCustomYieldInstruction2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForPosition_tF0BCBB4A3B9449099865C65EDAAAD360E2EBAD5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!t.active) {
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = ___t0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// if (Debugger.logPriority > 0) Debugger.LogInvalidTween(t);
		int32_t L_2 = ((Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_il2cpp_TypeInfo_var))->___logPriority_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		// if (Debugger.logPriority > 0) Debugger.LogInvalidTween(t);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_3 = ___t0;
		Debugger_LogInvalidTween_mAFC797931C9804682F44DADE89781FFF5373FE38(L_3, NULL);
	}

IL_0016:
	{
		// return null;
		return (CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617*)NULL;
	}

IL_0018:
	{
		// return new DOTweenCYInstruction.WaitForPosition(t, position);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_4 = ___t0;
		float L_5 = ___position1;
		WaitForPosition_tF0BCBB4A3B9449099865C65EDAAAD360E2EBAD5F* L_6 = (WaitForPosition_tF0BCBB4A3B9449099865C65EDAAAD360E2EBAD5F*)il2cpp_codegen_object_new(WaitForPosition_tF0BCBB4A3B9449099865C65EDAAAD360E2EBAD5F_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForPosition__ctor_m218039DD8AEC82CDB8BF269764EC8566A4E01F6F(L_6, L_4, L_5, NULL);
		return L_6;
	}
}
// UnityEngine.CustomYieldInstruction DG.Tweening.DOTweenModuleUnityVersion::WaitForStart(DG.Tweening.Tween,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617* DOTweenModuleUnityVersion_WaitForStart_mE7E9F02D5CAF079B0F1C2002B633EA88C18AF3D1 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, bool ___returnCustomYieldInstruction1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForStart_t433A743135D1661E680A8AF21FB2EA42E3454D6E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!t.active) {
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = ___t0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// if (Debugger.logPriority > 0) Debugger.LogInvalidTween(t);
		int32_t L_2 = ((Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_il2cpp_TypeInfo_var))->___logPriority_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		// if (Debugger.logPriority > 0) Debugger.LogInvalidTween(t);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_3 = ___t0;
		Debugger_LogInvalidTween_mAFC797931C9804682F44DADE89781FFF5373FE38(L_3, NULL);
	}

IL_0016:
	{
		// return null;
		return (CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617*)NULL;
	}

IL_0018:
	{
		// return new DOTweenCYInstruction.WaitForStart(t);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_4 = ___t0;
		WaitForStart_t433A743135D1661E680A8AF21FB2EA42E3454D6E* L_5 = (WaitForStart_t433A743135D1661E680A8AF21FB2EA42E3454D6E*)il2cpp_codegen_object_new(WaitForStart_t433A743135D1661E680A8AF21FB2EA42E3454D6E_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitForStart__ctor_m733FFDFE0C36F20AA645593347BDAA8D0610D508(L_5, L_4, NULL);
		return L_5;
	}
}
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUnityVersion::DOOffset(UnityEngine.Material,UnityEngine.Vector2,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* DOTweenModuleUnityVersion_DOOffset_m5FE227A1D7FE40DEBFD0D15E9E2E140611E49BD4 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___target0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endValue1, int32_t ___propertyID2, float ___duration3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetTarget_TisTweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271_mF272823B402CB9764160EFC9736A61E67FAB5905_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CDOOffsetU3Eb__0_m313F8C26E8A72E7404065072AA78E9C737E35620_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CDOOffsetU3Eb__1_m4E8A169B481398D90A901BAD32A1CC0BDD77BAE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_t0BC7128A84649A7CEEEACF36F41DA06817654A1B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass8_0_t0BC7128A84649A7CEEEACF36F41DA06817654A1B* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass8_0_t0BC7128A84649A7CEEEACF36F41DA06817654A1B* L_0 = (U3CU3Ec__DisplayClass8_0_t0BC7128A84649A7CEEEACF36F41DA06817654A1B*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_0_t0BC7128A84649A7CEEEACF36F41DA06817654A1B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass8_0__ctor_m4E9AD608BFA5058EA275819037B5EE4E384311AA(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass8_0_t0BC7128A84649A7CEEEACF36F41DA06817654A1B* L_1 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = ___target0;
		NullCheck(L_1);
		L_1->___target_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___target_0), (void*)L_2);
		U3CU3Ec__DisplayClass8_0_t0BC7128A84649A7CEEEACF36F41DA06817654A1B* L_3 = V_0;
		int32_t L_4 = ___propertyID2;
		NullCheck(L_3);
		L_3->___propertyID_1 = L_4;
		// if (!target.HasProperty(propertyID)) {
		U3CU3Ec__DisplayClass8_0_t0BC7128A84649A7CEEEACF36F41DA06817654A1B* L_5 = V_0;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = L_5->___target_0;
		U3CU3Ec__DisplayClass8_0_t0BC7128A84649A7CEEEACF36F41DA06817654A1B* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___propertyID_1;
		NullCheck(L_6);
		bool L_9;
		L_9 = Material_HasProperty_m52E2D3BC3049B8B228149E023CD73C34B05A5222(L_6, L_8, NULL);
		if (L_9)
		{
			goto IL_003c;
		}
	}
	{
		// if (Debugger.logPriority > 0) Debugger.LogMissingMaterialProperty(propertyID);
		int32_t L_10 = ((Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_il2cpp_TypeInfo_var))->___logPriority_0;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		// if (Debugger.logPriority > 0) Debugger.LogMissingMaterialProperty(propertyID);
		U3CU3Ec__DisplayClass8_0_t0BC7128A84649A7CEEEACF36F41DA06817654A1B* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = L_11->___propertyID_1;
		Debugger_LogMissingMaterialProperty_m75067D6FDE153CE6A7EB324AD8AE3EF88E94635F(L_12, NULL);
	}

IL_003a:
	{
		// return null;
		return (TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271*)NULL;
	}

IL_003c:
	{
		// TweenerCore<Vector2, Vector2, VectorOptions> t = DOTween.To(() => target.GetTextureOffset(propertyID), x => target.SetTextureOffset(propertyID, x), endValue, duration);
		U3CU3Ec__DisplayClass8_0_t0BC7128A84649A7CEEEACF36F41DA06817654A1B* L_13 = V_0;
		DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66* L_14 = (DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66*)il2cpp_codegen_object_new(DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		DOGetter_1__ctor_m718AE8DCD0734283AD4D7B50ABBA14ED1F4A967C(L_14, L_13, (intptr_t)((void*)U3CU3Ec__DisplayClass8_0_U3CDOOffsetU3Eb__0_m313F8C26E8A72E7404065072AA78E9C737E35620_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass8_0_t0BC7128A84649A7CEEEACF36F41DA06817654A1B* L_15 = V_0;
		DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C* L_16 = (DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C*)il2cpp_codegen_object_new(DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		DOSetter_1__ctor_m5034440D649E86F21337C9E4B543B0C6E97A058A(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass8_0_U3CDOOffsetU3Eb__1_m4E8A169B481398D90A901BAD32A1CC0BDD77BAE8_RuntimeMethod_var), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = ___endValue1;
		float L_18 = ___duration3;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_19;
		L_19 = DOTween_To_mF215C7DB648587734BECEEBB7D450C69536A9E16(L_14, L_16, L_17, L_18, NULL);
		// t.SetTarget(target);
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_20 = L_19;
		U3CU3Ec__DisplayClass8_0_t0BC7128A84649A7CEEEACF36F41DA06817654A1B* L_21 = V_0;
		NullCheck(L_21);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = L_21->___target_0;
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_23;
		L_23 = TweenSettingsExtensions_SetTarget_TisTweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271_mF272823B402CB9764160EFC9736A61E67FAB5905(L_20, L_22, TweenSettingsExtensions_SetTarget_TisTweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271_mF272823B402CB9764160EFC9736A61E67FAB5905_RuntimeMethod_var);
		// return t;
		return L_20;
	}
}
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUnityVersion::DOTiling(UnityEngine.Material,UnityEngine.Vector2,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* DOTweenModuleUnityVersion_DOTiling_m46B35DDADB688BEB85EB21A5593E240C5FD990A6 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___target0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endValue1, int32_t ___propertyID2, float ___duration3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetTarget_TisTweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271_mF272823B402CB9764160EFC9736A61E67FAB5905_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CDOTilingU3Eb__0_m32DCD53537E5D9250D043396A6636431DA4AC5DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CDOTilingU3Eb__1_m586EE9E78A2967588A473314F2E4DDF7852A89A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_t92DEC026B7002B0486BADC6128E6F7B57AC40A92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass9_0_t92DEC026B7002B0486BADC6128E6F7B57AC40A92* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass9_0_t92DEC026B7002B0486BADC6128E6F7B57AC40A92* L_0 = (U3CU3Ec__DisplayClass9_0_t92DEC026B7002B0486BADC6128E6F7B57AC40A92*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass9_0_t92DEC026B7002B0486BADC6128E6F7B57AC40A92_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass9_0__ctor_m34A953C85477B2BD1B635BDAF8885267ACDAFEEA(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass9_0_t92DEC026B7002B0486BADC6128E6F7B57AC40A92* L_1 = V_0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = ___target0;
		NullCheck(L_1);
		L_1->___target_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___target_0), (void*)L_2);
		U3CU3Ec__DisplayClass9_0_t92DEC026B7002B0486BADC6128E6F7B57AC40A92* L_3 = V_0;
		int32_t L_4 = ___propertyID2;
		NullCheck(L_3);
		L_3->___propertyID_1 = L_4;
		// if (!target.HasProperty(propertyID)) {
		U3CU3Ec__DisplayClass9_0_t92DEC026B7002B0486BADC6128E6F7B57AC40A92* L_5 = V_0;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = L_5->___target_0;
		U3CU3Ec__DisplayClass9_0_t92DEC026B7002B0486BADC6128E6F7B57AC40A92* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___propertyID_1;
		NullCheck(L_6);
		bool L_9;
		L_9 = Material_HasProperty_m52E2D3BC3049B8B228149E023CD73C34B05A5222(L_6, L_8, NULL);
		if (L_9)
		{
			goto IL_003c;
		}
	}
	{
		// if (Debugger.logPriority > 0) Debugger.LogMissingMaterialProperty(propertyID);
		int32_t L_10 = ((Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_il2cpp_TypeInfo_var))->___logPriority_0;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		// if (Debugger.logPriority > 0) Debugger.LogMissingMaterialProperty(propertyID);
		U3CU3Ec__DisplayClass9_0_t92DEC026B7002B0486BADC6128E6F7B57AC40A92* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = L_11->___propertyID_1;
		Debugger_LogMissingMaterialProperty_m75067D6FDE153CE6A7EB324AD8AE3EF88E94635F(L_12, NULL);
	}

IL_003a:
	{
		// return null;
		return (TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271*)NULL;
	}

IL_003c:
	{
		// TweenerCore<Vector2, Vector2, VectorOptions> t = DOTween.To(() => target.GetTextureScale(propertyID), x => target.SetTextureScale(propertyID, x), endValue, duration);
		U3CU3Ec__DisplayClass9_0_t92DEC026B7002B0486BADC6128E6F7B57AC40A92* L_13 = V_0;
		DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66* L_14 = (DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66*)il2cpp_codegen_object_new(DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		DOGetter_1__ctor_m718AE8DCD0734283AD4D7B50ABBA14ED1F4A967C(L_14, L_13, (intptr_t)((void*)U3CU3Ec__DisplayClass9_0_U3CDOTilingU3Eb__0_m32DCD53537E5D9250D043396A6636431DA4AC5DE_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass9_0_t92DEC026B7002B0486BADC6128E6F7B57AC40A92* L_15 = V_0;
		DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C* L_16 = (DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C*)il2cpp_codegen_object_new(DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		DOSetter_1__ctor_m5034440D649E86F21337C9E4B543B0C6E97A058A(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass9_0_U3CDOTilingU3Eb__1_m586EE9E78A2967588A473314F2E4DDF7852A89A7_RuntimeMethod_var), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = ___endValue1;
		float L_18 = ___duration3;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_19;
		L_19 = DOTween_To_mF215C7DB648587734BECEEBB7D450C69536A9E16(L_14, L_16, L_17, L_18, NULL);
		// t.SetTarget(target);
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_20 = L_19;
		U3CU3Ec__DisplayClass9_0_t92DEC026B7002B0486BADC6128E6F7B57AC40A92* L_21 = V_0;
		NullCheck(L_21);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = L_21->___target_0;
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_23;
		L_23 = TweenSettingsExtensions_SetTarget_TisTweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271_mF272823B402CB9764160EFC9736A61E67FAB5905(L_20, L_22, TweenSettingsExtensions_SetTarget_TisTweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271_mF272823B402CB9764160EFC9736A61E67FAB5905_RuntimeMethod_var);
		// return t;
		return L_20;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m4E9AD608BFA5058EA275819037B5EE4E384311AA (U3CU3Ec__DisplayClass8_0_t0BC7128A84649A7CEEEACF36F41DA06817654A1B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Vector2 DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass8_0::<DOOffset>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 U3CU3Ec__DisplayClass8_0_U3CDOOffsetU3Eb__0_m313F8C26E8A72E7404065072AA78E9C737E35620 (U3CU3Ec__DisplayClass8_0_t0BC7128A84649A7CEEEACF36F41DA06817654A1B* __this, const RuntimeMethod* method) 
{
	{
		// TweenerCore<Vector2, Vector2, VectorOptions> t = DOTween.To(() => target.GetTextureOffset(propertyID), x => target.SetTextureOffset(propertyID, x), endValue, duration);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___target_0;
		int32_t L_1 = __this->___propertyID_1;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Material_GetTextureOffset_m184386CB88C6333F160E869ACDC1738DB8269412(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass8_0::<DOOffset>b__1(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CDOOffsetU3Eb__1_m4E8A169B481398D90A901BAD32A1CC0BDD77BAE8 (U3CU3Ec__DisplayClass8_0_t0BC7128A84649A7CEEEACF36F41DA06817654A1B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___x0, const RuntimeMethod* method) 
{
	{
		// TweenerCore<Vector2, Vector2, VectorOptions> t = DOTween.To(() => target.GetTextureOffset(propertyID), x => target.SetTextureOffset(propertyID, x), endValue, duration);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___target_0;
		int32_t L_1 = __this->___propertyID_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___x0;
		NullCheck(L_0);
		Material_SetTextureOffset_mB28E782AE9F9B4CB9D36F209C976F8A0FE7DF747(L_0, L_1, L_2, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m34A953C85477B2BD1B635BDAF8885267ACDAFEEA (U3CU3Ec__DisplayClass9_0_t92DEC026B7002B0486BADC6128E6F7B57AC40A92* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Vector2 DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass9_0::<DOTiling>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 U3CU3Ec__DisplayClass9_0_U3CDOTilingU3Eb__0_m32DCD53537E5D9250D043396A6636431DA4AC5DE (U3CU3Ec__DisplayClass9_0_t92DEC026B7002B0486BADC6128E6F7B57AC40A92* __this, const RuntimeMethod* method) 
{
	{
		// TweenerCore<Vector2, Vector2, VectorOptions> t = DOTween.To(() => target.GetTextureScale(propertyID), x => target.SetTextureScale(propertyID, x), endValue, duration);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___target_0;
		int32_t L_1 = __this->___propertyID_1;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Material_GetTextureScale_m18C0A99FD39A562A8C776265419D381012FE1FB3(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void DG.Tweening.DOTweenModuleUnityVersion/<>c__DisplayClass9_0::<DOTiling>b__1(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_U3CDOTilingU3Eb__1_m586EE9E78A2967588A473314F2E4DDF7852A89A7 (U3CU3Ec__DisplayClass9_0_t92DEC026B7002B0486BADC6128E6F7B57AC40A92* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___x0, const RuntimeMethod* method) 
{
	{
		// TweenerCore<Vector2, Vector2, VectorOptions> t = DOTween.To(() => target.GetTextureScale(propertyID), x => target.SetTextureScale(propertyID, x), endValue, duration);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___target_0;
		int32_t L_1 = __this->___propertyID_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___x0;
		NullCheck(L_0);
		Material_SetTextureScale_mBA092A3DCD393695B32801FD05F70A8CC58CB89D(L_0, L_1, L_2, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean DG.Tweening.DOTweenCYInstruction/WaitForCompletion::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitForCompletion_get_keepWaiting_mC42F1D87B76571FEF5C96EB25CD2F233A7FBDDE2 (WaitForCompletion_tAB7AA0856589EAB871607AC6F70578EFDED1816A* __this, const RuntimeMethod* method) 
{
	{
		// return t.active && !t.IsComplete();
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = __this->___t_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_2 = __this->___t_0;
		bool L_3;
		L_3 = TweenExtensions_IsComplete_mCB9C775CFE13C8F43A5AD89A171D7A65DD1470AF(L_2, NULL);
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}

IL_001c:
	{
		return (bool)0;
	}
}
// System.Void DG.Tweening.DOTweenCYInstruction/WaitForCompletion::.ctor(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForCompletion__ctor_m194FFB6935EC44D8EBF9596755B410A7F3CAECDA (WaitForCompletion_tAB7AA0856589EAB871607AC6F70578EFDED1816A* __this, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___tween0, const RuntimeMethod* method) 
{
	{
		// public WaitForCompletion(Tween tween)
		CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50(__this, NULL);
		// t = tween;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = ___tween0;
		__this->___t_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___t_0), (void*)L_0);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean DG.Tweening.DOTweenCYInstruction/WaitForRewind::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitForRewind_get_keepWaiting_mDC4ACCB00D1A64C9D59ED14620D3472036D2755E (WaitForRewind_t873799FBB04DE3DF4EFA17E667A31070558F0F3F* __this, const RuntimeMethod* method) 
{
	{
		// return t.active && (!t.playedOnce || t.position * (t.CompletedLoops() + 1) > 0);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = __this->___t_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_2 = __this->___t_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Tween_get_playedOnce_mDA42B6964058549DB8BBC9217DBBB2F0EB67A335_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_4 = __this->___t_0;
		NullCheck(L_4);
		float L_5;
		L_5 = Tween_get_position_mF8A2FF9C0DA291DEC595AC8C00E2E096A009B5A8_inline(L_4, NULL);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_6 = __this->___t_0;
		int32_t L_7;
		L_7 = TweenExtensions_CompletedLoops_m253FC273A466CFE503310EC5600F9CF2893E9010(L_6, NULL);
		return (bool)((((float)((float)il2cpp_codegen_multiply(L_5, ((float)((int32_t)il2cpp_codegen_add(L_7, 1)))))) > ((float)(0.0f)))? 1 : 0);
	}

IL_003c:
	{
		return (bool)1;
	}

IL_003e:
	{
		return (bool)0;
	}
}
// System.Void DG.Tweening.DOTweenCYInstruction/WaitForRewind::.ctor(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForRewind__ctor_m8FA908A77DFFAACB814B717915EAFBDA10B2FB36 (WaitForRewind_t873799FBB04DE3DF4EFA17E667A31070558F0F3F* __this, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___tween0, const RuntimeMethod* method) 
{
	{
		// public WaitForRewind(Tween tween)
		CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50(__this, NULL);
		// t = tween;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = ___tween0;
		__this->___t_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___t_0), (void*)L_0);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean DG.Tweening.DOTweenCYInstruction/WaitForKill::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitForKill_get_keepWaiting_mC3BC5155F3822FA2486800624680EA65464044D4 (WaitForKill_tC61AE96CD4540172B46C9FE9FABEA26675CCE73F* __this, const RuntimeMethod* method) 
{
	{
		// return t.active;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = __this->___t_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenCYInstruction/WaitForKill::.ctor(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForKill__ctor_m13C20AC2C9C2809AD51B8CEA30F11AACB4ECC64C (WaitForKill_tC61AE96CD4540172B46C9FE9FABEA26675CCE73F* __this, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___tween0, const RuntimeMethod* method) 
{
	{
		// public WaitForKill(Tween tween)
		CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50(__this, NULL);
		// t = tween;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = ___tween0;
		__this->___t_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___t_0), (void*)L_0);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean DG.Tweening.DOTweenCYInstruction/WaitForElapsedLoops::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitForElapsedLoops_get_keepWaiting_mD62F90B0E8F34349F6CBCAD1DEE8C69F6AC9A4A0 (WaitForElapsedLoops_tFF8E4E7D40D733F6146707809EA8A3F28FC526C7* __this, const RuntimeMethod* method) 
{
	{
		// return t.active && t.CompletedLoops() < elapsedLoops;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = __this->___t_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_2 = __this->___t_0;
		int32_t L_3;
		L_3 = TweenExtensions_CompletedLoops_m253FC273A466CFE503310EC5600F9CF2893E9010(L_2, NULL);
		int32_t L_4 = __this->___elapsedLoops_1;
		return (bool)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0);
	}

IL_0021:
	{
		return (bool)0;
	}
}
// System.Void DG.Tweening.DOTweenCYInstruction/WaitForElapsedLoops::.ctor(DG.Tweening.Tween,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForElapsedLoops__ctor_mA2399269DDE36055552944650E8862464AAFF448 (WaitForElapsedLoops_tFF8E4E7D40D733F6146707809EA8A3F28FC526C7* __this, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___tween0, int32_t ___elapsedLoops1, const RuntimeMethod* method) 
{
	{
		// public WaitForElapsedLoops(Tween tween, int elapsedLoops)
		CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50(__this, NULL);
		// t = tween;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = ___tween0;
		__this->___t_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___t_0), (void*)L_0);
		// this.elapsedLoops = elapsedLoops;
		int32_t L_1 = ___elapsedLoops1;
		__this->___elapsedLoops_1 = L_1;
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean DG.Tweening.DOTweenCYInstruction/WaitForPosition::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitForPosition_get_keepWaiting_mCE1EBD6DFC3462C603585CE8DD978F582FC0ADA6 (WaitForPosition_tF0BCBB4A3B9449099865C65EDAAAD360E2EBAD5F* __this, const RuntimeMethod* method) 
{
	{
		// return t.active && t.position * (t.CompletedLoops() + 1) < position;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = __this->___t_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_2 = __this->___t_0;
		NullCheck(L_2);
		float L_3;
		L_3 = Tween_get_position_mF8A2FF9C0DA291DEC595AC8C00E2E096A009B5A8_inline(L_2, NULL);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_4 = __this->___t_0;
		int32_t L_5;
		L_5 = TweenExtensions_CompletedLoops_m253FC273A466CFE503310EC5600F9CF2893E9010(L_4, NULL);
		float L_6 = __this->___position_1;
		return (bool)((((float)((float)il2cpp_codegen_multiply(L_3, ((float)((int32_t)il2cpp_codegen_add(L_5, 1)))))) < ((float)L_6))? 1 : 0);
	}

IL_0030:
	{
		return (bool)0;
	}
}
// System.Void DG.Tweening.DOTweenCYInstruction/WaitForPosition::.ctor(DG.Tweening.Tween,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForPosition__ctor_m218039DD8AEC82CDB8BF269764EC8566A4E01F6F (WaitForPosition_tF0BCBB4A3B9449099865C65EDAAAD360E2EBAD5F* __this, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___tween0, float ___position1, const RuntimeMethod* method) 
{
	{
		// public WaitForPosition(Tween tween, float position)
		CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50(__this, NULL);
		// t = tween;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = ___tween0;
		__this->___t_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___t_0), (void*)L_0);
		// this.position = position;
		float L_1 = ___position1;
		__this->___position_1 = L_1;
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean DG.Tweening.DOTweenCYInstruction/WaitForStart::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitForStart_get_keepWaiting_mF6E49FFC399C5642C630865FCCB38FA56DCA890D (WaitForStart_t433A743135D1661E680A8AF21FB2EA42E3454D6E* __this, const RuntimeMethod* method) 
{
	{
		// return t.active && !t.playedOnce;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = __this->___t_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_2 = __this->___t_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Tween_get_playedOnce_mDA42B6964058549DB8BBC9217DBBB2F0EB67A335_inline(L_2, NULL);
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}

IL_001c:
	{
		return (bool)0;
	}
}
// System.Void DG.Tweening.DOTweenCYInstruction/WaitForStart::.ctor(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForStart__ctor_m733FFDFE0C36F20AA645593347BDAA8D0610D508 (WaitForStart_t433A743135D1661E680A8AF21FB2EA42E3454D6E* __this, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___tween0, const RuntimeMethod* method) 
{
	{
		// public WaitForStart(Tween tween)
		CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50(__this, NULL);
		// t = tween;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = ___tween0;
		__this->___t_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___t_0), (void*)L_0);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUtils::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenModuleUtils_Init_m9F7938AFFD814978DEE9140ED34B6E6647711324 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_4_t9AF66ACF00E5AEB0F9B4A06FAEFEA18B2F266BDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTweenModuleUtils_t4EBAB398B726A88AED897FA67BD8CD035A214EE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics_SetOrientationOnPath_m7909652CCC78E77ADE33C5BEB4BFF42AA536A7D1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_initialized) return;
		bool L_0 = ((DOTweenModuleUtils_t4EBAB398B726A88AED897FA67BD8CD035A214EE3_StaticFields*)il2cpp_codegen_static_fields_for(DOTweenModuleUtils_t4EBAB398B726A88AED897FA67BD8CD035A214EE3_il2cpp_TypeInfo_var))->____initialized_0;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (_initialized) return;
		return;
	}

IL_0008:
	{
		// _initialized = true;
		((DOTweenModuleUtils_t4EBAB398B726A88AED897FA67BD8CD035A214EE3_StaticFields*)il2cpp_codegen_static_fields_for(DOTweenModuleUtils_t4EBAB398B726A88AED897FA67BD8CD035A214EE3_il2cpp_TypeInfo_var))->____initialized_0 = (bool)1;
		// DOTweenExternalCommand.SetOrientationOnPath += Physics.SetOrientationOnPath;
		Action_4_t9AF66ACF00E5AEB0F9B4A06FAEFEA18B2F266BDB* L_1 = (Action_4_t9AF66ACF00E5AEB0F9B4A06FAEFEA18B2F266BDB*)il2cpp_codegen_object_new(Action_4_t9AF66ACF00E5AEB0F9B4A06FAEFEA18B2F266BDB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_4__ctor_mE887FA5D76A46664CDCF21964B144098A77B4DD5(L_1, NULL, (intptr_t)((void*)Physics_SetOrientationOnPath_m7909652CCC78E77ADE33C5BEB4BFF42AA536A7D1_RuntimeMethod_var), NULL);
		DOTweenExternalCommand_add_SetOrientationOnPath_mF54FD2C2EA761742914CC491054EF011BE2A6C17(L_1, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenModuleUtils::Preserver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenModuleUtils_Preserver_m5BBFCFD03A1E22FF9651F2407FB32FBDACFBEFDD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D1BA8C0E521925077224DB11A6C93FB8E930E14);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Assembly[] loadedAssemblies = AppDomain.CurrentDomain.GetAssemblies();
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_0;
		L_0 = AppDomain_get_CurrentDomain_m5085B6AF21A19506C85E0650C46BE35A18011CFE(NULL);
		NullCheck(L_0);
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_1;
		L_1 = AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249(L_0, NULL);
		// MethodInfo mi = typeof(MonoBehaviour).GetMethod("Stub");
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		NullCheck(L_3);
		MethodInfo_t* L_4;
		L_4 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_3, _stringLiteral0D1BA8C0E521925077224DB11A6C93FB8E930E14, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenModuleUtils/Physics::SetOrientationOnPath(DG.Tweening.Plugins.Options.PathOptions,DG.Tweening.Tween,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Physics_SetOrientationOnPath_m7909652CCC78E77ADE33C5BEB4BFF42AA536A7D1 (PathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A ___options0, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___newRot2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___trans3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rigidbody_t268697F5A994213ED97393309870968BC1C7393C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (options.isRigidbody) ((Rigidbody)t.target).rotation = newRot;
		PathOptions_t76F1CBAC082454349D530B799121EB15BFA4CB3A L_0 = ___options0;
		bool L_1 = L_0.___isRigidbody_12;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// if (options.isRigidbody) ((Rigidbody)t.target).rotation = newRot;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_2 = ___t1;
		NullCheck(L_2);
		RuntimeObject* L_3 = L_2->___target_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___newRot2;
		NullCheck(((Rigidbody_t268697F5A994213ED97393309870968BC1C7393C*)CastclassClass((RuntimeObject*)L_3, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C_il2cpp_TypeInfo_var)));
		Rigidbody_set_rotation_mF2FC85A4A26AD9FED7DE0061889DF5A408461A5D(((Rigidbody_t268697F5A994213ED97393309870968BC1C7393C*)CastclassClass((RuntimeObject*)L_3, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C_il2cpp_TypeInfo_var)), L_4, NULL);
		return;
	}

IL_001a:
	{
		// else trans.rotation = newRot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___trans3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___newRot2;
		NullCheck(L_5);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Boolean DG.Tweening.DOTweenModuleUtils/Physics::HasRigidbody2D(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_HasRigidbody2D_m7B055F7D6B725DCE1616DE1BCAC6AF1E402946E6 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___target0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return target.GetComponent<Rigidbody2D>() != null;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_0 = ___target0;
		NullCheck(L_0);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1;
		L_1 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(L_0, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_2;
	}
}
// System.Boolean DG.Tweening.DOTweenModuleUtils/Physics::HasRigidbody(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_HasRigidbody_m49C216B000D976B6AD22EA36C29BB922F4B02A2B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___target0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return target.GetComponent<Rigidbody>() != null;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_0 = ___target0;
		NullCheck(L_0);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1;
		L_1 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_0, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_2;
	}
}
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.DOTweenModuleUtils/Physics::CreateDOTweenPathTween(UnityEngine.MonoBehaviour,System.Boolean,System.Boolean,DG.Tweening.Plugins.Core.PathCore.Path,System.Single,DG.Tweening.PathMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* Physics_CreateDOTweenPathTween_mFA2C0271A146797AB71CD136F2A56ECA3A5AAB5C (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* ___target0, bool ___tweenRigidbody1, bool ___isLocal2, Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* ___path3, float ___duration4, int32_t ___pathMode5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* V_0 = NULL;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_1 = NULL;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* G_B3_0 = NULL;
	TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* G_B8_0 = NULL;
	TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* G_B12_0 = NULL;
	{
		// Rigidbody rBody = tweenRigidbody ? target.GetComponent<Rigidbody>() : null;
		bool L_0 = ___tweenRigidbody1;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = ((Rigidbody_t268697F5A994213ED97393309870968BC1C7393C*)(NULL));
		goto IL_000c;
	}

IL_0006:
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_1 = ___target0;
		NullCheck(L_1);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2;
		L_2 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_1, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		V_1 = G_B3_0;
		// if (tweenRigidbody && rBody != null) {
		bool L_3 = ___tweenRigidbody1;
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		// t = isLocal
		//     ? rBody.DOLocalPath(path, duration, pathMode)
		//     : rBody.DOPath(path, duration, pathMode);
		bool L_6 = ___isLocal2;
		if (L_6)
		{
			goto IL_0029;
		}
	}
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = V_1;
		Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* L_8 = ___path3;
		float L_9 = ___duration4;
		int32_t L_10 = ___pathMode5;
		TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* L_11;
		L_11 = DOTweenModulePhysics_DOPath_m420764C2597301E7048F11600713705AD0DADC1A(L_7, L_8, L_9, L_10, NULL);
		G_B8_0 = L_11;
		goto IL_0034;
	}

IL_0029:
	{
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_12 = V_1;
		Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* L_13 = ___path3;
		float L_14 = ___duration4;
		int32_t L_15 = ___pathMode5;
		TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* L_16;
		L_16 = DOTweenModulePhysics_DOLocalPath_m720A2CA6D647E4D8AAA386F83F4FE96E08C73082(L_12, L_13, L_14, L_15, NULL);
		G_B8_0 = L_16;
	}

IL_0034:
	{
		V_0 = G_B8_0;
		goto IL_005d;
	}

IL_0037:
	{
		// t = isLocal
		//     ? target.transform.DOLocalPath(path, duration, pathMode)
		//     : target.transform.DOPath(path, duration, pathMode);
		bool L_17 = ___isLocal2;
		if (L_17)
		{
			goto IL_004c;
		}
	}
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_18 = ___target0;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* L_20 = ___path3;
		float L_21 = ___duration4;
		int32_t L_22 = ___pathMode5;
		TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* L_23;
		L_23 = ShortcutExtensions_DOPath_mC553183F6D3166B6A080C77FDEC1F7208E20D48C(L_19, L_20, L_21, L_22, NULL);
		G_B12_0 = L_23;
		goto IL_005c;
	}

IL_004c:
	{
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_24 = ___target0;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_24, NULL);
		Path_t6EC35555EF601CAFED947AC467DEBA7C1496A0C3* L_26 = ___path3;
		float L_27 = ___duration4;
		int32_t L_28 = ___pathMode5;
		TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* L_29;
		L_29 = ShortcutExtensions_DOLocalPath_m35A57A613EB260260F5825CA4F34EFFA8731C315(L_25, L_26, L_27, L_28, NULL);
		G_B12_0 = L_29;
	}

IL_005c:
	{
		V_0 = G_B12_0;
	}

IL_005d:
	{
		// return t;
		TweenerCore_3_t4911E6704673AA7505D10A9D0B0D989CEC689DCA* L_30 = V_0;
		return L_30;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenAnimation::add_OnReset(System.Action`1<DG.Tweening.DOTweenAnimation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_add_OnReset_mD7AC9EFC9BD3AB33F0D99B4A81D93F9D154AED00 (Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542* V_0 = NULL;
	Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542* V_1 = NULL;
	Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542* V_2 = NULL;
	{
		Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542* L_0 = ((DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_StaticFields*)il2cpp_codegen_static_fields_for(DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_il2cpp_TypeInfo_var))->___OnReset_21;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542* L_1 = V_0;
		V_1 = L_1;
		Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542* L_2 = V_1;
		Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542*)Castclass((RuntimeObject*)L_4, Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542_il2cpp_TypeInfo_var));
		Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542* L_5 = V_2;
		Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542* L_6 = V_1;
		Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542*>((&((DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_StaticFields*)il2cpp_codegen_static_fields_for(DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_il2cpp_TypeInfo_var))->___OnReset_21), L_5, L_6);
		V_0 = L_7;
		Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542* L_8 = V_0;
		Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542*)L_8) == ((RuntimeObject*)(Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::remove_OnReset(System.Action`1<DG.Tweening.DOTweenAnimation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_remove_OnReset_m1CF0F7FD188F09050137BC0A3E84197EE84EC010 (Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542* V_0 = NULL;
	Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542* V_1 = NULL;
	Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542* V_2 = NULL;
	{
		Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542* L_0 = ((DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_StaticFields*)il2cpp_codegen_static_fields_for(DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_il2cpp_TypeInfo_var))->___OnReset_21;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542* L_1 = V_0;
		V_1 = L_1;
		Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542* L_2 = V_1;
		Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542*)Castclass((RuntimeObject*)L_4, Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542_il2cpp_TypeInfo_var));
		Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542* L_5 = V_2;
		Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542* L_6 = V_1;
		Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542*>((&((DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_StaticFields*)il2cpp_codegen_static_fields_for(DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_il2cpp_TypeInfo_var))->___OnReset_21), L_5, L_6);
		V_0 = L_7;
		Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542* L_8 = V_0;
		Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542*)L_8) == ((RuntimeObject*)(Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::Dispatch_OnReset(DG.Tweening.DOTweenAnimation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_Dispatch_OnReset_m9EB81885C06EAC1DB8153F1E9BACFDC1A36CF0B1 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* ___anim0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static void Dispatch_OnReset(DOTweenAnimation anim) { if (OnReset != null) OnReset(anim); }
		Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542* L_0 = ((DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_StaticFields*)il2cpp_codegen_static_fields_for(DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_il2cpp_TypeInfo_var))->___OnReset_21;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// static void Dispatch_OnReset(DOTweenAnimation anim) { if (OnReset != null) OnReset(anim); }
		Action_1_t5C764B5BFE1F560B0DD9B5209D21BEFF779DC542* L_1 = ((DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_StaticFields*)il2cpp_codegen_static_fields_for(DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_il2cpp_TypeInfo_var))->___OnReset_21;
		DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* L_2 = ___anim0;
		NullCheck(L_1);
		Action_1_Invoke_mD6928EDD89A12A4CE935F3D87485A923CDB06521_inline(L_1, L_2, NULL);
	}

IL_0012:
	{
		// static void Dispatch_OnReset(DOTweenAnimation anim) { if (OnReset != null) OnReset(anim); }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_Awake_m8531F674633C180916C447ACF6C986EC18AF7B3B (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	{
		// if (!isActive || !isValid) return;
		bool L_0 = __this->___isActive_36;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___isValid_37;
		if (L_1)
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// if (!isActive || !isValid) return;
		return;
	}

IL_0011:
	{
		// if (animationType != AnimationType.Move || !useTargetAsV3) {
		int32_t L_2 = __this->___animationType_39;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0022;
		}
	}
	{
		bool L_3 = __this->___useTargetAsV3_43;
		if (L_3)
		{
			goto IL_002f;
		}
	}

IL_0022:
	{
		// CreateTween();
		DOTweenAnimation_CreateTween_m91F4DAB080F554854AF7953DC7EF81409098F8F2(__this, NULL);
		// _tweenCreated = true;
		__this->____tweenCreated_57 = (bool)1;
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_Start_m908C8FD2C7336E4F04E22B4C7A821F22F621C905 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	{
		// if (_tweenCreated || !isActive || !isValid) return;
		bool L_0 = __this->____tweenCreated_57;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1 = __this->___isActive_36;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		bool L_2 = __this->___isValid_37;
		if (L_2)
		{
			goto IL_0019;
		}
	}

IL_0018:
	{
		// if (_tweenCreated || !isActive || !isValid) return;
		return;
	}

IL_0019:
	{
		// CreateTween();
		DOTweenAnimation_CreateTween_m91F4DAB080F554854AF7953DC7EF81409098F8F2(__this, NULL);
		// _tweenCreated = true;
		__this->____tweenCreated_57 = (bool)1;
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_Reset_m1A971B53301876CD61305BECD912B64B3766F76E (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	{
		// Dispatch_OnReset(this);
		DOTweenAnimation_Dispatch_OnReset_m9EB81885C06EAC1DB8153F1E9BACFDC1A36CF0B1(__this, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_OnDestroy_mCE1919BF0059EA93C96345E2D2F7C0BE0F61B9AC (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	{
		// if (tween != null && tween.IsActive()) tween.Kill();
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_1 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		bool L_2;
		L_2 = TweenExtensions_IsActive_m0361F513A18C4128C4DBF88EF1E2F4752D97DF4A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// if (tween != null && tween.IsActive()) tween.Kill();
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_3 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		TweenExtensions_Kill_m41BEF5EBF8C1633EC918DD60ADF82F5C63EC8ED5(L_3, (bool)0, NULL);
	}

IL_0021:
	{
		// tween = null;
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)(Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::CreateTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_CreateTween_m91F4DAB080F554854AF7953DC7EF81409098F8F2 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTweenAnimation_U3CCreateTweenU3Eb__47_0_mBD3557DDE92EE0029CF11BEFCEC3534AD5A5C283_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rigidbody_t268697F5A994213ED97393309870968BC1C7393C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenExtensions_Pause_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m42F0E805CDAC03AC764CBEDE7E2F7C607F6B58CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenExtensions_Play_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m2442DE0FF8CACF03EFB5003191303DBC489F9BF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_From_TisTweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_mC60C392D6D33305FE03E8995161FEEAC84674A95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mE67BCE455C598621EAFC075DFFFAF4167B4E2371_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnKill_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m4CF744A4FBB459014140B0874C75DBC7F87FE913_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnPlay_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m9C9D8B73E053554A7422ED2F1A7B1490AE3F9EB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnRewind_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mB9DF6C423E1258FFF3FD11A7A68D79EE7189DB3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnStart_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m28C40BE2EBE0F617AA3E4827F3614CD952C8DF8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnStepComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mFFA7C039D354B88FCFAD8C72833711A4795FC0FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnUpdate_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m3C099B9F7E199FBB7AF586E353AE96D45AA09D9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetAutoKill_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m1A67DB04ED6B16569A6DC9670F7F1849A5376E21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetDelay_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m301CF7B6B171BF1CF43646D0D760594BC46B1FEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m3C5C67CF8DAAA89EE45BD950D622DDC7517DD049_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m507E6328745F0217F303765142C237DBA1DF2DA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetId_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mBF22773A2E9D87F70207B32FBCD99108EC365E2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetLoops_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m7F9CA723CCD313DB084E94DF8C80C5F579B509B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetRelative_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m65EE3617250D5AD8873E9873D48962D3634F6483_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetSpeedBased_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mEEE8E789F246C3E180032AE6AE597AD27DA887B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetTarget_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mCEF56ADE6E6FB782E6DED1C3D5E9AEB2309FB0F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetUpdate_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m172E7B547CCEA4E9DACC2AB397958EFEE67BBF36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71F308FB57202965E618BD0381AEBFDEEDF31F75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BCD07D6842DC528F48EA9D13B36828C4A3980CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852803C0E0511404910B712837FFA455156FC4CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2996F43EBFFA914B746B5861EC325951281A3EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0AD9F8B1A2A2D534505FEA8D4D74C1BFD40753F);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	int32_t V_2 = 0;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_3 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_4 = NULL;
	int32_t V_5 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B37_0 = NULL;
	DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* G_B37_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B36_0 = NULL;
	DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* G_B36_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B38_0;
	memset((&G_B38_0), 0, sizeof(G_B38_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B38_1 = NULL;
	DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* G_B38_2 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B41_0 = NULL;
	DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* G_B41_1 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B40_0 = NULL;
	DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* G_B40_1 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B42_0;
	memset((&G_B42_0), 0, sizeof(G_B42_0));
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B42_1 = NULL;
	DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* G_B42_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B87_0 = NULL;
	{
		// GameObject tweenGO = GetTweenGO();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = DOTweenAnimation_GetTweenGO_mAA4B88621B513AD6D7A76032131659A2453654CC(__this, NULL);
		V_0 = L_0;
		// if (target == null || tweenGO == null) {
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_1 = __this->___target_38;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0076;
		}
	}

IL_001e:
	{
		// if (targetIsSelf && target == null) {
		bool L_5 = __this->___targetIsSelf_22;
		if (!L_5)
		{
			goto IL_0055;
		}
	}
	{
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_6 = __this->___target_38;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		// Debug.LogWarning(string.Format("{0} :: This DOTweenAnimation's target is NULL, because the animation was created with a DOTween Pro version older than 0.9.255. To fix this, exit Play mode then simply select this object, and it will update automatically", this.gameObject.name), this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_8, NULL);
		String_t* L_10;
		L_10 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral852803C0E0511404910B712837FFA455156FC4CE, L_9, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m5C8299150E64600CBF5C92706AD610C21D0C0DC5(L_10, L_11, NULL);
		return;
	}

IL_0055:
	{
		// Debug.LogWarning(string.Format("{0} :: This DOTweenAnimation's target/GameObject is unset: the tween will not be created.", this.gameObject.name), this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_12, NULL);
		String_t* L_14;
		L_14 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral7BCD07D6842DC528F48EA9D13B36828C4A3980CE, L_13, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m5C8299150E64600CBF5C92706AD610C21D0C0DC5(L_14, L_15, NULL);
		// return;
		return;
	}

IL_0076:
	{
		// if (forcedTargetType != TargetType.Unset) targetType = forcedTargetType;
		int32_t L_16 = __this->___forcedTargetType_41;
		if (!L_16)
		{
			goto IL_008a;
		}
	}
	{
		// if (forcedTargetType != TargetType.Unset) targetType = forcedTargetType;
		int32_t L_17 = __this->___forcedTargetType_41;
		__this->___targetType_40 = L_17;
	}

IL_008a:
	{
		// if (targetType == TargetType.Unset) {
		int32_t L_18 = __this->___targetType_40;
		if (L_18)
		{
			goto IL_00a8;
		}
	}
	{
		// targetType = TypeToDOTargetType(target.GetType());
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_19 = __this->___target_38;
		NullCheck(L_19);
		Type_t* L_20;
		L_20 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_19, NULL);
		int32_t L_21;
		L_21 = DOTweenAnimation_TypeToDOTargetType_mD0026308F78DB2907DAFA8B790AF57437D031D3C(L_20, NULL);
		__this->___targetType_40 = L_21;
	}

IL_00a8:
	{
		// switch (animationType) {
		int32_t L_22 = __this->___animationType_39;
		V_2 = L_22;
		int32_t L_23 = V_2;
		switch (L_23)
		{
			case 0:
			{
				goto IL_09ab;
			}
			case 1:
			{
				goto IL_0112;
			}
			case 2:
			{
				goto IL_02fa;
			}
			case 3:
			{
				goto IL_0322;
			}
			case 4:
			{
				goto IL_03c9;
			}
			case 5:
			{
				goto IL_03f1;
			}
			case 6:
			{
				goto IL_047e;
			}
			case 7:
			{
				goto IL_0583;
			}
			case 8:
			{
				goto IL_06b3;
			}
			case 9:
			{
				goto IL_06f9;
			}
			case 10:
			{
				goto IL_07b4;
			}
			case 11:
			{
				goto IL_0786;
			}
			case 12:
			{
				goto IL_07e2;
			}
			case 13:
			{
				goto IL_08a0;
			}
			case 14:
			{
				goto IL_0871;
			}
			case 15:
			{
				goto IL_08cf;
			}
			case 16:
			{
				goto IL_08f6;
			}
			case 17:
			{
				goto IL_091d;
			}
			case 18:
			{
				goto IL_0941;
			}
			case 19:
			{
				goto IL_0965;
			}
			case 20:
			{
				goto IL_0989;
			}
			case 21:
			{
				goto IL_043b;
			}
		}
	}
	{
		goto IL_09ab;
	}

IL_0112:
	{
		// if (useTargetAsV3) {
		bool L_24 = __this->___useTargetAsV3_43;
		if (!L_24)
		{
			goto IL_020f;
		}
	}
	{
		// isRelative = false;
		__this->___isRelative_32 = (bool)0;
		// if (endValueTransform == null) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = __this->___endValueTransform_50;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_25, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_26)
		{
			goto IL_0162;
		}
	}
	{
		// Debug.LogWarning(string.Format("{0} :: This tween's TO target is NULL, a Vector3 of (0,0,0) will be used instead", this.gameObject.name), this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_27);
		String_t* L_28;
		L_28 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_27, NULL);
		String_t* L_29;
		L_29 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralE2996F43EBFFA914B746B5861EC325951281A3EB, L_28, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m5C8299150E64600CBF5C92706AD610C21D0C0DC5(L_29, L_30, NULL);
		// endValueV3 = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___endValueV3_45 = L_31;
		goto IL_020f;
	}

IL_0162:
	{
		// if (targetType == TargetType.RectTransform) {
		int32_t L_32 = __this->___targetType_40;
		if ((!(((uint32_t)L_32) == ((uint32_t)5))))
		{
			goto IL_01fe;
		}
	}
	{
		// RectTransform endValueT = endValueTransform as RectTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33 = __this->___endValueTransform_50;
		V_3 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_33, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
		// if (endValueT == null) {
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_34 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_34, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_35)
		{
			goto IL_01b0;
		}
	}
	{
		// Debug.LogWarning(string.Format("{0} :: This tween's TO target should be a RectTransform, a Vector3 of (0,0,0) will be used instead", this.gameObject.name), this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36;
		L_36 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_36);
		String_t* L_37;
		L_37 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_36, NULL);
		String_t* L_38;
		L_38 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral71F308FB57202965E618BD0381AEBFDEEDF31F75, L_37, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39;
		L_39 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m5C8299150E64600CBF5C92706AD610C21D0C0DC5(L_38, L_39, NULL);
		// endValueV3 = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___endValueV3_45 = L_40;
		goto IL_020f;
	}

IL_01b0:
	{
		// RectTransform rTarget = target as RectTransform;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_41 = __this->___target_38;
		V_4 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_41, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
		// if (rTarget == null) {
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_42 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_42, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_43)
		{
			goto IL_01e9;
		}
	}
	{
		// Debug.LogWarning(string.Format("{0} :: This tween's target and TO target are not of the same type. Please reassign the values", this.gameObject.name), this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44;
		L_44 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_44);
		String_t* L_45;
		L_45 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_44, NULL);
		String_t* L_46;
		L_46 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralF0AD9F8B1A2A2D534505FEA8D4D74C1BFD40753F, L_45, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47;
		L_47 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m5C8299150E64600CBF5C92706AD610C21D0C0DC5(L_46, L_47, NULL);
		goto IL_020f;
	}

IL_01e9:
	{
		// endValueV3 = DOTweenModuleUI.Utils.SwitchToRectTransform(endValueT, rTarget);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_48 = V_3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_49 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_50;
		L_50 = Utils_SwitchToRectTransform_m927E0306521B99C5AF717563A4AB216A3846ACFC(L_48, L_49, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_50, NULL);
		__this->___endValueV3_45 = L_51;
		goto IL_020f;
	}

IL_01fe:
	{
		// endValueV3 = endValueTransform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52 = __this->___endValueTransform_50;
		NullCheck(L_52);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_52, NULL);
		__this->___endValueV3_45 = L_53;
	}

IL_020f:
	{
		// switch (targetType) {
		int32_t L_54 = __this->___targetType_40;
		V_5 = L_54;
		int32_t L_55 = V_5;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_55, 5)))
		{
			case 0:
			{
				goto IL_026e;
			}
			case 1:
			{
				goto IL_09ab;
			}
			case 2:
			{
				goto IL_09ab;
			}
			case 3:
			{
				goto IL_029b;
			}
			case 4:
			{
				goto IL_02c8;
			}
			case 5:
			{
				goto IL_09ab;
			}
			case 6:
			{
				goto IL_0241;
			}
		}
	}
	{
		goto IL_09ab;
	}

IL_0241:
	{
		// tween = ((Transform)target).DOMove(endValueV3, duration, optionalBool0);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_56 = __this->___target_38;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = __this->___endValueV3_45;
		float L_58 = __this->___duration_26;
		bool L_59 = __this->___optionalBool0_51;
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_60;
		L_60 = ShortcutExtensions_DOMove_m32C4BD3E44498A3C651F30108F0D3402416B868B(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_56, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), L_57, L_58, L_59, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_60);
		// break;
		goto IL_09ab;
	}

IL_026e:
	{
		// tween = ((RectTransform)target).DOAnchorPos3D(endValueV3, duration, optionalBool0);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_61 = __this->___target_38;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62 = __this->___endValueV3_45;
		float L_63 = __this->___duration_26;
		bool L_64 = __this->___optionalBool0_51;
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_65;
		L_65 = DOTweenModuleUI_DOAnchorPos3D_m9152258BD8EF0A999624C76BC8149BD46607EF33(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_61, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), L_62, L_63, L_64, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_65;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_65);
		// break;
		goto IL_09ab;
	}

IL_029b:
	{
		// tween = ((Rigidbody)target).DOMove(endValueV3, duration, optionalBool0);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_66 = __this->___target_38;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67 = __this->___endValueV3_45;
		float L_68 = __this->___duration_26;
		bool L_69 = __this->___optionalBool0_51;
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_70;
		L_70 = DOTweenModulePhysics_DOMove_m9218B91AF3CA4CB76EC980F3C19DC290C22DD0D3(((Rigidbody_t268697F5A994213ED97393309870968BC1C7393C*)CastclassClass((RuntimeObject*)L_66, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C_il2cpp_TypeInfo_var)), L_67, L_68, L_69, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_70;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_70);
		// break;
		goto IL_09ab;
	}

IL_02c8:
	{
		// tween = ((Rigidbody2D)target).DOMove(endValueV3, duration, optionalBool0);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_71 = __this->___target_38;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72 = __this->___endValueV3_45;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_73;
		L_73 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_72, NULL);
		float L_74 = __this->___duration_26;
		bool L_75 = __this->___optionalBool0_51;
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_76;
		L_76 = DOTweenModulePhysics2D_DOMove_m129881ECAC47858FD6BDF4872DFC10009AA91774(((Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F*)CastclassSealed((RuntimeObject*)L_71, Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_il2cpp_TypeInfo_var)), L_73, L_74, L_75, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_76;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_76);
		// break;
		goto IL_09ab;
	}

IL_02fa:
	{
		// tween = tweenGO.transform.DOLocalMove(endValueV3, duration, optionalBool0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_77 = V_0;
		NullCheck(L_77);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_78;
		L_78 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_77, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = __this->___endValueV3_45;
		float L_80 = __this->___duration_26;
		bool L_81 = __this->___optionalBool0_51;
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_82;
		L_82 = ShortcutExtensions_DOLocalMove_mF5E1C871CE07EA143E72E39BD30F3B45AE51A3DD(L_78, L_79, L_80, L_81, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_82;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_82);
		// break;
		goto IL_09ab;
	}

IL_0322:
	{
		// switch (targetType) {
		int32_t L_83 = __this->___targetType_40;
		V_5 = L_83;
		int32_t L_84 = V_5;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_84, 8)))
		{
			case 0:
			{
				goto IL_0375;
			}
			case 1:
			{
				goto IL_03a2;
			}
			case 2:
			{
				goto IL_09ab;
			}
			case 3:
			{
				goto IL_0348;
			}
		}
	}
	{
		goto IL_09ab;
	}

IL_0348:
	{
		// tween = ((Transform)target).DORotate(endValueV3, duration, optionalRotationMode);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_85 = __this->___target_38;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = __this->___endValueV3_45;
		float L_87 = __this->___duration_26;
		int32_t L_88 = __this->___optionalRotationMode_54;
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_89;
		L_89 = ShortcutExtensions_DORotate_m8395F402E150567DABF9EB86CF1846C7A4D32E03(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_85, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), L_86, L_87, L_88, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_89;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_89);
		// break;
		goto IL_09ab;
	}

IL_0375:
	{
		// tween = ((Rigidbody)target).DORotate(endValueV3, duration, optionalRotationMode);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_90 = __this->___target_38;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91 = __this->___endValueV3_45;
		float L_92 = __this->___duration_26;
		int32_t L_93 = __this->___optionalRotationMode_54;
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_94;
		L_94 = DOTweenModulePhysics_DORotate_m34B2316F2E1B4FABB69B2F982D8D9DA5AC074DC6(((Rigidbody_t268697F5A994213ED97393309870968BC1C7393C*)CastclassClass((RuntimeObject*)L_90, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C_il2cpp_TypeInfo_var)), L_91, L_92, L_93, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_94;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_94);
		// break;
		goto IL_09ab;
	}

IL_03a2:
	{
		// tween = ((Rigidbody2D)target).DORotate(endValueFloat, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_95 = __this->___target_38;
		float L_96 = __this->___endValueFloat_44;
		float L_97 = __this->___duration_26;
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_98;
		L_98 = DOTweenModulePhysics2D_DORotate_m8FF3AA95400BD0ED1E539A13B9B33D8DCBE72CAE(((Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F*)CastclassSealed((RuntimeObject*)L_95, Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_il2cpp_TypeInfo_var)), L_96, L_97, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_98;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_98);
		// break;
		goto IL_09ab;
	}

IL_03c9:
	{
		// tween = tweenGO.transform.DOLocalRotate(endValueV3, duration, optionalRotationMode);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_99 = V_0;
		NullCheck(L_99);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_100;
		L_100 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_99, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101 = __this->___endValueV3_45;
		float L_102 = __this->___duration_26;
		int32_t L_103 = __this->___optionalRotationMode_54;
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_104;
		L_104 = ShortcutExtensions_DOLocalRotate_mC6051022B96DE6707945046329534727417E5990(L_100, L_101, L_102, L_103, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_104;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_104);
		// break;
		goto IL_09ab;
	}

IL_03f1:
	{
		// switch (targetType) {
		int32_t L_105 = __this->___targetType_40;
		// tween = tweenGO.transform.DOScale(optionalBool0 ? new Vector3(endValueFloat, endValueFloat, endValueFloat) : endValueV3, duration);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_106 = V_0;
		NullCheck(L_106);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_107;
		L_107 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_106, NULL);
		bool L_108 = __this->___optionalBool0_51;
		G_B36_0 = L_107;
		G_B36_1 = __this;
		if (L_108)
		{
			G_B37_0 = L_107;
			G_B37_1 = __this;
			goto IL_040f;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109 = __this->___endValueV3_45;
		G_B38_0 = L_109;
		G_B38_1 = G_B36_0;
		G_B38_2 = G_B36_1;
		goto IL_0426;
	}

IL_040f:
	{
		float L_110 = __this->___endValueFloat_44;
		float L_111 = __this->___endValueFloat_44;
		float L_112 = __this->___endValueFloat_44;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113;
		memset((&L_113), 0, sizeof(L_113));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_113), L_110, L_111, L_112, /*hidden argument*/NULL);
		G_B38_0 = L_113;
		G_B38_1 = G_B37_0;
		G_B38_2 = G_B37_1;
	}

IL_0426:
	{
		float L_114 = __this->___duration_26;
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_115;
		L_115 = ShortcutExtensions_DOScale_m7BBBF6EA15ED2BB02E4E32122D0FE0C8D2A4467D(G_B38_1, G_B38_0, L_114, NULL);
		NullCheck(G_B38_2);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)G_B38_2)->___tween_20 = L_115;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)G_B38_2)->___tween_20), (void*)L_115);
		// break;
		goto IL_09ab;
	}

IL_043b:
	{
		// tween = ((RectTransform)target).DOSizeDelta(optionalBool0 ? new Vector2(endValueFloat, endValueFloat) : endValueV2, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_116 = __this->___target_38;
		bool L_117 = __this->___optionalBool0_51;
		G_B40_0 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_116, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
		G_B40_1 = __this;
		if (L_117)
		{
			G_B41_0 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_116, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
			G_B41_1 = __this;
			goto IL_0457;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_118 = __this->___endValueV2_46;
		G_B42_0 = L_118;
		G_B42_1 = G_B40_0;
		G_B42_2 = G_B40_1;
		goto IL_0468;
	}

IL_0457:
	{
		float L_119 = __this->___endValueFloat_44;
		float L_120 = __this->___endValueFloat_44;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_121;
		memset((&L_121), 0, sizeof(L_121));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_121), L_119, L_120, /*hidden argument*/NULL);
		G_B42_0 = L_121;
		G_B42_1 = G_B41_0;
		G_B42_2 = G_B41_1;
	}

IL_0468:
	{
		float L_122 = __this->___duration_26;
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_123;
		L_123 = DOTweenModuleUI_DOSizeDelta_mC80355FB2E78330D2EC907DC14F8B6A8179CB09A(G_B42_1, G_B42_0, L_122, (bool)0, NULL);
		NullCheck(G_B42_2);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)G_B42_2)->___tween_20 = L_123;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)G_B42_2)->___tween_20), (void*)L_123);
		// break;
		goto IL_09ab;
	}

IL_047e:
	{
		// isRelative = false;
		__this->___isRelative_32 = (bool)0;
		// switch (targetType) {
		int32_t L_124 = __this->___targetType_40;
		V_5 = L_124;
		int32_t L_125 = V_5;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_125, 3)))
		{
			case 0:
			{
				goto IL_0535;
			}
			case 1:
			{
				goto IL_04e7;
			}
			case 2:
			{
				goto IL_09ab;
			}
			case 3:
			{
				goto IL_04bb;
			}
			case 4:
			{
				goto IL_050e;
			}
			case 5:
			{
				goto IL_09ab;
			}
			case 6:
			{
				goto IL_09ab;
			}
			case 7:
			{
				goto IL_055c;
			}
		}
	}
	{
		goto IL_09ab;
	}

IL_04bb:
	{
		// tween = ((Renderer)target).material.DOColor(endValueColor, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_126 = __this->___target_38;
		NullCheck(((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)CastclassClass((RuntimeObject*)L_126, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_il2cpp_TypeInfo_var)));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_127;
		L_127 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)CastclassClass((RuntimeObject*)L_126, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_il2cpp_TypeInfo_var)), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_128 = __this->___endValueColor_47;
		float L_129 = __this->___duration_26;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_130;
		L_130 = ShortcutExtensions_DOColor_mCDBC01E948BEF650617C7883545210478198AEEA(L_127, L_128, L_129, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_130;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_130);
		// break;
		goto IL_09ab;
	}

IL_04e7:
	{
		// tween = ((Light)target).DOColor(endValueColor, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_131 = __this->___target_38;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_132 = __this->___endValueColor_47;
		float L_133 = __this->___duration_26;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_134;
		L_134 = ShortcutExtensions_DOColor_mF3E52C88B276BBF85FE8FB8B19A2E9B10F8B16BE(((Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*)CastclassSealed((RuntimeObject*)L_131, Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_il2cpp_TypeInfo_var)), L_132, L_133, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_134;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_134);
		// break;
		goto IL_09ab;
	}

IL_050e:
	{
		// tween = ((SpriteRenderer)target).DOColor(endValueColor, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_135 = __this->___target_38;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_136 = __this->___endValueColor_47;
		float L_137 = __this->___duration_26;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_138;
		L_138 = DOTweenModuleSprite_DOColor_m1D8613D58BC87177BBFB8F8C48803084362CC46F(((SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B*)CastclassSealed((RuntimeObject*)L_135, SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_il2cpp_TypeInfo_var)), L_136, L_137, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_138;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_138);
		// break;
		goto IL_09ab;
	}

IL_0535:
	{
		// tween = ((Graphic)target).DOColor(endValueColor, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_139 = __this->___target_38;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_140 = __this->___endValueColor_47;
		float L_141 = __this->___duration_26;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_142;
		L_142 = DOTweenModuleUI_DOColor_m9CCD69C96E0EC2AF9796758A83BCAE38E8A99257(((Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931*)CastclassClass((RuntimeObject*)L_139, Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_il2cpp_TypeInfo_var)), L_140, L_141, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_142;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_142);
		// break;
		goto IL_09ab;
	}

IL_055c:
	{
		// tween = ((Text)target).DOColor(endValueColor, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_143 = __this->___target_38;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_144 = __this->___endValueColor_47;
		float L_145 = __this->___duration_26;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_146;
		L_146 = DOTweenModuleUI_DOColor_mF7C94BF952B9549609B1F7A3892A6F02CEB56F04(((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62*)CastclassClass((RuntimeObject*)L_143, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_il2cpp_TypeInfo_var)), L_144, L_145, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_146;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_146);
		// break;
		goto IL_09ab;
	}

IL_0583:
	{
		// isRelative = false;
		__this->___isRelative_32 = (bool)0;
		// switch (targetType) {
		int32_t L_147 = __this->___targetType_40;
		V_5 = L_147;
		int32_t L_148 = V_5;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_148, 2)))
		{
			case 0:
			{
				goto IL_068c;
			}
			case 1:
			{
				goto IL_063e;
			}
			case 2:
			{
				goto IL_05f0;
			}
			case 3:
			{
				goto IL_09ab;
			}
			case 4:
			{
				goto IL_05c4;
			}
			case 5:
			{
				goto IL_0617;
			}
			case 6:
			{
				goto IL_09ab;
			}
			case 7:
			{
				goto IL_09ab;
			}
			case 8:
			{
				goto IL_0665;
			}
		}
	}
	{
		goto IL_09ab;
	}

IL_05c4:
	{
		// tween = ((Renderer)target).material.DOFade(endValueFloat, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_149 = __this->___target_38;
		NullCheck(((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)CastclassClass((RuntimeObject*)L_149, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_il2cpp_TypeInfo_var)));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_150;
		L_150 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)CastclassClass((RuntimeObject*)L_149, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_il2cpp_TypeInfo_var)), NULL);
		float L_151 = __this->___endValueFloat_44;
		float L_152 = __this->___duration_26;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_153;
		L_153 = ShortcutExtensions_DOFade_m5A41386F66944E37CA6D90C4E9D8DC1CE0B85F2B(L_150, L_151, L_152, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_153;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_153);
		// break;
		goto IL_09ab;
	}

IL_05f0:
	{
		// tween = ((Light)target).DOIntensity(endValueFloat, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_154 = __this->___target_38;
		float L_155 = __this->___endValueFloat_44;
		float L_156 = __this->___duration_26;
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_157;
		L_157 = ShortcutExtensions_DOIntensity_mD4FBC2D1FFB2DC824E047B96C012B16129D1887D(((Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*)CastclassSealed((RuntimeObject*)L_154, Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_il2cpp_TypeInfo_var)), L_155, L_156, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_157;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_157);
		// break;
		goto IL_09ab;
	}

IL_0617:
	{
		// tween = ((SpriteRenderer)target).DOFade(endValueFloat, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_158 = __this->___target_38;
		float L_159 = __this->___endValueFloat_44;
		float L_160 = __this->___duration_26;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_161;
		L_161 = DOTweenModuleSprite_DOFade_mD42EB7C410F2D7E86EF154211E97C3D72FAB6D99(((SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B*)CastclassSealed((RuntimeObject*)L_158, SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_il2cpp_TypeInfo_var)), L_159, L_160, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_161;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_161);
		// break;
		goto IL_09ab;
	}

IL_063e:
	{
		// tween = ((Graphic)target).DOFade(endValueFloat, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_162 = __this->___target_38;
		float L_163 = __this->___endValueFloat_44;
		float L_164 = __this->___duration_26;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_165;
		L_165 = DOTweenModuleUI_DOFade_mCF2D26E252987610391CA58F42EBF89D497AB42C(((Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931*)CastclassClass((RuntimeObject*)L_162, Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_il2cpp_TypeInfo_var)), L_163, L_164, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_165;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_165);
		// break;
		goto IL_09ab;
	}

IL_0665:
	{
		// tween = ((Text)target).DOFade(endValueFloat, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_166 = __this->___target_38;
		float L_167 = __this->___endValueFloat_44;
		float L_168 = __this->___duration_26;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_169;
		L_169 = DOTweenModuleUI_DOFade_m86A4E7965D2563BB1530EB2343AB8DA2EF7FDF01(((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62*)CastclassClass((RuntimeObject*)L_166, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_il2cpp_TypeInfo_var)), L_167, L_168, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_169;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_169);
		// break;
		goto IL_09ab;
	}

IL_068c:
	{
		// tween = ((CanvasGroup)target).DOFade(endValueFloat, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_170 = __this->___target_38;
		float L_171 = __this->___endValueFloat_44;
		float L_172 = __this->___duration_26;
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_173;
		L_173 = DOTweenModuleUI_DOFade_m70733D91ED98AB827DD5162868199BCA07B3C65F(((CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094*)CastclassSealed((RuntimeObject*)L_170, CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_il2cpp_TypeInfo_var)), L_171, L_172, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_173;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_173);
		// break;
		goto IL_09ab;
	}

IL_06b3:
	{
		// switch (targetType) {
		int32_t L_174 = __this->___targetType_40;
		if ((!(((uint32_t)L_174) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_09ab;
		}
	}
	{
		// tween = ((Text)target).DOText(endValueString, duration, optionalBool0, optionalScrambleMode, optionalString);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_175 = __this->___target_38;
		String_t* L_176 = __this->___endValueString_48;
		float L_177 = __this->___duration_26;
		bool L_178 = __this->___optionalBool0_51;
		int32_t L_179 = __this->___optionalScrambleMode_55;
		String_t* L_180 = __this->___optionalString_56;
		TweenerCore_3_t390910F1CE8B4737AA72FEED470399C8DBE1AF8B* L_181;
		L_181 = DOTweenModuleUI_DOText_mB47F3908BD77013A7C5DF5CCFC2E3F4BB60E00F5(((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62*)CastclassClass((RuntimeObject*)L_175, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_il2cpp_TypeInfo_var)), L_176, L_177, L_178, L_179, L_180, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_181;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_181);
		// break;
		goto IL_09ab;
	}

IL_06f9:
	{
		// switch (targetType) {
		int32_t L_182 = __this->___targetType_40;
		V_5 = L_182;
		int32_t L_183 = V_5;
		if ((((int32_t)L_183) == ((int32_t)5)))
		{
			goto IL_0748;
		}
	}
	{
		int32_t L_184 = V_5;
		if ((!(((uint32_t)L_184) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_09ab;
		}
	}
	{
		// tween = ((Transform)target).DOPunchPosition(endValueV3, duration, optionalInt0, optionalFloat0, optionalBool0);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_185 = __this->___target_38;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_186 = __this->___endValueV3_45;
		float L_187 = __this->___duration_26;
		int32_t L_188 = __this->___optionalInt0_53;
		float L_189 = __this->___optionalFloat0_52;
		bool L_190 = __this->___optionalBool0_51;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_191;
		L_191 = ShortcutExtensions_DOPunchPosition_mC6141C2E6F415ACB10B664B3F2DDADDEE1CCF9B7(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_185, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), L_186, L_187, L_188, L_189, L_190, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_191;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_191);
		// break;
		goto IL_09ab;
	}

IL_0748:
	{
		// tween = ((RectTransform)target).DOPunchAnchorPos(endValueV3, duration, optionalInt0, optionalFloat0, optionalBool0);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_192 = __this->___target_38;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_193 = __this->___endValueV3_45;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_194;
		L_194 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_193, NULL);
		float L_195 = __this->___duration_26;
		int32_t L_196 = __this->___optionalInt0_53;
		float L_197 = __this->___optionalFloat0_52;
		bool L_198 = __this->___optionalBool0_51;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_199;
		L_199 = DOTweenModuleUI_DOPunchAnchorPos_mA9B79DE480E85187CD9967AEAC55F29FB4C7B587(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_192, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), L_194, L_195, L_196, L_197, L_198, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_199;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_199);
		// break;
		goto IL_09ab;
	}

IL_0786:
	{
		// tween = tweenGO.transform.DOPunchScale(endValueV3, duration, optionalInt0, optionalFloat0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_200 = V_0;
		NullCheck(L_200);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_201;
		L_201 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_200, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_202 = __this->___endValueV3_45;
		float L_203 = __this->___duration_26;
		int32_t L_204 = __this->___optionalInt0_53;
		float L_205 = __this->___optionalFloat0_52;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_206;
		L_206 = ShortcutExtensions_DOPunchScale_m11086B1F15446E2DBD1BBED2FE1855DC12C05867(L_201, L_202, L_203, L_204, L_205, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_206;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_206);
		// break;
		goto IL_09ab;
	}

IL_07b4:
	{
		// tween = tweenGO.transform.DOPunchRotation(endValueV3, duration, optionalInt0, optionalFloat0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_207 = V_0;
		NullCheck(L_207);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_208;
		L_208 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_207, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_209 = __this->___endValueV3_45;
		float L_210 = __this->___duration_26;
		int32_t L_211 = __this->___optionalInt0_53;
		float L_212 = __this->___optionalFloat0_52;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_213;
		L_213 = ShortcutExtensions_DOPunchRotation_mBD603C44E24516A904CEF8D707E016B03C71DC5F(L_208, L_209, L_210, L_211, L_212, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_213;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_213);
		// break;
		goto IL_09ab;
	}

IL_07e2:
	{
		// switch (targetType) {
		int32_t L_214 = __this->___targetType_40;
		V_5 = L_214;
		int32_t L_215 = V_5;
		if ((((int32_t)L_215) == ((int32_t)5)))
		{
			goto IL_0832;
		}
	}
	{
		int32_t L_216 = V_5;
		if ((!(((uint32_t)L_216) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_09ab;
		}
	}
	{
		// tween = ((Transform)target).DOShakePosition(duration, endValueV3, optionalInt0, optionalFloat0, optionalBool0);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_217 = __this->___target_38;
		float L_218 = __this->___duration_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_219 = __this->___endValueV3_45;
		int32_t L_220 = __this->___optionalInt0_53;
		float L_221 = __this->___optionalFloat0_52;
		bool L_222 = __this->___optionalBool0_51;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_223;
		L_223 = ShortcutExtensions_DOShakePosition_m5480BF63838F01B78EA0BB767A1CA8CCA15336FB(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_217, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), L_218, L_219, L_220, L_221, L_222, (bool)1, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_223;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_223);
		// break;
		goto IL_09ab;
	}

IL_0832:
	{
		// tween = ((RectTransform)target).DOShakeAnchorPos(duration, endValueV3, optionalInt0, optionalFloat0, optionalBool0);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_224 = __this->___target_38;
		float L_225 = __this->___duration_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_226 = __this->___endValueV3_45;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_227;
		L_227 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_226, NULL);
		int32_t L_228 = __this->___optionalInt0_53;
		float L_229 = __this->___optionalFloat0_52;
		bool L_230 = __this->___optionalBool0_51;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_231;
		L_231 = DOTweenModuleUI_DOShakeAnchorPos_mA36B5E94FEC480304F89946C695F8DCBF637DC72(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_224, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), L_225, L_227, L_228, L_229, L_230, (bool)1, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_231;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_231);
		// break;
		goto IL_09ab;
	}

IL_0871:
	{
		// tween = tweenGO.transform.DOShakeScale(duration, endValueV3, optionalInt0, optionalFloat0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_232 = V_0;
		NullCheck(L_232);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_233;
		L_233 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_232, NULL);
		float L_234 = __this->___duration_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_235 = __this->___endValueV3_45;
		int32_t L_236 = __this->___optionalInt0_53;
		float L_237 = __this->___optionalFloat0_52;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_238;
		L_238 = ShortcutExtensions_DOShakeScale_m455288408E71E6D81BC89D27C4897D3E8AEC7236(L_233, L_234, L_235, L_236, L_237, (bool)1, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_238;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_238);
		// break;
		goto IL_09ab;
	}

IL_08a0:
	{
		// tween = tweenGO.transform.DOShakeRotation(duration, endValueV3, optionalInt0, optionalFloat0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_239 = V_0;
		NullCheck(L_239);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_240;
		L_240 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_239, NULL);
		float L_241 = __this->___duration_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_242 = __this->___endValueV3_45;
		int32_t L_243 = __this->___optionalInt0_53;
		float L_244 = __this->___optionalFloat0_52;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_245;
		L_245 = ShortcutExtensions_DOShakeRotation_mE14FE3AB153375C93275B2CBF219BA5CDCFF6353(L_240, L_241, L_242, L_243, L_244, (bool)1, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_245;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_245);
		// break;
		goto IL_09ab;
	}

IL_08cf:
	{
		// tween = ((Camera)target).DOAspect(endValueFloat, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_246 = __this->___target_38;
		float L_247 = __this->___endValueFloat_44;
		float L_248 = __this->___duration_26;
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_249;
		L_249 = ShortcutExtensions_DOAspect_mD8D0BCC3716CCFFFE0051D96ECE87ECC27178621(((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)CastclassSealed((RuntimeObject*)L_246, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var)), L_247, L_248, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_249;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_249);
		// break;
		goto IL_09ab;
	}

IL_08f6:
	{
		// tween = ((Camera)target).DOColor(endValueColor, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_250 = __this->___target_38;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_251 = __this->___endValueColor_47;
		float L_252 = __this->___duration_26;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_253;
		L_253 = ShortcutExtensions_DOColor_mE810B2031664ACBB5BB58C5288B7168CA88A8972(((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)CastclassSealed((RuntimeObject*)L_250, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var)), L_251, L_252, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_253;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_253);
		// break;
		goto IL_09ab;
	}

IL_091d:
	{
		// tween = ((Camera)target).DOFieldOfView(endValueFloat, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_254 = __this->___target_38;
		float L_255 = __this->___endValueFloat_44;
		float L_256 = __this->___duration_26;
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_257;
		L_257 = ShortcutExtensions_DOFieldOfView_m82327EC4821621EBF7957C8DE04B0E7C93778220(((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)CastclassSealed((RuntimeObject*)L_254, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var)), L_255, L_256, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_257;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_257);
		// break;
		goto IL_09ab;
	}

IL_0941:
	{
		// tween = ((Camera)target).DOOrthoSize(endValueFloat, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_258 = __this->___target_38;
		float L_259 = __this->___endValueFloat_44;
		float L_260 = __this->___duration_26;
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_261;
		L_261 = ShortcutExtensions_DOOrthoSize_m12DBC3D9BB3AEE9AC4D59C422E2514D74FD27A66(((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)CastclassSealed((RuntimeObject*)L_258, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var)), L_259, L_260, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_261;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_261);
		// break;
		goto IL_09ab;
	}

IL_0965:
	{
		// tween = ((Camera)target).DOPixelRect(endValueRect, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_262 = __this->___target_38;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_263 = __this->___endValueRect_49;
		float L_264 = __this->___duration_26;
		TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* L_265;
		L_265 = ShortcutExtensions_DOPixelRect_mFD604C696CF1FBC886FC54BBF927F115C6BCC809(((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)CastclassSealed((RuntimeObject*)L_262, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var)), L_263, L_264, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_265;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_265);
		// break;
		goto IL_09ab;
	}

IL_0989:
	{
		// tween = ((Camera)target).DORect(endValueRect, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_266 = __this->___target_38;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_267 = __this->___endValueRect_49;
		float L_268 = __this->___duration_26;
		TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* L_269;
		L_269 = ShortcutExtensions_DORect_m6094E30B85FC49943D3D891FCB75D46D6E625745(((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)CastclassSealed((RuntimeObject*)L_266, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var)), L_267, L_268, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_269;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_269);
	}

IL_09ab:
	{
		// if (tween == null) return;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_270 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		if (L_270)
		{
			goto IL_09b4;
		}
	}
	{
		// if (tween == null) return;
		return;
	}

IL_09b4:
	{
		// if (isFrom) {
		bool L_271 = __this->___isFrom_33;
		if (!L_271)
		{
			goto IL_09d5;
		}
	}
	{
		// ((Tweener)tween).From(isRelative);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_272 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		bool L_273 = __this->___isRelative_32;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_274;
		L_274 = TweenSettingsExtensions_From_TisTweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_mC60C392D6D33305FE03E8995161FEEAC84674A95(((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)CastclassClass((RuntimeObject*)L_272, Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_il2cpp_TypeInfo_var)), L_273, TweenSettingsExtensions_From_TisTweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_mC60C392D6D33305FE03E8995161FEEAC84674A95_RuntimeMethod_var);
		goto IL_09e7;
	}

IL_09d5:
	{
		// tween.SetRelative(isRelative);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_275 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		bool L_276 = __this->___isRelative_32;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_277;
		L_277 = TweenSettingsExtensions_SetRelative_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m65EE3617250D5AD8873E9873D48962D3634F6483(L_275, L_276, TweenSettingsExtensions_SetRelative_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m65EE3617250D5AD8873E9873D48962D3634F6483_RuntimeMethod_var);
	}

IL_09e7:
	{
		// GameObject setTarget = targetIsSelf || !tweenTargetIsTargetGO ? this.gameObject : targetGO;
		bool L_278 = __this->___targetIsSelf_22;
		if (L_278)
		{
			goto IL_09ff;
		}
	}
	{
		bool L_279 = __this->___tweenTargetIsTargetGO_24;
		if (!L_279)
		{
			goto IL_09ff;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_280 = __this->___targetGO_23;
		G_B87_0 = L_280;
		goto IL_0a05;
	}

IL_09ff:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_281;
		L_281 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		G_B87_0 = L_281;
	}

IL_0a05:
	{
		V_1 = G_B87_0;
		// tween.SetTarget(setTarget).SetDelay(delay).SetLoops(loops, loopType).SetAutoKill(autoKill)
		//     .OnKill(()=> tween = null);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_282 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_283 = V_1;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_284;
		L_284 = TweenSettingsExtensions_SetTarget_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mCEF56ADE6E6FB782E6DED1C3D5E9AEB2309FB0F5(L_282, L_283, TweenSettingsExtensions_SetTarget_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mCEF56ADE6E6FB782E6DED1C3D5E9AEB2309FB0F5_RuntimeMethod_var);
		float L_285 = __this->___delay_25;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_286;
		L_286 = TweenSettingsExtensions_SetDelay_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m301CF7B6B171BF1CF43646D0D760594BC46B1FEC(L_284, L_285, TweenSettingsExtensions_SetDelay_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m301CF7B6B171BF1CF43646D0D760594BC46B1FEC_RuntimeMethod_var);
		int32_t L_287 = __this->___loops_30;
		int32_t L_288 = __this->___loopType_29;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_289;
		L_289 = TweenSettingsExtensions_SetLoops_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m7F9CA723CCD313DB084E94DF8C80C5F579B509B0(L_286, L_287, L_288, TweenSettingsExtensions_SetLoops_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m7F9CA723CCD313DB084E94DF8C80C5F579B509B0_RuntimeMethod_var);
		bool L_290 = __this->___autoKill_35;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_291;
		L_291 = TweenSettingsExtensions_SetAutoKill_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m1A67DB04ED6B16569A6DC9670F7F1849A5376E21(L_289, L_290, TweenSettingsExtensions_SetAutoKill_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m1A67DB04ED6B16569A6DC9670F7F1849A5376E21_RuntimeMethod_var);
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_292 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_292);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_292, __this, (intptr_t)((void*)DOTweenAnimation_U3CCreateTweenU3Eb__47_0_mBD3557DDE92EE0029CF11BEFCEC3534AD5A5C283_RuntimeMethod_var), NULL);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_293;
		L_293 = TweenSettingsExtensions_OnKill_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m4CF744A4FBB459014140B0874C75DBC7F87FE913(L_291, L_292, TweenSettingsExtensions_OnKill_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m4CF744A4FBB459014140B0874C75DBC7F87FE913_RuntimeMethod_var);
		// if (isSpeedBased) tween.SetSpeedBased();
		bool L_294 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___isSpeedBased_5;
		if (!L_294)
		{
			goto IL_0a5f;
		}
	}
	{
		// if (isSpeedBased) tween.SetSpeedBased();
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_295 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_296;
		L_296 = TweenSettingsExtensions_SetSpeedBased_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mEEE8E789F246C3E180032AE6AE597AD27DA887B8(L_295, TweenSettingsExtensions_SetSpeedBased_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mEEE8E789F246C3E180032AE6AE597AD27DA887B8_RuntimeMethod_var);
	}

IL_0a5f:
	{
		// if (easeType == Ease.INTERNAL_Custom) tween.SetEase(easeCurve);
		int32_t L_297 = __this->___easeType_27;
		if ((!(((uint32_t)L_297) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_0a7d;
		}
	}
	{
		// if (easeType == Ease.INTERNAL_Custom) tween.SetEase(easeCurve);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_298 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_299 = __this->___easeCurve_28;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_300;
		L_300 = TweenSettingsExtensions_SetEase_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m3C5C67CF8DAAA89EE45BD950D622DDC7517DD049(L_298, L_299, TweenSettingsExtensions_SetEase_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m3C5C67CF8DAAA89EE45BD950D622DDC7517DD049_RuntimeMethod_var);
		goto IL_0a8f;
	}

IL_0a7d:
	{
		// else tween.SetEase(easeType);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_301 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		int32_t L_302 = __this->___easeType_27;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_303;
		L_303 = TweenSettingsExtensions_SetEase_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m507E6328745F0217F303765142C237DBA1DF2DA6(L_301, L_302, TweenSettingsExtensions_SetEase_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m507E6328745F0217F303765142C237DBA1DF2DA6_RuntimeMethod_var);
	}

IL_0a8f:
	{
		// if (!string.IsNullOrEmpty(id)) tween.SetId(id);
		String_t* L_304 = __this->___id_31;
		bool L_305;
		L_305 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_304, NULL);
		if (L_305)
		{
			goto IL_0aae;
		}
	}
	{
		// if (!string.IsNullOrEmpty(id)) tween.SetId(id);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_306 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		String_t* L_307 = __this->___id_31;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_308;
		L_308 = TweenSettingsExtensions_SetId_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mBF22773A2E9D87F70207B32FBCD99108EC365E2B(L_306, L_307, TweenSettingsExtensions_SetId_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mBF22773A2E9D87F70207B32FBCD99108EC365E2B_RuntimeMethod_var);
	}

IL_0aae:
	{
		// tween.SetUpdate(isIndependentUpdate);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_309 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		bool L_310 = __this->___isIndependentUpdate_34;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_311;
		L_311 = TweenSettingsExtensions_SetUpdate_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m172E7B547CCEA4E9DACC2AB397958EFEE67BBF36(L_309, L_310, TweenSettingsExtensions_SetUpdate_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m172E7B547CCEA4E9DACC2AB397958EFEE67BBF36_RuntimeMethod_var);
		// if (hasOnStart) {
		bool L_312 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___hasOnStart_6;
		if (!L_312)
		{
			goto IL_0aef;
		}
	}
	{
		// if (onStart != null) tween.OnStart(onStart.Invoke);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_313 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onStart_13;
		if (!L_313)
		{
			goto IL_0af6;
		}
	}
	{
		// if (onStart != null) tween.OnStart(onStart.Invoke);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_314 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_315 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onStart_13;
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_316 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_316);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_316, L_315, (intptr_t)((void*)UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var), NULL);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_317;
		L_317 = TweenSettingsExtensions_OnStart_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m28C40BE2EBE0F617AA3E4827F3614CD952C8DF8F(L_314, L_316, TweenSettingsExtensions_OnStart_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m28C40BE2EBE0F617AA3E4827F3614CD952C8DF8F_RuntimeMethod_var);
		goto IL_0af6;
	}

IL_0aef:
	{
		// } else onStart = null;
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onStart_13 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onStart_13), (void*)(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL);
	}

IL_0af6:
	{
		// if (hasOnPlay) {
		bool L_318 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___hasOnPlay_7;
		if (!L_318)
		{
			goto IL_0b25;
		}
	}
	{
		// if (onPlay != null) tween.OnPlay(onPlay.Invoke);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_319 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onPlay_14;
		if (!L_319)
		{
			goto IL_0b2c;
		}
	}
	{
		// if (onPlay != null) tween.OnPlay(onPlay.Invoke);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_320 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_321 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onPlay_14;
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_322 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_322);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_322, L_321, (intptr_t)((void*)UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var), NULL);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_323;
		L_323 = TweenSettingsExtensions_OnPlay_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m9C9D8B73E053554A7422ED2F1A7B1490AE3F9EB6(L_320, L_322, TweenSettingsExtensions_OnPlay_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m9C9D8B73E053554A7422ED2F1A7B1490AE3F9EB6_RuntimeMethod_var);
		goto IL_0b2c;
	}

IL_0b25:
	{
		// } else onPlay = null;
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onPlay_14 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onPlay_14), (void*)(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL);
	}

IL_0b2c:
	{
		// if (hasOnUpdate) {
		bool L_324 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___hasOnUpdate_8;
		if (!L_324)
		{
			goto IL_0b5b;
		}
	}
	{
		// if (onUpdate != null) tween.OnUpdate(onUpdate.Invoke);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_325 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onUpdate_15;
		if (!L_325)
		{
			goto IL_0b62;
		}
	}
	{
		// if (onUpdate != null) tween.OnUpdate(onUpdate.Invoke);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_326 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_327 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onUpdate_15;
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_328 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_328);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_328, L_327, (intptr_t)((void*)UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var), NULL);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_329;
		L_329 = TweenSettingsExtensions_OnUpdate_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m3C099B9F7E199FBB7AF586E353AE96D45AA09D9D(L_326, L_328, TweenSettingsExtensions_OnUpdate_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m3C099B9F7E199FBB7AF586E353AE96D45AA09D9D_RuntimeMethod_var);
		goto IL_0b62;
	}

IL_0b5b:
	{
		// } else onUpdate = null;
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onUpdate_15 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onUpdate_15), (void*)(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL);
	}

IL_0b62:
	{
		// if (hasOnStepComplete) {
		bool L_330 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___hasOnStepComplete_9;
		if (!L_330)
		{
			goto IL_0b91;
		}
	}
	{
		// if (onStepComplete != null) tween.OnStepComplete(onStepComplete.Invoke);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_331 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onStepComplete_16;
		if (!L_331)
		{
			goto IL_0b98;
		}
	}
	{
		// if (onStepComplete != null) tween.OnStepComplete(onStepComplete.Invoke);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_332 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_333 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onStepComplete_16;
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_334 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_334);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_334, L_333, (intptr_t)((void*)UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var), NULL);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_335;
		L_335 = TweenSettingsExtensions_OnStepComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mFFA7C039D354B88FCFAD8C72833711A4795FC0FB(L_332, L_334, TweenSettingsExtensions_OnStepComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mFFA7C039D354B88FCFAD8C72833711A4795FC0FB_RuntimeMethod_var);
		goto IL_0b98;
	}

IL_0b91:
	{
		// } else onStepComplete = null;
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onStepComplete_16 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onStepComplete_16), (void*)(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL);
	}

IL_0b98:
	{
		// if (hasOnComplete) {
		bool L_336 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___hasOnComplete_10;
		if (!L_336)
		{
			goto IL_0bc7;
		}
	}
	{
		// if (onComplete != null) tween.OnComplete(onComplete.Invoke);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_337 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onComplete_17;
		if (!L_337)
		{
			goto IL_0bce;
		}
	}
	{
		// if (onComplete != null) tween.OnComplete(onComplete.Invoke);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_338 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_339 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onComplete_17;
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_340 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_340);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_340, L_339, (intptr_t)((void*)UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var), NULL);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_341;
		L_341 = TweenSettingsExtensions_OnComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mE67BCE455C598621EAFC075DFFFAF4167B4E2371(L_338, L_340, TweenSettingsExtensions_OnComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mE67BCE455C598621EAFC075DFFFAF4167B4E2371_RuntimeMethod_var);
		goto IL_0bce;
	}

IL_0bc7:
	{
		// } else onComplete = null;
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onComplete_17 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onComplete_17), (void*)(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL);
	}

IL_0bce:
	{
		// if (hasOnRewind) {
		bool L_342 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___hasOnRewind_12;
		if (!L_342)
		{
			goto IL_0bfd;
		}
	}
	{
		// if (onRewind != null) tween.OnRewind(onRewind.Invoke);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_343 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onRewind_19;
		if (!L_343)
		{
			goto IL_0c04;
		}
	}
	{
		// if (onRewind != null) tween.OnRewind(onRewind.Invoke);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_344 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_345 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onRewind_19;
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_346 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_346);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_346, L_345, (intptr_t)((void*)UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var), NULL);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_347;
		L_347 = TweenSettingsExtensions_OnRewind_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mB9DF6C423E1258FFF3FD11A7A68D79EE7189DB3A(L_344, L_346, TweenSettingsExtensions_OnRewind_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mB9DF6C423E1258FFF3FD11A7A68D79EE7189DB3A_RuntimeMethod_var);
		goto IL_0c04;
	}

IL_0bfd:
	{
		// } else onRewind = null;
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onRewind_19 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onRewind_19), (void*)(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL);
	}

IL_0c04:
	{
		// if (autoPlay) tween.Play();
		bool L_348 = __this->___autoPlay_42;
		if (!L_348)
		{
			goto IL_0c1a;
		}
	}
	{
		// if (autoPlay) tween.Play();
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_349 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_350;
		L_350 = TweenExtensions_Play_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m2442DE0FF8CACF03EFB5003191303DBC489F9BF6(L_349, TweenExtensions_Play_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m2442DE0FF8CACF03EFB5003191303DBC489F9BF6_RuntimeMethod_var);
		goto IL_0c26;
	}

IL_0c1a:
	{
		// else tween.Pause();
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_351 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_352;
		L_352 = TweenExtensions_Pause_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m42F0E805CDAC03AC764CBEDE7E2F7C607F6B58CD(L_351, TweenExtensions_Pause_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m42F0E805CDAC03AC764CBEDE7E2F7C607F6B58CD_RuntimeMethod_var);
	}

IL_0c26:
	{
		// if (hasOnTweenCreated && onTweenCreated != null) onTweenCreated.Invoke();
		bool L_353 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___hasOnTweenCreated_11;
		if (!L_353)
		{
			goto IL_0c41;
		}
	}
	{
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_354 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onTweenCreated_18;
		if (!L_354)
		{
			goto IL_0c41;
		}
	}
	{
		// if (hasOnTweenCreated && onTweenCreated != null) onTweenCreated.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_355 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onTweenCreated_18;
		NullCheck(L_355);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_355, NULL);
	}

IL_0c41:
	{
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlay_m13FCD1B90C270CC6A4CDC37D45B9C7906759EB65 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.Play(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Play_mE146D1154F52E49E529517BB36D29EADA337F5FF(L_0, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlayBackwards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayBackwards_m7DAD71BF7390EE5BB26CEE5E002A9F61BBD790BB (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.PlayBackwards(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_PlayBackwards_m98D93F84137C304FDA25BF99E45108494E18F39B(L_0, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlayForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayForward_m1C460584821358C681FFB2A3824D8F532B94A3D6 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.PlayForward(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_PlayForward_m32808EC4264B337995A4E260E96AF7A454029637(L_0, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPause_m579FECCC254EDE65F38B0BB132FA796876409547 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.Pause(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Pause_m58CD7313179E53DE741D41B6CAAB7ABFF1BABA6C(L_0, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOTogglePause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOTogglePause_m3976C710434A81CEF46C8202D6D43A4F09FAE91E (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.TogglePause(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_TogglePause_m306F889F632F7B3C429F108A81AFD644727D0F7D(L_0, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DORewind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DORewind_m0ACC3EE9A69E368F08360B45500AF6417853AACF (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponents_TisDOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_m95D9515665F9034EBE662B8B4835DB6B2817259B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* V_0 = NULL;
	int32_t V_1 = 0;
	Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* V_2 = NULL;
	{
		// _playCount = -1;
		__this->____playCount_58 = (-1);
		// DOTweenAnimation[] anims = this.gameObject.GetComponents<DOTweenAnimation>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* L_1;
		L_1 = GameObject_GetComponents_TisDOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_m95D9515665F9034EBE662B8B4835DB6B2817259B(L_0, GameObject_GetComponents_TisDOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_m95D9515665F9034EBE662B8B4835DB6B2817259B_RuntimeMethod_var);
		V_0 = L_1;
		// for (int i = anims.Length - 1; i > -1; --i) {
		DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* L_2 = V_0;
		NullCheck(L_2);
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1));
		goto IL_0041;
	}

IL_001b:
	{
		// Tween t = anims[i].tween;
		DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_7 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)L_6)->___tween_20;
		V_2 = L_7;
		// if (t != null && t.IsInitialized()) anims[i].tween.Rewind();
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_8 = V_2;
		if (!L_8)
		{
			goto IL_003d;
		}
	}
	{
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_9 = V_2;
		bool L_10;
		L_10 = TweenExtensions_IsInitialized_m70878E071A2B3F02B43A47A4CEAE674A64341AF1(L_9, NULL);
		if (!L_10)
		{
			goto IL_003d;
		}
	}
	{
		// if (t != null && t.IsInitialized()) anims[i].tween.Rewind();
		DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* L_11 = V_0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_15 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)L_14)->___tween_20;
		TweenExtensions_Rewind_m3E891F32358D3D459EA15BE3A25D49B49D6BAC0C(L_15, (bool)1, NULL);
	}

IL_003d:
	{
		// for (int i = anims.Length - 1; i > -1; --i) {
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_0041:
	{
		// for (int i = anims.Length - 1; i > -1; --i) {
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) > ((int32_t)(-1))))
		{
			goto IL_001b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DORestart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DORestart_mA90E5090E585085C421A2A8D6E271D4A8EFBFBC0 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	{
		// { DORestart(false); }
		VirtualActionInvoker1< bool >::Invoke(11 /* System.Void DG.Tweening.Core.ABSAnimationComponent::DORestart(System.Boolean) */, __this, (bool)0);
		// { DORestart(false); }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DORestart(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DORestart_m3991D3973BAB757263F5B7DF49236854F7CFFDD6 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, bool ___fromHere0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _playCount = -1;
		__this->____playCount_58 = (-1);
		// if (tween == null) {
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		// if (Debugger.logPriority > 1) Debugger.LogNullTween(tween); return;
		int32_t L_1 = ((Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_il2cpp_TypeInfo_var))->___logPriority_0;
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		// if (Debugger.logPriority > 1) Debugger.LogNullTween(tween); return;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_2 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		Debugger_LogNullTween_m462D3B435A8ADE6FEB0330E4A31710226DB613BC(L_2, NULL);
	}

IL_0022:
	{
		// if (Debugger.logPriority > 1) Debugger.LogNullTween(tween); return;
		return;
	}

IL_0023:
	{
		// if (fromHere && isRelative) ReEvaluateRelativeTween();
		bool L_3 = ___fromHere0;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		bool L_4 = __this->___isRelative_32;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		// if (fromHere && isRelative) ReEvaluateRelativeTween();
		DOTweenAnimation_ReEvaluateRelativeTween_mD0A5E517DC24E42DA505252FF14510A82AF3D884(__this, NULL);
	}

IL_0034:
	{
		// DOTween.Restart(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = DOTween_Restart_m1697F3A59A3A78B36022F5E4A082B9116DEBFA11(L_5, (bool)1, (-1.0f), NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOComplete_mA22769F47C0477E80CEFD1278B2400F6944B6111 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.Complete(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Complete_m22D90DCCA1970B8AA12787F43263BF16DC49C4CB(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOKill()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOKill_m58766FE1B51A4ACB4AADF618088B24CA8BB558BE (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.Kill(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Kill_m1D0A70349523060E7198D3256BC2DC555E422331(L_0, (bool)0, NULL);
		// tween = null;
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)(Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlayById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayById_mB1AD544F5E83C3E5EE30EC09F55E3034625DD1FB (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.Play(this.gameObject, id);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_1 = ___id0;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = DOTween_Play_m2992F5D85F5BCA090173D20045950D6EA8CB8A6C(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlayAllById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayAllById_m17BFE4D2AC992F441DA7DE57B06E1D8226F3422F (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.Play(id);
		String_t* L_0 = ___id0;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Play_mE146D1154F52E49E529517BB36D29EADA337F5FF(L_0, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPauseAllById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPauseAllById_m69B4156769396D15F7917D08584B27BB8DB33061 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.Pause(id);
		String_t* L_0 = ___id0;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Pause_m58CD7313179E53DE741D41B6CAAB7ABFF1BABA6C(L_0, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlayBackwardsById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayBackwardsById_mF9C09452E4B6A01789AECFE65FEDE8FBE0BC99AA (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.PlayBackwards(this.gameObject, id);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_1 = ___id0;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = DOTween_PlayBackwards_m80A8FAE081E88DEB0DE7117F784D8B3C9C41E49A(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlayBackwardsAllById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayBackwardsAllById_m699DBBE571B55E8D2F46EFE7795132AEBFBAABF3 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.PlayBackwards(id);
		String_t* L_0 = ___id0;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_PlayBackwards_m98D93F84137C304FDA25BF99E45108494E18F39B(L_0, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlayForwardById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayForwardById_mDE37334AB66BCB98A6CEF089E126F03308F7A3AB (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.PlayForward(this.gameObject, id);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_1 = ___id0;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = DOTween_PlayForward_mDEA27C00165C82A075B2F2D37F3BEB47535F3AB8(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlayForwardAllById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayForwardAllById_m52998F61B2172E61AA7834823E68C8F3436BD20D (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.PlayForward(id);
		String_t* L_0 = ___id0;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_PlayForward_m32808EC4264B337995A4E260E96AF7A454029637(L_0, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlayNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayNext_mB0A10A4963CBB56BC6AA79B312D7B8C00AADB1CA (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisDOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_mBD8DF07C7D147339501B59183140B9EF098D3204_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenExtensions_Play_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m2442DE0FF8CACF03EFB5003191303DBC489F9BF6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* V_0 = NULL;
	DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* V_1 = NULL;
	{
		// DOTweenAnimation[] anims = this.GetComponents<DOTweenAnimation>();
		DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* L_0;
		L_0 = Component_GetComponents_TisDOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_mBD8DF07C7D147339501B59183140B9EF098D3204(__this, Component_GetComponents_TisDOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_mBD8DF07C7D147339501B59183140B9EF098D3204_RuntimeMethod_var);
		V_0 = L_0;
		goto IL_0058;
	}

IL_0009:
	{
		// _playCount++;
		int32_t L_1 = __this->____playCount_58;
		__this->____playCount_58 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		// DOTweenAnimation anim = anims[_playCount];
		DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* L_2 = V_0;
		int32_t L_3 = __this->____playCount_58;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		// if (anim != null && anim.tween != null && !anim.tween.IsPlaying() && !anim.tween.IsComplete()) {
		DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0058;
		}
	}
	{
		DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* L_8 = V_1;
		NullCheck(L_8);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_9 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)L_8)->___tween_20;
		if (!L_9)
		{
			goto IL_0058;
		}
	}
	{
		DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* L_10 = V_1;
		NullCheck(L_10);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_11 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)L_10)->___tween_20;
		bool L_12;
		L_12 = TweenExtensions_IsPlaying_m21C049B7FC765108ABCD80F6DA263F21A0AF7461(L_11, NULL);
		if (L_12)
		{
			goto IL_0058;
		}
	}
	{
		DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* L_13 = V_1;
		NullCheck(L_13);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_14 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)L_13)->___tween_20;
		bool L_15;
		L_15 = TweenExtensions_IsComplete_mCB9C775CFE13C8F43A5AD89A171D7A65DD1470AF(L_14, NULL);
		if (L_15)
		{
			goto IL_0058;
		}
	}
	{
		// anim.tween.Play();
		DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* L_16 = V_1;
		NullCheck(L_16);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_17 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)L_16)->___tween_20;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_18;
		L_18 = TweenExtensions_Play_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m2442DE0FF8CACF03EFB5003191303DBC489F9BF6(L_17, TweenExtensions_Play_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m2442DE0FF8CACF03EFB5003191303DBC489F9BF6_RuntimeMethod_var);
		// break;
		return;
	}

IL_0058:
	{
		// while (_playCount < anims.Length - 1) {
		int32_t L_19 = __this->____playCount_58;
		DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* L_20 = V_0;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_20)->max_length)), 1)))))
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DORewindAndPlayNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DORewindAndPlayNext_m72276B3E5704C60C1F3662786656A0CAA4A63756 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _playCount = -1;
		__this->____playCount_58 = (-1);
		// DOTween.Rewind(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Rewind_mD73DE9114E50F4BC68F8837D5E813A8862D757AD(L_0, (bool)1, NULL);
		// DOPlayNext();
		DOTweenAnimation_DOPlayNext_mB0A10A4963CBB56BC6AA79B312D7B8C00AADB1CA(__this, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DORewindAllById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DORewindAllById_mE62FEDBE903BA4F5BBD184AF26CE173949C10FBC (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _playCount = -1;
		__this->____playCount_58 = (-1);
		// DOTween.Rewind(id);
		String_t* L_0 = ___id0;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Rewind_mD73DE9114E50F4BC68F8837D5E813A8862D757AD(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DORestartById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DORestartById_m79A437D8087A41B5B1DB998B2D95ACBC06C92F34 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _playCount = -1;
		__this->____playCount_58 = (-1);
		// DOTween.Restart(this.gameObject, id);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_1 = ___id0;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = DOTween_Restart_m9227E6E935FB952130604F595D42A08D9136C358(L_0, L_1, (bool)1, (-1.0f), NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DORestartAllById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DORestartAllById_mB4956E8A288B61CE7BFD1E091BE0F0E75B360E20 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _playCount = -1;
		__this->____playCount_58 = (-1);
		// DOTween.Restart(id);
		String_t* L_0 = ___id0;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Restart_m1697F3A59A3A78B36022F5E4A082B9116DEBFA11(L_0, (bool)1, (-1.0f), NULL);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<DG.Tweening.Tween> DG.Tweening.DOTweenAnimation::GetTweens()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD* DOTweenAnimation_GetTweens_mFA2D6C6863BE615A2D33B8D0E97C5FA40DF9B4EF (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisDOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_mBD8DF07C7D147339501B59183140B9EF098D3204_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mBA978C54F180239702014DDD75202F19F926C6C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEDBC45510C70567B8263CF690D19D50EF22235D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD* V_0 = NULL;
	DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* V_1 = NULL;
	int32_t V_2 = 0;
	DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* V_3 = NULL;
	{
		// List<Tween> result = new List<Tween>();
		List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD* L_0 = (List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD*)il2cpp_codegen_object_new(List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mEDBC45510C70567B8263CF690D19D50EF22235D8(L_0, List_1__ctor_mEDBC45510C70567B8263CF690D19D50EF22235D8_RuntimeMethod_var);
		V_0 = L_0;
		// DOTweenAnimation[] anims = this.GetComponents<DOTweenAnimation>();
		DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* L_1;
		L_1 = Component_GetComponents_TisDOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_mBD8DF07C7D147339501B59183140B9EF098D3204(__this, Component_GetComponents_TisDOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89_mBD8DF07C7D147339501B59183140B9EF098D3204_RuntimeMethod_var);
		// foreach (DOTweenAnimation anim in anims) result.Add(anim.tween);
		V_1 = L_1;
		V_2 = 0;
		goto IL_0025;
	}

IL_0011:
	{
		// foreach (DOTweenAnimation anim in anims) result.Add(anim.tween);
		DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		// foreach (DOTweenAnimation anim in anims) result.Add(anim.tween);
		List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD* L_6 = V_0;
		DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* L_7 = V_3;
		NullCheck(L_7);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_8 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)L_7)->___tween_20;
		NullCheck(L_6);
		List_1_Add_mBA978C54F180239702014DDD75202F19F926C6C6_inline(L_6, L_8, List_1_Add_mBA978C54F180239702014DDD75202F19F926C6C6_RuntimeMethod_var);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0025:
	{
		// foreach (DOTweenAnimation anim in anims) result.Add(anim.tween);
		int32_t L_10 = V_2;
		DOTweenAnimationU5BU5D_tF530B3C3860E2C494E291F938681DB0A9D98CB33* L_11 = V_1;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0011;
		}
	}
	{
		// return result;
		List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD* L_12 = V_0;
		return L_12;
	}
}
// DG.Tweening.DOTweenAnimation/TargetType DG.Tweening.DOTweenAnimation::TypeToDOTargetType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTweenAnimation_TypeToDOTargetType_mD0026308F78DB2907DAFA8B790AF57437D031D3C (Type_t* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TargetType_t44905BCDEEA34D8E3E13EE21AE4AB658D194D877_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TargetType_t44905BCDEEA34D8E3E13EE21AE4AB658D194D877_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6696B5BAE2BDB2FB41C480BCA3BEA55217F8CC87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CCF95ED19A7C10C7DD800A4E0C960CACFE7FF1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95736F87FFB47A6CBA1FAEFC7529C2A3F3EE5E7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8EA9923B74BD243E764B8F9D62174B9D637CB97);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// string str = t.ToString();
		Type_t* L_0 = ___t0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		V_0 = L_1;
		// int dotIndex = str.LastIndexOf(".");
		String_t* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40(L_2, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		V_1 = L_3;
		// if (dotIndex != -1) str = str.Substring(dotIndex + 1);
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0021;
		}
	}
	{
		// if (dotIndex != -1) str = str.Substring(dotIndex + 1);
		String_t* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		String_t* L_7;
		L_7 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), NULL);
		V_0 = L_7;
	}

IL_0021:
	{
		// if (str.IndexOf("Renderer") != -1 && (str != "SpriteRenderer")) str = "Renderer";
		String_t* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_8, _stringLiteral8CCF95ED19A7C10C7DD800A4E0C960CACFE7FF1C, NULL);
		if ((((int32_t)L_9) == ((int32_t)(-1))))
		{
			goto IL_0042;
		}
	}
	{
		String_t* L_10 = V_0;
		bool L_11;
		L_11 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_10, _stringLiteral6696B5BAE2BDB2FB41C480BCA3BEA55217F8CC87, NULL);
		if (!L_11)
		{
			goto IL_0042;
		}
	}
	{
		// if (str.IndexOf("Renderer") != -1 && (str != "SpriteRenderer")) str = "Renderer";
		V_0 = _stringLiteral8CCF95ED19A7C10C7DD800A4E0C960CACFE7FF1C;
	}

IL_0042:
	{
		// if (str == "RawImage") str = "Image"; // RawImages are managed like Images for DOTweenAnimation (color and fade use Graphic target anyway)
		String_t* L_12 = V_0;
		bool L_13;
		L_13 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_12, _stringLiteral95736F87FFB47A6CBA1FAEFC7529C2A3F3EE5E7A, NULL);
		if (!L_13)
		{
			goto IL_0055;
		}
	}
	{
		// if (str == "RawImage") str = "Image"; // RawImages are managed like Images for DOTweenAnimation (color and fade use Graphic target anyway)
		V_0 = _stringLiteralD8EA9923B74BD243E764B8F9D62174B9D637CB97;
	}

IL_0055:
	{
		// return (TargetType)Enum.Parse(typeof(TargetType), str);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (TargetType_t44905BCDEEA34D8E3E13EE21AE4AB658D194D877_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_14, NULL);
		String_t* L_16 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_17;
		L_17 = Enum_Parse_m2E810F090FE2D6D78D29D87EA6773F8C616E0257(L_15, L_16, NULL);
		return ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_17, TargetType_t44905BCDEEA34D8E3E13EE21AE4AB658D194D877_il2cpp_TypeInfo_var))));
	}
}
// DG.Tweening.Tween DG.Tweening.DOTweenAnimation::CreateEditorPreview()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* DOTweenAnimation_CreateEditorPreview_m71BB6F329F0A1A97C543F6DA20A9E2845F9E50FB (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	{
		// if (Application.isPlaying) return null;
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (Application.isPlaying) return null;
		return (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)NULL;
	}

IL_0009:
	{
		// CreateTween();
		DOTweenAnimation_CreateTween_m91F4DAB080F554854AF7953DC7EF81409098F8F2(__this, NULL);
		// return tween;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_1 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		return L_1;
	}
}
// UnityEngine.GameObject DG.Tweening.DOTweenAnimation::GetTweenGO()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* DOTweenAnimation_GetTweenGO_mAA4B88621B513AD6D7A76032131659A2453654CC (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	{
		// return targetIsSelf ? this.gameObject : targetGO;
		bool L_0 = __this->___targetIsSelf_22;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___targetGO_23;
		return L_1;
	}

IL_000f:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		return L_2;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::ReEvaluateRelativeTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_ReEvaluateRelativeTween_mD0A5E517DC24E42DA505252FF14510A82AF3D884 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BCD07D6842DC528F48EA9D13B36828C4A3980CE);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject tweenGO = GetTweenGO();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = DOTweenAnimation_GetTweenGO_mAA4B88621B513AD6D7A76032131659A2453654CC(__this, NULL);
		V_0 = L_0;
		// if (tweenGO == null) {
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		// Debug.LogWarning(string.Format("{0} :: This DOTweenAnimation's target/GameObject is unset: the tween will not be created.", this.gameObject.name), this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_3, NULL);
		String_t* L_5;
		L_5 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral7BCD07D6842DC528F48EA9D13B36828C4A3980CE, L_4, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m5C8299150E64600CBF5C92706AD610C21D0C0DC5(L_5, L_6, NULL);
		// return;
		return;
	}

IL_0031:
	{
		// if (animationType == AnimationType.Move) {
		int32_t L_7 = __this->___animationType_39;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		// ((Tweener)tween).ChangeEndValue(tweenGO.transform.position + endValueV3, true);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_8 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_0;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = __this->___endValueV3_45;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_11, L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = L_13;
		RuntimeObject* L_15 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_14);
		NullCheck(((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)CastclassClass((RuntimeObject*)L_8, Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_il2cpp_TypeInfo_var)));
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_16;
		L_16 = VirtualFuncInvoker2< Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, RuntimeObject*, bool >::Invoke(11 /* DG.Tweening.Tweener DG.Tweening.Tweener::ChangeEndValue(System.Object,System.Boolean) */, ((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)CastclassClass((RuntimeObject*)L_8, Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_il2cpp_TypeInfo_var)), L_15, (bool)1);
		return;
	}

IL_0068:
	{
		// } else if (animationType == AnimationType.LocalMove) {
		int32_t L_17 = __this->___animationType_39;
		if ((!(((uint32_t)L_17) == ((uint32_t)2))))
		{
			goto IL_009e;
		}
	}
	{
		// ((Tweener)tween).ChangeEndValue(tweenGO.transform.localPosition + endValueV3, true);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_18 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = V_0;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = __this->___endValueV3_45;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_21, L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = L_23;
		RuntimeObject* L_25 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_24);
		NullCheck(((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)CastclassClass((RuntimeObject*)L_18, Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_il2cpp_TypeInfo_var)));
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_26;
		L_26 = VirtualFuncInvoker2< Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, RuntimeObject*, bool >::Invoke(11 /* DG.Tweening.Tweener DG.Tweening.Tweener::ChangeEndValue(System.Object,System.Boolean) */, ((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)CastclassClass((RuntimeObject*)L_18, Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_il2cpp_TypeInfo_var)), L_25, (bool)1);
	}

IL_009e:
	{
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation__ctor_m250D5B591D9CDF8F9F165FF1F355597D2E615715 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool targetIsSelf = true; // If FALSE allows to set the target manually
		__this->___targetIsSelf_22 = (bool)1;
		// public bool tweenTargetIsTargetGO = true;
		__this->___tweenTargetIsTargetGO_24 = (bool)1;
		// public float duration = 1;
		__this->___duration_26 = (1.0f);
		// public Ease easeType = Ease.OutQuad;
		__this->___easeType_27 = 6;
		// public AnimationCurve easeCurve = new AnimationCurve(new Keyframe(0, 0), new Keyframe(1, 1));
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_0 = (KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)SZArrayNew(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_1 = L_0;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_2), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_3 = L_1;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_4), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_4);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E(L_5, L_3, NULL);
		__this->___easeCurve_28 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___easeCurve_28), (void*)L_5);
		// public int loops = 1;
		__this->___loops_30 = 1;
		// public string id = "";
		__this->___id_31 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___id_31), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public bool autoKill = true;
		__this->___autoKill_35 = (bool)1;
		// public bool isActive = true;
		__this->___isActive_36 = (bool)1;
		// public bool autoPlay = true;
		__this->___autoPlay_42 = (bool)1;
		// public Color endValueColor = new Color(1, 1, 1, 1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_6), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->___endValueColor_47 = L_6;
		// public string endValueString = "";
		__this->___endValueString_48 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___endValueString_48), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public Rect endValueRect = new Rect(0, 0, 0, 0);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_7;
		memset((&L_7), 0, sizeof(L_7));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_7), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___endValueRect_49 = L_7;
		// int _playCount = -1; // Used when calling DOPlayNext
		__this->____playCount_58 = (-1);
		ABSAnimationComponent__ctor_mF2DC2EF90DDA4C57EC4858124EEEE03FE4CBB328(__this, NULL);
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::<CreateTween>b__47_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_U3CCreateTweenU3Eb__47_0_mBD3557DDE92EE0029CF11BEFCEC3534AD5A5C283 (DOTweenAnimation_t941E0DA645657D923A54198B9BBEE27B9FE30F89* __this, const RuntimeMethod* method) 
{
	{
		// .OnKill(()=> tween = null);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)(Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenProShortcuts::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenProShortcuts__cctor_m5BA9B49D2E4C189ED49E39C3E5961B11B6B1BE8F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpiralPlugin_t0EC3955D810AAED4713FA63AAEACDA66063B604E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SpiralPlugin stub = new SpiralPlugin();
		SpiralPlugin_t0EC3955D810AAED4713FA63AAEACDA66063B604E* L_0 = (SpiralPlugin_t0EC3955D810AAED4713FA63AAEACDA66063B604E*)il2cpp_codegen_object_new(SpiralPlugin_t0EC3955D810AAED4713FA63AAEACDA66063B604E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SpiralPlugin__ctor_m9ACFE0F9B14BBBD77A9570420667150892067033(L_0, NULL);
		// }
		return;
	}
}
// DG.Tweening.Tweener DG.Tweening.DOTweenProShortcuts::DOSpiral(UnityEngine.Transform,System.Single,System.Nullable`1<UnityEngine.Vector3>,DG.Tweening.SpiralMode,System.Single,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* DOTweenProShortcuts_DOSpiral_m545A153CD3A4F66CEF5D0376E959701D333FDE2B (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, float ___duration1, Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___axis2, int32_t ___mode3, float ___speed4, float ___frequency5, float ___depth6, bool ___snapping7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_To_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisSpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D_m5F5B0052265CFE642C737BE4805EE5E79C4ECBCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mD88C565C80170105E87BB423C5B2F974840EF90F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m75F3ABB694E26670F021136BD3B9E71A65948BC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpiralPlugin_t0EC3955D810AAED4713FA63AAEACDA66063B604E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetTarget_TisTweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B_m97AA03CAB58B00C4DB34E83C88B972A8916083A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CDOSpiralU3Eb__0_m1CCDACC82D59B9DD6DCEEE277BE3D1C410B40CEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CDOSpiralU3Eb__1_m2EA9119E181F78B27E9B32146D9861ABD0C3F7E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_tB5F45687C977F70DAF77F838AE9774426652A19C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_0_tB5F45687C977F70DAF77F838AE9774426652A19C* V_0 = NULL;
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B8_0 = 0;
	{
		U3CU3Ec__DisplayClass1_0_tB5F45687C977F70DAF77F838AE9774426652A19C* L_0 = (U3CU3Ec__DisplayClass1_0_tB5F45687C977F70DAF77F838AE9774426652A19C*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_tB5F45687C977F70DAF77F838AE9774426652A19C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass1_0__ctor_m806C59F8972EC150A820E385B593EA0B56B29B1F(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_0_tB5F45687C977F70DAF77F838AE9774426652A19C* L_1 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___target0;
		NullCheck(L_1);
		L_1->___target_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___target_0), (void*)L_2);
		// if (Mathf.Approximately(speed, 0)) speed = 1;
		float L_3 = ___speed4;
		bool L_4;
		L_4 = Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline(L_3, (0.0f), NULL);
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		// if (Mathf.Approximately(speed, 0)) speed = 1;
		___speed4 = (1.0f);
	}

IL_0022:
	{
		// if (axis == null || axis == Vector3.zero) axis = Vector3.forward;
		bool L_5;
		L_5 = Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_inline((&___axis2), Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_005a;
		}
	}
	{
		Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE L_6 = ___axis2;
		V_1 = L_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_7;
		bool L_8;
		L_8 = Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_inline((&V_1), Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_003f;
		}
	}
	{
		G_B8_0 = 0;
		goto IL_0058;
	}

IL_003f:
	{
		bool L_9;
		L_9 = Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_inline((&V_1), Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_RuntimeMethod_var);
		if (L_9)
		{
			goto IL_004b;
		}
	}
	{
		G_B8_0 = 1;
		goto IL_0058;
	}

IL_004b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Nullable_1_GetValueOrDefault_mD88C565C80170105E87BB423C5B2F974840EF90F_inline((&V_1), Nullable_1_GetValueOrDefault_mD88C565C80170105E87BB423C5B2F974840EF90F_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_2;
		bool L_12;
		L_12 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_10, L_11, NULL);
		G_B8_0 = ((int32_t)(L_12));
	}

IL_0058:
	{
		if (!G_B8_0)
		{
			goto IL_0066;
		}
	}

IL_005a:
	{
		// if (axis == null || axis == Vector3.zero) axis = Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Nullable_1__ctor_m75F3ABB694E26670F021136BD3B9E71A65948BC2((&___axis2), L_13, Nullable_1__ctor_m75F3ABB694E26670F021136BD3B9E71A65948BC2_RuntimeMethod_var);
	}

IL_0066:
	{
		// TweenerCore<Vector3, Vector3, SpiralOptions> t = DOTween.To(SpiralPlugin.Get(), () => target.localPosition, x => target.localPosition = x, (Vector3)axis, duration)
		//     .SetTarget(target);
		il2cpp_codegen_runtime_class_init_inline(SpiralPlugin_t0EC3955D810AAED4713FA63AAEACDA66063B604E_il2cpp_TypeInfo_var);
		ABSTweenPlugin_3_tF7CEB9BBF8FF28D2F3BBF9DB950849DCA238F80C* L_14;
		L_14 = SpiralPlugin_Get_mE4C4E109C56275C41CD556F92D3AD5ED648555E1(NULL);
		U3CU3Ec__DisplayClass1_0_tB5F45687C977F70DAF77F838AE9774426652A19C* L_15 = V_0;
		DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* L_16 = (DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338*)il2cpp_codegen_object_new(DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		DOGetter_1__ctor_m59C11B3FE64C69454BE28721314FD6189629F27E(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass1_0_U3CDOSpiralU3Eb__0_m1CCDACC82D59B9DD6DCEEE277BE3D1C410B40CEE_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass1_0_tB5F45687C977F70DAF77F838AE9774426652A19C* L_17 = V_0;
		DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358* L_18 = (DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358*)il2cpp_codegen_object_new(DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		DOSetter_1__ctor_m9E67232146D149892F1946395AD1B6B1C53F3B60(L_18, L_17, (intptr_t)((void*)U3CU3Ec__DisplayClass1_0_U3CDOSpiralU3Eb__1_m2EA9119E181F78B27E9B32146D9861ABD0C3F7E8_RuntimeMethod_var), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792((&___axis2), Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792_RuntimeMethod_var);
		float L_20 = ___duration1;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B* L_21;
		L_21 = DOTween_To_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisSpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D_m5F5B0052265CFE642C737BE4805EE5E79C4ECBCF(L_14, L_16, L_18, L_19, L_20, DOTween_To_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisSpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D_m5F5B0052265CFE642C737BE4805EE5E79C4ECBCF_RuntimeMethod_var);
		U3CU3Ec__DisplayClass1_0_tB5F45687C977F70DAF77F838AE9774426652A19C* L_22 = V_0;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = L_22->___target_0;
		TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B* L_24;
		L_24 = TweenSettingsExtensions_SetTarget_TisTweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B_m97AA03CAB58B00C4DB34E83C88B972A8916083A9(L_21, L_23, TweenSettingsExtensions_SetTarget_TisTweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B_m97AA03CAB58B00C4DB34E83C88B972A8916083A9_RuntimeMethod_var);
		// t.plugOptions.mode = mode;
		TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B* L_25 = L_24;
		NullCheck(L_25);
		SpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D* L_26 = (&L_25->___plugOptions_58);
		int32_t L_27 = ___mode3;
		L_26->___mode_3 = L_27;
		// t.plugOptions.speed = speed;
		TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B* L_28 = L_25;
		NullCheck(L_28);
		SpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D* L_29 = (&L_28->___plugOptions_58);
		float L_30 = ___speed4;
		L_29->___speed_2 = L_30;
		// t.plugOptions.frequency = frequency;
		TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B* L_31 = L_28;
		NullCheck(L_31);
		SpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D* L_32 = (&L_31->___plugOptions_58);
		float L_33 = ___frequency5;
		L_32->___frequency_1 = L_33;
		// t.plugOptions.depth = depth;
		TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B* L_34 = L_31;
		NullCheck(L_34);
		SpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D* L_35 = (&L_34->___plugOptions_58);
		float L_36 = ___depth6;
		L_35->___depth_0 = L_36;
		// t.plugOptions.snapping = snapping;
		TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B* L_37 = L_34;
		NullCheck(L_37);
		SpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D* L_38 = (&L_37->___plugOptions_58);
		bool L_39 = ___snapping7;
		L_38->___snapping_4 = L_39;
		// return t;
		return L_37;
	}
}
// DG.Tweening.Tweener DG.Tweening.DOTweenProShortcuts::DOSpiral(UnityEngine.Rigidbody,System.Single,System.Nullable`1<UnityEngine.Vector3>,DG.Tweening.SpiralMode,System.Single,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* DOTweenProShortcuts_DOSpiral_mBC25CF666EE124027A5E743CB99A490C1660CC24 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___target0, float ___duration1, Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___axis2, int32_t ___mode3, float ___speed4, float ___frequency5, float ___depth6, bool ___snapping7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_To_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisSpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D_m5F5B0052265CFE642C737BE4805EE5E79C4ECBCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mD88C565C80170105E87BB423C5B2F974840EF90F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m75F3ABB694E26670F021136BD3B9E71A65948BC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpiralPlugin_t0EC3955D810AAED4713FA63AAEACDA66063B604E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetTarget_TisTweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B_m97AA03CAB58B00C4DB34E83C88B972A8916083A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CDOSpiralU3Eb__0_mA0C2085BFC6B0541C15180DAD8844FAFBF8E303C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_t1295D5B080BAB3F595980E470DA1E9BAF1B4967B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_t1295D5B080BAB3F595980E470DA1E9BAF1B4967B* V_0 = NULL;
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B8_0 = 0;
	{
		U3CU3Ec__DisplayClass2_0_t1295D5B080BAB3F595980E470DA1E9BAF1B4967B* L_0 = (U3CU3Ec__DisplayClass2_0_t1295D5B080BAB3F595980E470DA1E9BAF1B4967B*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t1295D5B080BAB3F595980E470DA1E9BAF1B4967B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass2_0__ctor_m7155F8E8DBB0B55CD44790BE6D26FFC39746D949(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_t1295D5B080BAB3F595980E470DA1E9BAF1B4967B* L_1 = V_0;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2 = ___target0;
		NullCheck(L_1);
		L_1->___target_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___target_0), (void*)L_2);
		// if (Mathf.Approximately(speed, 0)) speed = 1;
		float L_3 = ___speed4;
		bool L_4;
		L_4 = Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline(L_3, (0.0f), NULL);
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		// if (Mathf.Approximately(speed, 0)) speed = 1;
		___speed4 = (1.0f);
	}

IL_0022:
	{
		// if (axis == null || axis == Vector3.zero) axis = Vector3.forward;
		bool L_5;
		L_5 = Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_inline((&___axis2), Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_005a;
		}
	}
	{
		Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE L_6 = ___axis2;
		V_1 = L_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_7;
		bool L_8;
		L_8 = Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_inline((&V_1), Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_003f;
		}
	}
	{
		G_B8_0 = 0;
		goto IL_0058;
	}

IL_003f:
	{
		bool L_9;
		L_9 = Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_inline((&V_1), Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_RuntimeMethod_var);
		if (L_9)
		{
			goto IL_004b;
		}
	}
	{
		G_B8_0 = 1;
		goto IL_0058;
	}

IL_004b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Nullable_1_GetValueOrDefault_mD88C565C80170105E87BB423C5B2F974840EF90F_inline((&V_1), Nullable_1_GetValueOrDefault_mD88C565C80170105E87BB423C5B2F974840EF90F_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_2;
		bool L_12;
		L_12 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_10, L_11, NULL);
		G_B8_0 = ((int32_t)(L_12));
	}

IL_0058:
	{
		if (!G_B8_0)
		{
			goto IL_0066;
		}
	}

IL_005a:
	{
		// if (axis == null || axis == Vector3.zero) axis = Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Nullable_1__ctor_m75F3ABB694E26670F021136BD3B9E71A65948BC2((&___axis2), L_13, Nullable_1__ctor_m75F3ABB694E26670F021136BD3B9E71A65948BC2_RuntimeMethod_var);
	}

IL_0066:
	{
		// TweenerCore<Vector3, Vector3, SpiralOptions> t = DOTween.To(SpiralPlugin.Get(), () => target.position, target.MovePosition, (Vector3)axis, duration)
		//     .SetTarget(target);
		il2cpp_codegen_runtime_class_init_inline(SpiralPlugin_t0EC3955D810AAED4713FA63AAEACDA66063B604E_il2cpp_TypeInfo_var);
		ABSTweenPlugin_3_tF7CEB9BBF8FF28D2F3BBF9DB950849DCA238F80C* L_14;
		L_14 = SpiralPlugin_Get_mE4C4E109C56275C41CD556F92D3AD5ED648555E1(NULL);
		U3CU3Ec__DisplayClass2_0_t1295D5B080BAB3F595980E470DA1E9BAF1B4967B* L_15 = V_0;
		DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* L_16 = (DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338*)il2cpp_codegen_object_new(DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		DOGetter_1__ctor_m59C11B3FE64C69454BE28721314FD6189629F27E(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3CDOSpiralU3Eb__0_mA0C2085BFC6B0541C15180DAD8844FAFBF8E303C_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass2_0_t1295D5B080BAB3F595980E470DA1E9BAF1B4967B* L_17 = V_0;
		NullCheck(L_17);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_18 = L_17->___target_0;
		DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358* L_19 = (DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358*)il2cpp_codegen_object_new(DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		DOSetter_1__ctor_m9E67232146D149892F1946395AD1B6B1C53F3B60(L_19, L_18, (intptr_t)((void*)Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9_RuntimeMethod_var), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792((&___axis2), Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792_RuntimeMethod_var);
		float L_21 = ___duration1;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B* L_22;
		L_22 = DOTween_To_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisSpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D_m5F5B0052265CFE642C737BE4805EE5E79C4ECBCF(L_14, L_16, L_19, L_20, L_21, DOTween_To_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisSpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D_m5F5B0052265CFE642C737BE4805EE5E79C4ECBCF_RuntimeMethod_var);
		U3CU3Ec__DisplayClass2_0_t1295D5B080BAB3F595980E470DA1E9BAF1B4967B* L_23 = V_0;
		NullCheck(L_23);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_24 = L_23->___target_0;
		TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B* L_25;
		L_25 = TweenSettingsExtensions_SetTarget_TisTweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B_m97AA03CAB58B00C4DB34E83C88B972A8916083A9(L_22, L_24, TweenSettingsExtensions_SetTarget_TisTweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B_m97AA03CAB58B00C4DB34E83C88B972A8916083A9_RuntimeMethod_var);
		// t.plugOptions.mode = mode;
		TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B* L_26 = L_25;
		NullCheck(L_26);
		SpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D* L_27 = (&L_26->___plugOptions_58);
		int32_t L_28 = ___mode3;
		L_27->___mode_3 = L_28;
		// t.plugOptions.speed = speed;
		TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B* L_29 = L_26;
		NullCheck(L_29);
		SpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D* L_30 = (&L_29->___plugOptions_58);
		float L_31 = ___speed4;
		L_30->___speed_2 = L_31;
		// t.plugOptions.frequency = frequency;
		TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B* L_32 = L_29;
		NullCheck(L_32);
		SpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D* L_33 = (&L_32->___plugOptions_58);
		float L_34 = ___frequency5;
		L_33->___frequency_1 = L_34;
		// t.plugOptions.depth = depth;
		TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B* L_35 = L_32;
		NullCheck(L_35);
		SpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D* L_36 = (&L_35->___plugOptions_58);
		float L_37 = ___depth6;
		L_36->___depth_0 = L_37;
		// t.plugOptions.snapping = snapping;
		TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B* L_38 = L_35;
		NullCheck(L_38);
		SpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D* L_39 = (&L_38->___plugOptions_58);
		bool L_40 = ___snapping7;
		L_39->___snapping_4 = L_40;
		// return t;
		return L_38;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m806C59F8972EC150A820E385B593EA0B56B29B1F (U3CU3Ec__DisplayClass1_0_tB5F45687C977F70DAF77F838AE9774426652A19C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass1_0::<DOSpiral>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 U3CU3Ec__DisplayClass1_0_U3CDOSpiralU3Eb__0_m1CCDACC82D59B9DD6DCEEE277BE3D1C410B40CEE (U3CU3Ec__DisplayClass1_0_tB5F45687C977F70DAF77F838AE9774426652A19C* __this, const RuntimeMethod* method) 
{
	{
		// TweenerCore<Vector3, Vector3, SpiralOptions> t = DOTween.To(SpiralPlugin.Get(), () => target.localPosition, x => target.localPosition = x, (Vector3)axis, duration)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___target_0;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_0, NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass1_0::<DOSpiral>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3CDOSpiralU3Eb__1_m2EA9119E181F78B27E9B32146D9861ABD0C3F7E8 (U3CU3Ec__DisplayClass1_0_tB5F45687C977F70DAF77F838AE9774426652A19C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___x0, const RuntimeMethod* method) 
{
	{
		// TweenerCore<Vector3, Vector3, SpiralOptions> t = DOTween.To(SpiralPlugin.Get(), () => target.localPosition, x => target.localPosition = x, (Vector3)axis, duration)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___target_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_1, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m7155F8E8DBB0B55CD44790BE6D26FFC39746D949 (U3CU3Ec__DisplayClass2_0_t1295D5B080BAB3F595980E470DA1E9BAF1B4967B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass2_0::<DOSpiral>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 U3CU3Ec__DisplayClass2_0_U3CDOSpiralU3Eb__0_mA0C2085BFC6B0541C15180DAD8844FAFBF8E303C (U3CU3Ec__DisplayClass2_0_t1295D5B080BAB3F595980E470DA1E9BAF1B4967B* __this, const RuntimeMethod* method) 
{
	{
		// TweenerCore<Vector3, Vector3, SpiralOptions> t = DOTween.To(SpiralPlugin.Get(), () => target.position, target.MovePosition, (Vector3)axis, duration)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___target_0;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_0, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CactiveU3Ek__BackingField_37;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Tween_get_playedOnce_mDA42B6964058549DB8BBC9217DBBB2F0EB67A335_inline (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CplayedOnceU3Ek__BackingField_44;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Tween_get_position_mF8A2FF9C0DA291DEC595AC8C00E2E096A009B5A8_inline (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___U3CpositionU3Ek__BackingField_45;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		float L_0 = ___b1;
		float L_1 = ___a0;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___a0;
		float L_4;
		L_4 = fabsf(L_3);
		float L_5 = ___b1;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_4, L_6, NULL);
		float L_8 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		float L_9;
		L_9 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(((float)il2cpp_codegen_multiply((9.99999997E-07f), L_7)), ((float)il2cpp_codegen_multiply(L_8, (8.0f))), NULL);
		V_0 = (bool)((((float)L_2) < ((float)L_9))? 1 : 0);
		goto IL_0035;
	}

IL_0035:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_gshared_inline (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Nullable_1_GetValueOrDefault_mD88C565C80170105E87BB423C5B2F974840EF90F_gshared_inline (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
