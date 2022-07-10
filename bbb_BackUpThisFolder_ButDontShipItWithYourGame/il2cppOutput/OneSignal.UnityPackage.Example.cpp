﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<OneSignalSDK.ActionButton>
struct List_1_tBD3D5DE492DB6E8472E966342E2BE6A082F6D4F7;
// System.Collections.Generic.List`1<OneSignalSDK.Notification>
struct List_1_tC08D2F537F1A02BE216FE66A2D75BA6E87EB2005;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// OneSignalSDK.OneSignal/StateChangeDelegate`1<OneSignalSDK.EmailSubscriptionState>
struct StateChangeDelegate_1_tF46780AEE1268A63DA4F780C1535FF89CE8F431D;
// OneSignalSDK.OneSignal/StateChangeDelegate`1<System.Int32Enum>
struct StateChangeDelegate_1_t4B52785BE7AD771FA98F133FBF8F268444BEBA31;
// OneSignalSDK.OneSignal/StateChangeDelegate`1<OneSignalSDK.NotificationPermission>
struct StateChangeDelegate_1_tEC91B801172520D1E5AE68DEA6F822EB439F8E40;
// OneSignalSDK.OneSignal/StateChangeDelegate`1<System.Object>
struct StateChangeDelegate_1_tB747380EC1FFB1A9D8C6C3A2B54533448DEB7C19;
// OneSignalSDK.OneSignal/StateChangeDelegate`1<OneSignalSDK.PushSubscriptionState>
struct StateChangeDelegate_1_t758AC0332C886E33E5F088A18D25BD4EC550FF08;
// OneSignalSDK.OneSignal/StateChangeDelegate`1<OneSignalSDK.SMSSubscriptionState>
struct StateChangeDelegate_1_t6DB9D252107863BC51FC1376ABD654FF97083A9E;
// System.Threading.Tasks.TaskFactory`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>
struct TaskFactory_1_tB1C1B7C6F59EA599968110F50AF45509E503FFB9;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0;
// System.Threading.Tasks.TaskFactory`1<OneSignalSDK.NotificationPermission>
struct TaskFactory_1_t86AC74A1BC60D704A22502BB796E1D485FB5ACDA;
// System.Threading.Tasks.Task`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>
struct Task_1_tE10B49C177D26DA80EFCDC3EC380E30315F5B322;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
// System.Threading.Tasks.Task`1<System.Int32Enum>
struct Task_1_t8DED34447688BFCF5112B0D05D5A80CED94E4BFB;
// System.Threading.Tasks.Task`1<OneSignalSDK.NotificationPermission>
struct Task_1_tBF748A8FE17A296106F783D16AB4C0F3FE904C1A;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// OneSignalSDK.BackgroundImageLayout
struct BackgroundImageLayout_tEE5FC51BCCA47E42652B792F502732AF97FDFCF8;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// OneSignalSDK.EmailSubscriptionState
struct EmailSubscriptionState_t251F184AA5FCD234E408E944706746C462F5ED01;
// System.Exception
struct Exception_t;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// OneSignalSDK.InAppMessage
struct InAppMessage_t85CAE1C81FC1D740C4A122EFF7F31F1151A0E557;
// OneSignalSDK.InAppMessageAction
struct InAppMessageAction_t2A5FC86EC22BE2BDB88E867CECA230BD82B486AB;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// OneSignalSDK.Notification
struct Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F;
// OneSignalSDK.NotificationAction
struct NotificationAction_t75C59DEDCC238B13AB8901FA6884DD20BDF1DC99;
// OneSignalSDK.NotificationOpenedResult
struct NotificationOpenedResult_t8500E9CDC10B9FCC6082DD66B86D9AD123BBAD01;
// OneSignalSDK.OneSignal
struct OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85;
// OneSignalExampleBehaviour
struct OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D;
// OneSignalSDK.PushSubscriptionState
struct PushSubscriptionState_tCC90B16EE861FADF35E5D4164A486E98EA96A635;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// OneSignalSDK.SMSSubscriptionState
struct SMSSubscriptionState_t5C7EA40BB7CC39EC26BA103E18EDC9E0215E39BC;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// OneSignalSDK.OneSignal/InAppMessageActionDelegate
struct InAppMessageActionDelegate_t05B28B99EFCF8F671A51AD30444F5A734F68D7B8;
// OneSignalSDK.OneSignal/InAppMessageLifecycleDelegate
struct InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF;
// OneSignalSDK.OneSignal/NotificationActionDelegate
struct NotificationActionDelegate_t0506036A22EDF3F41306BDBE188F5B4F7F29596D;
// OneSignalSDK.OneSignal/NotificationWillShowDelegate
struct NotificationWillShowDelegate_tEBF8F8CF9A7B25750FBBFC55CB8FDD55F4379758;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InAppMessageActionDelegate_t05B28B99EFCF8F671A51AD30444F5A734F68D7B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogLevel_t4A370EAA8CFB375359332FEC8B714A693BA14675_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotificationActionDelegate_t0506036A22EDF3F41306BDBE188F5B4F7F29596D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotificationPermission_tFF856FEAB362EF437681DC4A1745FB7BF161B7E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotificationWillShowDelegate_tEBF8F8CF9A7B25750FBBFC55CB8FDD55F4379758_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateChangeDelegate_1_t6DB9D252107863BC51FC1376ABD654FF97083A9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateChangeDelegate_1_t758AC0332C886E33E5F088A18D25BD4EC550FF08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateChangeDelegate_1_tEC91B801172520D1E5AE68DEA6F822EB439F8E40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateChangeDelegate_1_tF46780AEE1268A63DA4F780C1535FF89CE8F431D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral01E18A3F9A449B16A38AA5F9BBAF02834C11C4EC;
IL2CPP_EXTERN_C String_t* _stringLiteral05EA4FA781F4CF851462A10DA85876E1B3A5FA9B;
IL2CPP_EXTERN_C String_t* _stringLiteral0BBF6AF94AA8E2DE8694CBCB4FCEA020B02D0DE9;
IL2CPP_EXTERN_C String_t* _stringLiteral0EC43AA755CABA93E92728B8B8DB94F10C566178;
IL2CPP_EXTERN_C String_t* _stringLiteral15F56C099E093B8F63CF37C0C2EAD33A65F14539;
IL2CPP_EXTERN_C String_t* _stringLiteral238C90044DC6465892B6F1AC14DBE2EF4B0A5653;
IL2CPP_EXTERN_C String_t* _stringLiteral24EBAE03290BDB8A6D5FCFA0D0AF979A5B42BF1E;
IL2CPP_EXTERN_C String_t* _stringLiteral26406FA21D3AC7C6FE6934854AEF60C07AC72FEC;
IL2CPP_EXTERN_C String_t* _stringLiteral292185FA1B3A3D76D09C5EE854838411E49EF6C3;
IL2CPP_EXTERN_C String_t* _stringLiteral2B0921B689C15DF7E54795FD35E744E54B70F187;
IL2CPP_EXTERN_C String_t* _stringLiteral2C20F9816CD10F0DC698717A615F80E18AB3C31A;
IL2CPP_EXTERN_C String_t* _stringLiteral32708FE7DFB1D8249B68CFDAD3215A7190F52F40;
IL2CPP_EXTERN_C String_t* _stringLiteral3371C9C28E563AFD0A683CA126F078F3F07B7306;
IL2CPP_EXTERN_C String_t* _stringLiteral34E2CD27F191CCD6FC6F9EE8F2A6E072EC492FD6;
IL2CPP_EXTERN_C String_t* _stringLiteral37058CC42E9B61FFDC26545782AF5D43C57A006E;
IL2CPP_EXTERN_C String_t* _stringLiteral370C64F8FD477400A9AB233E14781A933F96CDEA;
IL2CPP_EXTERN_C String_t* _stringLiteral3A29862F8060663FDD6CD353DD0839770D6D4374;
IL2CPP_EXTERN_C String_t* _stringLiteral3AAF2ACAFD732F56CB06D9173D238BEC46A60524;
IL2CPP_EXTERN_C String_t* _stringLiteral3E72D06AA7BBF1FEE850F4EB87D1C1E49F6B6150;
IL2CPP_EXTERN_C String_t* _stringLiteral41F04453962CC28FD7D6EB3B17ADC495D5BA63F3;
IL2CPP_EXTERN_C String_t* _stringLiteral43BD430A9BFC2D931C150678B384E3CD692D783F;
IL2CPP_EXTERN_C String_t* _stringLiteral51B9A921875B50DC2E745884E0F3B09DFCFEA44A;
IL2CPP_EXTERN_C String_t* _stringLiteral57D40B16429CCED382F1F20C5CB5D1510A8070DC;
IL2CPP_EXTERN_C String_t* _stringLiteral5B53B0D25A5872D78BE2CF6B084001AFB9D1D844;
IL2CPP_EXTERN_C String_t* _stringLiteral665BBCF4E30C5DE47C2BA6AF9241BC8139E1129F;
IL2CPP_EXTERN_C String_t* _stringLiteral6CF315956220F84FB2FF455951F47AA2206C0197;
IL2CPP_EXTERN_C String_t* _stringLiteral6EB18F22CDC728EF9A307F2E328C717D7C4237AB;
IL2CPP_EXTERN_C String_t* _stringLiteral79AD6030ED20C82B46AF955D4F885785A1BA75F1;
IL2CPP_EXTERN_C String_t* _stringLiteral7E65884974ADFD1C18B802BD18F19E1B39D362FB;
IL2CPP_EXTERN_C String_t* _stringLiteral7FFB595817D967D720E2BD863CF8984C56481D55;
IL2CPP_EXTERN_C String_t* _stringLiteral86A259D24622639FF6E58F15DAAD45B1AFBF8831;
IL2CPP_EXTERN_C String_t* _stringLiteral8BD580708CBC91AAFE91355E0D75E24CBB70C4A2;
IL2CPP_EXTERN_C String_t* _stringLiteral8DC1F46D96900CEC99760351AB65911BF4D086F2;
IL2CPP_EXTERN_C String_t* _stringLiteral8EB3673162EA246B8527A26368543DEC4BB757C5;
IL2CPP_EXTERN_C String_t* _stringLiteral942279816D7167EFF29ADE92DDB99082435FD092;
IL2CPP_EXTERN_C String_t* _stringLiteral98D4D9A0151E67AF58F8A558B75A0FD72E609B00;
IL2CPP_EXTERN_C String_t* _stringLiteral9EE187A1DFB6C7E24E0162931104A8F2CE585643;
IL2CPP_EXTERN_C String_t* _stringLiteralA1B89E55AB4E0C9AD8A76F720AE7581B8774CB56;
IL2CPP_EXTERN_C String_t* _stringLiteralA2259E6B380BB35DB0B503FE20DACCA3D120BBA4;
IL2CPP_EXTERN_C String_t* _stringLiteralA453EEEE28E604CD99A7FC32E3111F34D795B379;
IL2CPP_EXTERN_C String_t* _stringLiteralA4E6F511AC94C7E416783A4F0B369C86577A38F8;
IL2CPP_EXTERN_C String_t* _stringLiteralA83D6EB679661F90384F8C5A6625863740C54B3A;
IL2CPP_EXTERN_C String_t* _stringLiteralB56E33E9E21F934078F51BA790FBC308076F4E51;
IL2CPP_EXTERN_C String_t* _stringLiteralB89B20539112431A0728493D637050AA65DCA08F;
IL2CPP_EXTERN_C String_t* _stringLiteralBFDAF368261DCE5DA9E4C7D2783ABAE10181189D;
IL2CPP_EXTERN_C String_t* _stringLiteralC05F7596C9C5943AD7F0DE9B4F51CE0FD5EE4B1C;
IL2CPP_EXTERN_C String_t* _stringLiteralC2E39AAE4A665B3C7021AC55861BBAF3A9D76359;
IL2CPP_EXTERN_C String_t* _stringLiteralC6DE535D828F30C374EB3BE3FFDE520228FC3096;
IL2CPP_EXTERN_C String_t* _stringLiteralC889EBD1980D52693697F1CA52D3D8899B8AC82C;
IL2CPP_EXTERN_C String_t* _stringLiteralCB21D04D1BB451F3E8165511AF94F871C6200FE6;
IL2CPP_EXTERN_C String_t* _stringLiteralD4C390BA2A3D7B903520D33ADE91809DAB8C39F2;
IL2CPP_EXTERN_C String_t* _stringLiteralD87AF610ECDBA5AC504F6DB10E14E60F44EB4086;
IL2CPP_EXTERN_C String_t* _stringLiteralD9C5BA3BAA95FA0166BA594AD1469305D8959348;
IL2CPP_EXTERN_C String_t* _stringLiteralDA268A460B4B8D5774B2921F29120B2253A1EB39;
IL2CPP_EXTERN_C String_t* _stringLiteralDB7F1A193E7D069CBEACA3D8C2ED0FC305130541;
IL2CPP_EXTERN_C String_t* _stringLiteralDC50D6383D7007FC65742921E018A6070D8FEC5B;
IL2CPP_EXTERN_C String_t* _stringLiteralDFCE30D94367C033F3AE2218F812A2D8655EE69C;
IL2CPP_EXTERN_C String_t* _stringLiteralE1F64D92BDB94D50F1286A336815335D40683981;
IL2CPP_EXTERN_C String_t* _stringLiteralE540A7C06A02CB855DBBB798039B2652B550F2C7;
IL2CPP_EXTERN_C String_t* _stringLiteralF55A0F2D78B5C1CA9C28A3FB31C3BE5A1D06B1E8;
IL2CPP_EXTERN_C String_t* _stringLiteralF6156F26B1EF4E8EA695F8AF1541267DA0B30612;
IL2CPP_EXTERN_C String_t* _stringLiteralF63539DC4886359F646471C655F8F91569281A76;
IL2CPP_EXTERN_C String_t* _stringLiteralFD94542FF0463652B9C663330ADD2A10AA99DDE8;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CRemoveTagU3Ed__41_t7AEB7AF364BD362DEB85346FB50D7F97CE8D4753_m8CC700D2719336AFD70ECB58DAF517491A226E22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetEmailU3Ed__29_t4CF9DA5972E391F6DE8D065E93F5C4D4E3C40481_m15E20F3826DE0E3EB935F353533782074D0933C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetExternalIdU3Ed__30_t2718EEF57C253F31438936208C113AAE7CF2C151_mDCB4536C0C3F81A2649DE4B4D8586F7AC23E0759_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetOutcomeU3Ed__43_t6C5CDBF58F1BFC7D10523D2A10BE774563D35862_m1182257A24C241C1F39CE2AA761BAED13DC06C4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetOutcomeWithValueU3Ed__45_t3972DDE673C352FC834CD3A9081C19845D97BF13_mDE102329A71C71E2904D24D3D1CC10889D0D62D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetSMSNumberU3Ed__31_tA65B67E5A444829D4BF816884D4935C22CA6D816_m9AAC63C4C4A76376433358F24930780786B4E5FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetTagU3Ed__40_tAF8DC18D195FBDD30302D1E8800CB56488E5CA9E_m07F657EA210318028CCD6E0A86186D81FA14A2C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetUniqueOutcomeU3Ed__44_t2A820F14D89710D912DEA5E4824712CB32C612A5_m3C94E5A60C616C64B2898F659D35E1DE171A2CE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t939447628654858A359A8B2688412DA89ED1880E_TisU3CGetTagsU3Ed__42_tFF697C520F01E869DF820DF93D382B3CADACB17D_m80D998AA1BC41083ED38F1738CDBA0E4BD9740ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t939447628654858A359A8B2688412DA89ED1880E_TisU3CSendPushToSelfU3Ed__34_t20E220D79859C5CAD3FBA52DC7486F7037F0690A_m8E65B345453C2AE6D993AD9A92CE40E30DC6F718_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tBA7C35931A46ACA0D7DAFDD9ADBD6EE93BE13E89_TisU3CPromptForPushU3Ed__32_tD96C472B2DE51806095A83998F06B4FB970879BE_m236D1FFD167D74B5CD93B4EF665036160037D3AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CGetTagsU3Ed__42_tFF697C520F01E869DF820DF93D382B3CADACB17D_mF458F6B5ADC75EAD89263E12A8BA9AB5457BDA69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CPromptForPushU3Ed__32_tD96C472B2DE51806095A83998F06B4FB970879BE_mAC7FE7163FC8339C47D490F01C048AD4863D7FB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CRemoveTagU3Ed__41_t7AEB7AF364BD362DEB85346FB50D7F97CE8D4753_mBD88CE89C1F92ED65444794E24B8A0F6E0DF6B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CSendPushToSelfU3Ed__34_t20E220D79859C5CAD3FBA52DC7486F7037F0690A_m10B69ADAD75752AF021356F2B6FE6594811D409D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CSetEmailU3Ed__29_t4CF9DA5972E391F6DE8D065E93F5C4D4E3C40481_mE6DA5D9AA45A531ABD30B6EF6C7E48BD7DCB93B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CSetExternalIdU3Ed__30_t2718EEF57C253F31438936208C113AAE7CF2C151_m9571B3EDF6F70A3DAA99BE8F0CC6B354DD50B055_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CSetOutcomeU3Ed__43_t6C5CDBF58F1BFC7D10523D2A10BE774563D35862_m2B24396082405351C119B1A85085F9B565011398_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CSetOutcomeWithValueU3Ed__45_t3972DDE673C352FC834CD3A9081C19845D97BF13_m50973F5AFEDFB1330E9DE8D07564476155049CDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CSetSMSNumberU3Ed__31_tA65B67E5A444829D4BF816884D4935C22CA6D816_mB98989A10461C2E8213FF3004D5EC5FBFB30EE5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CSetTagU3Ed__40_tAF8DC18D195FBDD30302D1E8800CB56488E5CA9E_m11DBFE60B3D9EBF9EFEFC30E47340DC9FABFC2D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CSetUniqueOutcomeU3Ed__44_t2A820F14D89710D912DEA5E4824712CB32C612A5_mDDCD8516A595E788364A7B70E67CD4DC8318387B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OneSignalExampleBehaviour__emailStateChanged_m03D936ED453BB0773D03DE5EDDE15570269C222D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OneSignalExampleBehaviour__error_mBB5177866C8A19120933543A7AC8F1CFD7E8C76F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OneSignalExampleBehaviour__iamDidDismiss_m9971753D90ECD8777664A1379D106E0EBC7A8210_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OneSignalExampleBehaviour__iamDidDisplay_mF76633494ADE657DA230C091E69DA65ED7B36EF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OneSignalExampleBehaviour__iamTriggeredAction_m21555EFB72BEE8CC3E5E8EE6E2ED71804C94BB3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OneSignalExampleBehaviour__iamWillDismiss_m8073DF3B35C706207F72C69A7D8015FABD210966_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OneSignalExampleBehaviour__iamWillDisplay_mBE4F66F8B09110C091C893D344808C3CDE83E682_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OneSignalExampleBehaviour__nextEnum_TisLogLevel_t4A370EAA8CFB375359332FEC8B714A693BA14675_mA11D237EDB7B60409B136A1CC296CBAFB35965D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OneSignalExampleBehaviour__notificationOpened_m5F62ECEF3E0CC978D1DB958FEF69F818FA7B4DF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OneSignalExampleBehaviour__notificationPermissionChanged_m147834E1EDC14F74396A70CD6663529EB86E4E4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OneSignalExampleBehaviour__notificationReceived_m2804A15BDBCDF16E8F71F99FD7E6E60F20F794E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OneSignalExampleBehaviour__pushStateChanged_m4116F9CB5362E003AC8EF20F93290F5269850767_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OneSignalExampleBehaviour__smsStateChanged_m4F7140DC6A946EDF1C64FD8891CFC0B724AE928B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OneSignalExampleBehaviour__warn_m610DA22B8CC37355B21F3E1F41773675E528FF83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m45C5A6D6235044C234D76E0FCB9BCC713A6C1466_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m792FD4AB6970F6E178E87D95DCFC4C628BE398FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m10C09632D054960F02FE89952251398BF73209E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m33D07F1A430C77959059ECF761C0549E46E2082C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m98B37C463C293DC8A9D3B154B5450F133FF38C02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m99BB27A072DB7B04720F4CB5B07C8CC281E9E46E_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t32A17433D97DAC3D19D8455AEDD82B9D66BB2AAB 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
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

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// OneSignalSDK.EmailSubscriptionState
struct EmailSubscriptionState_t251F184AA5FCD234E408E944706746C462F5ED01  : public RuntimeObject
{
	// System.String OneSignalSDK.EmailSubscriptionState::emailUserId
	String_t* ___emailUserId_0;
	// System.Boolean OneSignalSDK.EmailSubscriptionState::isSubscribed
	bool ___isSubscribed_1;
	// System.String OneSignalSDK.EmailSubscriptionState::emailAddress
	String_t* ___emailAddress_2;
};

// OneSignalSDK.InAppMessage
struct InAppMessage_t85CAE1C81FC1D740C4A122EFF7F31F1151A0E557  : public RuntimeObject
{
	// System.String OneSignalSDK.InAppMessage::messageId
	String_t* ___messageId_0;
};

// OneSignalSDK.InAppMessageAction
struct InAppMessageAction_t2A5FC86EC22BE2BDB88E867CECA230BD82B486AB  : public RuntimeObject
{
	// System.String OneSignalSDK.InAppMessageAction::clickName
	String_t* ___clickName_0;
	// System.String OneSignalSDK.InAppMessageAction::clickUrl
	String_t* ___clickUrl_1;
	// System.Boolean OneSignalSDK.InAppMessageAction::firstClick
	bool ___firstClick_2;
	// System.Boolean OneSignalSDK.InAppMessageAction::closesMessage
	bool ___closesMessage_3;
	// System.String OneSignalSDK.InAppMessageAction::click_name
	String_t* ___click_name_4;
	// System.String OneSignalSDK.InAppMessageAction::click_url
	String_t* ___click_url_5;
	// System.Boolean OneSignalSDK.InAppMessageAction::first_click
	bool ___first_click_6;
	// System.Boolean OneSignalSDK.InAppMessageAction::closes_message
	bool ___closes_message_7;
};

// OneSignalSDK.Notification
struct Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F  : public RuntimeObject
{
	// System.String OneSignalSDK.Notification::notificationId
	String_t* ___notificationId_0;
	// System.String OneSignalSDK.Notification::templateName
	String_t* ___templateName_1;
	// System.String OneSignalSDK.Notification::templateId
	String_t* ___templateId_2;
	// System.String OneSignalSDK.Notification::title
	String_t* ___title_3;
	// System.String OneSignalSDK.Notification::body
	String_t* ___body_4;
	// System.String OneSignalSDK.Notification::launchURL
	String_t* ___launchURL_5;
	// System.String OneSignalSDK.Notification::sound
	String_t* ___sound_6;
	// System.String OneSignalSDK.Notification::collapseId
	String_t* ___collapseId_7;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> OneSignalSDK.Notification::additionalData
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___additionalData_8;
	// System.Collections.Generic.List`1<OneSignalSDK.ActionButton> OneSignalSDK.Notification::actionButtons
	List_1_tBD3D5DE492DB6E8472E966342E2BE6A082F6D4F7* ___actionButtons_9;
	// System.String OneSignalSDK.Notification::rawPayload
	String_t* ___rawPayload_10;
	// System.Int32 OneSignalSDK.Notification::androidNotificationId
	int32_t ___androidNotificationId_11;
	// System.String OneSignalSDK.Notification::smallIcon
	String_t* ___smallIcon_12;
	// System.String OneSignalSDK.Notification::largeIcon
	String_t* ___largeIcon_13;
	// System.String OneSignalSDK.Notification::bigPicture
	String_t* ___bigPicture_14;
	// System.String OneSignalSDK.Notification::smallIconAccentColor
	String_t* ___smallIconAccentColor_15;
	// System.String OneSignalSDK.Notification::ledColor
	String_t* ___ledColor_16;
	// OneSignalSDK.LockScreenVisibility OneSignalSDK.Notification::lockScreenVisibility
	int32_t ___lockScreenVisibility_17;
	// System.String OneSignalSDK.Notification::groupKey
	String_t* ___groupKey_18;
	// System.String OneSignalSDK.Notification::groupMessage
	String_t* ___groupMessage_19;
	// System.String OneSignalSDK.Notification::fromProjectNumber
	String_t* ___fromProjectNumber_20;
	// System.Int32 OneSignalSDK.Notification::priority
	int32_t ___priority_21;
	// System.Collections.Generic.List`1<OneSignalSDK.Notification> OneSignalSDK.Notification::groupedNotifications
	List_1_tC08D2F537F1A02BE216FE66A2D75BA6E87EB2005* ___groupedNotifications_22;
	// OneSignalSDK.BackgroundImageLayout OneSignalSDK.Notification::backgroundImageLayout
	BackgroundImageLayout_tEE5FC51BCCA47E42652B792F502732AF97FDFCF8* ___backgroundImageLayout_23;
	// System.String OneSignalSDK.Notification::subtitle
	String_t* ___subtitle_24;
	// System.Boolean OneSignalSDK.Notification::contentAvailable
	bool ___contentAvailable_25;
	// System.Boolean OneSignalSDK.Notification::mutableContent
	bool ___mutableContent_26;
	// System.String OneSignalSDK.Notification::category
	String_t* ___category_27;
	// System.Int32 OneSignalSDK.Notification::badge
	int32_t ___badge_28;
	// System.Int32 OneSignalSDK.Notification::badgeIncrement
	int32_t ___badgeIncrement_29;
	// System.String OneSignalSDK.Notification::threadId
	String_t* ___threadId_30;
	// System.Double OneSignalSDK.Notification::relevanceScore
	double ___relevanceScore_31;
	// System.String OneSignalSDK.Notification::interruptionLevel
	String_t* ___interruptionLevel_32;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> OneSignalSDK.Notification::attachments
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___attachments_33;
};

// OneSignalSDK.NotificationOpenedResult
struct NotificationOpenedResult_t8500E9CDC10B9FCC6082DD66B86D9AD123BBAD01  : public RuntimeObject
{
	// OneSignalSDK.NotificationAction OneSignalSDK.NotificationOpenedResult::action
	NotificationAction_t75C59DEDCC238B13AB8901FA6884DD20BDF1DC99* ___action_0;
	// OneSignalSDK.Notification OneSignalSDK.NotificationOpenedResult::notification
	Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* ___notification_1;
};

// OneSignalSDK.OneSignal
struct OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85  : public RuntimeObject
{
	// OneSignalSDK.LogLevel OneSignalSDK.OneSignal::_logLevel
	int32_t ____logLevel_4;
	// OneSignalSDK.LogLevel OneSignalSDK.OneSignal::_alertLevel
	int32_t ____alertLevel_5;
};

struct OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85_StaticFields
{
	// System.String OneSignalSDK.OneSignal::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_1;
	// System.Boolean OneSignalSDK.OneSignal::<DidInitialize>k__BackingField
	bool ___U3CDidInitializeU3Ek__BackingField_2;
	// System.Action`1<System.String> OneSignalSDK.OneSignal::OnInitialize
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___OnInitialize_3;
	// OneSignalSDK.OneSignal OneSignalSDK.OneSignal::_default
	OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* ____default_6;
};

// OneSignalSDK.PushSubscriptionState
struct PushSubscriptionState_tCC90B16EE861FADF35E5D4164A486E98EA96A635  : public RuntimeObject
{
	// System.String OneSignalSDK.PushSubscriptionState::userId
	String_t* ___userId_0;
	// System.Boolean OneSignalSDK.PushSubscriptionState::isSubscribed
	bool ___isSubscribed_1;
	// System.String OneSignalSDK.PushSubscriptionState::pushToken
	String_t* ___pushToken_2;
	// System.Boolean OneSignalSDK.PushSubscriptionState::isPushDisabled
	bool ___isPushDisabled_3;
};

// OneSignalSDK.SMSSubscriptionState
struct SMSSubscriptionState_t5C7EA40BB7CC39EC26BA103E18EDC9E0215E39BC  : public RuntimeObject
{
	// System.String OneSignalSDK.SMSSubscriptionState::smsUserId
	String_t* ___smsUserId_0;
	// System.Boolean OneSignalSDK.SMSSubscriptionState::isSubscribed
	bool ___isSubscribed_1;
	// System.String OneSignalSDK.SMSSubscriptionState::smsNumber
	String_t* ___smsNumber_2;
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

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
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

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>
struct TaskAwaiter_1_t939447628654858A359A8B2688412DA89ED1880E 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tE10B49C177D26DA80EFCDC3EC380E30315F5B322* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>
struct TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32Enum>
struct TaskAwaiter_1_tFF3BDC572A8EAF8EDD0863190DB8D7378DBD2900 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t8DED34447688BFCF5112B0D05D5A80CED94E4BFB* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<OneSignalSDK.NotificationPermission>
struct TaskAwaiter_1_tBA7C35931A46ACA0D7DAFDD9ADBD6EE93BE13E89 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tBF748A8FE17A296106F783D16AB4C0F3FE904C1A* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Threading.Tasks.Task`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>
struct Task_1_tE10B49C177D26DA80EFCDC3EC380E30315F5B322  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___m_result_22;
};

struct Task_1_tE10B49C177D26DA80EFCDC3EC380E30315F5B322_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tB1C1B7C6F59EA599968110F50AF45509E503FFB9* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_22;
};

struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<OneSignalSDK.NotificationPermission>
struct Task_1_tBF748A8FE17A296106F783D16AB4C0F3FE904C1A  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_22;
};

struct Task_1_tBF748A8FE17A296106F783D16AB4C0F3FE904C1A_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t86AC74A1BC60D704A22502BB796E1D485FB5ACDA* ___s_defaultFactory_23;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
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

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D 
{
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_pinvoke
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_com
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// OneSignalExampleBehaviour/<GetTags>d__42
struct U3CGetTagsU3Ed__42_tFF697C520F01E869DF820DF93D382B3CADACB17D 
{
	// System.Int32 OneSignalExampleBehaviour/<GetTags>d__42::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder OneSignalExampleBehaviour/<GetTags>d__42::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// OneSignalExampleBehaviour OneSignalExampleBehaviour/<GetTags>d__42::<>4__this
	OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>> OneSignalExampleBehaviour/<GetTags>d__42::<>u__1
	TaskAwaiter_1_t939447628654858A359A8B2688412DA89ED1880E ___U3CU3Eu__1_3;
};

// OneSignalExampleBehaviour/<PromptForPush>d__32
struct U3CPromptForPushU3Ed__32_tD96C472B2DE51806095A83998F06B4FB970879BE 
{
	// System.Int32 OneSignalExampleBehaviour/<PromptForPush>d__32::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder OneSignalExampleBehaviour/<PromptForPush>d__32::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// OneSignalExampleBehaviour OneSignalExampleBehaviour/<PromptForPush>d__32::<>4__this
	OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<OneSignalSDK.NotificationPermission> OneSignalExampleBehaviour/<PromptForPush>d__32::<>u__1
	TaskAwaiter_1_tBA7C35931A46ACA0D7DAFDD9ADBD6EE93BE13E89 ___U3CU3Eu__1_3;
};

// OneSignalExampleBehaviour/<RemoveTag>d__41
struct U3CRemoveTagU3Ed__41_t7AEB7AF364BD362DEB85346FB50D7F97CE8D4753 
{
	// System.Int32 OneSignalExampleBehaviour/<RemoveTag>d__41::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder OneSignalExampleBehaviour/<RemoveTag>d__41::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// OneSignalExampleBehaviour OneSignalExampleBehaviour/<RemoveTag>d__41::<>4__this
	OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> OneSignalExampleBehaviour/<RemoveTag>d__41::<>u__1
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 ___U3CU3Eu__1_3;
};

// OneSignalExampleBehaviour/<SendPushToSelf>d__34
struct U3CSendPushToSelfU3Ed__34_t20E220D79859C5CAD3FBA52DC7486F7037F0690A 
{
	// System.Int32 OneSignalExampleBehaviour/<SendPushToSelf>d__34::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder OneSignalExampleBehaviour/<SendPushToSelf>d__34::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// OneSignalExampleBehaviour OneSignalExampleBehaviour/<SendPushToSelf>d__34::<>4__this
	OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>> OneSignalExampleBehaviour/<SendPushToSelf>d__34::<>u__1
	TaskAwaiter_1_t939447628654858A359A8B2688412DA89ED1880E ___U3CU3Eu__1_3;
};

// OneSignalExampleBehaviour/<SetEmail>d__29
struct U3CSetEmailU3Ed__29_t4CF9DA5972E391F6DE8D065E93F5C4D4E3C40481 
{
	// System.Int32 OneSignalExampleBehaviour/<SetEmail>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder OneSignalExampleBehaviour/<SetEmail>d__29::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// OneSignalExampleBehaviour OneSignalExampleBehaviour/<SetEmail>d__29::<>4__this
	OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> OneSignalExampleBehaviour/<SetEmail>d__29::<>u__1
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 ___U3CU3Eu__1_3;
};

// OneSignalExampleBehaviour/<SetExternalId>d__30
struct U3CSetExternalIdU3Ed__30_t2718EEF57C253F31438936208C113AAE7CF2C151 
{
	// System.Int32 OneSignalExampleBehaviour/<SetExternalId>d__30::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder OneSignalExampleBehaviour/<SetExternalId>d__30::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// OneSignalExampleBehaviour OneSignalExampleBehaviour/<SetExternalId>d__30::<>4__this
	OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> OneSignalExampleBehaviour/<SetExternalId>d__30::<>u__1
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 ___U3CU3Eu__1_3;
};

// OneSignalExampleBehaviour/<SetOutcome>d__43
struct U3CSetOutcomeU3Ed__43_t6C5CDBF58F1BFC7D10523D2A10BE774563D35862 
{
	// System.Int32 OneSignalExampleBehaviour/<SetOutcome>d__43::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder OneSignalExampleBehaviour/<SetOutcome>d__43::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// OneSignalExampleBehaviour OneSignalExampleBehaviour/<SetOutcome>d__43::<>4__this
	OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> OneSignalExampleBehaviour/<SetOutcome>d__43::<>u__1
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 ___U3CU3Eu__1_3;
};

// OneSignalExampleBehaviour/<SetOutcomeWithValue>d__45
struct U3CSetOutcomeWithValueU3Ed__45_t3972DDE673C352FC834CD3A9081C19845D97BF13 
{
	// System.Int32 OneSignalExampleBehaviour/<SetOutcomeWithValue>d__45::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder OneSignalExampleBehaviour/<SetOutcomeWithValue>d__45::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// OneSignalExampleBehaviour OneSignalExampleBehaviour/<SetOutcomeWithValue>d__45::<>4__this
	OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> OneSignalExampleBehaviour/<SetOutcomeWithValue>d__45::<>u__1
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 ___U3CU3Eu__1_3;
};

// OneSignalExampleBehaviour/<SetSMSNumber>d__31
struct U3CSetSMSNumberU3Ed__31_tA65B67E5A444829D4BF816884D4935C22CA6D816 
{
	// System.Int32 OneSignalExampleBehaviour/<SetSMSNumber>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder OneSignalExampleBehaviour/<SetSMSNumber>d__31::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// OneSignalExampleBehaviour OneSignalExampleBehaviour/<SetSMSNumber>d__31::<>4__this
	OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> OneSignalExampleBehaviour/<SetSMSNumber>d__31::<>u__1
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 ___U3CU3Eu__1_3;
};

// OneSignalExampleBehaviour/<SetTag>d__40
struct U3CSetTagU3Ed__40_tAF8DC18D195FBDD30302D1E8800CB56488E5CA9E 
{
	// System.Int32 OneSignalExampleBehaviour/<SetTag>d__40::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder OneSignalExampleBehaviour/<SetTag>d__40::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// OneSignalExampleBehaviour OneSignalExampleBehaviour/<SetTag>d__40::<>4__this
	OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> OneSignalExampleBehaviour/<SetTag>d__40::<>u__1
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 ___U3CU3Eu__1_3;
};

// OneSignalExampleBehaviour/<SetUniqueOutcome>d__44
struct U3CSetUniqueOutcomeU3Ed__44_t2A820F14D89710D912DEA5E4824712CB32C612A5 
{
	// System.Int32 OneSignalExampleBehaviour/<SetUniqueOutcome>d__44::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder OneSignalExampleBehaviour/<SetUniqueOutcome>d__44::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// OneSignalExampleBehaviour OneSignalExampleBehaviour/<SetUniqueOutcome>d__44::<>4__this
	OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> OneSignalExampleBehaviour/<SetUniqueOutcome>d__44::<>u__1
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 ___U3CU3Eu__1_3;
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// OneSignalSDK.OneSignal/StateChangeDelegate`1<OneSignalSDK.EmailSubscriptionState>
struct StateChangeDelegate_1_tF46780AEE1268A63DA4F780C1535FF89CE8F431D  : public MulticastDelegate_t
{
};

// OneSignalSDK.OneSignal/StateChangeDelegate`1<OneSignalSDK.NotificationPermission>
struct StateChangeDelegate_1_tEC91B801172520D1E5AE68DEA6F822EB439F8E40  : public MulticastDelegate_t
{
};

// OneSignalSDK.OneSignal/StateChangeDelegate`1<OneSignalSDK.PushSubscriptionState>
struct StateChangeDelegate_1_t758AC0332C886E33E5F088A18D25BD4EC550FF08  : public MulticastDelegate_t
{
};

// OneSignalSDK.OneSignal/StateChangeDelegate`1<OneSignalSDK.SMSSubscriptionState>
struct StateChangeDelegate_1_t6DB9D252107863BC51FC1376ABD654FF97083A9E  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// OneSignalSDK.OneSignal/InAppMessageActionDelegate
struct InAppMessageActionDelegate_t05B28B99EFCF8F671A51AD30444F5A734F68D7B8  : public MulticastDelegate_t
{
};

// OneSignalSDK.OneSignal/InAppMessageLifecycleDelegate
struct InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF  : public MulticastDelegate_t
{
};

// OneSignalSDK.OneSignal/NotificationActionDelegate
struct NotificationActionDelegate_t0506036A22EDF3F41306BDBE188F5B4F7F29596D  : public MulticastDelegate_t
{
};

// OneSignalSDK.OneSignal/NotificationWillShowDelegate
struct NotificationWillShowDelegate_tEBF8F8CF9A7B25750FBBFC55CB8FDD55F4379758  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// OneSignalExampleBehaviour
struct OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String OneSignalExampleBehaviour::email
	String_t* ___email_4;
	// System.String OneSignalExampleBehaviour::externalId
	String_t* ___externalId_5;
	// System.String OneSignalExampleBehaviour::phoneNumber
	String_t* ___phoneNumber_6;
	// System.String OneSignalExampleBehaviour::appId
	String_t* ___appId_7;
	// System.Boolean OneSignalExampleBehaviour::requiresUserPrivacyConsent
	bool ___requiresUserPrivacyConsent_8;
	// System.Boolean OneSignalExampleBehaviour::launchURLsInApp
	bool ___launchURLsInApp_9;
	// System.String OneSignalExampleBehaviour::tagKey
	String_t* ___tagKey_10;
	// System.String OneSignalExampleBehaviour::tagValue
	String_t* ___tagValue_11;
	// System.String OneSignalExampleBehaviour::triggerKey
	String_t* ___triggerKey_12;
	// System.String OneSignalExampleBehaviour::triggerValue
	String_t* ___triggerValue_13;
	// System.String OneSignalExampleBehaviour::outcomeKey
	String_t* ___outcomeKey_14;
	// System.Single OneSignalExampleBehaviour::outcomeValue
	float ___outcomeValue_15;
	// UnityEngine.UI.Text OneSignalExampleBehaviour::console
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___console_16;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
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
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


// System.Void OneSignalSDK.OneSignal/StateChangeDelegate`1<System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateChangeDelegate_1__ctor_m0D16F87E0FCE181C2F2AA5F16AE6C8A1D725B525_gshared (StateChangeDelegate_1_t4B52785BE7AD771FA98F133FBF8F268444BEBA31* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void OneSignalSDK.OneSignal/StateChangeDelegate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateChangeDelegate_1__ctor_m2A11B1ED5C3F4BFD0D400C918866F3AC9FCD067D_gshared (StateChangeDelegate_1_tB747380EC1FFB1A9D8C6C3A2B54533448DEB7C19* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T OneSignalExampleBehaviour::_nextEnum<System.Int32Enum>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OneSignalExampleBehaviour__nextEnum_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mFDA85D0A9D512C167155A360813C7F7644670B10_gshared (int32_t ___src0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<OneSignalExampleBehaviour/<SetEmail>d__29>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CSetEmailU3Ed__29_t4CF9DA5972E391F6DE8D065E93F5C4D4E3C40481_mE6DA5D9AA45A531ABD30B6EF6C7E48BD7DCB93B3_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CSetEmailU3Ed__29_t4CF9DA5972E391F6DE8D065E93F5C4D4E3C40481* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<OneSignalExampleBehaviour/<SetExternalId>d__30>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CSetExternalIdU3Ed__30_t2718EEF57C253F31438936208C113AAE7CF2C151_m9571B3EDF6F70A3DAA99BE8F0CC6B354DD50B055_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CSetExternalIdU3Ed__30_t2718EEF57C253F31438936208C113AAE7CF2C151* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<OneSignalExampleBehaviour/<SetSMSNumber>d__31>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CSetSMSNumberU3Ed__31_tA65B67E5A444829D4BF816884D4935C22CA6D816_mB98989A10461C2E8213FF3004D5EC5FBFB30EE5C_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CSetSMSNumberU3Ed__31_tA65B67E5A444829D4BF816884D4935C22CA6D816* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<OneSignalExampleBehaviour/<PromptForPush>d__32>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CPromptForPushU3Ed__32_tD96C472B2DE51806095A83998F06B4FB970879BE_mAC7FE7163FC8339C47D490F01C048AD4863D7FB1_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CPromptForPushU3Ed__32_tD96C472B2DE51806095A83998F06B4FB970879BE* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<OneSignalExampleBehaviour/<SendPushToSelf>d__34>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CSendPushToSelfU3Ed__34_t20E220D79859C5CAD3FBA52DC7486F7037F0690A_m10B69ADAD75752AF021356F2B6FE6594811D409D_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CSendPushToSelfU3Ed__34_t20E220D79859C5CAD3FBA52DC7486F7037F0690A* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<OneSignalExampleBehaviour/<SetTag>d__40>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CSetTagU3Ed__40_tAF8DC18D195FBDD30302D1E8800CB56488E5CA9E_m11DBFE60B3D9EBF9EFEFC30E47340DC9FABFC2D7_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CSetTagU3Ed__40_tAF8DC18D195FBDD30302D1E8800CB56488E5CA9E* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<OneSignalExampleBehaviour/<RemoveTag>d__41>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CRemoveTagU3Ed__41_t7AEB7AF364BD362DEB85346FB50D7F97CE8D4753_mBD88CE89C1F92ED65444794E24B8A0F6E0DF6B4A_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CRemoveTagU3Ed__41_t7AEB7AF364BD362DEB85346FB50D7F97CE8D4753* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<OneSignalExampleBehaviour/<GetTags>d__42>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CGetTagsU3Ed__42_tFF697C520F01E869DF820DF93D382B3CADACB17D_mF458F6B5ADC75EAD89263E12A8BA9AB5457BDA69_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CGetTagsU3Ed__42_tFF697C520F01E869DF820DF93D382B3CADACB17D* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<OneSignalExampleBehaviour/<SetOutcome>d__43>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CSetOutcomeU3Ed__43_t6C5CDBF58F1BFC7D10523D2A10BE774563D35862_m2B24396082405351C119B1A85085F9B565011398_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CSetOutcomeU3Ed__43_t6C5CDBF58F1BFC7D10523D2A10BE774563D35862* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<OneSignalExampleBehaviour/<SetUniqueOutcome>d__44>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CSetUniqueOutcomeU3Ed__44_t2A820F14D89710D912DEA5E4824712CB32C612A5_mDDCD8516A595E788364A7B70E67CD4DC8318387B_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CSetUniqueOutcomeU3Ed__44_t2A820F14D89710D912DEA5E4824712CB32C612A5* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<OneSignalExampleBehaviour/<SetOutcomeWithValue>d__45>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CSetOutcomeWithValueU3Ed__45_t3972DDE673C352FC834CD3A9081C19845D97BF13_m50973F5AFEDFB1330E9DE8D07564476155049CDA_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CSetOutcomeWithValueU3Ed__45_t3972DDE673C352FC834CD3A9081C19845D97BF13* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Boolean>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_gshared (Task_1_t824317F4B958F7512E8F7300511752937A6C6043* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_gshared (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,OneSignalExampleBehaviour/<SetEmail>d__29>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetEmailU3Ed__29_t4CF9DA5972E391F6DE8D065E93F5C4D4E3C40481_m15E20F3826DE0E3EB935F353533782074D0933C6_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, U3CSetEmailU3Ed__29_t4CF9DA5972E391F6DE8D065E93F5C4D4E3C40481* ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_gshared (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,OneSignalExampleBehaviour/<SetExternalId>d__30>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetExternalIdU3Ed__30_t2718EEF57C253F31438936208C113AAE7CF2C151_mDCB4536C0C3F81A2649DE4B4D8586F7AC23E0759_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, U3CSetExternalIdU3Ed__30_t2718EEF57C253F31438936208C113AAE7CF2C151* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,OneSignalExampleBehaviour/<SetSMSNumber>d__31>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetSMSNumberU3Ed__31_tA65B67E5A444829D4BF816884D4935C22CA6D816_m9AAC63C4C4A76376433358F24930780786B4E5FA_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, U3CSetSMSNumberU3Ed__31_tA65B67E5A444829D4BF816884D4935C22CA6D816* ___stateMachine1, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Int32Enum>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_tFF3BDC572A8EAF8EDD0863190DB8D7378DBD2900 Task_1_GetAwaiter_mBC5D4AD566D449CFA4CDD164DD4A28E81BF3E9A8_gshared (Task_1_t8DED34447688BFCF5112B0D05D5A80CED94E4BFB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32Enum>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_m23B9774CF68B8D4751B3FA2D7C0A10DFDA86BC34_gshared (TaskAwaiter_1_tFF3BDC572A8EAF8EDD0863190DB8D7378DBD2900* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32Enum>,OneSignalExampleBehaviour/<PromptForPush>d__32>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFF3BDC572A8EAF8EDD0863190DB8D7378DBD2900_TisU3CPromptForPushU3Ed__32_tD96C472B2DE51806095A83998F06B4FB970879BE_m17259E3B1A8E8627CA9D4A51143B6E93CC3DA987_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_tFF3BDC572A8EAF8EDD0863190DB8D7378DBD2900* ___awaiter0, U3CPromptForPushU3Ed__32_tD96C472B2DE51806095A83998F06B4FB970879BE* ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32Enum>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskAwaiter_1_GetResult_m7BE13DEB70EC3AEE02DD30BBC8F25298BD25021F_gshared (TaskAwaiter_1_tFF3BDC572A8EAF8EDD0863190DB8D7378DBD2900* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,OneSignalExampleBehaviour/<SendPushToSelf>d__34>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSendPushToSelfU3Ed__34_t20E220D79859C5CAD3FBA52DC7486F7037F0690A_m05B65602C583D089AC2C3770604B25239B224433_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CSendPushToSelfU3Ed__34_t20E220D79859C5CAD3FBA52DC7486F7037F0690A* ___stateMachine1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,OneSignalExampleBehaviour/<SetTag>d__40>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetTagU3Ed__40_tAF8DC18D195FBDD30302D1E8800CB56488E5CA9E_m07F657EA210318028CCD6E0A86186D81FA14A2C5_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, U3CSetTagU3Ed__40_tAF8DC18D195FBDD30302D1E8800CB56488E5CA9E* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,OneSignalExampleBehaviour/<RemoveTag>d__41>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CRemoveTagU3Ed__41_t7AEB7AF364BD362DEB85346FB50D7F97CE8D4753_m8CC700D2719336AFD70ECB58DAF517491A226E22_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, U3CRemoveTagU3Ed__41_t7AEB7AF364BD362DEB85346FB50D7F97CE8D4753* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,OneSignalExampleBehaviour/<GetTags>d__42>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetTagsU3Ed__42_tFF697C520F01E869DF820DF93D382B3CADACB17D_m557920B4C05D3046E998CAF79517C9135DFC05A2_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___awaiter0, U3CGetTagsU3Ed__42_tFF697C520F01E869DF820DF93D382B3CADACB17D* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,OneSignalExampleBehaviour/<SetOutcome>d__43>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetOutcomeU3Ed__43_t6C5CDBF58F1BFC7D10523D2A10BE774563D35862_m1182257A24C241C1F39CE2AA761BAED13DC06C4A_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, U3CSetOutcomeU3Ed__43_t6C5CDBF58F1BFC7D10523D2A10BE774563D35862* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,OneSignalExampleBehaviour/<SetUniqueOutcome>d__44>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetUniqueOutcomeU3Ed__44_t2A820F14D89710D912DEA5E4824712CB32C612A5_m3C94E5A60C616C64B2898F659D35E1DE171A2CE9_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, U3CSetUniqueOutcomeU3Ed__44_t2A820F14D89710D912DEA5E4824712CB32C612A5* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,OneSignalExampleBehaviour/<SetOutcomeWithValue>d__45>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetOutcomeWithValueU3Ed__45_t3972DDE673C352FC834CD3A9081C19845D97BF13_mDE102329A71C71E2904D24D3D1CC10889D0D62D5_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, U3CSetOutcomeWithValueU3Ed__45_t3972DDE673C352FC834CD3A9081C19845D97BF13* ___stateMachine1, const RuntimeMethod* method) ;

// OneSignalSDK.OneSignal OneSignalSDK.OneSignal::get_Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166 (const RuntimeMethod* method) ;
// System.Void OneSignalSDK.OneSignal/NotificationActionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationActionDelegate__ctor_m408F5A9D3FDB19D0D9C832ACA6218A31E01D5E3C (NotificationActionDelegate_t0506036A22EDF3F41306BDBE188F5B4F7F29596D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void OneSignalSDK.OneSignal/NotificationWillShowDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationWillShowDelegate__ctor_m8DEE6C41B02776A21A042F416981705000627B68 (NotificationWillShowDelegate_tEBF8F8CF9A7B25750FBBFC55CB8FDD55F4379758* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void OneSignalSDK.OneSignal/InAppMessageLifecycleDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppMessageLifecycleDelegate__ctor_mE43EDDA4DEB69661B8A715F0C9B3DB86EFAC58EF (InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void OneSignalSDK.OneSignal/InAppMessageActionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InAppMessageActionDelegate__ctor_m5A77E086CC360AD6369972267DCBEB50CE147E84 (InAppMessageActionDelegate_t05B28B99EFCF8F671A51AD30444F5A734F68D7B8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void OneSignalSDK.OneSignal/StateChangeDelegate`1<OneSignalSDK.NotificationPermission>::.ctor(System.Object,System.IntPtr)
inline void StateChangeDelegate_1__ctor_mA2F1DE6F1C7B8CCBA7EF96C7E5C83FB5D33ED8D9 (StateChangeDelegate_1_tEC91B801172520D1E5AE68DEA6F822EB439F8E40* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (StateChangeDelegate_1_tEC91B801172520D1E5AE68DEA6F822EB439F8E40*, RuntimeObject*, intptr_t, const RuntimeMethod*))StateChangeDelegate_1__ctor_m0D16F87E0FCE181C2F2AA5F16AE6C8A1D725B525_gshared)(__this, ___object0, ___method1, method);
}
// System.Void OneSignalSDK.OneSignal/StateChangeDelegate`1<OneSignalSDK.PushSubscriptionState>::.ctor(System.Object,System.IntPtr)
inline void StateChangeDelegate_1__ctor_mF22399AECB75A1A6BB3C8CC4AB6931B05133FB03 (StateChangeDelegate_1_t758AC0332C886E33E5F088A18D25BD4EC550FF08* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (StateChangeDelegate_1_t758AC0332C886E33E5F088A18D25BD4EC550FF08*, RuntimeObject*, intptr_t, const RuntimeMethod*))StateChangeDelegate_1__ctor_m2A11B1ED5C3F4BFD0D400C918866F3AC9FCD067D_gshared)(__this, ___object0, ___method1, method);
}
// System.Void OneSignalSDK.OneSignal/StateChangeDelegate`1<OneSignalSDK.EmailSubscriptionState>::.ctor(System.Object,System.IntPtr)
inline void StateChangeDelegate_1__ctor_m0211F0D00FC60A2D56CA0C541C3ACE2C731C7FE7 (StateChangeDelegate_1_tF46780AEE1268A63DA4F780C1535FF89CE8F431D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (StateChangeDelegate_1_tF46780AEE1268A63DA4F780C1535FF89CE8F431D*, RuntimeObject*, intptr_t, const RuntimeMethod*))StateChangeDelegate_1__ctor_m2A11B1ED5C3F4BFD0D400C918866F3AC9FCD067D_gshared)(__this, ___object0, ___method1, method);
}
// System.Void OneSignalSDK.OneSignal/StateChangeDelegate`1<OneSignalSDK.SMSSubscriptionState>::.ctor(System.Object,System.IntPtr)
inline void StateChangeDelegate_1__ctor_m084F11F458D21A6E4648FD14BAACDE94C8DF7916 (StateChangeDelegate_1_t6DB9D252107863BC51FC1376ABD654FF97083A9E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (StateChangeDelegate_1_t6DB9D252107863BC51FC1376ABD654FF97083A9E*, RuntimeObject*, intptr_t, const RuntimeMethod*))StateChangeDelegate_1__ctor_m2A11B1ED5C3F4BFD0D400C918866F3AC9FCD067D_gshared)(__this, ___object0, ___method1, method);
}
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_mD0FB24DC5A8621A2473FC208E9B15AF43944EBCD (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void OneSignalExampleBehaviour::_log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String OneSignalSDK.Json::Serialize(System.Object,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Json_Serialize_mA6BDF705EEE0769F09C6A3F8D5712884541A2B96 (RuntimeObject* ___obj0, bool ___humanReadable1, int32_t ___indentSpaces2, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void OneSignalExampleBehaviour::_error(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour__error_mBB5177866C8A19120933543A7AC8F1CFD7E8C76F (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, RuntimeObject* ___message0, const RuntimeMethod* method) ;
// T OneSignalExampleBehaviour::_nextEnum<OneSignalSDK.LogLevel>(T)
inline int32_t OneSignalExampleBehaviour__nextEnum_TisLogLevel_t4A370EAA8CFB375359332FEC8B714A693BA14675_mA11D237EDB7B60409B136A1CC296CBAFB35965D5 (int32_t ___src0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, const RuntimeMethod*))OneSignalExampleBehaviour__nextEnum_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mFDA85D0A9D512C167155A360813C7F7644670B10_gshared)(___src0, method);
}
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<OneSignalExampleBehaviour/<SetEmail>d__29>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CSetEmailU3Ed__29_t4CF9DA5972E391F6DE8D065E93F5C4D4E3C40481_mE6DA5D9AA45A531ABD30B6EF6C7E48BD7DCB93B3 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CSetEmailU3Ed__29_t4CF9DA5972E391F6DE8D065E93F5C4D4E3C40481* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CSetEmailU3Ed__29_t4CF9DA5972E391F6DE8D065E93F5C4D4E3C40481*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CSetEmailU3Ed__29_t4CF9DA5972E391F6DE8D065E93F5C4D4E3C40481_mE6DA5D9AA45A531ABD30B6EF6C7E48BD7DCB93B3_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<OneSignalExampleBehaviour/<SetExternalId>d__30>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CSetExternalIdU3Ed__30_t2718EEF57C253F31438936208C113AAE7CF2C151_m9571B3EDF6F70A3DAA99BE8F0CC6B354DD50B055 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CSetExternalIdU3Ed__30_t2718EEF57C253F31438936208C113AAE7CF2C151* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CSetExternalIdU3Ed__30_t2718EEF57C253F31438936208C113AAE7CF2C151*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CSetExternalIdU3Ed__30_t2718EEF57C253F31438936208C113AAE7CF2C151_m9571B3EDF6F70A3DAA99BE8F0CC6B354DD50B055_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<OneSignalExampleBehaviour/<SetSMSNumber>d__31>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CSetSMSNumberU3Ed__31_tA65B67E5A444829D4BF816884D4935C22CA6D816_mB98989A10461C2E8213FF3004D5EC5FBFB30EE5C (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CSetSMSNumberU3Ed__31_tA65B67E5A444829D4BF816884D4935C22CA6D816* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CSetSMSNumberU3Ed__31_tA65B67E5A444829D4BF816884D4935C22CA6D816*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CSetSMSNumberU3Ed__31_tA65B67E5A444829D4BF816884D4935C22CA6D816_mB98989A10461C2E8213FF3004D5EC5FBFB30EE5C_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<OneSignalExampleBehaviour/<PromptForPush>d__32>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CPromptForPushU3Ed__32_tD96C472B2DE51806095A83998F06B4FB970879BE_mAC7FE7163FC8339C47D490F01C048AD4863D7FB1 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CPromptForPushU3Ed__32_tD96C472B2DE51806095A83998F06B4FB970879BE* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CPromptForPushU3Ed__32_tD96C472B2DE51806095A83998F06B4FB970879BE*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CPromptForPushU3Ed__32_tD96C472B2DE51806095A83998F06B4FB970879BE_mAC7FE7163FC8339C47D490F01C048AD4863D7FB1_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<OneSignalExampleBehaviour/<SendPushToSelf>d__34>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CSendPushToSelfU3Ed__34_t20E220D79859C5CAD3FBA52DC7486F7037F0690A_m10B69ADAD75752AF021356F2B6FE6594811D409D (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CSendPushToSelfU3Ed__34_t20E220D79859C5CAD3FBA52DC7486F7037F0690A* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CSendPushToSelfU3Ed__34_t20E220D79859C5CAD3FBA52DC7486F7037F0690A*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CSendPushToSelfU3Ed__34_t20E220D79859C5CAD3FBA52DC7486F7037F0690A_m10B69ADAD75752AF021356F2B6FE6594811D409D_gshared)(__this, ___stateMachine0, method);
}
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<OneSignalExampleBehaviour/<SetTag>d__40>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CSetTagU3Ed__40_tAF8DC18D195FBDD30302D1E8800CB56488E5CA9E_m11DBFE60B3D9EBF9EFEFC30E47340DC9FABFC2D7 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CSetTagU3Ed__40_tAF8DC18D195FBDD30302D1E8800CB56488E5CA9E* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CSetTagU3Ed__40_tAF8DC18D195FBDD30302D1E8800CB56488E5CA9E*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CSetTagU3Ed__40_tAF8DC18D195FBDD30302D1E8800CB56488E5CA9E_m11DBFE60B3D9EBF9EFEFC30E47340DC9FABFC2D7_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<OneSignalExampleBehaviour/<RemoveTag>d__41>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CRemoveTagU3Ed__41_t7AEB7AF364BD362DEB85346FB50D7F97CE8D4753_mBD88CE89C1F92ED65444794E24B8A0F6E0DF6B4A (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CRemoveTagU3Ed__41_t7AEB7AF364BD362DEB85346FB50D7F97CE8D4753* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CRemoveTagU3Ed__41_t7AEB7AF364BD362DEB85346FB50D7F97CE8D4753*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CRemoveTagU3Ed__41_t7AEB7AF364BD362DEB85346FB50D7F97CE8D4753_mBD88CE89C1F92ED65444794E24B8A0F6E0DF6B4A_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<OneSignalExampleBehaviour/<GetTags>d__42>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CGetTagsU3Ed__42_tFF697C520F01E869DF820DF93D382B3CADACB17D_mF458F6B5ADC75EAD89263E12A8BA9AB5457BDA69 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CGetTagsU3Ed__42_tFF697C520F01E869DF820DF93D382B3CADACB17D* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CGetTagsU3Ed__42_tFF697C520F01E869DF820DF93D382B3CADACB17D*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CGetTagsU3Ed__42_tFF697C520F01E869DF820DF93D382B3CADACB17D_mF458F6B5ADC75EAD89263E12A8BA9AB5457BDA69_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<OneSignalExampleBehaviour/<SetOutcome>d__43>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CSetOutcomeU3Ed__43_t6C5CDBF58F1BFC7D10523D2A10BE774563D35862_m2B24396082405351C119B1A85085F9B565011398 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CSetOutcomeU3Ed__43_t6C5CDBF58F1BFC7D10523D2A10BE774563D35862* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CSetOutcomeU3Ed__43_t6C5CDBF58F1BFC7D10523D2A10BE774563D35862*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CSetOutcomeU3Ed__43_t6C5CDBF58F1BFC7D10523D2A10BE774563D35862_m2B24396082405351C119B1A85085F9B565011398_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<OneSignalExampleBehaviour/<SetUniqueOutcome>d__44>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CSetUniqueOutcomeU3Ed__44_t2A820F14D89710D912DEA5E4824712CB32C612A5_mDDCD8516A595E788364A7B70E67CD4DC8318387B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CSetUniqueOutcomeU3Ed__44_t2A820F14D89710D912DEA5E4824712CB32C612A5* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CSetUniqueOutcomeU3Ed__44_t2A820F14D89710D912DEA5E4824712CB32C612A5*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CSetUniqueOutcomeU3Ed__44_t2A820F14D89710D912DEA5E4824712CB32C612A5_mDDCD8516A595E788364A7B70E67CD4DC8318387B_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<OneSignalExampleBehaviour/<SetOutcomeWithValue>d__45>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CSetOutcomeWithValueU3Ed__45_t3972DDE673C352FC834CD3A9081C19845D97BF13_m50973F5AFEDFB1330E9DE8D07564476155049CDA (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CSetOutcomeWithValueU3Ed__45_t3972DDE673C352FC834CD3A9081C19845D97BF13* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CSetOutcomeWithValueU3Ed__45_t3972DDE673C352FC834CD3A9081C19845D97BF13*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CSetOutcomeWithValueU3Ed__45_t3972DDE673C352FC834CD3A9081C19845D97BF13_m50973F5AFEDFB1330E9DE8D07564476155049CDA_gshared)(__this, ___stateMachine0, method);
}
// System.Single System.Convert::ToSingle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Convert_ToSingle_m70256FFD080CBD85CC41D705DFCBC77EC433D4FD (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4 (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void OneSignalSDK.SDKDebug::add_LogIntercept(System.Action`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDKDebug_add_LogIntercept_mC8383950F821E903035ED0CA387D2E73405110EF (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___value0, const RuntimeMethod* method) ;
// System.Void OneSignalSDK.SDKDebug::add_WarnIntercept(System.Action`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDKDebug_add_WarnIntercept_m1443CD0CE2AB0A8853E77AE7B9644D5D94A88BDB (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___value0, const RuntimeMethod* method) ;
// System.Void OneSignalSDK.SDKDebug::add_ErrorIntercept(System.Action`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDKDebug_add_ErrorIntercept_mD47A358068E0EB7F42B5A34DBE9E2F63A1A75535 (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Boolean>::GetAwaiter()
inline TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935 (Task_1_t824317F4B958F7512E8F7300511752937A6C6043* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 (*) (Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, const RuntimeMethod*))Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9 (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,OneSignalExampleBehaviour/<SetEmail>d__29>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetEmailU3Ed__29_t4CF9DA5972E391F6DE8D065E93F5C4D4E3C40481_m15E20F3826DE0E3EB935F353533782074D0933C6 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, U3CSetEmailU3Ed__29_t4CF9DA5972E391F6DE8D065E93F5C4D4E3C40481* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, U3CSetEmailU3Ed__29_t4CF9DA5972E391F6DE8D065E93F5C4D4E3C40481*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetEmailU3Ed__29_t4CF9DA5972E391F6DE8D065E93F5C4D4E3C40481_m15E20F3826DE0E3EB935F353533782074D0933C6_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::GetResult()
inline bool TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, const RuntimeMethod* method) ;
// System.Void OneSignalExampleBehaviour/<SetEmail>d__29::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetEmailU3Ed__29_MoveNext_mBED3C5EDD38FC4F42B209953EC82DC754553445B (U3CSetEmailU3Ed__29_t4CF9DA5972E391F6DE8D065E93F5C4D4E3C40481* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void OneSignalExampleBehaviour/<SetEmail>d__29::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetEmailU3Ed__29_SetStateMachine_m3D8EC364422C275061A1EC4A6D1ED316E3774178 (U3CSetEmailU3Ed__29_t4CF9DA5972E391F6DE8D065E93F5C4D4E3C40481* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,OneSignalExampleBehaviour/<SetExternalId>d__30>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetExternalIdU3Ed__30_t2718EEF57C253F31438936208C113AAE7CF2C151_mDCB4536C0C3F81A2649DE4B4D8586F7AC23E0759 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, U3CSetExternalIdU3Ed__30_t2718EEF57C253F31438936208C113AAE7CF2C151* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, U3CSetExternalIdU3Ed__30_t2718EEF57C253F31438936208C113AAE7CF2C151*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetExternalIdU3Ed__30_t2718EEF57C253F31438936208C113AAE7CF2C151_mDCB4536C0C3F81A2649DE4B4D8586F7AC23E0759_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void OneSignalExampleBehaviour/<SetExternalId>d__30::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetExternalIdU3Ed__30_MoveNext_m89FF1891E646CD647541CBB8B2C26D148C99F135 (U3CSetExternalIdU3Ed__30_t2718EEF57C253F31438936208C113AAE7CF2C151* __this, const RuntimeMethod* method) ;
// System.Void OneSignalExampleBehaviour/<SetExternalId>d__30::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetExternalIdU3Ed__30_SetStateMachine_m3CCAF6C00735C968C694B2C531A741E76469A9EA (U3CSetExternalIdU3Ed__30_t2718EEF57C253F31438936208C113AAE7CF2C151* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,OneSignalExampleBehaviour/<SetSMSNumber>d__31>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetSMSNumberU3Ed__31_tA65B67E5A444829D4BF816884D4935C22CA6D816_m9AAC63C4C4A76376433358F24930780786B4E5FA (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, U3CSetSMSNumberU3Ed__31_tA65B67E5A444829D4BF816884D4935C22CA6D816* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, U3CSetSMSNumberU3Ed__31_tA65B67E5A444829D4BF816884D4935C22CA6D816*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetSMSNumberU3Ed__31_tA65B67E5A444829D4BF816884D4935C22CA6D816_m9AAC63C4C4A76376433358F24930780786B4E5FA_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void OneSignalExampleBehaviour/<SetSMSNumber>d__31::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetSMSNumberU3Ed__31_MoveNext_m2E837F2FAFF380189C836C593E5CFB5263D188C7 (U3CSetSMSNumberU3Ed__31_tA65B67E5A444829D4BF816884D4935C22CA6D816* __this, const RuntimeMethod* method) ;
// System.Void OneSignalExampleBehaviour/<SetSMSNumber>d__31::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetSMSNumberU3Ed__31_SetStateMachine_mB7DAEB3A97238AD45D4D9CF4B5C552461717AAF8 (U3CSetSMSNumberU3Ed__31_tA65B67E5A444829D4BF816884D4935C22CA6D816* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<OneSignalSDK.NotificationPermission>::GetAwaiter()
inline TaskAwaiter_1_tBA7C35931A46ACA0D7DAFDD9ADBD6EE93BE13E89 Task_1_GetAwaiter_m99BB27A072DB7B04720F4CB5B07C8CC281E9E46E (Task_1_tBF748A8FE17A296106F783D16AB4C0F3FE904C1A* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tBA7C35931A46ACA0D7DAFDD9ADBD6EE93BE13E89 (*) (Task_1_tBF748A8FE17A296106F783D16AB4C0F3FE904C1A*, const RuntimeMethod*))Task_1_GetAwaiter_mBC5D4AD566D449CFA4CDD164DD4A28E81BF3E9A8_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<OneSignalSDK.NotificationPermission>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m33D07F1A430C77959059ECF761C0549E46E2082C (TaskAwaiter_1_tBA7C35931A46ACA0D7DAFDD9ADBD6EE93BE13E89* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tBA7C35931A46ACA0D7DAFDD9ADBD6EE93BE13E89*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_m23B9774CF68B8D4751B3FA2D7C0A10DFDA86BC34_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<OneSignalSDK.NotificationPermission>,OneSignalExampleBehaviour/<PromptForPush>d__32>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tBA7C35931A46ACA0D7DAFDD9ADBD6EE93BE13E89_TisU3CPromptForPushU3Ed__32_tD96C472B2DE51806095A83998F06B4FB970879BE_m236D1FFD167D74B5CD93B4EF665036160037D3AA (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_tBA7C35931A46ACA0D7DAFDD9ADBD6EE93BE13E89* ___awaiter0, U3CPromptForPushU3Ed__32_tD96C472B2DE51806095A83998F06B4FB970879BE* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_tBA7C35931A46ACA0D7DAFDD9ADBD6EE93BE13E89*, U3CPromptForPushU3Ed__32_tD96C472B2DE51806095A83998F06B4FB970879BE*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tFF3BDC572A8EAF8EDD0863190DB8D7378DBD2900_TisU3CPromptForPushU3Ed__32_tD96C472B2DE51806095A83998F06B4FB970879BE_m17259E3B1A8E8627CA9D4A51143B6E93CC3DA987_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<OneSignalSDK.NotificationPermission>::GetResult()
inline int32_t TaskAwaiter_1_GetResult_m792FD4AB6970F6E178E87D95DCFC4C628BE398FA (TaskAwaiter_1_tBA7C35931A46ACA0D7DAFDD9ADBD6EE93BE13E89* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskAwaiter_1_tBA7C35931A46ACA0D7DAFDD9ADBD6EE93BE13E89*, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7BE13DEB70EC3AEE02DD30BBC8F25298BD25021F_gshared)(__this, method);
}
// System.Void OneSignalExampleBehaviour/<PromptForPush>d__32::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPromptForPushU3Ed__32_MoveNext_m6713B4499DE18B08864F8BD22B4B0493530E24DB (U3CPromptForPushU3Ed__32_tD96C472B2DE51806095A83998F06B4FB970879BE* __this, const RuntimeMethod* method) ;
// System.Void OneSignalExampleBehaviour/<PromptForPush>d__32::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPromptForPushU3Ed__32_SetStateMachine_mEE67C79C4F1C9151067A48F72C3BDCF2FA37D7C6 (U3CPromptForPushU3Ed__32_tD96C472B2DE51806095A83998F06B4FB970879BE* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0 (const RuntimeMethod* method) ;
// System.DateTime System.DateTime::ToUniversalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_ToUniversalTime_m52CA1EAD0BE0A357BCACC38747ECA4A8810155A9 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::AddSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, double ___value0, const RuntimeMethod* method) ;
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>::GetAwaiter()
inline TaskAwaiter_1_t939447628654858A359A8B2688412DA89ED1880E Task_1_GetAwaiter_m98B37C463C293DC8A9D3B154B5450F133FF38C02 (Task_1_tE10B49C177D26DA80EFCDC3EC380E30315F5B322* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t939447628654858A359A8B2688412DA89ED1880E (*) (Task_1_tE10B49C177D26DA80EFCDC3EC380E30315F5B322*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m10C09632D054960F02FE89952251398BF73209E7 (TaskAwaiter_1_t939447628654858A359A8B2688412DA89ED1880E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t939447628654858A359A8B2688412DA89ED1880E*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>,OneSignalExampleBehaviour/<SendPushToSelf>d__34>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t939447628654858A359A8B2688412DA89ED1880E_TisU3CSendPushToSelfU3Ed__34_t20E220D79859C5CAD3FBA52DC7486F7037F0690A_m8E65B345453C2AE6D993AD9A92CE40E30DC6F718 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t939447628654858A359A8B2688412DA89ED1880E* ___awaiter0, U3CSendPushToSelfU3Ed__34_t20E220D79859C5CAD3FBA52DC7486F7037F0690A* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_t939447628654858A359A8B2688412DA89ED1880E*, U3CSendPushToSelfU3Ed__34_t20E220D79859C5CAD3FBA52DC7486F7037F0690A*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CSendPushToSelfU3Ed__34_t20E220D79859C5CAD3FBA52DC7486F7037F0690A_m05B65602C583D089AC2C3770604B25239B224433_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>::GetResult()
inline Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* TaskAwaiter_1_GetResult_m45C5A6D6235044C234D76E0FCB9BCC713A6C1466 (TaskAwaiter_1_t939447628654858A359A8B2688412DA89ED1880E* __this, const RuntimeMethod* method)
{
	return ((  Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* (*) (TaskAwaiter_1_t939447628654858A359A8B2688412DA89ED1880E*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void OneSignalExampleBehaviour/<SendPushToSelf>d__34::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendPushToSelfU3Ed__34_MoveNext_m1A2D7B0D1B8AE3C6EF1D4181AFED63A0CDE10CC7 (U3CSendPushToSelfU3Ed__34_t20E220D79859C5CAD3FBA52DC7486F7037F0690A* __this, const RuntimeMethod* method) ;
// System.Void OneSignalExampleBehaviour/<SendPushToSelf>d__34::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendPushToSelfU3Ed__34_SetStateMachine_m94221C2A66561CAD4F11CDA00B0730AA361BAC12 (U3CSendPushToSelfU3Ed__34_t20E220D79859C5CAD3FBA52DC7486F7037F0690A* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,OneSignalExampleBehaviour/<SetTag>d__40>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetTagU3Ed__40_tAF8DC18D195FBDD30302D1E8800CB56488E5CA9E_m07F657EA210318028CCD6E0A86186D81FA14A2C5 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, U3CSetTagU3Ed__40_tAF8DC18D195FBDD30302D1E8800CB56488E5CA9E* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, U3CSetTagU3Ed__40_tAF8DC18D195FBDD30302D1E8800CB56488E5CA9E*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetTagU3Ed__40_tAF8DC18D195FBDD30302D1E8800CB56488E5CA9E_m07F657EA210318028CCD6E0A86186D81FA14A2C5_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void OneSignalExampleBehaviour/<SetTag>d__40::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetTagU3Ed__40_MoveNext_mF9D2E176A1C3903361B06301DA66FBEE333BEB63 (U3CSetTagU3Ed__40_tAF8DC18D195FBDD30302D1E8800CB56488E5CA9E* __this, const RuntimeMethod* method) ;
// System.Void OneSignalExampleBehaviour/<SetTag>d__40::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetTagU3Ed__40_SetStateMachine_mEA273B608D12C90E44B9A45E8B6E76215265A982 (U3CSetTagU3Ed__40_tAF8DC18D195FBDD30302D1E8800CB56488E5CA9E* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,OneSignalExampleBehaviour/<RemoveTag>d__41>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CRemoveTagU3Ed__41_t7AEB7AF364BD362DEB85346FB50D7F97CE8D4753_m8CC700D2719336AFD70ECB58DAF517491A226E22 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, U3CRemoveTagU3Ed__41_t7AEB7AF364BD362DEB85346FB50D7F97CE8D4753* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, U3CRemoveTagU3Ed__41_t7AEB7AF364BD362DEB85346FB50D7F97CE8D4753*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CRemoveTagU3Ed__41_t7AEB7AF364BD362DEB85346FB50D7F97CE8D4753_m8CC700D2719336AFD70ECB58DAF517491A226E22_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void OneSignalExampleBehaviour/<RemoveTag>d__41::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRemoveTagU3Ed__41_MoveNext_mDB11000A9B206F7D875F7A3C824271F2E59AB28E (U3CRemoveTagU3Ed__41_t7AEB7AF364BD362DEB85346FB50D7F97CE8D4753* __this, const RuntimeMethod* method) ;
// System.Void OneSignalExampleBehaviour/<RemoveTag>d__41::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRemoveTagU3Ed__41_SetStateMachine_m56537A4DC891EE88E1DCEB1C9C784A57FA92AC36 (U3CRemoveTagU3Ed__41_t7AEB7AF364BD362DEB85346FB50D7F97CE8D4753* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>>,OneSignalExampleBehaviour/<GetTags>d__42>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t939447628654858A359A8B2688412DA89ED1880E_TisU3CGetTagsU3Ed__42_tFF697C520F01E869DF820DF93D382B3CADACB17D_m80D998AA1BC41083ED38F1738CDBA0E4BD9740ED (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t939447628654858A359A8B2688412DA89ED1880E* ___awaiter0, U3CGetTagsU3Ed__42_tFF697C520F01E869DF820DF93D382B3CADACB17D* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_t939447628654858A359A8B2688412DA89ED1880E*, U3CGetTagsU3Ed__42_tFF697C520F01E869DF820DF93D382B3CADACB17D*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CGetTagsU3Ed__42_tFF697C520F01E869DF820DF93D382B3CADACB17D_m557920B4C05D3046E998CAF79517C9135DFC05A2_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void OneSignalExampleBehaviour/<GetTags>d__42::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTagsU3Ed__42_MoveNext_m48BDAB159F9B45F3D24EB0840013BEBE6FB55082 (U3CGetTagsU3Ed__42_tFF697C520F01E869DF820DF93D382B3CADACB17D* __this, const RuntimeMethod* method) ;
// System.Void OneSignalExampleBehaviour/<GetTags>d__42::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTagsU3Ed__42_SetStateMachine_m935F50F3CD2A2477FE99DA1CC038664671AC99D5 (U3CGetTagsU3Ed__42_tFF697C520F01E869DF820DF93D382B3CADACB17D* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,OneSignalExampleBehaviour/<SetOutcome>d__43>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetOutcomeU3Ed__43_t6C5CDBF58F1BFC7D10523D2A10BE774563D35862_m1182257A24C241C1F39CE2AA761BAED13DC06C4A (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, U3CSetOutcomeU3Ed__43_t6C5CDBF58F1BFC7D10523D2A10BE774563D35862* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, U3CSetOutcomeU3Ed__43_t6C5CDBF58F1BFC7D10523D2A10BE774563D35862*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetOutcomeU3Ed__43_t6C5CDBF58F1BFC7D10523D2A10BE774563D35862_m1182257A24C241C1F39CE2AA761BAED13DC06C4A_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void OneSignalExampleBehaviour/<SetOutcome>d__43::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetOutcomeU3Ed__43_MoveNext_m00DE158802EB768F6BC959D3DAC4290E0066D5DF (U3CSetOutcomeU3Ed__43_t6C5CDBF58F1BFC7D10523D2A10BE774563D35862* __this, const RuntimeMethod* method) ;
// System.Void OneSignalExampleBehaviour/<SetOutcome>d__43::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetOutcomeU3Ed__43_SetStateMachine_m2043DD52412474B03E57EAC80BD8D821A0E0A882 (U3CSetOutcomeU3Ed__43_t6C5CDBF58F1BFC7D10523D2A10BE774563D35862* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,OneSignalExampleBehaviour/<SetUniqueOutcome>d__44>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetUniqueOutcomeU3Ed__44_t2A820F14D89710D912DEA5E4824712CB32C612A5_m3C94E5A60C616C64B2898F659D35E1DE171A2CE9 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, U3CSetUniqueOutcomeU3Ed__44_t2A820F14D89710D912DEA5E4824712CB32C612A5* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, U3CSetUniqueOutcomeU3Ed__44_t2A820F14D89710D912DEA5E4824712CB32C612A5*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetUniqueOutcomeU3Ed__44_t2A820F14D89710D912DEA5E4824712CB32C612A5_m3C94E5A60C616C64B2898F659D35E1DE171A2CE9_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void OneSignalExampleBehaviour/<SetUniqueOutcome>d__44::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetUniqueOutcomeU3Ed__44_MoveNext_m3783FF5FBE65933637C8826B1CDE2F24B62B8BD6 (U3CSetUniqueOutcomeU3Ed__44_t2A820F14D89710D912DEA5E4824712CB32C612A5* __this, const RuntimeMethod* method) ;
// System.Void OneSignalExampleBehaviour/<SetUniqueOutcome>d__44::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetUniqueOutcomeU3Ed__44_SetStateMachine_m1E3BC305AB5248BE355B332BC147D0ED020FE09C (U3CSetUniqueOutcomeU3Ed__44_t2A820F14D89710D912DEA5E4824712CB32C612A5* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,OneSignalExampleBehaviour/<SetOutcomeWithValue>d__45>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetOutcomeWithValueU3Ed__45_t3972DDE673C352FC834CD3A9081C19845D97BF13_mDE102329A71C71E2904D24D3D1CC10889D0D62D5 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* ___awaiter0, U3CSetOutcomeWithValueU3Ed__45_t3972DDE673C352FC834CD3A9081C19845D97BF13* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35*, U3CSetOutcomeWithValueU3Ed__45_t3972DDE673C352FC834CD3A9081C19845D97BF13*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetOutcomeWithValueU3Ed__45_t3972DDE673C352FC834CD3A9081C19845D97BF13_mDE102329A71C71E2904D24D3D1CC10889D0D62D5_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void OneSignalExampleBehaviour/<SetOutcomeWithValue>d__45::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetOutcomeWithValueU3Ed__45_MoveNext_m7D99C61A10A533FF6380C0F0E7FD3703D7E5B8BC (U3CSetOutcomeWithValueU3Ed__45_t3972DDE673C352FC834CD3A9081C19845D97BF13* __this, const RuntimeMethod* method) ;
// System.Void OneSignalExampleBehaviour/<SetOutcomeWithValue>d__45::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetOutcomeWithValueU3Ed__45_SetStateMachine_m8488191B91A93D750CF10FCCA05EA1EE5BAAD098 (U3CSetOutcomeWithValueU3Ed__45_t3972DDE673C352FC834CD3A9081C19845D97BF13* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) ;
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
// System.Void OneSignalExampleBehaviour::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour_Start_m35685A8AC4D0C088CA6536F91FA9759EA82718A0 (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InAppMessageActionDelegate_t05B28B99EFCF8F671A51AD30444F5A734F68D7B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationActionDelegate_t0506036A22EDF3F41306BDBE188F5B4F7F29596D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationWillShowDelegate_tEBF8F8CF9A7B25750FBBFC55CB8FDD55F4379758_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignalExampleBehaviour__emailStateChanged_m03D936ED453BB0773D03DE5EDDE15570269C222D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignalExampleBehaviour__iamDidDismiss_m9971753D90ECD8777664A1379D106E0EBC7A8210_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignalExampleBehaviour__iamDidDisplay_mF76633494ADE657DA230C091E69DA65ED7B36EF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignalExampleBehaviour__iamTriggeredAction_m21555EFB72BEE8CC3E5E8EE6E2ED71804C94BB3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignalExampleBehaviour__iamWillDismiss_m8073DF3B35C706207F72C69A7D8015FABD210966_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignalExampleBehaviour__iamWillDisplay_mBE4F66F8B09110C091C893D344808C3CDE83E682_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignalExampleBehaviour__notificationOpened_m5F62ECEF3E0CC978D1DB958FEF69F818FA7B4DF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignalExampleBehaviour__notificationPermissionChanged_m147834E1EDC14F74396A70CD6663529EB86E4E4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignalExampleBehaviour__notificationReceived_m2804A15BDBCDF16E8F71F99FD7E6E60F20F794E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignalExampleBehaviour__pushStateChanged_m4116F9CB5362E003AC8EF20F93290F5269850767_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignalExampleBehaviour__smsStateChanged_m4F7140DC6A946EDF1C64FD8891CFC0B724AE928B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateChangeDelegate_1_t6DB9D252107863BC51FC1376ABD654FF97083A9E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateChangeDelegate_1_t758AC0332C886E33E5F088A18D25BD4EC550FF08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateChangeDelegate_1_tEC91B801172520D1E5AE68DEA6F822EB439F8E40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateChangeDelegate_1_tF46780AEE1268A63DA4F780C1535FF89CE8F431D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OneSignal.Default.LogLevel   = LogLevel.Info;
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_0;
		L_0 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< int32_t >::Invoke(27 /* System.Void OneSignalSDK.OneSignal::set_LogLevel(OneSignalSDK.LogLevel) */, L_0, 4);
		// OneSignal.Default.AlertLevel = LogLevel.Fatal;
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_1;
		L_1 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< int32_t >::Invoke(29 /* System.Void OneSignalSDK.OneSignal::set_AlertLevel(OneSignalSDK.LogLevel) */, L_1, 1);
		// OneSignal.Default.RequiresPrivacyConsent = requiresUserPrivacyConsent;
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_2;
		L_2 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		bool L_3 = __this->___requiresUserPrivacyConsent_8;
		NullCheck(L_2);
		VirtualActionInvoker1< bool >::Invoke(33 /* System.Void OneSignalSDK.OneSignal::set_RequiresPrivacyConsent(System.Boolean) */, L_2, L_3);
		// OneSignal.Default.NotificationOpened   += _notificationOpened;
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_4;
		L_4 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		NotificationActionDelegate_t0506036A22EDF3F41306BDBE188F5B4F7F29596D* L_5 = (NotificationActionDelegate_t0506036A22EDF3F41306BDBE188F5B4F7F29596D*)il2cpp_codegen_object_new(NotificationActionDelegate_t0506036A22EDF3F41306BDBE188F5B4F7F29596D_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		NotificationActionDelegate__ctor_m408F5A9D3FDB19D0D9C832ACA6218A31E01D5E3C(L_5, __this, (intptr_t)((void*)OneSignalExampleBehaviour__notificationOpened_m5F62ECEF3E0CC978D1DB958FEF69F818FA7B4DF6_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< NotificationActionDelegate_t0506036A22EDF3F41306BDBE188F5B4F7F29596D* >::Invoke(6 /* System.Void OneSignalSDK.OneSignal::add_NotificationOpened(OneSignalSDK.OneSignal/NotificationActionDelegate) */, L_4, L_5);
		// OneSignal.Default.NotificationWillShow += _notificationReceived;
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_6;
		L_6 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		NotificationWillShowDelegate_tEBF8F8CF9A7B25750FBBFC55CB8FDD55F4379758* L_7 = (NotificationWillShowDelegate_tEBF8F8CF9A7B25750FBBFC55CB8FDD55F4379758*)il2cpp_codegen_object_new(NotificationWillShowDelegate_tEBF8F8CF9A7B25750FBBFC55CB8FDD55F4379758_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		NotificationWillShowDelegate__ctor_m8DEE6C41B02776A21A042F416981705000627B68(L_7, __this, (intptr_t)((void*)OneSignalExampleBehaviour__notificationReceived_m2804A15BDBCDF16E8F71F99FD7E6E60F20F794E7_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< NotificationWillShowDelegate_tEBF8F8CF9A7B25750FBBFC55CB8FDD55F4379758* >::Invoke(4 /* System.Void OneSignalSDK.OneSignal::add_NotificationWillShow(OneSignalSDK.OneSignal/NotificationWillShowDelegate) */, L_6, L_7);
		// OneSignal.Default.InAppMessageWillDisplay     += _iamWillDisplay;
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_8;
		L_8 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF* L_9 = (InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF*)il2cpp_codegen_object_new(InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		InAppMessageLifecycleDelegate__ctor_mE43EDDA4DEB69661B8A715F0C9B3DB86EFAC58EF(L_9, __this, (intptr_t)((void*)OneSignalExampleBehaviour__iamWillDisplay_mBE4F66F8B09110C091C893D344808C3CDE83E682_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF* >::Invoke(8 /* System.Void OneSignalSDK.OneSignal::add_InAppMessageWillDisplay(OneSignalSDK.OneSignal/InAppMessageLifecycleDelegate) */, L_8, L_9);
		// OneSignal.Default.InAppMessageDidDisplay      += _iamDidDisplay;
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_10;
		L_10 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF* L_11 = (InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF*)il2cpp_codegen_object_new(InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		InAppMessageLifecycleDelegate__ctor_mE43EDDA4DEB69661B8A715F0C9B3DB86EFAC58EF(L_11, __this, (intptr_t)((void*)OneSignalExampleBehaviour__iamDidDisplay_mF76633494ADE657DA230C091E69DA65ED7B36EF8_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF* >::Invoke(10 /* System.Void OneSignalSDK.OneSignal::add_InAppMessageDidDisplay(OneSignalSDK.OneSignal/InAppMessageLifecycleDelegate) */, L_10, L_11);
		// OneSignal.Default.InAppMessageWillDismiss     += _iamWillDismiss;
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_12;
		L_12 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF* L_13 = (InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF*)il2cpp_codegen_object_new(InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		InAppMessageLifecycleDelegate__ctor_mE43EDDA4DEB69661B8A715F0C9B3DB86EFAC58EF(L_13, __this, (intptr_t)((void*)OneSignalExampleBehaviour__iamWillDismiss_m8073DF3B35C706207F72C69A7D8015FABD210966_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF* >::Invoke(12 /* System.Void OneSignalSDK.OneSignal::add_InAppMessageWillDismiss(OneSignalSDK.OneSignal/InAppMessageLifecycleDelegate) */, L_12, L_13);
		// OneSignal.Default.InAppMessageDidDismiss      += _iamDidDismiss;
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_14;
		L_14 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF* L_15 = (InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF*)il2cpp_codegen_object_new(InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		InAppMessageLifecycleDelegate__ctor_mE43EDDA4DEB69661B8A715F0C9B3DB86EFAC58EF(L_15, __this, (intptr_t)((void*)OneSignalExampleBehaviour__iamDidDismiss_m9971753D90ECD8777664A1379D106E0EBC7A8210_RuntimeMethod_var), NULL);
		NullCheck(L_14);
		VirtualActionInvoker1< InAppMessageLifecycleDelegate_tB98F345C7348E657B42CADA1F47C02EC01B32CFF* >::Invoke(14 /* System.Void OneSignalSDK.OneSignal::add_InAppMessageDidDismiss(OneSignalSDK.OneSignal/InAppMessageLifecycleDelegate) */, L_14, L_15);
		// OneSignal.Default.InAppMessageTriggeredAction += _iamTriggeredAction;
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_16;
		L_16 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		InAppMessageActionDelegate_t05B28B99EFCF8F671A51AD30444F5A734F68D7B8* L_17 = (InAppMessageActionDelegate_t05B28B99EFCF8F671A51AD30444F5A734F68D7B8*)il2cpp_codegen_object_new(InAppMessageActionDelegate_t05B28B99EFCF8F671A51AD30444F5A734F68D7B8_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		InAppMessageActionDelegate__ctor_m5A77E086CC360AD6369972267DCBEB50CE147E84(L_17, __this, (intptr_t)((void*)OneSignalExampleBehaviour__iamTriggeredAction_m21555EFB72BEE8CC3E5E8EE6E2ED71804C94BB3C_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		VirtualActionInvoker1< InAppMessageActionDelegate_t05B28B99EFCF8F671A51AD30444F5A734F68D7B8* >::Invoke(16 /* System.Void OneSignalSDK.OneSignal::add_InAppMessageTriggeredAction(OneSignalSDK.OneSignal/InAppMessageActionDelegate) */, L_16, L_17);
		// OneSignal.Default.NotificationPermissionChanged += _notificationPermissionChanged;
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_18;
		L_18 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		StateChangeDelegate_1_tEC91B801172520D1E5AE68DEA6F822EB439F8E40* L_19 = (StateChangeDelegate_1_tEC91B801172520D1E5AE68DEA6F822EB439F8E40*)il2cpp_codegen_object_new(StateChangeDelegate_1_tEC91B801172520D1E5AE68DEA6F822EB439F8E40_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		StateChangeDelegate_1__ctor_mA2F1DE6F1C7B8CCBA7EF96C7E5C83FB5D33ED8D9(L_19, __this, (intptr_t)((void*)OneSignalExampleBehaviour__notificationPermissionChanged_m147834E1EDC14F74396A70CD6663529EB86E4E4B_RuntimeMethod_var), NULL);
		NullCheck(L_18);
		VirtualActionInvoker1< StateChangeDelegate_1_tEC91B801172520D1E5AE68DEA6F822EB439F8E40* >::Invoke(18 /* System.Void OneSignalSDK.OneSignal::add_NotificationPermissionChanged(OneSignalSDK.OneSignal/StateChangeDelegate`1<OneSignalSDK.NotificationPermission>) */, L_18, L_19);
		// OneSignal.Default.PushSubscriptionStateChanged  += _pushStateChanged;
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_20;
		L_20 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		StateChangeDelegate_1_t758AC0332C886E33E5F088A18D25BD4EC550FF08* L_21 = (StateChangeDelegate_1_t758AC0332C886E33E5F088A18D25BD4EC550FF08*)il2cpp_codegen_object_new(StateChangeDelegate_1_t758AC0332C886E33E5F088A18D25BD4EC550FF08_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		StateChangeDelegate_1__ctor_mF22399AECB75A1A6BB3C8CC4AB6931B05133FB03(L_21, __this, (intptr_t)((void*)OneSignalExampleBehaviour__pushStateChanged_m4116F9CB5362E003AC8EF20F93290F5269850767_RuntimeMethod_var), NULL);
		NullCheck(L_20);
		VirtualActionInvoker1< StateChangeDelegate_1_t758AC0332C886E33E5F088A18D25BD4EC550FF08* >::Invoke(20 /* System.Void OneSignalSDK.OneSignal::add_PushSubscriptionStateChanged(OneSignalSDK.OneSignal/StateChangeDelegate`1<OneSignalSDK.PushSubscriptionState>) */, L_20, L_21);
		// OneSignal.Default.EmailSubscriptionStateChanged += _emailStateChanged;
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_22;
		L_22 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		StateChangeDelegate_1_tF46780AEE1268A63DA4F780C1535FF89CE8F431D* L_23 = (StateChangeDelegate_1_tF46780AEE1268A63DA4F780C1535FF89CE8F431D*)il2cpp_codegen_object_new(StateChangeDelegate_1_tF46780AEE1268A63DA4F780C1535FF89CE8F431D_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		StateChangeDelegate_1__ctor_m0211F0D00FC60A2D56CA0C541C3ACE2C731C7FE7(L_23, __this, (intptr_t)((void*)OneSignalExampleBehaviour__emailStateChanged_m03D936ED453BB0773D03DE5EDDE15570269C222D_RuntimeMethod_var), NULL);
		NullCheck(L_22);
		VirtualActionInvoker1< StateChangeDelegate_1_tF46780AEE1268A63DA4F780C1535FF89CE8F431D* >::Invoke(22 /* System.Void OneSignalSDK.OneSignal::add_EmailSubscriptionStateChanged(OneSignalSDK.OneSignal/StateChangeDelegate`1<OneSignalSDK.EmailSubscriptionState>) */, L_22, L_23);
		// OneSignal.Default.SMSSubscriptionStateChanged   += _smsStateChanged;
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_24;
		L_24 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		StateChangeDelegate_1_t6DB9D252107863BC51FC1376ABD654FF97083A9E* L_25 = (StateChangeDelegate_1_t6DB9D252107863BC51FC1376ABD654FF97083A9E*)il2cpp_codegen_object_new(StateChangeDelegate_1_t6DB9D252107863BC51FC1376ABD654FF97083A9E_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		StateChangeDelegate_1__ctor_m084F11F458D21A6E4648FD14BAACDE94C8DF7916(L_25, __this, (intptr_t)((void*)OneSignalExampleBehaviour__smsStateChanged_m4F7140DC6A946EDF1C64FD8891CFC0B724AE928B_RuntimeMethod_var), NULL);
		NullCheck(L_24);
		VirtualActionInvoker1< StateChangeDelegate_1_t6DB9D252107863BC51FC1376ABD654FF97083A9E* >::Invoke(24 /* System.Void OneSignalSDK.OneSignal::add_SMSSubscriptionStateChanged(OneSignalSDK.OneSignal/StateChangeDelegate`1<OneSignalSDK.SMSSubscriptionState>) */, L_24, L_25);
		// }
		return;
	}
}
// System.Void OneSignalExampleBehaviour::_notificationOpened(OneSignalSDK.NotificationOpenedResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour__notificationOpened_m5F62ECEF3E0CC978D1DB958FEF69F818FA7B4DF6 (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, NotificationOpenedResult_t8500E9CDC10B9FCC6082DD66B86D9AD123BBAD01* ___result0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9C5BA3BAA95FA0166BA594AD1469305D8959348);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _log($"Notification was opened with result: {JsonUtility.ToJson(result)}");
		NotificationOpenedResult_t8500E9CDC10B9FCC6082DD66B86D9AD123BBAD01* L_0 = ___result0;
		String_t* L_1;
		L_1 = JsonUtility_ToJson_mD0FB24DC5A8621A2473FC208E9B15AF43944EBCD(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralD9C5BA3BAA95FA0166BA594AD1469305D8959348, L_1, NULL);
		OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(__this, L_2, NULL);
		// }
		return;
	}
}
// OneSignalSDK.Notification OneSignalExampleBehaviour::_notificationReceived(OneSignalSDK.Notification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* OneSignalExampleBehaviour__notificationReceived_m2804A15BDBCDF16E8F71F99FD7E6E60F20F794E7 (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* ___notification0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BD580708CBC91AAFE91355E0D75E24CBB70C4A2);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		// var additionalData = notification.additionalData != null
		//     ? Json.Serialize(notification.additionalData)
		//         : null;
		Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* L_0 = ___notification0;
		NullCheck(L_0);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = L_0->___additionalData_8;
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0018;
	}

IL_000b:
	{
		Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* L_2 = ___notification0;
		NullCheck(L_2);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_3 = L_2->___additionalData_8;
		String_t* L_4;
		L_4 = Json_Serialize_mA6BDF705EEE0769F09C6A3F8D5712884541A2B96(L_3, (bool)0, 2, NULL);
		G_B3_0 = L_4;
	}

IL_0018:
	{
		V_0 = G_B3_0;
		// _log($"Notification was received in foreground: {JsonUtility.ToJson(notification)}\n{additionalData}");
		Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* L_5 = ___notification0;
		String_t* L_6;
		L_6 = JsonUtility_ToJson_mD0FB24DC5A8621A2473FC208E9B15AF43944EBCD(L_5, NULL);
		String_t* L_7 = V_0;
		String_t* L_8;
		L_8 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(_stringLiteral8BD580708CBC91AAFE91355E0D75E24CBB70C4A2, L_6, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, L_7, NULL);
		OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(__this, L_8, NULL);
		// return notification; // show the notification
		Notification_t3808BD470562B2AE1AA323243E38420CC3C4A24F* L_9 = ___notification0;
		return L_9;
	}
}
// System.Void OneSignalExampleBehaviour::_iamWillDisplay(OneSignalSDK.InAppMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour__iamWillDisplay_mBE4F66F8B09110C091C893D344808C3CDE83E682 (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, InAppMessage_t85CAE1C81FC1D740C4A122EFF7F31F1151A0E557* ___inAppMessage0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E72D06AA7BBF1FEE850F4EB87D1C1E49F6B6150);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _log($"IAM will display: {JsonUtility.ToJson(inAppMessage)}");
		InAppMessage_t85CAE1C81FC1D740C4A122EFF7F31F1151A0E557* L_0 = ___inAppMessage0;
		String_t* L_1;
		L_1 = JsonUtility_ToJson_mD0FB24DC5A8621A2473FC208E9B15AF43944EBCD(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral3E72D06AA7BBF1FEE850F4EB87D1C1E49F6B6150, L_1, NULL);
		OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void OneSignalExampleBehaviour::_iamDidDisplay(OneSignalSDK.InAppMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour__iamDidDisplay_mF76633494ADE657DA230C091E69DA65ED7B36EF8 (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, InAppMessage_t85CAE1C81FC1D740C4A122EFF7F31F1151A0E557* ___inAppMessage0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB21D04D1BB451F3E8165511AF94F871C6200FE6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _log($"IAM did display: {JsonUtility.ToJson(inAppMessage)}");
		InAppMessage_t85CAE1C81FC1D740C4A122EFF7F31F1151A0E557* L_0 = ___inAppMessage0;
		String_t* L_1;
		L_1 = JsonUtility_ToJson_mD0FB24DC5A8621A2473FC208E9B15AF43944EBCD(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralCB21D04D1BB451F3E8165511AF94F871C6200FE6, L_1, NULL);
		OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void OneSignalExampleBehaviour::_iamWillDismiss(OneSignalSDK.InAppMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour__iamWillDismiss_m8073DF3B35C706207F72C69A7D8015FABD210966 (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, InAppMessage_t85CAE1C81FC1D740C4A122EFF7F31F1151A0E557* ___inAppMessage0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DC1F46D96900CEC99760351AB65911BF4D086F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _log($"IAM will dismiss: {JsonUtility.ToJson(inAppMessage)}");
		InAppMessage_t85CAE1C81FC1D740C4A122EFF7F31F1151A0E557* L_0 = ___inAppMessage0;
		String_t* L_1;
		L_1 = JsonUtility_ToJson_mD0FB24DC5A8621A2473FC208E9B15AF43944EBCD(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral8DC1F46D96900CEC99760351AB65911BF4D086F2, L_1, NULL);
		OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void OneSignalExampleBehaviour::_iamDidDismiss(OneSignalSDK.InAppMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour__iamDidDismiss_m9971753D90ECD8777664A1379D106E0EBC7A8210 (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, InAppMessage_t85CAE1C81FC1D740C4A122EFF7F31F1151A0E557* ___inAppMessage0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral942279816D7167EFF29ADE92DDB99082435FD092);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _log($"IAM did dismiss: {JsonUtility.ToJson(inAppMessage)}");
		InAppMessage_t85CAE1C81FC1D740C4A122EFF7F31F1151A0E557* L_0 = ___inAppMessage0;
		String_t* L_1;
		L_1 = JsonUtility_ToJson_mD0FB24DC5A8621A2473FC208E9B15AF43944EBCD(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral942279816D7167EFF29ADE92DDB99082435FD092, L_1, NULL);
		OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void OneSignalExampleBehaviour::_iamTriggeredAction(OneSignalSDK.InAppMessageAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour__iamTriggeredAction_m21555EFB72BEE8CC3E5E8EE6E2ED71804C94BB3C (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, InAppMessageAction_t2A5FC86EC22BE2BDB88E867CECA230BD82B486AB* ___inAppMessageAction0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC50D6383D7007FC65742921E018A6070D8FEC5B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _log($"IAM triggered action: {JsonUtility.ToJson(inAppMessageAction)}");
		InAppMessageAction_t2A5FC86EC22BE2BDB88E867CECA230BD82B486AB* L_0 = ___inAppMessageAction0;
		String_t* L_1;
		L_1 = JsonUtility_ToJson_mD0FB24DC5A8621A2473FC208E9B15AF43944EBCD(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralDC50D6383D7007FC65742921E018A6070D8FEC5B, L_1, NULL);
		OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void OneSignalExampleBehaviour::_notificationPermissionChanged(OneSignalSDK.NotificationPermission,OneSignalSDK.NotificationPermission)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour__notificationPermissionChanged_m147834E1EDC14F74396A70CD6663529EB86E4E4B (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, int32_t ___current0, int32_t ___previous1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationPermission_tFF856FEAB362EF437681DC4A1745FB7BF161B7E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AAF2ACAFD732F56CB06D9173D238BEC46A60524);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _log($"Notification Permissions changed to: {current}");
		int32_t L_0 = ___current0;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(NotificationPermission_tFF856FEAB362EF437681DC4A1745FB7BF161B7E2_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral3AAF2ACAFD732F56CB06D9173D238BEC46A60524, L_2, NULL);
		OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void OneSignalExampleBehaviour::_pushStateChanged(OneSignalSDK.PushSubscriptionState,OneSignalSDK.PushSubscriptionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour__pushStateChanged_m4116F9CB5362E003AC8EF20F93290F5269850767 (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, PushSubscriptionState_tCC90B16EE861FADF35E5D4164A486E98EA96A635* ___current0, PushSubscriptionState_tCC90B16EE861FADF35E5D4164A486E98EA96A635* ___previous1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57D40B16429CCED382F1F20C5CB5D1510A8070DC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _log($"Push state changed to: {JsonUtility.ToJson(current)}");
		PushSubscriptionState_tCC90B16EE861FADF35E5D4164A486E98EA96A635* L_0 = ___current0;
		String_t* L_1;
		L_1 = JsonUtility_ToJson_mD0FB24DC5A8621A2473FC208E9B15AF43944EBCD(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral57D40B16429CCED382F1F20C5CB5D1510A8070DC, L_1, NULL);
		OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void OneSignalExampleBehaviour::_emailStateChanged(OneSignalSDK.EmailSubscriptionState,OneSignalSDK.EmailSubscriptionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour__emailStateChanged_m03D936ED453BB0773D03DE5EDDE15570269C222D (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, EmailSubscriptionState_t251F184AA5FCD234E408E944706746C462F5ED01* ___current0, EmailSubscriptionState_t251F184AA5FCD234E408E944706746C462F5ED01* ___previous1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EB3673162EA246B8527A26368543DEC4BB757C5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _log($"Email state changed to: {JsonUtility.ToJson(current)}");
		EmailSubscriptionState_t251F184AA5FCD234E408E944706746C462F5ED01* L_0 = ___current0;
		String_t* L_1;
		L_1 = JsonUtility_ToJson_mD0FB24DC5A8621A2473FC208E9B15AF43944EBCD(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral8EB3673162EA246B8527A26368543DEC4BB757C5, L_1, NULL);
		OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void OneSignalExampleBehaviour::_smsStateChanged(OneSignalSDK.SMSSubscriptionState,OneSignalSDK.SMSSubscriptionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour__smsStateChanged_m4F7140DC6A946EDF1C64FD8891CFC0B724AE928B (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, SMSSubscriptionState_t5C7EA40BB7CC39EC26BA103E18EDC9E0215E39BC* ___current0, SMSSubscriptionState_t5C7EA40BB7CC39EC26BA103E18EDC9E0215E39BC* ___previous1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA453EEEE28E604CD99A7FC32E3111F34D795B379);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _log($"SMS state changed to: {JsonUtility.ToJson(current)}");
		SMSSubscriptionState_t5C7EA40BB7CC39EC26BA103E18EDC9E0215E39BC* L_0 = ___current0;
		String_t* L_1;
		L_1 = JsonUtility_ToJson_mD0FB24DC5A8621A2473FC208E9B15AF43944EBCD(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralA453EEEE28E604CD99A7FC32E3111F34D795B379, L_1, NULL);
		OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void OneSignalExampleBehaviour::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour_Initialize_m2EFD8D8141F32D465ED8675B327E3A6A00EE1594 (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3371C9C28E563AFD0A683CA126F078F3F07B7306);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B53B0D25A5872D78BE2CF6B084001AFB9D1D844);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _log($"Initializing with appId <b>{appId}</b>");
		String_t* L_0 = __this->___appId_7;
		String_t* L_1;
		L_1 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral5B53B0D25A5872D78BE2CF6B084001AFB9D1D844, L_0, _stringLiteral3371C9C28E563AFD0A683CA126F078F3F07B7306, NULL);
		OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(__this, L_1, NULL);
		// OneSignal.Default.Initialize(appId);
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_2;
		L_2 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		String_t* L_3 = __this->___appId_7;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(35 /* System.Void OneSignalSDK.OneSignal::Initialize(System.String) */, L_2, L_3);
		// }
		return;
	}
}
// System.Void OneSignalExampleBehaviour::ToggleRequiresPrivacyConsent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour_ToggleRequiresPrivacyConsent_m0D21B0D1FB9497A517AB5334E50D6FA64D5B9272 (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2259E6B380BB35DB0B503FE20DACCA3D120BBA4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD87AF610ECDBA5AC504F6DB10E14E60F44EB4086);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OneSignal.Default.RequiresPrivacyConsent)
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_0;
		L_0 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(32 /* System.Boolean OneSignalSDK.OneSignal::get_RequiresPrivacyConsent() */, L_0);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// _error($"Cannot toggle RequiresPrivacyConsent from TRUE to FALSE");
		OneSignalExampleBehaviour__error_mBB5177866C8A19120933543A7AC8F1CFD7E8C76F(__this, _stringLiteralD87AF610ECDBA5AC504F6DB10E14E60F44EB4086, NULL);
		return;
	}

IL_0018:
	{
		// _log($"Toggling RequiresPrivacyConsent to <b>{!OneSignal.Default.RequiresPrivacyConsent}</b>");
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_2;
		L_2 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(32 /* System.Boolean OneSignalSDK.OneSignal::get_RequiresPrivacyConsent() */, L_2);
		bool L_4 = ((bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0));
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralA2259E6B380BB35DB0B503FE20DACCA3D120BBA4, L_5, NULL);
		OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(__this, L_6, NULL);
		// OneSignal.Default.RequiresPrivacyConsent = !OneSignal.Default.RequiresPrivacyConsent;
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_7;
		L_7 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_8;
		L_8 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		NullCheck(L_8);
		bool L_9;
		L_9 = VirtualFuncInvoker0< bool >::Invoke(32 /* System.Boolean OneSignalSDK.OneSignal::get_RequiresPrivacyConsent() */, L_8);
		NullCheck(L_7);
		VirtualActionInvoker1< bool >::Invoke(33 /* System.Void OneSignalSDK.OneSignal::set_RequiresPrivacyConsent(System.Boolean) */, L_7, (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0));
		// }
		return;
	}
}
// System.Void OneSignalExampleBehaviour::TogglePrivacyConsent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour_TogglePrivacyConsent_mF09563BCDBED40496C5A8BB43FCB8D871F65F066 (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF63539DC4886359F646471C655F8F91569281A76);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _log($"Toggling PrivacyConsent to <b>{!OneSignal.Default.PrivacyConsent}</b>");
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_0;
		L_0 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(30 /* System.Boolean OneSignalSDK.OneSignal::get_PrivacyConsent() */, L_0);
		bool L_2 = ((bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0));
		RuntimeObject* L_3 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralF63539DC4886359F646471C655F8F91569281A76, L_3, NULL);
		OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(__this, L_4, NULL);
		// OneSignal.Default.PrivacyConsent = !OneSignal.Default.PrivacyConsent;
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_5;
		L_5 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_6;
		L_6 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(30 /* System.Boolean OneSignalSDK.OneSignal::get_PrivacyConsent() */, L_6);
		NullCheck(L_5);
		VirtualActionInvoker1< bool >::Invoke(31 /* System.Void OneSignalSDK.OneSignal::set_PrivacyConsent(System.Boolean) */, L_5, (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0));
		// }
		return;
	}
}
// System.Void OneSignalExampleBehaviour::SetLogLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour_SetLogLevel_m651127DC78E5D47433A02D63F37D3441A24A1843 (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogLevel_t4A370EAA8CFB375359332FEC8B714A693BA14675_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignalExampleBehaviour__nextEnum_TisLogLevel_t4A370EAA8CFB375359332FEC8B714A693BA14675_mA11D237EDB7B60409B136A1CC296CBAFB35965D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4C390BA2A3D7B903520D33ADE91809DAB8C39F2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var newLevel = _nextEnum(OneSignal.Default.LogLevel);
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_0;
		L_0 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(26 /* OneSignalSDK.LogLevel OneSignalSDK.OneSignal::get_LogLevel() */, L_0);
		int32_t L_2;
		L_2 = OneSignalExampleBehaviour__nextEnum_TisLogLevel_t4A370EAA8CFB375359332FEC8B714A693BA14675_mA11D237EDB7B60409B136A1CC296CBAFB35965D5(L_1, OneSignalExampleBehaviour__nextEnum_TisLogLevel_t4A370EAA8CFB375359332FEC8B714A693BA14675_mA11D237EDB7B60409B136A1CC296CBAFB35965D5_RuntimeMethod_var);
		V_0 = L_2;
		// _log($"Setting LogLevel to <b>{newLevel}</b>");
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(LogLevel_t4A370EAA8CFB375359332FEC8B714A693BA14675_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralD4C390BA2A3D7B903520D33ADE91809DAB8C39F2, L_5, NULL);
		OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(__this, L_6, NULL);
		// OneSignal.Default.LogLevel = newLevel;
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_7;
		L_7 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		VirtualActionInvoker1< int32_t >::Invoke(27 /* System.Void OneSignalSDK.OneSignal::set_LogLevel(OneSignalSDK.LogLevel) */, L_7, L_8);
		// }
		return;
	}
}
// System.Void OneSignalExampleBehaviour::SetAlertLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour_SetAlertLevel_m7F31FB2510142E089CA5AAD9110EB6A3B475AFC9 (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogLevel_t4A370EAA8CFB375359332FEC8B714A693BA14675_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignalExampleBehaviour__nextEnum_TisLogLevel_t4A370EAA8CFB375359332FEC8B714A693BA14675_mA11D237EDB7B60409B136A1CC296CBAFB35965D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A29862F8060663FDD6CD353DD0839770D6D4374);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var newLevel = _nextEnum(OneSignal.Default.AlertLevel);
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_0;
		L_0 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(28 /* OneSignalSDK.LogLevel OneSignalSDK.OneSignal::get_AlertLevel() */, L_0);
		int32_t L_2;
		L_2 = OneSignalExampleBehaviour__nextEnum_TisLogLevel_t4A370EAA8CFB375359332FEC8B714A693BA14675_mA11D237EDB7B60409B136A1CC296CBAFB35965D5(L_1, OneSignalExampleBehaviour__nextEnum_TisLogLevel_t4A370EAA8CFB375359332FEC8B714A693BA14675_mA11D237EDB7B60409B136A1CC296CBAFB35965D5_RuntimeMethod_var);
		V_0 = L_2;
		// _log($"Setting AlertLevel to <b>{newLevel}</b>");
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(LogLevel_t4A370EAA8CFB375359332FEC8B714A693BA14675_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral3A29862F8060663FDD6CD353DD0839770D6D4374, L_5, NULL);
		OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(__this, L_6, NULL);
		// OneSignal.Default.AlertLevel = newLevel;
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_7;
		L_7 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		int32_t L_8 = V_0;
		NullCheck(L_7);
		VirtualActionInvoker1< int32_t >::Invoke(29 /* System.Void OneSignalSDK.OneSignal::set_AlertLevel(OneSignalSDK.LogLevel) */, L_7, L_8);
		// }
		return;
	}
}
// System.Void OneSignalExampleBehaviour::SetEmail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour_SetEmail_m45AF57CFE8E77F41F3F2D226907733469E6E6E6B (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CSetEmailU3Ed__29_t4CF9DA5972E391F6DE8D065E93F5C4D4E3C40481_mE6DA5D9AA45A531ABD30B6EF6C7E48BD7DCB93B3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSetEmailU3Ed__29_t4CF9DA5972E391F6DE8D065E93F5C4D4E3C40481 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CSetEmailU3Ed__29_t4CF9DA5972E391F6DE8D065E93F5C4D4E3C40481_mE6DA5D9AA45A531ABD30B6EF6C7E48BD7DCB93B3(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CSetEmailU3Ed__29_t4CF9DA5972E391F6DE8D065E93F5C4D4E3C40481_mE6DA5D9AA45A531ABD30B6EF6C7E48BD7DCB93B3_RuntimeMethod_var);
		return;
	}
}
// System.Void OneSignalExampleBehaviour::SetExternalId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour_SetExternalId_mCA56B2327F348453B33500D25B156A3BF7B04A0D (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CSetExternalIdU3Ed__30_t2718EEF57C253F31438936208C113AAE7CF2C151_m9571B3EDF6F70A3DAA99BE8F0CC6B354DD50B055_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSetExternalIdU3Ed__30_t2718EEF57C253F31438936208C113AAE7CF2C151 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CSetExternalIdU3Ed__30_t2718EEF57C253F31438936208C113AAE7CF2C151_m9571B3EDF6F70A3DAA99BE8F0CC6B354DD50B055(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CSetExternalIdU3Ed__30_t2718EEF57C253F31438936208C113AAE7CF2C151_m9571B3EDF6F70A3DAA99BE8F0CC6B354DD50B055_RuntimeMethod_var);
		return;
	}
}
// System.Void OneSignalExampleBehaviour::SetSMSNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour_SetSMSNumber_m725F496F2A4D746FA54D566560BC7E8EBCB26F45 (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CSetSMSNumberU3Ed__31_tA65B67E5A444829D4BF816884D4935C22CA6D816_mB98989A10461C2E8213FF3004D5EC5FBFB30EE5C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSetSMSNumberU3Ed__31_tA65B67E5A444829D4BF816884D4935C22CA6D816 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CSetSMSNumberU3Ed__31_tA65B67E5A444829D4BF816884D4935C22CA6D816_mB98989A10461C2E8213FF3004D5EC5FBFB30EE5C(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CSetSMSNumberU3Ed__31_tA65B67E5A444829D4BF816884D4935C22CA6D816_mB98989A10461C2E8213FF3004D5EC5FBFB30EE5C_RuntimeMethod_var);
		return;
	}
}
// System.Void OneSignalExampleBehaviour::PromptForPush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour_PromptForPush_m7CF4AFD097ECF090A7EE45A6DFBBC60D0F397C6D (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CPromptForPushU3Ed__32_tD96C472B2DE51806095A83998F06B4FB970879BE_mAC7FE7163FC8339C47D490F01C048AD4863D7FB1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CPromptForPushU3Ed__32_tD96C472B2DE51806095A83998F06B4FB970879BE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CPromptForPushU3Ed__32_tD96C472B2DE51806095A83998F06B4FB970879BE_mAC7FE7163FC8339C47D490F01C048AD4863D7FB1(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CPromptForPushU3Ed__32_tD96C472B2DE51806095A83998F06B4FB970879BE_mAC7FE7163FC8339C47D490F01C048AD4863D7FB1_RuntimeMethod_var);
		return;
	}
}
// System.Void OneSignalExampleBehaviour::ClearPush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour_ClearPush_m74F30CBE188C013560AC969C2897E387D179511B (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86A259D24622639FF6E58F15DAAD45B1AFBF8831);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _log("Clearing existing OneSignal push notifications...");
		OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(__this, _stringLiteral86A259D24622639FF6E58F15DAAD45B1AFBF8831, NULL);
		// OneSignal.Default.ClearOneSignalNotifications();
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_0;
		L_0 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(37 /* System.Void OneSignalSDK.OneSignal::ClearOneSignalNotifications() */, L_0);
		// }
		return;
	}
}
// System.Void OneSignalExampleBehaviour::SendPushToSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour_SendPushToSelf_m291524A4B0E19C220B45430B08EBA2ABF12A811F (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CSendPushToSelfU3Ed__34_t20E220D79859C5CAD3FBA52DC7486F7037F0690A_m10B69ADAD75752AF021356F2B6FE6594811D409D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSendPushToSelfU3Ed__34_t20E220D79859C5CAD3FBA52DC7486F7037F0690A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CSendPushToSelfU3Ed__34_t20E220D79859C5CAD3FBA52DC7486F7037F0690A_m10B69ADAD75752AF021356F2B6FE6594811D409D(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CSendPushToSelfU3Ed__34_t20E220D79859C5CAD3FBA52DC7486F7037F0690A_m10B69ADAD75752AF021356F2B6FE6594811D409D_RuntimeMethod_var);
		return;
	}
}
// System.Void OneSignalExampleBehaviour::SetTrigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour_SetTrigger_mBA571DE52407352902E9B65BFA5231C5218647A0 (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01E18A3F9A449B16A38AA5F9BBAF02834C11C4EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3371C9C28E563AFD0A683CA126F078F3F07B7306);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFCE30D94367C033F3AE2218F812A2D8655EE69C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _log($"Setting trigger with key <b>{triggerKey}</b> and value <b>{triggerValue}</b>");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralDFCE30D94367C033F3AE2218F812A2D8655EE69C);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralDFCE30D94367C033F3AE2218F812A2D8655EE69C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		String_t* L_3 = __this->___triggerKey_12;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral01E18A3F9A449B16A38AA5F9BBAF02834C11C4EC);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral01E18A3F9A449B16A38AA5F9BBAF02834C11C4EC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		String_t* L_6 = __this->___triggerValue_13;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral3371C9C28E563AFD0A683CA126F078F3F07B7306);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3371C9C28E563AFD0A683CA126F078F3F07B7306);
		String_t* L_8;
		L_8 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_7, NULL);
		OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(__this, L_8, NULL);
		// OneSignal.Default.SetTrigger(triggerKey, triggerValue);
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_9;
		L_9 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		String_t* L_10 = __this->___triggerKey_12;
		String_t* L_11 = __this->___triggerValue_13;
		NullCheck(L_9);
		VirtualActionInvoker2< String_t*, String_t* >::Invoke(41 /* System.Void OneSignalSDK.OneSignal::SetTrigger(System.String,System.String) */, L_9, L_10, L_11);
		// }
		return;
	}
}
// System.Void OneSignalExampleBehaviour::GetTrigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour_GetTrigger_mD5D5A933134932939826092D53C079F704C54694 (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3371C9C28E563AFD0A683CA126F078F3F07B7306);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC05F7596C9C5943AD7F0DE9B4F51CE0FD5EE4B1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC889EBD1980D52693697F1CA52D3D8899B8AC82C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6156F26B1EF4E8EA695F8AF1541267DA0B30612);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// _log($"Getting trigger for key <b>{triggerKey}</b>");
		String_t* L_0 = __this->___triggerKey_12;
		String_t* L_1;
		L_1 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralC889EBD1980D52693697F1CA52D3D8899B8AC82C, L_0, _stringLiteral3371C9C28E563AFD0A683CA126F078F3F07B7306, NULL);
		OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(__this, L_1, NULL);
		// var value = OneSignal.Default.GetTrigger(triggerKey);
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_2;
		L_2 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		String_t* L_3 = __this->___triggerKey_12;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(45 /* System.String OneSignalSDK.OneSignal::GetTrigger(System.String) */, L_2, L_3);
		V_0 = L_4;
		// _log($"Trigger for key <b>{triggerKey}</b> is of value <b>{value}</b>");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralF6156F26B1EF4E8EA695F8AF1541267DA0B30612);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralF6156F26B1EF4E8EA695F8AF1541267DA0B30612);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		String_t* L_8 = __this->___triggerKey_12;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_7;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralC05F7596C9C5943AD7F0DE9B4F51CE0FD5EE4B1C);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralC05F7596C9C5943AD7F0DE9B4F51CE0FD5EE4B1C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_10;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral3371C9C28E563AFD0A683CA126F078F3F07B7306);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3371C9C28E563AFD0A683CA126F078F3F07B7306);
		String_t* L_13;
		L_13 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_12, NULL);
		OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(__this, L_13, NULL);
		// }
		return;
	}
}
// System.Void OneSignalExampleBehaviour::RemoveTrigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour_RemoveTrigger_mD8F3A2562D969449773E6389FC35CAC58BA715F5 (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3371C9C28E563AFD0A683CA126F078F3F07B7306);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral370C64F8FD477400A9AB233E14781A933F96CDEA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _log($"Removing trigger for key <b>{triggerKey}</b>");
		String_t* L_0 = __this->___triggerKey_12;
		String_t* L_1;
		L_1 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral370C64F8FD477400A9AB233E14781A933F96CDEA, L_0, _stringLiteral3371C9C28E563AFD0A683CA126F078F3F07B7306, NULL);
		OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(__this, L_1, NULL);
		// OneSignal.Default.RemoveTrigger(triggerKey);
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_2;
		L_2 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		String_t* L_3 = __this->___triggerKey_12;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(43 /* System.Void OneSignalSDK.OneSignal::RemoveTrigger(System.String) */, L_2, L_3);
		// }
		return;
	}
}
// System.Void OneSignalExampleBehaviour::GetTriggers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour_GetTriggers_m949E9EC8C4BE5B1CCE984E7E5DCF712514336BC4 (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BBF6AF94AA8E2DE8694CBCB4FCEA020B02D0DE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B0921B689C15DF7E54795FD35E744E54B70F187);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3371C9C28E563AFD0A683CA126F078F3F07B7306);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98D4D9A0151E67AF58F8A558B75A0FD72E609B00);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// _log("Getting all trigger keys and values");
		OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(__this, _stringLiteral2B0921B689C15DF7E54795FD35E744E54B70F187, NULL);
		// var triggers = OneSignal.Default.GetTriggers();
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_0;
		L_0 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		NullCheck(L_0);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1;
		L_1 = VirtualFuncInvoker0< Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* >::Invoke(46 /* System.Collections.Generic.Dictionary`2<System.String,System.String> OneSignalSDK.OneSignal::GetTriggers() */, L_0);
		// if (Json.Serialize(triggers) is string triggersString)
		String_t* L_2;
		L_2 = Json_Serialize_mA6BDF705EEE0769F09C6A3F8D5712884541A2B96(L_1, (bool)0, 2, NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		// _log($"Current triggers are <b>{triggersString}</b>");
		String_t* L_4 = V_0;
		String_t* L_5;
		L_5 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral0BBF6AF94AA8E2DE8694CBCB4FCEA020B02D0DE9, L_4, _stringLiteral3371C9C28E563AFD0A683CA126F078F3F07B7306, NULL);
		OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(__this, L_5, NULL);
		return;
	}

IL_0037:
	{
		// _error("Could not serialize triggers");
		OneSignalExampleBehaviour__error_mBB5177866C8A19120933543A7AC8F1CFD7E8C76F(__this, _stringLiteral98D4D9A0151E67AF58F8A558B75A0FD72E609B00, NULL);
		// }
		return;
	}
}
// System.Void OneSignalExampleBehaviour::ToggleInAppMessagesArePaused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour_ToggleInAppMessagesArePaused_m191D78E60D79BC1BB3D69DF138302A2ABB7ACF07 (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24EBAE03290BDB8A6D5FCFA0D0AF979A5B42BF1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _log($"Toggling InAppMessagesArePaused to <b>{!OneSignal.Default.InAppMessagesArePaused}</b>");
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_0;
		L_0 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(47 /* System.Boolean OneSignalSDK.OneSignal::get_InAppMessagesArePaused() */, L_0);
		bool L_2 = ((bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0));
		RuntimeObject* L_3 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral24EBAE03290BDB8A6D5FCFA0D0AF979A5B42BF1E, L_3, NULL);
		OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(__this, L_4, NULL);
		// OneSignal.Default.InAppMessagesArePaused = !OneSignal.Default.InAppMessagesArePaused;
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_5;
		L_5 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_6;
		L_6 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(47 /* System.Boolean OneSignalSDK.OneSignal::get_InAppMessagesArePaused() */, L_6);
		NullCheck(L_5);
		VirtualActionInvoker1< bool >::Invoke(48 /* System.Void OneSignalSDK.OneSignal::set_InAppMessagesArePaused(System.Boolean) */, L_5, (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0));
		// }
		return;
	}
}
// System.Void OneSignalExampleBehaviour::SetTag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour_SetTag_mA14CF3A69FECD8A1670A7B69651C5E26D31F4C2E (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CSetTagU3Ed__40_tAF8DC18D195FBDD30302D1E8800CB56488E5CA9E_m11DBFE60B3D9EBF9EFEFC30E47340DC9FABFC2D7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSetTagU3Ed__40_tAF8DC18D195FBDD30302D1E8800CB56488E5CA9E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CSetTagU3Ed__40_tAF8DC18D195FBDD30302D1E8800CB56488E5CA9E_m11DBFE60B3D9EBF9EFEFC30E47340DC9FABFC2D7(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CSetTagU3Ed__40_tAF8DC18D195FBDD30302D1E8800CB56488E5CA9E_m11DBFE60B3D9EBF9EFEFC30E47340DC9FABFC2D7_RuntimeMethod_var);
		return;
	}
}
// System.Void OneSignalExampleBehaviour::RemoveTag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour_RemoveTag_mA77C620F8B3EB168568B776DC1752CD8C1C1B528 (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CRemoveTagU3Ed__41_t7AEB7AF364BD362DEB85346FB50D7F97CE8D4753_mBD88CE89C1F92ED65444794E24B8A0F6E0DF6B4A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CRemoveTagU3Ed__41_t7AEB7AF364BD362DEB85346FB50D7F97CE8D4753 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CRemoveTagU3Ed__41_t7AEB7AF364BD362DEB85346FB50D7F97CE8D4753_mBD88CE89C1F92ED65444794E24B8A0F6E0DF6B4A(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CRemoveTagU3Ed__41_t7AEB7AF364BD362DEB85346FB50D7F97CE8D4753_mBD88CE89C1F92ED65444794E24B8A0F6E0DF6B4A_RuntimeMethod_var);
		return;
	}
}
// System.Void OneSignalExampleBehaviour::GetTags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour_GetTags_m3E876232A891FC802B2227B0855C39C06B192317 (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CGetTagsU3Ed__42_tFF697C520F01E869DF820DF93D382B3CADACB17D_mF458F6B5ADC75EAD89263E12A8BA9AB5457BDA69_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetTagsU3Ed__42_tFF697C520F01E869DF820DF93D382B3CADACB17D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CGetTagsU3Ed__42_tFF697C520F01E869DF820DF93D382B3CADACB17D_mF458F6B5ADC75EAD89263E12A8BA9AB5457BDA69(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CGetTagsU3Ed__42_tFF697C520F01E869DF820DF93D382B3CADACB17D_mF458F6B5ADC75EAD89263E12A8BA9AB5457BDA69_RuntimeMethod_var);
		return;
	}
}
// System.Void OneSignalExampleBehaviour::SetOutcome()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour_SetOutcome_m5983FC4883B2882A7E2EEAE08CF2FA125AD4B52B (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CSetOutcomeU3Ed__43_t6C5CDBF58F1BFC7D10523D2A10BE774563D35862_m2B24396082405351C119B1A85085F9B565011398_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSetOutcomeU3Ed__43_t6C5CDBF58F1BFC7D10523D2A10BE774563D35862 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CSetOutcomeU3Ed__43_t6C5CDBF58F1BFC7D10523D2A10BE774563D35862_m2B24396082405351C119B1A85085F9B565011398(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CSetOutcomeU3Ed__43_t6C5CDBF58F1BFC7D10523D2A10BE774563D35862_m2B24396082405351C119B1A85085F9B565011398_RuntimeMethod_var);
		return;
	}
}
// System.Void OneSignalExampleBehaviour::SetUniqueOutcome()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour_SetUniqueOutcome_m5E48EA884FF6BD8FB5F2E10EC462A209888503CF (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CSetUniqueOutcomeU3Ed__44_t2A820F14D89710D912DEA5E4824712CB32C612A5_mDDCD8516A595E788364A7B70E67CD4DC8318387B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSetUniqueOutcomeU3Ed__44_t2A820F14D89710D912DEA5E4824712CB32C612A5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CSetUniqueOutcomeU3Ed__44_t2A820F14D89710D912DEA5E4824712CB32C612A5_mDDCD8516A595E788364A7B70E67CD4DC8318387B(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CSetUniqueOutcomeU3Ed__44_t2A820F14D89710D912DEA5E4824712CB32C612A5_mDDCD8516A595E788364A7B70E67CD4DC8318387B_RuntimeMethod_var);
		return;
	}
}
// System.Void OneSignalExampleBehaviour::SetOutcomeWithValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour_SetOutcomeWithValue_m9932F91190F6D8964D97E2D39F56A09F5902806D (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CSetOutcomeWithValueU3Ed__45_t3972DDE673C352FC834CD3A9081C19845D97BF13_m50973F5AFEDFB1330E9DE8D07564476155049CDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSetOutcomeWithValueU3Ed__45_t3972DDE673C352FC834CD3A9081C19845D97BF13 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_mE6D291637BF7B4B6D3F8BFCA14920B9200D7A502(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CSetOutcomeWithValueU3Ed__45_t3972DDE673C352FC834CD3A9081C19845D97BF13_m50973F5AFEDFB1330E9DE8D07564476155049CDA(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CSetOutcomeWithValueU3Ed__45_t3972DDE673C352FC834CD3A9081C19845D97BF13_m50973F5AFEDFB1330E9DE8D07564476155049CDA_RuntimeMethod_var);
		return;
	}
}
// System.Void OneSignalExampleBehaviour::PromptLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour_PromptLocation_m635EEB54F1D4296ABC2ED2D228CFDA9FF22429DF (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34E2CD27F191CCD6FC6F9EE8F2A6E072EC492FD6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _log("Opening prompt to ask for user consent to access location");
		OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(__this, _stringLiteral34E2CD27F191CCD6FC6F9EE8F2A6E072EC492FD6, NULL);
		// OneSignal.Default.PromptLocation();
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_0;
		L_0 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(65 /* System.Void OneSignalSDK.OneSignal::PromptLocation() */, L_0);
		// }
		return;
	}
}
// System.Void OneSignalExampleBehaviour::ToggleShareLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour_ToggleShareLocation_m6EF0301170108D2AEF8F41C28B829E1C7EC35A47 (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral238C90044DC6465892B6F1AC14DBE2EF4B0A5653);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _log($"Toggling ShareLocation to <b>{!OneSignal.Default.ShareLocation}</b>");
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_0;
		L_0 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(66 /* System.Boolean OneSignalSDK.OneSignal::get_ShareLocation() */, L_0);
		bool L_2 = ((bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0));
		RuntimeObject* L_3 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral238C90044DC6465892B6F1AC14DBE2EF4B0A5653, L_3, NULL);
		OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(__this, L_4, NULL);
		// OneSignal.Default.ShareLocation = !OneSignal.Default.ShareLocation;
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_5;
		L_5 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_6;
		L_6 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(66 /* System.Boolean OneSignalSDK.OneSignal::get_ShareLocation() */, L_6);
		NullCheck(L_5);
		VirtualActionInvoker1< bool >::Invoke(67 /* System.Void OneSignalSDK.OneSignal::set_ShareLocation(System.Boolean) */, L_5, (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0));
		// }
		return;
	}
}
// System.Void OneSignalExampleBehaviour::ToggleLaunchURLsInApp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour_ToggleLaunchURLsInApp_m20D538E4FEC08874CD39BE5C8F949206262D6089 (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1B89E55AB4E0C9AD8A76F720AE7581B8774CB56);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _log($"Toggling LaunchURLsInApp to <b>{!launchURLsInApp}</b>");
		bool L_0 = __this->___launchURLsInApp_9;
		bool L_1 = ((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		RuntimeObject* L_2 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralA1B89E55AB4E0C9AD8A76F720AE7581B8774CB56, L_2, NULL);
		OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(__this, L_3, NULL);
		// launchURLsInApp = !launchURLsInApp;
		bool L_4 = __this->___launchURLsInApp_9;
		__this->___launchURLsInApp_9 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		// OneSignal.Default.SetLaunchURLsInApp(launchURLsInApp);
		OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_5;
		L_5 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
		bool L_6 = __this->___launchURLsInApp_9;
		NullCheck(L_5);
		VirtualActionInvoker1< bool >::Invoke(34 /* System.Void OneSignalSDK.OneSignal::SetLaunchURLsInApp(System.Boolean) */, L_5, L_6);
		// }
		return;
	}
}
// System.Void OneSignalExampleBehaviour::SetAppIdString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour_SetAppIdString_mFCFD70A21A752A185B151AB4D58357A9AB0AE4FA (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, String_t* ___newVal0, const RuntimeMethod* method) 
{
	{
		// public void SetAppIdString(string newVal) => appId = newVal;
		String_t* L_0 = ___newVal0;
		__this->___appId_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___appId_7), (void*)L_0);
		return;
	}
}
// System.Void OneSignalExampleBehaviour::SetExternalIdString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour_SetExternalIdString_m6CD0B1D2478F1351D710427969E027CA8A4BB107 (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, String_t* ___newVal0, const RuntimeMethod* method) 
{
	{
		// public void SetExternalIdString(string newVal) => externalId = newVal;
		String_t* L_0 = ___newVal0;
		__this->___externalId_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___externalId_5), (void*)L_0);
		return;
	}
}
// System.Void OneSignalExampleBehaviour::SetEmailString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour_SetEmailString_mB4404AE1CE23D97EE64C8166FC388DC5535FA8DB (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, String_t* ___newVal0, const RuntimeMethod* method) 
{
	{
		// public void SetEmailString(string newVal) => email = newVal;
		String_t* L_0 = ___newVal0;
		__this->___email_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___email_4), (void*)L_0);
		return;
	}
}
// System.Void OneSignalExampleBehaviour::SetPhoneNumberString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour_SetPhoneNumberString_mF169876D5FC1470FC244EFB426BC4D430D6BE49A (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, String_t* ___newVal0, const RuntimeMethod* method) 
{
	{
		// public void SetPhoneNumberString(string newVal) => phoneNumber = newVal;
		String_t* L_0 = ___newVal0;
		__this->___phoneNumber_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___phoneNumber_6), (void*)L_0);
		return;
	}
}
// System.Void OneSignalExampleBehaviour::SetTriggerKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour_SetTriggerKey_m0D62E0A043A5827E1C71907950AFDD999A851482 (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, String_t* ___newVal0, const RuntimeMethod* method) 
{
	{
		// public void SetTriggerKey(string newVal) => triggerKey = newVal;
		String_t* L_0 = ___newVal0;
		__this->___triggerKey_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___triggerKey_12), (void*)L_0);
		return;
	}
}
// System.Void OneSignalExampleBehaviour::SetTriggerValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour_SetTriggerValue_m792DAF8A9FFF4194852D75A298AB697CED23A569 (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, String_t* ___newVal0, const RuntimeMethod* method) 
{
	{
		// public void SetTriggerValue(string newVal) => triggerValue = newVal;
		String_t* L_0 = ___newVal0;
		__this->___triggerValue_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___triggerValue_13), (void*)L_0);
		return;
	}
}
// System.Void OneSignalExampleBehaviour::SetTagKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour_SetTagKey_m51CB56233B23EB00EBB3A40D9FCEA622B42477F4 (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, String_t* ___newVal0, const RuntimeMethod* method) 
{
	{
		// public void SetTagKey(string newVal) => tagKey = newVal;
		String_t* L_0 = ___newVal0;
		__this->___tagKey_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tagKey_10), (void*)L_0);
		return;
	}
}
// System.Void OneSignalExampleBehaviour::SetTagValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour_SetTagValue_m05703BDF02C06E9A9F3C5F87DDE65A72FF398B19 (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, String_t* ___newVal0, const RuntimeMethod* method) 
{
	{
		// public void SetTagValue(string newVal) => tagValue = newVal;
		String_t* L_0 = ___newVal0;
		__this->___tagValue_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tagValue_11), (void*)L_0);
		return;
	}
}
// System.Void OneSignalExampleBehaviour::SetOutcomeKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour_SetOutcomeKey_mC618F7B29EAF3F854374EEE6B6DDE72AF520EC87 (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, String_t* ___newVal0, const RuntimeMethod* method) 
{
	{
		// public void SetOutcomeKey(string newVal) => outcomeKey = newVal;
		String_t* L_0 = ___newVal0;
		__this->___outcomeKey_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___outcomeKey_14), (void*)L_0);
		return;
	}
}
// System.Void OneSignalExampleBehaviour::SetOutcomeValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour_SetOutcomeValue_mEF955C5543144777E73D71CD7C1205E4C90425A5 (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, String_t* ___newVal0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void SetOutcomeValue(string newVal) => outcomeValue = Convert.ToSingle(newVal);
		String_t* L_0 = ___newVal0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Convert_ToSingle_m70256FFD080CBD85CC41D705DFCBC77EC433D4FD(L_0, NULL);
		__this->___outcomeValue_15 = L_1;
		return;
	}
}
// System.Void OneSignalExampleBehaviour::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour_Awake_mCF40372FE2CB73522C03332CB02E3841C1299C00 (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignalExampleBehaviour__error_mBB5177866C8A19120933543A7AC8F1CFD7E8C76F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OneSignalExampleBehaviour__warn_m610DA22B8CC37355B21F3E1F41773675E528FF83_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SDKDebug.LogIntercept   += _log;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, __this, (intptr_t)((void*)OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD_RuntimeMethod_var), NULL);
		SDKDebug_add_LogIntercept_mC8383950F821E903035ED0CA387D2E73405110EF(L_0, NULL);
		// SDKDebug.WarnIntercept  += _warn;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_1, __this, (intptr_t)((void*)OneSignalExampleBehaviour__warn_m610DA22B8CC37355B21F3E1F41773675E528FF83_RuntimeMethod_var), NULL);
		SDKDebug_add_WarnIntercept_m1443CD0CE2AB0A8853E77AE7B9644D5D94A88BDB(L_1, NULL);
		// SDKDebug.ErrorIntercept += _error;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_2, __this, (intptr_t)((void*)OneSignalExampleBehaviour__error_mBB5177866C8A19120933543A7AC8F1CFD7E8C76F_RuntimeMethod_var), NULL);
		SDKDebug_add_ErrorIntercept_mD47A358068E0EB7F42B5A34DBE9E2F63A1A75535(L_2, NULL);
		// }
		return;
	}
}
// System.Void OneSignalExampleBehaviour::_log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB56E33E9E21F934078F51BA790FBC308076F4E51);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(message);
		RuntimeObject* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_0, NULL);
		// console.text += $"\n<color=green><b>I></b></color> {message}";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___console_16;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = L_1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_2);
		RuntimeObject* L_4 = ___message0;
		String_t* L_5;
		L_5 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralB56E33E9E21F934078F51BA790FBC308076F4E51, L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_3, L_5, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_6);
		// }
		return;
	}
}
// System.Void OneSignalExampleBehaviour::_warn(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour__warn_m610DA22B8CC37355B21F3E1F41773675E528FF83 (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFDAF368261DCE5DA9E4C7D2783ABAE10181189D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning(message);
		RuntimeObject* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_0, NULL);
		// console.text += $"\n<color=orange><b>W></b></color> {message}";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___console_16;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = L_1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_2);
		RuntimeObject* L_4 = ___message0;
		String_t* L_5;
		L_5 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralBFDAF368261DCE5DA9E4C7D2783ABAE10181189D, L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_3, L_5, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_6);
		// }
		return;
	}
}
// System.Void OneSignalExampleBehaviour::_error(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour__error_mBB5177866C8A19120933543A7AC8F1CFD7E8C76F (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, RuntimeObject* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05EA4FA781F4CF851462A10DA85876E1B3A5FA9B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogError(message);
		RuntimeObject* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_0, NULL);
		// console.text += $"\n<color=red><b>E></b></color> {message}";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___console_16;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = L_1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_2);
		RuntimeObject* L_4 = ___message0;
		String_t* L_5;
		L_5 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral05EA4FA781F4CF851462A10DA85876E1B3A5FA9B, L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_3, L_5, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_6);
		// }
		return;
	}
}
// System.Void OneSignalExampleBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneSignalExampleBehaviour__ctor_m362F5B7340DABD4E7013F9CB774123D5C285DB3F (OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void OneSignalExampleBehaviour/<SetEmail>d__29::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetEmailU3Ed__29_MoveNext_mBED3C5EDD38FC4F42B209953EC82DC754553445B (U3CSetEmailU3Ed__29_t4CF9DA5972E391F6DE8D065E93F5C4D4E3C40481* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetEmailU3Ed__29_t4CF9DA5972E391F6DE8D065E93F5C4D4E3C40481_m15E20F3826DE0E3EB935F353533782074D0933C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral292185FA1B3A3D76D09C5EE854838411E49EF6C3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37058CC42E9B61FFDC26545782AF5D43C57A006E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41F04453962CC28FD7D6EB3B17ADC495D5BA63F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF55A0F2D78B5C1CA9C28A3FB31C3BE5A1D06B1E8);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* V_1 = NULL;
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_006c_1;
			}
		}
		{
			// _log($"Calling SetEmail(<b>{email}</b>) and awaiting result...");
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_3 = V_1;
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_4 = V_1;
			NullCheck(L_4);
			String_t* L_5 = L_4->___email_4;
			String_t* L_6;
			L_6 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral292185FA1B3A3D76D09C5EE854838411E49EF6C3, L_5, _stringLiteral37058CC42E9B61FFDC26545782AF5D43C57A006E, NULL);
			NullCheck(L_3);
			OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(L_3, L_6, NULL);
			// var result = await OneSignal.Default.SetEmail(email);
			OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_7;
			L_7 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_8 = V_1;
			NullCheck(L_8);
			String_t* L_9 = L_8->___email_4;
			NullCheck(L_7);
			Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_10;
			L_10 = VirtualFuncInvoker2< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, String_t*, String_t* >::Invoke(55 /* System.Threading.Tasks.Task`1<System.Boolean> OneSignalSDK.OneSignal::SetEmail(System.String,System.String) */, L_7, L_9, (String_t*)NULL);
			NullCheck(L_10);
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_11;
			L_11 = Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935(L_10, Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
			V_2 = L_11;
			bool L_12;
			L_12 = TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9((&V_2), TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0088_1;
			}
		}
		{
			int32_t L_13 = 0;
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_14 = V_2;
			__this->___U3CU3Eu__1_3 = L_14;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_15 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetEmailU3Ed__29_t4CF9DA5972E391F6DE8D065E93F5C4D4E3C40481_m15E20F3826DE0E3EB935F353533782074D0933C6(L_15, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetEmailU3Ed__29_t4CF9DA5972E391F6DE8D065E93F5C4D4E3C40481_m15E20F3826DE0E3EB935F353533782074D0933C6_RuntimeMethod_var);
			goto IL_00d5;
		}

IL_006c_1:
		{
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_16 = __this->___U3CU3Eu__1_3;
			V_2 = L_16;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* L_17 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_17, sizeof(TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35));
			int32_t L_18 = (-1);
			V_0 = L_18;
			__this->___U3CU3E1__state_0 = L_18;
		}

IL_0088_1:
		{
			bool L_19;
			L_19 = TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B((&V_2), TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
			// if (result)
			if (!L_19)
			{
				goto IL_009e_1;
			}
		}
		{
			// _log("Set succeeded");
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_20 = V_1;
			NullCheck(L_20);
			OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(L_20, _stringLiteral41F04453962CC28FD7D6EB3B17ADC495D5BA63F3, NULL);
			goto IL_00a9_1;
		}

IL_009e_1:
		{
			// _error("Set failed");
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_21 = V_1;
			NullCheck(L_21);
			OneSignalExampleBehaviour__error_mBB5177866C8A19120933543A7AC8F1CFD7E8C76F(L_21, _stringLiteralF55A0F2D78B5C1CA9C28A3FB31C3BE5A1D06B1E8, NULL);
		}

IL_00a9_1:
		{
			goto IL_00c2;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ab;
		}
		throw e;
	}

CATCH_00ab:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_22 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_23 = V_3;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_22, L_23, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00d5;
	}// end catch (depth: 1)

IL_00c2:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_24 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_24, NULL);
	}

IL_00d5:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSetEmailU3Ed__29_MoveNext_mBED3C5EDD38FC4F42B209953EC82DC754553445B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSetEmailU3Ed__29_t4CF9DA5972E391F6DE8D065E93F5C4D4E3C40481* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSetEmailU3Ed__29_t4CF9DA5972E391F6DE8D065E93F5C4D4E3C40481*>(__this + _offset);
	U3CSetEmailU3Ed__29_MoveNext_mBED3C5EDD38FC4F42B209953EC82DC754553445B(_thisAdjusted, method);
}
// System.Void OneSignalExampleBehaviour/<SetEmail>d__29::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetEmailU3Ed__29_SetStateMachine_m3D8EC364422C275061A1EC4A6D1ED316E3774178 (U3CSetEmailU3Ed__29_t4CF9DA5972E391F6DE8D065E93F5C4D4E3C40481* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSetEmailU3Ed__29_SetStateMachine_m3D8EC364422C275061A1EC4A6D1ED316E3774178_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CSetEmailU3Ed__29_t4CF9DA5972E391F6DE8D065E93F5C4D4E3C40481* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSetEmailU3Ed__29_t4CF9DA5972E391F6DE8D065E93F5C4D4E3C40481*>(__this + _offset);
	U3CSetEmailU3Ed__29_SetStateMachine_m3D8EC364422C275061A1EC4A6D1ED316E3774178(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void OneSignalExampleBehaviour/<SetExternalId>d__30::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetExternalIdU3Ed__30_MoveNext_m89FF1891E646CD647541CBB8B2C26D148C99F135 (U3CSetExternalIdU3Ed__30_t2718EEF57C253F31438936208C113AAE7CF2C151* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetExternalIdU3Ed__30_t2718EEF57C253F31438936208C113AAE7CF2C151_mDCB4536C0C3F81A2649DE4B4D8586F7AC23E0759_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37058CC42E9B61FFDC26545782AF5D43C57A006E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41F04453962CC28FD7D6EB3B17ADC495D5BA63F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E65884974ADFD1C18B802BD18F19E1B39D362FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF55A0F2D78B5C1CA9C28A3FB31C3BE5A1D06B1E8);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* V_1 = NULL;
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_006c_1;
			}
		}
		{
			// _log($"Calling SetExternalUserId(<b>{externalId}</b>) and awaiting result...");
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_3 = V_1;
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_4 = V_1;
			NullCheck(L_4);
			String_t* L_5 = L_4->___externalId_5;
			String_t* L_6;
			L_6 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral7E65884974ADFD1C18B802BD18F19E1B39D362FB, L_5, _stringLiteral37058CC42E9B61FFDC26545782AF5D43C57A006E, NULL);
			NullCheck(L_3);
			OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(L_3, L_6, NULL);
			// var result = await OneSignal.Default.SetExternalUserId(externalId);
			OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_7;
			L_7 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_8 = V_1;
			NullCheck(L_8);
			String_t* L_9 = L_8->___externalId_5;
			NullCheck(L_7);
			Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_10;
			L_10 = VirtualFuncInvoker2< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, String_t*, String_t* >::Invoke(54 /* System.Threading.Tasks.Task`1<System.Boolean> OneSignalSDK.OneSignal::SetExternalUserId(System.String,System.String) */, L_7, L_9, (String_t*)NULL);
			NullCheck(L_10);
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_11;
			L_11 = Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935(L_10, Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
			V_2 = L_11;
			bool L_12;
			L_12 = TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9((&V_2), TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0088_1;
			}
		}
		{
			int32_t L_13 = 0;
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_14 = V_2;
			__this->___U3CU3Eu__1_3 = L_14;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_15 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetExternalIdU3Ed__30_t2718EEF57C253F31438936208C113AAE7CF2C151_mDCB4536C0C3F81A2649DE4B4D8586F7AC23E0759(L_15, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetExternalIdU3Ed__30_t2718EEF57C253F31438936208C113AAE7CF2C151_mDCB4536C0C3F81A2649DE4B4D8586F7AC23E0759_RuntimeMethod_var);
			goto IL_00d5;
		}

IL_006c_1:
		{
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_16 = __this->___U3CU3Eu__1_3;
			V_2 = L_16;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* L_17 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_17, sizeof(TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35));
			int32_t L_18 = (-1);
			V_0 = L_18;
			__this->___U3CU3E1__state_0 = L_18;
		}

IL_0088_1:
		{
			bool L_19;
			L_19 = TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B((&V_2), TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
			// if (result)
			if (!L_19)
			{
				goto IL_009e_1;
			}
		}
		{
			// _log("Set succeeded");
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_20 = V_1;
			NullCheck(L_20);
			OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(L_20, _stringLiteral41F04453962CC28FD7D6EB3B17ADC495D5BA63F3, NULL);
			goto IL_00a9_1;
		}

IL_009e_1:
		{
			// _error("Set failed");
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_21 = V_1;
			NullCheck(L_21);
			OneSignalExampleBehaviour__error_mBB5177866C8A19120933543A7AC8F1CFD7E8C76F(L_21, _stringLiteralF55A0F2D78B5C1CA9C28A3FB31C3BE5A1D06B1E8, NULL);
		}

IL_00a9_1:
		{
			goto IL_00c2;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ab;
		}
		throw e;
	}

CATCH_00ab:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_22 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_23 = V_3;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_22, L_23, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00d5;
	}// end catch (depth: 1)

IL_00c2:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_24 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_24, NULL);
	}

IL_00d5:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSetExternalIdU3Ed__30_MoveNext_m89FF1891E646CD647541CBB8B2C26D148C99F135_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSetExternalIdU3Ed__30_t2718EEF57C253F31438936208C113AAE7CF2C151* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSetExternalIdU3Ed__30_t2718EEF57C253F31438936208C113AAE7CF2C151*>(__this + _offset);
	U3CSetExternalIdU3Ed__30_MoveNext_m89FF1891E646CD647541CBB8B2C26D148C99F135(_thisAdjusted, method);
}
// System.Void OneSignalExampleBehaviour/<SetExternalId>d__30::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetExternalIdU3Ed__30_SetStateMachine_m3CCAF6C00735C968C694B2C531A741E76469A9EA (U3CSetExternalIdU3Ed__30_t2718EEF57C253F31438936208C113AAE7CF2C151* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSetExternalIdU3Ed__30_SetStateMachine_m3CCAF6C00735C968C694B2C531A741E76469A9EA_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CSetExternalIdU3Ed__30_t2718EEF57C253F31438936208C113AAE7CF2C151* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSetExternalIdU3Ed__30_t2718EEF57C253F31438936208C113AAE7CF2C151*>(__this + _offset);
	U3CSetExternalIdU3Ed__30_SetStateMachine_m3CCAF6C00735C968C694B2C531A741E76469A9EA(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void OneSignalExampleBehaviour/<SetSMSNumber>d__31::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetSMSNumberU3Ed__31_MoveNext_m2E837F2FAFF380189C836C593E5CFB5263D188C7 (U3CSetSMSNumberU3Ed__31_tA65B67E5A444829D4BF816884D4935C22CA6D816* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetSMSNumberU3Ed__31_tA65B67E5A444829D4BF816884D4935C22CA6D816_m9AAC63C4C4A76376433358F24930780786B4E5FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37058CC42E9B61FFDC26545782AF5D43C57A006E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41F04453962CC28FD7D6EB3B17ADC495D5BA63F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral665BBCF4E30C5DE47C2BA6AF9241BC8139E1129F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF55A0F2D78B5C1CA9C28A3FB31C3BE5A1D06B1E8);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* V_1 = NULL;
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_006c_1;
			}
		}
		{
			// _log($"Calling SetSMSNumber(<b>{phoneNumber}</b>) and awaiting result...");
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_3 = V_1;
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_4 = V_1;
			NullCheck(L_4);
			String_t* L_5 = L_4->___phoneNumber_6;
			String_t* L_6;
			L_6 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral665BBCF4E30C5DE47C2BA6AF9241BC8139E1129F, L_5, _stringLiteral37058CC42E9B61FFDC26545782AF5D43C57A006E, NULL);
			NullCheck(L_3);
			OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(L_3, L_6, NULL);
			// var result = await OneSignal.Default.SetSMSNumber(phoneNumber);
			OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_7;
			L_7 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_8 = V_1;
			NullCheck(L_8);
			String_t* L_9 = L_8->___phoneNumber_6;
			NullCheck(L_7);
			Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_10;
			L_10 = VirtualFuncInvoker2< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, String_t*, String_t* >::Invoke(56 /* System.Threading.Tasks.Task`1<System.Boolean> OneSignalSDK.OneSignal::SetSMSNumber(System.String,System.String) */, L_7, L_9, (String_t*)NULL);
			NullCheck(L_10);
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_11;
			L_11 = Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935(L_10, Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
			V_2 = L_11;
			bool L_12;
			L_12 = TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9((&V_2), TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0088_1;
			}
		}
		{
			int32_t L_13 = 0;
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_14 = V_2;
			__this->___U3CU3Eu__1_3 = L_14;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_15 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetSMSNumberU3Ed__31_tA65B67E5A444829D4BF816884D4935C22CA6D816_m9AAC63C4C4A76376433358F24930780786B4E5FA(L_15, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetSMSNumberU3Ed__31_tA65B67E5A444829D4BF816884D4935C22CA6D816_m9AAC63C4C4A76376433358F24930780786B4E5FA_RuntimeMethod_var);
			goto IL_00d5;
		}

IL_006c_1:
		{
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_16 = __this->___U3CU3Eu__1_3;
			V_2 = L_16;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* L_17 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_17, sizeof(TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35));
			int32_t L_18 = (-1);
			V_0 = L_18;
			__this->___U3CU3E1__state_0 = L_18;
		}

IL_0088_1:
		{
			bool L_19;
			L_19 = TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B((&V_2), TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
			// if (result)
			if (!L_19)
			{
				goto IL_009e_1;
			}
		}
		{
			// _log("Set succeeded");
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_20 = V_1;
			NullCheck(L_20);
			OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(L_20, _stringLiteral41F04453962CC28FD7D6EB3B17ADC495D5BA63F3, NULL);
			goto IL_00a9_1;
		}

IL_009e_1:
		{
			// _error("Set failed");
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_21 = V_1;
			NullCheck(L_21);
			OneSignalExampleBehaviour__error_mBB5177866C8A19120933543A7AC8F1CFD7E8C76F(L_21, _stringLiteralF55A0F2D78B5C1CA9C28A3FB31C3BE5A1D06B1E8, NULL);
		}

IL_00a9_1:
		{
			goto IL_00c2;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ab;
		}
		throw e;
	}

CATCH_00ab:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_22 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_23 = V_3;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_22, L_23, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00d5;
	}// end catch (depth: 1)

IL_00c2:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_24 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_24, NULL);
	}

IL_00d5:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSetSMSNumberU3Ed__31_MoveNext_m2E837F2FAFF380189C836C593E5CFB5263D188C7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSetSMSNumberU3Ed__31_tA65B67E5A444829D4BF816884D4935C22CA6D816* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSetSMSNumberU3Ed__31_tA65B67E5A444829D4BF816884D4935C22CA6D816*>(__this + _offset);
	U3CSetSMSNumberU3Ed__31_MoveNext_m2E837F2FAFF380189C836C593E5CFB5263D188C7(_thisAdjusted, method);
}
// System.Void OneSignalExampleBehaviour/<SetSMSNumber>d__31::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetSMSNumberU3Ed__31_SetStateMachine_mB7DAEB3A97238AD45D4D9CF4B5C552461717AAF8 (U3CSetSMSNumberU3Ed__31_tA65B67E5A444829D4BF816884D4935C22CA6D816* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSetSMSNumberU3Ed__31_SetStateMachine_mB7DAEB3A97238AD45D4D9CF4B5C552461717AAF8_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CSetSMSNumberU3Ed__31_tA65B67E5A444829D4BF816884D4935C22CA6D816* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSetSMSNumberU3Ed__31_tA65B67E5A444829D4BF816884D4935C22CA6D816*>(__this + _offset);
	U3CSetSMSNumberU3Ed__31_SetStateMachine_mB7DAEB3A97238AD45D4D9CF4B5C552461717AAF8(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void OneSignalExampleBehaviour/<PromptForPush>d__32::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPromptForPushU3Ed__32_MoveNext_m6713B4499DE18B08864F8BD22B4B0493530E24DB (U3CPromptForPushU3Ed__32_tD96C472B2DE51806095A83998F06B4FB970879BE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tBA7C35931A46ACA0D7DAFDD9ADBD6EE93BE13E89_TisU3CPromptForPushU3Ed__32_tD96C472B2DE51806095A83998F06B4FB970879BE_m236D1FFD167D74B5CD93B4EF665036160037D3AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotificationPermission_tFF856FEAB362EF437681DC4A1745FB7BF161B7E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m792FD4AB6970F6E178E87D95DCFC4C628BE398FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m33D07F1A430C77959059ECF761C0549E46E2082C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m99BB27A072DB7B04720F4CB5B07C8CC281E9E46E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43BD430A9BFC2D931C150678B384E3CD692D783F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA268A460B4B8D5774B2921F29120B2253A1EB39);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* V_1 = NULL;
	int32_t V_2 = 0;
	TaskAwaiter_1_tBA7C35931A46ACA0D7DAFDD9ADBD6EE93BE13E89 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0055_1;
			}
		}
		{
			// _log("Calling PromptForPushNotificationsWithUserResponse and awaiting result...");
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_3 = V_1;
			NullCheck(L_3);
			OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(L_3, _stringLiteralDA268A460B4B8D5774B2921F29120B2253A1EB39, NULL);
			// var result = await OneSignal.Default.PromptForPushNotificationsWithUserResponse();
			OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_4;
			L_4 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
			NullCheck(L_4);
			Task_1_tBF748A8FE17A296106F783D16AB4C0F3FE904C1A* L_5;
			L_5 = VirtualFuncInvoker0< Task_1_tBF748A8FE17A296106F783D16AB4C0F3FE904C1A* >::Invoke(36 /* System.Threading.Tasks.Task`1<OneSignalSDK.NotificationPermission> OneSignalSDK.OneSignal::PromptForPushNotificationsWithUserResponse() */, L_4);
			NullCheck(L_5);
			TaskAwaiter_1_tBA7C35931A46ACA0D7DAFDD9ADBD6EE93BE13E89 L_6;
			L_6 = Task_1_GetAwaiter_m99BB27A072DB7B04720F4CB5B07C8CC281E9E46E(L_5, Task_1_GetAwaiter_m99BB27A072DB7B04720F4CB5B07C8CC281E9E46E_RuntimeMethod_var);
			V_3 = L_6;
			bool L_7;
			L_7 = TaskAwaiter_1_get_IsCompleted_m33D07F1A430C77959059ECF761C0549E46E2082C((&V_3), TaskAwaiter_1_get_IsCompleted_m33D07F1A430C77959059ECF761C0549E46E2082C_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0071_1;
			}
		}
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->___U3CU3E1__state_0 = L_8;
			TaskAwaiter_1_tBA7C35931A46ACA0D7DAFDD9ADBD6EE93BE13E89 L_9 = V_3;
			__this->___U3CU3Eu__1_3 = L_9;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_10 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tBA7C35931A46ACA0D7DAFDD9ADBD6EE93BE13E89_TisU3CPromptForPushU3Ed__32_tD96C472B2DE51806095A83998F06B4FB970879BE_m236D1FFD167D74B5CD93B4EF665036160037D3AA(L_10, (&V_3), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tBA7C35931A46ACA0D7DAFDD9ADBD6EE93BE13E89_TisU3CPromptForPushU3Ed__32_tD96C472B2DE51806095A83998F06B4FB970879BE_m236D1FFD167D74B5CD93B4EF665036160037D3AA_RuntimeMethod_var);
			goto IL_00bd;
		}

IL_0055_1:
		{
			TaskAwaiter_1_tBA7C35931A46ACA0D7DAFDD9ADBD6EE93BE13E89 L_11 = __this->___U3CU3Eu__1_3;
			V_3 = L_11;
			TaskAwaiter_1_tBA7C35931A46ACA0D7DAFDD9ADBD6EE93BE13E89* L_12 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_1_tBA7C35931A46ACA0D7DAFDD9ADBD6EE93BE13E89));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
		}

IL_0071_1:
		{
			int32_t L_14;
			L_14 = TaskAwaiter_1_GetResult_m792FD4AB6970F6E178E87D95DCFC4C628BE398FA((&V_3), TaskAwaiter_1_GetResult_m792FD4AB6970F6E178E87D95DCFC4C628BE398FA_RuntimeMethod_var);
			V_2 = L_14;
			// _log($"Prompt completed with <b>{result}</b>");
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_15 = V_1;
			int32_t L_16 = V_2;
			int32_t L_17 = L_16;
			RuntimeObject* L_18 = Box(NotificationPermission_tFF856FEAB362EF437681DC4A1745FB7BF161B7E2_il2cpp_TypeInfo_var, &L_17);
			String_t* L_19;
			L_19 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral43BD430A9BFC2D931C150678B384E3CD692D783F, L_18, NULL);
			NullCheck(L_15);
			OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(L_15, L_19, NULL);
			goto IL_00aa;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0091;
		}
		throw e;
	}

CATCH_0091:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_20 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_21 = V_4;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_20, L_21, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00bd;
	}// end catch (depth: 1)

IL_00aa:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_22 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_22, NULL);
	}

IL_00bd:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CPromptForPushU3Ed__32_MoveNext_m6713B4499DE18B08864F8BD22B4B0493530E24DB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CPromptForPushU3Ed__32_tD96C472B2DE51806095A83998F06B4FB970879BE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CPromptForPushU3Ed__32_tD96C472B2DE51806095A83998F06B4FB970879BE*>(__this + _offset);
	U3CPromptForPushU3Ed__32_MoveNext_m6713B4499DE18B08864F8BD22B4B0493530E24DB(_thisAdjusted, method);
}
// System.Void OneSignalExampleBehaviour/<PromptForPush>d__32::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPromptForPushU3Ed__32_SetStateMachine_mEE67C79C4F1C9151067A48F72C3BDCF2FA37D7C6 (U3CPromptForPushU3Ed__32_tD96C472B2DE51806095A83998F06B4FB970879BE* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CPromptForPushU3Ed__32_SetStateMachine_mEE67C79C4F1C9151067A48F72C3BDCF2FA37D7C6_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CPromptForPushU3Ed__32_tD96C472B2DE51806095A83998F06B4FB970879BE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CPromptForPushU3Ed__32_tD96C472B2DE51806095A83998F06B4FB970879BE*>(__this + _offset);
	U3CPromptForPushU3Ed__32_SetStateMachine_mEE67C79C4F1C9151067A48F72C3BDCF2FA37D7C6(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void OneSignalExampleBehaviour/<SendPushToSelf>d__34::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendPushToSelfU3Ed__34_MoveNext_m1A2D7B0D1B8AE3C6EF1D4181AFED63A0CDE10CC7 (U3CSendPushToSelfU3Ed__34_t20E220D79859C5CAD3FBA52DC7486F7037F0690A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t939447628654858A359A8B2688412DA89ED1880E_TisU3CSendPushToSelfU3Ed__34_t20E220D79859C5CAD3FBA52DC7486F7037F0690A_m8E65B345453C2AE6D993AD9A92CE40E30DC6F718_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m45C5A6D6235044C234D76E0FCB9BCC713A6C1466_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m10C09632D054960F02FE89952251398BF73209E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m98B37C463C293DC8A9D3B154B5450F133FF38C02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26406FA21D3AC7C6FE6934854AEF60C07AC72FEC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32708FE7DFB1D8249B68CFDAD3215A7190F52F40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3371C9C28E563AFD0A683CA126F078F3F07B7306);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51B9A921875B50DC2E745884E0F3B09DFCFEA44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EB18F22CDC728EF9A307F2E328C717D7C4237AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EE187A1DFB6C7E24E0162931104A8F2CE585643);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4E6F511AC94C7E416783A4F0B369C86577A38F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB89B20539112431A0728493D637050AA65DCA08F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6DE535D828F30C374EB3BE3FFDE520228FC3096);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE540A7C06A02CB855DBBB798039B2652B550F2C7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* V_1 = NULL;
	String_t* V_2 = NULL;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_3 = NULL;
	String_t* V_4 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_5;
	memset((&V_5), 0, sizeof(V_5));
	TaskAwaiter_1_t939447628654858A359A8B2688412DA89ED1880E V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00e4_1;
			}
		}
		{
			// _log("Sending push notification to this device via PostNotification...");
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_3 = V_1;
			NullCheck(L_3);
			OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(L_3, _stringLiteral26406FA21D3AC7C6FE6934854AEF60C07AC72FEC, NULL);
			// var pushId = OneSignal.Default.PushSubscriptionState.userId;
			OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_4;
			L_4 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
			NullCheck(L_4);
			PushSubscriptionState_tCC90B16EE861FADF35E5D4164A486E98EA96A635* L_5;
			L_5 = VirtualFuncInvoker0< PushSubscriptionState_tCC90B16EE861FADF35E5D4164A486E98EA96A635* >::Invoke(62 /* OneSignalSDK.PushSubscriptionState OneSignalSDK.OneSignal::get_PushSubscriptionState() */, L_4);
			NullCheck(L_5);
			String_t* L_6 = L_5->___userId_0;
			V_2 = L_6;
			// var pushOptions = new Dictionary<string, object> {
			//     ["contents"] = new Dictionary<string, string> {
			//         ["en"] = "Test Message"
			//     },
			// 
			//     // Send notification to this user
			//     ["include_player_ids"] = new List<string> { pushId },
			// 
			//     // Example of scheduling a notification in the future
			//     ["send_after"] = DateTime.Now.ToUniversalTime().AddSeconds(30).ToString("U")
			// };
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_7 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_7, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_8 = L_7;
			Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_9 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
			NullCheck(L_9);
			Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_9, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
			Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_10 = L_9;
			NullCheck(L_10);
			Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_10, _stringLiteralC6DE535D828F30C374EB3BE3FFDE520228FC3096, _stringLiteral32708FE7DFB1D8249B68CFDAD3215A7190F52F40, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
			NullCheck(L_8);
			Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341(L_8, _stringLiteral9EE187A1DFB6C7E24E0162931104A8F2CE585643, L_10, Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_11 = L_8;
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
			NullCheck(L_12);
			List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_12, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
			List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_13 = L_12;
			String_t* L_14 = V_2;
			NullCheck(L_13);
			List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_13, L_14, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
			NullCheck(L_11);
			Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341(L_11, _stringLiteral6EB18F22CDC728EF9A307F2E328C717D7C4237AB, L_13, Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_15 = L_11;
			il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
			DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_16;
			L_16 = DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0(NULL);
			V_5 = L_16;
			DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_17;
			L_17 = DateTime_ToUniversalTime_m52CA1EAD0BE0A357BCACC38747ECA4A8810155A9((&V_5), NULL);
			V_5 = L_17;
			DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_18;
			L_18 = DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81((&V_5), (30.0), NULL);
			V_5 = L_18;
			String_t* L_19;
			L_19 = DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78((&V_5), _stringLiteral51B9A921875B50DC2E745884E0F3B09DFCFEA44A, NULL);
			NullCheck(L_15);
			Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341(L_15, _stringLiteralB89B20539112431A0728493D637050AA65DCA08F, L_19, Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
			V_3 = L_15;
			// var result = await OneSignal.Default.PostNotification(pushOptions);
			OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_20;
			L_20 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_21 = V_3;
			NullCheck(L_20);
			Task_1_tE10B49C177D26DA80EFCDC3EC380E30315F5B322* L_22;
			L_22 = VirtualFuncInvoker1< Task_1_tE10B49C177D26DA80EFCDC3EC380E30315F5B322*, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* >::Invoke(40 /* System.Threading.Tasks.Task`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>> OneSignalSDK.OneSignal::PostNotification(System.Collections.Generic.Dictionary`2<System.String,System.Object>) */, L_20, L_21);
			NullCheck(L_22);
			TaskAwaiter_1_t939447628654858A359A8B2688412DA89ED1880E L_23;
			L_23 = Task_1_GetAwaiter_m98B37C463C293DC8A9D3B154B5450F133FF38C02(L_22, Task_1_GetAwaiter_m98B37C463C293DC8A9D3B154B5450F133FF38C02_RuntimeMethod_var);
			V_6 = L_23;
			bool L_24;
			L_24 = TaskAwaiter_1_get_IsCompleted_m10C09632D054960F02FE89952251398BF73209E7((&V_6), TaskAwaiter_1_get_IsCompleted_m10C09632D054960F02FE89952251398BF73209E7_RuntimeMethod_var);
			if (L_24)
			{
				goto IL_0101_1;
			}
		}
		{
			int32_t L_25 = 0;
			V_0 = L_25;
			__this->___U3CU3E1__state_0 = L_25;
			TaskAwaiter_1_t939447628654858A359A8B2688412DA89ED1880E L_26 = V_6;
			__this->___U3CU3Eu__1_3 = L_26;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_27 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t939447628654858A359A8B2688412DA89ED1880E_TisU3CSendPushToSelfU3Ed__34_t20E220D79859C5CAD3FBA52DC7486F7037F0690A_m8E65B345453C2AE6D993AD9A92CE40E30DC6F718(L_27, (&V_6), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t939447628654858A359A8B2688412DA89ED1880E_TisU3CSendPushToSelfU3Ed__34_t20E220D79859C5CAD3FBA52DC7486F7037F0690A_m8E65B345453C2AE6D993AD9A92CE40E30DC6F718_RuntimeMethod_var);
			goto IL_0167;
		}

IL_00e4_1:
		{
			TaskAwaiter_1_t939447628654858A359A8B2688412DA89ED1880E L_28 = __this->___U3CU3Eu__1_3;
			V_6 = L_28;
			TaskAwaiter_1_t939447628654858A359A8B2688412DA89ED1880E* L_29 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_29, sizeof(TaskAwaiter_1_t939447628654858A359A8B2688412DA89ED1880E));
			int32_t L_30 = (-1);
			V_0 = L_30;
			__this->___U3CU3E1__state_0 = L_30;
		}

IL_0101_1:
		{
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_31;
			L_31 = TaskAwaiter_1_GetResult_m45C5A6D6235044C234D76E0FCB9BCC713A6C1466((&V_6), TaskAwaiter_1_GetResult_m45C5A6D6235044C234D76E0FCB9BCC713A6C1466_RuntimeMethod_var);
			// if (Json.Serialize(result) is string resultString)
			String_t* L_32;
			L_32 = Json_Serialize_mA6BDF705EEE0769F09C6A3F8D5712884541A2B96(L_31, (bool)0, 2, NULL);
			V_4 = L_32;
			String_t* L_33 = V_4;
			if (!L_33)
			{
				goto IL_012e_1;
			}
		}
		{
			// _log($"Notification sent with result <b>{resultString}</b>");
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_34 = V_1;
			String_t* L_35 = V_4;
			String_t* L_36;
			L_36 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralA4E6F511AC94C7E416783A4F0B369C86577A38F8, L_35, _stringLiteral3371C9C28E563AFD0A683CA126F078F3F07B7306, NULL);
			NullCheck(L_34);
			OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(L_34, L_36, NULL);
			goto IL_0139_1;
		}

IL_012e_1:
		{
			// _error("Could not serialize result of PostNotification");
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_37 = V_1;
			NullCheck(L_37);
			OneSignalExampleBehaviour__error_mBB5177866C8A19120933543A7AC8F1CFD7E8C76F(L_37, _stringLiteralE540A7C06A02CB855DBBB798039B2652B550F2C7, NULL);
		}

IL_0139_1:
		{
			goto IL_0154;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_013b;
		}
		throw e;
	}

CATCH_013b:
	{// begin catch(System.Exception)
		V_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_38 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_39 = V_7;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_38, L_39, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0167;
	}// end catch (depth: 1)

IL_0154:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_40 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_40, NULL);
	}

IL_0167:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendPushToSelfU3Ed__34_MoveNext_m1A2D7B0D1B8AE3C6EF1D4181AFED63A0CDE10CC7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSendPushToSelfU3Ed__34_t20E220D79859C5CAD3FBA52DC7486F7037F0690A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendPushToSelfU3Ed__34_t20E220D79859C5CAD3FBA52DC7486F7037F0690A*>(__this + _offset);
	U3CSendPushToSelfU3Ed__34_MoveNext_m1A2D7B0D1B8AE3C6EF1D4181AFED63A0CDE10CC7(_thisAdjusted, method);
}
// System.Void OneSignalExampleBehaviour/<SendPushToSelf>d__34::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendPushToSelfU3Ed__34_SetStateMachine_m94221C2A66561CAD4F11CDA00B0730AA361BAC12 (U3CSendPushToSelfU3Ed__34_t20E220D79859C5CAD3FBA52DC7486F7037F0690A* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSendPushToSelfU3Ed__34_SetStateMachine_m94221C2A66561CAD4F11CDA00B0730AA361BAC12_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CSendPushToSelfU3Ed__34_t20E220D79859C5CAD3FBA52DC7486F7037F0690A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSendPushToSelfU3Ed__34_t20E220D79859C5CAD3FBA52DC7486F7037F0690A*>(__this + _offset);
	U3CSendPushToSelfU3Ed__34_SetStateMachine_m94221C2A66561CAD4F11CDA00B0730AA361BAC12(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void OneSignalExampleBehaviour/<SetTag>d__40::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetTagU3Ed__40_MoveNext_mF9D2E176A1C3903361B06301DA66FBEE333BEB63 (U3CSetTagU3Ed__40_tAF8DC18D195FBDD30302D1E8800CB56488E5CA9E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetTagU3Ed__40_tAF8DC18D195FBDD30302D1E8800CB56488E5CA9E_m07F657EA210318028CCD6E0A86186D81FA14A2C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01E18A3F9A449B16A38AA5F9BBAF02834C11C4EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15F56C099E093B8F63CF37C0C2EAD33A65F14539);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41F04453962CC28FD7D6EB3B17ADC495D5BA63F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79AD6030ED20C82B46AF955D4F885785A1BA75F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF55A0F2D78B5C1CA9C28A3FB31C3BE5A1D06B1E8);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* V_1 = NULL;
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0094_1;
			}
		}
		{
			// _log($"Setting tag with key <b>{tagKey}</b> and value <b>{tagValue}</b> and awaiting result...");
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_3 = V_1;
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
			NullCheck(L_5);
			ArrayElementTypeCheck (L_5, _stringLiteral15F56C099E093B8F63CF37C0C2EAD33A65F14539);
			(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral15F56C099E093B8F63CF37C0C2EAD33A65F14539);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_7 = V_1;
			NullCheck(L_7);
			String_t* L_8 = L_7->___tagKey_10;
			NullCheck(L_6);
			ArrayElementTypeCheck (L_6, L_8);
			(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_8);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_6;
			NullCheck(L_9);
			ArrayElementTypeCheck (L_9, _stringLiteral01E18A3F9A449B16A38AA5F9BBAF02834C11C4EC);
			(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral01E18A3F9A449B16A38AA5F9BBAF02834C11C4EC);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_11 = V_1;
			NullCheck(L_11);
			String_t* L_12 = L_11->___tagValue_11;
			NullCheck(L_10);
			ArrayElementTypeCheck (L_10, L_12);
			(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_12);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_10;
			NullCheck(L_13);
			ArrayElementTypeCheck (L_13, _stringLiteral79AD6030ED20C82B46AF955D4F885785A1BA75F1);
			(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral79AD6030ED20C82B46AF955D4F885785A1BA75F1);
			String_t* L_14;
			L_14 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_13, NULL);
			NullCheck(L_3);
			OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(L_3, L_14, NULL);
			// var result = await OneSignal.Default.SendTag(tagKey, tagValue);
			OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_15;
			L_15 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_16 = V_1;
			NullCheck(L_16);
			String_t* L_17 = L_16->___tagKey_10;
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_18 = V_1;
			NullCheck(L_18);
			String_t* L_19 = L_18->___tagValue_11;
			NullCheck(L_15);
			Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_20;
			L_20 = VirtualFuncInvoker2< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, String_t*, RuntimeObject* >::Invoke(49 /* System.Threading.Tasks.Task`1<System.Boolean> OneSignalSDK.OneSignal::SendTag(System.String,System.Object) */, L_15, L_17, L_19);
			NullCheck(L_20);
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_21;
			L_21 = Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935(L_20, Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
			V_2 = L_21;
			bool L_22;
			L_22 = TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9((&V_2), TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
			if (L_22)
			{
				goto IL_00b0_1;
			}
		}
		{
			int32_t L_23 = 0;
			V_0 = L_23;
			__this->___U3CU3E1__state_0 = L_23;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_24 = V_2;
			__this->___U3CU3Eu__1_3 = L_24;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_25 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetTagU3Ed__40_tAF8DC18D195FBDD30302D1E8800CB56488E5CA9E_m07F657EA210318028CCD6E0A86186D81FA14A2C5(L_25, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetTagU3Ed__40_tAF8DC18D195FBDD30302D1E8800CB56488E5CA9E_m07F657EA210318028CCD6E0A86186D81FA14A2C5_RuntimeMethod_var);
			goto IL_00fd;
		}

IL_0094_1:
		{
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_26 = __this->___U3CU3Eu__1_3;
			V_2 = L_26;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* L_27 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_27, sizeof(TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35));
			int32_t L_28 = (-1);
			V_0 = L_28;
			__this->___U3CU3E1__state_0 = L_28;
		}

IL_00b0_1:
		{
			bool L_29;
			L_29 = TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B((&V_2), TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
			// if (result)
			if (!L_29)
			{
				goto IL_00c6_1;
			}
		}
		{
			// _log("Set succeeded");
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_30 = V_1;
			NullCheck(L_30);
			OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(L_30, _stringLiteral41F04453962CC28FD7D6EB3B17ADC495D5BA63F3, NULL);
			goto IL_00d1_1;
		}

IL_00c6_1:
		{
			// _error("Set failed");
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_31 = V_1;
			NullCheck(L_31);
			OneSignalExampleBehaviour__error_mBB5177866C8A19120933543A7AC8F1CFD7E8C76F(L_31, _stringLiteralF55A0F2D78B5C1CA9C28A3FB31C3BE5A1D06B1E8, NULL);
		}

IL_00d1_1:
		{
			goto IL_00ea;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d3;
		}
		throw e;
	}

CATCH_00d3:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_32 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_33 = V_3;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_32, L_33, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00fd;
	}// end catch (depth: 1)

IL_00ea:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_34 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_34, NULL);
	}

IL_00fd:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSetTagU3Ed__40_MoveNext_mF9D2E176A1C3903361B06301DA66FBEE333BEB63_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSetTagU3Ed__40_tAF8DC18D195FBDD30302D1E8800CB56488E5CA9E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSetTagU3Ed__40_tAF8DC18D195FBDD30302D1E8800CB56488E5CA9E*>(__this + _offset);
	U3CSetTagU3Ed__40_MoveNext_mF9D2E176A1C3903361B06301DA66FBEE333BEB63(_thisAdjusted, method);
}
// System.Void OneSignalExampleBehaviour/<SetTag>d__40::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetTagU3Ed__40_SetStateMachine_mEA273B608D12C90E44B9A45E8B6E76215265A982 (U3CSetTagU3Ed__40_tAF8DC18D195FBDD30302D1E8800CB56488E5CA9E* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSetTagU3Ed__40_SetStateMachine_mEA273B608D12C90E44B9A45E8B6E76215265A982_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CSetTagU3Ed__40_tAF8DC18D195FBDD30302D1E8800CB56488E5CA9E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSetTagU3Ed__40_tAF8DC18D195FBDD30302D1E8800CB56488E5CA9E*>(__this + _offset);
	U3CSetTagU3Ed__40_SetStateMachine_mEA273B608D12C90E44B9A45E8B6E76215265A982(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void OneSignalExampleBehaviour/<RemoveTag>d__41::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRemoveTagU3Ed__41_MoveNext_mDB11000A9B206F7D875F7A3C824271F2E59AB28E (U3CRemoveTagU3Ed__41_t7AEB7AF364BD362DEB85346FB50D7F97CE8D4753* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CRemoveTagU3Ed__41_t7AEB7AF364BD362DEB85346FB50D7F97CE8D4753_m8CC700D2719336AFD70ECB58DAF517491A226E22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EC43AA755CABA93E92728B8B8DB94F10C566178);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79AD6030ED20C82B46AF955D4F885785A1BA75F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA83D6EB679661F90384F8C5A6625863740C54B3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2E39AAE4A665B3C7021AC55861BBAF3A9D76359);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* V_1 = NULL;
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_006b_1;
			}
		}
		{
			// _log($"Removing tag for key <b>{triggerKey}</b> and awaiting result...");
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_3 = V_1;
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_4 = V_1;
			NullCheck(L_4);
			String_t* L_5 = L_4->___triggerKey_12;
			String_t* L_6;
			L_6 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral0EC43AA755CABA93E92728B8B8DB94F10C566178, L_5, _stringLiteral79AD6030ED20C82B46AF955D4F885785A1BA75F1, NULL);
			NullCheck(L_3);
			OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(L_3, L_6, NULL);
			// var result = await OneSignal.Default.DeleteTag(tagKey);
			OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_7;
			L_7 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_8 = V_1;
			NullCheck(L_8);
			String_t* L_9 = L_8->___tagKey_10;
			NullCheck(L_7);
			Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_10;
			L_10 = VirtualFuncInvoker1< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, String_t* >::Invoke(52 /* System.Threading.Tasks.Task`1<System.Boolean> OneSignalSDK.OneSignal::DeleteTag(System.String) */, L_7, L_9);
			NullCheck(L_10);
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_11;
			L_11 = Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935(L_10, Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
			V_2 = L_11;
			bool L_12;
			L_12 = TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9((&V_2), TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0087_1;
			}
		}
		{
			int32_t L_13 = 0;
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_14 = V_2;
			__this->___U3CU3Eu__1_3 = L_14;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_15 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CRemoveTagU3Ed__41_t7AEB7AF364BD362DEB85346FB50D7F97CE8D4753_m8CC700D2719336AFD70ECB58DAF517491A226E22(L_15, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CRemoveTagU3Ed__41_t7AEB7AF364BD362DEB85346FB50D7F97CE8D4753_m8CC700D2719336AFD70ECB58DAF517491A226E22_RuntimeMethod_var);
			goto IL_00d4;
		}

IL_006b_1:
		{
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_16 = __this->___U3CU3Eu__1_3;
			V_2 = L_16;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* L_17 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_17, sizeof(TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35));
			int32_t L_18 = (-1);
			V_0 = L_18;
			__this->___U3CU3E1__state_0 = L_18;
		}

IL_0087_1:
		{
			bool L_19;
			L_19 = TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B((&V_2), TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
			// if (result)
			if (!L_19)
			{
				goto IL_009d_1;
			}
		}
		{
			// _log("Remove succeeded");
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_20 = V_1;
			NullCheck(L_20);
			OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(L_20, _stringLiteralC2E39AAE4A665B3C7021AC55861BBAF3A9D76359, NULL);
			goto IL_00a8_1;
		}

IL_009d_1:
		{
			// _error("Remove failed");
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_21 = V_1;
			NullCheck(L_21);
			OneSignalExampleBehaviour__error_mBB5177866C8A19120933543A7AC8F1CFD7E8C76F(L_21, _stringLiteralA83D6EB679661F90384F8C5A6625863740C54B3A, NULL);
		}

IL_00a8_1:
		{
			goto IL_00c1;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00aa;
		}
		throw e;
	}

CATCH_00aa:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_22 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_23 = V_3;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_22, L_23, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00d4;
	}// end catch (depth: 1)

IL_00c1:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_24 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_24, NULL);
	}

IL_00d4:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRemoveTagU3Ed__41_MoveNext_mDB11000A9B206F7D875F7A3C824271F2E59AB28E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CRemoveTagU3Ed__41_t7AEB7AF364BD362DEB85346FB50D7F97CE8D4753* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CRemoveTagU3Ed__41_t7AEB7AF364BD362DEB85346FB50D7F97CE8D4753*>(__this + _offset);
	U3CRemoveTagU3Ed__41_MoveNext_mDB11000A9B206F7D875F7A3C824271F2E59AB28E(_thisAdjusted, method);
}
// System.Void OneSignalExampleBehaviour/<RemoveTag>d__41::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRemoveTagU3Ed__41_SetStateMachine_m56537A4DC891EE88E1DCEB1C9C784A57FA92AC36 (U3CRemoveTagU3Ed__41_t7AEB7AF364BD362DEB85346FB50D7F97CE8D4753* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CRemoveTagU3Ed__41_SetStateMachine_m56537A4DC891EE88E1DCEB1C9C784A57FA92AC36_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CRemoveTagU3Ed__41_t7AEB7AF364BD362DEB85346FB50D7F97CE8D4753* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CRemoveTagU3Ed__41_t7AEB7AF364BD362DEB85346FB50D7F97CE8D4753*>(__this + _offset);
	U3CRemoveTagU3Ed__41_SetStateMachine_m56537A4DC891EE88E1DCEB1C9C784A57FA92AC36(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void OneSignalExampleBehaviour/<GetTags>d__42::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTagsU3Ed__42_MoveNext_m48BDAB159F9B45F3D24EB0840013BEBE6FB55082 (U3CGetTagsU3Ed__42_tFF697C520F01E869DF820DF93D382B3CADACB17D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t939447628654858A359A8B2688412DA89ED1880E_TisU3CGetTagsU3Ed__42_tFF697C520F01E869DF820DF93D382B3CADACB17D_m80D998AA1BC41083ED38F1738CDBA0E4BD9740ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m45C5A6D6235044C234D76E0FCB9BCC713A6C1466_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m10C09632D054960F02FE89952251398BF73209E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m98B37C463C293DC8A9D3B154B5450F133FF38C02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3371C9C28E563AFD0A683CA126F078F3F07B7306);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CF315956220F84FB2FF455951F47AA2206C0197);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB7F1A193E7D069CBEACA3D8C2ED0FC305130541);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD94542FF0463652B9C663330ADD2A10AA99DDE8);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* V_1 = NULL;
	String_t* V_2 = NULL;
	TaskAwaiter_1_t939447628654858A359A8B2688412DA89ED1880E V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0055_1;
			}
		}
		{
			// _log("Requesting all tag keys and values for this user...");
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_3 = V_1;
			NullCheck(L_3);
			OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(L_3, _stringLiteralFD94542FF0463652B9C663330ADD2A10AA99DDE8, NULL);
			// var tags = await OneSignal.Default.GetTags();
			OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_4;
			L_4 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
			NullCheck(L_4);
			Task_1_tE10B49C177D26DA80EFCDC3EC380E30315F5B322* L_5;
			L_5 = VirtualFuncInvoker0< Task_1_tE10B49C177D26DA80EFCDC3EC380E30315F5B322* >::Invoke(51 /* System.Threading.Tasks.Task`1<System.Collections.Generic.Dictionary`2<System.String,System.Object>> OneSignalSDK.OneSignal::GetTags() */, L_4);
			NullCheck(L_5);
			TaskAwaiter_1_t939447628654858A359A8B2688412DA89ED1880E L_6;
			L_6 = Task_1_GetAwaiter_m98B37C463C293DC8A9D3B154B5450F133FF38C02(L_5, Task_1_GetAwaiter_m98B37C463C293DC8A9D3B154B5450F133FF38C02_RuntimeMethod_var);
			V_3 = L_6;
			bool L_7;
			L_7 = TaskAwaiter_1_get_IsCompleted_m10C09632D054960F02FE89952251398BF73209E7((&V_3), TaskAwaiter_1_get_IsCompleted_m10C09632D054960F02FE89952251398BF73209E7_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0071_1;
			}
		}
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->___U3CU3E1__state_0 = L_8;
			TaskAwaiter_1_t939447628654858A359A8B2688412DA89ED1880E L_9 = V_3;
			__this->___U3CU3Eu__1_3 = L_9;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_10 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t939447628654858A359A8B2688412DA89ED1880E_TisU3CGetTagsU3Ed__42_tFF697C520F01E869DF820DF93D382B3CADACB17D_m80D998AA1BC41083ED38F1738CDBA0E4BD9740ED(L_10, (&V_3), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t939447628654858A359A8B2688412DA89ED1880E_TisU3CGetTagsU3Ed__42_tFF697C520F01E869DF820DF93D382B3CADACB17D_m80D998AA1BC41083ED38F1738CDBA0E4BD9740ED_RuntimeMethod_var);
			goto IL_00d4;
		}

IL_0055_1:
		{
			TaskAwaiter_1_t939447628654858A359A8B2688412DA89ED1880E L_11 = __this->___U3CU3Eu__1_3;
			V_3 = L_11;
			TaskAwaiter_1_t939447628654858A359A8B2688412DA89ED1880E* L_12 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_1_t939447628654858A359A8B2688412DA89ED1880E));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
		}

IL_0071_1:
		{
			Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_14;
			L_14 = TaskAwaiter_1_GetResult_m45C5A6D6235044C234D76E0FCB9BCC713A6C1466((&V_3), TaskAwaiter_1_GetResult_m45C5A6D6235044C234D76E0FCB9BCC713A6C1466_RuntimeMethod_var);
			// if (Json.Serialize(tags) is string tagsString)
			String_t* L_15;
			L_15 = Json_Serialize_mA6BDF705EEE0769F09C6A3F8D5712884541A2B96(L_14, (bool)0, 2, NULL);
			V_2 = L_15;
			String_t* L_16 = V_2;
			if (!L_16)
			{
				goto IL_009b_1;
			}
		}
		{
			// _log($"Current tags are <b>{tagsString}</b>");
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_17 = V_1;
			String_t* L_18 = V_2;
			String_t* L_19;
			L_19 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral6CF315956220F84FB2FF455951F47AA2206C0197, L_18, _stringLiteral3371C9C28E563AFD0A683CA126F078F3F07B7306, NULL);
			NullCheck(L_17);
			OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(L_17, L_19, NULL);
			goto IL_00a6_1;
		}

IL_009b_1:
		{
			// _error("Could not serialize tags");
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_20 = V_1;
			NullCheck(L_20);
			OneSignalExampleBehaviour__error_mBB5177866C8A19120933543A7AC8F1CFD7E8C76F(L_20, _stringLiteralDB7F1A193E7D069CBEACA3D8C2ED0FC305130541, NULL);
		}

IL_00a6_1:
		{
			goto IL_00c1;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a8;
		}
		throw e;
	}

CATCH_00a8:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_21 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_22 = V_4;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_21, L_22, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00d4;
	}// end catch (depth: 1)

IL_00c1:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_23 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_23, NULL);
	}

IL_00d4:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetTagsU3Ed__42_MoveNext_m48BDAB159F9B45F3D24EB0840013BEBE6FB55082_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CGetTagsU3Ed__42_tFF697C520F01E869DF820DF93D382B3CADACB17D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetTagsU3Ed__42_tFF697C520F01E869DF820DF93D382B3CADACB17D*>(__this + _offset);
	U3CGetTagsU3Ed__42_MoveNext_m48BDAB159F9B45F3D24EB0840013BEBE6FB55082(_thisAdjusted, method);
}
// System.Void OneSignalExampleBehaviour/<GetTags>d__42::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTagsU3Ed__42_SetStateMachine_m935F50F3CD2A2477FE99DA1CC038664671AC99D5 (U3CGetTagsU3Ed__42_tFF697C520F01E869DF820DF93D382B3CADACB17D* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CGetTagsU3Ed__42_SetStateMachine_m935F50F3CD2A2477FE99DA1CC038664671AC99D5_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CGetTagsU3Ed__42_tFF697C520F01E869DF820DF93D382B3CADACB17D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CGetTagsU3Ed__42_tFF697C520F01E869DF820DF93D382B3CADACB17D*>(__this + _offset);
	U3CGetTagsU3Ed__42_SetStateMachine_m935F50F3CD2A2477FE99DA1CC038664671AC99D5(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void OneSignalExampleBehaviour/<SetOutcome>d__43::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetOutcomeU3Ed__43_MoveNext_m00DE158802EB768F6BC959D3DAC4290E0066D5DF (U3CSetOutcomeU3Ed__43_t6C5CDBF58F1BFC7D10523D2A10BE774563D35862* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetOutcomeU3Ed__43_t6C5CDBF58F1BFC7D10523D2A10BE774563D35862_m1182257A24C241C1F39CE2AA761BAED13DC06C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41F04453962CC28FD7D6EB3B17ADC495D5BA63F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79AD6030ED20C82B46AF955D4F885785A1BA75F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FFB595817D967D720E2BD863CF8984C56481D55);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF55A0F2D78B5C1CA9C28A3FB31C3BE5A1D06B1E8);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* V_1 = NULL;
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_006b_1;
			}
		}
		{
			// _log($"Setting outcome with key <b>{outcomeKey}</b> and awaiting result...");
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_3 = V_1;
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_4 = V_1;
			NullCheck(L_4);
			String_t* L_5 = L_4->___outcomeKey_14;
			String_t* L_6;
			L_6 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral7FFB595817D967D720E2BD863CF8984C56481D55, L_5, _stringLiteral79AD6030ED20C82B46AF955D4F885785A1BA75F1, NULL);
			NullCheck(L_3);
			OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(L_3, L_6, NULL);
			// var result = await OneSignal.Default.SendOutcome(outcomeKey);
			OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_7;
			L_7 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_8 = V_1;
			NullCheck(L_8);
			String_t* L_9 = L_8->___outcomeKey_14;
			NullCheck(L_7);
			Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_10;
			L_10 = VirtualFuncInvoker1< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, String_t* >::Invoke(68 /* System.Threading.Tasks.Task`1<System.Boolean> OneSignalSDK.OneSignal::SendOutcome(System.String) */, L_7, L_9);
			NullCheck(L_10);
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_11;
			L_11 = Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935(L_10, Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
			V_2 = L_11;
			bool L_12;
			L_12 = TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9((&V_2), TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0087_1;
			}
		}
		{
			int32_t L_13 = 0;
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_14 = V_2;
			__this->___U3CU3Eu__1_3 = L_14;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_15 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetOutcomeU3Ed__43_t6C5CDBF58F1BFC7D10523D2A10BE774563D35862_m1182257A24C241C1F39CE2AA761BAED13DC06C4A(L_15, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetOutcomeU3Ed__43_t6C5CDBF58F1BFC7D10523D2A10BE774563D35862_m1182257A24C241C1F39CE2AA761BAED13DC06C4A_RuntimeMethod_var);
			goto IL_00d4;
		}

IL_006b_1:
		{
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_16 = __this->___U3CU3Eu__1_3;
			V_2 = L_16;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* L_17 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_17, sizeof(TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35));
			int32_t L_18 = (-1);
			V_0 = L_18;
			__this->___U3CU3E1__state_0 = L_18;
		}

IL_0087_1:
		{
			bool L_19;
			L_19 = TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B((&V_2), TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
			// if (result)
			if (!L_19)
			{
				goto IL_009d_1;
			}
		}
		{
			// _log("Set succeeded");
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_20 = V_1;
			NullCheck(L_20);
			OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(L_20, _stringLiteral41F04453962CC28FD7D6EB3B17ADC495D5BA63F3, NULL);
			goto IL_00a8_1;
		}

IL_009d_1:
		{
			// _error("Set failed");
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_21 = V_1;
			NullCheck(L_21);
			OneSignalExampleBehaviour__error_mBB5177866C8A19120933543A7AC8F1CFD7E8C76F(L_21, _stringLiteralF55A0F2D78B5C1CA9C28A3FB31C3BE5A1D06B1E8, NULL);
		}

IL_00a8_1:
		{
			goto IL_00c1;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00aa;
		}
		throw e;
	}

CATCH_00aa:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_22 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_23 = V_3;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_22, L_23, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00d4;
	}// end catch (depth: 1)

IL_00c1:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_24 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_24, NULL);
	}

IL_00d4:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSetOutcomeU3Ed__43_MoveNext_m00DE158802EB768F6BC959D3DAC4290E0066D5DF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSetOutcomeU3Ed__43_t6C5CDBF58F1BFC7D10523D2A10BE774563D35862* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSetOutcomeU3Ed__43_t6C5CDBF58F1BFC7D10523D2A10BE774563D35862*>(__this + _offset);
	U3CSetOutcomeU3Ed__43_MoveNext_m00DE158802EB768F6BC959D3DAC4290E0066D5DF(_thisAdjusted, method);
}
// System.Void OneSignalExampleBehaviour/<SetOutcome>d__43::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetOutcomeU3Ed__43_SetStateMachine_m2043DD52412474B03E57EAC80BD8D821A0E0A882 (U3CSetOutcomeU3Ed__43_t6C5CDBF58F1BFC7D10523D2A10BE774563D35862* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSetOutcomeU3Ed__43_SetStateMachine_m2043DD52412474B03E57EAC80BD8D821A0E0A882_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CSetOutcomeU3Ed__43_t6C5CDBF58F1BFC7D10523D2A10BE774563D35862* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSetOutcomeU3Ed__43_t6C5CDBF58F1BFC7D10523D2A10BE774563D35862*>(__this + _offset);
	U3CSetOutcomeU3Ed__43_SetStateMachine_m2043DD52412474B03E57EAC80BD8D821A0E0A882(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void OneSignalExampleBehaviour/<SetUniqueOutcome>d__44::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetUniqueOutcomeU3Ed__44_MoveNext_m3783FF5FBE65933637C8826B1CDE2F24B62B8BD6 (U3CSetUniqueOutcomeU3Ed__44_t2A820F14D89710D912DEA5E4824712CB32C612A5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetUniqueOutcomeU3Ed__44_t2A820F14D89710D912DEA5E4824712CB32C612A5_m3C94E5A60C616C64B2898F659D35E1DE171A2CE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41F04453962CC28FD7D6EB3B17ADC495D5BA63F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79AD6030ED20C82B46AF955D4F885785A1BA75F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1F64D92BDB94D50F1286A336815335D40683981);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF55A0F2D78B5C1CA9C28A3FB31C3BE5A1D06B1E8);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* V_1 = NULL;
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_006b_1;
			}
		}
		{
			// _log($"Setting unique outcome with key <b>{outcomeKey}</b> and awaiting result...");
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_3 = V_1;
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_4 = V_1;
			NullCheck(L_4);
			String_t* L_5 = L_4->___outcomeKey_14;
			String_t* L_6;
			L_6 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralE1F64D92BDB94D50F1286A336815335D40683981, L_5, _stringLiteral79AD6030ED20C82B46AF955D4F885785A1BA75F1, NULL);
			NullCheck(L_3);
			OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(L_3, L_6, NULL);
			// var result = await OneSignal.Default.SendUniqueOutcome(outcomeKey);
			OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_7;
			L_7 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_8 = V_1;
			NullCheck(L_8);
			String_t* L_9 = L_8->___outcomeKey_14;
			NullCheck(L_7);
			Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_10;
			L_10 = VirtualFuncInvoker1< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, String_t* >::Invoke(69 /* System.Threading.Tasks.Task`1<System.Boolean> OneSignalSDK.OneSignal::SendUniqueOutcome(System.String) */, L_7, L_9);
			NullCheck(L_10);
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_11;
			L_11 = Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935(L_10, Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
			V_2 = L_11;
			bool L_12;
			L_12 = TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9((&V_2), TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0087_1;
			}
		}
		{
			int32_t L_13 = 0;
			V_0 = L_13;
			__this->___U3CU3E1__state_0 = L_13;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_14 = V_2;
			__this->___U3CU3Eu__1_3 = L_14;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_15 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetUniqueOutcomeU3Ed__44_t2A820F14D89710D912DEA5E4824712CB32C612A5_m3C94E5A60C616C64B2898F659D35E1DE171A2CE9(L_15, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetUniqueOutcomeU3Ed__44_t2A820F14D89710D912DEA5E4824712CB32C612A5_m3C94E5A60C616C64B2898F659D35E1DE171A2CE9_RuntimeMethod_var);
			goto IL_00d4;
		}

IL_006b_1:
		{
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_16 = __this->___U3CU3Eu__1_3;
			V_2 = L_16;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* L_17 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_17, sizeof(TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35));
			int32_t L_18 = (-1);
			V_0 = L_18;
			__this->___U3CU3E1__state_0 = L_18;
		}

IL_0087_1:
		{
			bool L_19;
			L_19 = TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B((&V_2), TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
			// if (result)
			if (!L_19)
			{
				goto IL_009d_1;
			}
		}
		{
			// _log("Set succeeded");
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_20 = V_1;
			NullCheck(L_20);
			OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(L_20, _stringLiteral41F04453962CC28FD7D6EB3B17ADC495D5BA63F3, NULL);
			goto IL_00a8_1;
		}

IL_009d_1:
		{
			// _error("Set failed");
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_21 = V_1;
			NullCheck(L_21);
			OneSignalExampleBehaviour__error_mBB5177866C8A19120933543A7AC8F1CFD7E8C76F(L_21, _stringLiteralF55A0F2D78B5C1CA9C28A3FB31C3BE5A1D06B1E8, NULL);
		}

IL_00a8_1:
		{
			goto IL_00c1;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00aa;
		}
		throw e;
	}

CATCH_00aa:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_22 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_23 = V_3;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_22, L_23, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00d4;
	}// end catch (depth: 1)

IL_00c1:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_24 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_24, NULL);
	}

IL_00d4:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSetUniqueOutcomeU3Ed__44_MoveNext_m3783FF5FBE65933637C8826B1CDE2F24B62B8BD6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSetUniqueOutcomeU3Ed__44_t2A820F14D89710D912DEA5E4824712CB32C612A5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSetUniqueOutcomeU3Ed__44_t2A820F14D89710D912DEA5E4824712CB32C612A5*>(__this + _offset);
	U3CSetUniqueOutcomeU3Ed__44_MoveNext_m3783FF5FBE65933637C8826B1CDE2F24B62B8BD6(_thisAdjusted, method);
}
// System.Void OneSignalExampleBehaviour/<SetUniqueOutcome>d__44::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetUniqueOutcomeU3Ed__44_SetStateMachine_m1E3BC305AB5248BE355B332BC147D0ED020FE09C (U3CSetUniqueOutcomeU3Ed__44_t2A820F14D89710D912DEA5E4824712CB32C612A5* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSetUniqueOutcomeU3Ed__44_SetStateMachine_m1E3BC305AB5248BE355B332BC147D0ED020FE09C_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CSetUniqueOutcomeU3Ed__44_t2A820F14D89710D912DEA5E4824712CB32C612A5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSetUniqueOutcomeU3Ed__44_t2A820F14D89710D912DEA5E4824712CB32C612A5*>(__this + _offset);
	U3CSetUniqueOutcomeU3Ed__44_SetStateMachine_m1E3BC305AB5248BE355B332BC147D0ED020FE09C(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void OneSignalExampleBehaviour/<SetOutcomeWithValue>d__45::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetOutcomeWithValueU3Ed__45_MoveNext_m7D99C61A10A533FF6380C0F0E7FD3703D7E5B8BC (U3CSetOutcomeWithValueU3Ed__45_t3972DDE673C352FC834CD3A9081C19845D97BF13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetOutcomeWithValueU3Ed__45_t3972DDE673C352FC834CD3A9081C19845D97BF13_mDE102329A71C71E2904D24D3D1CC10889D0D62D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C20F9816CD10F0DC698717A615F80E18AB3C31A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41F04453962CC28FD7D6EB3B17ADC495D5BA63F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF55A0F2D78B5C1CA9C28A3FB31C3BE5A1D06B1E8);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* V_1 = NULL;
	TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0077_1;
			}
		}
		{
			// _log($"Setting outcome with key <b>{outcomeKey}</b> and value <b>{outcomeValue}</b> and awaiting result...");
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_3 = V_1;
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_4 = V_1;
			NullCheck(L_4);
			String_t* L_5 = L_4->___outcomeKey_14;
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_6 = V_1;
			NullCheck(L_6);
			float L_7 = L_6->___outcomeValue_15;
			float L_8 = L_7;
			RuntimeObject* L_9 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_8);
			String_t* L_10;
			L_10 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral2C20F9816CD10F0DC698717A615F80E18AB3C31A, L_5, L_9, NULL);
			NullCheck(L_3);
			OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(L_3, L_10, NULL);
			// var result = await OneSignal.Default.SendOutcomeWithValue(outcomeKey, outcomeValue);
			OneSignal_t314CE4D3704637587AA437654E7AE245275B8A85* L_11;
			L_11 = OneSignal_get_Default_m5E5AAF6891979CFE0C6F99A7DA4A3AC9245D5166(NULL);
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_12 = V_1;
			NullCheck(L_12);
			String_t* L_13 = L_12->___outcomeKey_14;
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_14 = V_1;
			NullCheck(L_14);
			float L_15 = L_14->___outcomeValue_15;
			NullCheck(L_11);
			Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_16;
			L_16 = VirtualFuncInvoker2< Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, String_t*, float >::Invoke(70 /* System.Threading.Tasks.Task`1<System.Boolean> OneSignalSDK.OneSignal::SendOutcomeWithValue(System.String,System.Single) */, L_11, L_13, L_15);
			NullCheck(L_16);
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_17;
			L_17 = Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935(L_16, Task_1_GetAwaiter_m2245DA7A0F2185DD5617D63F1544165AE6101935_RuntimeMethod_var);
			V_2 = L_17;
			bool L_18;
			L_18 = TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9((&V_2), TaskAwaiter_1_get_IsCompleted_mCAA0D1EB5A6601DF81D5ED06BB0720D47C520DF9_RuntimeMethod_var);
			if (L_18)
			{
				goto IL_0093_1;
			}
		}
		{
			int32_t L_19 = 0;
			V_0 = L_19;
			__this->___U3CU3E1__state_0 = L_19;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_20 = V_2;
			__this->___U3CU3Eu__1_3 = L_20;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_21 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetOutcomeWithValueU3Ed__45_t3972DDE673C352FC834CD3A9081C19845D97BF13_mDE102329A71C71E2904D24D3D1CC10889D0D62D5(L_21, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35_TisU3CSetOutcomeWithValueU3Ed__45_t3972DDE673C352FC834CD3A9081C19845D97BF13_mDE102329A71C71E2904D24D3D1CC10889D0D62D5_RuntimeMethod_var);
			goto IL_00e0;
		}

IL_0077_1:
		{
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35 L_22 = __this->___U3CU3Eu__1_3;
			V_2 = L_22;
			TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35* L_23 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_23, sizeof(TaskAwaiter_1_t1F3F1A2BD44A71ED705D6586CA2594868672DE35));
			int32_t L_24 = (-1);
			V_0 = L_24;
			__this->___U3CU3E1__state_0 = L_24;
		}

IL_0093_1:
		{
			bool L_25;
			L_25 = TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B((&V_2), TaskAwaiter_1_GetResult_mB0D209154690F6972CF22B23275167F6A404B08B_RuntimeMethod_var);
			// if (result)
			if (!L_25)
			{
				goto IL_00a9_1;
			}
		}
		{
			// _log("Set succeeded");
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_26 = V_1;
			NullCheck(L_26);
			OneSignalExampleBehaviour__log_m3A4B7E823B2F5ADACDC2F3D403DD69626E8424BD(L_26, _stringLiteral41F04453962CC28FD7D6EB3B17ADC495D5BA63F3, NULL);
			goto IL_00b4_1;
		}

IL_00a9_1:
		{
			// _error("Set failed");
			OneSignalExampleBehaviour_t6DEB486AE6F23CB26E0B8830621FD2D0F17BA76D* L_27 = V_1;
			NullCheck(L_27);
			OneSignalExampleBehaviour__error_mBB5177866C8A19120933543A7AC8F1CFD7E8C76F(L_27, _stringLiteralF55A0F2D78B5C1CA9C28A3FB31C3BE5A1D06B1E8, NULL);
		}

IL_00b4_1:
		{
			goto IL_00cd;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00b6;
		}
		throw e;
	}

CATCH_00b6:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_28 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_29 = V_3;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_28, L_29, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00e0;
	}// end catch (depth: 1)

IL_00cd:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_30 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_30, NULL);
	}

IL_00e0:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSetOutcomeWithValueU3Ed__45_MoveNext_m7D99C61A10A533FF6380C0F0E7FD3703D7E5B8BC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSetOutcomeWithValueU3Ed__45_t3972DDE673C352FC834CD3A9081C19845D97BF13* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSetOutcomeWithValueU3Ed__45_t3972DDE673C352FC834CD3A9081C19845D97BF13*>(__this + _offset);
	U3CSetOutcomeWithValueU3Ed__45_MoveNext_m7D99C61A10A533FF6380C0F0E7FD3703D7E5B8BC(_thisAdjusted, method);
}
// System.Void OneSignalExampleBehaviour/<SetOutcomeWithValue>d__45::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetOutcomeWithValueU3Ed__45_SetStateMachine_m8488191B91A93D750CF10FCCA05EA1EE5BAAD098 (U3CSetOutcomeWithValueU3Ed__45_t3972DDE673C352FC834CD3A9081C19845D97BF13* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSetOutcomeWithValueU3Ed__45_SetStateMachine_m8488191B91A93D750CF10FCCA05EA1EE5BAAD098_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CSetOutcomeWithValueU3Ed__45_t3972DDE673C352FC834CD3A9081C19845D97BF13* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSetOutcomeWithValueU3Ed__45_t3972DDE673C352FC834CD3A9081C19845D97BF13*>(__this + _offset);
	U3CSetOutcomeWithValueU3Ed__45_SetStateMachine_m8488191B91A93D750CF10FCCA05EA1EE5BAAD098(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
