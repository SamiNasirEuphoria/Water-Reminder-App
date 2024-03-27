#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<UnityEngine.iOS.LocalNotification>
struct List_1_tBC7D8219AE842673418038D26E22D9C0147753F0;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.iOS.LocalNotification[]
struct LocalNotificationU5BU5D_tE368C776C17A10678170E3296450BF5EFA8ED34C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
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
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DrinkWaterController
struct DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3;
// Entities
struct Entities_tB4FB8F31856999AFA46755B1CB6DC75B16A2644D;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// UnityEngine.EventSystems.IScrollHandler
struct IScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE;
// UnityEngine.iOS.LocalNotification
struct LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE;
// LoginScreenHandler
struct LoginScreenHandler_tA4AEE59BE26DD91756D34D29547BCC4442FE2F00;
// MainMenuHandler
struct MainMenuHandler_t5A770556C4ABD1778AA50C4FC389C92F64F355EE;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// NotificationManager
struct NotificationManager_t420578B78ECCF624ABE7E8D4618BD10D09AFDF51;
// Notifications
struct Notifications_tFC1BC99F91FE9B02BCF9D9AA5109516F4591A126;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ObjectReferenceContainer
struct ObjectReferenceContainer_t9388B07BB597BE5F20F15829C614FCFBE410183D;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SceneHandler
struct SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// SplashScreen
struct SplashScreen_tA005FEA658015A9DEAEF5988088206BAC2A3B1F4;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F;
// TMPro.TMP_InputValidator
struct TMP_InputValidator_t3429AF61284AE19180C3FB81C0C7D2F90165EA98;
// TMPro.TMP_ScrollbarEventHandler
struct TMP_ScrollbarEventHandler_t84C389ED6800977DAEA8C025E18C9F3321888F4D;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UIReferenceContainer
struct UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8;
// UIReferenceContainerMenu
struct UIReferenceContainerMenu_t17D2EB96B8E18E398DAF7523677C42C6C2A8CA7A;
// UnitConversions
struct UnitConversions_t05554901EFD13340CB8AF8DBC8E939E518F3E005;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// UnityEngine.WaitWhile
struct WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967;
// WaterCalculator
struct WaterCalculator_tAD3B482221AA38BD9945837C34E9BC1EA6386BF5;
// iOSPlugin
struct iOSPlugin_tF5443859614198ACB7968F031B43314B6ECD2371;
// iOSPluginCallBacks
struct iOSPluginCallBacks_t9DDAD36CA294C0B42F1F8BDC37D4B2FC692146E5;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// DrinkWaterController/<WaterFlowDown>d__10
struct U3CWaterFlowDownU3Ed__10_tB51F225775FEC6F03AD8339BF622B32B7A4582C8;
// DrinkWaterController/<WaterFlowLevel>d__8
struct U3CWaterFlowLevelU3Ed__8_t4DB6CA027B4A9AE7154E0DC6B5D861F050CD65F4;
// DrinkWaterController/<WaterLevelRaise>d__12
struct U3CWaterLevelRaiseU3Ed__12_t6367A4EAB06BEB44E8C5340D4BB6C12CA97769A1;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// NotificationManager/<CallForAlert>d__5
struct U3CCallForAlertU3Ed__5_tB1A2E24DB78EBE0DF04BB4D15474B455A9CDF853;
// SplashScreen/<FadeInAndFill>d__9
struct U3CFadeInAndFillU3Ed__9_t81F9C4504DD2F631EFE8146AF553D09403363CAD;
// TMPro.TMP_InputField/OnChangeEvent
struct OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D;
// TMPro.TMP_InputField/OnValidateInput
struct OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530;
// TMPro.TMP_InputField/SelectionEvent
struct SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119;
// TMPro.TMP_InputField/SubmitEvent
struct SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500;
// TMPro.TMP_InputField/TextSelectionEvent
struct TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401;
// TMPro.TMP_InputField/TouchScreenKeyboardEvent
struct TouchScreenKeyboardEvent_tB9BEBEF5D6F2B52547EF3861FF437AC25BC06AF1;

IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBC7D8219AE842673418038D26E22D9C0147753F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectReferenceContainer_t9388B07BB597BE5F20F15829C614FCFBE410183D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCallForAlertU3Ed__5_tB1A2E24DB78EBE0DF04BB4D15474B455A9CDF853_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeInAndFillU3Ed__9_t81F9C4504DD2F631EFE8146AF553D09403363CAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaterFlowDownU3Ed__10_tB51F225775FEC6F03AD8339BF622B32B7A4582C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaterFlowLevelU3Ed__8_t4DB6CA027B4A9AE7154E0DC6B5D861F050CD65F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaterLevelRaiseU3Ed__12_t6367A4EAB06BEB44E8C5340D4BB6C12CA97769A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIReferenceContainerMenu_t17D2EB96B8E18E398DAF7523677C42C6C2A8CA7A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719;
IL2CPP_EXTERN_C String_t* _stringLiteral06ABC4934C04242DFC703DC403A6DA861840286D;
IL2CPP_EXTERN_C String_t* _stringLiteral070DC7956F06C9EFCBF116607A382F2C7BDB41AC;
IL2CPP_EXTERN_C String_t* _stringLiteral09274127B4E98962E011314AD4C3A0E6B677963A;
IL2CPP_EXTERN_C String_t* _stringLiteral0D9EC153EBC2ACFBE044F77813A4CCC0E4F5B634;
IL2CPP_EXTERN_C String_t* _stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94;
IL2CPP_EXTERN_C String_t* _stringLiteral28FB1A63EE171489461C4F13E85017A42AECC1B2;
IL2CPP_EXTERN_C String_t* _stringLiteral3828858EDDADFB2AEC895F54A3E3F0586C7AC85C;
IL2CPP_EXTERN_C String_t* _stringLiteral3B6D901AB3B90302164922A4DDD718210FBC8E9A;
IL2CPP_EXTERN_C String_t* _stringLiteral401602777C44EA69B5FF9AB6AB2D47AEEC89D2AA;
IL2CPP_EXTERN_C String_t* _stringLiteral45295626B926EDDEEC88A5F14B97F515C073A611;
IL2CPP_EXTERN_C String_t* _stringLiteral51E67EB8484159FFE8DFBC1003E8D7FDF9EBA2C7;
IL2CPP_EXTERN_C String_t* _stringLiteral5E3496F6157D2F28ED53087711925DA7D714C857;
IL2CPP_EXTERN_C String_t* _stringLiteral79583723F7E2B999AFA83D7D115FC721EF2CF87D;
IL2CPP_EXTERN_C String_t* _stringLiteral7C6C3E1FB2B851EF12CA90001BB012695B8BE94E;
IL2CPP_EXTERN_C String_t* _stringLiteral801B26249550605953F17D5009E80B894D1B4F70;
IL2CPP_EXTERN_C String_t* _stringLiteral880B158CB0773FE810BF9C84CD76D93EBB935499;
IL2CPP_EXTERN_C String_t* _stringLiteral8A44083BB07993C684E9F18FC6EC7B7DDB39FB90;
IL2CPP_EXTERN_C String_t* _stringLiteral8AFBC3CA03AED7A5F7BD7427E75A126B6DF6901F;
IL2CPP_EXTERN_C String_t* _stringLiteral8C08B2C693EC6CAD0F319E3C4DC54CADB82533F8;
IL2CPP_EXTERN_C String_t* _stringLiteral8FC6ED462B121075F47389C74A4781E7BECEBB2D;
IL2CPP_EXTERN_C String_t* _stringLiteral94D02A557005AA9B9B42DF69299B1493B72887B7;
IL2CPP_EXTERN_C String_t* _stringLiteral9B89E049FC6343E440B2C7CA3A6085BC95901A3E;
IL2CPP_EXTERN_C String_t* _stringLiteralA3BFE85716323FDB76D3129B1C4C398233A9B42E;
IL2CPP_EXTERN_C String_t* _stringLiteralA5A9A0C1CF52FF769D4E150BE747F45A07727226;
IL2CPP_EXTERN_C String_t* _stringLiteralAAAEDCD13D6AA2725C362F76CDD04DEE55213BD2;
IL2CPP_EXTERN_C String_t* _stringLiteralAEB5A89704EF86C652DD7B0E148044A9C5936967;
IL2CPP_EXTERN_C String_t* _stringLiteralAEEB048795828402BEB17E5AD58607C793294FA6;
IL2CPP_EXTERN_C String_t* _stringLiteralB0769D951EA1B8A998AAC313D55774E8A792F5FD;
IL2CPP_EXTERN_C String_t* _stringLiteralB1065D06F317F557E6457D2B703675A090B18AC8;
IL2CPP_EXTERN_C String_t* _stringLiteralB992C44050D976827738F120FA29AB58A50CEA22;
IL2CPP_EXTERN_C String_t* _stringLiteralBAB7006C1C3636568BC3E4FA7FDEA950576B0718;
IL2CPP_EXTERN_C String_t* _stringLiteralC17A90F7BCC671E765043CC0CC6A7B4A76AA48E0;
IL2CPP_EXTERN_C String_t* _stringLiteralC9E6888E6ACE59F9DE2AA8FCCE740AC681CEEE42;
IL2CPP_EXTERN_C String_t* _stringLiteralCFD52AAC15A062BC92B0B77B7E829311E0C9993B;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDFB33D61687D944C89B278BF5BF62F8930B27DC3;
IL2CPP_EXTERN_C String_t* _stringLiteralE06B55C4BBE3AA67B273C38DB42C4D3F91B17F7A;
IL2CPP_EXTERN_C String_t* _stringLiteralE376FCD4A340AF9C59756C5970723E75E1C69EE2;
IL2CPP_EXTERN_C String_t* _stringLiteralE4C6EE2FC3234C0137E848AE360D6B72D0AA0222;
IL2CPP_EXTERN_C String_t* _stringLiteralED3382B615AFF362FB22ECD868BB96E4C1113CA1;
IL2CPP_EXTERN_C String_t* _stringLiteralF0CD3BAB149670D726750886680B1CA2CA4873B1;
IL2CPP_EXTERN_C String_t* _stringLiteralF411BED999CC6214EB9016567AB706A635F18DDA;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DrinkWaterController_CalenderMenu_m693FBB9CB23D32D82AB2015F6F5052B8BA2DF243_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DrinkWaterController_CloseButton_m5935A11B9E81CA590C375BD855A4252753519BBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DrinkWaterController_DrinkWaterOkButton_mABFBEB84C7E530ED25C488C4C87CA95AA74CD231_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DrinkWaterController_DrinkWater_mF14208C7D40131C5E9EA6124A9702A9E0FD646A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DrinkWaterController_NotificationPanel_m425F6A3D48FD86A5A17CFDBD183B766EA54E2A4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DrinkWaterController_OpenCalculator_m4F187881E435890887D44380EF7638782F9F417E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DrinkWaterController_OpenUnitPanel_m303C9D1BD63CE8E89AEEE5624D38D2421A8B415F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DrinkWaterController_SettingButton_m5E17E6158FAE3E88706770A12D2C0F01A44AA575_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DrinkWaterController_U3CWaterLevelRaiseU3Eb__12_0_mF483434BAE2F0E7F00F559BE73EDFCA69DB0C52B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Entities_SelectAmount_m5B99484C9F5F1B1A2B38387ECA197F56486F38BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m5204FD9329F260AB7515DAD913AECBF9BF5E7FF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m159A4B78C614DE4179F4857A890D9B837AEBCC5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m15DA3B78D1B425EE75B56128E266511A988A9E42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m47C7F4214DFAAC752E331A1073AD1B7EA78DB3DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m49F7A9CBF94A5E7D9E4740C5572617E44F002B94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m0722EF06E0C1AE2FCACCDC4C432A83C96930120C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8C5C3A5219BF7F9AB0784DD7BB56AAE024F3B40B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoginScreenHandler_BacktoMenuOne_mC8033217B8A83B91FF5709A22D3C6B48A9F471C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LoginScreenHandler_BacktoMenuTwo_m1B73B33432EC19BBC1849C411330ED733D8F0D3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCallForAlertU3Ed__5_System_Collections_IEnumerator_Reset_mF149FD63281E5DDFCECC5B63AE070170889AE000_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeInAndFillU3Ed__9_System_Collections_IEnumerator_Reset_m2FE9F28BC5201415CFC0BD9000613D9C2DCC9714_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaterFlowDownU3Ed__10_System_Collections_IEnumerator_Reset_m83938416030BB3F047ED08130EBB8352A789FA62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaterFlowLevelU3Ed__8_System_Collections_IEnumerator_Reset_mB9562DE1AD6B81D0153E2743E599A3443FD0438B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaterLevelRaiseU3Ed__12_System_Collections_IEnumerator_Reset_m2AE19AC36FC211B00FEAF9D56C4A7E34687060F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* iOSPluginCallBacks_CallBack_mCCD14932BB0CB9A7A8D8444223427FDA26801CBC_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.iOS.LocalNotification>
struct List_1_tBC7D8219AE842673418038D26E22D9C0147753F0  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	LocalNotificationU5BU5D_tE368C776C17A10678170E3296450BF5EFA8ED34C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
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

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// PlayerPrefsHandler
struct PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1  : public RuntimeObject
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// DrinkWaterController/<WaterFlowDown>d__10
struct U3CWaterFlowDownU3Ed__10_tB51F225775FEC6F03AD8339BF622B32B7A4582C8  : public RuntimeObject
{
	// System.Int32 DrinkWaterController/<WaterFlowDown>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DrinkWaterController/<WaterFlowDown>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// DrinkWaterController DrinkWaterController/<WaterFlowDown>d__10::<>4__this
	DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* ___U3CU3E4__this_2;
	// System.Single DrinkWaterController/<WaterFlowDown>d__10::<elapsedTime>5__2
	float ___U3CelapsedTimeU3E5__2_3;
};

// DrinkWaterController/<WaterFlowLevel>d__8
struct U3CWaterFlowLevelU3Ed__8_t4DB6CA027B4A9AE7154E0DC6B5D861F050CD65F4  : public RuntimeObject
{
	// System.Int32 DrinkWaterController/<WaterFlowLevel>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DrinkWaterController/<WaterFlowLevel>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// DrinkWaterController DrinkWaterController/<WaterFlowLevel>d__8::<>4__this
	DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* ___U3CU3E4__this_2;
	// System.Single DrinkWaterController/<WaterFlowLevel>d__8::<elapsedTime>5__2
	float ___U3CelapsedTimeU3E5__2_3;
};

// DrinkWaterController/<WaterLevelRaise>d__12
struct U3CWaterLevelRaiseU3Ed__12_t6367A4EAB06BEB44E8C5340D4BB6C12CA97769A1  : public RuntimeObject
{
	// System.Int32 DrinkWaterController/<WaterLevelRaise>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DrinkWaterController/<WaterLevelRaise>d__12::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// DrinkWaterController DrinkWaterController/<WaterLevelRaise>d__12::<>4__this
	DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* ___U3CU3E4__this_2;
};

// NotificationManager/<CallForAlert>d__5
struct U3CCallForAlertU3Ed__5_tB1A2E24DB78EBE0DF04BB4D15474B455A9CDF853  : public RuntimeObject
{
	// System.Int32 NotificationManager/<CallForAlert>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object NotificationManager/<CallForAlert>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
};

// SplashScreen/<FadeInAndFill>d__9
struct U3CFadeInAndFillU3Ed__9_t81F9C4504DD2F631EFE8146AF553D09403363CAD  : public RuntimeObject
{
	// System.Int32 SplashScreen/<FadeInAndFill>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SplashScreen/<FadeInAndFill>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SplashScreen SplashScreen/<FadeInAndFill>d__9::<>4__this
	SplashScreen_tA005FEA658015A9DEAEF5988088206BAC2A3B1F4* ___U3CU3E4__this_2;
	// System.Single SplashScreen/<FadeInAndFill>d__9::<elapsedTime>5__2
	float ___U3CelapsedTimeU3E5__2_3;
	// System.Single SplashScreen/<FadeInAndFill>d__9::<startAlpha>5__3
	float ___U3CstartAlphaU3E5__3_4;
	// System.Single SplashScreen/<FadeInAndFill>d__9::<targetAlpha>5__4
	float ___U3CtargetAlphaU3E5__4_5;
	// System.Single SplashScreen/<FadeInAndFill>d__9::<startFillAmount>5__5
	float ___U3CstartFillAmountU3E5__5_6;
	// System.Single SplashScreen/<FadeInAndFill>d__9::<targetFillAmount>5__6
	float ___U3CtargetFillAmountU3E5__6_7;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.iOS.LocalNotification>
struct Enumerator_t408765680189DF655A1ABCEAB37112390080715F 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tBC7D8219AE842673418038D26E22D9C0147753F0* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.WaitWhile
struct WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Func`1<System.Boolean> UnityEngine.WaitWhile::m_Predicate
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___m_Predicate_0;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.iOS.LocalNotification
struct LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE  : public RuntimeObject
{
	// System.IntPtr UnityEngine.iOS.LocalNotification::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// DrinkWaterController
struct DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.CanvasGroup DrinkWaterController::waterLevelSliderCanves
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___waterLevelSliderCanves_4;
	// UnityEngine.Animator DrinkWaterController::myAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___myAnimator_5;
	// System.Single DrinkWaterController::fadeInDuration
	float ___fadeInDuration_6;
	// System.Boolean DrinkWaterController::check
	bool ___check_7;
};

// Entities
struct Entities_tB4FB8F31856999AFA46755B1CB6DC75B16A2644D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Entities::waterLevel
	int32_t ___waterLevel_4;
	// UnityEngine.UI.Button Entities::myButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___myButton_5;
};

// LoginScreenHandler
struct LoginScreenHandler_tA4AEE59BE26DD91756D34D29547BCC4442FE2F00  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator LoginScreenHandler::myAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___myAnimator_4;
};

// MainMenuHandler
struct MainMenuHandler_t5A770556C4ABD1778AA50C4FC389C92F64F355EE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator MainMenuHandler::myAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___myAnimator_4;
};

// NotificationManager
struct NotificationManager_t420578B78ECCF624ABE7E8D4618BD10D09AFDF51  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.DateTime NotificationManager::dayStart
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___dayStart_4;
	// System.DateTime NotificationManager::dayEnd
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___dayEnd_5;
	// System.DateTime NotificationManager::now
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___now_6;
};

// Notifications
struct Notifications_tFC1BC99F91FE9B02BCF9D9AA5109516F4591A126  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ObjectReferenceContainer
struct ObjectReferenceContainer_t9388B07BB597BE5F20F15829C614FCFBE410183D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ObjectReferenceContainer::waterLimitSlider
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___waterLimitSlider_5;
	// UnityEngine.Animator ObjectReferenceContainer::MainScreenAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___MainScreenAnimator_6;
};

// SceneHandler
struct SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// SplashScreen
struct SplashScreen_tA005FEA658015A9DEAEF5988088206BAC2A3B1F4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SplashScreen::loadingIcon
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___loadingIcon_4;
	// UnityEngine.GameObject SplashScreen::logoImage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___logoImage_5;
	// UnityEngine.UI.Image SplashScreen::colorFilledImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___colorFilledImage_6;
	// UnityEngine.CanvasGroup SplashScreen::logoImagecanves
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___logoImagecanves_7;
	// System.Single SplashScreen::fadeInDuration
	float ___fadeInDuration_8;
	// System.Single SplashScreen::fillAmountDuration
	float ___fillAmountDuration_9;
	// System.Single SplashScreen::sceneChangeTimer
	float ___sceneChangeTimer_10;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UIReferenceContainer
struct UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button UIReferenceContainer::drinkWaterButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___drinkWaterButton_5;
	// UnityEngine.UI.Button UIReferenceContainer::sliderCancelButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___sliderCancelButton_6;
	// UnityEngine.UI.Button UIReferenceContainer::sliderOkButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___sliderOkButton_7;
	// UnityEngine.UI.Button UIReferenceContainer::settingButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___settingButton_8;
	// UnityEngine.UI.Button UIReferenceContainer::NotificationButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___NotificationButton_9;
	// UnityEngine.UI.Button UIReferenceContainer::CalenderButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___CalenderButton_10;
	// UnityEngine.UI.Image UIReferenceContainer::drinkWaterFiller
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___drinkWaterFiller_11;
	// UnityEngine.UI.Text UIReferenceContainer::waterLimit
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___waterLimit_12;
	// UnityEngine.UI.Text UIReferenceContainer::lastIntake
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___lastIntake_13;
	// UnityEngine.UI.Text UIReferenceContainer::lastIntakeObject
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___lastIntakeObject_14;
	// UnityEngine.UI.Button UIReferenceContainer::calculatorButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___calculatorButton_15;
	// UnityEngine.UI.Button UIReferenceContainer::unitButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___unitButton_16;
};

// UIReferenceContainerMenu
struct UIReferenceContainerMenu_t17D2EB96B8E18E398DAF7523677C42C6C2A8CA7A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_InputField UIReferenceContainerMenu::weightField
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___weightField_5;
	// TMPro.TMP_InputField UIReferenceContainerMenu::quantityOfWaterToShow
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___quantityOfWaterToShow_6;
	// UnityEngine.UI.Button UIReferenceContainerMenu::backToMenu_1
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___backToMenu_1_7;
	// UnityEngine.UI.Button UIReferenceContainerMenu::backToMenu_2
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___backToMenu_2_8;
};

// UnitConversions
struct UnitConversions_t05554901EFD13340CB8AF8DBC8E939E518F3E005  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// WaterCalculator
struct WaterCalculator_tAD3B482221AA38BD9945837C34E9BC1EA6386BF5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_InputField WaterCalculator::weightField
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___weightField_4;
	// UnityEngine.UI.Text WaterCalculator::suggestedWater
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___suggestedWater_5;
};

// iOSPlugin
struct iOSPlugin_tF5443859614198ACB7968F031B43314B6ECD2371  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// iOSPluginCallBacks
struct iOSPluginCallBacks_t9DDAD36CA294C0B42F1F8BDC37D4B2FC692146E5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject iOSPluginCallBacks::rotatorObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rotatorObject_4;
	// UnityEngine.Vector3 iOSPluginCallBacks::rotationSpeed
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotationSpeed_5;
	// System.Boolean iOSPluginCallBacks::rotateUp
	bool ___rotateUp_6;
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
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard TMPro.TMP_InputField::m_SoftKeyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_SoftKeyboard_20;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_22;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextViewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_TextViewport_23;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextComponentRectMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_TextComponentRectMask_24;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextViewportRectMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_TextViewportRectMask_25;
	// UnityEngine.Rect TMPro.TMP_InputField::m_CachedViewportRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_CachedViewportRect_26;
	// TMPro.TMP_Text TMPro.TMP_InputField::m_TextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_TextComponent_27;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextComponentRectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_TextComponentRectTransform_28;
	// UnityEngine.UI.Graphic TMPro.TMP_InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_29;
	// UnityEngine.UI.Scrollbar TMPro.TMP_InputField::m_VerticalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar_30;
	// TMPro.TMP_ScrollbarEventHandler TMPro.TMP_InputField::m_VerticalScrollbarEventHandler
	TMP_ScrollbarEventHandler_t84C389ED6800977DAEA8C025E18C9F3321888F4D* ___m_VerticalScrollbarEventHandler_31;
	// System.Boolean TMPro.TMP_InputField::m_IsDrivenByLayoutComponents
	bool ___m_IsDrivenByLayoutComponents_32;
	// UnityEngine.UI.LayoutGroup TMPro.TMP_InputField::m_LayoutGroup
	LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE* ___m_LayoutGroup_33;
	// UnityEngine.EventSystems.IScrollHandler TMPro.TMP_InputField::m_IScrollHandlerParent
	RuntimeObject* ___m_IScrollHandlerParent_34;
	// System.Single TMPro.TMP_InputField::m_ScrollPosition
	float ___m_ScrollPosition_35;
	// System.Single TMPro.TMP_InputField::m_ScrollSensitivity
	float ___m_ScrollSensitivity_36;
	// TMPro.TMP_InputField/ContentType TMPro.TMP_InputField::m_ContentType
	int32_t ___m_ContentType_37;
	// TMPro.TMP_InputField/InputType TMPro.TMP_InputField::m_InputType
	int32_t ___m_InputType_38;
	// System.Char TMPro.TMP_InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_39;
	// UnityEngine.TouchScreenKeyboardType TMPro.TMP_InputField::m_KeyboardType
	int32_t ___m_KeyboardType_40;
	// TMPro.TMP_InputField/LineType TMPro.TMP_InputField::m_LineType
	int32_t ___m_LineType_41;
	// System.Boolean TMPro.TMP_InputField::m_HideMobileInput
	bool ___m_HideMobileInput_42;
	// System.Boolean TMPro.TMP_InputField::m_HideSoftKeyboard
	bool ___m_HideSoftKeyboard_43;
	// TMPro.TMP_InputField/CharacterValidation TMPro.TMP_InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_44;
	// System.String TMPro.TMP_InputField::m_RegexValue
	String_t* ___m_RegexValue_45;
	// System.Single TMPro.TMP_InputField::m_GlobalPointSize
	float ___m_GlobalPointSize_46;
	// System.Int32 TMPro.TMP_InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_47;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnEndEdit
	SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* ___m_OnEndEdit_48;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnSubmit
	SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* ___m_OnSubmit_49;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnSelect
	SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* ___m_OnSelect_50;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnDeselect
	SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* ___m_OnDeselect_51;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnTextSelection
	TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* ___m_OnTextSelection_52;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnEndTextSelection
	TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* ___m_OnEndTextSelection_53;
	// TMPro.TMP_InputField/OnChangeEvent TMPro.TMP_InputField::m_OnValueChanged
	OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D* ___m_OnValueChanged_54;
	// TMPro.TMP_InputField/TouchScreenKeyboardEvent TMPro.TMP_InputField::m_OnTouchScreenKeyboardStatusChanged
	TouchScreenKeyboardEvent_tB9BEBEF5D6F2B52547EF3861FF437AC25BC06AF1* ___m_OnTouchScreenKeyboardStatusChanged_55;
	// TMPro.TMP_InputField/OnValidateInput TMPro.TMP_InputField::m_OnValidateInput
	OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530* ___m_OnValidateInput_56;
	// UnityEngine.Color TMPro.TMP_InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_57;
	// System.Boolean TMPro.TMP_InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_58;
	// UnityEngine.Color TMPro.TMP_InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_59;
	// System.String TMPro.TMP_InputField::m_Text
	String_t* ___m_Text_60;
	// System.Single TMPro.TMP_InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_61;
	// System.Int32 TMPro.TMP_InputField::m_CaretWidth
	int32_t ___m_CaretWidth_62;
	// System.Boolean TMPro.TMP_InputField::m_ReadOnly
	bool ___m_ReadOnly_63;
	// System.Boolean TMPro.TMP_InputField::m_RichText
	bool ___m_RichText_64;
	// System.Int32 TMPro.TMP_InputField::m_StringPosition
	int32_t ___m_StringPosition_65;
	// System.Int32 TMPro.TMP_InputField::m_StringSelectPosition
	int32_t ___m_StringSelectPosition_66;
	// System.Int32 TMPro.TMP_InputField::m_CaretPosition
	int32_t ___m_CaretPosition_67;
	// System.Int32 TMPro.TMP_InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_68;
	// UnityEngine.RectTransform TMPro.TMP_InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_69;
	// UnityEngine.UIVertex[] TMPro.TMP_InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_70;
	// UnityEngine.CanvasRenderer TMPro.TMP_InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_71;
	// UnityEngine.Vector2 TMPro.TMP_InputField::m_LastPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastPosition_72;
	// UnityEngine.Mesh TMPro.TMP_InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_73;
	// System.Boolean TMPro.TMP_InputField::m_AllowInput
	bool ___m_AllowInput_74;
	// System.Boolean TMPro.TMP_InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_75;
	// System.Boolean TMPro.TMP_InputField::m_UpdateDrag
	bool ___m_UpdateDrag_76;
	// System.Boolean TMPro.TMP_InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_77;
	// System.Boolean TMPro.TMP_InputField::m_CaretVisible
	bool ___m_CaretVisible_80;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_81;
	// System.Single TMPro.TMP_InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_82;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_83;
	// System.String TMPro.TMP_InputField::m_OriginalText
	String_t* ___m_OriginalText_84;
	// System.Boolean TMPro.TMP_InputField::m_WasCanceled
	bool ___m_WasCanceled_85;
	// System.Boolean TMPro.TMP_InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_86;
	// UnityEngine.WaitForSecondsRealtime TMPro.TMP_InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_87;
	// System.Boolean TMPro.TMP_InputField::m_PreventCallback
	bool ___m_PreventCallback_88;
	// System.Boolean TMPro.TMP_InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_89;
	// System.Boolean TMPro.TMP_InputField::m_IsTextComponentUpdateRequired
	bool ___m_IsTextComponentUpdateRequired_90;
	// System.Boolean TMPro.TMP_InputField::m_isLastKeyBackspace
	bool ___m_isLastKeyBackspace_91;
	// System.Single TMPro.TMP_InputField::m_PointerDownClickStartTime
	float ___m_PointerDownClickStartTime_92;
	// System.Single TMPro.TMP_InputField::m_KeyDownStartTime
	float ___m_KeyDownStartTime_93;
	// System.Single TMPro.TMP_InputField::m_DoubleClickDelay
	float ___m_DoubleClickDelay_94;
	// System.Boolean TMPro.TMP_InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_96;
	// System.Boolean TMPro.TMP_InputField::m_ShouldUpdateIMEWindowPosition
	bool ___m_ShouldUpdateIMEWindowPosition_97;
	// System.Int32 TMPro.TMP_InputField::m_PreviousIMEInsertionLine
	int32_t ___m_PreviousIMEInsertionLine_98;
	// TMPro.TMP_FontAsset TMPro.TMP_InputField::m_GlobalFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_GlobalFontAsset_99;
	// System.Boolean TMPro.TMP_InputField::m_OnFocusSelectAll
	bool ___m_OnFocusSelectAll_100;
	// System.Boolean TMPro.TMP_InputField::m_isSelectAll
	bool ___m_isSelectAll_101;
	// System.Boolean TMPro.TMP_InputField::m_ResetOnDeActivation
	bool ___m_ResetOnDeActivation_102;
	// System.Boolean TMPro.TMP_InputField::m_SelectionStillActive
	bool ___m_SelectionStillActive_103;
	// System.Boolean TMPro.TMP_InputField::m_ReleaseSelection
	bool ___m_ReleaseSelection_104;
	// UnityEngine.GameObject TMPro.TMP_InputField::m_PreviouslySelectedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PreviouslySelectedObject_105;
	// System.Boolean TMPro.TMP_InputField::m_RestoreOriginalTextOnEscape
	bool ___m_RestoreOriginalTextOnEscape_106;
	// System.Boolean TMPro.TMP_InputField::m_isRichTextEditingAllowed
	bool ___m_isRichTextEditingAllowed_107;
	// System.Int32 TMPro.TMP_InputField::m_LineLimit
	int32_t ___m_LineLimit_108;
	// TMPro.TMP_InputValidator TMPro.TMP_InputField::m_InputValidator
	TMP_InputValidator_t3429AF61284AE19180C3FB81C0C7D2F90165EA98* ___m_InputValidator_109;
	// System.Boolean TMPro.TMP_InputField::m_isSelected
	bool ___m_isSelected_110;
	// System.Boolean TMPro.TMP_InputField::m_IsStringPositionDirty
	bool ___m_IsStringPositionDirty_111;
	// System.Boolean TMPro.TMP_InputField::m_IsCaretPositionDirty
	bool ___m_IsCaretPositionDirty_112;
	// System.Boolean TMPro.TMP_InputField::m_forceRectTransformAdjustment
	bool ___m_forceRectTransformAdjustment_113;
	// UnityEngine.Event TMPro.TMP_InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_114;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<UnityEngine.iOS.LocalNotification>
struct List_1_tBC7D8219AE842673418038D26E22D9C0147753F0_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	LocalNotificationU5BU5D_tE368C776C17A10678170E3296450BF5EFA8ED34C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.iOS.LocalNotification>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};

// System.Globalization.CultureInfo

// PlayerPrefsHandler
struct PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_StaticFields
{
	// System.String PlayerPrefsHandler::weight
	String_t* ___weight_0;
	// System.String PlayerPrefsHandler::waterLimit
	String_t* ___waterLimit_1;
	// System.String PlayerPrefsHandler::waterUnit
	String_t* ___waterUnit_2;
	// System.String PlayerPrefsHandler::weightUnit
	String_t* ___weightUnit_3;
	// System.String PlayerPrefsHandler::firstRun
	String_t* ___firstRun_4;
	// System.String PlayerPrefsHandler::dateTime
	String_t* ___dateTime_5;
	// System.String PlayerPrefsHandler::imageFillAmount
	String_t* ___imageFillAmount_6;
};

// PlayerPrefsHandler

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// DrinkWaterController/<WaterFlowDown>d__10

// DrinkWaterController/<WaterFlowDown>d__10

// DrinkWaterController/<WaterFlowLevel>d__8

// DrinkWaterController/<WaterFlowLevel>d__8

// DrinkWaterController/<WaterLevelRaise>d__12

// DrinkWaterController/<WaterLevelRaise>d__12

// NotificationManager/<CallForAlert>d__5

// NotificationManager/<CallForAlert>d__5

// SplashScreen/<FadeInAndFill>d__9

// SplashScreen/<FadeInAndFill>d__9

// System.Collections.Generic.List`1/Enumerator<UnityEngine.iOS.LocalNotification>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.iOS.LocalNotification>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.DateTime
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

// System.DateTime

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Reflection.MethodBase

// System.Reflection.MethodBase

// System.Single

// System.Single

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// UnityEngine.WaitWhile

// UnityEngine.WaitWhile

// UnityEngine.AsyncOperation

// UnityEngine.AsyncOperation

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// UnityEngine.iOS.LocalNotification
struct LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE_StaticFields
{
	// System.Int64 UnityEngine.iOS.LocalNotification::m_NSReferenceDateTicks
	int64_t ___m_NSReferenceDateTicks_1;
};

// UnityEngine.iOS.LocalNotification

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.Func`1<System.Boolean>

// System.Func`1<System.Boolean>

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.CanvasGroup

// UnityEngine.CanvasGroup

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// DrinkWaterController
struct DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3_StaticFields
{
	// System.Int32 DrinkWaterController::waterDrinkAmount
	int32_t ___waterDrinkAmount_8;
};

// DrinkWaterController

// Entities

// Entities

// LoginScreenHandler

// LoginScreenHandler

// MainMenuHandler

// MainMenuHandler

// NotificationManager

// NotificationManager

// Notifications

// Notifications

// ObjectReferenceContainer
struct ObjectReferenceContainer_t9388B07BB597BE5F20F15829C614FCFBE410183D_StaticFields
{
	// ObjectReferenceContainer ObjectReferenceContainer::instance
	ObjectReferenceContainer_t9388B07BB597BE5F20F15829C614FCFBE410183D* ___instance_4;
};

// ObjectReferenceContainer

// SceneHandler
struct SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E_StaticFields
{
	// SceneHandler SceneHandler::instance
	SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E* ___instance_4;
};

// SceneHandler

// SplashScreen

// SplashScreen

// UIReferenceContainer
struct UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8_StaticFields
{
	// UIReferenceContainer UIReferenceContainer::instance
	UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8* ___instance_4;
};

// UIReferenceContainer

// UIReferenceContainerMenu
struct UIReferenceContainerMenu_t17D2EB96B8E18E398DAF7523677C42C6C2A8CA7A_StaticFields
{
	// UIReferenceContainerMenu UIReferenceContainerMenu::instance
	UIReferenceContainerMenu_t17D2EB96B8E18E398DAF7523677C42C6C2A8CA7A* ___instance_4;
};

// UIReferenceContainerMenu

// UnitConversions

// UnitConversions

// WaterCalculator

// WaterCalculator

// iOSPlugin

// iOSPlugin

// iOSPluginCallBacks

// iOSPluginCallBacks

// UnityEngine.UI.Button

// UnityEngine.UI.Button

// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_StaticFields
{
	// System.Char[] TMPro.TMP_InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
};

// TMPro.TMP_InputField

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;

// System.Void iOSPlugin::_ShowAlert(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSPlugin__ShowAlert_m8850BB1D1A62FD258BC6825940B2DA1334CB6047 (String_t* ___0_title, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void iOSPlugin::_ShowAlertConfirmation(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSPlugin__ShowAlertConfirmation_m8CCAA9DB7B777736E53276DDE55B2B58E1D8EA03 (String_t* ___0_title, String_t* ___1_message, String_t* ___2_callback, const RuntimeMethod* method) ;
// System.Void iOSPlugin::_ShareMessage(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSPlugin__ShareMessage_m2C56D1B521E238A216DBE3C27CBB6DE116AD7C86 (String_t* ___0_message, String_t* ___1_url, const RuntimeMethod* method) ;
// System.Int32 iOSPlugin::_GetBatteryStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSPlugin__GetBatteryStatus_m8D19D4EF933BD79E40FF7E3D5EEBE2E1D7FF43A5 (const RuntimeMethod* method) ;
// System.String iOSPlugin::_GetBatteryLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSPlugin__GetBatteryLevel_m80EAEDD2B8A1A4AC57D603AD96359714531CC8AB (const RuntimeMethod* method) ;
// System.String iOSPlugin::_iCloudGetStringValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSPlugin__iCloudGetStringValue_m4DEAEBD59437B5709BA231B4E51E03056D556B43 (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Boolean iOSPlugin::_iCloudSaveStringValue(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSPlugin__iCloudSaveStringValue_m630CF68F2091D9F0B26F49968B2A92BC5C889F0C (String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) ;
// System.Int32 iOSPlugin::_iCloudGetIntValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSPlugin__iCloudGetIntValue_m5B8EA31DBD6558810E37062FAE43E9ADECD6E178 (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Boolean iOSPlugin::_iCloudSaveIntValue(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSPlugin__iCloudSaveIntValue_m5D266A1BB9847FA343D5ECB1C8D5EBDCAD9600A2 (String_t* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Boolean iOSPlugin::_iCloudGetBoolValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSPlugin__iCloudGetBoolValue_mB7AF8C2AF2FE12E056C16B4D7796AAF8245065C0 (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Boolean iOSPlugin::_iCloudSaveBoolValue(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSPlugin__iCloudSaveBoolValue_mF14E2CD53E56D44229FB34E94FB153A8FD5C0AAD (String_t* ___0_key, bool ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void iOSPlugin::ShowAlert(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSPlugin_ShowAlert_mACA826576D4F00BE99F47846C6857A35670DE4EA (String_t* ___0_title, String_t* ___1_message, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_eulers, int32_t ___1_relativeTo, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// ObjectReferenceContainer ObjectReferenceContainer::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectReferenceContainer_t9388B07BB597BE5F20F15829C614FCFBE410183D* ObjectReferenceContainer_get_Instance_m8FFD930C372192AD9824EBE58CFAC738ED6742AF_inline (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.CanvasGroup>()
inline CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* GameObject_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m47C7F4214DFAAC752E331A1073AD1B7EA78DB3DD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UIReferenceContainer UIReferenceContainer::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8* UIReferenceContainer_get_Instance_m81668CAEFAF57FABB353E35F4119C1E4E099A299_inline (const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_call, const RuntimeMethod* method) ;
// System.String PlayerPrefsHandler::get_WaterLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefsHandler_get_WaterLimit_m72E5509C90998F30A324FF81EC9D605FFA88DAE4 (const RuntimeMethod* method) ;
// System.Single PlayerPrefsHandler::get_ImageFillAmount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPrefsHandler_get_ImageFillAmount_m9DB9814B9EE23368FF4D3765169A8C36E359EB18 (const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void DrinkWaterController::SceneStartConfigurations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrinkWaterController_SceneStartConfigurations_m3596069E55A8FF89A7E5FA3AFB5B20541A3E7F17 (DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasGroup::set_blocksRaycasts(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0 (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Collections.IEnumerator DrinkWaterController::WaterFlowLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DrinkWaterController_WaterFlowLevel_mF4AA1C93442DC9F49EA6FA11D1A7ACE9E5A08446 (DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void DrinkWaterController/<WaterFlowLevel>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaterFlowLevelU3Ed__8__ctor_m3E5DC847312D3CE102C25D99D108994B1925E47A (U3CWaterFlowLevelU3Ed__8_t4DB6CA027B4A9AE7154E0DC6B5D861F050CD65F4* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Collections.IEnumerator DrinkWaterController::WaterFlowDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DrinkWaterController_WaterFlowDown_m18ACB520F55B633736525B600D2502B77652B712 (DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* __this, const RuntimeMethod* method) ;
// System.Void DrinkWaterController/<WaterFlowDown>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaterFlowDownU3Ed__10__ctor_mF856B487D120981A8989DE1A2E94F36A9C2A8F2A (U3CWaterFlowDownU3Ed__10_tB51F225775FEC6F03AD8339BF622B32B7A4582C8* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Collections.IEnumerator DrinkWaterController::WaterLevelRaise()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DrinkWaterController_WaterLevelRaise_mC637D89697AD54B7F5924A98564270356DC2E638 (DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* __this, const RuntimeMethod* method) ;
// System.Void DrinkWaterController/<WaterLevelRaise>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaterLevelRaiseU3Ed__12__ctor_m61F401FA585D2B2C9DF847585A479100516D023F (U3CWaterLevelRaiseU3Ed__12_t6367A4EAB06BEB44E8C5340D4BB6C12CA97769A1* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Void PlayerPrefsHandler::set_WaterLimit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefsHandler_set_WaterLimit_m93F663E1F9B96BF87CD35488D8A3F5F4E8FE201A (String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___0_oldValue, String_t* ___1_newValue, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0 (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Void DrinkWaterController::UpdateRemainingAmount(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrinkWaterController_UpdateRemainingAmount_m7C0733983875937F764B7E523A7171B179990F08 (DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* __this, float ___0_total, float ___1_consumed, const RuntimeMethod* method) ;
// System.Void DrinkWaterController::FillSprite(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrinkWaterController_FillSprite_m9BC3CB517EFB63082C8CFCC37BC9EB4C94B18969 (DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* __this, float ___0_result, const RuntimeMethod* method) ;
// System.Single UnityEngine.UI.Image::get_fillAmount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) ;
// System.Void PlayerPrefsHandler::set_ImageFillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefsHandler_set_ImageFillAmount_m9E240851F19133CFC14DBDB12E3E9C179E648097 (float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.WaitWhile::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitWhile__ctor_mF803B2F3BC88135FEA9024F6C51E7267A7E7B82C (WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___0_predicate, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.Void PlayerPrefsHandler::set_DateTime(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefsHandler_set_DateTime_m25278C8DB82F1030A838756C350E6AF66A3DCF73 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.String PlayerPrefsHandler::get_DateTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefsHandler_get_DateTime_mAC25A403E57AB461B279DBCA1CCF4B538112FD2B (const RuntimeMethod* method) ;
// System.Void DrinkWaterController::CalculatePercentage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrinkWaterController_CalculatePercentage_mDB5712EFE98D81F73E09EDF2C05E2DD86BAC4D9E (DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UIReferenceContainerMenu UIReferenceContainerMenu::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UIReferenceContainerMenu_t17D2EB96B8E18E398DAF7523677C42C6C2A8CA7A* UIReferenceContainerMenu_get_Instance_m0399BEA07EA0E8455780E21D97C828418B3121DE_inline (const RuntimeMethod* method) ;
// SceneHandler SceneHandler::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E* SceneHandler_get_Instance_m83009F0DA8BE85EB009B7E24DC1B0104BDE96F99_inline (const RuntimeMethod* method) ;
// System.Void SceneHandler::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneHandler_LoadScene_m9896E40CF55849E8C28C231A648B309535236664 (SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E* __this, String_t* ___0_SceneName, const RuntimeMethod* method) ;
// System.String TMPro.TMP_InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField_set_text_m684E9CDA2D9E82D1C497B5E03DBE79C00584FF62 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void PlayerPrefsHandler::set_Weight(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefsHandler_set_Weight_mCE13E47BF9D8BADEC19774DA0D604FA72D748DB2 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void NotificationManager::NotificationAlertDialoug()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationManager_NotificationAlertDialoug_mC514B6615513A99C8BD8F260211885112EB63F1F (NotificationManager_t420578B78ECCF624ABE7E8D4618BD10D09AFDF51* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Year()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Year_m00A88C4CEE07B7906F5F7F75C254B769808F5138 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Month()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Month_m899C6602DE8198990B2CAF5EBC04CC67764E3DA2 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Day()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Day_m872DBCA4C79955EC1E27EB68746B6C2F6A183B28 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_m1F66A4327FE6B127F0F0E83A70CED25DB0DFFB00 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___0_year, int32_t ___1_month, int32_t ___2_day, int32_t ___3_hour, int32_t ___4_minute, int32_t ___5_second, const RuntimeMethod* method) ;
// System.String System.DateTime::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m447C83E1F8FFFFF4D20C0F7D5C18DEB160F9833A (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.iOS.NotificationServices::RegisterForNotifications(UnityEngine.iOS.NotificationType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationServices_RegisterForNotifications_m1457000D6320F381A3F9838DF038A1764230C6C1 (int32_t ___0_notificationTypes, const RuntimeMethod* method) ;
// System.Void NotificationManager/<CallForAlert>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCallForAlertU3Ed__5__ctor_m3A3BF8074F1D2AF1EF7DCC148754665CA60F63E5 (U3CCallForAlertU3Ed__5_tB1A2E24DB78EBE0DF04BB4D15474B455A9CDF853* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.iOS.NotificationServices::ClearLocalNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationServices_ClearLocalNotifications_m39C507598E8802270E2303A82DCB000114689BD0 (const RuntimeMethod* method) ;
// System.Void UnityEngine.iOS.NotificationServices::CancelAllLocalNotifications()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationServices_CancelAllLocalNotifications_m9E03048322B65663E4FC2A324B4234AA8DECC65E (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.iOS.LocalNotification>::.ctor()
inline void List_1__ctor_m8C5C3A5219BF7F9AB0784DD7BB56AAE024F3B40B (List_1_tBC7D8219AE842673418038D26E22D9C0147753F0* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBC7D8219AE842673418038D26E22D9C0147753F0*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.DateTime System.DateTime::AddSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, double ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.iOS.LocalNotification::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalNotification__ctor_m41B9EDE0CFB6BD6AE50C698CEC09EFCCBFEA7A06 (LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.iOS.LocalNotification::set_applicationIconBadgeNumber(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalNotification_set_applicationIconBadgeNumber_m3E4A0996F0D35112C77F2940219E8DCFBA3D2B1C (LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.iOS.LocalNotification::set_fireDate(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalNotification_set_fireDate_mFCFF86EAA826C8F4D866166AF86F8F5C9747B3EC (LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.iOS.LocalNotification::set_alertTitle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalNotification_set_alertTitle_mAB7164BC4F1C57CB44698CAECF95C1AB52DF1D26 (LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.iOS.LocalNotification::set_alertBody(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalNotification_set_alertBody_m2F91B0DE9B73FC571A607CF4896DEF1E530C97A7 (LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String UnityEngine.iOS.LocalNotification::get_defaultSoundName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LocalNotification_get_defaultSoundName_m36DB8BD2B10EBF580896D5BAA6355B254F61B7F1 (const RuntimeMethod* method) ;
// System.Void UnityEngine.iOS.LocalNotification::set_soundName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalNotification_set_soundName_mDFA366538BB50063B3E7045D85088BDD5097220C (LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.iOS.LocalNotification>::Add(T)
inline void List_1_Add_m49F7A9CBF94A5E7D9E4740C5572617E44F002B94_inline (List_1_tBC7D8219AE842673418038D26E22D9C0147753F0* __this, LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBC7D8219AE842673418038D26E22D9C0147753F0*, LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.DateTime System.DateTime::AddMinutes(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_AddMinutes_m8B24125F1100B23A1D9D9361A2745577062E0D91 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, double ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.iOS.LocalNotification>::GetEnumerator()
inline Enumerator_t408765680189DF655A1ABCEAB37112390080715F List_1_GetEnumerator_m0722EF06E0C1AE2FCACCDC4C432A83C96930120C (List_1_tBC7D8219AE842673418038D26E22D9C0147753F0* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t408765680189DF655A1ABCEAB37112390080715F (*) (List_1_tBC7D8219AE842673418038D26E22D9C0147753F0*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.iOS.LocalNotification>::Dispose()
inline void Enumerator_Dispose_m5204FD9329F260AB7515DAD913AECBF9BF5E7FF3 (Enumerator_t408765680189DF655A1ABCEAB37112390080715F* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t408765680189DF655A1ABCEAB37112390080715F*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.iOS.LocalNotification>::get_Current()
inline LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* Enumerator_get_Current_m15DA3B78D1B425EE75B56128E266511A988A9E42_inline (Enumerator_t408765680189DF655A1ABCEAB37112390080715F* __this, const RuntimeMethod* method)
{
	return ((  LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* (*) (Enumerator_t408765680189DF655A1ABCEAB37112390080715F*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void UnityEngine.iOS.NotificationServices::ScheduleLocalNotification(UnityEngine.iOS.LocalNotification)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationServices_ScheduleLocalNotification_m87B3214B8DE55171DB4AFC97D64296F73AB07CC1 (LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* ___0_notification, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.iOS.LocalNotification>::MoveNext()
inline bool Enumerator_MoveNext_m159A4B78C614DE4179F4857A890D9B837AEBCC5D (Enumerator_t408765680189DF655A1ABCEAB37112390080715F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t408765680189DF655A1ABCEAB37112390080715F*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void UnityEngine.iOS.LocalNotification::set_repeatInterval(UnityEngine.iOS.CalendarUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalNotification_set_repeatInterval_m22BA0394C8682C0661C9CFFEECE1F7B0EF3D34E1 (LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256 (String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) ;
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987 (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___0_key, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285 (String_t* ___0_key, float ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_LoadSceneAsync_m84D316B1993A4E69F9E8CDE30531687B701F9300 (String_t* ___0_sceneName, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SplashScreen::FadeInAndFill()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SplashScreen_FadeInAndFill_m9BC029B2BC27E18422EB1A2F51E3FBA62163F560 (SplashScreen_tA005FEA658015A9DEAEF5988088206BAC2A3B1F4* __this, const RuntimeMethod* method) ;
// System.Void SplashScreen/<FadeInAndFill>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInAndFillU3Ed__9__ctor_mCC798147BF295991CB47C40D76D7E7EBEFD4F234 (U3CFadeInAndFillU3Ed__9_t81F9C4504DD2F631EFE8146AF553D09403363CAD* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mD1B67560310D4E9CC1EA31177CA1CB2CFDFE5D57 (String_t* ___0_s, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C void DEFAULT_CALL _ShowAlert(char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _ShowAlertConfirmation(char*, char*, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL _ShareMessage(char*, char*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _GetBatteryStatus();
IL2CPP_EXTERN_C char* DEFAULT_CALL _GetBatteryLevel();
IL2CPP_EXTERN_C char* DEFAULT_CALL _iCloudGetStringValue(char*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _iCloudSaveStringValue(char*, char*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _iCloudGetIntValue(char*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _iCloudSaveIntValue(char*, int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _iCloudGetBoolValue(char*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL _iCloudSaveBoolValue(char*, int32_t);
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
// System.Void iOSPlugin::_ShowAlert(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSPlugin__ShowAlert_m8850BB1D1A62FD258BC6825940B2DA1334CB6047 (String_t* ___0_title, String_t* ___1_message, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___0_title' to native representation
	char* ____0_title_marshaled = NULL;
	____0_title_marshaled = il2cpp_codegen_marshal_string(___0_title);

	// Marshaling of parameter '___1_message' to native representation
	char* ____1_message_marshaled = NULL;
	____1_message_marshaled = il2cpp_codegen_marshal_string(___1_message);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_ShowAlert)(____0_title_marshaled, ____1_message_marshaled);

	// Marshaling cleanup of parameter '___0_title' native representation
	il2cpp_codegen_marshal_free(____0_title_marshaled);
	____0_title_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_message' native representation
	il2cpp_codegen_marshal_free(____1_message_marshaled);
	____1_message_marshaled = NULL;

}
// System.Void iOSPlugin::_ShowAlertConfirmation(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSPlugin__ShowAlertConfirmation_m8CCAA9DB7B777736E53276DDE55B2B58E1D8EA03 (String_t* ___0_title, String_t* ___1_message, String_t* ___2_callback, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, char*);

	// Marshaling of parameter '___0_title' to native representation
	char* ____0_title_marshaled = NULL;
	____0_title_marshaled = il2cpp_codegen_marshal_string(___0_title);

	// Marshaling of parameter '___1_message' to native representation
	char* ____1_message_marshaled = NULL;
	____1_message_marshaled = il2cpp_codegen_marshal_string(___1_message);

	// Marshaling of parameter '___2_callback' to native representation
	char* ____2_callback_marshaled = NULL;
	____2_callback_marshaled = il2cpp_codegen_marshal_string(___2_callback);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_ShowAlertConfirmation)(____0_title_marshaled, ____1_message_marshaled, ____2_callback_marshaled);

	// Marshaling cleanup of parameter '___0_title' native representation
	il2cpp_codegen_marshal_free(____0_title_marshaled);
	____0_title_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_message' native representation
	il2cpp_codegen_marshal_free(____1_message_marshaled);
	____1_message_marshaled = NULL;

	// Marshaling cleanup of parameter '___2_callback' native representation
	il2cpp_codegen_marshal_free(____2_callback_marshaled);
	____2_callback_marshaled = NULL;

}
// System.Void iOSPlugin::_ShareMessage(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSPlugin__ShareMessage_m2C56D1B521E238A216DBE3C27CBB6DE116AD7C86 (String_t* ___0_message, String_t* ___1_url, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___0_message' to native representation
	char* ____0_message_marshaled = NULL;
	____0_message_marshaled = il2cpp_codegen_marshal_string(___0_message);

	// Marshaling of parameter '___1_url' to native representation
	char* ____1_url_marshaled = NULL;
	____1_url_marshaled = il2cpp_codegen_marshal_string(___1_url);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(_ShareMessage)(____0_message_marshaled, ____1_url_marshaled);

	// Marshaling cleanup of parameter '___0_message' native representation
	il2cpp_codegen_marshal_free(____0_message_marshaled);
	____0_message_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_url' native representation
	il2cpp_codegen_marshal_free(____1_url_marshaled);
	____1_url_marshaled = NULL;

}
// System.Int32 iOSPlugin::_GetBatteryStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSPlugin__GetBatteryStatus_m8D19D4EF933BD79E40FF7E3D5EEBE2E1D7FF43A5 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_GetBatteryStatus)();

	return returnValue;
}
// System.String iOSPlugin::_GetBatteryLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSPlugin__GetBatteryLevel_m80EAEDD2B8A1A4AC57D603AD96359714531CC8AB (const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(_GetBatteryLevel)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String iOSPlugin::_iCloudGetStringValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSPlugin__iCloudGetStringValue_m4DEAEBD59437B5709BA231B4E51E03056D556B43 (String_t* ___0_key, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_key' to native representation
	char* ____0_key_marshaled = NULL;
	____0_key_marshaled = il2cpp_codegen_marshal_string(___0_key);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(_iCloudGetStringValue)(____0_key_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___0_key' native representation
	il2cpp_codegen_marshal_free(____0_key_marshaled);
	____0_key_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.Boolean iOSPlugin::_iCloudSaveStringValue(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSPlugin__iCloudSaveStringValue_m630CF68F2091D9F0B26F49968B2A92BC5C889F0C (String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___0_key' to native representation
	char* ____0_key_marshaled = NULL;
	____0_key_marshaled = il2cpp_codegen_marshal_string(___0_key);

	// Marshaling of parameter '___1_value' to native representation
	char* ____1_value_marshaled = NULL;
	____1_value_marshaled = il2cpp_codegen_marshal_string(___1_value);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_iCloudSaveStringValue)(____0_key_marshaled, ____1_value_marshaled);

	// Marshaling cleanup of parameter '___0_key' native representation
	il2cpp_codegen_marshal_free(____0_key_marshaled);
	____0_key_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_value' native representation
	il2cpp_codegen_marshal_free(____1_value_marshaled);
	____1_value_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Int32 iOSPlugin::_iCloudGetIntValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSPlugin__iCloudGetIntValue_m5B8EA31DBD6558810E37062FAE43E9ADECD6E178 (String_t* ___0_key, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_key' to native representation
	char* ____0_key_marshaled = NULL;
	____0_key_marshaled = il2cpp_codegen_marshal_string(___0_key);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_iCloudGetIntValue)(____0_key_marshaled);

	// Marshaling cleanup of parameter '___0_key' native representation
	il2cpp_codegen_marshal_free(____0_key_marshaled);
	____0_key_marshaled = NULL;

	return returnValue;
}
// System.Boolean iOSPlugin::_iCloudSaveIntValue(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSPlugin__iCloudSaveIntValue_m5D266A1BB9847FA343D5ECB1C8D5EBDCAD9600A2 (String_t* ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	// Marshaling of parameter '___0_key' to native representation
	char* ____0_key_marshaled = NULL;
	____0_key_marshaled = il2cpp_codegen_marshal_string(___0_key);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_iCloudSaveIntValue)(____0_key_marshaled, ___1_value);

	// Marshaling cleanup of parameter '___0_key' native representation
	il2cpp_codegen_marshal_free(____0_key_marshaled);
	____0_key_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Boolean iOSPlugin::_iCloudGetBoolValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSPlugin__iCloudGetBoolValue_mB7AF8C2AF2FE12E056C16B4D7796AAF8245065C0 (String_t* ___0_key, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_key' to native representation
	char* ____0_key_marshaled = NULL;
	____0_key_marshaled = il2cpp_codegen_marshal_string(___0_key);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_iCloudGetBoolValue)(____0_key_marshaled);

	// Marshaling cleanup of parameter '___0_key' native representation
	il2cpp_codegen_marshal_free(____0_key_marshaled);
	____0_key_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Boolean iOSPlugin::_iCloudSaveBoolValue(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSPlugin__iCloudSaveBoolValue_mF14E2CD53E56D44229FB34E94FB153A8FD5C0AAD (String_t* ___0_key, bool ___1_value, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	// Marshaling of parameter '___0_key' to native representation
	char* ____0_key_marshaled = NULL;
	____0_key_marshaled = il2cpp_codegen_marshal_string(___0_key);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(_iCloudSaveBoolValue)(____0_key_marshaled, static_cast<int32_t>(___1_value));

	// Marshaling cleanup of parameter '___0_key' native representation
	il2cpp_codegen_marshal_free(____0_key_marshaled);
	____0_key_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Void iOSPlugin::ShowAlert(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSPlugin_ShowAlert_mACA826576D4F00BE99F47846C6857A35670DE4EA (String_t* ___0_title, String_t* ___1_message, const RuntimeMethod* method) 
{
	{
		// _ShowAlert(title, message);
		String_t* L_0 = ___0_title;
		String_t* L_1 = ___1_message;
		iOSPlugin__ShowAlert_m8850BB1D1A62FD258BC6825940B2DA1334CB6047(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void iOSPlugin::ShowAlertConfirmation(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSPlugin_ShowAlertConfirmation_m8FA9FB78E3FF0DCF8E6779A178D8A48A0475225C (String_t* ___0_title, String_t* ___1_message, String_t* ___2_callBack, const RuntimeMethod* method) 
{
	{
		// _ShowAlertConfirmation(title, message, callBack);
		String_t* L_0 = ___0_title;
		String_t* L_1 = ___1_message;
		String_t* L_2 = ___2_callBack;
		iOSPlugin__ShowAlertConfirmation_m8CCAA9DB7B777736E53276DDE55B2B58E1D8EA03(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void iOSPlugin::ShareMessage(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSPlugin_ShareMessage_m3B4D049D0DC06FDB614E901A975B94D2A1F6363A (String_t* ___0_message, String_t* ___1_url, const RuntimeMethod* method) 
{
	{
		// _ShareMessage(message, url);
		String_t* L_0 = ___0_message;
		String_t* L_1 = ___1_url;
		iOSPlugin__ShareMessage_m2C56D1B521E238A216DBE3C27CBB6DE116AD7C86(L_0, L_1, NULL);
		// }
		return;
	}
}
// iOSPlugin/BatteryStatus iOSPlugin::GetBatteryStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSPlugin_GetBatteryStatus_mC90759EBC7E4D8057144BBB33BC3DAB87DB4931F (const RuntimeMethod* method) 
{
	{
		// return (BatteryStatus)_GetBatteryStatus();
		int32_t L_0;
		L_0 = iOSPlugin__GetBatteryStatus_m8D19D4EF933BD79E40FF7E3D5EEBE2E1D7FF43A5(NULL);
		return (int32_t)(L_0);
	}
}
// System.String iOSPlugin::GetBatteryLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSPlugin_GetBatteryLevel_m834E5BF05B792A78A9356D10A371B64CF0008CC6 (const RuntimeMethod* method) 
{
	{
		// return _GetBatteryLevel();
		String_t* L_0;
		L_0 = iOSPlugin__GetBatteryLevel_m80EAEDD2B8A1A4AC57D603AD96359714531CC8AB(NULL);
		return L_0;
	}
}
// System.String iOSPlugin::iCloudGetStringValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSPlugin_iCloudGetStringValue_m1EF4620AB8BBE38C91A07EE5D3F607D9E15E86BC (String_t* ___0_key, const RuntimeMethod* method) 
{
	{
		// return _iCloudGetStringValue(key);
		String_t* L_0 = ___0_key;
		String_t* L_1;
		L_1 = iOSPlugin__iCloudGetStringValue_m4DEAEBD59437B5709BA231B4E51E03056D556B43(L_0, NULL);
		return L_1;
	}
}
// System.Boolean iOSPlugin::iCloudSaveStringValue(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSPlugin_iCloudSaveStringValue_mD41671F588145AD617DEFD8B8B662D724EC0F19F (String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) 
{
	{
		// return _iCloudSaveStringValue(key, value);
		String_t* L_0 = ___0_key;
		String_t* L_1 = ___1_value;
		bool L_2;
		L_2 = iOSPlugin__iCloudSaveStringValue_m630CF68F2091D9F0B26F49968B2A92BC5C889F0C(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Int32 iOSPlugin::iCloudGetIntValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t iOSPlugin_iCloudGetIntValue_mE225521CEA5DD5AA46BD898996B845752E467C6F (String_t* ___0_key, const RuntimeMethod* method) 
{
	{
		// return _iCloudGetIntValue(key);
		String_t* L_0 = ___0_key;
		int32_t L_1;
		L_1 = iOSPlugin__iCloudGetIntValue_m5B8EA31DBD6558810E37062FAE43E9ADECD6E178(L_0, NULL);
		return L_1;
	}
}
// System.Boolean iOSPlugin::iCloudSaveIntValue(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSPlugin_iCloudSaveIntValue_m974AFFD2918D931F7A5090BDCF9AD874DE67F6D7 (String_t* ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		// return _iCloudSaveIntValue(key, value);
		String_t* L_0 = ___0_key;
		int32_t L_1 = ___1_value;
		bool L_2;
		L_2 = iOSPlugin__iCloudSaveIntValue_m5D266A1BB9847FA343D5ECB1C8D5EBDCAD9600A2(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean iOSPlugin::iCloudGetBoolValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSPlugin_iCloudGetBoolValue_mA5E32E9299EF6CD0126D4F45F061AEB1A334DCD0 (String_t* ___0_key, const RuntimeMethod* method) 
{
	{
		// return _iCloudGetBoolValue(key);
		String_t* L_0 = ___0_key;
		bool L_1;
		L_1 = iOSPlugin__iCloudGetBoolValue_mB7AF8C2AF2FE12E056C16B4D7796AAF8245065C0(L_0, NULL);
		return L_1;
	}
}
// System.Boolean iOSPlugin::iCloudSaveBoolValue(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSPlugin_iCloudSaveBoolValue_mDE16639A25EDA359F68FA64E22EB78EF1A478FEE (String_t* ___0_key, bool ___1_value, const RuntimeMethod* method) 
{
	{
		// return _iCloudSaveBoolValue(key, value);
		String_t* L_0 = ___0_key;
		bool L_1 = ___1_value;
		bool L_2;
		L_2 = iOSPlugin__iCloudSaveBoolValue_mF14E2CD53E56D44229FB34E94FB153A8FD5C0AAD(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void iOSPlugin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSPlugin__ctor_m5598AFD0204557D62AB830954CB3ABF2973EC5F5 (iOSPlugin_tF5443859614198ACB7968F031B43314B6ECD2371* __this, const RuntimeMethod* method) 
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
// System.Void iOSPluginCallBacks::CallBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSPluginCallBacks_CallBack_mCCD14932BB0CB9A7A8D8444223427FDA26801CBC (iOSPluginCallBacks_t9DDAD36CA294C0B42F1F8BDC37D4B2FC692146E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09274127B4E98962E011314AD4C3A0E6B677963A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&iOSPluginCallBacks_CallBack_mCCD14932BB0CB9A7A8D8444223427FDA26801CBC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// iOSPlugin.ShowAlert($"{MethodBase.GetCurrentMethod()}", "Callback Executed...");
		MethodBase_t* L_0;
		L_0 = il2cpp_codegen_get_method_object(iOSPluginCallBacks_CallBack_mCCD14932BB0CB9A7A8D8444223427FDA26801CBC_RuntimeMethod_var);
		String_t* L_1;
		L_1 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94, L_0, NULL);
		iOSPlugin_ShowAlert_mACA826576D4F00BE99F47846C6857A35670DE4EA(L_1, _stringLiteral09274127B4E98962E011314AD4C3A0E6B677963A, NULL);
		// }
		return;
	}
}
// System.Void iOSPluginCallBacks::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSPluginCallBacks_Update_m39B42C67A910F7ADC10B4F434743561A63FC3CDF (iOSPluginCallBacks_t9DDAD36CA294C0B42F1F8BDC37D4B2FC692146E5* __this, const RuntimeMethod* method) 
{
	{
		// if(rotateUp)
		bool L_0 = __this->___rotateUp_6;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		// rotatorObject.transform.Rotate(rotationSpeed * Time.deltaTime, Space.World);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___rotatorObject_4;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___rotationSpeed_5;
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		NullCheck(L_2);
		Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A(L_2, L_5, 0, NULL);
		return;
	}

IL_002a:
	{
		// rotatorObject.transform.Rotate(new Vector3(-rotationSpeed.x, rotationSpeed.y, rotationSpeed.z) * Time.deltaTime, Space.World);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___rotatorObject_4;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = (&__this->___rotationSpeed_5);
		float L_9 = L_8->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_10 = (&__this->___rotationSpeed_5);
		float L_11 = L_10->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12 = (&__this->___rotationSpeed_5);
		float L_13 = L_12->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), ((-L_9)), L_11, L_13, /*hidden argument*/NULL);
		float L_15;
		L_15 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_14, L_15, NULL);
		NullCheck(L_7);
		Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A(L_7, L_16, 0, NULL);
		// }
		return;
	}
}
// System.Void iOSPluginCallBacks::RotateUpCallBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSPluginCallBacks_RotateUpCallBack_mC325F50C5ACC6FB916CC26706E56DDE7146C205C (iOSPluginCallBacks_t9DDAD36CA294C0B42F1F8BDC37D4B2FC692146E5* __this, const RuntimeMethod* method) 
{
	{
		// rotateUp = true;
		__this->___rotateUp_6 = (bool)1;
		// }
		return;
	}
}
// System.Void iOSPluginCallBacks::RotateDownCallBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSPluginCallBacks_RotateDownCallBack_m1CDC3AF7C831DC1CB6C115B216627A142156CB9B (iOSPluginCallBacks_t9DDAD36CA294C0B42F1F8BDC37D4B2FC692146E5* __this, const RuntimeMethod* method) 
{
	{
		// rotateUp = false;
		__this->___rotateUp_6 = (bool)0;
		// }
		return;
	}
}
// System.Void iOSPluginCallBacks::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSPluginCallBacks__ctor_m93FB471A2936017866DAB36D0F91CA2DA70F791C (iOSPluginCallBacks_t9DDAD36CA294C0B42F1F8BDC37D4B2FC692146E5* __this, const RuntimeMethod* method) 
{
	{
		// private Vector3 rotationSpeed = new Vector3(100,0,0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (100.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___rotationSpeed_5 = L_0;
		// private bool rotateUp = true;
		__this->___rotateUp_6 = (bool)1;
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
// System.Void DrinkWaterController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrinkWaterController_Start_m2287AB65AC2B569949F613CE2578B859D418597F (DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DrinkWaterController_CalenderMenu_m693FBB9CB23D32D82AB2015F6F5052B8BA2DF243_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DrinkWaterController_CloseButton_m5935A11B9E81CA590C375BD855A4252753519BBA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DrinkWaterController_DrinkWaterOkButton_mABFBEB84C7E530ED25C488C4C87CA95AA74CD231_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DrinkWaterController_DrinkWater_mF14208C7D40131C5E9EA6124A9702A9E0FD646A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DrinkWaterController_NotificationPanel_m425F6A3D48FD86A5A17CFDBD183B766EA54E2A4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DrinkWaterController_OpenCalculator_m4F187881E435890887D44380EF7638782F9F417E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DrinkWaterController_OpenUnitPanel_m303C9D1BD63CE8E89AEEE5624D38D2421A8B415F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DrinkWaterController_SettingButton_m5E17E6158FAE3E88706770A12D2C0F01A44AA575_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m47C7F4214DFAAC752E331A1073AD1B7EA78DB3DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// waterLevelSliderCanves = ObjectReferenceContainer.Instance.waterLimitSlider.GetComponent<CanvasGroup>();
		ObjectReferenceContainer_t9388B07BB597BE5F20F15829C614FCFBE410183D* L_0;
		L_0 = ObjectReferenceContainer_get_Instance_m8FFD930C372192AD9824EBE58CFAC738ED6742AF_inline(NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = L_0->___waterLimitSlider_5;
		NullCheck(L_1);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_2;
		L_2 = GameObject_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m47C7F4214DFAAC752E331A1073AD1B7EA78DB3DD(L_1, GameObject_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m47C7F4214DFAAC752E331A1073AD1B7EA78DB3DD_RuntimeMethod_var);
		__this->___waterLevelSliderCanves_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___waterLevelSliderCanves_4), (void*)L_2);
		// UIReferenceContainer.Instance.drinkWaterButton.onClick.AddListener(DrinkWater);
		UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8* L_3;
		L_3 = UIReferenceContainer_get_Instance_m81668CAEFAF57FABB353E35F4119C1E4E099A299_inline(NULL);
		NullCheck(L_3);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = L_3->___drinkWaterButton_5;
		NullCheck(L_4);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_5;
		L_5 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_4, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_6, __this, (intptr_t)((void*)DrinkWaterController_DrinkWater_mF14208C7D40131C5E9EA6124A9702A9E0FD646A7_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_5, L_6, NULL);
		// UIReferenceContainer.Instance.sliderCancelButton.onClick.AddListener(CloseButton);
		UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8* L_7;
		L_7 = UIReferenceContainer_get_Instance_m81668CAEFAF57FABB353E35F4119C1E4E099A299_inline(NULL);
		NullCheck(L_7);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_8 = L_7->___sliderCancelButton_6;
		NullCheck(L_8);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_9;
		L_9 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_8, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_10 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_10, __this, (intptr_t)((void*)DrinkWaterController_CloseButton_m5935A11B9E81CA590C375BD855A4252753519BBA_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_9, L_10, NULL);
		// UIReferenceContainer.Instance.sliderOkButton.onClick.AddListener(DrinkWaterOkButton);
		UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8* L_11;
		L_11 = UIReferenceContainer_get_Instance_m81668CAEFAF57FABB353E35F4119C1E4E099A299_inline(NULL);
		NullCheck(L_11);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_12 = L_11->___sliderOkButton_7;
		NullCheck(L_12);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_13;
		L_13 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_12, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_14 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_14, __this, (intptr_t)((void*)DrinkWaterController_DrinkWaterOkButton_mABFBEB84C7E530ED25C488C4C87CA95AA74CD231_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_13, L_14, NULL);
		// UIReferenceContainer.Instance.settingButton.onClick.AddListener(SettingButton);
		UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8* L_15;
		L_15 = UIReferenceContainer_get_Instance_m81668CAEFAF57FABB353E35F4119C1E4E099A299_inline(NULL);
		NullCheck(L_15);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_16 = L_15->___settingButton_8;
		NullCheck(L_16);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_17;
		L_17 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_16, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_18 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_18, __this, (intptr_t)((void*)DrinkWaterController_SettingButton_m5E17E6158FAE3E88706770A12D2C0F01A44AA575_RuntimeMethod_var), NULL);
		NullCheck(L_17);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_17, L_18, NULL);
		// UIReferenceContainer.Instance.NotificationButton.onClick.AddListener(NotificationPanel);
		UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8* L_19;
		L_19 = UIReferenceContainer_get_Instance_m81668CAEFAF57FABB353E35F4119C1E4E099A299_inline(NULL);
		NullCheck(L_19);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_20 = L_19->___NotificationButton_9;
		NullCheck(L_20);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_21;
		L_21 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_20, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_22 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_22, __this, (intptr_t)((void*)DrinkWaterController_NotificationPanel_m425F6A3D48FD86A5A17CFDBD183B766EA54E2A4A_RuntimeMethod_var), NULL);
		NullCheck(L_21);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_21, L_22, NULL);
		// UIReferenceContainer.Instance.CalenderButton.onClick.AddListener(CalenderMenu);
		UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8* L_23;
		L_23 = UIReferenceContainer_get_Instance_m81668CAEFAF57FABB353E35F4119C1E4E099A299_inline(NULL);
		NullCheck(L_23);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_24 = L_23->___CalenderButton_10;
		NullCheck(L_24);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_25;
		L_25 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_24, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_26 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_26, __this, (intptr_t)((void*)DrinkWaterController_CalenderMenu_m693FBB9CB23D32D82AB2015F6F5052B8BA2DF243_RuntimeMethod_var), NULL);
		NullCheck(L_25);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_25, L_26, NULL);
		// UIReferenceContainer.Instance.calculatorButton.onClick.AddListener(OpenCalculator);
		UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8* L_27;
		L_27 = UIReferenceContainer_get_Instance_m81668CAEFAF57FABB353E35F4119C1E4E099A299_inline(NULL);
		NullCheck(L_27);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_28 = L_27->___calculatorButton_15;
		NullCheck(L_28);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_29;
		L_29 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_28, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_30 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_30, __this, (intptr_t)((void*)DrinkWaterController_OpenCalculator_m4F187881E435890887D44380EF7638782F9F417E_RuntimeMethod_var), NULL);
		NullCheck(L_29);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_29, L_30, NULL);
		// UIReferenceContainer.Instance.unitButton.onClick.AddListener(OpenUnitPanel);
		UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8* L_31;
		L_31 = UIReferenceContainer_get_Instance_m81668CAEFAF57FABB353E35F4119C1E4E099A299_inline(NULL);
		NullCheck(L_31);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_32 = L_31->___unitButton_16;
		NullCheck(L_32);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_33;
		L_33 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_32, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_34 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_34, __this, (intptr_t)((void*)DrinkWaterController_OpenUnitPanel_m303C9D1BD63CE8E89AEEE5624D38D2421A8B415F_RuntimeMethod_var), NULL);
		NullCheck(L_33);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_33, L_34, NULL);
		// myAnimator = ObjectReferenceContainer.Instance.MainScreenAnimator;
		ObjectReferenceContainer_t9388B07BB597BE5F20F15829C614FCFBE410183D* L_35;
		L_35 = ObjectReferenceContainer_get_Instance_m8FFD930C372192AD9824EBE58CFAC738ED6742AF_inline(NULL);
		NullCheck(L_35);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_36 = L_35->___MainScreenAnimator_6;
		__this->___myAnimator_5 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myAnimator_5), (void*)L_36);
		// UIReferenceContainer.Instance.waterLimit.text = PlayerPrefsHandler.WaterLimit.ToString();
		UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8* L_37;
		L_37 = UIReferenceContainer_get_Instance_m81668CAEFAF57FABB353E35F4119C1E4E099A299_inline(NULL);
		NullCheck(L_37);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_38 = L_37->___waterLimit_12;
		il2cpp_codegen_runtime_class_init_inline(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		String_t* L_39;
		L_39 = PlayerPrefsHandler_get_WaterLimit_m72E5509C90998F30A324FF81EC9D605FFA88DAE4(NULL);
		NullCheck(L_39);
		String_t* L_40;
		L_40 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_39);
		NullCheck(L_38);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_38, L_40);
		// UIReferenceContainer.Instance.drinkWaterFiller.fillAmount = PlayerPrefsHandler.ImageFillAmount;
		UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8* L_41;
		L_41 = UIReferenceContainer_get_Instance_m81668CAEFAF57FABB353E35F4119C1E4E099A299_inline(NULL);
		NullCheck(L_41);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_42 = L_41->___drinkWaterFiller_11;
		float L_43;
		L_43 = PlayerPrefsHandler_get_ImageFillAmount_m9DB9814B9EE23368FF4D3765169A8C36E359EB18(NULL);
		NullCheck(L_42);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_42, L_43, NULL);
		// SceneStartConfigurations();
		DrinkWaterController_SceneStartConfigurations_m3596069E55A8FF89A7E5FA3AFB5B20541A3E7F17(__this, NULL);
		// }
		return;
	}
}
// System.Void DrinkWaterController::SceneStartConfigurations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrinkWaterController_SceneStartConfigurations_m3596069E55A8FF89A7E5FA3AFB5B20541A3E7F17 (DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C08B2C693EC6CAD0F319E3C4DC54CADB82533F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("here the plsyerprefs is " + PlayerPrefsHandler.WaterLimit);
		il2cpp_codegen_runtime_class_init_inline(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = PlayerPrefsHandler_get_WaterLimit_m72E5509C90998F30A324FF81EC9D605FFA88DAE4(NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral8C08B2C693EC6CAD0F319E3C4DC54CADB82533F8, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// waterLevelSliderCanves.alpha = 0;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_2 = __this->___waterLevelSliderCanves_4;
		NullCheck(L_2);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_2, (0.0f), NULL);
		// waterLevelSliderCanves.blocksRaycasts = false;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_3 = __this->___waterLevelSliderCanves_4;
		NullCheck(L_3);
		CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0(L_3, (bool)0, NULL);
		// if (UIReferenceContainer.Instance.waterLimit.text != null)
		UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8* L_4;
		L_4 = UIReferenceContainer_get_Instance_m81668CAEFAF57FABB353E35F4119C1E4E099A299_inline(NULL);
		NullCheck(L_4);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = L_4->___waterLimit_12;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_5);
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		// UIReferenceContainer.Instance.waterLimit.text = PlayerPrefsHandler.WaterLimit.ToString();
		UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8* L_7;
		L_7 = UIReferenceContainer_get_Instance_m81668CAEFAF57FABB353E35F4119C1E4E099A299_inline(NULL);
		NullCheck(L_7);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = L_7->___waterLimit_12;
		il2cpp_codegen_runtime_class_init_inline(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = PlayerPrefsHandler_get_WaterLimit_m72E5509C90998F30A324FF81EC9D605FFA88DAE4(NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_9);
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_10);
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void DrinkWaterController::DrinkWater()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrinkWaterController_DrinkWater_mF14208C7D40131C5E9EA6124A9702A9E0FD646A7 (DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(WaterFlowLevel());
		RuntimeObject* L_0;
		L_0 = DrinkWaterController_WaterFlowLevel_mF4AA1C93442DC9F49EA6FA11D1A7ACE9E5A08446(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator DrinkWaterController::WaterFlowLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DrinkWaterController_WaterFlowLevel_mF4AA1C93442DC9F49EA6FA11D1A7ACE9E5A08446 (DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaterFlowLevelU3Ed__8_t4DB6CA027B4A9AE7154E0DC6B5D861F050CD65F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaterFlowLevelU3Ed__8_t4DB6CA027B4A9AE7154E0DC6B5D861F050CD65F4* L_0 = (U3CWaterFlowLevelU3Ed__8_t4DB6CA027B4A9AE7154E0DC6B5D861F050CD65F4*)il2cpp_codegen_object_new(U3CWaterFlowLevelU3Ed__8_t4DB6CA027B4A9AE7154E0DC6B5D861F050CD65F4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaterFlowLevelU3Ed__8__ctor_m3E5DC847312D3CE102C25D99D108994B1925E47A(L_0, 0, NULL);
		U3CWaterFlowLevelU3Ed__8_t4DB6CA027B4A9AE7154E0DC6B5D861F050CD65F4* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void DrinkWaterController::CloseButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrinkWaterController_CloseButton_m5935A11B9E81CA590C375BD855A4252753519BBA (DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(WaterFlowDown());
		RuntimeObject* L_0;
		L_0 = DrinkWaterController_WaterFlowDown_m18ACB520F55B633736525B600D2502B77652B712(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator DrinkWaterController::WaterFlowDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DrinkWaterController_WaterFlowDown_m18ACB520F55B633736525B600D2502B77652B712 (DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaterFlowDownU3Ed__10_tB51F225775FEC6F03AD8339BF622B32B7A4582C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaterFlowDownU3Ed__10_tB51F225775FEC6F03AD8339BF622B32B7A4582C8* L_0 = (U3CWaterFlowDownU3Ed__10_tB51F225775FEC6F03AD8339BF622B32B7A4582C8*)il2cpp_codegen_object_new(U3CWaterFlowDownU3Ed__10_tB51F225775FEC6F03AD8339BF622B32B7A4582C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaterFlowDownU3Ed__10__ctor_mF856B487D120981A8989DE1A2E94F36A9C2A8F2A(L_0, 0, NULL);
		U3CWaterFlowDownU3Ed__10_tB51F225775FEC6F03AD8339BF622B32B7A4582C8* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void DrinkWaterController::DrinkWaterOkButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrinkWaterController_DrinkWaterOkButton_mABFBEB84C7E530ED25C488C4C87CA95AA74CD231 (DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(WaterFlowDown());
		RuntimeObject* L_0;
		L_0 = DrinkWaterController_WaterFlowDown_m18ACB520F55B633736525B600D2502B77652B712(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// StartCoroutine(WaterLevelRaise());
		RuntimeObject* L_2;
		L_2 = DrinkWaterController_WaterLevelRaise_mC637D89697AD54B7F5924A98564270356DC2E638(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator DrinkWaterController::WaterLevelRaise()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DrinkWaterController_WaterLevelRaise_mC637D89697AD54B7F5924A98564270356DC2E638 (DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaterLevelRaiseU3Ed__12_t6367A4EAB06BEB44E8C5340D4BB6C12CA97769A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaterLevelRaiseU3Ed__12_t6367A4EAB06BEB44E8C5340D4BB6C12CA97769A1* L_0 = (U3CWaterLevelRaiseU3Ed__12_t6367A4EAB06BEB44E8C5340D4BB6C12CA97769A1*)il2cpp_codegen_object_new(U3CWaterLevelRaiseU3Ed__12_t6367A4EAB06BEB44E8C5340D4BB6C12CA97769A1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaterLevelRaiseU3Ed__12__ctor_m61F401FA585D2B2C9DF847585A479100516D023F(L_0, 0, NULL);
		U3CWaterLevelRaiseU3Ed__12_t6367A4EAB06BEB44E8C5340D4BB6C12CA97769A1* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void DrinkWaterController::UpdateRemainingAmount(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrinkWaterController_UpdateRemainingAmount_m7C0733983875937F764B7E523A7171B179990F08 (DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* __this, float ___0_total, float ___1_consumed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE06B55C4BBE3AA67B273C38DB42C4D3F91B17F7A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// total = total - consumed;
		float L_0 = ___0_total;
		float L_1 = ___1_consumed;
		___0_total = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// PlayerPrefsHandler.WaterLimit = total.ToString() + "ml";
		String_t* L_2;
		L_2 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___0_total), NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_2, _stringLiteralE06B55C4BBE3AA67B273C38DB42C4D3F91B17F7A, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		PlayerPrefsHandler_set_WaterLimit_m93F663E1F9B96BF87CD35488D8A3F5F4E8FE201A(L_3, NULL);
		// UIReferenceContainer.Instance.waterLimit.text = PlayerPrefsHandler.WaterLimit.ToString();
		UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8* L_4;
		L_4 = UIReferenceContainer_get_Instance_m81668CAEFAF57FABB353E35F4119C1E4E099A299_inline(NULL);
		NullCheck(L_4);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = L_4->___waterLimit_12;
		String_t* L_6;
		L_6 = PlayerPrefsHandler_get_WaterLimit_m72E5509C90998F30A324FF81EC9D605FFA88DAE4(NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_7);
		// }
		return;
	}
}
// System.Void DrinkWaterController::CalculatePercentage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrinkWaterController_CalculatePercentage_mDB5712EFE98D81F73E09EDF2C05E2DD86BAC4D9E (DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AFBC3CA03AED7A5F7BD7427E75A126B6DF6901F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE06B55C4BBE3AA67B273C38DB42C4D3F91B17F7A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		// string abc = (PlayerPrefsHandler.WaterLimit).Replace("ml","");
		il2cpp_codegen_runtime_class_init_inline(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = PlayerPrefsHandler_get_WaterLimit_m72E5509C90998F30A324FF81EC9D605FFA88DAE4(NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_0, _stringLiteralE06B55C4BBE3AA67B273C38DB42C4D3F91B17F7A, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// int x = int.Parse(abc);
		int32_t L_2;
		L_2 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_1, NULL);
		V_0 = L_2;
		// int y = waterDrinkAmount;
		int32_t L_3 = ((DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3_StaticFields*)il2cpp_codegen_static_fields_for(DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3_il2cpp_TypeInfo_var))->___waterDrinkAmount_8;
		V_1 = L_3;
		// float result = y * 100;
		int32_t L_4 = V_1;
		// float percentage = result / x;
		int32_t L_5 = V_0;
		V_2 = ((float)(((float)((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)100))))/((float)L_5)));
		// Debug.Log("You drink of water"+ percentage);
		String_t* L_6;
		L_6 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_2), NULL);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral8AFBC3CA03AED7A5F7BD7427E75A126B6DF6901F, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		// UpdateRemainingAmount(x,y);
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		DrinkWaterController_UpdateRemainingAmount_m7C0733983875937F764B7E523A7171B179990F08(__this, ((float)L_8), ((float)L_9), NULL);
		// FillSprite(percentage);
		float L_10 = V_2;
		DrinkWaterController_FillSprite_m9BC3CB517EFB63082C8CFCC37BC9EB4C94B18969(__this, L_10, NULL);
		// }
		return;
	}
}
// System.Void DrinkWaterController::FillSprite(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrinkWaterController_FillSprite_m9BC3CB517EFB63082C8CFCC37BC9EB4C94B18969 (DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* __this, float ___0_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float final = result / 100;
		float L_0 = ___0_result;
		V_0 = ((float)(L_0/(100.0f)));
		// float fillrate = UIReferenceContainer.Instance.drinkWaterFiller.fillAmount;
		UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8* L_1;
		L_1 = UIReferenceContainer_get_Instance_m81668CAEFAF57FABB353E35F4119C1E4E099A299_inline(NULL);
		NullCheck(L_1);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = L_1->___drinkWaterFiller_11;
		NullCheck(L_2);
		float L_3;
		L_3 = Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline(L_2, NULL);
		// fillrate += final;
		float L_4 = V_0;
		// PlayerPrefsHandler.ImageFillAmount = fillrate;
		il2cpp_codegen_runtime_class_init_inline(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		PlayerPrefsHandler_set_ImageFillAmount_m9E240851F19133CFC14DBDB12E3E9C179E648097(((float)il2cpp_codegen_add(L_3, L_4)), NULL);
		// }
		return;
	}
}
// System.Void DrinkWaterController::SettingButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrinkWaterController_SettingButton_m5E17E6158FAE3E88706770A12D2C0F01A44AA575 (DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1065D06F317F557E6457D2B703675A090B18AC8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myAnimator.SetTrigger("Setting");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___myAnimator_5;
		NullCheck(L_0);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_0, _stringLiteralB1065D06F317F557E6457D2B703675A090B18AC8, NULL);
		// }
		return;
	}
}
// System.Void DrinkWaterController::SettingDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrinkWaterController_SettingDone_m5BEFC1D2958857B3D16495B9C9193601A5517BEB (DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E3496F6157D2F28ED53087711925DA7D714C857);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myAnimator.SetTrigger("SettingClose");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___myAnimator_5;
		NullCheck(L_0);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_0, _stringLiteral5E3496F6157D2F28ED53087711925DA7D714C857, NULL);
		// }
		return;
	}
}
// System.Void DrinkWaterController::NotificationPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrinkWaterController_NotificationPanel_m425F6A3D48FD86A5A17CFDBD183B766EA54E2A4A (DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3828858EDDADFB2AEC895F54A3E3F0586C7AC85C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myAnimator.SetTrigger("Notification");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___myAnimator_5;
		NullCheck(L_0);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_0, _stringLiteral3828858EDDADFB2AEC895F54A3E3F0586C7AC85C, NULL);
		// }
		return;
	}
}
// System.Void DrinkWaterController::NotificationPanelDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrinkWaterController_NotificationPanelDone_mE1384BF25739DD595DA6C05F080E7BAECB97D352 (DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A44083BB07993C684E9F18FC6EC7B7DDB39FB90);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myAnimator.SetTrigger("NotificationClose");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___myAnimator_5;
		NullCheck(L_0);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_0, _stringLiteral8A44083BB07993C684E9F18FC6EC7B7DDB39FB90, NULL);
		// }
		return;
	}
}
// System.Void DrinkWaterController::CalenderMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrinkWaterController_CalenderMenu_m693FBB9CB23D32D82AB2015F6F5052B8BA2DF243 (DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAB7006C1C3636568BC3E4FA7FDEA950576B0718);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myAnimator.SetTrigger("Calender");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___myAnimator_5;
		NullCheck(L_0);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_0, _stringLiteralBAB7006C1C3636568BC3E4FA7FDEA950576B0718, NULL);
		// }
		return;
	}
}
// System.Void DrinkWaterController::CalenderDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrinkWaterController_CalenderDone_m92B8D489E78A15DDD921496319A7AAD0D9E8382A (DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51E67EB8484159FFE8DFBC1003E8D7FDF9EBA2C7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myAnimator.SetTrigger("CalenderClose");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___myAnimator_5;
		NullCheck(L_0);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_0, _stringLiteral51E67EB8484159FFE8DFBC1003E8D7FDF9EBA2C7, NULL);
		// }
		return;
	}
}
// System.Void DrinkWaterController::OpenCalculator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrinkWaterController_OpenCalculator_m4F187881E435890887D44380EF7638782F9F417E (DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D9EC153EBC2ACFBE044F77813A4CCC0E4F5B634);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myAnimator.SetTrigger("CalculatorOpen");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___myAnimator_5;
		NullCheck(L_0);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_0, _stringLiteral0D9EC153EBC2ACFBE044F77813A4CCC0E4F5B634, NULL);
		// }
		return;
	}
}
// System.Void DrinkWaterController::CloseCalculator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrinkWaterController_CloseCalculator_m35738548203EE9B3590DEFB4052474A62F2FD895 (DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79583723F7E2B999AFA83D7D115FC721EF2CF87D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myAnimator.SetTrigger("CalculatorClose");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___myAnimator_5;
		NullCheck(L_0);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_0, _stringLiteral79583723F7E2B999AFA83D7D115FC721EF2CF87D, NULL);
		// }
		return;
	}
}
// System.Void DrinkWaterController::OpenUnitPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrinkWaterController_OpenUnitPanel_m303C9D1BD63CE8E89AEEE5624D38D2421A8B415F (DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB992C44050D976827738F120FA29AB58A50CEA22);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myAnimator.SetTrigger("UnitOpen");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___myAnimator_5;
		NullCheck(L_0);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_0, _stringLiteralB992C44050D976827738F120FA29AB58A50CEA22, NULL);
		// }
		return;
	}
}
// System.Void DrinkWaterController::CloseUnitPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrinkWaterController_CloseUnitPanel_mE2C3134DEC83409829E60063D81AA64B867677F8 (DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral880B158CB0773FE810BF9C84CD76D93EBB935499);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myAnimator.SetTrigger("UnitClose");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___myAnimator_5;
		NullCheck(L_0);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_0, _stringLiteral880B158CB0773FE810BF9C84CD76D93EBB935499, NULL);
		// }
		return;
	}
}
// System.Void DrinkWaterController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrinkWaterController__ctor_m791C918850A8C9858C742D1AD43A1E3480D554EB (DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* __this, const RuntimeMethod* method) 
{
	{
		// public float fadeInDuration = 2f;
		__this->___fadeInDuration_6 = (2.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Boolean DrinkWaterController::<WaterLevelRaise>b__12_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DrinkWaterController_U3CWaterLevelRaiseU3Eb__12_0_mF483434BAE2F0E7F00F559BE73EDFCA69DB0C52B (DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* __this, const RuntimeMethod* method) 
{
	{
		// yield return new WaitWhile(() => check);
		bool L_0 = __this->___check_7;
		return L_0;
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
// System.Void DrinkWaterController/<WaterFlowLevel>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaterFlowLevelU3Ed__8__ctor_m3E5DC847312D3CE102C25D99D108994B1925E47A (U3CWaterFlowLevelU3Ed__8_t4DB6CA027B4A9AE7154E0DC6B5D861F050CD65F4* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void DrinkWaterController/<WaterFlowLevel>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaterFlowLevelU3Ed__8_System_IDisposable_Dispose_m8230728FF54BAEF339704CAD148D29811010E2B1 (U3CWaterFlowLevelU3Ed__8_t4DB6CA027B4A9AE7154E0DC6B5D861F050CD65F4* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean DrinkWaterController/<WaterFlowLevel>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaterFlowLevelU3Ed__8_MoveNext_mC454A775E2E75146A188C705EB58B60B1A8EBB32 (U3CWaterFlowLevelU3Ed__8_t4DB6CA027B4A9AE7154E0DC6B5D861F050CD65F4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0074;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var elapsedTime = 0f;
		__this->___U3CelapsedTimeU3E5__2_3 = (0.0f);
		goto IL_007b;
	}

IL_002b:
	{
		// elapsedTime += Time.deltaTime / fadeInDuration;
		float L_4 = __this->___U3CelapsedTimeU3E5__2_3;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* L_6 = V_1;
		NullCheck(L_6);
		float L_7 = L_6->___fadeInDuration_6;
		__this->___U3CelapsedTimeU3E5__2_3 = ((float)il2cpp_codegen_add(L_4, ((float)(L_5/L_7))));
		// waterLevelSliderCanves.alpha = Mathf.Lerp(0,1, elapsedTime);
		DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* L_8 = V_1;
		NullCheck(L_8);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_9 = L_8->___waterLevelSliderCanves_4;
		float L_10 = __this->___U3CelapsedTimeU3E5__2_3;
		float L_11;
		L_11 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline((0.0f), (1.0f), L_10, NULL);
		NullCheck(L_9);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_9, L_11, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0074:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_007b:
	{
		// while (fadeInDuration > elapsedTime)
		DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* L_12 = V_1;
		NullCheck(L_12);
		float L_13 = L_12->___fadeInDuration_6;
		float L_14 = __this->___U3CelapsedTimeU3E5__2_3;
		if ((((float)L_13) > ((float)L_14)))
		{
			goto IL_002b;
		}
	}
	{
		// waterLevelSliderCanves.alpha = 1;
		DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* L_15 = V_1;
		NullCheck(L_15);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_16 = L_15->___waterLevelSliderCanves_4;
		NullCheck(L_16);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_16, (1.0f), NULL);
		// waterLevelSliderCanves.blocksRaycasts = true;
		DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* L_17 = V_1;
		NullCheck(L_17);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_18 = L_17->___waterLevelSliderCanves_4;
		NullCheck(L_18);
		CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0(L_18, (bool)1, NULL);
		// }
		return (bool)0;
	}
}
// System.Object DrinkWaterController/<WaterFlowLevel>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaterFlowLevelU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5DCE691AF5788463A857EC268270781D8BA9A541 (U3CWaterFlowLevelU3Ed__8_t4DB6CA027B4A9AE7154E0DC6B5D861F050CD65F4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void DrinkWaterController/<WaterFlowLevel>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaterFlowLevelU3Ed__8_System_Collections_IEnumerator_Reset_mB9562DE1AD6B81D0153E2743E599A3443FD0438B (U3CWaterFlowLevelU3Ed__8_t4DB6CA027B4A9AE7154E0DC6B5D861F050CD65F4* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaterFlowLevelU3Ed__8_System_Collections_IEnumerator_Reset_mB9562DE1AD6B81D0153E2743E599A3443FD0438B_RuntimeMethod_var)));
	}
}
// System.Object DrinkWaterController/<WaterFlowLevel>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaterFlowLevelU3Ed__8_System_Collections_IEnumerator_get_Current_mF899FB7BA94AF49FCCB62ADCF6F0FE78AB2213B3 (U3CWaterFlowLevelU3Ed__8_t4DB6CA027B4A9AE7154E0DC6B5D861F050CD65F4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void DrinkWaterController/<WaterFlowDown>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaterFlowDownU3Ed__10__ctor_mF856B487D120981A8989DE1A2E94F36A9C2A8F2A (U3CWaterFlowDownU3Ed__10_tB51F225775FEC6F03AD8339BF622B32B7A4582C8* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void DrinkWaterController/<WaterFlowDown>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaterFlowDownU3Ed__10_System_IDisposable_Dispose_m73AF1CFACB6325AC82F129BE02AECCEAE9E0C6B0 (U3CWaterFlowDownU3Ed__10_tB51F225775FEC6F03AD8339BF622B32B7A4582C8* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean DrinkWaterController/<WaterFlowDown>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaterFlowDownU3Ed__10_MoveNext_mE307C299DF9A26C454D2E59CEE346686409E512E (U3CWaterFlowDownU3Ed__10_tB51F225775FEC6F03AD8339BF622B32B7A4582C8* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_007b;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// check = true;
		DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* L_4 = V_1;
		NullCheck(L_4);
		L_4->___check_7 = (bool)1;
		// var  elapsedTime = 0f;
		__this->___U3CelapsedTimeU3E5__2_3 = (0.0f);
		goto IL_0082;
	}

IL_0032:
	{
		// elapsedTime += Time.deltaTime/fadeInDuration;
		float L_5 = __this->___U3CelapsedTimeU3E5__2_3;
		float L_6;
		L_6 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* L_7 = V_1;
		NullCheck(L_7);
		float L_8 = L_7->___fadeInDuration_6;
		__this->___U3CelapsedTimeU3E5__2_3 = ((float)il2cpp_codegen_add(L_5, ((float)(L_6/L_8))));
		// waterLevelSliderCanves.alpha = Mathf.Lerp(1,0,elapsedTime);
		DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* L_9 = V_1;
		NullCheck(L_9);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_10 = L_9->___waterLevelSliderCanves_4;
		float L_11 = __this->___U3CelapsedTimeU3E5__2_3;
		float L_12;
		L_12 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline((1.0f), (0.0f), L_11, NULL);
		NullCheck(L_10);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_10, L_12, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_007b:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0082:
	{
		// while (fadeInDuration > elapsedTime)
		DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* L_13 = V_1;
		NullCheck(L_13);
		float L_14 = L_13->___fadeInDuration_6;
		float L_15 = __this->___U3CelapsedTimeU3E5__2_3;
		if ((((float)L_14) > ((float)L_15)))
		{
			goto IL_0032;
		}
	}
	{
		// waterLevelSliderCanves.alpha = 0;
		DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* L_16 = V_1;
		NullCheck(L_16);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_17 = L_16->___waterLevelSliderCanves_4;
		NullCheck(L_17);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_17, (0.0f), NULL);
		// waterLevelSliderCanves.blocksRaycasts = false;
		DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* L_18 = V_1;
		NullCheck(L_18);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_19 = L_18->___waterLevelSliderCanves_4;
		NullCheck(L_19);
		CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0(L_19, (bool)0, NULL);
		// check = false;
		DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* L_20 = V_1;
		NullCheck(L_20);
		L_20->___check_7 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object DrinkWaterController/<WaterFlowDown>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaterFlowDownU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE9D8C5A8E1B420C58F37711931A810579266838F (U3CWaterFlowDownU3Ed__10_tB51F225775FEC6F03AD8339BF622B32B7A4582C8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void DrinkWaterController/<WaterFlowDown>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaterFlowDownU3Ed__10_System_Collections_IEnumerator_Reset_m83938416030BB3F047ED08130EBB8352A789FA62 (U3CWaterFlowDownU3Ed__10_tB51F225775FEC6F03AD8339BF622B32B7A4582C8* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaterFlowDownU3Ed__10_System_Collections_IEnumerator_Reset_m83938416030BB3F047ED08130EBB8352A789FA62_RuntimeMethod_var)));
	}
}
// System.Object DrinkWaterController/<WaterFlowDown>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaterFlowDownU3Ed__10_System_Collections_IEnumerator_get_Current_m0E0D7F3BAF667F5CDDE35BA47F4B60A09C783C74 (U3CWaterFlowDownU3Ed__10_tB51F225775FEC6F03AD8339BF622B32B7A4582C8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void DrinkWaterController/<WaterLevelRaise>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaterLevelRaiseU3Ed__12__ctor_m61F401FA585D2B2C9DF847585A479100516D023F (U3CWaterLevelRaiseU3Ed__12_t6367A4EAB06BEB44E8C5340D4BB6C12CA97769A1* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void DrinkWaterController/<WaterLevelRaise>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaterLevelRaiseU3Ed__12_System_IDisposable_Dispose_mB0E074D1BC57E2C38A8CA7E5B241947A22856CCC (U3CWaterLevelRaiseU3Ed__12_t6367A4EAB06BEB44E8C5340D4BB6C12CA97769A1* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean DrinkWaterController/<WaterLevelRaise>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaterLevelRaiseU3Ed__12_MoveNext_m02F16179C576CEEFA9F84243B12873A4108FEEE3 (U3CWaterLevelRaiseU3Ed__12_t6367A4EAB06BEB44E8C5340D4BB6C12CA97769A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DrinkWaterController_U3CWaterLevelRaiseU3Eb__12_0_mF483434BAE2F0E7F00F559BE73EDFCA69DB0C52B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAAEDCD13D6AA2725C362F76CDD04DEE55213BD2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* V_1 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0049;
			}
			case 2:
			{
				goto IL_0069;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitWhile(() => check);
		DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* L_3 = V_1;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_4 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_4, L_3, (intptr_t)((void*)DrinkWaterController_U3CWaterLevelRaiseU3Eb__12_0_mF483434BAE2F0E7F00F559BE73EDFCA69DB0C52B_RuntimeMethod_var), NULL);
		WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967* L_5 = (WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967*)il2cpp_codegen_object_new(WaitWhile_t6E10E586970164905286BEAB019D7F73DA661967_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitWhile__ctor_mF803B2F3BC88135FEA9024F6C51E7267A7E7B82C(L_5, L_4, NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0049:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(1.0f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0069:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// PlayerPrefsHandler.DateTime = DateTime.Now.ToString("h:mm tt");
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_7;
		L_7 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_2 = L_7;
		String_t* L_8;
		L_8 = DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78((&V_2), _stringLiteralAAAEDCD13D6AA2725C362F76CDD04DEE55213BD2, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		PlayerPrefsHandler_set_DateTime_m25278C8DB82F1030A838756C350E6AF66A3DCF73(L_8, NULL);
		// UIReferenceContainer.Instance.lastIntake.text = PlayerPrefsHandler.DateTime;
		UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8* L_9;
		L_9 = UIReferenceContainer_get_Instance_m81668CAEFAF57FABB353E35F4119C1E4E099A299_inline(NULL);
		NullCheck(L_9);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = L_9->___lastIntake_13;
		String_t* L_11;
		L_11 = PlayerPrefsHandler_get_DateTime_mAC25A403E57AB461B279DBCA1CCF4B538112FD2B(NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_11);
		// UIReferenceContainer.Instance.waterLimit.text = PlayerPrefsHandler.WaterLimit.ToString();
		UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8* L_12;
		L_12 = UIReferenceContainer_get_Instance_m81668CAEFAF57FABB353E35F4119C1E4E099A299_inline(NULL);
		NullCheck(L_12);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = L_12->___waterLimit_12;
		String_t* L_14;
		L_14 = PlayerPrefsHandler_get_WaterLimit_m72E5509C90998F30A324FF81EC9D605FFA88DAE4(NULL);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		NullCheck(L_13);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_15);
		// CalculatePercentage();
		DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3* L_16 = V_1;
		NullCheck(L_16);
		DrinkWaterController_CalculatePercentage_mDB5712EFE98D81F73E09EDF2C05E2DD86BAC4D9E(L_16, NULL);
		// }
		return (bool)0;
	}
}
// System.Object DrinkWaterController/<WaterLevelRaise>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaterLevelRaiseU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEAD676661C1E65AA29DD7B681BF4D4B27FCAB285 (U3CWaterLevelRaiseU3Ed__12_t6367A4EAB06BEB44E8C5340D4BB6C12CA97769A1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void DrinkWaterController/<WaterLevelRaise>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaterLevelRaiseU3Ed__12_System_Collections_IEnumerator_Reset_m2AE19AC36FC211B00FEAF9D56C4A7E34687060F9 (U3CWaterLevelRaiseU3Ed__12_t6367A4EAB06BEB44E8C5340D4BB6C12CA97769A1* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaterLevelRaiseU3Ed__12_System_Collections_IEnumerator_Reset_m2AE19AC36FC211B00FEAF9D56C4A7E34687060F9_RuntimeMethod_var)));
	}
}
// System.Object DrinkWaterController/<WaterLevelRaise>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaterLevelRaiseU3Ed__12_System_Collections_IEnumerator_get_Current_m43E1B3A3914395F3AA6F276C2A830F5F3CBED2FA (U3CWaterLevelRaiseU3Ed__12_t6367A4EAB06BEB44E8C5340D4BB6C12CA97769A1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void Entities::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entities_Start_m27067E55F39ADC047BDC113F42D630462B599C73 (Entities_tB4FB8F31856999AFA46755B1CB6DC75B16A2644D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Entities_SelectAmount_m5B99484C9F5F1B1A2B38387ECA197F56486F38BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myButton = GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0;
		L_0 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(__this, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		__this->___myButton_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myButton_5), (void*)L_0);
		// myButton.onClick.AddListener(SelectAmount);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___myButton_5;
		NullCheck(L_1);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_2;
		L_2 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_1, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_3, __this, (intptr_t)((void*)Entities_SelectAmount_m5B99484C9F5F1B1A2B38387ECA197F56486F38BA_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Entities::SelectAmount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entities_SelectAmount_m5B99484C9F5F1B1A2B38387ECA197F56486F38BA (Entities_tB4FB8F31856999AFA46755B1CB6DC75B16A2644D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DrinkWaterController.waterDrinkAmount = waterLevel;
		int32_t L_0 = __this->___waterLevel_4;
		((DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3_StaticFields*)il2cpp_codegen_static_fields_for(DrinkWaterController_t897F26AD0097A5674613EA7F27B88A9A08CC58E3_il2cpp_TypeInfo_var))->___waterDrinkAmount_8 = L_0;
		// }
		return;
	}
}
// System.Void Entities::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entities__ctor_m7E5EF8262047AF8FDC9D5E31E2CF89465815E12A (Entities_tB4FB8F31856999AFA46755B1CB6DC75B16A2644D* __this, const RuntimeMethod* method) 
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
// System.Void LoginScreenHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenHandler_Start_m9C14E077649AED5842E8644C637495F6A60D61E7 (LoginScreenHandler_tA4AEE59BE26DD91756D34D29547BCC4442FE2F00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoginScreenHandler_BacktoMenuOne_mC8033217B8A83B91FF5709A22D3C6B48A9F471C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoginScreenHandler_BacktoMenuTwo_m1B73B33432EC19BBC1849C411330ED733D8F0D3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45295626B926EDDEEC88A5F14B97F515C073A611);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myAnimator.SetTrigger("Menu1");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___myAnimator_4;
		NullCheck(L_0);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_0, _stringLiteral45295626B926EDDEEC88A5F14B97F515C073A611, NULL);
		// UIReferenceContainerMenu.Instance.backToMenu_1.onClick.AddListener(BacktoMenuOne);
		UIReferenceContainerMenu_t17D2EB96B8E18E398DAF7523677C42C6C2A8CA7A* L_1;
		L_1 = UIReferenceContainerMenu_get_Instance_m0399BEA07EA0E8455780E21D97C828418B3121DE_inline(NULL);
		NullCheck(L_1);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = L_1->___backToMenu_1_7;
		NullCheck(L_2);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_3;
		L_3 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_2, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_4, __this, (intptr_t)((void*)LoginScreenHandler_BacktoMenuOne_mC8033217B8A83B91FF5709A22D3C6B48A9F471C1_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_3, L_4, NULL);
		// UIReferenceContainerMenu.Instance.backToMenu_2.onClick.AddListener(BacktoMenuTwo);
		UIReferenceContainerMenu_t17D2EB96B8E18E398DAF7523677C42C6C2A8CA7A* L_5;
		L_5 = UIReferenceContainerMenu_get_Instance_m0399BEA07EA0E8455780E21D97C828418B3121DE_inline(NULL);
		NullCheck(L_5);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = L_5->___backToMenu_2_8;
		NullCheck(L_6);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_7;
		L_7 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_6, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_8 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_8, __this, (intptr_t)((void*)LoginScreenHandler_BacktoMenuTwo_m1B73B33432EC19BBC1849C411330ED733D8F0D3C_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void LoginScreenHandler::BacktoMenuOne()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenHandler_BacktoMenuOne_mC8033217B8A83B91FF5709A22D3C6B48A9F471C1 (LoginScreenHandler_tA4AEE59BE26DD91756D34D29547BCC4442FE2F00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC17A90F7BCC671E765043CC0CC6A7B4A76AA48E0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myAnimator.SetTrigger("BackToMenu1");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___myAnimator_4;
		NullCheck(L_0);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_0, _stringLiteralC17A90F7BCC671E765043CC0CC6A7B4A76AA48E0, NULL);
		// }
		return;
	}
}
// System.Void LoginScreenHandler::BacktoMenuTwo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenHandler_BacktoMenuTwo_m1B73B33432EC19BBC1849C411330ED733D8F0D3C (LoginScreenHandler_tA4AEE59BE26DD91756D34D29547BCC4442FE2F00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FC6ED462B121075F47389C74A4781E7BECEBB2D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myAnimator.SetTrigger("BackToMenu2");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___myAnimator_4;
		NullCheck(L_0);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_0, _stringLiteral8FC6ED462B121075F47389C74A4781E7BECEBB2D, NULL);
		// }
		return;
	}
}
// System.Void LoginScreenHandler::SetAnimatorTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenHandler_SetAnimatorTrigger_m5A7BF557EDC5039693D240C5D3ACD52FE55FA76F (LoginScreenHandler_tA4AEE59BE26DD91756D34D29547BCC4442FE2F00* __this, String_t* ___0_triggerName, const RuntimeMethod* method) 
{
	{
		// myAnimator.SetTrigger(triggerName);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___myAnimator_4;
		String_t* L_1 = ___0_triggerName;
		NullCheck(L_0);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void LoginScreenHandler::SwitchScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenHandler_SwitchScene_mCEBB8D5C51D7887477D68D74D3411C14563EE2BA (LoginScreenHandler_tA4AEE59BE26DD91756D34D29547BCC4442FE2F00* __this, String_t* ___0_sceneName, const RuntimeMethod* method) 
{
	{
		// SceneHandler.Instance.LoadScene(sceneName);
		SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E* L_0;
		L_0 = SceneHandler_get_Instance_m83009F0DA8BE85EB009B7E24DC1B0104BDE96F99_inline(NULL);
		String_t* L_1 = ___0_sceneName;
		NullCheck(L_0);
		SceneHandler_LoadScene_m9896E40CF55849E8C28C231A648B309535236664(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void LoginScreenHandler::WeightPlaceholder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenHandler_WeightPlaceholder_m708E45C49C4E51CD4CEEA171E5DEBDAEB3E2CEDD (LoginScreenHandler_tA4AEE59BE26DD91756D34D29547BCC4442FE2F00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C6C3E1FB2B851EF12CA90001BB012695B8BE94E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!(UIReferenceContainerMenu.Instance.weightField.text.Contains("Kg")))
		UIReferenceContainerMenu_t17D2EB96B8E18E398DAF7523677C42C6C2A8CA7A* L_0;
		L_0 = UIReferenceContainerMenu_get_Instance_m0399BEA07EA0E8455780E21D97C828418B3121DE_inline(NULL);
		NullCheck(L_0);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_1 = L_0->___weightField_5;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_1, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_2, _stringLiteral7C6C3E1FB2B851EF12CA90001BB012695B8BE94E, NULL);
		if (L_3)
		{
			goto IL_0043;
		}
	}
	{
		// UIReferenceContainerMenu.Instance.weightField.text = UIReferenceContainerMenu.Instance.weightField.text + "Kg";
		UIReferenceContainerMenu_t17D2EB96B8E18E398DAF7523677C42C6C2A8CA7A* L_4;
		L_4 = UIReferenceContainerMenu_get_Instance_m0399BEA07EA0E8455780E21D97C828418B3121DE_inline(NULL);
		NullCheck(L_4);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_5 = L_4->___weightField_5;
		UIReferenceContainerMenu_t17D2EB96B8E18E398DAF7523677C42C6C2A8CA7A* L_6;
		L_6 = UIReferenceContainerMenu_get_Instance_m0399BEA07EA0E8455780E21D97C828418B3121DE_inline(NULL);
		NullCheck(L_6);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_7 = L_6->___weightField_5;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_7, NULL);
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_8, _stringLiteral7C6C3E1FB2B851EF12CA90001BB012695B8BE94E, NULL);
		NullCheck(L_5);
		TMP_InputField_set_text_m684E9CDA2D9E82D1C497B5E03DBE79C00584FF62(L_5, L_9, NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void LoginScreenHandler::WaterPlaceholder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenHandler_WaterPlaceholder_mDA791732B2260B027B0442E6D19B023F4824731B (LoginScreenHandler_tA4AEE59BE26DD91756D34D29547BCC4442FE2F00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE06B55C4BBE3AA67B273C38DB42C4D3F91B17F7A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!(UIReferenceContainerMenu.Instance.quantityOfWaterToShow.text.Contains("ml")))
		UIReferenceContainerMenu_t17D2EB96B8E18E398DAF7523677C42C6C2A8CA7A* L_0;
		L_0 = UIReferenceContainerMenu_get_Instance_m0399BEA07EA0E8455780E21D97C828418B3121DE_inline(NULL);
		NullCheck(L_0);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_1 = L_0->___quantityOfWaterToShow_6;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_1, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_2, _stringLiteralE06B55C4BBE3AA67B273C38DB42C4D3F91B17F7A, NULL);
		if (L_3)
		{
			goto IL_0043;
		}
	}
	{
		// UIReferenceContainerMenu.Instance.quantityOfWaterToShow.text = UIReferenceContainerMenu.Instance.quantityOfWaterToShow.text + "ml";
		UIReferenceContainerMenu_t17D2EB96B8E18E398DAF7523677C42C6C2A8CA7A* L_4;
		L_4 = UIReferenceContainerMenu_get_Instance_m0399BEA07EA0E8455780E21D97C828418B3121DE_inline(NULL);
		NullCheck(L_4);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_5 = L_4->___quantityOfWaterToShow_6;
		UIReferenceContainerMenu_t17D2EB96B8E18E398DAF7523677C42C6C2A8CA7A* L_6;
		L_6 = UIReferenceContainerMenu_get_Instance_m0399BEA07EA0E8455780E21D97C828418B3121DE_inline(NULL);
		NullCheck(L_6);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_7 = L_6->___quantityOfWaterToShow_6;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_7, NULL);
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_8, _stringLiteralE06B55C4BBE3AA67B273C38DB42C4D3F91B17F7A, NULL);
		NullCheck(L_5);
		TMP_InputField_set_text_m684E9CDA2D9E82D1C497B5E03DBE79C00584FF62(L_5, L_9, NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void LoginScreenHandler::CheckforInputValueCallAnimation(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenHandler_CheckforInputValueCallAnimation_mF85F149ADBD0EA8FEB9FCF232D7716C4DF7F2A93 (LoginScreenHandler_tA4AEE59BE26DD91756D34D29547BCC4442FE2F00* __this, String_t* ___0_triggerName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C6C3E1FB2B851EF12CA90001BB012695B8BE94E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B89E049FC6343E440B2C7CA3A6085BC95901A3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3BFE85716323FDB76D3129B1C4C398233A9B42E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFB33D61687D944C89B278BF5BF62F8930B27DC3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(string.IsNullOrEmpty(UIReferenceContainerMenu.Instance.weightField.text))
		UIReferenceContainerMenu_t17D2EB96B8E18E398DAF7523677C42C6C2A8CA7A* L_0;
		L_0 = UIReferenceContainerMenu_get_Instance_m0399BEA07EA0E8455780E21D97C828418B3121DE_inline(NULL);
		NullCheck(L_0);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_1 = L_0->___weightField_5;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_1, NULL);
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// iOSPlugin.ShowAlert("Please insert your weight","It is necessary to set a weight to continue.");
		iOSPlugin_ShowAlert_mACA826576D4F00BE99F47846C6857A35670DE4EA(_stringLiteralA3BFE85716323FDB76D3129B1C4C398233A9B42E, _stringLiteralDFB33D61687D944C89B278BF5BF62F8930B27DC3, NULL);
		return;
	}

IL_0026:
	{
		// int weight = int.Parse(UIReferenceContainerMenu.Instance.weightField.text.Replace("Kg",""));
		UIReferenceContainerMenu_t17D2EB96B8E18E398DAF7523677C42C6C2A8CA7A* L_4;
		L_4 = UIReferenceContainerMenu_get_Instance_m0399BEA07EA0E8455780E21D97C828418B3121DE_inline(NULL);
		NullCheck(L_4);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_5 = L_4->___weightField_5;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_5, NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_6, _stringLiteral7C6C3E1FB2B851EF12CA90001BB012695B8BE94E, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		int32_t L_8;
		L_8 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_7, NULL);
		// int water = weight * 35;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_8, ((int32_t)35)));
		// UIReferenceContainerMenu.Instance.quantityOfWaterToShow.text = water.ToString()+" ml";
		UIReferenceContainerMenu_t17D2EB96B8E18E398DAF7523677C42C6C2A8CA7A* L_9;
		L_9 = UIReferenceContainerMenu_get_Instance_m0399BEA07EA0E8455780E21D97C828418B3121DE_inline(NULL);
		NullCheck(L_9);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_10 = L_9->___quantityOfWaterToShow_6;
		String_t* L_11;
		L_11 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_11, _stringLiteral9B89E049FC6343E440B2C7CA3A6085BC95901A3E, NULL);
		NullCheck(L_10);
		TMP_InputField_set_text_m684E9CDA2D9E82D1C497B5E03DBE79C00584FF62(L_10, L_12, NULL);
		// myAnimator.SetTrigger(triggerName);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_13 = __this->___myAnimator_4;
		String_t* L_14 = ___0_triggerName;
		NullCheck(L_13);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_13, L_14, NULL);
		// }
		return;
	}
}
// System.Void LoginScreenHandler::PlayerPrefsSetter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenHandler_PlayerPrefsSetter_mD9E5BA08A32C18C3DA9726127EC290F0A3EA8BEB (LoginScreenHandler_tA4AEE59BE26DD91756D34D29547BCC4442FE2F00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefsHandler.Weight = UIReferenceContainerMenu.Instance.weightField.text;
		UIReferenceContainerMenu_t17D2EB96B8E18E398DAF7523677C42C6C2A8CA7A* L_0;
		L_0 = UIReferenceContainerMenu_get_Instance_m0399BEA07EA0E8455780E21D97C828418B3121DE_inline(NULL);
		NullCheck(L_0);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_1 = L_0->___weightField_5;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		PlayerPrefsHandler_set_Weight_mCE13E47BF9D8BADEC19774DA0D604FA72D748DB2(L_2, NULL);
		// PlayerPrefsHandler.WaterLimit = UIReferenceContainerMenu.Instance.quantityOfWaterToShow.text;
		UIReferenceContainerMenu_t17D2EB96B8E18E398DAF7523677C42C6C2A8CA7A* L_3;
		L_3 = UIReferenceContainerMenu_get_Instance_m0399BEA07EA0E8455780E21D97C828418B3121DE_inline(NULL);
		NullCheck(L_3);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_4 = L_3->___quantityOfWaterToShow_6;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_4, NULL);
		PlayerPrefsHandler_set_WaterLimit_m93F663E1F9B96BF87CD35488D8A3F5F4E8FE201A(L_5, NULL);
		// }
		return;
	}
}
// System.Void LoginScreenHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoginScreenHandler__ctor_mED7F52053F8637C9943B9C31C28BB54F5FF4498F (LoginScreenHandler_tA4AEE59BE26DD91756D34D29547BCC4442FE2F00* __this, const RuntimeMethod* method) 
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
// System.Void MainMenuHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuHandler_Start_m2BBCF97A8C36855C78A5AF0AF0B741D84FF2CEB1 (MainMenuHandler_t5A770556C4ABD1778AA50C4FC389C92F64F355EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEB5A89704EF86C652DD7B0E148044A9C5936967);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myAnimator.SetTrigger("Menu_1");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___myAnimator_4;
		NullCheck(L_0);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_0, _stringLiteralAEB5A89704EF86C652DD7B0E148044A9C5936967, NULL);
		// }
		return;
	}
}
// System.Void MainMenuHandler::SetAnimatorTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuHandler_SetAnimatorTrigger_m2D12A171241596FBAA9E7B2A621D057401A2B34F (MainMenuHandler_t5A770556C4ABD1778AA50C4FC389C92F64F355EE* __this, String_t* ___0_triggerName, const RuntimeMethod* method) 
{
	{
		// myAnimator.SetTrigger(triggerName);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___myAnimator_4;
		String_t* L_1 = ___0_triggerName;
		NullCheck(L_0);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void MainMenuHandler::SwitchScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuHandler_SwitchScene_m13B5CDFCBF25E7C25153C45A91D654650907EDD1 (MainMenuHandler_t5A770556C4ABD1778AA50C4FC389C92F64F355EE* __this, String_t* ___0_sceneName, const RuntimeMethod* method) 
{
	{
		// SceneHandler.Instance.LoadScene(sceneName);
		SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E* L_0;
		L_0 = SceneHandler_get_Instance_m83009F0DA8BE85EB009B7E24DC1B0104BDE96F99_inline(NULL);
		String_t* L_1 = ___0_sceneName;
		NullCheck(L_0);
		SceneHandler_LoadScene_m9896E40CF55849E8C28C231A648B309535236664(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void MainMenuHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenuHandler__ctor_m572A183806FEEAF2C7DCC83D1AB1466E86344FE7 (MainMenuHandler_t5A770556C4ABD1778AA50C4FC389C92F64F355EE* __this, const RuntimeMethod* method) 
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
// System.Void NotificationManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationManager_Start_mFC975B070B55E1F62E47D007D8ECB92E99440242 (NotificationManager_t420578B78ECCF624ABE7E8D4618BD10D09AFDF51* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEEB048795828402BEB17E5AD58607C793294FA6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFD52AAC15A062BC92B0B77B7E829311E0C9993B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0CD3BAB149670D726750886680B1CA2CA4873B1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NotificationAlertDialoug();
		NotificationManager_NotificationAlertDialoug_mC514B6615513A99C8BD8F260211885112EB63F1F(__this, NULL);
		// now = DateTime.Now;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		__this->___now_6 = L_0;
		// dayStart = new DateTime(now.Year, now.Month, now.Day, 9,0,0);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_1 = (&__this->___now_6);
		int32_t L_2;
		L_2 = DateTime_get_Year_m00A88C4CEE07B7906F5F7F75C254B769808F5138(L_1, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_3 = (&__this->___now_6);
		int32_t L_4;
		L_4 = DateTime_get_Month_m899C6602DE8198990B2CAF5EBC04CC67764E3DA2(L_3, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_5 = (&__this->___now_6);
		int32_t L_6;
		L_6 = DateTime_get_Day_m872DBCA4C79955EC1E27EB68746B6C2F6A183B28(L_5, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_7;
		memset((&L_7), 0, sizeof(L_7));
		DateTime__ctor_m1F66A4327FE6B127F0F0E83A70CED25DB0DFFB00((&L_7), L_2, L_4, L_6, ((int32_t)9), 0, 0, /*hidden argument*/NULL);
		__this->___dayStart_4 = L_7;
		// dayEnd = new DateTime(now.Year, now.Month, now.Day, 19, 0, 0);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_8 = (&__this->___now_6);
		int32_t L_9;
		L_9 = DateTime_get_Year_m00A88C4CEE07B7906F5F7F75C254B769808F5138(L_8, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_10 = (&__this->___now_6);
		int32_t L_11;
		L_11 = DateTime_get_Month_m899C6602DE8198990B2CAF5EBC04CC67764E3DA2(L_10, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_12 = (&__this->___now_6);
		int32_t L_13;
		L_13 = DateTime_get_Day_m872DBCA4C79955EC1E27EB68746B6C2F6A183B28(L_12, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_14;
		memset((&L_14), 0, sizeof(L_14));
		DateTime__ctor_m1F66A4327FE6B127F0F0E83A70CED25DB0DFFB00((&L_14), L_9, L_11, L_13, ((int32_t)19), 0, 0, /*hidden argument*/NULL);
		__this->___dayEnd_5 = L_14;
		// Debug.Log("Current time is " + now);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_15 = (&__this->___now_6);
		String_t* L_16;
		L_16 = DateTime_ToString_m447C83E1F8FFFFF4D20C0F7D5C18DEB160F9833A(L_15, NULL);
		String_t* L_17;
		L_17 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralCFD52AAC15A062BC92B0B77B7E829311E0C9993B, L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_17, NULL);
		// Debug.Log("Day start at" + dayStart);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_18 = (&__this->___dayStart_4);
		String_t* L_19;
		L_19 = DateTime_ToString_m447C83E1F8FFFFF4D20C0F7D5C18DEB160F9833A(L_18, NULL);
		String_t* L_20;
		L_20 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF0CD3BAB149670D726750886680B1CA2CA4873B1, L_19, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_20, NULL);
		// Debug.Log("Day end at"+ dayEnd);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_21 = (&__this->___dayEnd_5);
		String_t* L_22;
		L_22 = DateTime_ToString_m447C83E1F8FFFFF4D20C0F7D5C18DEB160F9833A(L_21, NULL);
		String_t* L_23;
		L_23 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralAEEB048795828402BEB17E5AD58607C793294FA6, L_22, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_23, NULL);
		// }
		return;
	}
}
// System.Void NotificationManager::NotificationAlertDialoug()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationManager_NotificationAlertDialoug_mC514B6615513A99C8BD8F260211885112EB63F1F (NotificationManager_t420578B78ECCF624ABE7E8D4618BD10D09AFDF51* __this, const RuntimeMethod* method) 
{
	{
		// UnityEngine.iOS.NotificationServices.RegisterForNotifications(UnityEngine.iOS.NotificationType.Alert | UnityEngine.iOS.NotificationType.Badge | UnityEngine.iOS.NotificationType.Sound);
		NotificationServices_RegisterForNotifications_m1457000D6320F381A3F9838DF038A1764230C6C1(7, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator NotificationManager::CallForAlert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NotificationManager_CallForAlert_m261FA17806D12FA57D969113B7C05FA628DAA74C (NotificationManager_t420578B78ECCF624ABE7E8D4618BD10D09AFDF51* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCallForAlertU3Ed__5_tB1A2E24DB78EBE0DF04BB4D15474B455A9CDF853_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCallForAlertU3Ed__5_tB1A2E24DB78EBE0DF04BB4D15474B455A9CDF853* L_0 = (U3CCallForAlertU3Ed__5_tB1A2E24DB78EBE0DF04BB4D15474B455A9CDF853*)il2cpp_codegen_object_new(U3CCallForAlertU3Ed__5_tB1A2E24DB78EBE0DF04BB4D15474B455A9CDF853_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCallForAlertU3Ed__5__ctor_m3A3BF8074F1D2AF1EF7DCC148754665CA60F63E5(L_0, 0, NULL);
		return L_0;
	}
}
// System.Void NotificationManager::OnApplicationPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationManager_OnApplicationPause_m8568989D7270CC667EDFDB5914A1760907A4B014 (NotificationManager_t420578B78ECCF624ABE7E8D4618BD10D09AFDF51* __this, bool ___0_pause, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m5204FD9329F260AB7515DAD913AECBF9BF5E7FF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m159A4B78C614DE4179F4857A890D9B837AEBCC5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m15DA3B78D1B425EE75B56128E266511A988A9E42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m49F7A9CBF94A5E7D9E4740C5572617E44F002B94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0722EF06E0C1AE2FCACCDC4C432A83C96930120C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8C5C3A5219BF7F9AB0784DD7BB56AAE024F3B40B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBC7D8219AE842673418038D26E22D9C0147753F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral070DC7956F06C9EFCBF116607A382F2C7BDB41AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral801B26249550605953F17D5009E80B894D1B4F70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0769D951EA1B8A998AAC313D55774E8A792F5FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED3382B615AFF362FB22ECD868BB96E4C1113CA1);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tBC7D8219AE842673418038D26E22D9C0147753F0* V_0 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_3;
	memset((&V_3), 0, sizeof(V_3));
	LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* V_4 = NULL;
	Enumerator_t408765680189DF655A1ABCEAB37112390080715F V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// UnityEngine.iOS.NotificationServices.ClearLocalNotifications();
		NotificationServices_ClearLocalNotifications_m39C507598E8802270E2303A82DCB000114689BD0(NULL);
		// UnityEngine.iOS.NotificationServices.CancelAllLocalNotifications();
		NotificationServices_CancelAllLocalNotifications_m9E03048322B65663E4FC2A324B4234AA8DECC65E(NULL);
		// if (pause)
		bool L_0 = ___0_pause;
		if (!L_0)
		{
			goto IL_00dd;
		}
	}
	{
		// List<UnityEngine.iOS.LocalNotification> notifications = new List<UnityEngine.iOS.LocalNotification>();
		List_1_tBC7D8219AE842673418038D26E22D9C0147753F0* L_1 = (List_1_tBC7D8219AE842673418038D26E22D9C0147753F0*)il2cpp_codegen_object_new(List_1_tBC7D8219AE842673418038D26E22D9C0147753F0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m8C5C3A5219BF7F9AB0784DD7BB56AAE024F3B40B(L_1, List_1__ctor_m8C5C3A5219BF7F9AB0784DD7BB56AAE024F3B40B_RuntimeMethod_var);
		V_0 = L_1;
		// DateTime _now = DateTime.Now.AddSeconds(10);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		L_2 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_3 = L_2;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3;
		L_3 = DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81((&V_3), (10.0), NULL);
		// DateTime nextFireTime = _now; // Initial next fire time
		V_1 = L_3;
		// int count = 1;
		V_2 = 1;
		goto IL_009f;
	}

IL_0031:
	{
		// UnityEngine.iOS.LocalNotification notification = new UnityEngine.iOS.LocalNotification();
		LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* L_4 = (LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE*)il2cpp_codegen_object_new(LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		LocalNotification__ctor_m41B9EDE0CFB6BD6AE50C698CEC09EFCCBFEA7A06(L_4, NULL);
		V_4 = L_4;
		// notification.applicationIconBadgeNumber = count;
		LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* L_5 = V_4;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		LocalNotification_set_applicationIconBadgeNumber_m3E4A0996F0D35112C77F2940219E8DCFBA3D2B1C(L_5, L_6, NULL);
		// notification.fireDate = nextFireTime;
		LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* L_7 = V_4;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_8 = V_1;
		NullCheck(L_7);
		LocalNotification_set_fireDate_mFCFF86EAA826C8F4D866166AF86F8F5C9747B3EC(L_7, L_8, NULL);
		// notification.alertTitle = "Notification Title";
		LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* L_9 = V_4;
		NullCheck(L_9);
		LocalNotification_set_alertTitle_mAB7164BC4F1C57CB44698CAECF95C1AB52DF1D26(L_9, _stringLiteralB0769D951EA1B8A998AAC313D55774E8A792F5FD, NULL);
		// notification.alertBody = "Notification Body";
		LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* L_10 = V_4;
		NullCheck(L_10);
		LocalNotification_set_alertBody_m2F91B0DE9B73FC571A607CF4896DEF1E530C97A7(L_10, _stringLiteral801B26249550605953F17D5009E80B894D1B4F70, NULL);
		// notification.soundName = UnityEngine.iOS.LocalNotification.defaultSoundName;
		LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* L_11 = V_4;
		il2cpp_codegen_runtime_class_init_inline(LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE_il2cpp_TypeInfo_var);
		String_t* L_12;
		L_12 = LocalNotification_get_defaultSoundName_m36DB8BD2B10EBF580896D5BAA6355B254F61B7F1(NULL);
		NullCheck(L_11);
		LocalNotification_set_soundName_mDFA366538BB50063B3E7045D85088BDD5097220C(L_11, L_12, NULL);
		// notifications.Add(notification);
		List_1_tBC7D8219AE842673418038D26E22D9C0147753F0* L_13 = V_0;
		LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* L_14 = V_4;
		NullCheck(L_13);
		List_1_Add_m49F7A9CBF94A5E7D9E4740C5572617E44F002B94_inline(L_13, L_14, List_1_Add_m49F7A9CBF94A5E7D9E4740C5572617E44F002B94_RuntimeMethod_var);
		// nextFireTime = nextFireTime.AddMinutes(1);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_15;
		L_15 = DateTime_AddMinutes_m8B24125F1100B23A1D9D9361A2745577062E0D91((&V_1), (1.0), NULL);
		V_1 = L_15;
		// count++;
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		// Debug.Log("This time the count is " + count);
		String_t* L_17;
		L_17 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_18;
		L_18 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralED3382B615AFF362FB22ECD868BB96E4C1113CA1, L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_18, NULL);
	}

IL_009f:
	{
		// while (count <= 10)
		int32_t L_19 = V_2;
		if ((((int32_t)L_19) <= ((int32_t)((int32_t)10))))
		{
			goto IL_0031;
		}
	}
	{
		// foreach (UnityEngine.iOS.LocalNotification notif in notifications)
		List_1_tBC7D8219AE842673418038D26E22D9C0147753F0* L_20 = V_0;
		NullCheck(L_20);
		Enumerator_t408765680189DF655A1ABCEAB37112390080715F L_21;
		L_21 = List_1_GetEnumerator_m0722EF06E0C1AE2FCACCDC4C432A83C96930120C(L_20, List_1_GetEnumerator_m0722EF06E0C1AE2FCACCDC4C432A83C96930120C_RuntimeMethod_var);
		V_5 = L_21;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00cf:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m5204FD9329F260AB7515DAD913AECBF9BF5E7FF3((&V_5), Enumerator_Dispose_m5204FD9329F260AB7515DAD913AECBF9BF5E7FF3_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00c4_1;
			}

IL_00ae_1:
			{
				// foreach (UnityEngine.iOS.LocalNotification notif in notifications)
				LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* L_22;
				L_22 = Enumerator_get_Current_m15DA3B78D1B425EE75B56128E266511A988A9E42_inline((&V_5), Enumerator_get_Current_m15DA3B78D1B425EE75B56128E266511A988A9E42_RuntimeMethod_var);
				// Debug.Log("Application get paused and a notification get schedule");
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral070DC7956F06C9EFCBF116607A382F2C7BDB41AC, NULL);
				// UnityEngine.iOS.NotificationServices.ScheduleLocalNotification(notif);
				NotificationServices_ScheduleLocalNotification_m87B3214B8DE55171DB4AFC97D64296F73AB07CC1(L_22, NULL);
			}

IL_00c4_1:
			{
				// foreach (UnityEngine.iOS.LocalNotification notif in notifications)
				bool L_23;
				L_23 = Enumerator_MoveNext_m159A4B78C614DE4179F4857A890D9B837AEBCC5D((&V_5), Enumerator_MoveNext_m159A4B78C614DE4179F4857A890D9B837AEBCC5D_RuntimeMethod_var);
				if (L_23)
				{
					goto IL_00ae_1;
				}
			}
			{
				goto IL_00dd;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00dd:
	{
		// }
		return;
	}
}
// System.Void NotificationManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotificationManager__ctor_m64117B1314716B266CDBB163DD6A9D6EC6235A95 (NotificationManager_t420578B78ECCF624ABE7E8D4618BD10D09AFDF51* __this, const RuntimeMethod* method) 
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
// System.Void NotificationManager/<CallForAlert>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCallForAlertU3Ed__5__ctor_m3A3BF8074F1D2AF1EF7DCC148754665CA60F63E5 (U3CCallForAlertU3Ed__5_tB1A2E24DB78EBE0DF04BB4D15474B455A9CDF853* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void NotificationManager/<CallForAlert>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCallForAlertU3Ed__5_System_IDisposable_Dispose_m07144D126ECF35BF7FD9E82F1B2F5A98DF6C48F5 (U3CCallForAlertU3Ed__5_tB1A2E24DB78EBE0DF04BB4D15474B455A9CDF853* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean NotificationManager/<CallForAlert>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCallForAlertU3Ed__5_MoveNext_m752D463689ADC63AB887E862C6218DDB9B2E48EE (U3CCallForAlertU3Ed__5_tB1A2E24DB78EBE0DF04BB4D15474B455A9CDF853* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0027:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object NotificationManager/<CallForAlert>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCallForAlertU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m27CECA46F646E96ADCF966B5DC2DBA49BCE43E19 (U3CCallForAlertU3Ed__5_tB1A2E24DB78EBE0DF04BB4D15474B455A9CDF853* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void NotificationManager/<CallForAlert>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCallForAlertU3Ed__5_System_Collections_IEnumerator_Reset_mF149FD63281E5DDFCECC5B63AE070170889AE000 (U3CCallForAlertU3Ed__5_tB1A2E24DB78EBE0DF04BB4D15474B455A9CDF853* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCallForAlertU3Ed__5_System_Collections_IEnumerator_Reset_mF149FD63281E5DDFCECC5B63AE070170889AE000_RuntimeMethod_var)));
	}
}
// System.Object NotificationManager/<CallForAlert>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCallForAlertU3Ed__5_System_Collections_IEnumerator_get_Current_m398575FF97A4EC90F4BE92EEAF160E024354CA8B (U3CCallForAlertU3Ed__5_tB1A2E24DB78EBE0DF04BB4D15474B455A9CDF853* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void Notifications::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notifications_Start_m2460150FF0EF8648631ADB8F46AEDE7C06197411 (Notifications_tFC1BC99F91FE9B02BCF9D9AA5109516F4591A126* __this, const RuntimeMethod* method) 
{
	{
		// UnityEngine.iOS.NotificationServices.RegisterForNotifications(UnityEngine.iOS.NotificationType.Badge | UnityEngine.iOS.NotificationType.Sound | UnityEngine.iOS.NotificationType.Alert);
		NotificationServices_RegisterForNotifications_m1457000D6320F381A3F9838DF038A1764230C6C1(7, NULL);
		// }
		return;
	}
}
// System.Void Notifications::OnApplicationPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notifications_OnApplicationPause_m6A50E6777A69B1D5B4D71BA95643A504B3419D91 (Notifications_tFC1BC99F91FE9B02BCF9D9AA5109516F4591A126* __this, bool ___0_pause, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9E6888E6ACE59F9DE2AA8FCCE740AC681CEEE42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4C6EE2FC3234C0137E848AE360D6B72D0AA0222);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* V_1 = NULL;
	LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* V_2 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// UnityEngine.iOS.NotificationServices.ClearLocalNotifications();
		NotificationServices_ClearLocalNotifications_m39C507598E8802270E2303A82DCB000114689BD0(NULL);
		// UnityEngine.iOS.NotificationServices.CancelAllLocalNotifications();
		NotificationServices_CancelAllLocalNotifications_m9E03048322B65663E4FC2A324B4234AA8DECC65E(NULL);
		// if (pause)
		bool L_0 = ___0_pause;
		if (!L_0)
		{
			goto IL_0108;
		}
	}
	{
		// DateTime dateToNotify = DateTime.Now.AddSeconds(30);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_3 = L_1;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		L_2 = DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81((&V_3), (30.0), NULL);
		V_0 = L_2;
		// UnityEngine.iOS.LocalNotification notif = new UnityEngine.iOS.LocalNotification();
		LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* L_3 = (LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE*)il2cpp_codegen_object_new(LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		LocalNotification__ctor_m41B9EDE0CFB6BD6AE50C698CEC09EFCCBFEA7A06(L_3, NULL);
		// notif.applicationIconBadgeNumber = 1;
		LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* L_4 = L_3;
		NullCheck(L_4);
		LocalNotification_set_applicationIconBadgeNumber_m3E4A0996F0D35112C77F2940219E8DCFBA3D2B1C(L_4, 1, NULL);
		// notif.fireDate = dateToNotify;
		LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* L_5 = L_4;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6 = V_0;
		NullCheck(L_5);
		LocalNotification_set_fireDate_mFCFF86EAA826C8F4D866166AF86F8F5C9747B3EC(L_5, L_6, NULL);
		// notif.alertTitle = "Water Reminder";
		LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* L_7 = L_5;
		NullCheck(L_7);
		LocalNotification_set_alertTitle_mAB7164BC4F1C57CB44698CAECF95C1AB52DF1D26(L_7, _stringLiteralC9E6888E6ACE59F9DE2AA8FCCE740AC681CEEE42, NULL);
		// notif.alertBody = "Go & drink water.";
		LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* L_8 = L_7;
		NullCheck(L_8);
		LocalNotification_set_alertBody_m2F91B0DE9B73FC571A607CF4896DEF1E530C97A7(L_8, _stringLiteralE4C6EE2FC3234C0137E848AE360D6B72D0AA0222, NULL);
		// notif.soundName = UnityEngine.iOS.LocalNotification.defaultSoundName;
		LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* L_9 = L_8;
		il2cpp_codegen_runtime_class_init_inline(LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE_il2cpp_TypeInfo_var);
		String_t* L_10;
		L_10 = LocalNotification_get_defaultSoundName_m36DB8BD2B10EBF580896D5BAA6355B254F61B7F1(NULL);
		NullCheck(L_9);
		LocalNotification_set_soundName_mDFA366538BB50063B3E7045D85088BDD5097220C(L_9, L_10, NULL);
		// UnityEngine.iOS.LocalNotification notif_1 = new UnityEngine.iOS.LocalNotification();
		LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* L_11 = (LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE*)il2cpp_codegen_object_new(LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		LocalNotification__ctor_m41B9EDE0CFB6BD6AE50C698CEC09EFCCBFEA7A06(L_11, NULL);
		V_1 = L_11;
		// notif.applicationIconBadgeNumber = 2;
		LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* L_12 = L_9;
		NullCheck(L_12);
		LocalNotification_set_applicationIconBadgeNumber_m3E4A0996F0D35112C77F2940219E8DCFBA3D2B1C(L_12, 2, NULL);
		// notif.fireDate = DateTime.Now.AddSeconds(60);
		LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* L_13 = L_12;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_14;
		L_14 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_3 = L_14;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_15;
		L_15 = DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81((&V_3), (60.0), NULL);
		NullCheck(L_13);
		LocalNotification_set_fireDate_mFCFF86EAA826C8F4D866166AF86F8F5C9747B3EC(L_13, L_15, NULL);
		// notif.alertTitle = "Water Reminder";
		LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* L_16 = L_13;
		NullCheck(L_16);
		LocalNotification_set_alertTitle_mAB7164BC4F1C57CB44698CAECF95C1AB52DF1D26(L_16, _stringLiteralC9E6888E6ACE59F9DE2AA8FCCE740AC681CEEE42, NULL);
		// notif.alertBody = "Go & drink water.";
		LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* L_17 = L_16;
		NullCheck(L_17);
		LocalNotification_set_alertBody_m2F91B0DE9B73FC571A607CF4896DEF1E530C97A7(L_17, _stringLiteralE4C6EE2FC3234C0137E848AE360D6B72D0AA0222, NULL);
		// notif.soundName = UnityEngine.iOS.LocalNotification.defaultSoundName;
		LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* L_18 = L_17;
		String_t* L_19;
		L_19 = LocalNotification_get_defaultSoundName_m36DB8BD2B10EBF580896D5BAA6355B254F61B7F1(NULL);
		NullCheck(L_18);
		LocalNotification_set_soundName_mDFA366538BB50063B3E7045D85088BDD5097220C(L_18, L_19, NULL);
		// UnityEngine.iOS.LocalNotification notif_2 = new UnityEngine.iOS.LocalNotification();
		LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* L_20 = (LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE*)il2cpp_codegen_object_new(LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		LocalNotification__ctor_m41B9EDE0CFB6BD6AE50C698CEC09EFCCBFEA7A06(L_20, NULL);
		V_2 = L_20;
		// notif.applicationIconBadgeNumber = 3;
		LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* L_21 = L_18;
		NullCheck(L_21);
		LocalNotification_set_applicationIconBadgeNumber_m3E4A0996F0D35112C77F2940219E8DCFBA3D2B1C(L_21, 3, NULL);
		// notif.fireDate = DateTime.Now.AddSeconds(120);
		LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* L_22 = L_21;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_23;
		L_23 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_3 = L_23;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_24;
		L_24 = DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81((&V_3), (120.0), NULL);
		NullCheck(L_22);
		LocalNotification_set_fireDate_mFCFF86EAA826C8F4D866166AF86F8F5C9747B3EC(L_22, L_24, NULL);
		// notif.alertTitle = "Water Reminder";
		LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* L_25 = L_22;
		NullCheck(L_25);
		LocalNotification_set_alertTitle_mAB7164BC4F1C57CB44698CAECF95C1AB52DF1D26(L_25, _stringLiteralC9E6888E6ACE59F9DE2AA8FCCE740AC681CEEE42, NULL);
		// notif.alertBody = "Go & drink water.";
		LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* L_26 = L_25;
		NullCheck(L_26);
		LocalNotification_set_alertBody_m2F91B0DE9B73FC571A607CF4896DEF1E530C97A7(L_26, _stringLiteralE4C6EE2FC3234C0137E848AE360D6B72D0AA0222, NULL);
		// notif.soundName = UnityEngine.iOS.LocalNotification.defaultSoundName;
		LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* L_27 = L_26;
		String_t* L_28;
		L_28 = LocalNotification_get_defaultSoundName_m36DB8BD2B10EBF580896D5BAA6355B254F61B7F1(NULL);
		NullCheck(L_27);
		LocalNotification_set_soundName_mDFA366538BB50063B3E7045D85088BDD5097220C(L_27, L_28, NULL);
		// notif.repeatInterval = (UnityEngine.iOS.CalendarUnit.Minute);
		LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* L_29 = L_27;
		NullCheck(L_29);
		LocalNotification_set_repeatInterval_m22BA0394C8682C0661C9CFFEECE1F7B0EF3D34E1(L_29, ((int32_t)64), NULL);
		// UnityEngine.iOS.NotificationServices.ScheduleLocalNotification(notif);
		NotificationServices_ScheduleLocalNotification_m87B3214B8DE55171DB4AFC97D64296F73AB07CC1(L_29, NULL);
		// UnityEngine.iOS.NotificationServices.ScheduleLocalNotification(notif_1);
		LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* L_30 = V_1;
		NotificationServices_ScheduleLocalNotification_m87B3214B8DE55171DB4AFC97D64296F73AB07CC1(L_30, NULL);
		// UnityEngine.iOS.NotificationServices.ScheduleLocalNotification(notif_2);
		LocalNotification_t0158F4A5883A461286AEAFD1EE1B60272D7ABEDE* L_31 = V_2;
		NotificationServices_ScheduleLocalNotification_m87B3214B8DE55171DB4AFC97D64296F73AB07CC1(L_31, NULL);
	}

IL_0108:
	{
		// }
		return;
	}
}
// System.Void Notifications::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notifications__ctor_m7565860263B8003314D1D28BF9A95541D40626D6 (Notifications_tFC1BC99F91FE9B02BCF9D9AA5109516F4591A126* __this, const RuntimeMethod* method) 
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
// ObjectReferenceContainer ObjectReferenceContainer::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReferenceContainer_t9388B07BB597BE5F20F15829C614FCFBE410183D* ObjectReferenceContainer_get_Instance_m8FFD930C372192AD9824EBE58CFAC738ED6742AF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectReferenceContainer_t9388B07BB597BE5F20F15829C614FCFBE410183D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		ObjectReferenceContainer_t9388B07BB597BE5F20F15829C614FCFBE410183D* L_0 = ((ObjectReferenceContainer_t9388B07BB597BE5F20F15829C614FCFBE410183D_StaticFields*)il2cpp_codegen_static_fields_for(ObjectReferenceContainer_t9388B07BB597BE5F20F15829C614FCFBE410183D_il2cpp_TypeInfo_var))->___instance_4;
		return L_0;
	}
}
// System.Void ObjectReferenceContainer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectReferenceContainer_Awake_m51D52CCE5B81CB7BB18DA654D629D8012141C30A (ObjectReferenceContainer_t9388B07BB597BE5F20F15829C614FCFBE410183D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectReferenceContainer_t9388B07BB597BE5F20F15829C614FCFBE410183D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		ObjectReferenceContainer_t9388B07BB597BE5F20F15829C614FCFBE410183D* L_0 = ((ObjectReferenceContainer_t9388B07BB597BE5F20F15829C614FCFBE410183D_StaticFields*)il2cpp_codegen_static_fields_for(ObjectReferenceContainer_t9388B07BB597BE5F20F15829C614FCFBE410183D_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// instance = this;
		((ObjectReferenceContainer_t9388B07BB597BE5F20F15829C614FCFBE410183D_StaticFields*)il2cpp_codegen_static_fields_for(ObjectReferenceContainer_t9388B07BB597BE5F20F15829C614FCFBE410183D_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((ObjectReferenceContainer_t9388B07BB597BE5F20F15829C614FCFBE410183D_StaticFields*)il2cpp_codegen_static_fields_for(ObjectReferenceContainer_t9388B07BB597BE5F20F15829C614FCFBE410183D_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		return;
	}

IL_0014:
	{
		// else if (instance != this)
		ObjectReferenceContainer_t9388B07BB597BE5F20F15829C614FCFBE410183D* L_2 = ((ObjectReferenceContainer_t9388B07BB597BE5F20F15829C614FCFBE410183D_StaticFields*)il2cpp_codegen_static_fields_for(ObjectReferenceContainer_t9388B07BB597BE5F20F15829C614FCFBE410183D_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, __this, NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void ObjectReferenceContainer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectReferenceContainer__ctor_m1F84849E9AC3609574DDAF67702F15E4D5E5EF65 (ObjectReferenceContainer_t9388B07BB597BE5F20F15829C614FCFBE410183D* __this, const RuntimeMethod* method) 
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
// System.Void PlayerPrefsHandler::set_Weight(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefsHandler_set_Weight_mCE13E47BF9D8BADEC19774DA0D604FA72D748DB2 (String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetString(weight, value);
		il2cpp_codegen_runtime_class_init_inline(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		String_t* L_0 = ((PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var))->___weight_0;
		String_t* L_1 = ___0_value;
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.String PlayerPrefsHandler::get_Weight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefsHandler_get_Weight_mD0EC2FBF562A322DF9516EBEDEF22AEB7CC1E902 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PlayerPrefs.GetString(weight);
		il2cpp_codegen_runtime_class_init_inline(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		String_t* L_0 = ((PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var))->___weight_0;
		String_t* L_1;
		L_1 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(L_0, NULL);
		return L_1;
	}
}
// System.Void PlayerPrefsHandler::set_WaterLimit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefsHandler_set_WaterLimit_m93F663E1F9B96BF87CD35488D8A3F5F4E8FE201A (String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetString(waterLimit, value);
		il2cpp_codegen_runtime_class_init_inline(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		String_t* L_0 = ((PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var))->___waterLimit_1;
		String_t* L_1 = ___0_value;
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.String PlayerPrefsHandler::get_WaterLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefsHandler_get_WaterLimit_m72E5509C90998F30A324FF81EC9D605FFA88DAE4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PlayerPrefs.GetString(waterLimit);
		il2cpp_codegen_runtime_class_init_inline(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		String_t* L_0 = ((PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var))->___waterLimit_1;
		String_t* L_1;
		L_1 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(L_0, NULL);
		return L_1;
	}
}
// System.Void PlayerPrefsHandler::set_WaterUnit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefsHandler_set_WaterUnit_m2B666B6502D8437C678786A31A8946701B31EDFD (String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetString(waterUnit,value);
		il2cpp_codegen_runtime_class_init_inline(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		String_t* L_0 = ((PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var))->___waterUnit_2;
		String_t* L_1 = ___0_value;
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.String PlayerPrefsHandler::get_WaterUnit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefsHandler_get_WaterUnit_m0404EB49037769F991CFD5C4CAF25B73C2CB8B29 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PlayerPrefs.GetString(waterLimit);
		il2cpp_codegen_runtime_class_init_inline(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		String_t* L_0 = ((PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var))->___waterLimit_1;
		String_t* L_1;
		L_1 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(L_0, NULL);
		return L_1;
	}
}
// System.Void PlayerPrefsHandler::set_WeightUnit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefsHandler_set_WeightUnit_m40CBD7746B7EF9CA7E57BC56A405E6A00B320D74 (String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetString(weightUnit, value);
		il2cpp_codegen_runtime_class_init_inline(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		String_t* L_0 = ((PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var))->___weightUnit_3;
		String_t* L_1 = ___0_value;
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.String PlayerPrefsHandler::get_WeightUnit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefsHandler_get_WeightUnit_m5A1424243C6BCB05A6DE994D33FD640F99D5E562 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PlayerPrefs.GetString(weightUnit);
		il2cpp_codegen_runtime_class_init_inline(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		String_t* L_0 = ((PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var))->___weightUnit_3;
		String_t* L_1;
		L_1 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(L_0, NULL);
		return L_1;
	}
}
// System.Int32 PlayerPrefsHandler::get_FirstRun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefsHandler_get_FirstRun_mA500C494B13B04BF31CBF82FF0A630BC9E48F66C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PlayerPrefs.GetInt(firstRun);
		il2cpp_codegen_runtime_class_init_inline(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		String_t* L_0 = ((PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var))->___firstRun_4;
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(L_0, NULL);
		return L_1;
	}
}
// System.Void PlayerPrefsHandler::set_FirstRun(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefsHandler_set_FirstRun_mB2F07FA34A3E201D0D9BF48A995A07F89454CCBC (int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt(firstRun, value);
		il2cpp_codegen_runtime_class_init_inline(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		String_t* L_0 = ((PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var))->___firstRun_4;
		int32_t L_1 = ___0_value;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.String PlayerPrefsHandler::get_DateTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefsHandler_get_DateTime_mAC25A403E57AB461B279DBCA1CCF4B538112FD2B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PlayerPrefs.GetString(dateTime);
		il2cpp_codegen_runtime_class_init_inline(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		String_t* L_0 = ((PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var))->___dateTime_5;
		String_t* L_1;
		L_1 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(L_0, NULL);
		return L_1;
	}
}
// System.Void PlayerPrefsHandler::set_DateTime(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefsHandler_set_DateTime_m25278C8DB82F1030A838756C350E6AF66A3DCF73 (String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetString(dateTime, value);
		il2cpp_codegen_runtime_class_init_inline(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		String_t* L_0 = ((PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var))->___dateTime_5;
		String_t* L_1 = ___0_value;
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Single PlayerPrefsHandler::get_ImageFillAmount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPrefsHandler_get_ImageFillAmount_m9DB9814B9EE23368FF4D3765169A8C36E359EB18 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return PlayerPrefs.GetFloat(imageFillAmount);
		il2cpp_codegen_runtime_class_init_inline(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		String_t* L_0 = ((PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var))->___imageFillAmount_6;
		float L_1;
		L_1 = PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB(L_0, NULL);
		return L_1;
	}
}
// System.Void PlayerPrefsHandler::set_ImageFillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefsHandler_set_ImageFillAmount_m9E240851F19133CFC14DBDB12E3E9C179E648097 (float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetFloat(imageFillAmount,value);
		il2cpp_codegen_runtime_class_init_inline(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		String_t* L_0 = ((PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var))->___imageFillAmount_6;
		float L_1 = ___0_value;
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void PlayerPrefsHandler::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefsHandler__cctor_mAE70FE6CE76CDB1433DEB0457BB21FECEC3C5AE8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06ABC4934C04242DFC703DC403A6DA861840286D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28FB1A63EE171489461C4F13E85017A42AECC1B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B6D901AB3B90302164922A4DDD718210FBC8E9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral401602777C44EA69B5FF9AB6AB2D47AEEC89D2AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94D02A557005AA9B9B42DF69299B1493B72887B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5A9A0C1CF52FF769D4E150BE747F45A07727226);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE376FCD4A340AF9C59756C5970723E75E1C69EE2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static string weight = "Weight";
		((PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var))->___weight_0 = _stringLiteralE376FCD4A340AF9C59756C5970723E75E1C69EE2;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var))->___weight_0), (void*)_stringLiteralE376FCD4A340AF9C59756C5970723E75E1C69EE2);
		// private static string waterLimit = "WaterLimit";
		((PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var))->___waterLimit_1 = _stringLiteral3B6D901AB3B90302164922A4DDD718210FBC8E9A;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var))->___waterLimit_1), (void*)_stringLiteral3B6D901AB3B90302164922A4DDD718210FBC8E9A);
		// private static string waterUnit = "WaterString";
		((PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var))->___waterUnit_2 = _stringLiteral94D02A557005AA9B9B42DF69299B1493B72887B7;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var))->___waterUnit_2), (void*)_stringLiteral94D02A557005AA9B9B42DF69299B1493B72887B7);
		// private static string weightUnit = "WeightUnit";
		((PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var))->___weightUnit_3 = _stringLiteral06ABC4934C04242DFC703DC403A6DA861840286D;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var))->___weightUnit_3), (void*)_stringLiteral06ABC4934C04242DFC703DC403A6DA861840286D);
		// private static string firstRun="FirstRun";
		((PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var))->___firstRun_4 = _stringLiteral28FB1A63EE171489461C4F13E85017A42AECC1B2;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var))->___firstRun_4), (void*)_stringLiteral28FB1A63EE171489461C4F13E85017A42AECC1B2);
		// private static string dateTime = "DateTime";
		((PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var))->___dateTime_5 = _stringLiteral401602777C44EA69B5FF9AB6AB2D47AEEC89D2AA;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var))->___dateTime_5), (void*)_stringLiteral401602777C44EA69B5FF9AB6AB2D47AEEC89D2AA);
		// private static string imageFillAmount = "ImageFillAmount";
		((PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var))->___imageFillAmount_6 = _stringLiteralA5A9A0C1CF52FF769D4E150BE747F45A07727226;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_StaticFields*)il2cpp_codegen_static_fields_for(PlayerPrefsHandler_t7E7EA40B71D48B278E79413949A536DF9486DAC1_il2cpp_TypeInfo_var))->___imageFillAmount_6), (void*)_stringLiteralA5A9A0C1CF52FF769D4E150BE747F45A07727226);
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
// SceneHandler SceneHandler::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E* SceneHandler_get_Instance_m83009F0DA8BE85EB009B7E24DC1B0104BDE96F99 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E* L_0 = ((SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E_StaticFields*)il2cpp_codegen_static_fields_for(SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E_il2cpp_TypeInfo_var))->___instance_4;
		return L_0;
	}
}
// System.Void SceneHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneHandler_Start_m4075C3F571ED56FDD3C05296DF0931B63D30E326 (SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E* L_0 = ((SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E_StaticFields*)il2cpp_codegen_static_fields_for(SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// instance = this;
		((SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E_StaticFields*)il2cpp_codegen_static_fields_for(SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E_StaticFields*)il2cpp_codegen_static_fields_for(SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// DontDestroyOnLoad(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_2, NULL);
		return;
	}

IL_001f:
	{
		// else if (instance != this)
		SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E* L_3 = ((SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E_StaticFields*)il2cpp_codegen_static_fields_for(SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, __this, NULL);
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void SceneHandler::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneHandler_LoadScene_m9896E40CF55849E8C28C231A648B309535236664 (SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E* __this, String_t* ___0_SceneName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadSceneAsync(SceneName);
		String_t* L_0 = ___0_SceneName;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_1;
		L_1 = SceneManager_LoadSceneAsync_m84D316B1993A4E69F9E8CDE30531687B701F9300(L_0, NULL);
		// }
		return;
	}
}
// System.Void SceneHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneHandler__ctor_m344669B2EC0EC11DCF76A16B7127D50324641B68 (SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E* __this, const RuntimeMethod* method) 
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
// System.Void SplashScreen::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplashScreen_Awake_m0FACE6E534AAD36E8A3E6F991CB07261D44A7601 (SplashScreen_tA005FEA658015A9DEAEF5988088206BAC2A3B1F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m47C7F4214DFAAC752E331A1073AD1B7EA78DB3DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// logoImagecanves = logoImage.GetComponent<CanvasGroup>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___logoImage_5;
		NullCheck(L_0);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_1;
		L_1 = GameObject_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m47C7F4214DFAAC752E331A1073AD1B7EA78DB3DD(L_0, GameObject_GetComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m47C7F4214DFAAC752E331A1073AD1B7EA78DB3DD_RuntimeMethod_var);
		__this->___logoImagecanves_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___logoImagecanves_7), (void*)L_1);
		// logoImagecanves.alpha = 0;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_2 = __this->___logoImagecanves_7;
		NullCheck(L_2);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_2, (0.0f), NULL);
		// colorFilledImage.fillAmount = 0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___colorFilledImage_6;
		NullCheck(L_3);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_3, (0.0f), NULL);
		// loadingIcon.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___loadingIcon_4;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void SplashScreen::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplashScreen_Start_mD77DDAF7296DAA0640397F241E86A23D4FB69612 (SplashScreen_tA005FEA658015A9DEAEF5988088206BAC2A3B1F4* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(FadeInAndFill());
		RuntimeObject* L_0;
		L_0 = SplashScreen_FadeInAndFill_m9BC029B2BC27E18422EB1A2F51E3FBA62163F560(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator SplashScreen::FadeInAndFill()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SplashScreen_FadeInAndFill_m9BC029B2BC27E18422EB1A2F51E3FBA62163F560 (SplashScreen_tA005FEA658015A9DEAEF5988088206BAC2A3B1F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeInAndFillU3Ed__9_t81F9C4504DD2F631EFE8146AF553D09403363CAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeInAndFillU3Ed__9_t81F9C4504DD2F631EFE8146AF553D09403363CAD* L_0 = (U3CFadeInAndFillU3Ed__9_t81F9C4504DD2F631EFE8146AF553D09403363CAD*)il2cpp_codegen_object_new(U3CFadeInAndFillU3Ed__9_t81F9C4504DD2F631EFE8146AF553D09403363CAD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFadeInAndFillU3Ed__9__ctor_mCC798147BF295991CB47C40D76D7E7EBEFD4F234(L_0, 0, NULL);
		U3CFadeInAndFillU3Ed__9_t81F9C4504DD2F631EFE8146AF553D09403363CAD* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SplashScreen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplashScreen__ctor_m071097F566D982FB68F986AA63BF2EBF07D14F66 (SplashScreen_tA005FEA658015A9DEAEF5988088206BAC2A3B1F4* __this, const RuntimeMethod* method) 
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
// System.Void SplashScreen/<FadeInAndFill>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInAndFillU3Ed__9__ctor_mCC798147BF295991CB47C40D76D7E7EBEFD4F234 (U3CFadeInAndFillU3Ed__9_t81F9C4504DD2F631EFE8146AF553D09403363CAD* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SplashScreen/<FadeInAndFill>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInAndFillU3Ed__9_System_IDisposable_Dispose_m7ABF1B3F30044B44CE1863FC601CE62BCCC5BA10 (U3CFadeInAndFillU3Ed__9_t81F9C4504DD2F631EFE8146AF553D09403363CAD* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SplashScreen/<FadeInAndFill>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeInAndFillU3Ed__9_MoveNext_m3F1EE7036DAA6C8BBAFFC528BD174A20CFE6030B (U3CFadeInAndFillU3Ed__9_t81F9C4504DD2F631EFE8146AF553D09403363CAD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SplashScreen_tA005FEA658015A9DEAEF5988088206BAC2A3B1F4* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SplashScreen_tA005FEA658015A9DEAEF5988088206BAC2A3B1F4* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_009d;
			}
			case 2:
			{
				goto IL_0133;
			}
			case 3:
			{
				goto IL_0173;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float elapsedTime = 0f;
		__this->___U3CelapsedTimeU3E5__2_3 = (0.0f);
		// float startAlpha = 0f;
		__this->___U3CstartAlphaU3E5__3_4 = (0.0f);
		// float targetAlpha = 1f;
		__this->___U3CtargetAlphaU3E5__4_5 = (1.0f);
		goto IL_00a4;
	}

IL_0050:
	{
		// float currentAlpha = Mathf.Lerp(startAlpha, targetAlpha, elapsedTime / fadeInDuration);
		float L_3 = __this->___U3CstartAlphaU3E5__3_4;
		float L_4 = __this->___U3CtargetAlphaU3E5__4_5;
		float L_5 = __this->___U3CelapsedTimeU3E5__2_3;
		SplashScreen_tA005FEA658015A9DEAEF5988088206BAC2A3B1F4* L_6 = V_1;
		NullCheck(L_6);
		float L_7 = L_6->___fadeInDuration_8;
		float L_8;
		L_8 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_3, L_4, ((float)(L_5/L_7)), NULL);
		V_2 = L_8;
		// logoImagecanves.alpha = currentAlpha;
		SplashScreen_tA005FEA658015A9DEAEF5988088206BAC2A3B1F4* L_9 = V_1;
		NullCheck(L_9);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_10 = L_9->___logoImagecanves_7;
		float L_11 = V_2;
		NullCheck(L_10);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_10, L_11, NULL);
		// elapsedTime += Time.deltaTime;
		float L_12 = __this->___U3CelapsedTimeU3E5__2_3;
		float L_13;
		L_13 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CelapsedTimeU3E5__2_3 = ((float)il2cpp_codegen_add(L_12, L_13));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_009d:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00a4:
	{
		// while (elapsedTime < fadeInDuration)
		float L_14 = __this->___U3CelapsedTimeU3E5__2_3;
		SplashScreen_tA005FEA658015A9DEAEF5988088206BAC2A3B1F4* L_15 = V_1;
		NullCheck(L_15);
		float L_16 = L_15->___fadeInDuration_8;
		if ((((float)L_14) < ((float)L_16)))
		{
			goto IL_0050;
		}
	}
	{
		// logoImagecanves.alpha = targetAlpha;
		SplashScreen_tA005FEA658015A9DEAEF5988088206BAC2A3B1F4* L_17 = V_1;
		NullCheck(L_17);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_18 = L_17->___logoImagecanves_7;
		float L_19 = __this->___U3CtargetAlphaU3E5__4_5;
		NullCheck(L_18);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(L_18, L_19, NULL);
		// elapsedTime = 0f;
		__this->___U3CelapsedTimeU3E5__2_3 = (0.0f);
		// float startFillAmount = 0f;
		__this->___U3CstartFillAmountU3E5__5_6 = (0.0f);
		// float targetFillAmount = 1f;
		__this->___U3CtargetFillAmountU3E5__6_7 = (1.0f);
		goto IL_013a;
	}

IL_00e6:
	{
		// float currentFillAmount = Mathf.Lerp(startFillAmount, targetFillAmount, elapsedTime / fillAmountDuration);
		float L_20 = __this->___U3CstartFillAmountU3E5__5_6;
		float L_21 = __this->___U3CtargetFillAmountU3E5__6_7;
		float L_22 = __this->___U3CelapsedTimeU3E5__2_3;
		SplashScreen_tA005FEA658015A9DEAEF5988088206BAC2A3B1F4* L_23 = V_1;
		NullCheck(L_23);
		float L_24 = L_23->___fillAmountDuration_9;
		float L_25;
		L_25 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_20, L_21, ((float)(L_22/L_24)), NULL);
		V_3 = L_25;
		// colorFilledImage.fillAmount = currentFillAmount;
		SplashScreen_tA005FEA658015A9DEAEF5988088206BAC2A3B1F4* L_26 = V_1;
		NullCheck(L_26);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_27 = L_26->___colorFilledImage_6;
		float L_28 = V_3;
		NullCheck(L_27);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_27, L_28, NULL);
		// elapsedTime += Time.deltaTime;
		float L_29 = __this->___U3CelapsedTimeU3E5__2_3;
		float L_30;
		L_30 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CelapsedTimeU3E5__2_3 = ((float)il2cpp_codegen_add(L_29, L_30));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0133:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_013a:
	{
		// while (elapsedTime < fillAmountDuration)
		float L_31 = __this->___U3CelapsedTimeU3E5__2_3;
		SplashScreen_tA005FEA658015A9DEAEF5988088206BAC2A3B1F4* L_32 = V_1;
		NullCheck(L_32);
		float L_33 = L_32->___fillAmountDuration_9;
		if ((((float)L_31) < ((float)L_33)))
		{
			goto IL_00e6;
		}
	}
	{
		// colorFilledImage.fillAmount = targetFillAmount;
		SplashScreen_tA005FEA658015A9DEAEF5988088206BAC2A3B1F4* L_34 = V_1;
		NullCheck(L_34);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_35 = L_34->___colorFilledImage_6;
		float L_36 = __this->___U3CtargetFillAmountU3E5__6_7;
		NullCheck(L_35);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_35, L_36, NULL);
		// yield return new WaitForSeconds(sceneChangeTimer);
		SplashScreen_tA005FEA658015A9DEAEF5988088206BAC2A3B1F4* L_37 = V_1;
		NullCheck(L_37);
		float L_38 = L_37->___sceneChangeTimer_10;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_39 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_39);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_39, L_38, NULL);
		__this->___U3CU3E2__current_1 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_39);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_0173:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SceneHandler.Instance.LoadScene("MainMenu");
		SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E* L_40;
		L_40 = SceneHandler_get_Instance_m83009F0DA8BE85EB009B7E24DC1B0104BDE96F99_inline(NULL);
		NullCheck(L_40);
		SceneHandler_LoadScene_m9896E40CF55849E8C28C231A648B309535236664(L_40, _stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719, NULL);
		// }
		return (bool)0;
	}
}
// System.Object SplashScreen/<FadeInAndFill>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeInAndFillU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m62156BE6B4AC9EB24E1007C7FF34846D07D37FB8 (U3CFadeInAndFillU3Ed__9_t81F9C4504DD2F631EFE8146AF553D09403363CAD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SplashScreen/<FadeInAndFill>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInAndFillU3Ed__9_System_Collections_IEnumerator_Reset_m2FE9F28BC5201415CFC0BD9000613D9C2DCC9714 (U3CFadeInAndFillU3Ed__9_t81F9C4504DD2F631EFE8146AF553D09403363CAD* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeInAndFillU3Ed__9_System_Collections_IEnumerator_Reset_m2FE9F28BC5201415CFC0BD9000613D9C2DCC9714_RuntimeMethod_var)));
	}
}
// System.Object SplashScreen/<FadeInAndFill>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeInAndFillU3Ed__9_System_Collections_IEnumerator_get_Current_mB14B9509BACB17AA88A80D811CD11CA791FA2891 (U3CFadeInAndFillU3Ed__9_t81F9C4504DD2F631EFE8146AF553D09403363CAD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// UIReferenceContainer UIReferenceContainer::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8* UIReferenceContainer_get_Instance_m81668CAEFAF57FABB353E35F4119C1E4E099A299 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8* L_0 = ((UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8_StaticFields*)il2cpp_codegen_static_fields_for(UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8_il2cpp_TypeInfo_var))->___instance_4;
		return L_0;
	}
}
// System.Void UIReferenceContainer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIReferenceContainer_Awake_m7ADAB45B47F3F8DA66BE1CD1F077221BFDEADCEF (UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8* L_0 = ((UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8_StaticFields*)il2cpp_codegen_static_fields_for(UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// instance = this;
		((UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8_StaticFields*)il2cpp_codegen_static_fields_for(UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8_StaticFields*)il2cpp_codegen_static_fields_for(UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		return;
	}

IL_0014:
	{
		// else if (instance != this)
		UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8* L_2 = ((UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8_StaticFields*)il2cpp_codegen_static_fields_for(UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, __this, NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void UIReferenceContainer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIReferenceContainer__ctor_mF4BED0BAA8D4E46D4F53849D3EA709D25ECA451B (UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8* __this, const RuntimeMethod* method) 
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
// UIReferenceContainerMenu UIReferenceContainerMenu::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIReferenceContainerMenu_t17D2EB96B8E18E398DAF7523677C42C6C2A8CA7A* UIReferenceContainerMenu_get_Instance_m0399BEA07EA0E8455780E21D97C828418B3121DE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIReferenceContainerMenu_t17D2EB96B8E18E398DAF7523677C42C6C2A8CA7A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		UIReferenceContainerMenu_t17D2EB96B8E18E398DAF7523677C42C6C2A8CA7A* L_0 = ((UIReferenceContainerMenu_t17D2EB96B8E18E398DAF7523677C42C6C2A8CA7A_StaticFields*)il2cpp_codegen_static_fields_for(UIReferenceContainerMenu_t17D2EB96B8E18E398DAF7523677C42C6C2A8CA7A_il2cpp_TypeInfo_var))->___instance_4;
		return L_0;
	}
}
// System.Void UIReferenceContainerMenu::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIReferenceContainerMenu_Awake_m56F953F28A5962ED187FEC6B19E2CB8A46F483ED (UIReferenceContainerMenu_t17D2EB96B8E18E398DAF7523677C42C6C2A8CA7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIReferenceContainerMenu_t17D2EB96B8E18E398DAF7523677C42C6C2A8CA7A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		UIReferenceContainerMenu_t17D2EB96B8E18E398DAF7523677C42C6C2A8CA7A* L_0 = ((UIReferenceContainerMenu_t17D2EB96B8E18E398DAF7523677C42C6C2A8CA7A_StaticFields*)il2cpp_codegen_static_fields_for(UIReferenceContainerMenu_t17D2EB96B8E18E398DAF7523677C42C6C2A8CA7A_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// instance = this;
		((UIReferenceContainerMenu_t17D2EB96B8E18E398DAF7523677C42C6C2A8CA7A_StaticFields*)il2cpp_codegen_static_fields_for(UIReferenceContainerMenu_t17D2EB96B8E18E398DAF7523677C42C6C2A8CA7A_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((UIReferenceContainerMenu_t17D2EB96B8E18E398DAF7523677C42C6C2A8CA7A_StaticFields*)il2cpp_codegen_static_fields_for(UIReferenceContainerMenu_t17D2EB96B8E18E398DAF7523677C42C6C2A8CA7A_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		return;
	}

IL_0014:
	{
		// else if (instance !=this)
		UIReferenceContainerMenu_t17D2EB96B8E18E398DAF7523677C42C6C2A8CA7A* L_2 = ((UIReferenceContainerMenu_t17D2EB96B8E18E398DAF7523677C42C6C2A8CA7A_StaticFields*)il2cpp_codegen_static_fields_for(UIReferenceContainerMenu_t17D2EB96B8E18E398DAF7523677C42C6C2A8CA7A_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, __this, NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void UIReferenceContainerMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIReferenceContainerMenu__ctor_m828E56D77E141DD7E3601CFFC1BC546312C6FF47 (UIReferenceContainerMenu_t17D2EB96B8E18E398DAF7523677C42C6C2A8CA7A* __this, const RuntimeMethod* method) 
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
// System.Void UnitConversions::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitConversions_Start_mB58E5B264D10A940210B7F1D6FD40FEB3EC16CBB (UnitConversions_t05554901EFD13340CB8AF8DBC8E939E518F3E005* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UnitConversions::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitConversions_Update_m92518C40F166439D17901A9923BEB156C7D88AEE (UnitConversions_t05554901EFD13340CB8AF8DBC8E939E518F3E005* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UnitConversions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitConversions__ctor_m04E81BAAB550C1D9FAE1A621FB1016CDB47777CA (UnitConversions_t05554901EFD13340CB8AF8DBC8E939E518F3E005* __this, const RuntimeMethod* method) 
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
// System.Void WaterCalculator::CalculateWater()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterCalculator_CalculateWater_mABE035A21D34801DB159F056BE5E4442FFA37B69 (WaterCalculator_tAD3B482221AA38BD9945837C34E9BC1EA6386BF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C6C3E1FB2B851EF12CA90001BB012695B8BE94E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B89E049FC6343E440B2C7CA3A6085BC95901A3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF411BED999CC6214EB9016567AB706A635F18DDA);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// if (weightField.text.ToString() != "")
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___weightField_4;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		bool L_3;
		L_3 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_3)
		{
			goto IL_00fb;
		}
	}
	{
		// if (!weightField.text.Contains("Kg"))
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_4 = __this->___weightField_4;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_4, NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_5, _stringLiteral7C6C3E1FB2B851EF12CA90001BB012695B8BE94E, NULL);
		if (L_6)
		{
			goto IL_0056;
		}
	}
	{
		// weightField.text = weightField.text + " Kg";
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_7 = __this->___weightField_4;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_8 = __this->___weightField_4;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_8, NULL);
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_9, _stringLiteralF411BED999CC6214EB9016567AB706A635F18DDA, NULL);
		NullCheck(L_7);
		TMP_InputField_set_text_m684E9CDA2D9E82D1C497B5E03DBE79C00584FF62(L_7, L_10, NULL);
	}

IL_0056:
	{
		// string str = weightField.text.Replace("Kg", "");
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_11 = __this->___weightField_4;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_11, NULL);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_12, _stringLiteral7C6C3E1FB2B851EF12CA90001BB012695B8BE94E, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		V_0 = L_13;
		// if (str == "")
		String_t* L_14 = V_0;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_15)
		{
			goto IL_00b8;
		}
	}
	{
		// int num = 0;
		V_1 = 0;
		// suggestedWater.text = (num * 35).ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_16 = __this->___suggestedWater_5;
		int32_t L_17 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_multiply(L_17, ((int32_t)35)));
		String_t* L_18;
		L_18 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		NullCheck(L_16);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_18);
		// suggestedWater.text = suggestedWater.text + " ml";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_19 = __this->___suggestedWater_5;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_20 = __this->___suggestedWater_5;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_20);
		String_t* L_22;
		L_22 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_21, _stringLiteral9B89E049FC6343E440B2C7CA3A6085BC95901A3E, NULL);
		NullCheck(L_19);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_19, L_22);
		return;
	}

IL_00b8:
	{
		// int num = int.Parse(str, CultureInfo.InvariantCulture);
		String_t* L_23 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_24;
		L_24 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		int32_t L_25;
		L_25 = Int32_Parse_mD1B67560310D4E9CC1EA31177CA1CB2CFDFE5D57(L_23, L_24, NULL);
		V_3 = L_25;
		// suggestedWater.text = (num * 35).ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_26 = __this->___suggestedWater_5;
		int32_t L_27 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_multiply(L_27, ((int32_t)35)));
		String_t* L_28;
		L_28 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		NullCheck(L_26);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_26, L_28);
		// suggestedWater.text = suggestedWater.text + " ml";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_29 = __this->___suggestedWater_5;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_30 = __this->___suggestedWater_5;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_30);
		String_t* L_32;
		L_32 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_31, _stringLiteral9B89E049FC6343E440B2C7CA3A6085BC95901A3E, NULL);
		NullCheck(L_29);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_29, L_32);
	}

IL_00fb:
	{
		// }
		return;
	}
}
// System.Void WaterCalculator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterCalculator__ctor_m09B5074C38BAF7FC064DEC7651A6D0E815F0B696 (WaterCalculator_tAD3B482221AA38BD9945837C34E9BC1EA6386BF5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectReferenceContainer_t9388B07BB597BE5F20F15829C614FCFBE410183D* ObjectReferenceContainer_get_Instance_m8FFD930C372192AD9824EBE58CFAC738ED6742AF_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectReferenceContainer_t9388B07BB597BE5F20F15829C614FCFBE410183D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		ObjectReferenceContainer_t9388B07BB597BE5F20F15829C614FCFBE410183D* L_0 = ((ObjectReferenceContainer_t9388B07BB597BE5F20F15829C614FCFBE410183D_StaticFields*)il2cpp_codegen_static_fields_for(ObjectReferenceContainer_t9388B07BB597BE5F20F15829C614FCFBE410183D_il2cpp_TypeInfo_var))->___instance_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8* UIReferenceContainer_get_Instance_m81668CAEFAF57FABB353E35F4119C1E4E099A299_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8* L_0 = ((UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8_StaticFields*)il2cpp_codegen_static_fields_for(UIReferenceContainer_t12F0E6A71AD5CD3046073D93A091D967874AAEA8_il2cpp_TypeInfo_var))->___instance_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) 
{
	{
		// public float fillAmount { get { return m_FillAmount; } set { if (SetPropertyUtility.SetStruct(ref m_FillAmount, Mathf.Clamp01(value))) SetVerticesDirty(); } }
		float L_0 = __this->___m_FillAmount_44;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UIReferenceContainerMenu_t17D2EB96B8E18E398DAF7523677C42C6C2A8CA7A* UIReferenceContainerMenu_get_Instance_m0399BEA07EA0E8455780E21D97C828418B3121DE_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIReferenceContainerMenu_t17D2EB96B8E18E398DAF7523677C42C6C2A8CA7A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		UIReferenceContainerMenu_t17D2EB96B8E18E398DAF7523677C42C6C2A8CA7A* L_0 = ((UIReferenceContainerMenu_t17D2EB96B8E18E398DAF7523677C42C6C2A8CA7A_StaticFields*)il2cpp_codegen_static_fields_for(UIReferenceContainerMenu_t17D2EB96B8E18E398DAF7523677C42C6C2A8CA7A_il2cpp_TypeInfo_var))->___instance_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E* SceneHandler_get_Instance_m83009F0DA8BE85EB009B7E24DC1B0104BDE96F99_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E* L_0 = ((SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E_StaticFields*)il2cpp_codegen_static_fields_for(SceneHandler_tD870869C46AFB7F01D46F970EAED879A2342245E_il2cpp_TypeInfo_var))->___instance_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) 
{
	{
		// return m_Text;
		String_t* L_0 = __this->___m_Text_60;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
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
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
