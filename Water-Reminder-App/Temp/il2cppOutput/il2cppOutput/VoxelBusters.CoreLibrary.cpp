#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// VoxelBusters.CoreLibrary.Callback`1<System.Object>
struct Callback_1_t7E848646326A9B0F3AF08E574007EE4CE4B96703;
// VoxelBusters.CoreLibrary.Callback`1<UnityEngine.Texture2D>
struct Callback_1_t45CF87BD031D91AA8EE1A5E4F183D27CB925DC5E;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Predicate`1<System.Reflection.Assembly>
struct Predicate_1_t877E877D4EA2E6B0BB21BB8CB526484EF9F3F52E;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// VoxelBusters.CoreLibrary.PrivateSingletonBehaviour`1<VoxelBusters.CoreLibrary.CallbackDispatcher>
struct PrivateSingletonBehaviour_1_tC0AB1E707B32A027C82468088B94EBBDEC1684A0;
// VoxelBusters.CoreLibrary.PrivateSingletonBehaviour`1<System.Object>
struct PrivateSingletonBehaviour_1_t111CA98A8D1DE7A311ECA85CCD9633882A800421;
// VoxelBusters.CoreLibrary.PrivateSingletonBehaviour`1<VoxelBusters.CoreLibrary.ScreenUtility>
struct PrivateSingletonBehaviour_1_tD719FD1AEB686D10D356594D720E77755FA8781F;
// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// VoxelBusters.CoreLibrary.SerializableKeyValuePair`2<System.Object,System.Object>
struct SerializableKeyValuePair_2_tF040498359C9B5745B6611CE52D536A0FA3A967C;
// VoxelBusters.CoreLibrary.SerializableKeyValuePair`2<System.String,System.String>
struct SerializableKeyValuePair_2_tED0724F408955478C4C255E3D33541AE6C8067D0;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Action[]
struct ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2;
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IO.DirectoryInfo[]
struct DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953;
// System.IO.FileInfo[]
struct FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
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
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F;
// System.Reflection.Assembly
struct Assembly_t;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42;
// System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2;
// VoxelBusters.CoreLibrary.Asset
struct Asset_t7CD7395B84CF4879BA158B4B56779849378B06EF;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// VoxelBusters.CoreLibrary.Callback
struct Callback_t208DBAACB6E941FCFFB3FCCBD9B6D8036DCC3829;
// VoxelBusters.CoreLibrary.CallbackDispatcher
struct CallbackDispatcher_t797023FD3F6E7D576CD46045544A3B308BB6BD5A;
// VoxelBusters.CoreLibrary.CompletionCallback
struct CompletionCallback_t012328C9E3710F3FE34906CDC694F8E177261A69;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// VoxelBusters.CoreLibrary.CoreLibrarySettings
struct CoreLibrarySettings_t98C8916E04DAD5515C6F71FFA5EDE4CA306BEBEE;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
// VoxelBusters.CoreLibrary.EnumMaskFieldAttribute
struct EnumMaskFieldAttribute_t9F83D1D3FB2A1CD07651302E577F9C5860265329;
// VoxelBusters.CoreLibrary.Error
struct Error_t141DBA81928651667910B46EE98D0BC82AA746D2;
// VoxelBusters.CoreLibrary.ErrorCallback
struct ErrorCallback_tEC150015E5C4B20C8F011367A0224107A5CDA013;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.Exception
struct Exception_t;
// VoxelBusters.CoreLibrary.FileBrowserAttribute
struct FileBrowserAttribute_t52AB25C592944562F617FABF0794B8D2D8734936;
// System.IO.FileInfo
struct FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C;
// System.IO.FileNotFoundException
struct FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A;
// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9;
// VoxelBusters.CoreLibrary.FolderBrowserAttribute
struct FolderBrowserAttribute_t64304F0CFADEFA7A832F7F62A031A9408DA4520C;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// VoxelBusters.CoreLibrary.IJsonServiceProvider
struct IJsonServiceProvider_t75BD6CB8456740764289A21E90746F50D1552539;
// System.Collections.IList
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
// VoxelBusters.CoreLibrary.ILocalisationServiceProvider
struct ILocalisationServiceProvider_t994197A2CE9261BBFAD619A871B881651063AADB;
// VoxelBusters.CoreLibrary.ISaveServiceProvider
struct ISaveServiceProvider_t59F0AA0CE949C7205F3E16DF7E09BA57AA184404;
// VoxelBusters.CoreLibrary.IncludeInDocsAttribute
struct IncludeInDocsAttribute_t4A5E9038AC7D99AF585456E495C7EA60B99FCAFC;
// VoxelBusters.CoreLibrary.InterfaceFieldAttribute
struct InterfaceFieldAttribute_tD02A2181D6171CD85C01C5B04D3D52410B2AE960;
// VoxelBusters.CoreLibrary.KeyValueDataStore
struct KeyValueDataStore_t81199FD1D06BE1FD793EB39DD5BA59FF147D4048;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// VoxelBusters.CoreLibrary.MonoBehaviourZ
struct MonoBehaviourZ_t0D5B385BCAEF4C970718D8CF02F13EC705E46FE1;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// VoxelBusters.CoreLibrary.PersistentObject
struct PersistentObject_t8C4A713018E63AFE4A80071AB24D54887DD256DA;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0;
// VoxelBusters.CoreLibrary.ReadableId
struct ReadableId_t388A2A0D4E4678410F44B0BA1B866668D9539F7D;
// System.ResolveEventHandler
struct ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// VoxelBusters.CoreLibrary.ScreenUtility
struct ScreenUtility_t786316A2864D43D72F0DB7C56A661CA5C6DE086D;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// VoxelBusters.CoreLibrary.SettingsObject
struct SettingsObject_tAA894A5065E21DE53DD53E99D31AAFAAB9B3A1F6;
// System.String
struct String_t;
// VoxelBusters.CoreLibrary.StringKeyValuePair
struct StringKeyValuePair_t1572A4C9E11CA8E6695D9217F617E7E4856309DB;
// VoxelBusters.CoreLibrary.StringPopupAttribute
struct StringPopupAttribute_tE6EE825FCAEDBE24D412CC293D8DB8AFEB93E536;
// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// VoxelBusters.CoreLibrary.TextureData
struct TextureData_tCD731E82783AA1C111A3A7D3D4ED9E49B6B8B320;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C;
// VoxelBusters.CoreLibrary.UnityPackageDefinition
struct UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// VoxelBusters.CoreLibrary.VBException
struct VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD;
// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D;
// VoxelBusters.CoreLibrary.CallbackDispatcher/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t9DFBC76D8678A68449A483E07F3EAD8A4C11E9DA;
// VoxelBusters.CoreLibrary.CallbackDispatcher/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tB23852084939BAC49D8BEBFC783459BE69B81F47;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// VoxelBusters.CoreLibrary.ReflectionUtility/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tDA27EFFEDC489B135075AE1E3634B2D41E115EBB;
// VoxelBusters.CoreLibrary.ScreenUtility/<CaptureFrameRoutine>d__4
struct U3CCaptureFrameRoutineU3Ed__4_t660CAD1E8A27FCF4C48992C4108F08F30D4A80E2;
// VoxelBusters.CoreLibrary.SurrogateCoroutine/<InvokeInternal>d__12
struct U3CInvokeInternalU3Ed__12_t76BF7EBEB21AA23BDFA05E47F80FA97A24BB5FE5;
// VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__10
struct U3CWaitUntilAndInvokeInternalU3Ed__10_t38F9279EB0913FE80AFEB4DE1934C9AEF07C81F9;
// VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__11
struct U3CWaitUntilAndInvokeInternalU3Ed__11_tFD190D50E9376E5CCF1CEF1E9C0829F76C224236;
// VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__9
struct U3CWaitUntilAndInvokeInternalU3Ed__9_t4AE3E19CB80F1C5B6D8427737301E381E275CDCB;
// VoxelBusters.CoreLibrary.SurrogateCoroutine/SurrogateBehaviour
struct SurrogateBehaviour_tB3587D1A48FDB05726CBCAB154C817439D3FC87F;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationServices_tCDA3042D8169655D158C8555E9F1E05139B0E1E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Asset_t7CD7395B84CF4879BA158B4B56779849378B06EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Callback_1_t45CF87BD031D91AA8EE1A5E4F183D27CB925DC5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreLibrarySettings_t98C8916E04DAD5515C6F71FFA5EDE4CA306BEBEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DebugLogger_t00BCF0F5494A633B6B5483F0A4B79C39F8F40623_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Error_t141DBA81928651667910B46EE98D0BC82AA746D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExternalServiceProvider_t14830EB28C2BFFBA043D792D24CC70209E400011_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IJsonServiceProvider_t75BD6CB8456740764289A21E90746F50D1552539_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t877E877D4EA2E6B0BB21BB8CB526484EF9F3F52E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PrivateSingletonBehaviour_1_tC0AB1E707B32A027C82468088B94EBBDEC1684A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PrivateSingletonBehaviour_1_tD719FD1AEB686D10D356594D720E77755FA8781F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringPopupAttribute_tE6EE825FCAEDBE24D412CC293D8DB8AFEB93E536_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SurrogateCoroutine_t3A385DEC9095A708D48F1B3D0A33F0BA7F2CA48D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureEncodingFormat_t0D5F37298305DE6629F8DBF41B2AF4F5294EB672_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCaptureFrameRoutineU3Ed__4_t660CAD1E8A27FCF4C48992C4108F08F30D4A80E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CInvokeInternalU3Ed__12_t76BF7EBEB21AA23BDFA05E47F80FA97A24BB5FE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t9DFBC76D8678A68449A483E07F3EAD8A4C11E9DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_tB23852084939BAC49D8BEBFC783459BE69B81F47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_tDA27EFFEDC489B135075AE1E3634B2D41E115EBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitUntilAndInvokeInternalU3Ed__10_t38F9279EB0913FE80AFEB4DE1934C9AEF07C81F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitUntilAndInvokeInternalU3Ed__11_tFD190D50E9376E5CCF1CEF1E9C0829F76C224236_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitUntilAndInvokeInternalU3Ed__9_t4AE3E19CB80F1C5B6D8427737301E381E275CDCB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0AD95F858F3E2EED0733BA656A3FE77CFDA0C839;
IL2CPP_EXTERN_C String_t* _stringLiteral0FEF94F91815F92CFDC237C75CD8F7AF765C81AD;
IL2CPP_EXTERN_C String_t* _stringLiteral10EE9E96581A33D3D41AD2A8F4E74D5649F74CCE;
IL2CPP_EXTERN_C String_t* _stringLiteral122DAEB6E112576FD0519243E425F6CD2E97BA90;
IL2CPP_EXTERN_C String_t* _stringLiteral1262E37FD8C399A99BC2313B5D6453CBAFC923AF;
IL2CPP_EXTERN_C String_t* _stringLiteral161DE1F4646BAB73BA57BE2D847E3B821EF2362A;
IL2CPP_EXTERN_C String_t* _stringLiteral1ADA49DB1F06975314D080DCAEB46A68F8E74B0A;
IL2CPP_EXTERN_C String_t* _stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE;
IL2CPP_EXTERN_C String_t* _stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952;
IL2CPP_EXTERN_C String_t* _stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA;
IL2CPP_EXTERN_C String_t* _stringLiteral26FCC0FE25316EF00215493578621997875F8DA3;
IL2CPP_EXTERN_C String_t* _stringLiteral35237BA71FF80F7404066B4FF18F017E74DED48A;
IL2CPP_EXTERN_C String_t* _stringLiteral353B61A4CD89DAFE65F7B91760BA802E0BE7DF01;
IL2CPP_EXTERN_C String_t* _stringLiteral3AE148F4539A6130C80EF45C5441F068ADBF8C8C;
IL2CPP_EXTERN_C String_t* _stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral47F12CBA7BC942753DE63C8E3FC5A0D7FECD47A9;
IL2CPP_EXTERN_C String_t* _stringLiteral542885AE634D3A3453565EADF8AE8F209B4DC959;
IL2CPP_EXTERN_C String_t* _stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF;
IL2CPP_EXTERN_C String_t* _stringLiteral5DB1F2EB604D7C48BDBE8FB06C6CE2C472E5C977;
IL2CPP_EXTERN_C String_t* _stringLiteral5F0A3448D0218D998BD21D1DE2254D39303C44DF;
IL2CPP_EXTERN_C String_t* _stringLiteral67184A92CF8F6E59BA82AAF4A94C237CF2E0EB48;
IL2CPP_EXTERN_C String_t* _stringLiteral6BE14190ED352F27CF0B99DCF3AE6D27EE9CCFBB;
IL2CPP_EXTERN_C String_t* _stringLiteral6C3B309F02D3E20075338B0A23B20B59A0732941;
IL2CPP_EXTERN_C String_t* _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821;
IL2CPP_EXTERN_C String_t* _stringLiteral78E86F042D371FD16F0D696EF476DAAA4953E187;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral95675B27AC106EEB6B26B9D45BFB1C7A5F7F6F7D;
IL2CPP_EXTERN_C String_t* _stringLiteral977A71115E05B54B449539D8B6701AE4DAD2B1BE;
IL2CPP_EXTERN_C String_t* _stringLiteral9B9B2ADA4EFFFEF80A151CFD93CC3418C8909A39;
IL2CPP_EXTERN_C String_t* _stringLiteralA8B9C90519031D6F6CFC9E8A7CE4CB5BA59C8284;
IL2CPP_EXTERN_C String_t* _stringLiteralB653C606CA94DA6804B1492555C55D68943DF83F;
IL2CPP_EXTERN_C String_t* _stringLiteralB6CD9AC5407C25DC7003CF4BA675B23609D7F1F2;
IL2CPP_EXTERN_C String_t* _stringLiteralBEDF7892A254ADF90ABF5856512A230790CB64C1;
IL2CPP_EXTERN_C String_t* _stringLiteralC05DD95A56B355AAD74E9CE147B236E03FF8905E;
IL2CPP_EXTERN_C String_t* _stringLiteralD0C5865675F1EF5AB9E4EA3F72A2A6452608E93E;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE06F79CC91CBA3EFF69C9035EB350CE374F8B79F;
IL2CPP_EXTERN_C String_t* _stringLiteralEA27DF071A1AD8629847ED24B0C587EFDDD36D5E;
IL2CPP_EXTERN_C String_t* _stringLiteralEAA5A7F71CEAF22FCCBE9ECEEBBD1FF99E220991;
IL2CPP_EXTERN_C String_t* _stringLiteralF3301780F4B4E43907E6CBCE234389A7878FBE21;
IL2CPP_EXTERN_C String_t* _stringLiteralF47527D7B72D5957FA184B6B1B6A7A1A9A56BF37;
IL2CPP_EXTERN_C String_t* _stringLiteralF97D76C45F4CEECF3DE0D9336C326F43FA467675;
IL2CPP_EXTERN_C String_t* _stringLiteralFE79FF373808574898C82AC1320C55C1182FB75A;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Find_TisAssembly_t_m69D7963E7C3F19E3FD5B7D9FE783F9F7DF083DB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_AreNotEqual_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9C31F17B1F86EF8A55559678E798FB6CA0DAE393_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_AreNotEqual_mA546C87370F07D556B5277122EA204C352354B70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_IsArgNotNull_mEE70C86075147997C1C822DE942A1B657EAF257B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_IsFalse_m9D206557BA0ACE724B22FADBD3154CF6903D97DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_IsNotNull_mBA1AD6B57CCCAC8B6E53AE65504DED58AC8EDE0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_IsNull_mB505F7991308F64E75B4E314DFA7A36726D7E6A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_IsPropertyNotNull_mEFBFEDDD73F6236D273A03646B7EA3B754241CE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_IsTrue_m274F99147F4EAB4FD10C4BEAFEEC9FA7DF9A9EB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m96A01966628B0B9F973D4E29050CC769B116A586_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mD816BB81544F3B37050A72FD7BA22E6A3D53BBFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisSurrogateBehaviour_tB3587D1A48FDB05726CBCAB154C817439D3FC87F_m97D695C2AD527F5457EDB04F3DE65D930627201E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IOServices_DeleteDirectory_mE6D082854DFB9D2435723F24C9E6F3A1884F1500_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IOServices_DeleteFile_m6FE24EE12AA2C5F9E69127E42F7C43545CB06EEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrivateSingletonBehaviour_1_GetSingleton_m32958FD4F5FAA1A9B10E82E2B04F724748F77AE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrivateSingletonBehaviour_1_GetSingleton_m631220512B645DDEF08141C2908E632D2A3A4998_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrivateSingletonBehaviour_1__ctor_mA7977FF10FBDEBDE15DBA7AF43321CEBFF27D5FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PrivateSingletonBehaviour_1__ctor_mF4829E05B2DC31D6DD1A90C63DBC577F85818E13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SerializableKeyValuePair_2__ctor_m759AA068B34BF903262870EF5BAF7BC6FD2E1C01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextureData_GetBytes_mCF6A5BA6FD04F262C875EA91C348239E5C7A5069_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextureData_GetTexture_m75386431DB44B738F2B58E97057E0E27E3BF3984_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextureUtility_Encode_m103987F4BC41A033D6D38BAC159B0F0C44D36935_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextureUtility_GetMimeType_m508C5794B04BA9DFF39F054F27CB1FF7F489D583_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCaptureFrameRoutineU3Ed__4_System_Collections_IEnumerator_Reset_mF05A779F56ACAAB04064F15E96783EE13382A615_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInvokeInternalU3Ed__12_System_Collections_IEnumerator_Reset_mDD50D37F235694B602EC0B73647F8981B671BCC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CInvokeOnMainThreadU3Eb__0_mB9F8EFB4D8AEF00B7BA71C954EDEF5330C9D0D34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CInvokeOnMainThreadU3Eb__0_m248FB9D5ADFCF6EC2035BBF8B4F1EE8A54682CD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CFindAssemblyWithNameU3Eb__0_mD254DF947833C2F606C34730947BA42BD9ED53CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitUntilAndInvokeInternalU3Ed__10_System_Collections_IEnumerator_Reset_m043D599682EF5ABD831281ACD609B1849E27CE52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitUntilAndInvokeInternalU3Ed__11_System_Collections_IEnumerator_Reset_m0593C6C6B0EE8AF6BF1E954768A41CD3C7A89673_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitUntilAndInvokeInternalU3Ed__9_System_Collections_IEnumerator_Reset_mAA930D92F41F405EF7FC8988EAE33FEF0A5A952E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_0_0_0_var;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953;
struct FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t836F043D28DEC6991DEAE6FCC78B14CE4BA6E5FD 
{
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

// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// VoxelBusters.CoreLibrary.SerializableKeyValuePair`2<System.String,System.String>
struct SerializableKeyValuePair_2_tED0724F408955478C4C255E3D33541AE6C8067D0  : public RuntimeObject
{
	// TKey VoxelBusters.CoreLibrary.SerializableKeyValuePair`2::m_key
	String_t* ___m_key_0;
	// TValue VoxelBusters.CoreLibrary.SerializableKeyValuePair`2::m_value
	String_t* ___m_value_1;
};

// VoxelBusters.CoreLibrary.ApplicationServices
struct ApplicationServices_tCDA3042D8169655D158C8555E9F1E05139B0E1E0  : public RuntimeObject
{
};

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

// System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2  : public RuntimeObject
{
	// System.String System.Reflection.AssemblyName::name
	String_t* ___name_0;
	// System.String System.Reflection.AssemblyName::codebase
	String_t* ___codebase_1;
	// System.Int32 System.Reflection.AssemblyName::major
	int32_t ___major_2;
	// System.Int32 System.Reflection.AssemblyName::minor
	int32_t ___minor_3;
	// System.Int32 System.Reflection.AssemblyName::build
	int32_t ___build_4;
	// System.Int32 System.Reflection.AssemblyName::revision
	int32_t ___revision_5;
	// System.Globalization.CultureInfo System.Reflection.AssemblyName::cultureinfo
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___cultureinfo_6;
	// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::flags
	int32_t ___flags_7;
	// System.Configuration.Assemblies.AssemblyHashAlgorithm System.Reflection.AssemblyName::hashalg
	int32_t ___hashalg_8;
	// System.Reflection.StrongNameKeyPair System.Reflection.AssemblyName::keypair
	StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2* ___keypair_9;
	// System.Byte[] System.Reflection.AssemblyName::publicKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___publicKey_10;
	// System.Byte[] System.Reflection.AssemblyName::keyToken
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyToken_11;
	// System.Configuration.Assemblies.AssemblyVersionCompatibility System.Reflection.AssemblyName::versioncompat
	int32_t ___versioncompat_12;
	// System.Version System.Reflection.AssemblyName::version
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_13;
	// System.Reflection.ProcessorArchitecture System.Reflection.AssemblyName::processor_architecture
	int32_t ___processor_architecture_14;
	// System.Reflection.AssemblyContentType System.Reflection.AssemblyName::contentType
	int32_t ___contentType_15;
};
// Native definition for P/Invoke marshalling of System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshaled_pinvoke
{
	char* ___name_0;
	char* ___codebase_1;
	int32_t ___major_2;
	int32_t ___minor_3;
	int32_t ___build_4;
	int32_t ___revision_5;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___cultureinfo_6;
	int32_t ___flags_7;
	int32_t ___hashalg_8;
	StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2* ___keypair_9;
	Il2CppSafeArray/*NONE*/* ___publicKey_10;
	Il2CppSafeArray/*NONE*/* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
};
// Native definition for COM marshalling of System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___codebase_1;
	int32_t ___major_2;
	int32_t ___minor_3;
	int32_t ___build_4;
	int32_t ___revision_5;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___cultureinfo_6;
	int32_t ___flags_7;
	int32_t ___hashalg_8;
	StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2* ___keypair_9;
	Il2CppSafeArray/*NONE*/* ___publicKey_10;
	Il2CppSafeArray/*NONE*/* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
};

// VoxelBusters.CoreLibrary.Assert
struct Assert_t55D0871C8F71983EC4CAC712DEC005A403F20975  : public RuntimeObject
{
};

// VoxelBusters.CoreLibrary.Asset
struct Asset_t7CD7395B84CF4879BA158B4B56779849378B06EF  : public RuntimeObject
{
	// System.Byte[] VoxelBusters.CoreLibrary.Asset::<Data>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CDataU3Ek__BackingField_0;
	// System.String VoxelBusters.CoreLibrary.Asset::<MimeType>k__BackingField
	String_t* ___U3CMimeTypeU3Ek__BackingField_1;
	// System.String VoxelBusters.CoreLibrary.Asset::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_2;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// VoxelBusters.CoreLibrary.CollectionUtility
struct CollectionUtility_tEB0B9B9F586F139502BE59A0F29CEF9147F8AF9E  : public RuntimeObject
{
};

// VoxelBusters.CoreLibrary.ComponentUtility
struct ComponentUtility_t5B32C6609CDD468837CA6760F4ACC2175AEFF963  : public RuntimeObject
{
};

// VoxelBusters.CoreLibrary.CoreLibrarySettings
struct CoreLibrarySettings_t98C8916E04DAD5515C6F71FFA5EDE4CA306BEBEE  : public RuntimeObject
{
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// VoxelBusters.CoreLibrary.DebugLogger
struct DebugLogger_t00BCF0F5494A633B6B5483F0A4B79C39F8F40623  : public RuntimeObject
{
};

// VoxelBusters.CoreLibrary.Error
struct Error_t141DBA81928651667910B46EE98D0BC82AA746D2  : public RuntimeObject
{
	// System.String VoxelBusters.CoreLibrary.Error::<Domain>k__BackingField
	String_t* ___U3CDomainU3Ek__BackingField_0;
	// System.Int32 VoxelBusters.CoreLibrary.Error::<Code>k__BackingField
	int32_t ___U3CCodeU3Ek__BackingField_1;
	// System.String VoxelBusters.CoreLibrary.Error::<Description>k__BackingField
	String_t* ___U3CDescriptionU3Ek__BackingField_2;
};

// VoxelBusters.CoreLibrary.ExternalServiceProvider
struct ExternalServiceProvider_t14830EB28C2BFFBA043D792D24CC70209E400011  : public RuntimeObject
{
};

// VoxelBusters.CoreLibrary.GameObjectUtility
struct GameObjectUtility_t28E282442A78451530500A4D450A19DF4D69DE46  : public RuntimeObject
{
};

// VoxelBusters.CoreLibrary.IOServices
struct IOServices_tA4935B816499E2BB8F3796F68FFE88380881843B  : public RuntimeObject
{
};

// VoxelBusters.CoreLibrary.KeyValueDataStore
struct KeyValueDataStore_t81199FD1D06BE1FD793EB39DD5BA59FF147D4048  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> VoxelBusters.CoreLibrary.KeyValueDataStore::m_dataCollection
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___m_dataCollection_0;
	// System.String VoxelBusters.CoreLibrary.KeyValueDataStore::m_savePath
	String_t* ___m_savePath_1;
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

// VoxelBusters.CoreLibrary.MimeType
struct MimeType_t427CC384303DF28F4AC97C107C5E27CE5AF22F4A  : public RuntimeObject
{
};

// VoxelBusters.CoreLibrary.ObjectHelper
struct ObjectHelper_tCE83CE03179344294B13E1E3FA46A5F4BA250176  : public RuntimeObject
{
};

// System.IO.Path
struct Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC  : public RuntimeObject
{
};

// VoxelBusters.CoreLibrary.ReadableId
struct ReadableId_t388A2A0D4E4678410F44B0BA1B866668D9539F7D  : public RuntimeObject
{
	// System.String VoxelBusters.CoreLibrary.ReadableId::m_name
	String_t* ___m_name_0;
	// System.String VoxelBusters.CoreLibrary.ReadableId::m_id
	String_t* ___m_id_1;
};

// VoxelBusters.CoreLibrary.ReflectionUtility
struct ReflectionUtility_t9AA44F86EA87ED9768C051EE876A8F25A4C3E381  : public RuntimeObject
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

// VoxelBusters.CoreLibrary.SurrogateCoroutine
struct SurrogateCoroutine_t3A385DEC9095A708D48F1B3D0A33F0BA7F2CA48D  : public RuntimeObject
{
};

// VoxelBusters.CoreLibrary.SystemUtility
struct SystemUtility_tC09D68F8E4D00AABFBA6DD758DB65700EA2200C2  : public RuntimeObject
{
};

// VoxelBusters.CoreLibrary.TextEncodingFormat
struct TextEncodingFormat_t9175FDCD930A7F20477B7953B977D6465F22203C  : public RuntimeObject
{
};

// VoxelBusters.CoreLibrary.TextureData
struct TextureData_tCD731E82783AA1C111A3A7D3D4ED9E49B6B8B320  : public RuntimeObject
{
	// System.Byte[] VoxelBusters.CoreLibrary.TextureData::m_rawData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_rawData_0;
	// UnityEngine.Texture2D VoxelBusters.CoreLibrary.TextureData::m_texture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_texture_1;
};

// VoxelBusters.CoreLibrary.TextureUtility
struct TextureUtility_t8D7CBB4D1BE1A19B67C70B10E8D95A4152A0E7C0  : public RuntimeObject
{
};

// VoxelBusters.CoreLibrary.TransformUtility
struct TransformUtility_t9D1CCB98F550E62AA2F95D8271227751F15D6AB7  : public RuntimeObject
{
};

// VoxelBusters.CoreLibrary.UnityEngineUtility
struct UnityEngineUtility_tEC5370505FC837E594C2560CA1F5415E53E80DD6  : public RuntimeObject
{
};

// VoxelBusters.CoreLibrary.UnityPackageDefinition
struct UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4  : public RuntimeObject
{
	// System.String VoxelBusters.CoreLibrary.UnityPackageDefinition::m_persistentDataRelativePath
	String_t* ___m_persistentDataRelativePath_0;
	// System.String VoxelBusters.CoreLibrary.UnityPackageDefinition::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.String VoxelBusters.CoreLibrary.UnityPackageDefinition::<DisplayName>k__BackingField
	String_t* ___U3CDisplayNameU3Ek__BackingField_2;
	// System.String VoxelBusters.CoreLibrary.UnityPackageDefinition::<Version>k__BackingField
	String_t* ___U3CVersionU3Ek__BackingField_3;
	// System.String VoxelBusters.CoreLibrary.UnityPackageDefinition::<DefaultInstallPath>k__BackingField
	String_t* ___U3CDefaultInstallPathU3Ek__BackingField_4;
	// System.String VoxelBusters.CoreLibrary.UnityPackageDefinition::<UpmInstallPath>k__BackingField
	String_t* ___U3CUpmInstallPathU3Ek__BackingField_5;
	// System.String VoxelBusters.CoreLibrary.UnityPackageDefinition::<MutableResourcesPath>k__BackingField
	String_t* ___U3CMutableResourcesPathU3Ek__BackingField_6;
	// System.String VoxelBusters.CoreLibrary.UnityPackageDefinition::<MutableResourcesRelativePath>k__BackingField
	String_t* ___U3CMutableResourcesRelativePathU3Ek__BackingField_7;
};

// VoxelBusters.CoreLibrary.UnityPackagePathResolver
struct UnityPackagePathResolver_tB93F00D8E12A902B6780E1F15346346192ABDEC1  : public RuntimeObject
{
};

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;
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

// VoxelBusters.CoreLibrary.CallbackDispatcher/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t9DFBC76D8678A68449A483E07F3EAD8A4C11E9DA  : public RuntimeObject
{
	// VoxelBusters.CoreLibrary.Callback VoxelBusters.CoreLibrary.CallbackDispatcher/<>c__DisplayClass2_0::callback
	Callback_t208DBAACB6E941FCFFB3FCCBD9B6D8036DCC3829* ___callback_0;
};

// VoxelBusters.CoreLibrary.CallbackDispatcher/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tB23852084939BAC49D8BEBFC783459BE69B81F47  : public RuntimeObject
{
	// VoxelBusters.CoreLibrary.CompletionCallback VoxelBusters.CoreLibrary.CallbackDispatcher/<>c__DisplayClass3_0::callback
	CompletionCallback_t012328C9E3710F3FE34906CDC694F8E177261A69* ___callback_0;
	// VoxelBusters.CoreLibrary.Error VoxelBusters.CoreLibrary.CallbackDispatcher/<>c__DisplayClass3_0::error
	Error_t141DBA81928651667910B46EE98D0BC82AA746D2* ___error_1;
};

// VoxelBusters.CoreLibrary.ReflectionUtility/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tDA27EFFEDC489B135075AE1E3634B2D41E115EBB  : public RuntimeObject
{
	// System.String VoxelBusters.CoreLibrary.ReflectionUtility/<>c__DisplayClass5_0::assemblyName
	String_t* ___assemblyName_0;
};

// VoxelBusters.CoreLibrary.ScreenUtility/<CaptureFrameRoutine>d__4
struct U3CCaptureFrameRoutineU3Ed__4_t660CAD1E8A27FCF4C48992C4108F08F30D4A80E2  : public RuntimeObject
{
	// System.Int32 VoxelBusters.CoreLibrary.ScreenUtility/<CaptureFrameRoutine>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object VoxelBusters.CoreLibrary.ScreenUtility/<CaptureFrameRoutine>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// VoxelBusters.CoreLibrary.ScreenUtility VoxelBusters.CoreLibrary.ScreenUtility/<CaptureFrameRoutine>d__4::<>4__this
	ScreenUtility_t786316A2864D43D72F0DB7C56A661CA5C6DE086D* ___U3CU3E4__this_2;
};

// VoxelBusters.CoreLibrary.SurrogateCoroutine/<InvokeInternal>d__12
struct U3CInvokeInternalU3Ed__12_t76BF7EBEB21AA23BDFA05E47F80FA97A24BB5FE5  : public RuntimeObject
{
	// System.Int32 VoxelBusters.CoreLibrary.SurrogateCoroutine/<InvokeInternal>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object VoxelBusters.CoreLibrary.SurrogateCoroutine/<InvokeInternal>d__12::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single VoxelBusters.CoreLibrary.SurrogateCoroutine/<InvokeInternal>d__12::delay
	float ___delay_2;
	// System.Action VoxelBusters.CoreLibrary.SurrogateCoroutine/<InvokeInternal>d__12::action
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action_3;
};

// VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__10
struct U3CWaitUntilAndInvokeInternalU3Ed__10_t38F9279EB0913FE80AFEB4DE1934C9AEF07C81F9  : public RuntimeObject
{
	// System.Int32 VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Collections.IEnumerator VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__10::coroutine
	RuntimeObject* ___coroutine_2;
	// System.Action VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__10::action
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action_3;
};

// VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__11
struct U3CWaitUntilAndInvokeInternalU3Ed__11_tFD190D50E9376E5CCF1CEF1E9C0829F76C224236  : public RuntimeObject
{
	// System.Int32 VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.YieldInstruction VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__11::instruction
	YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D* ___instruction_2;
	// System.Action VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__11::action
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action_3;
};

// VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__9
struct U3CWaitUntilAndInvokeInternalU3Ed__9_t4AE3E19CB80F1C5B6D8427737301E381E275CDCB  : public RuntimeObject
{
	// System.Int32 VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Func`1<System.Boolean> VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__9::predicate
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___predicate_2;
	// System.Action VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__9::action
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
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

// VoxelBusters.CoreLibrary.IncludeInDocsAttribute
struct IncludeInDocsAttribute_t4A5E9038AC7D99AF585456E495C7EA60B99FCAFC  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// VoxelBusters.CoreLibrary.StringKeyValuePair
struct StringKeyValuePair_t1572A4C9E11CA8E6695D9217F617E7E4856309DB  : public SerializableKeyValuePair_2_tED0724F408955478C4C255E3D33541AE6C8067D0
{
};

// VoxelBusters.CoreLibrary.URLString
struct URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77 
{
	// System.String VoxelBusters.CoreLibrary.URLString::m_value
	String_t* ___m_value_0;
	// System.Boolean VoxelBusters.CoreLibrary.URLString::<IsValid>k__BackingField
	bool ___U3CIsValidU3Ek__BackingField_1;
	// System.Boolean VoxelBusters.CoreLibrary.URLString::<IsFilePath>k__BackingField
	bool ___U3CIsFilePathU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of VoxelBusters.CoreLibrary.URLString
struct URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77_marshaled_pinvoke
{
	char* ___m_value_0;
	int32_t ___U3CIsValidU3Ek__BackingField_1;
	int32_t ___U3CIsFilePathU3Ek__BackingField_2;
};
// Native definition for COM marshalling of VoxelBusters.CoreLibrary.URLString
struct URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77_marshaled_com
{
	Il2CppChar* ___m_value_0;
	int32_t ___U3CIsValidU3Ek__BackingField_1;
	int32_t ___U3CIsFilePathU3Ek__BackingField_2;
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

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
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

// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___m_Predicate_0;
};

// Interop/Sys/FileStatus
struct FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 
{
	// Interop/Sys/FileStatusFlags Interop/Sys/FileStatus::Flags
	int32_t ___Flags_0;
	// System.Int32 Interop/Sys/FileStatus::Mode
	int32_t ___Mode_1;
	// System.UInt32 Interop/Sys/FileStatus::Uid
	uint32_t ___Uid_2;
	// System.UInt32 Interop/Sys/FileStatus::Gid
	uint32_t ___Gid_3;
	// System.Int64 Interop/Sys/FileStatus::Size
	int64_t ___Size_4;
	// System.Int64 Interop/Sys/FileStatus::ATime
	int64_t ___ATime_5;
	// System.Int64 Interop/Sys/FileStatus::ATimeNsec
	int64_t ___ATimeNsec_6;
	// System.Int64 Interop/Sys/FileStatus::MTime
	int64_t ___MTime_7;
	// System.Int64 Interop/Sys/FileStatus::MTimeNsec
	int64_t ___MTimeNsec_8;
	// System.Int64 Interop/Sys/FileStatus::CTime
	int64_t ___CTime_9;
	// System.Int64 Interop/Sys/FileStatus::CTimeNsec
	int64_t ___CTimeNsec_10;
	// System.Int64 Interop/Sys/FileStatus::BirthTime
	int64_t ___BirthTime_11;
	// System.Int64 Interop/Sys/FileStatus::BirthTimeNsec
	int64_t ___BirthTimeNsec_12;
	// System.Int64 Interop/Sys/FileStatus::Dev
	int64_t ___Dev_13;
	// System.Int64 Interop/Sys/FileStatus::Ino
	int64_t ___Ino_14;
	// System.UInt32 Interop/Sys/FileStatus::UserFlags
	uint32_t ___UserFlags_15;
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

// VoxelBusters.CoreLibrary.EnumMaskFieldAttribute
struct EnumMaskFieldAttribute_t9F83D1D3FB2A1CD07651302E577F9C5860265329  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.Type VoxelBusters.CoreLibrary.EnumMaskFieldAttribute::<EnumType>k__BackingField
	Type_t* ___U3CEnumTypeU3Ek__BackingField_0;
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

// VoxelBusters.CoreLibrary.FileBrowserAttribute
struct FileBrowserAttribute_t52AB25C592944562F617FABF0794B8D2D8734936  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.Boolean VoxelBusters.CoreLibrary.FileBrowserAttribute::<UsesRelativePath>k__BackingField
	bool ___U3CUsesRelativePathU3Ek__BackingField_0;
	// System.String VoxelBusters.CoreLibrary.FileBrowserAttribute::<Extension>k__BackingField
	String_t* ___U3CExtensionU3Ek__BackingField_1;
};

// System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 
{
	// Interop/Sys/FileStatus System.IO.FileStatus::_fileStatus
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	// System.Int32 System.IO.FileStatus::_fileStatusInitialized
	int32_t ____fileStatusInitialized_1;
	// System.Boolean System.IO.FileStatus::<InitiallyDirectory>k__BackingField
	bool ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	// System.Boolean System.IO.FileStatus::_isDirectory
	bool ____isDirectory_3;
	// System.Boolean System.IO.FileStatus::_exists
	bool ____exists_4;
};
// Native definition for P/Invoke marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_pinvoke
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};
// Native definition for COM marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_com
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};

// VoxelBusters.CoreLibrary.FolderBrowserAttribute
struct FolderBrowserAttribute_t64304F0CFADEFA7A832F7F62A031A9408DA4520C  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.Boolean VoxelBusters.CoreLibrary.FolderBrowserAttribute::<UsesRelativePath>k__BackingField
	bool ___U3CUsesRelativePathU3Ek__BackingField_0;
};

// VoxelBusters.CoreLibrary.InterfaceFieldAttribute
struct InterfaceFieldAttribute_tD02A2181D6171CD85C01C5B04D3D52410B2AE960  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.Type VoxelBusters.CoreLibrary.InterfaceFieldAttribute::<InterfaceType>k__BackingField
	Type_t* ___U3CInterfaceTypeU3Ek__BackingField_0;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// VoxelBusters.CoreLibrary.StringPopupAttribute
struct StringPopupAttribute_tE6EE825FCAEDBE24D412CC293D8DB8AFEB93E536  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.String[] VoxelBusters.CoreLibrary.StringPopupAttribute::m_constantOptions
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_constantOptions_1;
	// System.String VoxelBusters.CoreLibrary.StringPopupAttribute::<PreferencePropertyName>k__BackingField
	String_t* ___U3CPreferencePropertyNameU3Ek__BackingField_2;
	// System.Boolean VoxelBusters.CoreLibrary.StringPopupAttribute::<PreferencePropertyValue>k__BackingField
	bool ___U3CPreferencePropertyValueU3Ek__BackingField_3;
	// System.Boolean VoxelBusters.CoreLibrary.StringPopupAttribute::<UsesConstantOptions>k__BackingField
	bool ___U3CUsesConstantOptionsU3Ek__BackingField_4;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.FileStatus System.IO.FileSystemInfo::_fileStatus
	FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 ____fileStatus_1;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_2;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_3;
	// System.String System.IO.FileSystemInfo::_name
	String_t* ____name_4;
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// VoxelBusters.CoreLibrary.VBException
struct VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489  : public Exception_t
{
	// System.String VoxelBusters.CoreLibrary.VBException::<Domain>k__BackingField
	String_t* ___U3CDomainU3Ek__BackingField_18;
	// System.Int32 VoxelBusters.CoreLibrary.VBException::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_19;
};

// VoxelBusters.CoreLibrary.Callback`1<System.Object>
struct Callback_1_t7E848646326A9B0F3AF08E574007EE4CE4B96703  : public MulticastDelegate_t
{
};

// VoxelBusters.CoreLibrary.Callback`1<UnityEngine.Texture2D>
struct Callback_1_t45CF87BD031D91AA8EE1A5E4F183D27CB925DC5E  : public MulticastDelegate_t
{
};

// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};

// System.Predicate`1<System.Reflection.Assembly>
struct Predicate_1_t877E877D4EA2E6B0BB21BB8CB526484EF9F3F52E  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// VoxelBusters.CoreLibrary.Callback
struct Callback_t208DBAACB6E941FCFFB3FCCBD9B6D8036DCC3829  : public MulticastDelegate_t
{
};

// VoxelBusters.CoreLibrary.CompletionCallback
struct CompletionCallback_t012328C9E3710F3FE34906CDC694F8E177261A69  : public MulticastDelegate_t
{
};

// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// VoxelBusters.CoreLibrary.ErrorCallback
struct ErrorCallback_tEC150015E5C4B20C8F011367A0224107A5CDA013  : public MulticastDelegate_t
{
};

// System.IO.FileInfo
struct FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// VoxelBusters.CoreLibrary.SettingsObject
struct SettingsObject_tAA894A5065E21DE53DD53E99D31AAFAAB9B3A1F6  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.IO.FileNotFoundException
struct FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A  : public IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910
{
	// System.String System.IO.FileNotFoundException::<FileName>k__BackingField
	String_t* ___U3CFileNameU3Ek__BackingField_18;
	// System.String System.IO.FileNotFoundException::<FusionLog>k__BackingField
	String_t* ___U3CFusionLogU3Ek__BackingField_19;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

// VoxelBusters.CoreLibrary.PrivateSingletonBehaviour`1<VoxelBusters.CoreLibrary.CallbackDispatcher>
struct PrivateSingletonBehaviour_1_tC0AB1E707B32A027C82468088B94EBBDEC1684A0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean VoxelBusters.CoreLibrary.PrivateSingletonBehaviour`1::m_isPersistent
	bool ___m_isPersistent_7;
	// System.Boolean VoxelBusters.CoreLibrary.PrivateSingletonBehaviour`1::m_isInitialised
	bool ___m_isInitialised_8;
	// System.Boolean VoxelBusters.CoreLibrary.PrivateSingletonBehaviour`1::m_forcedDestroy
	bool ___m_forcedDestroy_9;
};

// VoxelBusters.CoreLibrary.PrivateSingletonBehaviour`1<VoxelBusters.CoreLibrary.ScreenUtility>
struct PrivateSingletonBehaviour_1_tD719FD1AEB686D10D356594D720E77755FA8781F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean VoxelBusters.CoreLibrary.PrivateSingletonBehaviour`1::m_isPersistent
	bool ___m_isPersistent_7;
	// System.Boolean VoxelBusters.CoreLibrary.PrivateSingletonBehaviour`1::m_isInitialised
	bool ___m_isInitialised_8;
	// System.Boolean VoxelBusters.CoreLibrary.PrivateSingletonBehaviour`1::m_forcedDestroy
	bool ___m_forcedDestroy_9;
};

// VoxelBusters.CoreLibrary.MonoBehaviourZ
struct MonoBehaviourZ_t0D5B385BCAEF4C970718D8CF02F13EC705E46FE1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean VoxelBusters.CoreLibrary.MonoBehaviourZ::m_isInitialized
	bool ___m_isInitialized_4;
};

// VoxelBusters.CoreLibrary.PersistentObject
struct PersistentObject_t8C4A713018E63AFE4A80071AB24D54887DD256DA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// VoxelBusters.CoreLibrary.SurrogateCoroutine/SurrogateBehaviour
struct SurrogateBehaviour_tB3587D1A48FDB05726CBCAB154C817439D3FC87F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// VoxelBusters.CoreLibrary.CallbackDispatcher
struct CallbackDispatcher_t797023FD3F6E7D576CD46045544A3B308BB6BD5A  : public PrivateSingletonBehaviour_1_tC0AB1E707B32A027C82468088B94EBBDEC1684A0
{
	// System.Collections.Generic.Queue`1<System.Action> VoxelBusters.CoreLibrary.CallbackDispatcher::m_queue
	Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* ___m_queue_10;
};

// VoxelBusters.CoreLibrary.ScreenUtility
struct ScreenUtility_t786316A2864D43D72F0DB7C56A661CA5C6DE086D  : public PrivateSingletonBehaviour_1_tD719FD1AEB686D10D356594D720E77755FA8781F
{
	// System.Boolean VoxelBusters.CoreLibrary.ScreenUtility::m_captureFrame
	bool ___m_captureFrame_10;
	// VoxelBusters.CoreLibrary.Callback`1<UnityEngine.Texture2D> VoxelBusters.CoreLibrary.ScreenUtility::m_callback
	Callback_1_t45CF87BD031D91AA8EE1A5E4F183D27CB925DC5E* ___m_callback_11;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.Queue`1<System.Action>

// System.Collections.Generic.Queue`1<System.Action>

// System.Collections.Generic.Queue`1<System.Object>

// System.Collections.Generic.Queue`1<System.Object>

// VoxelBusters.CoreLibrary.SerializableKeyValuePair`2<System.String,System.String>

// VoxelBusters.CoreLibrary.SerializableKeyValuePair`2<System.String,System.String>

// VoxelBusters.CoreLibrary.ApplicationServices
struct ApplicationServices_tCDA3042D8169655D158C8555E9F1E05139B0E1E0_StaticFields
{
	// System.Single VoxelBusters.CoreLibrary.ApplicationServices::s_originalTimeScale
	float ___s_originalTimeScale_0;
};

// VoxelBusters.CoreLibrary.ApplicationServices

// System.Reflection.Assembly

// System.Reflection.Assembly

// System.Reflection.AssemblyName

// System.Reflection.AssemblyName

// VoxelBusters.CoreLibrary.Assert

// VoxelBusters.CoreLibrary.Assert

// VoxelBusters.CoreLibrary.Asset

// VoxelBusters.CoreLibrary.Asset

// System.Attribute

// System.Attribute

// VoxelBusters.CoreLibrary.CollectionUtility

// VoxelBusters.CoreLibrary.CollectionUtility

// VoxelBusters.CoreLibrary.ComponentUtility

// VoxelBusters.CoreLibrary.ComponentUtility

// VoxelBusters.CoreLibrary.CoreLibrarySettings
struct CoreLibrarySettings_t98C8916E04DAD5515C6F71FFA5EDE4CA306BEBEE_StaticFields
{
	// VoxelBusters.CoreLibrary.UnityPackageDefinition VoxelBusters.CoreLibrary.CoreLibrarySettings::s_package
	UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* ___s_package_0;
};

// VoxelBusters.CoreLibrary.CoreLibrarySettings

// VoxelBusters.CoreLibrary.DebugLogger
struct DebugLogger_t00BCF0F5494A633B6B5483F0A4B79C39F8F40623_StaticFields
{
	// VoxelBusters.CoreLibrary.DebugLogger/LogLevel VoxelBusters.CoreLibrary.DebugLogger::s_logLevel
	int32_t ___s_logLevel_0;
};

// VoxelBusters.CoreLibrary.DebugLogger

// VoxelBusters.CoreLibrary.Error

// VoxelBusters.CoreLibrary.Error

// VoxelBusters.CoreLibrary.ExternalServiceProvider
struct ExternalServiceProvider_t14830EB28C2BFFBA043D792D24CC70209E400011_StaticFields
{
	// VoxelBusters.CoreLibrary.IJsonServiceProvider VoxelBusters.CoreLibrary.ExternalServiceProvider::s_jsonServiceProvider
	RuntimeObject* ___s_jsonServiceProvider_0;
	// VoxelBusters.CoreLibrary.ISaveServiceProvider VoxelBusters.CoreLibrary.ExternalServiceProvider::s_saveServiceProvider
	RuntimeObject* ___s_saveServiceProvider_1;
	// VoxelBusters.CoreLibrary.ILocalisationServiceProvider VoxelBusters.CoreLibrary.ExternalServiceProvider::s_localisationServiceProvider
	RuntimeObject* ___s_localisationServiceProvider_2;
};

// VoxelBusters.CoreLibrary.ExternalServiceProvider

// VoxelBusters.CoreLibrary.GameObjectUtility

// VoxelBusters.CoreLibrary.GameObjectUtility

// VoxelBusters.CoreLibrary.IOServices

// VoxelBusters.CoreLibrary.IOServices

// VoxelBusters.CoreLibrary.KeyValueDataStore

// VoxelBusters.CoreLibrary.KeyValueDataStore

// VoxelBusters.CoreLibrary.MimeType

// VoxelBusters.CoreLibrary.MimeType

// VoxelBusters.CoreLibrary.ObjectHelper

// VoxelBusters.CoreLibrary.ObjectHelper

// System.IO.Path
struct Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields
{
	// System.Char[] System.IO.Path::InvalidPathChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___InvalidPathChars_0;
	// System.Char System.IO.Path::AltDirectorySeparatorChar
	Il2CppChar ___AltDirectorySeparatorChar_1;
	// System.Char System.IO.Path::DirectorySeparatorChar
	Il2CppChar ___DirectorySeparatorChar_2;
	// System.Char System.IO.Path::PathSeparator
	Il2CppChar ___PathSeparator_3;
	// System.String System.IO.Path::DirectorySeparatorStr
	String_t* ___DirectorySeparatorStr_4;
	// System.Char System.IO.Path::VolumeSeparatorChar
	Il2CppChar ___VolumeSeparatorChar_5;
	// System.Char[] System.IO.Path::PathSeparatorChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___PathSeparatorChars_6;
	// System.Boolean System.IO.Path::dirEqualsVolume
	bool ___dirEqualsVolume_7;
	// System.Char[] System.IO.Path::trimEndCharsWindows
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___trimEndCharsWindows_8;
	// System.Char[] System.IO.Path::trimEndCharsUnix
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___trimEndCharsUnix_9;
};

// System.IO.Path

// VoxelBusters.CoreLibrary.ReadableId

// VoxelBusters.CoreLibrary.ReadableId

// VoxelBusters.CoreLibrary.ReflectionUtility

// VoxelBusters.CoreLibrary.ReflectionUtility

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// VoxelBusters.CoreLibrary.SurrogateCoroutine
struct SurrogateCoroutine_t3A385DEC9095A708D48F1B3D0A33F0BA7F2CA48D_StaticFields
{
	// VoxelBusters.CoreLibrary.SurrogateCoroutine/SurrogateBehaviour VoxelBusters.CoreLibrary.SurrogateCoroutine::surrogateObject
	SurrogateBehaviour_tB3587D1A48FDB05726CBCAB154C817439D3FC87F* ___surrogateObject_0;
};

// VoxelBusters.CoreLibrary.SurrogateCoroutine

// VoxelBusters.CoreLibrary.SystemUtility

// VoxelBusters.CoreLibrary.SystemUtility

// VoxelBusters.CoreLibrary.TextEncodingFormat

// VoxelBusters.CoreLibrary.TextEncodingFormat

// VoxelBusters.CoreLibrary.TextureData

// VoxelBusters.CoreLibrary.TextureData

// VoxelBusters.CoreLibrary.TextureUtility

// VoxelBusters.CoreLibrary.TextureUtility

// VoxelBusters.CoreLibrary.TransformUtility

// VoxelBusters.CoreLibrary.TransformUtility

// VoxelBusters.CoreLibrary.UnityEngineUtility

// VoxelBusters.CoreLibrary.UnityEngineUtility

// VoxelBusters.CoreLibrary.UnityPackageDefinition

// VoxelBusters.CoreLibrary.UnityPackageDefinition

// VoxelBusters.CoreLibrary.UnityPackagePathResolver

// VoxelBusters.CoreLibrary.UnityPackagePathResolver

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_28;
};

// System.Uri

// UnityEngine.YieldInstruction

// UnityEngine.YieldInstruction

// VoxelBusters.CoreLibrary.CallbackDispatcher/<>c__DisplayClass2_0

// VoxelBusters.CoreLibrary.CallbackDispatcher/<>c__DisplayClass2_0

// VoxelBusters.CoreLibrary.CallbackDispatcher/<>c__DisplayClass3_0

// VoxelBusters.CoreLibrary.CallbackDispatcher/<>c__DisplayClass3_0

// VoxelBusters.CoreLibrary.ReflectionUtility/<>c__DisplayClass5_0

// VoxelBusters.CoreLibrary.ReflectionUtility/<>c__DisplayClass5_0

// VoxelBusters.CoreLibrary.ScreenUtility/<CaptureFrameRoutine>d__4

// VoxelBusters.CoreLibrary.ScreenUtility/<CaptureFrameRoutine>d__4

// VoxelBusters.CoreLibrary.SurrogateCoroutine/<InvokeInternal>d__12

// VoxelBusters.CoreLibrary.SurrogateCoroutine/<InvokeInternal>d__12

// VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__10

// VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__10

// VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__11

// VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__11

// VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__9

// VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__9

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

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

// VoxelBusters.CoreLibrary.IncludeInDocsAttribute

// VoxelBusters.CoreLibrary.IncludeInDocsAttribute

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.PropertyAttribute

// UnityEngine.PropertyAttribute

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// VoxelBusters.CoreLibrary.StringKeyValuePair

// VoxelBusters.CoreLibrary.StringKeyValuePair

// VoxelBusters.CoreLibrary.URLString

// VoxelBusters.CoreLibrary.URLString

// UnityEngine.Vector2
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

// UnityEngine.Vector2

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

// UnityEngine.WaitForEndOfFrame

// UnityEngine.WaitForEndOfFrame

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// UnityEngine.WaitUntil

// UnityEngine.WaitUntil

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_StaticFields
{
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
};

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_ThreadStaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___type_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_refonly_5;
};

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// VoxelBusters.CoreLibrary.EnumMaskFieldAttribute

// VoxelBusters.CoreLibrary.EnumMaskFieldAttribute

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// VoxelBusters.CoreLibrary.FileBrowserAttribute

// VoxelBusters.CoreLibrary.FileBrowserAttribute

// VoxelBusters.CoreLibrary.FolderBrowserAttribute

// VoxelBusters.CoreLibrary.FolderBrowserAttribute

// VoxelBusters.CoreLibrary.InterfaceFieldAttribute

// VoxelBusters.CoreLibrary.InterfaceFieldAttribute

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// VoxelBusters.CoreLibrary.StringPopupAttribute
struct StringPopupAttribute_tE6EE825FCAEDBE24D412CC293D8DB8AFEB93E536_StaticFields
{
	// System.String[] VoxelBusters.CoreLibrary.StringPopupAttribute::s_emptyOptions
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyOptions_0;
};

// VoxelBusters.CoreLibrary.StringPopupAttribute

// UnityEngine.Component

// UnityEngine.Component

// System.IO.FileSystemInfo

// System.IO.FileSystemInfo

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// System.Type
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

// System.Type

// VoxelBusters.CoreLibrary.VBException

// VoxelBusters.CoreLibrary.VBException

// VoxelBusters.CoreLibrary.Callback`1<System.Object>

// VoxelBusters.CoreLibrary.Callback`1<System.Object>

// VoxelBusters.CoreLibrary.Callback`1<UnityEngine.Texture2D>

// VoxelBusters.CoreLibrary.Callback`1<UnityEngine.Texture2D>

// System.Func`1<System.Boolean>

// System.Func`1<System.Boolean>

// System.Predicate`1<System.Reflection.Assembly>

// System.Predicate`1<System.Reflection.Assembly>

// System.Action

// System.Action

// System.AsyncCallback

// System.AsyncCallback

// VoxelBusters.CoreLibrary.Callback

// VoxelBusters.CoreLibrary.Callback

// VoxelBusters.CoreLibrary.CompletionCallback

// VoxelBusters.CoreLibrary.CompletionCallback

// System.IO.DirectoryInfo

// System.IO.DirectoryInfo

// VoxelBusters.CoreLibrary.ErrorCallback

// VoxelBusters.CoreLibrary.ErrorCallback

// System.IO.FileInfo

// System.IO.FileInfo

// System.NotSupportedException

// System.NotSupportedException

// VoxelBusters.CoreLibrary.SettingsObject

// VoxelBusters.CoreLibrary.SettingsObject

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// UnityEngine.Transform

// UnityEngine.Transform

// System.IO.FileNotFoundException

// System.IO.FileNotFoundException

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// VoxelBusters.CoreLibrary.PrivateSingletonBehaviour`1<VoxelBusters.CoreLibrary.CallbackDispatcher>
struct PrivateSingletonBehaviour_1_tC0AB1E707B32A027C82468088B94EBBDEC1684A0_StaticFields
{
	// T VoxelBusters.CoreLibrary.PrivateSingletonBehaviour`1::s_sharedInstance
	CallbackDispatcher_t797023FD3F6E7D576CD46045544A3B308BB6BD5A* ___s_sharedInstance_4;
	// System.Object VoxelBusters.CoreLibrary.PrivateSingletonBehaviour`1::s_objectLock
	RuntimeObject* ___s_objectLock_5;
	// System.Boolean VoxelBusters.CoreLibrary.PrivateSingletonBehaviour`1::s_isDestroyed
	bool ___s_isDestroyed_6;
};

// VoxelBusters.CoreLibrary.PrivateSingletonBehaviour`1<VoxelBusters.CoreLibrary.CallbackDispatcher>

// VoxelBusters.CoreLibrary.PrivateSingletonBehaviour`1<VoxelBusters.CoreLibrary.ScreenUtility>
struct PrivateSingletonBehaviour_1_tD719FD1AEB686D10D356594D720E77755FA8781F_StaticFields
{
	// T VoxelBusters.CoreLibrary.PrivateSingletonBehaviour`1::s_sharedInstance
	ScreenUtility_t786316A2864D43D72F0DB7C56A661CA5C6DE086D* ___s_sharedInstance_4;
	// System.Object VoxelBusters.CoreLibrary.PrivateSingletonBehaviour`1::s_objectLock
	RuntimeObject* ___s_objectLock_5;
	// System.Boolean VoxelBusters.CoreLibrary.PrivateSingletonBehaviour`1::s_isDestroyed
	bool ___s_isDestroyed_6;
};

// VoxelBusters.CoreLibrary.PrivateSingletonBehaviour`1<VoxelBusters.CoreLibrary.ScreenUtility>

// VoxelBusters.CoreLibrary.MonoBehaviourZ

// VoxelBusters.CoreLibrary.MonoBehaviourZ

// VoxelBusters.CoreLibrary.PersistentObject

// VoxelBusters.CoreLibrary.PersistentObject

// VoxelBusters.CoreLibrary.SurrogateCoroutine/SurrogateBehaviour

// VoxelBusters.CoreLibrary.SurrogateCoroutine/SurrogateBehaviour

// VoxelBusters.CoreLibrary.CallbackDispatcher

// VoxelBusters.CoreLibrary.CallbackDispatcher

// VoxelBusters.CoreLibrary.ScreenUtility

// VoxelBusters.CoreLibrary.ScreenUtility
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
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
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
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.IO.FileInfo[]
struct FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6  : public RuntimeArray
{
	ALIGN_FIELD (8) FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* m_Items[1];

	inline FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.IO.DirectoryInfo[]
struct DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953  : public RuntimeArray
{
	ALIGN_FIELD (8) DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* m_Items[1];

	inline DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T VoxelBusters.CoreLibrary.PrivateSingletonBehaviour`1<System.Object>::GetSingleton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PrivateSingletonBehaviour_1_GetSingleton_mFF445C6AF8796816579430FCD82572AF22108980_gshared (const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.PrivateSingletonBehaviour`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivateSingletonBehaviour_1__ctor_m8C58FCED0D19315F7711C378655B4DCBA49FCCC0_gshared (PrivateSingletonBehaviour_1_t111CA98A8D1DE7A311ECA85CCD9633882A800421* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.SerializableKeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializableKeyValuePair_2__ctor_m8C22E96BD823FAAA0E71B31BA2E39CC376F2AFEF_gshared (SerializableKeyValuePair_2_tF040498359C9B5745B6611CE52D536A0FA3A967C* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.Assert::AreNotEqual<System.Int32>(T,T,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_AreNotEqual_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9C31F17B1F86EF8A55559678E798FB6CA0DAE393_gshared (int32_t ___0_value, int32_t ___1_target, String_t* ___2_message, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T System.Array::Find<System.Object>(T[],System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_Find_TisRuntimeObject_m03DE8D6544B37CBB6B339128ACC38C60CCFC4C24_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___1_match, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.Callback`1<System.Object>::Invoke(TResult)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Callback_1_Invoke_mAEABA0FD24BEA85646C36FF7783A4E766C5B8CD8_gshared_inline (Callback_1_t7E848646326A9B0F3AF08E574007EE4CE4B96703* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) ;

// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D (PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0* __this, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.EnumMaskFieldAttribute::set_EnumType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnumMaskFieldAttribute_set_EnumType_m4A8245B4CB5B42B6EDD2D4AFDFC82D5EB01B9CE2_inline (EnumMaskFieldAttribute_t9F83D1D3FB2A1CD07651302E577F9C5860265329* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.FileBrowserAttribute::set_UsesRelativePath(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FileBrowserAttribute_set_UsesRelativePath_mE7919E193716EEE40AA86FDA2EA4814A9F10282C_inline (FileBrowserAttribute_t52AB25C592944562F617FABF0794B8D2D8734936* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.FileBrowserAttribute::set_Extension(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FileBrowserAttribute_set_Extension_m091FB703C181DC5DCAA1609263F539BAAE774280_inline (FileBrowserAttribute_t52AB25C592944562F617FABF0794B8D2D8734936* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.FolderBrowserAttribute::set_UsesRelativePath(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FolderBrowserAttribute_set_UsesRelativePath_mD54C734753FD6D6F21E29CF0881748EC5A197696_inline (FolderBrowserAttribute_t64304F0CFADEFA7A832F7F62A031A9408DA4520C* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.InterfaceFieldAttribute::set_InterfaceType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InterfaceFieldAttribute_set_InterfaceType_mC160AD1E515344445FAF90A22DABED5E859BA016_inline (InterfaceFieldAttribute_tD02A2181D6171CD85C01C5B04D3D52410B2AE960* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean VoxelBusters.CoreLibrary.StringPopupAttribute::get_UsesConstantOptions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool StringPopupAttribute_get_UsesConstantOptions_m9D9A513DC46F962A157CC05A938B3F61B267ADD4_inline (StringPopupAttribute_tE6EE825FCAEDBE24D412CC293D8DB8AFEB93E536* __this, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.StringPopupAttribute::set_PreferencePropertyName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StringPopupAttribute_set_PreferencePropertyName_m0264FD1C4DE6A4C8F109B27D296D41312D17E80A_inline (StringPopupAttribute_tE6EE825FCAEDBE24D412CC293D8DB8AFEB93E536* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.StringPopupAttribute::set_PreferencePropertyValue(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StringPopupAttribute_set_PreferencePropertyValue_m836AE4DC5546E810DDB34F69D7EE13E5A88D919E_inline (StringPopupAttribute_tE6EE825FCAEDBE24D412CC293D8DB8AFEB93E536* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.StringPopupAttribute::set_UsesConstantOptions(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StringPopupAttribute_set_UsesConstantOptions_m6CF32F981516A772C9B24CF1FB55FCADB65D5890_inline (StringPopupAttribute_tE6EE825FCAEDBE24D412CC293D8DB8AFEB93E536* __this, bool ___0_value, const RuntimeMethod* method) ;
// T VoxelBusters.CoreLibrary.PrivateSingletonBehaviour`1<VoxelBusters.CoreLibrary.CallbackDispatcher>::GetSingleton()
inline CallbackDispatcher_t797023FD3F6E7D576CD46045544A3B308BB6BD5A* PrivateSingletonBehaviour_1_GetSingleton_m631220512B645DDEF08141C2908E632D2A3A4998 (const RuntimeMethod* method)
{
	return ((  CallbackDispatcher_t797023FD3F6E7D576CD46045544A3B308BB6BD5A* (*) (const RuntimeMethod*))PrivateSingletonBehaviour_1_GetSingleton_mFF445C6AF8796816579430FCD82572AF22108980_gshared)(method);
}
// System.Void VoxelBusters.CoreLibrary.CallbackDispatcher/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mE7BA2C98D8CD6A0DE7C12F657DB2B43F03607226 (U3CU3Ec__DisplayClass2_0_t9DFBC76D8678A68449A483E07F3EAD8A4C11E9DA* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.CallbackDispatcher::AddAction(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackDispatcher_AddAction_m7AFB0DC545D659C4C90A48FBA2C629AAAFA3B9A9 (CallbackDispatcher_t797023FD3F6E7D576CD46045544A3B308BB6BD5A* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.CallbackDispatcher/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m131AB5C985299A640E3C4BB1F9BE94B28FB1397C (U3CU3Ec__DisplayClass3_0_tB23852084939BAC49D8BEBFC783459BE69B81F47* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Action>::Dequeue()
inline Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* __this, const RuntimeMethod* method)
{
	return ((  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* (*) (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Action>::get_Count()
inline int32_t Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_inline (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// System.Void VoxelBusters.CoreLibrary.DebugLogger::LogException(System.Exception,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogger_LogException_m364F087AD666D272579E5EA51B11E8EA3AD0CAEE (Exception_t* ___0_exception, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_context, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Action>::Enqueue(T)
inline void Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4 (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.Queue`1<System.Action>::.ctor()
inline void Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272 (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// System.Void VoxelBusters.CoreLibrary.PrivateSingletonBehaviour`1<VoxelBusters.CoreLibrary.CallbackDispatcher>::.ctor()
inline void PrivateSingletonBehaviour_1__ctor_mA7977FF10FBDEBDE15DBA7AF43321CEBFF27D5FE (PrivateSingletonBehaviour_1_tC0AB1E707B32A027C82468088B94EBBDEC1684A0* __this, const RuntimeMethod* method)
{
	((  void (*) (PrivateSingletonBehaviour_1_tC0AB1E707B32A027C82468088B94EBBDEC1684A0*, const RuntimeMethod*))PrivateSingletonBehaviour_1__ctor_m8C58FCED0D19315F7711C378655B4DCBA49FCCC0_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.Callback::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Callback_Invoke_m5FD7518DBA221D5EB50AC047BC8F39278A2C9828_inline (Callback_t208DBAACB6E941FCFFB3FCCBD9B6D8036DCC3829* __this, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.CompletionCallback::Invoke(VoxelBusters.CoreLibrary.Error)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CompletionCallback_Invoke_mCA26D91460900D446A4976F7810083CB06BE89A6_inline (CompletionCallback_t012328C9E3710F3FE34906CDC694F8E177261A69* __this, Error_t141DBA81928651667910B46EE98D0BC82AA746D2* ___0_error, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.MonoBehaviourZ::EnsureInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourZ_EnsureInitialized_mEE1E31911F7495C6D3D22283843447CBCA03AB8C (MonoBehaviourZ_t0D5B385BCAEF4C970718D8CF02F13EC705E46FE1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.SurrogateCoroutine::CreateSurrogateObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurrogateCoroutine_CreateSurrogateObject_m7C4BA6811F8B80C10EBCB4786C1483C5F451ACC7 (const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Collections.IEnumerator VoxelBusters.CoreLibrary.SurrogateCoroutine::WaitUntilAndInvokeInternal(System.Func`1<System.Boolean>,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SurrogateCoroutine_WaitUntilAndInvokeInternal_m5008C364496DB1B2FAE6DE78923B1FC055BCD777 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___0_predicate, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_action, const RuntimeMethod* method) ;
// System.Collections.IEnumerator VoxelBusters.CoreLibrary.SurrogateCoroutine::WaitUntilAndInvokeInternal(System.Collections.IEnumerator,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SurrogateCoroutine_WaitUntilAndInvokeInternal_m39F0FDA58BF8D4CA594CB12BF340A28CCF64C8F7 (RuntimeObject* ___0_coroutine, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_action, const RuntimeMethod* method) ;
// System.Collections.IEnumerator VoxelBusters.CoreLibrary.SurrogateCoroutine::WaitUntilAndInvokeInternal(UnityEngine.YieldInstruction,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SurrogateCoroutine_WaitUntilAndInvokeInternal_m22014F72831DB5E08F718762E7A72F2C84461BED (YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D* ___0_instruction, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_action, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<VoxelBusters.CoreLibrary.SurrogateCoroutine/SurrogateBehaviour>()
inline SurrogateBehaviour_tB3587D1A48FDB05726CBCAB154C817439D3FC87F* GameObject_AddComponent_TisSurrogateBehaviour_tB3587D1A48FDB05726CBCAB154C817439D3FC87F_m97D695C2AD527F5457EDB04F3DE65D930627201E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SurrogateBehaviour_tB3587D1A48FDB05726CBCAB154C817439D3FC87F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitUntilAndInvokeInternalU3Ed__9__ctor_mAEA92CBFA9EBC95BEB407A4D6510316D9E0AFA2C (U3CWaitUntilAndInvokeInternalU3Ed__9_t4AE3E19CB80F1C5B6D8427737301E381E275CDCB* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitUntilAndInvokeInternalU3Ed__10__ctor_m721B9F4DFB03CD2839B75F5C9198307E2D4932F4 (U3CWaitUntilAndInvokeInternalU3Ed__10_t38F9279EB0913FE80AFEB4DE1934C9AEF07C81F9* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitUntilAndInvokeInternalU3Ed__11__ctor_m6A18E65ECEB04FA55D43710A864873FA810781DB (U3CWaitUntilAndInvokeInternalU3Ed__11_tFD190D50E9376E5CCF1CEF1E9C0829F76C224236* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.SurrogateCoroutine/<InvokeInternal>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInvokeInternalU3Ed__12__ctor_mD316A9F3CCB4F9E12B2EF5B8E8A51F108892C074 (U3CInvokeInternalU3Ed__12_t76BF7EBEB21AA23BDFA05E47F80FA97A24BB5FE5* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___0_predicate, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.Asset::set_Data(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Asset_set_Data_m795834BEFB440CF053CA40D43E61C17EE04135EB_inline (Asset_t7CD7395B84CF4879BA158B4B56779849378B06EF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.Asset::set_MimeType(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Asset_set_MimeType_m6B6C5FD1D001A4B0F04BD25182D0A2E03633A8DC_inline (Asset_t7CD7395B84CF4879BA158B4B56779849378B06EF* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.Asset::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Asset_set_Name_mD6C27F9F97DA9E66AEF64C2A68280CC681EC535C_inline (Asset_t7CD7395B84CF4879BA158B4B56779849378B06EF* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.Asset::.ctor(System.Byte[],System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asset__ctor_mBEEAD0A7A1FD03B9CC2A622C140AD519CFB7617A (Asset_t7CD7395B84CF4879BA158B4B56779849378B06EF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, String_t* ___1_mimeType, String_t* ___2_name, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.Error::.ctor(System.String,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Error__ctor_m34C70CB7A6FC9EE936C47C40285A1F6F90F8C838 (Error_t141DBA81928651667910B46EE98D0BC82AA746D2* __this, String_t* ___0_domain, int32_t ___1_code, String_t* ___2_description, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.Error::set_Domain(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Error_set_Domain_m7A33F343589706C81648F7BE906D9F4C162CA4B3_inline (Error_t141DBA81928651667910B46EE98D0BC82AA746D2* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.Error::set_Code(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Error_set_Code_m31572DDBF0FE76130760D0DAD7F4F44B69929037_inline (Error_t141DBA81928651667910B46EE98D0BC82AA746D2* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.Error::set_Description(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Error_set_Description_m020DEBA45411298CE10D2743D70D319A0EE2C02B_inline (Error_t141DBA81928651667910B46EE98D0BC82AA746D2* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.Error::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Error__ctor_m3F2BFDE4C1781B9E6A6165661CADB428407ADA1A (Error_t141DBA81928651667910B46EE98D0BC82AA746D2* __this, String_t* ___0_description, const RuntimeMethod* method) ;
// System.String VoxelBusters.CoreLibrary.Error::get_Domain()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Error_get_Domain_m50DB0EFEA276C4AEA40BC2F1811DFE53F215B13C_inline (Error_t141DBA81928651667910B46EE98D0BC82AA746D2* __this, const RuntimeMethod* method) ;
// System.Int32 VoxelBusters.CoreLibrary.Error::get_Code()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Error_get_Code_mA0CADCCFFC4F11747133CD1D23AFF351F170A061_inline (Error_t141DBA81928651667910B46EE98D0BC82AA746D2* __this, const RuntimeMethod* method) ;
// System.String VoxelBusters.CoreLibrary.Error::get_Description()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Error_get_Description_m056AE5B740F749E34208B58C44D3C57BF1CF4050_inline (Error_t141DBA81928651667910B46EE98D0BC82AA746D2* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> VoxelBusters.CoreLibrary.KeyValueDataStore::LoadDataFromPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* KeyValueDataStore_LoadDataFromPath_m6DA08BC5EFC76D65E8CC50F8C3EAF442FB063B14 (KeyValueDataStore_t81199FD1D06BE1FD793EB39DD5BA59FF147D4048* __this, String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, String_t** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Boolean::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_Parse_mC9B4406FE9DA904E2B7D75267CAD38E837D39A6D (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Int64 System.Int64::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Int64_Parse_m466621B41F074263D83527F8FC85405AEF6CDEE6 (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Double System.Double::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Double_Parse_mEBC644CE0C86A405283EC4839F872EF9E556670A (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Byte[] System.Convert::FromBase64String(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C (String_t* ___0_s, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B (int64_t* __this, const RuntimeMethod* method) ;
// System.String System.Double::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339 (double* __this, const RuntimeMethod* method) ;
// System.String System.Convert::ToBase64String(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inArray, const RuntimeMethod* method) ;
// VoxelBusters.CoreLibrary.IJsonServiceProvider VoxelBusters.CoreLibrary.ExternalServiceProvider::get_JsonServiceProvider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ExternalServiceProvider_get_JsonServiceProvider_m9C400AF74CA8D4FD07A4DA205529E862EB356DA9_inline (const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.IOServices::CreateFile(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOServices_CreateFile_m549D3DCEFB88D777D97E09D40A58C745231EB7D4 (String_t* ___0_path, String_t* ___1_contents, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Clear()
inline void Dictionary_2_Clear_m96A01966628B0B9F973D4E29050CC769B116A586 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_Clear_mCFB5EA7351D5860D2B91592B91A84CA265A41433_gshared)(__this, method);
}
// System.Void VoxelBusters.CoreLibrary.KeyValueDataStore::Synchronize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValueDataStore_Synchronize_m3A3F8977B338782E98C9CA111404F4AEC92E3FA1 (KeyValueDataStore_t81199FD1D06BE1FD793EB39DD5BA59FF147D4048* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::Remove(TKey)
inline bool Dictionary_2_Remove_mD816BB81544F3B37050A72FD7BA22E6A3D53BBFC (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___0_key, method);
}
// System.Boolean VoxelBusters.CoreLibrary.IOServices::FileExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IOServices_FileExists_m671E8720CF69CFD1FD088DE87B7AF79014291DBF (String_t* ___0_path, const RuntimeMethod* method) ;
// System.String VoxelBusters.CoreLibrary.IOServices::ReadFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IOServices_ReadFile_mD180335BE1AB1D7C474B281E934BC2C771399F42 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.SerializableKeyValuePair`2<System.String,System.String>::.ctor(TKey,TValue)
inline void SerializableKeyValuePair_2__ctor_m759AA068B34BF903262870EF5BAF7BC6FD2E1C01 (SerializableKeyValuePair_2_tED0724F408955478C4C255E3D33541AE6C8067D0* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (SerializableKeyValuePair_2_tED0724F408955478C4C255E3D33541AE6C8067D0*, String_t*, String_t*, const RuntimeMethod*))SerializableKeyValuePair_2__ctor_m8C22E96BD823FAAA0E71B31BA2E39CC376F2AFEF_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.ImageConversion::EncodeToJPG(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ImageConversion_EncodeToJPG_mD3B358B8645CF85EBAD979554FFDE05A54A99804 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_tex, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.ImageConversion::EncodeToPNG(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ImageConversion_EncodeToPNG_m0804AD31B83C653AEBB234F6CC31A02D4FA7C945 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_tex, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.VBException::.ctor(System.String,System.Int32,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VBException__ctor_mAA2CD9B68883BC301FE0F92D3CA53622A0345DB1 (VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489* __this, String_t* ___0_message, int32_t ___1_errorCode, Exception_t* ___2_innerException, const RuntimeMethod* method) ;
// UnityEngine.Texture2D VoxelBusters.CoreLibrary.TextureData::CreateTexture(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TextureData_CreateTexture_m833BD23EAC762691391E473C6D070E0A3E73240E (TextureData_tCD731E82783AA1C111A3A7D3D4ED9E49B6B8B320* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.ImageConversion::LoadImage(UnityEngine.Texture2D,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageConversion_LoadImage_m1797365F78319B68638DE8BB02836F8D60760041 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_tex, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_data, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.UnityPackageDefinition::EnsurePersistentDataPathExists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityPackageDefinition_EnsurePersistentDataPathExists_m534BBE87014B1875327B9FBCC2780B2DA2D80F18 (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, const RuntimeMethod* method) ;
// System.String VoxelBusters.CoreLibrary.UnityPackageDefinition::GetPersistentDataPathInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityPackageDefinition_GetPersistentDataPathInternal_mB1B94B09310FCDA464400E40467D69973C0A8DD0 (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.UnityPackageDefinition::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityPackageDefinition_set_Name_m89B54404D0F7336741D828220ED8441FDB6B0D59_inline (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.UnityPackageDefinition::set_DisplayName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityPackageDefinition_set_DisplayName_m68C5E138EE218CF75B16B0B78F0DE763860350A8_inline (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.UnityPackageDefinition::set_Version(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityPackageDefinition_set_Version_m2A86B9CF94C9A49B612E3A365771DCF0EE59A77D_inline (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String VoxelBusters.CoreLibrary.UnityPackageDefinition::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UnityPackageDefinition_get_Name_m46EA77ABFE4D2F9888788AA7D293346CFB69F98C_inline (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.UnityPackageDefinition::set_DefaultInstallPath(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityPackageDefinition_set_DefaultInstallPath_m31C3C6480AE8201E7DAA8871C20B35E85B8A8FE0_inline (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.UnityPackageDefinition::set_UpmInstallPath(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityPackageDefinition_set_UpmInstallPath_m4825B66919985B0B210E98DC99610CE867CD2A2C_inline (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.UnityPackageDefinition::set_MutableResourcesPath(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityPackageDefinition_set_MutableResourcesPath_m61EBDF33413C852BAF56B8F897B0E6A2BD4A18A8_inline (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___0_oldValue, String_t* ___1_newValue, const RuntimeMethod* method) ;
// System.String System.String::TrimStart(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_TrimStart_m210863A5E84BC22EC0487A1543D3680979DD87EE (String_t* __this, Il2CppChar ___0_trimChar, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.UnityPackageDefinition::set_MutableResourcesRelativePath(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityPackageDefinition_set_MutableResourcesRelativePath_m491AD9FB2D8FE37346D40E3B35F3F15E0269E66D_inline (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD (String_t* ___0_separator, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_value, const RuntimeMethod* method) ;
// System.Boolean VoxelBusters.CoreLibrary.IOServices::CreateDirectory(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IOServices_CreateDirectory_m1AEDF4D5DD44E6F1058114E1D90565CBEF683084 (String_t* ___0_path, bool ___1_overwrite, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399 (const RuntimeMethod* method) ;
// System.String VoxelBusters.CoreLibrary.IOServices::CombinePath(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IOServices_CombinePath_m64C44812631446719FAE4B96E893C764979BDEBE (String_t* ___0_path1, String_t* ___1_path2, const RuntimeMethod* method) ;
// System.Boolean VoxelBusters.CoreLibrary.URLString::get_IsValid()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool URLString_get_IsValid_m169562BEF18D983FFFA9AE4C4C83B32658DEEAA8_inline (URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77* __this, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.URLString::set_IsValid(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void URLString_set_IsValid_m66AA059CDC9988AE810ED6A79E2B0270806E86D8_inline (URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean VoxelBusters.CoreLibrary.URLString::get_IsFilePath()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool URLString_get_IsFilePath_m25A776D613DC54119C8A814BBE048FFDCD51FDBE_inline (URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77* __this, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.URLString::set_IsFilePath(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void URLString_set_IsFilePath_m347545BE7704E3445CF1E4A5FECDA671442B1396_inline (URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.Assert::IsNotNullOrEmpty(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsNotNullOrEmpty_m53BB2D375D164967F21495F18416D175794300AC (String_t* ___0_value, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.Assert::IsFalse(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsFalse_m9D206557BA0ACE724B22FADBD3154CF6903D97DF (bool ___0_status, String_t* ___1_message, const RuntimeMethod* method) ;
// System.String VoxelBusters.CoreLibrary.URLString::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* URLString_ToString_mDDFEE4F8D62B162C1A577E0A4F14A1C656485E90 (URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.VBException::set_ErrorCode(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VBException_set_ErrorCode_m4B321FA0661C8AD554422248B8935D42FDFAAD3B_inline (VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.Assert::IsPropertyNotNull(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsPropertyNotNull_mEFBFEDDD73F6236D273A03646B7EA3B754241CE5 (RuntimeObject* ___0_obj, String_t* ___1_property, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.Assert::AreNotEqual<System.Int32>(T,T,System.String)
inline void Assert_AreNotEqual_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9C31F17B1F86EF8A55559678E798FB6CA0DAE393 (int32_t ___0_value, int32_t ___1_target, String_t* ___2_message, const RuntimeMethod* method)
{
	((  void (*) (int32_t, int32_t, String_t*, const RuntimeMethod*))Assert_AreNotEqual_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9C31F17B1F86EF8A55559678E798FB6CA0DAE393_gshared)(___0_value, ___1_target, ___2_message, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean VoxelBusters.CoreLibrary.DebugLogger::IgnoreLog(VoxelBusters.CoreLibrary.DebugLogger/LogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DebugLogger_IgnoreLog_m210DFE3E098333B2038B45932A5F9D743BF20F82 (int32_t ___0_level, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E (RuntimeObject* ___0_message, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_context, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.DebugLogger::LogFormat(UnityEngine.Object,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogger_LogFormat_mDE23A7696433FF078DB4F7D6C590EA0D6CD44D01 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_context, String_t* ___1_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_arguments, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB (RuntimeObject* ___0_message, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_context, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.DebugLogger::LogWarningFormat(UnityEngine.Object,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogger_LogWarningFormat_m005C9726454C1826E44BD809B3A2307D6FBE05C9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_context, String_t* ___1_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_arguments, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E (RuntimeObject* ___0_message, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_context, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.DebugLogger::LogErrorFormat(UnityEngine.Object,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogger_LogErrorFormat_mECE51A3FEBF349CCC63586168621EA1B221F3638 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_context, String_t* ___1_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_arguments, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogException(System.Exception,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_mD4CF3A9C64D8D4BA0570D529E705D134A9A5E498 (Exception_t* ___0_exception, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_context, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.UnityPackageDefinition::.ctor(System.String,System.String,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityPackageDefinition__ctor_m839967524CCE5B6D7F43EC5C794E3B59186E1D38 (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, String_t* ___0_name, String_t* ___1_displayName, String_t* ___2_version, String_t* ___3_defaultInstallPath, String_t* ___4_mutableResourcesPath, String_t* ___5_persistentDataRelativePath, const RuntimeMethod* method) ;
// VoxelBusters.CoreLibrary.UnityPackageDefinition VoxelBusters.CoreLibrary.CoreLibrarySettings::get_Package()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* CoreLibrarySettings_get_Package_m842A3DDBE3214F2B675AFF0B3E15720A9D2AF94B (const RuntimeMethod* method) ;
// System.String VoxelBusters.CoreLibrary.UnityPackageDefinition::get_DisplayName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UnityPackageDefinition_get_DisplayName_m4E6C2C6137877D7306D7C686B7F927EE52F772A3_inline (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, const RuntimeMethod* method) ;
// System.String VoxelBusters.CoreLibrary.UnityPackageDefinition::get_Version()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UnityPackageDefinition_get_Version_mE7D31494D4153ADB62F4917F29C4C7321C3C34AF_inline (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_timeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isMobilePlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isMobilePlatform_mE0BBFDE72BBFE5877581FA67DDBBFC397608AFCA (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// UnityEngine.GameObject VoxelBusters.CoreLibrary.GameObjectUtility::CreateChild(System.String,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObjectUtility_CreateChild_mB1D94E3BE6CF23BC871FA06CB5C88DB54B1AEDC4 (String_t* ___0_childName, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_localPosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_localRotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_localScale, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___4_parent, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m721D643351E55308EA4F5F41B67D5446D11C61F0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___1_components, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_p, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE (String_t* ___0_path1, String_t* ___1_path2, const RuntimeMethod* method) ;
// System.String System.Environment::get_CurrentDirectory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_CurrentDirectory_m96621163A47F5BE09FEBA00EB4644EE115B5E259 (const RuntimeMethod* method) ;
// System.String System.IO.Path::GetFullPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFullPath_m9E485D7D38A868A6A5863CBD24677231288EECE2 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::EndsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, String_t* ___0_uriString, const RuntimeMethod* method) ;
// System.Uri System.Uri::MakeRelativeUri(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* Uri_MakeRelativeUri_m381F6F3A899125AAA7AE9374CDB794E84D17075C (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___0_uri, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF (String_t* __this, Il2CppChar ___0_oldChar, Il2CppChar ___1_newChar, const RuntimeMethod* method) ;
// System.String System.Uri::UnescapeDataString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_UnescapeDataString_m095AF55EE0F237A44FC8A53D2EE6FA66A567634D (String_t* ___0_stringToUnescape, const RuntimeMethod* method) ;
// System.IO.FileAttributes System.IO.File::GetAttributes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t File_GetAttributes_mA6F7E4345FF27BF66C1EB8F2AE3BF03ACF4868CA (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Boolean VoxelBusters.CoreLibrary.IOServices::DirectoryExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IOServices_DirectoryExists_mB580B5DACEFE1E1C19871B24F03AA25A73A0511A (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.IOServices::DeleteDirectory(System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOServices_DeleteDirectory_mE6D082854DFB9D2435723F24C9E6F3A1884F1500 (String_t* ___0_path, bool ___1_recursive, bool ___2_throwError, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void System.IO.DirectoryInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectoryInfo__ctor_m36BC476C58B55083046C0A738157D84E2323E0E9 (DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* __this, String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void System.IO.FileNotFoundException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileNotFoundException__ctor_m02E41C66D9C7421CF93252AEE29CF96C15CA6E0B (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* __this, const RuntimeMethod* method) ;
// System.Void System.IO.DirectoryInfo::Delete(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectoryInfo_Delete_mF79B7BBC51DC847268E2EB216FBBF5412C9E870C (DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* __this, bool ___0_recursive, const RuntimeMethod* method) ;
// System.IO.FileInfo[] System.IO.DirectoryInfo::GetFiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6* DirectoryInfo_GetFiles_m998040748717954CDDCE273F61EEC0625069543F (DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* __this, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo[] System.IO.DirectoryInfo::GetDirectories()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953* DirectoryInfo_GetDirectories_m2EC8498544C3A85EF92273330858E03B284C6901 (DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* __this, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetDirectoryName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetDirectoryName_m428BADBE493A3927B51A13DEF658929B430516F6 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.String[] System.IO.Directory::GetDirectories(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Directory_GetDirectories_m071EF47103F7A38FBF882C900F0A0AFB4326631F (String_t* ___0_path, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetFileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileName_mB1A8CE314EE250B06E3D33142315E2BD3A75D1D6 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Boolean System.IO.Directory::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.IOServices::CopyDirectory(System.String,System.String,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOServices_CopyDirectory_m3741071F070EEE9742051A5A6C2A2B1E3111F2B9 (String_t* ___0_root, String_t* ___1_dest, bool ___2_recursive, String_t* ___3_filePattern, const RuntimeMethod* method) ;
// System.String[] System.IO.Directory::GetFiles(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Directory_GetFiles_m35ACD3D557D3B7EF4CF9A7908D2EDA61E6330090 (String_t* ___0_path, String_t* ___1_searchPattern, const RuntimeMethod* method) ;
// System.String[] System.IO.Directory::GetFiles(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Directory_GetFiles_m3E6AA407767C85CD62C5FD2750747274D1C4EA76 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void System.IO.File::Copy(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Copy_mC698F2F0FF8BBF3339527CD00E57A6D5B26DE4AA (String_t* ___0_sourceFileName, String_t* ___1_destFileName, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo System.IO.Directory::GetParent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_GetParent_mDD1F4DD5F95A5D6676009FB76E5016EDD127FFB2 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void System.IO.Directory::Move(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Directory_Move_mA9C7ED31B0223C808C52AC0AF5F4476305DB5D31 (String_t* ___0_sourceDirName, String_t* ___1_destDirName, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0 (Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void System.IO.File::WriteAllText(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllText_m8AE8932A417928EF1E86F1E6B37C7A41904614D1 (String_t* ___0_path, String_t* ___1_contents, const RuntimeMethod* method) ;
// System.Void System.IO.File::WriteAllBytes(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_WriteAllBytes_mC491031DA14AA9B591F62D6AD0181D090E081077 (String_t* ___0_path, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, const RuntimeMethod* method) ;
// System.String System.IO.File::ReadAllText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* File_ReadAllText_mA4A939F853D573379F7129AFDC469B91E9747BAA (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Byte[] System.IO.File::ReadAllBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void System.IO.File::Copy(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Copy_m3798F05909C43D7EA26130D51D0A15CFCBE7458A (String_t* ___0_sourceFileName, String_t* ___1_destFileName, bool ___2_overwrite, const RuntimeMethod* method) ;
// System.Void System.IO.File::Move(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Move_mBC9450111E0144A55D893A720F19E612D658AC37 (String_t* ___0_sourceFileName, String_t* ___1_destFileName, const RuntimeMethod* method) ;
// System.Void System.IO.File::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void System.IO.FileInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileInfo__ctor_m0A602529DFCFC44BB4EF4C530E6FBA765C44143F (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* __this, String_t* ___0_fileName, const RuntimeMethod* method) ;
// System.IO.FileAttributes System.IO.FileSystemInfo::get_Attributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FileSystemInfo_get_Attributes_m38971A5B147214C5EE193CE9F60628EA834EF6DA (FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9* __this, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.IOServices::DeleteFile(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOServices_DeleteFile_m6FE24EE12AA2C5F9E69127E42F7C43545CB06EEA (String_t* ___0_path, bool ___1_throwError, const RuntimeMethod* method) ;
// System.Type VoxelBusters.CoreLibrary.ReflectionUtility::GetType(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* ReflectionUtility_GetType_m2025FFED3A239BD12BC7B6D9E3CEBC8F75DFD91D (String_t* ___0_assemblyName, String_t* ___1_typeName, const RuntimeMethod* method) ;
// System.Reflection.Assembly VoxelBusters.CoreLibrary.ReflectionUtility::FindAssemblyWithName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assembly_t* ReflectionUtility_FindAssemblyWithName_m450DB8A908F7503FAE1C244917D2C2080CE89D52 (String_t* ___0_assemblyName, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.Assembly::op_Inequality(System.Reflection.Assembly,System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Assembly_op_Inequality_m58825496C0F2FD59DFC42085A1E60C69F6DD20F0 (Assembly_t* ___0_left, Assembly_t* ___1_right, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.ReflectionUtility/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m0A304508784FD4B50D019359DA48DF44D5680529 (U3CU3Ec__DisplayClass5_0_tDA27EFFEDC489B135075AE1E3634B2D41E115EBB* __this, const RuntimeMethod* method) ;
// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667 (const RuntimeMethod* method) ;
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249 (AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Reflection.Assembly>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m48B6BB78EBAEDDBE451D41754CCD6E6A179AA237 (Predicate_1_t877E877D4EA2E6B0BB21BB8CB526484EF9F3F52E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t877E877D4EA2E6B0BB21BB8CB526484EF9F3F52E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___0_object, ___1_method, method);
}
// T System.Array::Find<System.Reflection.Assembly>(T[],System.Predicate`1<T>)
inline Assembly_t* Array_Find_TisAssembly_t_m69D7963E7C3F19E3FD5B7D9FE783F9F7DF083DB5 (AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* ___0_array, Predicate_1_t877E877D4EA2E6B0BB21BB8CB526484EF9F3F52E* ___1_match, const RuntimeMethod* method)
{
	return ((  Assembly_t* (*) (AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339*, Predicate_1_t877E877D4EA2E6B0BB21BB8CB526484EF9F3F52E*, const RuntimeMethod*))Array_Find_TisRuntimeObject_m03DE8D6544B37CBB6B339128ACC38C60CCFC4C24_gshared)(___0_array, ___1_match, method);
}
// System.String System.Reflection.AssemblyName::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AssemblyName_get_Name_m7899B9B3F289EEBAF62AEAB51D1CA91DA92C4E6A_inline (AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// T VoxelBusters.CoreLibrary.PrivateSingletonBehaviour`1<VoxelBusters.CoreLibrary.ScreenUtility>::GetSingleton()
inline ScreenUtility_t786316A2864D43D72F0DB7C56A661CA5C6DE086D* PrivateSingletonBehaviour_1_GetSingleton_m32958FD4F5FAA1A9B10E82E2B04F724748F77AE2 (const RuntimeMethod* method)
{
	return ((  ScreenUtility_t786316A2864D43D72F0DB7C56A661CA5C6DE086D* (*) (const RuntimeMethod*))PrivateSingletonBehaviour_1_GetSingleton_mFF445C6AF8796816579430FCD82572AF22108980_gshared)(method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Collections.IEnumerator VoxelBusters.CoreLibrary.ScreenUtility::CaptureFrameRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScreenUtility_CaptureFrameRoutine_mD34C7FB45F075F9EAB19DB1D56FE8F1D730D101E (ScreenUtility_t786316A2864D43D72F0DB7C56A661CA5C6DE086D* __this, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.ScreenUtility/<CaptureFrameRoutine>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCaptureFrameRoutineU3Ed__4__ctor_mAE5D2EDDFFAF019DEE8310059379E2B750420291 (U3CCaptureFrameRoutineU3Ed__4_t660CAD1E8A27FCF4C48992C4108F08F30D4A80E2* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.PrivateSingletonBehaviour`1<VoxelBusters.CoreLibrary.ScreenUtility>::.ctor()
inline void PrivateSingletonBehaviour_1__ctor_mF4829E05B2DC31D6DD1A90C63DBC577F85818E13 (PrivateSingletonBehaviour_1_tD719FD1AEB686D10D356594D720E77755FA8781F* __this, const RuntimeMethod* method)
{
	((  void (*) (PrivateSingletonBehaviour_1_tD719FD1AEB686D10D356594D720E77755FA8781F*, const RuntimeMethod*))PrivateSingletonBehaviour_1__ctor_m8C58FCED0D19315F7711C378655B4DCBA49FCCC0_gshared)(__this, method);
}
// UnityEngine.Texture2D UnityEngine.ScreenCapture::CaptureScreenshotAsTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ScreenCapture_CaptureScreenshotAsTexture_m3041B552FEB1E7AA144F9E36BADB0A2CAFD49512 (const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.Callback`1<UnityEngine.Texture2D>::Invoke(TResult)
inline void Callback_1_Invoke_mE9AF05DB5B5B1C027C62687D2308260FF368C14C_inline (Callback_1_t45CF87BD031D91AA8EE1A5E4F183D27CB925DC5E* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_result, const RuntimeMethod* method)
{
	((  void (*) (Callback_1_t45CF87BD031D91AA8EE1A5E4F183D27CB925DC5E*, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, const RuntimeMethod*))Callback_1_Invoke_mAEABA0FD24BEA85646C36FF7783A4E766C5B8CD8_gshared_inline)(__this, ___0_result, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::EscapeURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_EscapeURL_m1B819655E6FFE468B9DE9D101A17398F3E1A4F27 (String_t* ___0_s, const RuntimeMethod* method) ;
// VoxelBusters.CoreLibrary.VBException VoxelBusters.CoreLibrary.VBException::SwitchCaseNotImplemented(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489* VBException_SwitchCaseNotImplemented_m1A614215F2864235741CF4392D99116AA299BBF6 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Byte[] VoxelBusters.CoreLibrary.TextureUtility::Encode(UnityEngine.Texture2D,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TextureUtility_Encode_m37D889BAD53AB90528BB2C846C53D24BB2AFE1E3 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, String_t** ___1_mimeType, const RuntimeMethod* method) ;
// UnityEngine.TextureFormat UnityEngine.Texture2D::get_format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture2D_get_format_mE39DD922F83CA1097383309278BB6F20636A7D9D (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Byte[] VoxelBusters.CoreLibrary.TextureUtility::Encode(UnityEngine.Texture2D,VoxelBusters.CoreLibrary.TextureEncodingFormat,System.String&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TextureUtility_Encode_m0EE99ECA8F3853C983401D0FAD86841680FE3881 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, int32_t ___1_encodeFormat, String_t** ___2_mimeType, String_t** ___3_textEncodingName, const RuntimeMethod* method) ;
// System.String VoxelBusters.CoreLibrary.TextureUtility::TakeScreenshot(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextureUtility_TakeScreenshot_mFF3C9FE0CD1B96044780FDAE770149A2F2DA7650 (String_t* ___0_directory, String_t* ___1_fileName, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.IOServices::DeleteFileOrDirectory(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOServices_DeleteFileOrDirectory_m0FDA01329E4B9B935F7A9F108B4234DB0FA8FC7F (String_t* ___0_path, bool ___1_throwError, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScreenCapture::CaptureScreenshot(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenCapture_CaptureScreenshot_m897B0264A202824D377CCD9A5221B164DE2CF9DE (String_t* ___0_filename, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.TransformUtility::RemoveChildren(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtility_RemoveChildren_m7439F132629D107219DAB883A5C52AF70EA313E8 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, const RuntimeMethod* method) ;
// UnityEngine.Transform[] VoxelBusters.CoreLibrary.TransformUtility::GetImmediateChildren(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* TransformUtility_GetImmediateChildren_m688E6FFE00CDCB57CA1D13E23C10EABBD698E209 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.String VoxelBusters.CoreLibrary.UnityPackageDefinition::get_DefaultInstallPath()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UnityPackageDefinition_get_DefaultInstallPath_m3A2B3AEDBD9281C14AE8C6AD9C9CBA86B6B5BFCC_inline (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, const RuntimeMethod* method) ;
// System.Boolean VoxelBusters.CoreLibrary.UnityPackagePathResolver::IsSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityPackagePathResolver_IsSupported_m800B61233D9EA269CC399B8A8CC6C6BBDA1B967C (const RuntimeMethod* method) ;
// System.Boolean VoxelBusters.CoreLibrary.UnityPackagePathResolver::IsInstalledWithinAssets(VoxelBusters.CoreLibrary.UnityPackageDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityPackagePathResolver_IsInstalledWithinAssets_mB3A933F022E90E8D72A591DFB2119F3B9617E869 (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* ___0_package, const RuntimeMethod* method) ;
// System.String VoxelBusters.CoreLibrary.UnityPackageDefinition::get_UpmInstallPath()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UnityPackageDefinition_get_UpmInstallPath_m3F0A9CC49E5FF725ED57A6CB9061128BD8E67150_inline (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, const RuntimeMethod* method) ;
// System.String VoxelBusters.CoreLibrary.UnityPackagePathResolver::GetInstallPath(VoxelBusters.CoreLibrary.UnityPackageDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityPackagePathResolver_GetInstallPath_m6FA9AB5B80344E9A1B714480E04625206F1C007B (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* ___0_package, const RuntimeMethod* method) ;
// System.String VoxelBusters.CoreLibrary.UnityPackagePathResolver::CombinePath(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityPackagePathResolver_CombinePath_mAF28CB9C1DA73BE851D5E811D24B2D6660B89057 (String_t* ___0_pathA, String_t* ___1_pathB, const RuntimeMethod* method) ;
// System.String VoxelBusters.CoreLibrary.UnityPackageDefinition::get_MutableResourcesPath()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UnityPackageDefinition_get_MutableResourcesPath_mD09C3E273F2B116AF8D1DE040A4BAC3A95052C09_inline (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, const RuntimeMethod* method) ;
// System.String VoxelBusters.CoreLibrary.UnityPackageDefinition::get_MutableResourcesRelativePath()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UnityPackageDefinition_get_MutableResourcesRelativePath_m0B66EEDDDA0AAF2B5A2E4711EA0CD62EB0094854_inline (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0 (const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
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
// System.Type VoxelBusters.CoreLibrary.EnumMaskFieldAttribute::get_EnumType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* EnumMaskFieldAttribute_get_EnumType_m3B0B5481886F252B201AF53EE427EE867FB2D20F (EnumMaskFieldAttribute_t9F83D1D3FB2A1CD07651302E577F9C5860265329* __this, const RuntimeMethod* method) 
{
	{
		// get;
		Type_t* L_0 = __this->___U3CEnumTypeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void VoxelBusters.CoreLibrary.EnumMaskFieldAttribute::set_EnumType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumMaskFieldAttribute_set_EnumType_m4A8245B4CB5B42B6EDD2D4AFDFC82D5EB01B9CE2 (EnumMaskFieldAttribute_t9F83D1D3FB2A1CD07651302E577F9C5860265329* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// private set;
		Type_t* L_0 = ___0_value;
		__this->___U3CEnumTypeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEnumTypeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.EnumMaskFieldAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumMaskFieldAttribute__ctor_m89615333420BE70599736641BA1A01FB934ACE43 (EnumMaskFieldAttribute_t9F83D1D3FB2A1CD07651302E577F9C5860265329* __this, const RuntimeMethod* method) 
{
	{
		// private EnumMaskFieldAttribute()
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// {}
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.EnumMaskFieldAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumMaskFieldAttribute__ctor_m6B356B3CD7FC091FC8B86CB86D6D3FAB04A59C28 (EnumMaskFieldAttribute_t9F83D1D3FB2A1CD07651302E577F9C5860265329* __this, Type_t* ___0_type, const RuntimeMethod* method) 
{
	{
		// public EnumMaskFieldAttribute(Type type)
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// EnumType    = type;
		Type_t* L_0 = ___0_type;
		EnumMaskFieldAttribute_set_EnumType_m4A8245B4CB5B42B6EDD2D4AFDFC82D5EB01B9CE2_inline(__this, L_0, NULL);
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
// System.Boolean VoxelBusters.CoreLibrary.FileBrowserAttribute::get_UsesRelativePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FileBrowserAttribute_get_UsesRelativePath_m28868D5E34E0699B708BD214EE4EE759282DAA87 (FileBrowserAttribute_t52AB25C592944562F617FABF0794B8D2D8734936* __this, const RuntimeMethod* method) 
{
	{
		// public bool UsesRelativePath { get; private set; }
		bool L_0 = __this->___U3CUsesRelativePathU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void VoxelBusters.CoreLibrary.FileBrowserAttribute::set_UsesRelativePath(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserAttribute_set_UsesRelativePath_mE7919E193716EEE40AA86FDA2EA4814A9F10282C (FileBrowserAttribute_t52AB25C592944562F617FABF0794B8D2D8734936* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool UsesRelativePath { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CUsesRelativePathU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String VoxelBusters.CoreLibrary.FileBrowserAttribute::get_Extension()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileBrowserAttribute_get_Extension_m117CEBC5B3FDEFA2E8C41866A40D83F59A572003 (FileBrowserAttribute_t52AB25C592944562F617FABF0794B8D2D8734936* __this, const RuntimeMethod* method) 
{
	{
		// public string Extension { get; private set; }
		String_t* L_0 = __this->___U3CExtensionU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void VoxelBusters.CoreLibrary.FileBrowserAttribute::set_Extension(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserAttribute_set_Extension_m091FB703C181DC5DCAA1609263F539BAAE774280 (FileBrowserAttribute_t52AB25C592944562F617FABF0794B8D2D8734936* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Extension { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CExtensionU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CExtensionU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.FileBrowserAttribute::.ctor(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileBrowserAttribute__ctor_m813C26EF941C6311240BB592D3D649B459C2EC07 (FileBrowserAttribute_t52AB25C592944562F617FABF0794B8D2D8734936* __this, bool ___0_usesRelativePath, String_t* ___1_extension, const RuntimeMethod* method) 
{
	{
		// public FileBrowserAttribute(bool usesRelativePath, string extension = null)
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// UsesRelativePath    = usesRelativePath;
		bool L_0 = ___0_usesRelativePath;
		FileBrowserAttribute_set_UsesRelativePath_mE7919E193716EEE40AA86FDA2EA4814A9F10282C_inline(__this, L_0, NULL);
		// Extension           = extension;
		String_t* L_1 = ___1_extension;
		FileBrowserAttribute_set_Extension_m091FB703C181DC5DCAA1609263F539BAAE774280_inline(__this, L_1, NULL);
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
// System.Boolean VoxelBusters.CoreLibrary.FolderBrowserAttribute::get_UsesRelativePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FolderBrowserAttribute_get_UsesRelativePath_mA18922CF1728F5E82BBD44DFE23F5C778D6D3120 (FolderBrowserAttribute_t64304F0CFADEFA7A832F7F62A031A9408DA4520C* __this, const RuntimeMethod* method) 
{
	{
		// public bool UsesRelativePath { get; private set; }
		bool L_0 = __this->___U3CUsesRelativePathU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void VoxelBusters.CoreLibrary.FolderBrowserAttribute::set_UsesRelativePath(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FolderBrowserAttribute_set_UsesRelativePath_mD54C734753FD6D6F21E29CF0881748EC5A197696 (FolderBrowserAttribute_t64304F0CFADEFA7A832F7F62A031A9408DA4520C* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool UsesRelativePath { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CUsesRelativePathU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.FolderBrowserAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FolderBrowserAttribute__ctor_m28FFBE70F91F209BE5ED3C1F4509039A9B0C99A2 (FolderBrowserAttribute_t64304F0CFADEFA7A832F7F62A031A9408DA4520C* __this, bool ___0_usesRelativePath, const RuntimeMethod* method) 
{
	{
		// public FolderBrowserAttribute(bool usesRelativePath)
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// UsesRelativePath    = usesRelativePath;
		bool L_0 = ___0_usesRelativePath;
		FolderBrowserAttribute_set_UsesRelativePath_mD54C734753FD6D6F21E29CF0881748EC5A197696_inline(__this, L_0, NULL);
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
// System.Void VoxelBusters.CoreLibrary.IncludeInDocsAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncludeInDocsAttribute__ctor_m83D403B60F4C68D09D946CE2F983947C30335CD7 (IncludeInDocsAttribute_t4A5E9038AC7D99AF585456E495C7EA60B99FCAFC* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
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
// System.Type VoxelBusters.CoreLibrary.InterfaceFieldAttribute::get_InterfaceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* InterfaceFieldAttribute_get_InterfaceType_m4CE4BDAE6F34F7685C8CF68589ADEAA705C2AE38 (InterfaceFieldAttribute_tD02A2181D6171CD85C01C5B04D3D52410B2AE960* __this, const RuntimeMethod* method) 
{
	{
		// get;
		Type_t* L_0 = __this->___U3CInterfaceTypeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void VoxelBusters.CoreLibrary.InterfaceFieldAttribute::set_InterfaceType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterfaceFieldAttribute_set_InterfaceType_mC160AD1E515344445FAF90A22DABED5E859BA016 (InterfaceFieldAttribute_tD02A2181D6171CD85C01C5B04D3D52410B2AE960* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// private set;
		Type_t* L_0 = ___0_value;
		__this->___U3CInterfaceTypeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CInterfaceTypeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.InterfaceFieldAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterfaceFieldAttribute__ctor_m9ECCF24F90035CBC8B34D7D0BD1BAE57C2E65BCD (InterfaceFieldAttribute_tD02A2181D6171CD85C01C5B04D3D52410B2AE960* __this, Type_t* ___0_interfaceType, const RuntimeMethod* method) 
{
	{
		// public InterfaceFieldAttribute(Type interfaceType)
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// InterfaceType   = interfaceType;
		Type_t* L_0 = ___0_interfaceType;
		InterfaceFieldAttribute_set_InterfaceType_mC160AD1E515344445FAF90A22DABED5E859BA016_inline(__this, L_0, NULL);
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
// System.String VoxelBusters.CoreLibrary.StringPopupAttribute::get_PreferencePropertyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringPopupAttribute_get_PreferencePropertyName_mDBD9F036F1A0A6D8C5BA08C893FF277AB70F3CED (StringPopupAttribute_tE6EE825FCAEDBE24D412CC293D8DB8AFEB93E536* __this, const RuntimeMethod* method) 
{
	{
		// public string PreferencePropertyName { get; private set; }
		String_t* L_0 = __this->___U3CPreferencePropertyNameU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void VoxelBusters.CoreLibrary.StringPopupAttribute::set_PreferencePropertyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringPopupAttribute_set_PreferencePropertyName_m0264FD1C4DE6A4C8F109B27D296D41312D17E80A (StringPopupAttribute_tE6EE825FCAEDBE24D412CC293D8DB8AFEB93E536* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string PreferencePropertyName { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CPreferencePropertyNameU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPreferencePropertyNameU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Boolean VoxelBusters.CoreLibrary.StringPopupAttribute::get_PreferencePropertyValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringPopupAttribute_get_PreferencePropertyValue_mE10729945869A0B0B9C21F15448033C7D53B76DA (StringPopupAttribute_tE6EE825FCAEDBE24D412CC293D8DB8AFEB93E536* __this, const RuntimeMethod* method) 
{
	{
		// public bool PreferencePropertyValue { get; private set; }
		bool L_0 = __this->___U3CPreferencePropertyValueU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void VoxelBusters.CoreLibrary.StringPopupAttribute::set_PreferencePropertyValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringPopupAttribute_set_PreferencePropertyValue_m836AE4DC5546E810DDB34F69D7EE13E5A88D919E (StringPopupAttribute_tE6EE825FCAEDBE24D412CC293D8DB8AFEB93E536* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool PreferencePropertyValue { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CPreferencePropertyValueU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Boolean VoxelBusters.CoreLibrary.StringPopupAttribute::get_UsesConstantOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringPopupAttribute_get_UsesConstantOptions_m9D9A513DC46F962A157CC05A938B3F61B267ADD4 (StringPopupAttribute_tE6EE825FCAEDBE24D412CC293D8DB8AFEB93E536* __this, const RuntimeMethod* method) 
{
	{
		// public bool UsesConstantOptions { get; private set; }
		bool L_0 = __this->___U3CUsesConstantOptionsU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void VoxelBusters.CoreLibrary.StringPopupAttribute::set_UsesConstantOptions(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringPopupAttribute_set_UsesConstantOptions_m6CF32F981516A772C9B24CF1FB55FCADB65D5890 (StringPopupAttribute_tE6EE825FCAEDBE24D412CC293D8DB8AFEB93E536* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool UsesConstantOptions { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CUsesConstantOptionsU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String[] VoxelBusters.CoreLibrary.StringPopupAttribute::get_Options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* StringPopupAttribute_get_Options_m8B573B360AB8856DBAF156823A7D23F359634900 (StringPopupAttribute_tE6EE825FCAEDBE24D412CC293D8DB8AFEB93E536* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringPopupAttribute_tE6EE825FCAEDBE24D412CC293D8DB8AFEB93E536_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_0 = NULL;
	{
		// var     options     = UsesConstantOptions ? m_constantOptions : GetDynamicOptions();
		bool L_0;
		L_0 = StringPopupAttribute_get_UsesConstantOptions_m9D9A513DC46F962A157CC05A938B3F61B267ADD4_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = VirtualFuncInvoker0< StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(7 /* System.String[] VoxelBusters.CoreLibrary.StringPopupAttribute::GetDynamicOptions() */, __this);
		G_B3_0 = L_1;
		goto IL_0016;
	}

IL_0010:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = __this->___m_constantOptions_1;
		G_B3_0 = L_2;
	}

IL_0016:
	{
		// return options ?? s_emptyOptions;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = G_B3_0;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StringPopupAttribute_tE6EE825FCAEDBE24D412CC293D8DB8AFEB93E536_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ((StringPopupAttribute_tE6EE825FCAEDBE24D412CC293D8DB8AFEB93E536_StaticFields*)il2cpp_codegen_static_fields_for(StringPopupAttribute_tE6EE825FCAEDBE24D412CC293D8DB8AFEB93E536_il2cpp_TypeInfo_var))->___s_emptyOptions_0;
		G_B5_0 = L_4;
	}

IL_001f:
	{
		return G_B5_0;
	}
}
// System.Void VoxelBusters.CoreLibrary.StringPopupAttribute::.ctor(System.String,System.Boolean,System.Boolean,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringPopupAttribute__ctor_m2D4FBF09814C51C8BF3F760A5FB365F7EAC50FC6 (StringPopupAttribute_tE6EE825FCAEDBE24D412CC293D8DB8AFEB93E536* __this, String_t* ___0_preferencePropertyName, bool ___1_preferencePropertyValue, bool ___2_usesConstantOptions, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___3_constantOptions, const RuntimeMethod* method) 
{
	{
		// public StringPopupAttribute(string preferencePropertyName = null, bool preferencePropertyValue = true, bool usesConstantOptions = true, params string[] constantOptions)
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// PreferencePropertyName  = preferencePropertyName;
		String_t* L_0 = ___0_preferencePropertyName;
		StringPopupAttribute_set_PreferencePropertyName_m0264FD1C4DE6A4C8F109B27D296D41312D17E80A_inline(__this, L_0, NULL);
		// PreferencePropertyValue = preferencePropertyValue;
		bool L_1 = ___1_preferencePropertyValue;
		StringPopupAttribute_set_PreferencePropertyValue_m836AE4DC5546E810DDB34F69D7EE13E5A88D919E_inline(__this, L_1, NULL);
		// UsesConstantOptions     = usesConstantOptions;
		bool L_2 = ___2_usesConstantOptions;
		StringPopupAttribute_set_UsesConstantOptions_m6CF32F981516A772C9B24CF1FB55FCADB65D5890_inline(__this, L_2, NULL);
		// m_constantOptions       = constantOptions;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___3_constantOptions;
		__this->___m_constantOptions_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_constantOptions_1), (void*)L_3);
		// }
		return;
	}
}
// System.String[] VoxelBusters.CoreLibrary.StringPopupAttribute::GetDynamicOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* StringPopupAttribute_GetDynamicOptions_m0870D96A6570FF7A03F38B6EBE3F70C804E78D67 (StringPopupAttribute_tE6EE825FCAEDBE24D412CC293D8DB8AFEB93E536* __this, const RuntimeMethod* method) 
{
	{
		// return null;
		return (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
	}
}
// System.Void VoxelBusters.CoreLibrary.StringPopupAttribute::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringPopupAttribute__cctor_mF5700D3F8FD5FC89201A1C4BF564FB1796C0C441 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringPopupAttribute_tE6EE825FCAEDBE24D412CC293D8DB8AFEB93E536_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private     static      string[]        s_emptyOptions      = new string[0];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)0);
		((StringPopupAttribute_tE6EE825FCAEDBE24D412CC293D8DB8AFEB93E536_StaticFields*)il2cpp_codegen_static_fields_for(StringPopupAttribute_tE6EE825FCAEDBE24D412CC293D8DB8AFEB93E536_il2cpp_TypeInfo_var))->___s_emptyOptions_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((StringPopupAttribute_tE6EE825FCAEDBE24D412CC293D8DB8AFEB93E536_StaticFields*)il2cpp_codegen_static_fields_for(StringPopupAttribute_tE6EE825FCAEDBE24D412CC293D8DB8AFEB93E536_il2cpp_TypeInfo_var))->___s_emptyOptions_0), (void*)L_0);
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
void Callback_Invoke_m5FD7518DBA221D5EB50AC047BC8F39278A2C9828_Multicast(Callback_t208DBAACB6E941FCFFB3FCCBD9B6D8036DCC3829* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Callback_t208DBAACB6E941FCFFB3FCCBD9B6D8036DCC3829* currentDelegate = reinterpret_cast<Callback_t208DBAACB6E941FCFFB3FCCBD9B6D8036DCC3829*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void Callback_Invoke_m5FD7518DBA221D5EB50AC047BC8F39278A2C9828_OpenInst(Callback_t208DBAACB6E941FCFFB3FCCBD9B6D8036DCC3829* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void Callback_Invoke_m5FD7518DBA221D5EB50AC047BC8F39278A2C9828_OpenStatic(Callback_t208DBAACB6E941FCFFB3FCCBD9B6D8036DCC3829* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void Callback_Invoke_m5FD7518DBA221D5EB50AC047BC8F39278A2C9828_OpenStaticInvoker(Callback_t208DBAACB6E941FCFFB3FCCBD9B6D8036DCC3829* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void Callback_Invoke_m5FD7518DBA221D5EB50AC047BC8F39278A2C9828_ClosedStaticInvoker(Callback_t208DBAACB6E941FCFFB3FCCBD9B6D8036DCC3829* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_Callback_t208DBAACB6E941FCFFB3FCCBD9B6D8036DCC3829 (Callback_t208DBAACB6E941FCFFB3FCCBD9B6D8036DCC3829* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void VoxelBusters.CoreLibrary.Callback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback__ctor_m26D3966C0039DAB2B38584CEC380EDB73EC4D545 (Callback_t208DBAACB6E941FCFFB3FCCBD9B6D8036DCC3829* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Callback_Invoke_m5FD7518DBA221D5EB50AC047BC8F39278A2C9828_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Callback_Invoke_m5FD7518DBA221D5EB50AC047BC8F39278A2C9828_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Callback_Invoke_m5FD7518DBA221D5EB50AC047BC8F39278A2C9828_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&Callback_Invoke_m5FD7518DBA221D5EB50AC047BC8F39278A2C9828_Multicast;
}
// System.Void VoxelBusters.CoreLibrary.Callback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback_Invoke_m5FD7518DBA221D5EB50AC047BC8F39278A2C9828 (Callback_t208DBAACB6E941FCFFB3FCCBD9B6D8036DCC3829* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult VoxelBusters.CoreLibrary.Callback::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Callback_BeginInvoke_m4BB293CB32D9EB545068611530D253CDCB4A7BC0 (Callback_t208DBAACB6E941FCFFB3FCCBD9B6D8036DCC3829* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void VoxelBusters.CoreLibrary.Callback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Callback_EndInvoke_m24A3D284EC94FA3BE66318A7CAEDFEC9326C51C3 (Callback_t208DBAACB6E941FCFFB3FCCBD9B6D8036DCC3829* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void CompletionCallback_Invoke_mCA26D91460900D446A4976F7810083CB06BE89A6_Multicast(CompletionCallback_t012328C9E3710F3FE34906CDC694F8E177261A69* __this, Error_t141DBA81928651667910B46EE98D0BC82AA746D2* ___0_error, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CompletionCallback_t012328C9E3710F3FE34906CDC694F8E177261A69* currentDelegate = reinterpret_cast<CompletionCallback_t012328C9E3710F3FE34906CDC694F8E177261A69*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Error_t141DBA81928651667910B46EE98D0BC82AA746D2*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_error, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void CompletionCallback_Invoke_mCA26D91460900D446A4976F7810083CB06BE89A6_OpenInst(CompletionCallback_t012328C9E3710F3FE34906CDC694F8E177261A69* __this, Error_t141DBA81928651667910B46EE98D0BC82AA746D2* ___0_error, const RuntimeMethod* method)
{
	NullCheck(___0_error);
	typedef void (*FunctionPointerType) (Error_t141DBA81928651667910B46EE98D0BC82AA746D2*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_error, method);
}
void CompletionCallback_Invoke_mCA26D91460900D446A4976F7810083CB06BE89A6_OpenStatic(CompletionCallback_t012328C9E3710F3FE34906CDC694F8E177261A69* __this, Error_t141DBA81928651667910B46EE98D0BC82AA746D2* ___0_error, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Error_t141DBA81928651667910B46EE98D0BC82AA746D2*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_error, method);
}
void CompletionCallback_Invoke_mCA26D91460900D446A4976F7810083CB06BE89A6_OpenStaticInvoker(CompletionCallback_t012328C9E3710F3FE34906CDC694F8E177261A69* __this, Error_t141DBA81928651667910B46EE98D0BC82AA746D2* ___0_error, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Error_t141DBA81928651667910B46EE98D0BC82AA746D2* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_error);
}
void CompletionCallback_Invoke_mCA26D91460900D446A4976F7810083CB06BE89A6_ClosedStaticInvoker(CompletionCallback_t012328C9E3710F3FE34906CDC694F8E177261A69* __this, Error_t141DBA81928651667910B46EE98D0BC82AA746D2* ___0_error, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Error_t141DBA81928651667910B46EE98D0BC82AA746D2* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_error);
}
void CompletionCallback_Invoke_mCA26D91460900D446A4976F7810083CB06BE89A6_OpenVirtual(CompletionCallback_t012328C9E3710F3FE34906CDC694F8E177261A69* __this, Error_t141DBA81928651667910B46EE98D0BC82AA746D2* ___0_error, const RuntimeMethod* method)
{
	NullCheck(___0_error);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_error);
}
void CompletionCallback_Invoke_mCA26D91460900D446A4976F7810083CB06BE89A6_OpenInterface(CompletionCallback_t012328C9E3710F3FE34906CDC694F8E177261A69* __this, Error_t141DBA81928651667910B46EE98D0BC82AA746D2* ___0_error, const RuntimeMethod* method)
{
	NullCheck(___0_error);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_error);
}
void CompletionCallback_Invoke_mCA26D91460900D446A4976F7810083CB06BE89A6_OpenGenericVirtual(CompletionCallback_t012328C9E3710F3FE34906CDC694F8E177261A69* __this, Error_t141DBA81928651667910B46EE98D0BC82AA746D2* ___0_error, const RuntimeMethod* method)
{
	NullCheck(___0_error);
	GenericVirtualActionInvoker0::Invoke(method, ___0_error);
}
void CompletionCallback_Invoke_mCA26D91460900D446A4976F7810083CB06BE89A6_OpenGenericInterface(CompletionCallback_t012328C9E3710F3FE34906CDC694F8E177261A69* __this, Error_t141DBA81928651667910B46EE98D0BC82AA746D2* ___0_error, const RuntimeMethod* method)
{
	NullCheck(___0_error);
	GenericInterfaceActionInvoker0::Invoke(method, ___0_error);
}
// System.Void VoxelBusters.CoreLibrary.CompletionCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompletionCallback__ctor_mFC6A896754F2A6B2A9C5F312A7A9A579745ED0E7 (CompletionCallback_t012328C9E3710F3FE34906CDC694F8E177261A69* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CompletionCallback_Invoke_mCA26D91460900D446A4976F7810083CB06BE89A6_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CompletionCallback_Invoke_mCA26D91460900D446A4976F7810083CB06BE89A6_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CompletionCallback_Invoke_mCA26D91460900D446A4976F7810083CB06BE89A6_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&CompletionCallback_Invoke_mCA26D91460900D446A4976F7810083CB06BE89A6_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&CompletionCallback_Invoke_mCA26D91460900D446A4976F7810083CB06BE89A6_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&CompletionCallback_Invoke_mCA26D91460900D446A4976F7810083CB06BE89A6_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&CompletionCallback_Invoke_mCA26D91460900D446A4976F7810083CB06BE89A6_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&CompletionCallback_Invoke_mCA26D91460900D446A4976F7810083CB06BE89A6_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&CompletionCallback_Invoke_mCA26D91460900D446A4976F7810083CB06BE89A6_Multicast;
}
// System.Void VoxelBusters.CoreLibrary.CompletionCallback::Invoke(VoxelBusters.CoreLibrary.Error)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompletionCallback_Invoke_mCA26D91460900D446A4976F7810083CB06BE89A6 (CompletionCallback_t012328C9E3710F3FE34906CDC694F8E177261A69* __this, Error_t141DBA81928651667910B46EE98D0BC82AA746D2* ___0_error, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Error_t141DBA81928651667910B46EE98D0BC82AA746D2*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_error, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult VoxelBusters.CoreLibrary.CompletionCallback::BeginInvoke(VoxelBusters.CoreLibrary.Error,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CompletionCallback_BeginInvoke_m6645C3069C5565FBCC2B32A8BC1063D73BE0179D (CompletionCallback_t012328C9E3710F3FE34906CDC694F8E177261A69* __this, Error_t141DBA81928651667910B46EE98D0BC82AA746D2* ___0_error, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_error;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void VoxelBusters.CoreLibrary.CompletionCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompletionCallback_EndInvoke_m10D593C6F79105624B60ADA291877CE92D8E8806 (CompletionCallback_t012328C9E3710F3FE34906CDC694F8E177261A69* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ErrorCallback_Invoke_m5E519DA99C94B49431A9930B0AF6CE18C31D03DB_Multicast(ErrorCallback_tEC150015E5C4B20C8F011367A0224107A5CDA013* __this, Error_t141DBA81928651667910B46EE98D0BC82AA746D2* ___0_error, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ErrorCallback_tEC150015E5C4B20C8F011367A0224107A5CDA013* currentDelegate = reinterpret_cast<ErrorCallback_tEC150015E5C4B20C8F011367A0224107A5CDA013*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Error_t141DBA81928651667910B46EE98D0BC82AA746D2*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_error, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ErrorCallback_Invoke_m5E519DA99C94B49431A9930B0AF6CE18C31D03DB_OpenInst(ErrorCallback_tEC150015E5C4B20C8F011367A0224107A5CDA013* __this, Error_t141DBA81928651667910B46EE98D0BC82AA746D2* ___0_error, const RuntimeMethod* method)
{
	NullCheck(___0_error);
	typedef void (*FunctionPointerType) (Error_t141DBA81928651667910B46EE98D0BC82AA746D2*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_error, method);
}
void ErrorCallback_Invoke_m5E519DA99C94B49431A9930B0AF6CE18C31D03DB_OpenStatic(ErrorCallback_tEC150015E5C4B20C8F011367A0224107A5CDA013* __this, Error_t141DBA81928651667910B46EE98D0BC82AA746D2* ___0_error, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Error_t141DBA81928651667910B46EE98D0BC82AA746D2*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_error, method);
}
void ErrorCallback_Invoke_m5E519DA99C94B49431A9930B0AF6CE18C31D03DB_OpenStaticInvoker(ErrorCallback_tEC150015E5C4B20C8F011367A0224107A5CDA013* __this, Error_t141DBA81928651667910B46EE98D0BC82AA746D2* ___0_error, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Error_t141DBA81928651667910B46EE98D0BC82AA746D2* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_error);
}
void ErrorCallback_Invoke_m5E519DA99C94B49431A9930B0AF6CE18C31D03DB_ClosedStaticInvoker(ErrorCallback_tEC150015E5C4B20C8F011367A0224107A5CDA013* __this, Error_t141DBA81928651667910B46EE98D0BC82AA746D2* ___0_error, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Error_t141DBA81928651667910B46EE98D0BC82AA746D2* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_error);
}
void ErrorCallback_Invoke_m5E519DA99C94B49431A9930B0AF6CE18C31D03DB_OpenVirtual(ErrorCallback_tEC150015E5C4B20C8F011367A0224107A5CDA013* __this, Error_t141DBA81928651667910B46EE98D0BC82AA746D2* ___0_error, const RuntimeMethod* method)
{
	NullCheck(___0_error);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_error);
}
void ErrorCallback_Invoke_m5E519DA99C94B49431A9930B0AF6CE18C31D03DB_OpenInterface(ErrorCallback_tEC150015E5C4B20C8F011367A0224107A5CDA013* __this, Error_t141DBA81928651667910B46EE98D0BC82AA746D2* ___0_error, const RuntimeMethod* method)
{
	NullCheck(___0_error);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_error);
}
void ErrorCallback_Invoke_m5E519DA99C94B49431A9930B0AF6CE18C31D03DB_OpenGenericVirtual(ErrorCallback_tEC150015E5C4B20C8F011367A0224107A5CDA013* __this, Error_t141DBA81928651667910B46EE98D0BC82AA746D2* ___0_error, const RuntimeMethod* method)
{
	NullCheck(___0_error);
	GenericVirtualActionInvoker0::Invoke(method, ___0_error);
}
void ErrorCallback_Invoke_m5E519DA99C94B49431A9930B0AF6CE18C31D03DB_OpenGenericInterface(ErrorCallback_tEC150015E5C4B20C8F011367A0224107A5CDA013* __this, Error_t141DBA81928651667910B46EE98D0BC82AA746D2* ___0_error, const RuntimeMethod* method)
{
	NullCheck(___0_error);
	GenericInterfaceActionInvoker0::Invoke(method, ___0_error);
}
// System.Void VoxelBusters.CoreLibrary.ErrorCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorCallback__ctor_mB6D9572B923C7E1CBF30B3E6A4873FE7EB2F361E (ErrorCallback_tEC150015E5C4B20C8F011367A0224107A5CDA013* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ErrorCallback_Invoke_m5E519DA99C94B49431A9930B0AF6CE18C31D03DB_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ErrorCallback_Invoke_m5E519DA99C94B49431A9930B0AF6CE18C31D03DB_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ErrorCallback_Invoke_m5E519DA99C94B49431A9930B0AF6CE18C31D03DB_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ErrorCallback_Invoke_m5E519DA99C94B49431A9930B0AF6CE18C31D03DB_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ErrorCallback_Invoke_m5E519DA99C94B49431A9930B0AF6CE18C31D03DB_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ErrorCallback_Invoke_m5E519DA99C94B49431A9930B0AF6CE18C31D03DB_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ErrorCallback_Invoke_m5E519DA99C94B49431A9930B0AF6CE18C31D03DB_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ErrorCallback_Invoke_m5E519DA99C94B49431A9930B0AF6CE18C31D03DB_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ErrorCallback_Invoke_m5E519DA99C94B49431A9930B0AF6CE18C31D03DB_Multicast;
}
// System.Void VoxelBusters.CoreLibrary.ErrorCallback::Invoke(VoxelBusters.CoreLibrary.Error)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorCallback_Invoke_m5E519DA99C94B49431A9930B0AF6CE18C31D03DB (ErrorCallback_tEC150015E5C4B20C8F011367A0224107A5CDA013* __this, Error_t141DBA81928651667910B46EE98D0BC82AA746D2* ___0_error, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Error_t141DBA81928651667910B46EE98D0BC82AA746D2*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_error, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult VoxelBusters.CoreLibrary.ErrorCallback::BeginInvoke(VoxelBusters.CoreLibrary.Error,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ErrorCallback_BeginInvoke_mBA026A3BA66FC0E7887413DC18C19882523438FD (ErrorCallback_tEC150015E5C4B20C8F011367A0224107A5CDA013* __this, Error_t141DBA81928651667910B46EE98D0BC82AA746D2* ___0_error, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_error;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void VoxelBusters.CoreLibrary.ErrorCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorCallback_EndInvoke_m7A3686CC5C4D93C6EA003D636D58F8D11420D861 (ErrorCallback_tEC150015E5C4B20C8F011367A0224107A5CDA013* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// VoxelBusters.CoreLibrary.CallbackDispatcher VoxelBusters.CoreLibrary.CallbackDispatcher::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallbackDispatcher_t797023FD3F6E7D576CD46045544A3B308BB6BD5A* CallbackDispatcher_Initialize_m30655F0D584ABCC3CD6FA282EB7FA2BA89E224B6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrivateSingletonBehaviour_1_GetSingleton_m631220512B645DDEF08141C2908E632D2A3A4998_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrivateSingletonBehaviour_1_tC0AB1E707B32A027C82468088B94EBBDEC1684A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetSingleton();
		il2cpp_codegen_runtime_class_init_inline(PrivateSingletonBehaviour_1_tC0AB1E707B32A027C82468088B94EBBDEC1684A0_il2cpp_TypeInfo_var);
		CallbackDispatcher_t797023FD3F6E7D576CD46045544A3B308BB6BD5A* L_0;
		L_0 = PrivateSingletonBehaviour_1_GetSingleton_m631220512B645DDEF08141C2908E632D2A3A4998(PrivateSingletonBehaviour_1_GetSingleton_m631220512B645DDEF08141C2908E632D2A3A4998_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void VoxelBusters.CoreLibrary.CallbackDispatcher::InvokeOnMainThread(VoxelBusters.CoreLibrary.Callback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackDispatcher_InvokeOnMainThread_mD7F99CF7865BEA4B4C93AF8405C96A22AC76F5D3 (Callback_t208DBAACB6E941FCFFB3FCCBD9B6D8036DCC3829* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrivateSingletonBehaviour_1_GetSingleton_m631220512B645DDEF08141C2908E632D2A3A4998_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrivateSingletonBehaviour_1_tC0AB1E707B32A027C82468088B94EBBDEC1684A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CInvokeOnMainThreadU3Eb__0_mB9F8EFB4D8AEF00B7BA71C954EDEF5330C9D0D34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_t9DFBC76D8678A68449A483E07F3EAD8A4C11E9DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_t9DFBC76D8678A68449A483E07F3EAD8A4C11E9DA* V_0 = NULL;
	CallbackDispatcher_t797023FD3F6E7D576CD46045544A3B308BB6BD5A* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_t9DFBC76D8678A68449A483E07F3EAD8A4C11E9DA* L_0 = (U3CU3Ec__DisplayClass2_0_t9DFBC76D8678A68449A483E07F3EAD8A4C11E9DA*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t9DFBC76D8678A68449A483E07F3EAD8A4C11E9DA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass2_0__ctor_mE7BA2C98D8CD6A0DE7C12F657DB2B43F03607226(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_t9DFBC76D8678A68449A483E07F3EAD8A4C11E9DA* L_1 = V_0;
		Callback_t208DBAACB6E941FCFFB3FCCBD9B6D8036DCC3829* L_2 = ___0_callback;
		NullCheck(L_1);
		L_1->___callback_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___callback_0), (void*)L_2);
		// if (callback == null)
		U3CU3Ec__DisplayClass2_0_t9DFBC76D8678A68449A483E07F3EAD8A4C11E9DA* L_3 = V_0;
		NullCheck(L_3);
		Callback_t208DBAACB6E941FCFFB3FCCBD9B6D8036DCC3829* L_4 = L_3->___callback_0;
		if (L_4)
		{
			goto IL_0016;
		}
	}
	{
		// return;
		return;
	}

IL_0016:
	{
		// var     manager     = GetSingleton();
		il2cpp_codegen_runtime_class_init_inline(PrivateSingletonBehaviour_1_tC0AB1E707B32A027C82468088B94EBBDEC1684A0_il2cpp_TypeInfo_var);
		CallbackDispatcher_t797023FD3F6E7D576CD46045544A3B308BB6BD5A* L_5;
		L_5 = PrivateSingletonBehaviour_1_GetSingleton_m631220512B645DDEF08141C2908E632D2A3A4998(PrivateSingletonBehaviour_1_GetSingleton_m631220512B645DDEF08141C2908E632D2A3A4998_RuntimeMethod_var);
		V_1 = L_5;
		// if (manager)
		CallbackDispatcher_t797023FD3F6E7D576CD46045544A3B308BB6BD5A* L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_6, NULL);
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		// manager.AddAction(action: () => callback.Invoke());
		CallbackDispatcher_t797023FD3F6E7D576CD46045544A3B308BB6BD5A* L_8 = V_1;
		U3CU3Ec__DisplayClass2_0_t9DFBC76D8678A68449A483E07F3EAD8A4C11E9DA* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3CInvokeOnMainThreadU3Eb__0_mB9F8EFB4D8AEF00B7BA71C954EDEF5330C9D0D34_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		CallbackDispatcher_AddAction_m7AFB0DC545D659C4C90A48FBA2C629AAAFA3B9A9(L_8, L_10, NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.CallbackDispatcher::InvokeOnMainThread(VoxelBusters.CoreLibrary.CompletionCallback,VoxelBusters.CoreLibrary.Error)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackDispatcher_InvokeOnMainThread_m20F213415946DB46555492685ED8D2D609445FF0 (CompletionCallback_t012328C9E3710F3FE34906CDC694F8E177261A69* ___0_callback, Error_t141DBA81928651667910B46EE98D0BC82AA746D2* ___1_error, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrivateSingletonBehaviour_1_GetSingleton_m631220512B645DDEF08141C2908E632D2A3A4998_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrivateSingletonBehaviour_1_tC0AB1E707B32A027C82468088B94EBBDEC1684A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CInvokeOnMainThreadU3Eb__0_m248FB9D5ADFCF6EC2035BBF8B4F1EE8A54682CD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_tB23852084939BAC49D8BEBFC783459BE69B81F47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_tB23852084939BAC49D8BEBFC783459BE69B81F47* V_0 = NULL;
	CallbackDispatcher_t797023FD3F6E7D576CD46045544A3B308BB6BD5A* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_tB23852084939BAC49D8BEBFC783459BE69B81F47* L_0 = (U3CU3Ec__DisplayClass3_0_tB23852084939BAC49D8BEBFC783459BE69B81F47*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_tB23852084939BAC49D8BEBFC783459BE69B81F47_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass3_0__ctor_m131AB5C985299A640E3C4BB1F9BE94B28FB1397C(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_tB23852084939BAC49D8BEBFC783459BE69B81F47* L_1 = V_0;
		CompletionCallback_t012328C9E3710F3FE34906CDC694F8E177261A69* L_2 = ___0_callback;
		NullCheck(L_1);
		L_1->___callback_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___callback_0), (void*)L_2);
		U3CU3Ec__DisplayClass3_0_tB23852084939BAC49D8BEBFC783459BE69B81F47* L_3 = V_0;
		Error_t141DBA81928651667910B46EE98D0BC82AA746D2* L_4 = ___1_error;
		NullCheck(L_3);
		L_3->___error_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___error_1), (void*)L_4);
		// if (callback == null)
		U3CU3Ec__DisplayClass3_0_tB23852084939BAC49D8BEBFC783459BE69B81F47* L_5 = V_0;
		NullCheck(L_5);
		CompletionCallback_t012328C9E3710F3FE34906CDC694F8E177261A69* L_6 = L_5->___callback_0;
		if (L_6)
		{
			goto IL_001d;
		}
	}
	{
		// return;
		return;
	}

IL_001d:
	{
		// var     manager     = GetSingleton();
		il2cpp_codegen_runtime_class_init_inline(PrivateSingletonBehaviour_1_tC0AB1E707B32A027C82468088B94EBBDEC1684A0_il2cpp_TypeInfo_var);
		CallbackDispatcher_t797023FD3F6E7D576CD46045544A3B308BB6BD5A* L_7;
		L_7 = PrivateSingletonBehaviour_1_GetSingleton_m631220512B645DDEF08141C2908E632D2A3A4998(PrivateSingletonBehaviour_1_GetSingleton_m631220512B645DDEF08141C2908E632D2A3A4998_RuntimeMethod_var);
		V_1 = L_7;
		// if (manager)
		CallbackDispatcher_t797023FD3F6E7D576CD46045544A3B308BB6BD5A* L_8 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_8, NULL);
		if (!L_9)
		{
			goto IL_003d;
		}
	}
	{
		// manager.AddAction(action: () => callback.Invoke(error));
		CallbackDispatcher_t797023FD3F6E7D576CD46045544A3B308BB6BD5A* L_10 = V_1;
		U3CU3Ec__DisplayClass3_0_tB23852084939BAC49D8BEBFC783459BE69B81F47* L_11 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_12 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_12, L_11, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3CInvokeOnMainThreadU3Eb__0_m248FB9D5ADFCF6EC2035BBF8B4F1EE8A54682CD1_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		CallbackDispatcher_AddAction_m7AFB0DC545D659C4C90A48FBA2C629AAAFA3B9A9(L_10, L_12, NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.CallbackDispatcher::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackDispatcher_LateUpdate_m5481AEB804C912A3630141BE510ACB13010A0E3B (CallbackDispatcher_t797023FD3F6E7D576CD46045544A3B308BB6BD5A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			goto IL_0012_1;
		}

IL_0002_1:
		{
			// var     action  = m_queue.Dequeue();
			Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_0 = __this->___m_queue_10;
			NullCheck(L_0);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1;
			L_1 = Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E(L_0, Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E_RuntimeMethod_var);
			// action();
			NullCheck(L_1);
			Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_1, NULL);
		}

IL_0012_1:
		{
			// while (m_queue.Count > 0)
			Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_2 = __this->___m_queue_10;
			NullCheck(L_2);
			int32_t L_3;
			L_3 = Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_inline(L_2, Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_RuntimeMethod_var);
			if ((((int32_t)L_3) > ((int32_t)0)))
			{
				goto IL_0002_1;
			}
		}
		{
			// }
			goto IL_002a;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0022;
		}
		throw e;
	}

CATCH_0022:
	{// begin catch(System.Exception)
		// DebugLogger.LogException(expection);
		DebugLogger_LogException_m364F087AD666D272579E5EA51B11E8EA3AD0CAEE(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002a;
	}// end catch (depth: 1)

IL_002a:
	{
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.CallbackDispatcher::AddAction(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackDispatcher_AddAction_m7AFB0DC545D659C4C90A48FBA2C629AAAFA3B9A9 (CallbackDispatcher_t797023FD3F6E7D576CD46045544A3B308BB6BD5A* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_queue.Enqueue(action);
		Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_0 = __this->___m_queue_10;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ___0_action;
		NullCheck(L_0);
		Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4(L_0, L_1, Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.CallbackDispatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackDispatcher__ctor_m68AF13888B55679AE18B7AFE56D683393A395523 (CallbackDispatcher_t797023FD3F6E7D576CD46045544A3B308BB6BD5A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrivateSingletonBehaviour_1__ctor_mA7977FF10FBDEBDE15DBA7AF43321CEBFF27D5FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrivateSingletonBehaviour_1_tC0AB1E707B32A027C82468088B94EBBDEC1684A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private     Queue<Action>       m_queue         = new Queue<Action>();
		Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_0 = (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*)il2cpp_codegen_object_new(Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272(L_0, Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272_RuntimeMethod_var);
		__this->___m_queue_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_queue_10), (void*)L_0);
		il2cpp_codegen_runtime_class_init_inline(PrivateSingletonBehaviour_1_tC0AB1E707B32A027C82468088B94EBBDEC1684A0_il2cpp_TypeInfo_var);
		PrivateSingletonBehaviour_1__ctor_mA7977FF10FBDEBDE15DBA7AF43321CEBFF27D5FE(__this, PrivateSingletonBehaviour_1__ctor_mA7977FF10FBDEBDE15DBA7AF43321CEBFF27D5FE_RuntimeMethod_var);
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
// System.Void VoxelBusters.CoreLibrary.CallbackDispatcher/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mE7BA2C98D8CD6A0DE7C12F657DB2B43F03607226 (U3CU3Ec__DisplayClass2_0_t9DFBC76D8678A68449A483E07F3EAD8A4C11E9DA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.CallbackDispatcher/<>c__DisplayClass2_0::<InvokeOnMainThread>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3CInvokeOnMainThreadU3Eb__0_mB9F8EFB4D8AEF00B7BA71C954EDEF5330C9D0D34 (U3CU3Ec__DisplayClass2_0_t9DFBC76D8678A68449A483E07F3EAD8A4C11E9DA* __this, const RuntimeMethod* method) 
{
	{
		// manager.AddAction(action: () => callback.Invoke());
		Callback_t208DBAACB6E941FCFFB3FCCBD9B6D8036DCC3829* L_0 = __this->___callback_0;
		NullCheck(L_0);
		Callback_Invoke_m5FD7518DBA221D5EB50AC047BC8F39278A2C9828_inline(L_0, NULL);
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
// System.Void VoxelBusters.CoreLibrary.CallbackDispatcher/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m131AB5C985299A640E3C4BB1F9BE94B28FB1397C (U3CU3Ec__DisplayClass3_0_tB23852084939BAC49D8BEBFC783459BE69B81F47* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.CallbackDispatcher/<>c__DisplayClass3_0::<InvokeOnMainThread>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3CInvokeOnMainThreadU3Eb__0_m248FB9D5ADFCF6EC2035BBF8B4F1EE8A54682CD1 (U3CU3Ec__DisplayClass3_0_tB23852084939BAC49D8BEBFC783459BE69B81F47* __this, const RuntimeMethod* method) 
{
	{
		// manager.AddAction(action: () => callback.Invoke(error));
		CompletionCallback_t012328C9E3710F3FE34906CDC694F8E177261A69* L_0 = __this->___callback_0;
		Error_t141DBA81928651667910B46EE98D0BC82AA746D2* L_1 = __this->___error_1;
		NullCheck(L_0);
		CompletionCallback_Invoke_mCA26D91460900D446A4976F7810083CB06BE89A6_inline(L_0, L_1, NULL);
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
// System.Void VoxelBusters.CoreLibrary.MonoBehaviourZ::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourZ_Awake_m265BAFFF3D93A7155C2AD1632DB6A44F894B819B (MonoBehaviourZ_t0D5B385BCAEF4C970718D8CF02F13EC705E46FE1* __this, const RuntimeMethod* method) 
{
	{
		// EnsureInitialized();
		MonoBehaviourZ_EnsureInitialized_mEE1E31911F7495C6D3D22283843447CBCA03AB8C(__this, NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.MonoBehaviourZ::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourZ_Start_mDA5377CC28BBEA391371835C747850E659111259 (MonoBehaviourZ_t0D5B385BCAEF4C970718D8CF02F13EC705E46FE1* __this, const RuntimeMethod* method) 
{
	{
		// { }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.MonoBehaviourZ::EnsureInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourZ_EnsureInitialized_mEE1E31911F7495C6D3D22283843447CBCA03AB8C (MonoBehaviourZ_t0D5B385BCAEF4C970718D8CF02F13EC705E46FE1* __this, const RuntimeMethod* method) 
{
	{
		// if (m_isInitialized) return;
		bool L_0 = __this->___m_isInitialized_4;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (m_isInitialized) return;
		return;
	}

IL_0009:
	{
		// m_isInitialized = true;
		__this->___m_isInitialized_4 = (bool)1;
		// Init();
		VirtualActionInvoker0::Invoke(5 /* System.Void VoxelBusters.CoreLibrary.MonoBehaviourZ::Init() */, __this);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.MonoBehaviourZ::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourZ_Init_m307919971513E7C405135763CEF16ACC6D6F9A78 (MonoBehaviourZ_t0D5B385BCAEF4C970718D8CF02F13EC705E46FE1* __this, const RuntimeMethod* method) 
{
	{
		// { }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.MonoBehaviourZ::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourZ__ctor_m65A9A777BE0D4F3F4CAD4A8CFC30F252556D7902 (MonoBehaviourZ_t0D5B385BCAEF4C970718D8CF02F13EC705E46FE1* __this, const RuntimeMethod* method) 
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
// System.Void VoxelBusters.CoreLibrary.PersistentObject::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentObject_Awake_mB3F780D7D92080EE1A00202A4794D39780E33E22 (PersistentObject_t8C4A713018E63AFE4A80071AB24D54887DD256DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_0, NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.PersistentObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentObject__ctor_m5F35AF40135C26D76E41F8B0B6538C86624CC203 (PersistentObject_t8C4A713018E63AFE4A80071AB24D54887DD256DA* __this, const RuntimeMethod* method) 
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
// System.Void VoxelBusters.CoreLibrary.SurrogateCoroutine::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurrogateCoroutine_StartCoroutine_mCEADA24ECAFFDBE3773E45654F3FE95D1984F642 (RuntimeObject* ___0_routine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SurrogateCoroutine_t3A385DEC9095A708D48F1B3D0A33F0BA7F2CA48D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CreateSurrogateObject();
		SurrogateCoroutine_CreateSurrogateObject_m7C4BA6811F8B80C10EBCB4786C1483C5F451ACC7(NULL);
		// surrogateObject.StartCoroutine(routine);
		SurrogateBehaviour_tB3587D1A48FDB05726CBCAB154C817439D3FC87F* L_0 = ((SurrogateCoroutine_t3A385DEC9095A708D48F1B3D0A33F0BA7F2CA48D_StaticFields*)il2cpp_codegen_static_fields_for(SurrogateCoroutine_t3A385DEC9095A708D48F1B3D0A33F0BA7F2CA48D_il2cpp_TypeInfo_var))->___surrogateObject_0;
		RuntimeObject* L_1 = ___0_routine;
		NullCheck(L_0);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.SurrogateCoroutine::StopCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurrogateCoroutine_StopCoroutine_m063F5E1C9339A206845625A2E4FEA759C1F56D40 (RuntimeObject* ___0_routine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SurrogateCoroutine_t3A385DEC9095A708D48F1B3D0A33F0BA7F2CA48D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CreateSurrogateObject();
		SurrogateCoroutine_CreateSurrogateObject_m7C4BA6811F8B80C10EBCB4786C1483C5F451ACC7(NULL);
		// surrogateObject.StopCoroutine(routine);
		SurrogateBehaviour_tB3587D1A48FDB05726CBCAB154C817439D3FC87F* L_0 = ((SurrogateCoroutine_t3A385DEC9095A708D48F1B3D0A33F0BA7F2CA48D_StaticFields*)il2cpp_codegen_static_fields_for(SurrogateCoroutine_t3A385DEC9095A708D48F1B3D0A33F0BA7F2CA48D_il2cpp_TypeInfo_var))->___surrogateObject_0;
		RuntimeObject* L_1 = ___0_routine;
		NullCheck(L_0);
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.SurrogateCoroutine::WaitUntilAndInvoke(System.Func`1<System.Boolean>,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurrogateCoroutine_WaitUntilAndInvoke_m7F1B9B08C6E7255ABBE51DD0CEDD0DF7686931BD (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___0_predicate, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SurrogateCoroutine_t3A385DEC9095A708D48F1B3D0A33F0BA7F2CA48D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CreateSurrogateObject();
		SurrogateCoroutine_CreateSurrogateObject_m7C4BA6811F8B80C10EBCB4786C1483C5F451ACC7(NULL);
		// surrogateObject.StartCoroutine(WaitUntilAndInvokeInternal(predicate, action));
		SurrogateBehaviour_tB3587D1A48FDB05726CBCAB154C817439D3FC87F* L_0 = ((SurrogateCoroutine_t3A385DEC9095A708D48F1B3D0A33F0BA7F2CA48D_StaticFields*)il2cpp_codegen_static_fields_for(SurrogateCoroutine_t3A385DEC9095A708D48F1B3D0A33F0BA7F2CA48D_il2cpp_TypeInfo_var))->___surrogateObject_0;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_1 = ___0_predicate;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___1_action;
		RuntimeObject* L_3;
		L_3 = SurrogateCoroutine_WaitUntilAndInvokeInternal_m5008C364496DB1B2FAE6DE78923B1FC055BCD777(L_1, L_2, NULL);
		NullCheck(L_0);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.SurrogateCoroutine::WaitUntilAndInvoke(System.Collections.IEnumerator,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurrogateCoroutine_WaitUntilAndInvoke_mDC8A5145E2136D1C8931E6D23CB26089A355064C (RuntimeObject* ___0_coroutine, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SurrogateCoroutine_t3A385DEC9095A708D48F1B3D0A33F0BA7F2CA48D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CreateSurrogateObject();
		SurrogateCoroutine_CreateSurrogateObject_m7C4BA6811F8B80C10EBCB4786C1483C5F451ACC7(NULL);
		// surrogateObject.StartCoroutine(WaitUntilAndInvokeInternal(coroutine, action));
		SurrogateBehaviour_tB3587D1A48FDB05726CBCAB154C817439D3FC87F* L_0 = ((SurrogateCoroutine_t3A385DEC9095A708D48F1B3D0A33F0BA7F2CA48D_StaticFields*)il2cpp_codegen_static_fields_for(SurrogateCoroutine_t3A385DEC9095A708D48F1B3D0A33F0BA7F2CA48D_il2cpp_TypeInfo_var))->___surrogateObject_0;
		RuntimeObject* L_1 = ___0_coroutine;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___1_action;
		RuntimeObject* L_3;
		L_3 = SurrogateCoroutine_WaitUntilAndInvokeInternal_m39F0FDA58BF8D4CA594CB12BF340A28CCF64C8F7(L_1, L_2, NULL);
		NullCheck(L_0);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.SurrogateCoroutine::WaitUntilAndInvoke(UnityEngine.YieldInstruction,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurrogateCoroutine_WaitUntilAndInvoke_m77CB3C8DA0F78166C5493D1646055C7E3C2EC020 (YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D* ___0_instruction, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SurrogateCoroutine_t3A385DEC9095A708D48F1B3D0A33F0BA7F2CA48D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CreateSurrogateObject();
		SurrogateCoroutine_CreateSurrogateObject_m7C4BA6811F8B80C10EBCB4786C1483C5F451ACC7(NULL);
		// surrogateObject.StartCoroutine(WaitUntilAndInvokeInternal(instruction, action));
		SurrogateBehaviour_tB3587D1A48FDB05726CBCAB154C817439D3FC87F* L_0 = ((SurrogateCoroutine_t3A385DEC9095A708D48F1B3D0A33F0BA7F2CA48D_StaticFields*)il2cpp_codegen_static_fields_for(SurrogateCoroutine_t3A385DEC9095A708D48F1B3D0A33F0BA7F2CA48D_il2cpp_TypeInfo_var))->___surrogateObject_0;
		YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D* L_1 = ___0_instruction;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___1_action;
		RuntimeObject* L_3;
		L_3 = SurrogateCoroutine_WaitUntilAndInvokeInternal_m22014F72831DB5E08F718762E7A72F2C84461BED(L_1, L_2, NULL);
		NullCheck(L_0);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.SurrogateCoroutine::WaitForEndOfFrameAndInvoke(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurrogateCoroutine_WaitForEndOfFrameAndInvoke_m6066AA0313F16A5C445702116C9AC099E73146A9 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SurrogateCoroutine_t3A385DEC9095A708D48F1B3D0A33F0BA7F2CA48D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CreateSurrogateObject();
		SurrogateCoroutine_CreateSurrogateObject_m7C4BA6811F8B80C10EBCB4786C1483C5F451ACC7(NULL);
		// surrogateObject.StartCoroutine(WaitUntilAndInvokeInternal(new WaitForEndOfFrame(), action));
		SurrogateBehaviour_tB3587D1A48FDB05726CBCAB154C817439D3FC87F* L_0 = ((SurrogateCoroutine_t3A385DEC9095A708D48F1B3D0A33F0BA7F2CA48D_StaticFields*)il2cpp_codegen_static_fields_for(SurrogateCoroutine_t3A385DEC9095A708D48F1B3D0A33F0BA7F2CA48D_il2cpp_TypeInfo_var))->___surrogateObject_0;
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_1 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_1, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___0_action;
		RuntimeObject* L_3;
		L_3 = SurrogateCoroutine_WaitUntilAndInvokeInternal_m22014F72831DB5E08F718762E7A72F2C84461BED(L_1, L_2, NULL);
		NullCheck(L_0);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.SurrogateCoroutine::Invoke(System.Action,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurrogateCoroutine_Invoke_m25D0408DEF44C11AF55FAD09CA918AFC6AC0D885 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, float ___1_delay, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SurrogateCoroutine_t3A385DEC9095A708D48F1B3D0A33F0BA7F2CA48D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CreateSurrogateObject();
		SurrogateCoroutine_CreateSurrogateObject_m7C4BA6811F8B80C10EBCB4786C1483C5F451ACC7(NULL);
		// surrogateObject.StartCoroutine(WaitUntilAndInvokeInternal(new WaitForSeconds(delay), action));
		SurrogateBehaviour_tB3587D1A48FDB05726CBCAB154C817439D3FC87F* L_0 = ((SurrogateCoroutine_t3A385DEC9095A708D48F1B3D0A33F0BA7F2CA48D_StaticFields*)il2cpp_codegen_static_fields_for(SurrogateCoroutine_t3A385DEC9095A708D48F1B3D0A33F0BA7F2CA48D_il2cpp_TypeInfo_var))->___surrogateObject_0;
		float L_1 = ___1_delay;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_2 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_2, L_1, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_action;
		RuntimeObject* L_4;
		L_4 = SurrogateCoroutine_WaitUntilAndInvokeInternal_m22014F72831DB5E08F718762E7A72F2C84461BED(L_2, L_3, NULL);
		NullCheck(L_0);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_0, L_4, NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.SurrogateCoroutine::CreateSurrogateObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurrogateCoroutine_CreateSurrogateObject_m7C4BA6811F8B80C10EBCB4786C1483C5F451ACC7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSurrogateBehaviour_tB3587D1A48FDB05726CBCAB154C817439D3FC87F_m97D695C2AD527F5457EDB04F3DE65D930627201E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SurrogateCoroutine_t3A385DEC9095A708D48F1B3D0A33F0BA7F2CA48D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B9B2ADA4EFFFEF80A151CFD93CC3418C8909A39);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (surrogateObject == null)
		SurrogateBehaviour_tB3587D1A48FDB05726CBCAB154C817439D3FC87F* L_0 = ((SurrogateCoroutine_t3A385DEC9095A708D48F1B3D0A33F0BA7F2CA48D_StaticFields*)il2cpp_codegen_static_fields_for(SurrogateCoroutine_t3A385DEC9095A708D48F1B3D0A33F0BA7F2CA48D_il2cpp_TypeInfo_var))->___surrogateObject_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		// var     newGO        = new GameObject("Surrogate");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_2, _stringLiteral9B9B2ADA4EFFFEF80A151CFD93CC3418C8909A39, NULL);
		// newGO.hideFlags        = HideFlags.HideInHierarchy;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2;
		NullCheck(L_3);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_3, 1, NULL);
		// UnityObject.DontDestroyOnLoad(newGO);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_4, NULL);
		// surrogateObject        = newGO.AddComponent<SurrogateBehaviour>();
		NullCheck(L_4);
		SurrogateBehaviour_tB3587D1A48FDB05726CBCAB154C817439D3FC87F* L_5;
		L_5 = GameObject_AddComponent_TisSurrogateBehaviour_tB3587D1A48FDB05726CBCAB154C817439D3FC87F_m97D695C2AD527F5457EDB04F3DE65D930627201E(L_4, GameObject_AddComponent_TisSurrogateBehaviour_tB3587D1A48FDB05726CBCAB154C817439D3FC87F_m97D695C2AD527F5457EDB04F3DE65D930627201E_RuntimeMethod_var);
		((SurrogateCoroutine_t3A385DEC9095A708D48F1B3D0A33F0BA7F2CA48D_StaticFields*)il2cpp_codegen_static_fields_for(SurrogateCoroutine_t3A385DEC9095A708D48F1B3D0A33F0BA7F2CA48D_il2cpp_TypeInfo_var))->___surrogateObject_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((SurrogateCoroutine_t3A385DEC9095A708D48F1B3D0A33F0BA7F2CA48D_StaticFields*)il2cpp_codegen_static_fields_for(SurrogateCoroutine_t3A385DEC9095A708D48F1B3D0A33F0BA7F2CA48D_il2cpp_TypeInfo_var))->___surrogateObject_0), (void*)L_5);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator VoxelBusters.CoreLibrary.SurrogateCoroutine::WaitUntilAndInvokeInternal(System.Func`1<System.Boolean>,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SurrogateCoroutine_WaitUntilAndInvokeInternal_m5008C364496DB1B2FAE6DE78923B1FC055BCD777 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___0_predicate, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitUntilAndInvokeInternalU3Ed__9_t4AE3E19CB80F1C5B6D8427737301E381E275CDCB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitUntilAndInvokeInternalU3Ed__9_t4AE3E19CB80F1C5B6D8427737301E381E275CDCB* L_0 = (U3CWaitUntilAndInvokeInternalU3Ed__9_t4AE3E19CB80F1C5B6D8427737301E381E275CDCB*)il2cpp_codegen_object_new(U3CWaitUntilAndInvokeInternalU3Ed__9_t4AE3E19CB80F1C5B6D8427737301E381E275CDCB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaitUntilAndInvokeInternalU3Ed__9__ctor_mAEA92CBFA9EBC95BEB407A4D6510316D9E0AFA2C(L_0, 0, NULL);
		U3CWaitUntilAndInvokeInternalU3Ed__9_t4AE3E19CB80F1C5B6D8427737301E381E275CDCB* L_1 = L_0;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_2 = ___0_predicate;
		NullCheck(L_1);
		L_1->___predicate_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___predicate_2), (void*)L_2);
		U3CWaitUntilAndInvokeInternalU3Ed__9_t4AE3E19CB80F1C5B6D8427737301E381E275CDCB* L_3 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___1_action;
		NullCheck(L_3);
		L_3->___action_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___action_3), (void*)L_4);
		return L_3;
	}
}
// System.Collections.IEnumerator VoxelBusters.CoreLibrary.SurrogateCoroutine::WaitUntilAndInvokeInternal(System.Collections.IEnumerator,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SurrogateCoroutine_WaitUntilAndInvokeInternal_m39F0FDA58BF8D4CA594CB12BF340A28CCF64C8F7 (RuntimeObject* ___0_coroutine, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitUntilAndInvokeInternalU3Ed__10_t38F9279EB0913FE80AFEB4DE1934C9AEF07C81F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitUntilAndInvokeInternalU3Ed__10_t38F9279EB0913FE80AFEB4DE1934C9AEF07C81F9* L_0 = (U3CWaitUntilAndInvokeInternalU3Ed__10_t38F9279EB0913FE80AFEB4DE1934C9AEF07C81F9*)il2cpp_codegen_object_new(U3CWaitUntilAndInvokeInternalU3Ed__10_t38F9279EB0913FE80AFEB4DE1934C9AEF07C81F9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaitUntilAndInvokeInternalU3Ed__10__ctor_m721B9F4DFB03CD2839B75F5C9198307E2D4932F4(L_0, 0, NULL);
		U3CWaitUntilAndInvokeInternalU3Ed__10_t38F9279EB0913FE80AFEB4DE1934C9AEF07C81F9* L_1 = L_0;
		RuntimeObject* L_2 = ___0_coroutine;
		NullCheck(L_1);
		L_1->___coroutine_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___coroutine_2), (void*)L_2);
		U3CWaitUntilAndInvokeInternalU3Ed__10_t38F9279EB0913FE80AFEB4DE1934C9AEF07C81F9* L_3 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___1_action;
		NullCheck(L_3);
		L_3->___action_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___action_3), (void*)L_4);
		return L_3;
	}
}
// System.Collections.IEnumerator VoxelBusters.CoreLibrary.SurrogateCoroutine::WaitUntilAndInvokeInternal(UnityEngine.YieldInstruction,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SurrogateCoroutine_WaitUntilAndInvokeInternal_m22014F72831DB5E08F718762E7A72F2C84461BED (YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D* ___0_instruction, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitUntilAndInvokeInternalU3Ed__11_tFD190D50E9376E5CCF1CEF1E9C0829F76C224236_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitUntilAndInvokeInternalU3Ed__11_tFD190D50E9376E5CCF1CEF1E9C0829F76C224236* L_0 = (U3CWaitUntilAndInvokeInternalU3Ed__11_tFD190D50E9376E5CCF1CEF1E9C0829F76C224236*)il2cpp_codegen_object_new(U3CWaitUntilAndInvokeInternalU3Ed__11_tFD190D50E9376E5CCF1CEF1E9C0829F76C224236_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaitUntilAndInvokeInternalU3Ed__11__ctor_m6A18E65ECEB04FA55D43710A864873FA810781DB(L_0, 0, NULL);
		U3CWaitUntilAndInvokeInternalU3Ed__11_tFD190D50E9376E5CCF1CEF1E9C0829F76C224236* L_1 = L_0;
		YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D* L_2 = ___0_instruction;
		NullCheck(L_1);
		L_1->___instruction_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___instruction_2), (void*)L_2);
		U3CWaitUntilAndInvokeInternalU3Ed__11_tFD190D50E9376E5CCF1CEF1E9C0829F76C224236* L_3 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ___1_action;
		NullCheck(L_3);
		L_3->___action_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___action_3), (void*)L_4);
		return L_3;
	}
}
// System.Collections.IEnumerator VoxelBusters.CoreLibrary.SurrogateCoroutine::InvokeInternal(System.Action,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SurrogateCoroutine_InvokeInternal_m2FE77CBB756EA3EC2FFFCA58AD215ECF59040884 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, float ___1_delay, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInvokeInternalU3Ed__12_t76BF7EBEB21AA23BDFA05E47F80FA97A24BB5FE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CInvokeInternalU3Ed__12_t76BF7EBEB21AA23BDFA05E47F80FA97A24BB5FE5* L_0 = (U3CInvokeInternalU3Ed__12_t76BF7EBEB21AA23BDFA05E47F80FA97A24BB5FE5*)il2cpp_codegen_object_new(U3CInvokeInternalU3Ed__12_t76BF7EBEB21AA23BDFA05E47F80FA97A24BB5FE5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CInvokeInternalU3Ed__12__ctor_mD316A9F3CCB4F9E12B2EF5B8E8A51F108892C074(L_0, 0, NULL);
		U3CInvokeInternalU3Ed__12_t76BF7EBEB21AA23BDFA05E47F80FA97A24BB5FE5* L_1 = L_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___0_action;
		NullCheck(L_1);
		L_1->___action_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___action_3), (void*)L_2);
		U3CInvokeInternalU3Ed__12_t76BF7EBEB21AA23BDFA05E47F80FA97A24BB5FE5* L_3 = L_1;
		float L_4 = ___1_delay;
		NullCheck(L_3);
		L_3->___delay_2 = L_4;
		return L_3;
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
// System.Void VoxelBusters.CoreLibrary.SurrogateCoroutine/SurrogateBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurrogateBehaviour__ctor_m300AE5352B7B74C1DF28846158FF73787DB12862 (SurrogateBehaviour_tB3587D1A48FDB05726CBCAB154C817439D3FC87F* __this, const RuntimeMethod* method) 
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
// System.Void VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitUntilAndInvokeInternalU3Ed__9__ctor_mAEA92CBFA9EBC95BEB407A4D6510316D9E0AFA2C (U3CWaitUntilAndInvokeInternalU3Ed__9_t4AE3E19CB80F1C5B6D8427737301E381E275CDCB* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitUntilAndInvokeInternalU3Ed__9_System_IDisposable_Dispose_m98F2EEE7344C61F589635B638F1E76E52F958DDE (U3CWaitUntilAndInvokeInternalU3Ed__9_t4AE3E19CB80F1C5B6D8427737301E381E275CDCB* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitUntilAndInvokeInternalU3Ed__9_MoveNext_mB63D68A6D31DA37E07F89923DA2082E3512B5AEB (U3CWaitUntilAndInvokeInternalU3Ed__9_t4AE3E19CB80F1C5B6D8427737301E381E275CDCB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
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
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitUntil(predicate);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_3 = __this->___predicate_2;
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_4 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_4, L_3, NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0031:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// action();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = __this->___action_3;
		NullCheck(L_5);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_5, NULL);
		// }
		return (bool)0;
	}
}
// System.Object VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitUntilAndInvokeInternalU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4EB66145EA1F6E723C61D308FD677B40689D0629 (U3CWaitUntilAndInvokeInternalU3Ed__9_t4AE3E19CB80F1C5B6D8427737301E381E275CDCB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitUntilAndInvokeInternalU3Ed__9_System_Collections_IEnumerator_Reset_mAA930D92F41F405EF7FC8988EAE33FEF0A5A952E (U3CWaitUntilAndInvokeInternalU3Ed__9_t4AE3E19CB80F1C5B6D8427737301E381E275CDCB* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitUntilAndInvokeInternalU3Ed__9_System_Collections_IEnumerator_Reset_mAA930D92F41F405EF7FC8988EAE33FEF0A5A952E_RuntimeMethod_var)));
	}
}
// System.Object VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitUntilAndInvokeInternalU3Ed__9_System_Collections_IEnumerator_get_Current_m24793A23C3846D55B3B39C4853FE5C3C504C06E0 (U3CWaitUntilAndInvokeInternalU3Ed__9_t4AE3E19CB80F1C5B6D8427737301E381E275CDCB* __this, const RuntimeMethod* method) 
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
// System.Void VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitUntilAndInvokeInternalU3Ed__10__ctor_m721B9F4DFB03CD2839B75F5C9198307E2D4932F4 (U3CWaitUntilAndInvokeInternalU3Ed__10_t38F9279EB0913FE80AFEB4DE1934C9AEF07C81F9* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitUntilAndInvokeInternalU3Ed__10_System_IDisposable_Dispose_mF1FA51262FD6BE2550273ED377427EA2E4D33EB2 (U3CWaitUntilAndInvokeInternalU3Ed__10_t38F9279EB0913FE80AFEB4DE1934C9AEF07C81F9* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitUntilAndInvokeInternalU3Ed__10_MoveNext_mDFCA852B43FD4FC03D18B193C206451FAD4D023E (U3CWaitUntilAndInvokeInternalU3Ed__10_t38F9279EB0913FE80AFEB4DE1934C9AEF07C81F9* __this, const RuntimeMethod* method) 
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
			goto IL_002c;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return coroutine;
		RuntimeObject* L_3 = __this->___coroutine_2;
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_002c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// action();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = __this->___action_3;
		NullCheck(L_4);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_4, NULL);
		// }
		return (bool)0;
	}
}
// System.Object VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitUntilAndInvokeInternalU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA776694BF04132371AAB33746AFE018253C050A5 (U3CWaitUntilAndInvokeInternalU3Ed__10_t38F9279EB0913FE80AFEB4DE1934C9AEF07C81F9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitUntilAndInvokeInternalU3Ed__10_System_Collections_IEnumerator_Reset_m043D599682EF5ABD831281ACD609B1849E27CE52 (U3CWaitUntilAndInvokeInternalU3Ed__10_t38F9279EB0913FE80AFEB4DE1934C9AEF07C81F9* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitUntilAndInvokeInternalU3Ed__10_System_Collections_IEnumerator_Reset_m043D599682EF5ABD831281ACD609B1849E27CE52_RuntimeMethod_var)));
	}
}
// System.Object VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitUntilAndInvokeInternalU3Ed__10_System_Collections_IEnumerator_get_Current_m4763957EB2FC601CA57F22361C464323C60C2587 (U3CWaitUntilAndInvokeInternalU3Ed__10_t38F9279EB0913FE80AFEB4DE1934C9AEF07C81F9* __this, const RuntimeMethod* method) 
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
// System.Void VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitUntilAndInvokeInternalU3Ed__11__ctor_m6A18E65ECEB04FA55D43710A864873FA810781DB (U3CWaitUntilAndInvokeInternalU3Ed__11_tFD190D50E9376E5CCF1CEF1E9C0829F76C224236* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitUntilAndInvokeInternalU3Ed__11_System_IDisposable_Dispose_m0B2BF34037EE983FAB91C49B79AD5E4C888C4C68 (U3CWaitUntilAndInvokeInternalU3Ed__11_tFD190D50E9376E5CCF1CEF1E9C0829F76C224236* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitUntilAndInvokeInternalU3Ed__11_MoveNext_mAEBDDA0F0AC731815D124FAB1EC33B561187C86C (U3CWaitUntilAndInvokeInternalU3Ed__11_tFD190D50E9376E5CCF1CEF1E9C0829F76C224236* __this, const RuntimeMethod* method) 
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
			goto IL_002c;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return instruction;
		YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D* L_3 = __this->___instruction_2;
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_002c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// action();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = __this->___action_3;
		NullCheck(L_4);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_4, NULL);
		// }
		return (bool)0;
	}
}
// System.Object VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitUntilAndInvokeInternalU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2DBF0E03C806407A11EA38925A324A87A2DF37C9 (U3CWaitUntilAndInvokeInternalU3Ed__11_tFD190D50E9376E5CCF1CEF1E9C0829F76C224236* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitUntilAndInvokeInternalU3Ed__11_System_Collections_IEnumerator_Reset_m0593C6C6B0EE8AF6BF1E954768A41CD3C7A89673 (U3CWaitUntilAndInvokeInternalU3Ed__11_tFD190D50E9376E5CCF1CEF1E9C0829F76C224236* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitUntilAndInvokeInternalU3Ed__11_System_Collections_IEnumerator_Reset_m0593C6C6B0EE8AF6BF1E954768A41CD3C7A89673_RuntimeMethod_var)));
	}
}
// System.Object VoxelBusters.CoreLibrary.SurrogateCoroutine/<WaitUntilAndInvokeInternal>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitUntilAndInvokeInternalU3Ed__11_System_Collections_IEnumerator_get_Current_m814637F3DCC6D177976060EA9AA046C810EEB622 (U3CWaitUntilAndInvokeInternalU3Ed__11_tFD190D50E9376E5CCF1CEF1E9C0829F76C224236* __this, const RuntimeMethod* method) 
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
// System.Void VoxelBusters.CoreLibrary.SurrogateCoroutine/<InvokeInternal>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInvokeInternalU3Ed__12__ctor_mD316A9F3CCB4F9E12B2EF5B8E8A51F108892C074 (U3CInvokeInternalU3Ed__12_t76BF7EBEB21AA23BDFA05E47F80FA97A24BB5FE5* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.SurrogateCoroutine/<InvokeInternal>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInvokeInternalU3Ed__12_System_IDisposable_Dispose_m295F846C262E63CDB3A27C68311EF64A726A5A2D (U3CInvokeInternalU3Ed__12_t76BF7EBEB21AA23BDFA05E47F80FA97A24BB5FE5* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean VoxelBusters.CoreLibrary.SurrogateCoroutine/<InvokeInternal>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CInvokeInternalU3Ed__12_MoveNext_m1770E52A14F4CA9C92DA6503C5CAC7CE9E95E47A (U3CInvokeInternalU3Ed__12_t76BF7EBEB21AA23BDFA05E47F80FA97A24BB5FE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
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
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(delay);
		float L_3 = __this->___delay_2;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, L_3, NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0031:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// action();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = __this->___action_3;
		NullCheck(L_5);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_5, NULL);
		// }
		return (bool)0;
	}
}
// System.Object VoxelBusters.CoreLibrary.SurrogateCoroutine/<InvokeInternal>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CInvokeInternalU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m87F625D8D412048DD9A9E81D596B3E95D8823197 (U3CInvokeInternalU3Ed__12_t76BF7EBEB21AA23BDFA05E47F80FA97A24BB5FE5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void VoxelBusters.CoreLibrary.SurrogateCoroutine/<InvokeInternal>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInvokeInternalU3Ed__12_System_Collections_IEnumerator_Reset_mDD50D37F235694B602EC0B73647F8981B671BCC5 (U3CInvokeInternalU3Ed__12_t76BF7EBEB21AA23BDFA05E47F80FA97A24BB5FE5* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CInvokeInternalU3Ed__12_System_Collections_IEnumerator_Reset_mDD50D37F235694B602EC0B73647F8981B671BCC5_RuntimeMethod_var)));
	}
}
// System.Object VoxelBusters.CoreLibrary.SurrogateCoroutine/<InvokeInternal>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CInvokeInternalU3Ed__12_System_Collections_IEnumerator_get_Current_m357490A40212BCB5CEF8CCE89AF89F64731DD6FA (U3CInvokeInternalU3Ed__12_t76BF7EBEB21AA23BDFA05E47F80FA97A24BB5FE5* __this, const RuntimeMethod* method) 
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
// System.Byte[] VoxelBusters.CoreLibrary.Asset::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Asset_get_Data_m01826EF78C24FAFDD1E55629A95B715C93F16891 (Asset_t7CD7395B84CF4879BA158B4B56779849378B06EF* __this, const RuntimeMethod* method) 
{
	{
		// public byte[] Data { get; private set; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CDataU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void VoxelBusters.CoreLibrary.Asset::set_Data(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asset_set_Data_m795834BEFB440CF053CA40D43E61C17EE04135EB (Asset_t7CD7395B84CF4879BA158B4B56779849378B06EF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	{
		// public byte[] Data { get; private set; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		__this->___U3CDataU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String VoxelBusters.CoreLibrary.Asset::get_MimeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asset_get_MimeType_m438AC2C684A427E0E3E584D38A0D2C0CC91B013E (Asset_t7CD7395B84CF4879BA158B4B56779849378B06EF* __this, const RuntimeMethod* method) 
{
	{
		// public string MimeType { get; private set; }
		String_t* L_0 = __this->___U3CMimeTypeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void VoxelBusters.CoreLibrary.Asset::set_MimeType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asset_set_MimeType_m6B6C5FD1D001A4B0F04BD25182D0A2E03633A8DC (Asset_t7CD7395B84CF4879BA158B4B56779849378B06EF* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string MimeType { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CMimeTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMimeTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String VoxelBusters.CoreLibrary.Asset::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Asset_get_Name_m0A3CA82A7C3AE39E57F0CA179B8832000873A977 (Asset_t7CD7395B84CF4879BA158B4B56779849378B06EF* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void VoxelBusters.CoreLibrary.Asset::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asset_set_Name_mD6C27F9F97DA9E66AEF64C2A68280CC681EC535C (Asset_t7CD7395B84CF4879BA158B4B56779849378B06EF* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.Asset::.ctor(System.Byte[],System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Asset__ctor_mBEEAD0A7A1FD03B9CC2A622C140AD519CFB7617A (Asset_t7CD7395B84CF4879BA158B4B56779849378B06EF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, String_t* ___1_mimeType, String_t* ___2_name, const RuntimeMethod* method) 
{
	{
		// public Asset(byte[] data, string mimeType, string name)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Data        = data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_data;
		Asset_set_Data_m795834BEFB440CF053CA40D43E61C17EE04135EB_inline(__this, L_0, NULL);
		// MimeType    = mimeType;
		String_t* L_1 = ___1_mimeType;
		Asset_set_MimeType_m6B6C5FD1D001A4B0F04BD25182D0A2E03633A8DC_inline(__this, L_1, NULL);
		// Name        = name;
		String_t* L_2 = ___2_name;
		Asset_set_Name_mD6C27F9F97DA9E66AEF64C2A68280CC681EC535C_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// VoxelBusters.CoreLibrary.Asset VoxelBusters.CoreLibrary.Asset::CreatePNGAsset(System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Asset_t7CD7395B84CF4879BA158B4B56779849378B06EF* Asset_CreatePNGAsset_mF667956A24500294A228622BACEF9DA4A944B603 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, String_t* ___1_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Asset_t7CD7395B84CF4879BA158B4B56779849378B06EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Asset(data, CoreLibrary.MimeType.kPNGImage, name);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_data;
		String_t* L_1 = ___1_name;
		Asset_t7CD7395B84CF4879BA158B4B56779849378B06EF* L_2 = (Asset_t7CD7395B84CF4879BA158B4B56779849378B06EF*)il2cpp_codegen_object_new(Asset_t7CD7395B84CF4879BA158B4B56779849378B06EF_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Asset__ctor_mBEEAD0A7A1FD03B9CC2A622C140AD519CFB7617A(L_2, L_0, _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821, L_1, NULL);
		return L_2;
	}
}
// VoxelBusters.CoreLibrary.Asset VoxelBusters.CoreLibrary.Asset::CreateJPGAsset(System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Asset_t7CD7395B84CF4879BA158B4B56779849378B06EF* Asset_CreateJPGAsset_mBA7C89098AD3087961980F119A7D213EDD170035 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, String_t* ___1_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Asset_t7CD7395B84CF4879BA158B4B56779849378B06EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Asset(data, CoreLibrary.MimeType.kJPGImage, name);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_data;
		String_t* L_1 = ___1_name;
		Asset_t7CD7395B84CF4879BA158B4B56779849378B06EF* L_2 = (Asset_t7CD7395B84CF4879BA158B4B56779849378B06EF*)il2cpp_codegen_object_new(Asset_t7CD7395B84CF4879BA158B4B56779849378B06EF_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Asset__ctor_mBEEAD0A7A1FD03B9CC2A622C140AD519CFB7617A(L_2, L_0, _stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC, L_1, NULL);
		return L_2;
	}
}
// VoxelBusters.CoreLibrary.Asset VoxelBusters.CoreLibrary.Asset::CreateMP4Asset(System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Asset_t7CD7395B84CF4879BA158B4B56779849378B06EF* Asset_CreateMP4Asset_m3A2D878CB749A0480E56DAD78092941CD4E86B8D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, String_t* ___1_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Asset_t7CD7395B84CF4879BA158B4B56779849378B06EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1ADA49DB1F06975314D080DCAEB46A68F8E74B0A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Asset(data, CoreLibrary.MimeType.kMP4Video, name);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_data;
		String_t* L_1 = ___1_name;
		Asset_t7CD7395B84CF4879BA158B4B56779849378B06EF* L_2 = (Asset_t7CD7395B84CF4879BA158B4B56779849378B06EF*)il2cpp_codegen_object_new(Asset_t7CD7395B84CF4879BA158B4B56779849378B06EF_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Asset__ctor_mBEEAD0A7A1FD03B9CC2A622C140AD519CFB7617A(L_2, L_0, _stringLiteral1ADA49DB1F06975314D080DCAEB46A68F8E74B0A, L_1, NULL);
		return L_2;
	}
}
// VoxelBusters.CoreLibrary.Asset VoxelBusters.CoreLibrary.Asset::CreatePDFAsset(System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Asset_t7CD7395B84CF4879BA158B4B56779849378B06EF* Asset_CreatePDFAsset_mA397ABFF6EDEE2673466A8C20AB4AFF9215CB816 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, String_t* ___1_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Asset_t7CD7395B84CF4879BA158B4B56779849378B06EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C3B309F02D3E20075338B0A23B20B59A0732941);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Asset(data, CoreLibrary.MimeType.kPDF, name);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_data;
		String_t* L_1 = ___1_name;
		Asset_t7CD7395B84CF4879BA158B4B56779849378B06EF* L_2 = (Asset_t7CD7395B84CF4879BA158B4B56779849378B06EF*)il2cpp_codegen_object_new(Asset_t7CD7395B84CF4879BA158B4B56779849378B06EF_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Asset__ctor_mBEEAD0A7A1FD03B9CC2A622C140AD519CFB7617A(L_2, L_0, _stringLiteral6C3B309F02D3E20075338B0A23B20B59A0732941, L_1, NULL);
		return L_2;
	}
}
// VoxelBusters.CoreLibrary.Asset VoxelBusters.CoreLibrary.Asset::CreateTextAsset(System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Asset_t7CD7395B84CF4879BA158B4B56779849378B06EF* Asset_CreateTextAsset_m6B6F3813A5B25849B7FE7DD817F8D38E5EDF3212 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, String_t* ___1_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Asset_t7CD7395B84CF4879BA158B4B56779849378B06EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67184A92CF8F6E59BA82AAF4A94C237CF2E0EB48);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Asset(data, CoreLibrary.MimeType.kPlainText, name);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_data;
		String_t* L_1 = ___1_name;
		Asset_t7CD7395B84CF4879BA158B4B56779849378B06EF* L_2 = (Asset_t7CD7395B84CF4879BA158B4B56779849378B06EF*)il2cpp_codegen_object_new(Asset_t7CD7395B84CF4879BA158B4B56779849378B06EF_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Asset__ctor_mBEEAD0A7A1FD03B9CC2A622C140AD519CFB7617A(L_2, L_0, _stringLiteral67184A92CF8F6E59BA82AAF4A94C237CF2E0EB48, L_1, NULL);
		return L_2;
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
// System.String VoxelBusters.CoreLibrary.Error::get_Domain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Error_get_Domain_m50DB0EFEA276C4AEA40BC2F1811DFE53F215B13C (Error_t141DBA81928651667910B46EE98D0BC82AA746D2* __this, const RuntimeMethod* method) 
{
	{
		// public string Domain { get; private set; }
		String_t* L_0 = __this->___U3CDomainU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void VoxelBusters.CoreLibrary.Error::set_Domain(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Error_set_Domain_m7A33F343589706C81648F7BE906D9F4C162CA4B3 (Error_t141DBA81928651667910B46EE98D0BC82AA746D2* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Domain { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CDomainU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDomainU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Int32 VoxelBusters.CoreLibrary.Error::get_Code()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Error_get_Code_mA0CADCCFFC4F11747133CD1D23AFF351F170A061 (Error_t141DBA81928651667910B46EE98D0BC82AA746D2* __this, const RuntimeMethod* method) 
{
	{
		// public int Code { get; private set; }
		int32_t L_0 = __this->___U3CCodeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void VoxelBusters.CoreLibrary.Error::set_Code(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Error_set_Code_m31572DDBF0FE76130760D0DAD7F4F44B69929037 (Error_t141DBA81928651667910B46EE98D0BC82AA746D2* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Code { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CCodeU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String VoxelBusters.CoreLibrary.Error::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Error_get_Description_m056AE5B740F749E34208B58C44D3C57BF1CF4050 (Error_t141DBA81928651667910B46EE98D0BC82AA746D2* __this, const RuntimeMethod* method) 
{
	{
		// public string Description { get; private set; }
		String_t* L_0 = __this->___U3CDescriptionU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void VoxelBusters.CoreLibrary.Error::set_Description(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Error_set_Description_m020DEBA45411298CE10D2743D70D319A0EE2C02B (Error_t141DBA81928651667910B46EE98D0BC82AA746D2* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Description { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CDescriptionU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDescriptionU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.Error::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Error__ctor_m3F2BFDE4C1781B9E6A6165661CADB428407ADA1A (Error_t141DBA81928651667910B46EE98D0BC82AA746D2* __this, String_t* ___0_description, const RuntimeMethod* method) 
{
	{
		// : this(domain: null, code: 0, description: description)
		String_t* L_0 = ___0_description;
		Error__ctor_m34C70CB7A6FC9EE936C47C40285A1F6F90F8C838(__this, (String_t*)NULL, 0, L_0, NULL);
		// { }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.Error::.ctor(System.String,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Error__ctor_m34C70CB7A6FC9EE936C47C40285A1F6F90F8C838 (Error_t141DBA81928651667910B46EE98D0BC82AA746D2* __this, String_t* ___0_domain, int32_t ___1_code, String_t* ___2_description, const RuntimeMethod* method) 
{
	{
		// public Error(string domain, int code, string description = null)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Domain          = domain;
		String_t* L_0 = ___0_domain;
		Error_set_Domain_m7A33F343589706C81648F7BE906D9F4C162CA4B3_inline(__this, L_0, NULL);
		// Code            = code;
		int32_t L_1 = ___1_code;
		Error_set_Code_m31572DDBF0FE76130760D0DAD7F4F44B69929037_inline(__this, L_1, NULL);
		// Description     = description;
		String_t* L_2 = ___2_description;
		Error_set_Description_m020DEBA45411298CE10D2743D70D319A0EE2C02B_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// VoxelBusters.CoreLibrary.Error VoxelBusters.CoreLibrary.Error::CreateNullableError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Error_t141DBA81928651667910B46EE98D0BC82AA746D2* Error_CreateNullableError_mFE731969492D1CF1BEBC88C037F118088F941D20 (String_t* ___0_description, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Error_t141DBA81928651667910B46EE98D0BC82AA746D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (description == null)
		String_t* L_0 = ___0_description;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return null;
		return (Error_t141DBA81928651667910B46EE98D0BC82AA746D2*)NULL;
	}

IL_0005:
	{
		// return new Error(description);
		String_t* L_1 = ___0_description;
		Error_t141DBA81928651667910B46EE98D0BC82AA746D2* L_2 = (Error_t141DBA81928651667910B46EE98D0BC82AA746D2*)il2cpp_codegen_object_new(Error_t141DBA81928651667910B46EE98D0BC82AA746D2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Error__ctor_m3F2BFDE4C1781B9E6A6165661CADB428407ADA1A(L_2, L_1, NULL);
		return L_2;
	}
}
// System.String VoxelBusters.CoreLibrary.Error::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Error_ToString_mEF9C082D51D7BBEB0A34FE801184423C66253DB4 (Error_t141DBA81928651667910B46EE98D0BC82AA746D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26FCC0FE25316EF00215493578621997875F8DA3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("Error Domain: {0} Code: {1} Description: {2}", Domain, Code, Description);
		String_t* L_0;
		L_0 = Error_get_Domain_m50DB0EFEA276C4AEA40BC2F1811DFE53F215B13C_inline(__this, NULL);
		int32_t L_1;
		L_1 = Error_get_Code_mA0CADCCFFC4F11747133CD1D23AFF351F170A061_inline(__this, NULL);
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = Error_get_Description_m056AE5B740F749E34208B58C44D3C57BF1CF4050_inline(__this, NULL);
		String_t* L_5;
		L_5 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral26FCC0FE25316EF00215493578621997875F8DA3, L_0, L_3, L_4, NULL);
		return L_5;
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
// System.Void VoxelBusters.CoreLibrary.KeyValueDataStore::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValueDataStore__ctor_mADC43E2A32B8360FB512D728CDA0B59128C4F111 (KeyValueDataStore_t81199FD1D06BE1FD793EB39DD5BA59FF147D4048* __this, String_t* ___0_savePath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* G_B2_0 = NULL;
	KeyValueDataStore_t81199FD1D06BE1FD793EB39DD5BA59FF147D4048* G_B2_1 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* G_B1_0 = NULL;
	KeyValueDataStore_t81199FD1D06BE1FD793EB39DD5BA59FF147D4048* G_B1_1 = NULL;
	{
		// public KeyValueDataStore(string savePath)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_dataCollection    = LoadDataFromPath(savePath) ?? new Dictionary<string, string>();
		String_t* L_0 = ___0_savePath;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1;
		L_1 = KeyValueDataStore_LoadDataFromPath_m6DA08BC5EFC76D65E8CC50F8C3EAF442FB063B14(__this, L_0, NULL);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = __this;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = __this;
			goto IL_0017;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_3, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		G_B2_0 = L_3;
		G_B2_1 = G_B1_1;
	}

IL_0017:
	{
		NullCheck(G_B2_1);
		G_B2_1->___m_dataCollection_0 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___m_dataCollection_0), (void*)G_B2_0);
		// m_savePath          = savePath;
		String_t* L_4 = ___0_savePath;
		__this->___m_savePath_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_savePath_1), (void*)L_4);
		// }
		return;
	}
}
// System.Boolean VoxelBusters.CoreLibrary.KeyValueDataStore::GetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyValueDataStore_GetBool_m920036128FAC4A9C5774E4BF68CA4B0693EFB49A (KeyValueDataStore_t81199FD1D06BE1FD793EB39DD5BA59FF147D4048* __this, String_t* ___0_key, bool ___1_defaultValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (m_dataCollection.TryGetValue(key, out string value))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___m_dataCollection_0;
		String_t* L_1 = ___0_key;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// return bool.Parse(value);
		String_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Boolean_Parse_mC9B4406FE9DA904E2B7D75267CAD38E837D39A6D(L_3, NULL);
		return L_4;
	}

IL_0017:
	{
		// return defaultValue;
		bool L_5 = ___1_defaultValue;
		return L_5;
	}
}
// System.Int64 VoxelBusters.CoreLibrary.KeyValueDataStore::GetLong(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t KeyValueDataStore_GetLong_m5AD0F20A1E73BFE6F33C181283D557EB7F76865A (KeyValueDataStore_t81199FD1D06BE1FD793EB39DD5BA59FF147D4048* __this, String_t* ___0_key, int64_t ___1_defaultValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (m_dataCollection.TryGetValue(key, out string value))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___m_dataCollection_0;
		String_t* L_1 = ___0_key;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// return long.Parse(value);
		String_t* L_3 = V_0;
		int64_t L_4;
		L_4 = Int64_Parse_m466621B41F074263D83527F8FC85405AEF6CDEE6(L_3, NULL);
		return L_4;
	}

IL_0017:
	{
		// return defaultValue;
		int64_t L_5 = ___1_defaultValue;
		return L_5;
	}
}
// System.Double VoxelBusters.CoreLibrary.KeyValueDataStore::GetDouble(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double KeyValueDataStore_GetDouble_mBF24F10A5D84F5CDBD8C88F799E814D69029BC22 (KeyValueDataStore_t81199FD1D06BE1FD793EB39DD5BA59FF147D4048* __this, String_t* ___0_key, double ___1_defaultValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (m_dataCollection.TryGetValue(key, out string value))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___m_dataCollection_0;
		String_t* L_1 = ___0_key;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// return double.Parse(value);
		String_t* L_3 = V_0;
		double L_4;
		L_4 = Double_Parse_mEBC644CE0C86A405283EC4839F872EF9E556670A(L_3, NULL);
		return L_4;
	}

IL_0017:
	{
		// return defaultValue;
		double L_5 = ___1_defaultValue;
		return L_5;
	}
}
// System.String VoxelBusters.CoreLibrary.KeyValueDataStore::GetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyValueDataStore_GetString_mEF369BFAEBA65BF664C2DBBEC3694E0B12101AB5 (KeyValueDataStore_t81199FD1D06BE1FD793EB39DD5BA59FF147D4048* __this, String_t* ___0_key, String_t* ___1_defaultValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (m_dataCollection.TryGetValue(key, out string value))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___m_dataCollection_0;
		String_t* L_1 = ___0_key;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		// return value;
		String_t* L_3 = V_0;
		return L_3;
	}

IL_0012:
	{
		// return defaultValue;
		String_t* L_4 = ___1_defaultValue;
		return L_4;
	}
}
// System.Byte[] VoxelBusters.CoreLibrary.KeyValueDataStore::GetByteArray(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyValueDataStore_GetByteArray_m447C306C8FBD7EB5FD436B1E62325DDC1446895B (KeyValueDataStore_t81199FD1D06BE1FD793EB39DD5BA59FF147D4048* __this, String_t* ___0_key, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_defaultValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (m_dataCollection.TryGetValue(key, out string value))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___m_dataCollection_0;
		String_t* L_1 = ___0_key;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// return System.Convert.FromBase64String(value);
		String_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_3, NULL);
		return L_4;
	}

IL_0017:
	{
		// return defaultValue;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___1_defaultValue;
		return L_5;
	}
}
// System.Void VoxelBusters.CoreLibrary.KeyValueDataStore::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValueDataStore_SetBool_m79F321A88695D711ECFF9AE340F8983FEB2A17D0 (KeyValueDataStore_t81199FD1D06BE1FD793EB39DD5BA59FF147D4048* __this, String_t* ___0_key, bool ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_dataCollection[key]   = value.ToString();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___m_dataCollection_0;
		String_t* L_1 = ___0_key;
		String_t* L_2;
		L_2 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&___1_value), NULL);
		NullCheck(L_0);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_0, L_1, L_2, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.KeyValueDataStore::SetLong(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValueDataStore_SetLong_m1DCA50730C6D29D18DF2C12D8B8ED7EDD84CDB76 (KeyValueDataStore_t81199FD1D06BE1FD793EB39DD5BA59FF147D4048* __this, String_t* ___0_key, int64_t ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_dataCollection[key]   = value.ToString();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___m_dataCollection_0;
		String_t* L_1 = ___0_key;
		String_t* L_2;
		L_2 = Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B((&___1_value), NULL);
		NullCheck(L_0);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_0, L_1, L_2, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.KeyValueDataStore::SetDouble(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValueDataStore_SetDouble_m8D2AA3A0FE5F25CF14E5AC16761DE88B9F0894ED (KeyValueDataStore_t81199FD1D06BE1FD793EB39DD5BA59FF147D4048* __this, String_t* ___0_key, double ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_dataCollection[key]   = value.ToString();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___m_dataCollection_0;
		String_t* L_1 = ___0_key;
		String_t* L_2;
		L_2 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339((&___1_value), NULL);
		NullCheck(L_0);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_0, L_1, L_2, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.KeyValueDataStore::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValueDataStore_SetString_mAFB251CD54C9E0E008B8BF2BD9EA5B5B16723087 (KeyValueDataStore_t81199FD1D06BE1FD793EB39DD5BA59FF147D4048* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_dataCollection[key]   = value;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___m_dataCollection_0;
		String_t* L_1 = ___0_key;
		String_t* L_2 = ___1_value;
		NullCheck(L_0);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_0, L_1, L_2, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.KeyValueDataStore::SetByteArray(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValueDataStore_SetByteArray_mC79ECEB3A219957400042DBC12F366DE27EDFA6A (KeyValueDataStore_t81199FD1D06BE1FD793EB39DD5BA59FF147D4048* __this, String_t* ___0_key, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_dataCollection[key]   = System.Convert.ToBase64String(value);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___m_dataCollection_0;
		String_t* L_1 = ___0_key;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323(L_2, NULL);
		NullCheck(L_0);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_0, L_1, L_3, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.KeyValueDataStore::Synchronize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValueDataStore_Synchronize_m3A3F8977B338782E98C9CA111404F4AEC92E3FA1 (KeyValueDataStore_t81199FD1D06BE1FD793EB39DD5BA59FF147D4048* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJsonServiceProvider_t75BD6CB8456740764289A21E90746F50D1552539_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string  jsonContent = ExternalServiceProvider.JsonServiceProvider.ToJson(m_dataCollection);
		RuntimeObject* L_0;
		L_0 = ExternalServiceProvider_get_JsonServiceProvider_m9C400AF74CA8D4FD07A4DA205529E862EB356DA9_inline(NULL);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = __this->___m_dataCollection_0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker1< String_t*, RuntimeObject* >::Invoke(0 /* System.String VoxelBusters.CoreLibrary.IJsonServiceProvider::ToJson(System.Object) */, IJsonServiceProvider_t75BD6CB8456740764289A21E90746F50D1552539_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		// IOServices.CreateFile(m_savePath, jsonContent);
		String_t* L_3 = __this->___m_savePath_1;
		String_t* L_4 = V_0;
		IOServices_CreateFile_m549D3DCEFB88D777D97E09D40A58C745231EB7D4(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.KeyValueDataStore::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValueDataStore_Clear_mC5852C7333BBFC2C10AC07C904DD5B99EB3B66EB (KeyValueDataStore_t81199FD1D06BE1FD793EB39DD5BA59FF147D4048* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m96A01966628B0B9F973D4E29050CC769B116A586_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_dataCollection.Clear();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___m_dataCollection_0;
		NullCheck(L_0);
		Dictionary_2_Clear_m96A01966628B0B9F973D4E29050CC769B116A586(L_0, Dictionary_2_Clear_m96A01966628B0B9F973D4E29050CC769B116A586_RuntimeMethod_var);
		// Synchronize();
		KeyValueDataStore_Synchronize_m3A3F8977B338782E98C9CA111404F4AEC92E3FA1(__this, NULL);
		// }
		return;
	}
}
// System.Boolean VoxelBusters.CoreLibrary.KeyValueDataStore::RemoveKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KeyValueDataStore_RemoveKey_mBB032404C58069D28BD4BCDE82CCADA1444C73C2 (KeyValueDataStore_t81199FD1D06BE1FD793EB39DD5BA59FF147D4048* __this, String_t* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mD816BB81544F3B37050A72FD7BA22E6A3D53BBFC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_dataCollection.Remove(key);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___m_dataCollection_0;
		String_t* L_1 = ___0_key;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_Remove_mD816BB81544F3B37050A72FD7BA22E6A3D53BBFC(L_0, L_1, Dictionary_2_Remove_mD816BB81544F3B37050A72FD7BA22E6A3D53BBFC_RuntimeMethod_var);
		return L_2;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> VoxelBusters.CoreLibrary.KeyValueDataStore::LoadDataFromPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* KeyValueDataStore_LoadDataFromPath_m6DA08BC5EFC76D65E8CC50F8C3EAF442FB063B14 (KeyValueDataStore_t81199FD1D06BE1FD793EB39DD5BA59FF147D4048* __this, String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJsonServiceProvider_t75BD6CB8456740764289A21E90746F50D1552539_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (!IOServices.FileExists(path)) return null;
		String_t* L_0 = ___0_path;
		bool L_1;
		L_1 = IOServices_FileExists_m671E8720CF69CFD1FD088DE87B7AF79014291DBF(L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		// if (!IOServices.FileExists(path)) return null;
		return (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)NULL;
	}

IL_000a:
	{
		// var     jsonContent = IOServices.ReadFile(path);
		String_t* L_2 = ___0_path;
		String_t* L_3;
		L_3 = IOServices_ReadFile_mD180335BE1AB1D7C474B281E934BC2C771399F42(L_2, NULL);
		V_0 = L_3;
		// return ExternalServiceProvider.JsonServiceProvider.FromJson(jsonContent) as Dictionary<string, string>;
		RuntimeObject* L_4;
		L_4 = ExternalServiceProvider_get_JsonServiceProvider_m9C400AF74CA8D4FD07A4DA205529E862EB356DA9_inline(NULL);
		String_t* L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(1 /* System.Object VoxelBusters.CoreLibrary.IJsonServiceProvider::FromJson(System.String) */, IJsonServiceProvider_t75BD6CB8456740764289A21E90746F50D1552539_il2cpp_TypeInfo_var, L_4, L_5);
		return ((Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)IsInstClass((RuntimeObject*)L_6, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var));
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
// System.String VoxelBusters.CoreLibrary.ReadableId::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadableId_get_Name_m0D60E965F07B45C695A098FCA3003CB75E18E968 (ReadableId_t388A2A0D4E4678410F44B0BA1B866668D9539F7D* __this, const RuntimeMethod* method) 
{
	{
		// public string Name => m_name;
		String_t* L_0 = __this->___m_name_0;
		return L_0;
	}
}
// System.String VoxelBusters.CoreLibrary.ReadableId::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadableId_get_Id_m431A67693EA5A26DB07FED193A36FDA45330C3C5 (ReadableId_t388A2A0D4E4678410F44B0BA1B866668D9539F7D* __this, const RuntimeMethod* method) 
{
	{
		// public string Id => m_id;
		String_t* L_0 = __this->___m_id_1;
		return L_0;
	}
}
// System.Void VoxelBusters.CoreLibrary.ReadableId::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadableId__ctor_m147ED06B5D39C44985F07F7E2CBFE7D747BC73C2 (ReadableId_t388A2A0D4E4678410F44B0BA1B866668D9539F7D* __this, String_t* ___0_name, String_t* ___1_id, const RuntimeMethod* method) 
{
	{
		// public ReadableId(string name, string id)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_name  = name;
		String_t* L_0 = ___0_name;
		__this->___m_name_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_name_0), (void*)L_0);
		// m_id    = id;
		String_t* L_1 = ___1_id;
		__this->___m_id_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_id_1), (void*)L_1);
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
// System.Void VoxelBusters.CoreLibrary.StringKeyValuePair::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringKeyValuePair__ctor_mCE919354F252535A9DDD4F8313407220E4B7D339 (StringKeyValuePair_t1572A4C9E11CA8E6695D9217F617E7E4856309DB* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializableKeyValuePair_2__ctor_m759AA068B34BF903262870EF5BAF7BC6FD2E1C01_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(key, value)
		String_t* L_0 = ___0_key;
		String_t* L_1 = ___1_value;
		SerializableKeyValuePair_2__ctor_m759AA068B34BF903262870EF5BAF7BC6FD2E1C01(__this, L_0, L_1, SerializableKeyValuePair_2__ctor_m759AA068B34BF903262870EF5BAF7BC6FD2E1C01_RuntimeMethod_var);
		// { }
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
// System.Void VoxelBusters.CoreLibrary.TextureData::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureData__ctor_m3FBD950C9066B449DC4E2564F5C19FDBC7FE4C89 (TextureData_tCD731E82783AA1C111A3A7D3D4ED9E49B6B8B320* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rawData, const RuntimeMethod* method) 
{
	{
		// public TextureData(byte[] rawData)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_rawData   = rawData;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_rawData;
		__this->___m_rawData_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_rawData_0), (void*)L_0);
		// m_texture   = null;
		__this->___m_texture_1 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_texture_1), (void*)(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.TextureData::.ctor(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureData__ctor_m89254F03AEF04F3429AD74EED504A2D7F70BF63B (TextureData_tCD731E82783AA1C111A3A7D3D4ED9E49B6B8B320* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, const RuntimeMethod* method) 
{
	{
		// public TextureData(Texture2D texture)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_rawData   = null;
		__this->___m_rawData_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_rawData_0), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		// m_texture   = texture;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___0_texture;
		__this->___m_texture_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_texture_1), (void*)L_0);
		// }
		return;
	}
}
// System.Byte[] VoxelBusters.CoreLibrary.TextureData::GetBytes(VoxelBusters.CoreLibrary.TextureEncodingFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TextureData_GetBytes_mCF6A5BA6FD04F262C875EA91C348239E5C7A5069 (TextureData_tCD731E82783AA1C111A3A7D3D4ED9E49B6B8B320* __this, int32_t ___0_format, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_rawData != null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___m_rawData_0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return m_rawData;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___m_rawData_0;
		return L_1;
	}

IL_000f:
	{
		// else if (m_texture != null)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = __this->___m_texture_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_4 = ___0_format;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_002d;
		}
	}
	{
		// return m_texture.EncodeToJPG();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5 = __this->___m_texture_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = ImageConversion_EncodeToJPG_mD3B358B8645CF85EBAD979554FFDE05A54A99804(L_5, NULL);
		return L_6;
	}

IL_002d:
	{
		// return m_texture.EncodeToPNG();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = __this->___m_texture_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = ImageConversion_EncodeToPNG_m0804AD31B83C653AEBB234F6CC31A02D4FA7C945(L_7, NULL);
		return L_8;
	}

IL_0039:
	{
		// throw new VBException("Unknown error");
		VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489* L_9 = (VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		VBException__ctor_mAA2CD9B68883BC301FE0F92D3CA53622A0345DB1(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF47527D7B72D5957FA184B6B1B6A7A1A9A56BF37)), (-1), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TextureData_GetBytes_mCF6A5BA6FD04F262C875EA91C348239E5C7A5069_RuntimeMethod_var)));
	}
}
// UnityEngine.Texture2D VoxelBusters.CoreLibrary.TextureData::GetTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TextureData_GetTexture_m75386431DB44B738F2B58E97057E0E27E3BF3984 (TextureData_tCD731E82783AA1C111A3A7D3D4ED9E49B6B8B320* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_texture != null)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->___m_texture_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// return m_texture;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = __this->___m_texture_1;
		return L_2;
	}

IL_0015:
	{
		// else if (m_rawData != null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___m_rawData_0;
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// m_texture   = CreateTexture(m_rawData);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___m_rawData_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5;
		L_5 = TextureData_CreateTexture_m833BD23EAC762691391E473C6D070E0A3E73240E(__this, L_4, NULL);
		__this->___m_texture_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_texture_1), (void*)L_5);
		// return m_texture;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = __this->___m_texture_1;
		return L_6;
	}

IL_0036:
	{
		// throw new VBException("Unknown error");
		VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489* L_7 = (VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		VBException__ctor_mAA2CD9B68883BC301FE0F92D3CA53622A0345DB1(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF47527D7B72D5957FA184B6B1B6A7A1A9A56BF37)), (-1), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TextureData_GetTexture_m75386431DB44B738F2B58E97057E0E27E3BF3984_RuntimeMethod_var)));
	}
}
// UnityEngine.Texture2D VoxelBusters.CoreLibrary.TextureData::CreateTexture(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* TextureData_CreateTexture_m833BD23EAC762691391E473C6D070E0A3E73240E (TextureData_tCD731E82783AA1C111A3A7D3D4ED9E49B6B8B320* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var     newTexture  = new Texture2D(4, 4);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796(L_0, 4, 4, NULL);
		// newTexture.LoadImage(data);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_data;
		bool L_3;
		L_3 = ImageConversion_LoadImage_m1797365F78319B68638DE8BB02836F8D60760041(L_1, L_2, NULL);
		// newTexture.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = L_1;
		NullCheck(L_4);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_4, NULL);
		// return newTexture;
		return L_4;
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
// System.String VoxelBusters.CoreLibrary.UnityPackageDefinition::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityPackageDefinition_get_Name_m46EA77ABFE4D2F9888788AA7D293346CFB69F98C (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void VoxelBusters.CoreLibrary.UnityPackageDefinition::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityPackageDefinition_set_Name_m89B54404D0F7336741D828220ED8441FDB6B0D59 (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String VoxelBusters.CoreLibrary.UnityPackageDefinition::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityPackageDefinition_get_DisplayName_m4E6C2C6137877D7306D7C686B7F927EE52F772A3 (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, const RuntimeMethod* method) 
{
	{
		// public string DisplayName { get; private set; }
		String_t* L_0 = __this->___U3CDisplayNameU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void VoxelBusters.CoreLibrary.UnityPackageDefinition::set_DisplayName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityPackageDefinition_set_DisplayName_m68C5E138EE218CF75B16B0B78F0DE763860350A8 (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string DisplayName { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CDisplayNameU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayNameU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String VoxelBusters.CoreLibrary.UnityPackageDefinition::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityPackageDefinition_get_Version_mE7D31494D4153ADB62F4917F29C4C7321C3C34AF (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, const RuntimeMethod* method) 
{
	{
		// public string Version { get; private set; }
		String_t* L_0 = __this->___U3CVersionU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void VoxelBusters.CoreLibrary.UnityPackageDefinition::set_Version(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityPackageDefinition_set_Version_m2A86B9CF94C9A49B612E3A365771DCF0EE59A77D (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Version { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CVersionU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CVersionU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String VoxelBusters.CoreLibrary.UnityPackageDefinition::get_DefaultInstallPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityPackageDefinition_get_DefaultInstallPath_m3A2B3AEDBD9281C14AE8C6AD9C9CBA86B6B5BFCC (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, const RuntimeMethod* method) 
{
	{
		// public string DefaultInstallPath { get; private set; }
		String_t* L_0 = __this->___U3CDefaultInstallPathU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void VoxelBusters.CoreLibrary.UnityPackageDefinition::set_DefaultInstallPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityPackageDefinition_set_DefaultInstallPath_m31C3C6480AE8201E7DAA8871C20B35E85B8A8FE0 (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string DefaultInstallPath { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CDefaultInstallPathU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDefaultInstallPathU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.String VoxelBusters.CoreLibrary.UnityPackageDefinition::get_UpmInstallPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityPackageDefinition_get_UpmInstallPath_m3F0A9CC49E5FF725ED57A6CB9061128BD8E67150 (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, const RuntimeMethod* method) 
{
	{
		// public string UpmInstallPath { get; private set; }
		String_t* L_0 = __this->___U3CUpmInstallPathU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void VoxelBusters.CoreLibrary.UnityPackageDefinition::set_UpmInstallPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityPackageDefinition_set_UpmInstallPath_m4825B66919985B0B210E98DC99610CE867CD2A2C (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string UpmInstallPath { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CUpmInstallPathU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUpmInstallPathU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.String VoxelBusters.CoreLibrary.UnityPackageDefinition::get_MutableResourcesPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityPackageDefinition_get_MutableResourcesPath_mD09C3E273F2B116AF8D1DE040A4BAC3A95052C09 (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, const RuntimeMethod* method) 
{
	{
		// public string MutableResourcesPath { get; private set; }
		String_t* L_0 = __this->___U3CMutableResourcesPathU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void VoxelBusters.CoreLibrary.UnityPackageDefinition::set_MutableResourcesPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityPackageDefinition_set_MutableResourcesPath_m61EBDF33413C852BAF56B8F897B0E6A2BD4A18A8 (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string MutableResourcesPath { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CMutableResourcesPathU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMutableResourcesPathU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.String VoxelBusters.CoreLibrary.UnityPackageDefinition::get_MutableResourcesRelativePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityPackageDefinition_get_MutableResourcesRelativePath_m0B66EEDDDA0AAF2B5A2E4711EA0CD62EB0094854 (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, const RuntimeMethod* method) 
{
	{
		// public string MutableResourcesRelativePath { get; private set; }
		String_t* L_0 = __this->___U3CMutableResourcesRelativePathU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void VoxelBusters.CoreLibrary.UnityPackageDefinition::set_MutableResourcesRelativePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityPackageDefinition_set_MutableResourcesRelativePath_m491AD9FB2D8FE37346D40E3B35F3F15E0269E66D (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string MutableResourcesRelativePath { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CMutableResourcesRelativePathU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMutableResourcesRelativePathU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.String VoxelBusters.CoreLibrary.UnityPackageDefinition::get_PersistentDataRelativePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityPackageDefinition_get_PersistentDataRelativePath_mA53EFC8E75905B2BC69F7031E96D90B4F1800863 (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, const RuntimeMethod* method) 
{
	{
		// EnsurePersistentDataPathExists();
		UnityPackageDefinition_EnsurePersistentDataPathExists_m534BBE87014B1875327B9FBCC2780B2DA2D80F18(__this, NULL);
		// return m_persistentDataRelativePath;
		String_t* L_0 = __this->___m_persistentDataRelativePath_0;
		return L_0;
	}
}
// System.String VoxelBusters.CoreLibrary.UnityPackageDefinition::get_PersistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityPackageDefinition_get_PersistentDataPath_m38C8F2371C56C563CFDA91A4DDA7331CDC68B90B (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, const RuntimeMethod* method) 
{
	{
		// EnsurePersistentDataPathExists();
		UnityPackageDefinition_EnsurePersistentDataPathExists_m534BBE87014B1875327B9FBCC2780B2DA2D80F18(__this, NULL);
		// return GetPersistentDataPathInternal();
		String_t* L_0;
		L_0 = UnityPackageDefinition_GetPersistentDataPathInternal_mB1B94B09310FCDA464400E40467D69973C0A8DD0(__this, NULL);
		return L_0;
	}
}
// System.Void VoxelBusters.CoreLibrary.UnityPackageDefinition::.ctor(System.String,System.String,System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityPackageDefinition__ctor_m839967524CCE5B6D7F43EC5C794E3B59186E1D38 (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, String_t* ___0_name, String_t* ___1_displayName, String_t* ___2_version, String_t* ___3_defaultInstallPath, String_t* ___4_mutableResourcesPath, String_t* ___5_persistentDataRelativePath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1262E37FD8C399A99BC2313B5D6453CBAFC923AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DB1F2EB604D7C48BDBE8FB06C6CE2C472E5C977);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BE14190ED352F27CF0B99DCF3AE6D27EE9CCFBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAA5A7F71CEAF22FCCBE9ECEEBBD1FF99E220991);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* G_B1_1 = NULL;
	String_t* G_B4_0 = NULL;
	UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* G_B3_1 = NULL;
	{
		// public UnityPackageDefinition(string name, string displayName,
		//     string version, string defaultInstallPath = null,
		//     string mutableResourcesPath = "Assets/Resources", string persistentDataRelativePath = null)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Name                            = name;
		String_t* L_0 = ___0_name;
		UnityPackageDefinition_set_Name_m89B54404D0F7336741D828220ED8441FDB6B0D59_inline(__this, L_0, NULL);
		// DisplayName                     = displayName;
		String_t* L_1 = ___1_displayName;
		UnityPackageDefinition_set_DisplayName_m68C5E138EE218CF75B16B0B78F0DE763860350A8_inline(__this, L_1, NULL);
		// Version                         = version;
		String_t* L_2 = ___2_version;
		UnityPackageDefinition_set_Version_m2A86B9CF94C9A49B612E3A365771DCF0EE59A77D_inline(__this, L_2, NULL);
		// DefaultInstallPath              = defaultInstallPath ?? $"Assets/{Name}";
		String_t* L_3 = ___3_defaultInstallPath;
		String_t* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = __this;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = __this;
			goto IL_0032;
		}
	}
	{
		String_t* L_5;
		L_5 = UnityPackageDefinition_get_Name_m46EA77ABFE4D2F9888788AA7D293346CFB69F98C_inline(__this, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralEAA5A7F71CEAF22FCCBE9ECEEBBD1FF99E220991, L_5, NULL);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_0032:
	{
		NullCheck(G_B2_1);
		UnityPackageDefinition_set_DefaultInstallPath_m31C3C6480AE8201E7DAA8871C20B35E85B8A8FE0_inline(G_B2_1, G_B2_0, NULL);
		// UpmInstallPath                  = $"Packages/{Name}";
		String_t* L_7;
		L_7 = UnityPackageDefinition_get_Name_m46EA77ABFE4D2F9888788AA7D293346CFB69F98C_inline(__this, NULL);
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1262E37FD8C399A99BC2313B5D6453CBAFC923AF, L_7, NULL);
		UnityPackageDefinition_set_UpmInstallPath_m4825B66919985B0B210E98DC99610CE867CD2A2C_inline(__this, L_8, NULL);
		// MutableResourcesPath            = mutableResourcesPath;
		String_t* L_9 = ___4_mutableResourcesPath;
		UnityPackageDefinition_set_MutableResourcesPath_m61EBDF33413C852BAF56B8F897B0E6A2BD4A18A8_inline(__this, L_9, NULL);
		// MutableResourcesRelativePath    = mutableResourcesPath.Replace("Assets/Resources", "").TrimStart('/');
		String_t* L_10 = ___4_mutableResourcesPath;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_10, _stringLiteral6BE14190ED352F27CF0B99DCF3AE6D27EE9CCFBB, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = String_TrimStart_m210863A5E84BC22EC0487A1543D3680979DD87EE(L_11, ((int32_t)47), NULL);
		UnityPackageDefinition_set_MutableResourcesRelativePath_m491AD9FB2D8FE37346D40E3B35F3F15E0269E66D_inline(__this, L_12, NULL);
		// m_persistentDataRelativePath    = persistentDataRelativePath ?? $"VoxelBusters/{string.Join("", displayName.Split(' '))}";
		String_t* L_13 = ___5_persistentDataRelativePath;
		String_t* L_14 = L_13;
		G_B3_0 = L_14;
		G_B3_1 = __this;
		if (L_14)
		{
			G_B4_0 = L_14;
			G_B4_1 = __this;
			goto IL_0097;
		}
	}
	{
		String_t* L_15 = ___1_displayName;
		NullCheck(L_15);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16;
		L_16 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_15, ((int32_t)32), 0, NULL);
		String_t* L_17;
		L_17 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, L_16, NULL);
		String_t* L_18;
		L_18 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral5DB1F2EB604D7C48BDBE8FB06C6CE2C472E5C977, L_17, NULL);
		G_B4_0 = L_18;
		G_B4_1 = G_B3_1;
	}

IL_0097:
	{
		NullCheck(G_B4_1);
		G_B4_1->___m_persistentDataRelativePath_0 = G_B4_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___m_persistentDataRelativePath_0), (void*)G_B4_0);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.UnityPackageDefinition::EnsurePersistentDataPathExists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityPackageDefinition_EnsurePersistentDataPathExists_m534BBE87014B1875327B9FBCC2780B2DA2D80F18 (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, const RuntimeMethod* method) 
{
	{
		// var     fullPath    = GetPersistentDataPathInternal();
		String_t* L_0;
		L_0 = UnityPackageDefinition_GetPersistentDataPathInternal_mB1B94B09310FCDA464400E40467D69973C0A8DD0(__this, NULL);
		// IOServices.CreateDirectory(fullPath, overwrite: false);
		bool L_1;
		L_1 = IOServices_CreateDirectory_m1AEDF4D5DD44E6F1058114E1D90565CBEF683084(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.String VoxelBusters.CoreLibrary.UnityPackageDefinition::GetPersistentDataPathInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityPackageDefinition_GetPersistentDataPathInternal_mB1B94B09310FCDA464400E40467D69973C0A8DD0 (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, const RuntimeMethod* method) 
{
	{
		// return IOServices.CombinePath(Application.persistentDataPath, m_persistentDataRelativePath);
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		String_t* L_1 = __this->___m_persistentDataRelativePath_0;
		String_t* L_2;
		L_2 = IOServices_CombinePath_m64C44812631446719FAE4B96E893C764979BDEBE(L_0, L_1, NULL);
		return L_2;
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
// Conversion methods for marshalling of: VoxelBusters.CoreLibrary.URLString
IL2CPP_EXTERN_C void URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77_marshal_pinvoke(const URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77& unmarshaled, URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77_marshaled_pinvoke& marshaled)
{
	marshaled.___m_value_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_value_0);
	marshaled.___U3CIsValidU3Ek__BackingField_1 = static_cast<int32_t>(unmarshaled.___U3CIsValidU3Ek__BackingField_1);
	marshaled.___U3CIsFilePathU3Ek__BackingField_2 = static_cast<int32_t>(unmarshaled.___U3CIsFilePathU3Ek__BackingField_2);
}
IL2CPP_EXTERN_C void URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77_marshal_pinvoke_back(const URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77_marshaled_pinvoke& marshaled, URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77& unmarshaled)
{
	unmarshaled.___m_value_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_value_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_value_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_value_0));
	bool unmarshaledU3CIsValidU3Ek__BackingField_temp_1 = false;
	unmarshaledU3CIsValidU3Ek__BackingField_temp_1 = static_cast<bool>(marshaled.___U3CIsValidU3Ek__BackingField_1);
	unmarshaled.___U3CIsValidU3Ek__BackingField_1 = unmarshaledU3CIsValidU3Ek__BackingField_temp_1;
	bool unmarshaledU3CIsFilePathU3Ek__BackingField_temp_2 = false;
	unmarshaledU3CIsFilePathU3Ek__BackingField_temp_2 = static_cast<bool>(marshaled.___U3CIsFilePathU3Ek__BackingField_2);
	unmarshaled.___U3CIsFilePathU3Ek__BackingField_2 = unmarshaledU3CIsFilePathU3Ek__BackingField_temp_2;
}
// Conversion method for clean up from marshalling of: VoxelBusters.CoreLibrary.URLString
IL2CPP_EXTERN_C void URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77_marshal_pinvoke_cleanup(URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_value_0);
	marshaled.___m_value_0 = NULL;
}
// Conversion methods for marshalling of: VoxelBusters.CoreLibrary.URLString
IL2CPP_EXTERN_C void URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77_marshal_com(const URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77& unmarshaled, URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77_marshaled_com& marshaled)
{
	marshaled.___m_value_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___m_value_0);
	marshaled.___U3CIsValidU3Ek__BackingField_1 = static_cast<int32_t>(unmarshaled.___U3CIsValidU3Ek__BackingField_1);
	marshaled.___U3CIsFilePathU3Ek__BackingField_2 = static_cast<int32_t>(unmarshaled.___U3CIsFilePathU3Ek__BackingField_2);
}
IL2CPP_EXTERN_C void URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77_marshal_com_back(const URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77_marshaled_com& marshaled, URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77& unmarshaled)
{
	unmarshaled.___m_value_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___m_value_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_value_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_value_0));
	bool unmarshaledU3CIsValidU3Ek__BackingField_temp_1 = false;
	unmarshaledU3CIsValidU3Ek__BackingField_temp_1 = static_cast<bool>(marshaled.___U3CIsValidU3Ek__BackingField_1);
	unmarshaled.___U3CIsValidU3Ek__BackingField_1 = unmarshaledU3CIsValidU3Ek__BackingField_temp_1;
	bool unmarshaledU3CIsFilePathU3Ek__BackingField_temp_2 = false;
	unmarshaledU3CIsFilePathU3Ek__BackingField_temp_2 = static_cast<bool>(marshaled.___U3CIsFilePathU3Ek__BackingField_2);
	unmarshaled.___U3CIsFilePathU3Ek__BackingField_2 = unmarshaledU3CIsFilePathU3Ek__BackingField_temp_2;
}
// Conversion method for clean up from marshalling of: VoxelBusters.CoreLibrary.URLString
IL2CPP_EXTERN_C void URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77_marshal_com_cleanup(URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_value_0);
	marshaled.___m_value_0 = NULL;
}
// System.Boolean VoxelBusters.CoreLibrary.URLString::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool URLString_get_IsValid_m169562BEF18D983FFFA9AE4C4C83B32658DEEAA8 (URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77* __this, const RuntimeMethod* method) 
{
	{
		// get;
		bool L_0 = __this->___U3CIsValidU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool URLString_get_IsValid_m169562BEF18D983FFFA9AE4C4C83B32658DEEAA8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77*>(__this + _offset);
	bool _returnValue;
	_returnValue = URLString_get_IsValid_m169562BEF18D983FFFA9AE4C4C83B32658DEEAA8_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void VoxelBusters.CoreLibrary.URLString::set_IsValid(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void URLString_set_IsValid_m66AA059CDC9988AE810ED6A79E2B0270806E86D8 (URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// private set;
		bool L_0 = ___0_value;
		__this->___U3CIsValidU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void URLString_set_IsValid_m66AA059CDC9988AE810ED6A79E2B0270806E86D8_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77*>(__this + _offset);
	URLString_set_IsValid_m66AA059CDC9988AE810ED6A79E2B0270806E86D8_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean VoxelBusters.CoreLibrary.URLString::get_IsFilePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool URLString_get_IsFilePath_m25A776D613DC54119C8A814BBE048FFDCD51FDBE (URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77* __this, const RuntimeMethod* method) 
{
	{
		// get;
		bool L_0 = __this->___U3CIsFilePathU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool URLString_get_IsFilePath_m25A776D613DC54119C8A814BBE048FFDCD51FDBE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77*>(__this + _offset);
	bool _returnValue;
	_returnValue = URLString_get_IsFilePath_m25A776D613DC54119C8A814BBE048FFDCD51FDBE_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void VoxelBusters.CoreLibrary.URLString::set_IsFilePath(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void URLString_set_IsFilePath_m347545BE7704E3445CF1E4A5FECDA671442B1396 (URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// private set;
		bool L_0 = ___0_value;
		__this->___U3CIsFilePathU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void URLString_set_IsFilePath_m347545BE7704E3445CF1E4A5FECDA671442B1396_AdjustorThunk (RuntimeObject* __this, bool ___0_value, const RuntimeMethod* method)
{
	URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77*>(__this + _offset);
	URLString_set_IsFilePath_m347545BE7704E3445CF1E4A5FECDA671442B1396_inline(_thisAdjusted, ___0_value, method);
}
// VoxelBusters.CoreLibrary.URLString VoxelBusters.CoreLibrary.URLString::URLWithPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77 URLString_URLWithPath_m93878137939231AA94F75E1A0F8B63A709ADCD42 (String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AE148F4539A6130C80EF45C5441F068ADBF8C8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47F12CBA7BC942753DE63C8E3FC5A0D7FECD47A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC05DD95A56B355AAD74E9CE147B236E03FF8905E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE79FF373808574898C82AC1320C55C1182FB75A);
		s_Il2CppMethodInitialized = true;
	}
	URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Assert.IsNotNullOrEmpty(path, "path");
		String_t* L_0 = ___0_path;
		Assert_IsNotNullOrEmpty_m53BB2D375D164967F21495F18416D175794300AC(L_0, _stringLiteralFE79FF373808574898C82AC1320C55C1182FB75A, NULL);
		// Assert.IsFalse(path.StartsWith("file"), "Input value is not http path.");
		String_t* L_1 = ___0_path;
		NullCheck(L_1);
		bool L_2;
		L_2 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_1, _stringLiteralC05DD95A56B355AAD74E9CE147B236E03FF8905E, NULL);
		Assert_IsFalse_m9D206557BA0ACE724B22FADBD3154CF6903D97DF(L_2, _stringLiteral47F12CBA7BC942753DE63C8E3FC5A0D7FECD47A9, NULL);
		// if (false == path.StartsWith("http"))
		String_t* L_3 = ___0_path;
		NullCheck(L_3);
		bool L_4;
		L_4 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_3, _stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF, NULL);
		if (L_4)
		{
			goto IL_003a;
		}
	}
	{
		// path = string.Concat("http://", path);
		String_t* L_5 = ___0_path;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3AE148F4539A6130C80EF45C5441F068ADBF8C8C, L_5, NULL);
		___0_path = L_6;
	}

IL_003a:
	{
		// return new URLString() { m_value = path, IsValid = true };
		il2cpp_codegen_initobj((&V_0), sizeof(URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77));
		String_t* L_7 = ___0_path;
		(&V_0)->___m_value_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___m_value_0), (void*)L_7);
		URLString_set_IsValid_m66AA059CDC9988AE810ED6A79E2B0270806E86D8_inline((&V_0), (bool)1, NULL);
		URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77 L_8 = V_0;
		return L_8;
	}
}
// VoxelBusters.CoreLibrary.URLString VoxelBusters.CoreLibrary.URLString::FileURLWithPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77 URLString_FileURLWithPath_m4A11A4F9358070F4E1CE7512290ECE4CC09F1719 (String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB653C606CA94DA6804B1492555C55D68943DF83F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC05DD95A56B355AAD74E9CE147B236E03FF8905E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE79FF373808574898C82AC1320C55C1182FB75A);
		s_Il2CppMethodInitialized = true;
	}
	URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Assert.IsNotNullOrEmpty(path, "path");
		String_t* L_0 = ___0_path;
		Assert_IsNotNullOrEmpty_m53BB2D375D164967F21495F18416D175794300AC(L_0, _stringLiteralFE79FF373808574898C82AC1320C55C1182FB75A, NULL);
		// Assert.IsFalse(path.StartsWith("http"), "Input value is not local file path.");
		String_t* L_1 = ___0_path;
		NullCheck(L_1);
		bool L_2;
		L_2 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_1, _stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF, NULL);
		Assert_IsFalse_m9D206557BA0ACE724B22FADBD3154CF6903D97DF(L_2, _stringLiteralB653C606CA94DA6804B1492555C55D68943DF83F, NULL);
		//             if (false == path.StartsWith("file")
		// #if UNITY_ANDROID
		//                 && false == path.StartsWith("jar:file")
		// #endif
		//                )
		String_t* L_3 = ___0_path;
		NullCheck(L_3);
		bool L_4;
		L_4 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_3, _stringLiteralC05DD95A56B355AAD74E9CE147B236E03FF8905E, NULL);
		if (L_4)
		{
			goto IL_003a;
		}
	}
	{
		// path = string.Concat("file://", path);
		String_t* L_5 = ___0_path;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA, L_5, NULL);
		___0_path = L_6;
	}

IL_003a:
	{
		// return new URLString() { m_value = path, IsValid = true, IsFilePath = true, };
		il2cpp_codegen_initobj((&V_0), sizeof(URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77));
		String_t* L_7 = ___0_path;
		(&V_0)->___m_value_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___m_value_0), (void*)L_7);
		URLString_set_IsValid_m66AA059CDC9988AE810ED6A79E2B0270806E86D8_inline((&V_0), (bool)1, NULL);
		URLString_set_IsFilePath_m347545BE7704E3445CF1E4A5FECDA671442B1396_inline((&V_0), (bool)1, NULL);
		URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77 L_8 = V_0;
		return L_8;
	}
}
// System.String VoxelBusters.CoreLibrary.URLString::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* URLString_ToString_mDDFEE4F8D62B162C1A577E0A4F14A1C656485E90 (URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77* __this, const RuntimeMethod* method) 
{
	{
		// if (IsValid)
		bool L_0;
		L_0 = URLString_get_IsValid_m169562BEF18D983FFFA9AE4C4C83B32658DEEAA8_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return m_value;
		String_t* L_1 = __this->___m_value_0;
		return L_1;
	}

IL_000f:
	{
		// return null;
		return (String_t*)NULL;
	}
}
IL2CPP_EXTERN_C  String_t* URLString_ToString_mDDFEE4F8D62B162C1A577E0A4F14A1C656485E90_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = URLString_ToString_mDDFEE4F8D62B162C1A577E0A4F14A1C656485E90(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String VoxelBusters.CoreLibrary.VBException::get_Domain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VBException_get_Domain_m85F7D5ACCD1BB3CE5C72FE759129D522A35A226C (VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489* __this, const RuntimeMethod* method) 
{
	{
		// public string Domain { get; private set; }
		String_t* L_0 = __this->___U3CDomainU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void VoxelBusters.CoreLibrary.VBException::set_Domain(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VBException_set_Domain_mA7D4C16FB6B37BF69596FD6CB88137631BAEE8F4 (VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Domain { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CDomainU3Ek__BackingField_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDomainU3Ek__BackingField_18), (void*)L_0);
		return;
	}
}
// System.Int32 VoxelBusters.CoreLibrary.VBException::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VBException_get_ErrorCode_mD089FE7802EA34C0E48946C8528EA210B8A44177 (VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489* __this, const RuntimeMethod* method) 
{
	{
		// public int ErrorCode { get; private set; }
		int32_t L_0 = __this->___U3CErrorCodeU3Ek__BackingField_19;
		return L_0;
	}
}
// System.Void VoxelBusters.CoreLibrary.VBException::set_ErrorCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VBException_set_ErrorCode_m4B321FA0661C8AD554422248B8935D42FDFAAD3B (VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int ErrorCode { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CErrorCodeU3Ek__BackingField_19 = L_0;
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.VBException::.ctor(System.String,System.Int32,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VBException__ctor_mAA2CD9B68883BC301FE0F92D3CA53622A0345DB1 (VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489* __this, String_t* ___0_message, int32_t ___1_errorCode, Exception_t* ___2_innerException, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(message, innerException)
		String_t* L_0 = ___0_message;
		Exception_t* L_1 = ___2_innerException;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
		// ErrorCode       = errorCode;
		int32_t L_2 = ___1_errorCode;
		VBException_set_ErrorCode_m4B321FA0661C8AD554422248B8935D42FDFAAD3B_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.VBException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VBException__ctor_m11472364CB81FFB91F66337CD4E856E64AFD5466 (VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) 
{
	{
		// : this(message, -1, innerException)
		String_t* L_0 = ___0_message;
		Exception_t* L_1 = ___1_innerException;
		VBException__ctor_mAA2CD9B68883BC301FE0F92D3CA53622A0345DB1(__this, L_0, (-1), L_1, NULL);
		// { }
		return;
	}
}
// VoxelBusters.CoreLibrary.VBException VoxelBusters.CoreLibrary.VBException::NotImplemented(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489* VBException_NotImplemented_mFA0F2E8B1D62FC882A5AA594FC2710AD663FE16C (String_t* ___0_messsage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new VBException(messsage);
		String_t* L_0 = ___0_messsage;
		VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489* L_1 = (VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489*)il2cpp_codegen_object_new(VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		VBException__ctor_mAA2CD9B68883BC301FE0F92D3CA53622A0345DB1(L_1, L_0, (-1), (Exception_t*)NULL, NULL);
		return L_1;
	}
}
// VoxelBusters.CoreLibrary.VBException VoxelBusters.CoreLibrary.VBException::NotSupported(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489* VBException_NotSupported_mD5EA7AD54AD0D04BA521C8022D1A3F83313A22FB (String_t* ___0_messsage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new VBException(messsage);
		String_t* L_0 = ___0_messsage;
		VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489* L_1 = (VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489*)il2cpp_codegen_object_new(VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		VBException__ctor_mAA2CD9B68883BC301FE0F92D3CA53622A0345DB1(L_1, L_0, (-1), (Exception_t*)NULL, NULL);
		return L_1;
	}
}
// VoxelBusters.CoreLibrary.VBException VoxelBusters.CoreLibrary.VBException::InvalidOperation(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489* VBException_InvalidOperation_m55C547F5EB7B01733C245164A2413FFD5AB4ED07 (String_t* ___0_messsage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new VBException(messsage);
		String_t* L_0 = ___0_messsage;
		VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489* L_1 = (VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489*)il2cpp_codegen_object_new(VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		VBException__ctor_mAA2CD9B68883BC301FE0F92D3CA53622A0345DB1(L_1, L_0, (-1), (Exception_t*)NULL, NULL);
		return L_1;
	}
}
// VoxelBusters.CoreLibrary.VBException VoxelBusters.CoreLibrary.VBException::ArgumentNull(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489* VBException_ArgumentNull_mE1DFE888FDDA8DB606839E3F5F8A9A6C5A1F4327 (String_t* ___0_property, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF97D76C45F4CEECF3DE0D9336C326F43FA467675);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new VBException(string.Format("{0} is null.", property));
		String_t* L_0 = ___0_property;
		String_t* L_1;
		L_1 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralF97D76C45F4CEECF3DE0D9336C326F43FA467675, L_0, NULL);
		VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489* L_2 = (VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489*)il2cpp_codegen_object_new(VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		VBException__ctor_mAA2CD9B68883BC301FE0F92D3CA53622A0345DB1(L_2, L_1, (-1), (Exception_t*)NULL, NULL);
		return L_2;
	}
}
// VoxelBusters.CoreLibrary.VBException VoxelBusters.CoreLibrary.VBException::SwitchCaseNotImplemented(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489* VBException_SwitchCaseNotImplemented_m1A614215F2864235741CF4392D99116AA299BBF6 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10EE9E96581A33D3D41AD2A8F4E74D5649F74CCE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new VBException(string.Format("Switch case for {0} is not implemented.", value));
		RuntimeObject* L_0 = ___0_value;
		String_t* L_1;
		L_1 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral10EE9E96581A33D3D41AD2A8F4E74D5649F74CCE, L_0, NULL);
		VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489* L_2 = (VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489*)il2cpp_codegen_object_new(VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		VBException__ctor_mAA2CD9B68883BC301FE0F92D3CA53622A0345DB1(L_2, L_1, (-1), (Exception_t*)NULL, NULL);
		return L_2;
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
// VoxelBusters.CoreLibrary.IJsonServiceProvider VoxelBusters.CoreLibrary.ExternalServiceProvider::get_JsonServiceProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExternalServiceProvider_get_JsonServiceProvider_m9C400AF74CA8D4FD07A4DA205529E862EB356DA9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternalServiceProvider_t14830EB28C2BFFBA043D792D24CC70209E400011_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return s_jsonServiceProvider;
		RuntimeObject* L_0 = ((ExternalServiceProvider_t14830EB28C2BFFBA043D792D24CC70209E400011_StaticFields*)il2cpp_codegen_static_fields_for(ExternalServiceProvider_t14830EB28C2BFFBA043D792D24CC70209E400011_il2cpp_TypeInfo_var))->___s_jsonServiceProvider_0;
		return L_0;
	}
}
// System.Void VoxelBusters.CoreLibrary.ExternalServiceProvider::set_JsonServiceProvider(VoxelBusters.CoreLibrary.IJsonServiceProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalServiceProvider_set_JsonServiceProvider_m4C61C001A6716A0271FA1FB4E793BD3C92A5FAA6 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternalServiceProvider_t14830EB28C2BFFBA043D792D24CC70209E400011_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Assert.IsPropertyNotNull(value, "value");
		RuntimeObject* L_0 = ___0_value;
		Assert_IsPropertyNotNull_mEFBFEDDD73F6236D273A03646B7EA3B754241CE5(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		// s_jsonServiceProvider       = value;
		RuntimeObject* L_1 = ___0_value;
		((ExternalServiceProvider_t14830EB28C2BFFBA043D792D24CC70209E400011_StaticFields*)il2cpp_codegen_static_fields_for(ExternalServiceProvider_t14830EB28C2BFFBA043D792D24CC70209E400011_il2cpp_TypeInfo_var))->___s_jsonServiceProvider_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ExternalServiceProvider_t14830EB28C2BFFBA043D792D24CC70209E400011_StaticFields*)il2cpp_codegen_static_fields_for(ExternalServiceProvider_t14830EB28C2BFFBA043D792D24CC70209E400011_il2cpp_TypeInfo_var))->___s_jsonServiceProvider_0), (void*)L_1);
		// }
		return;
	}
}
// VoxelBusters.CoreLibrary.ISaveServiceProvider VoxelBusters.CoreLibrary.ExternalServiceProvider::get_SaveServiceProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExternalServiceProvider_get_SaveServiceProvider_mE962237740D51D9947A2D240594D8BADC61D007C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternalServiceProvider_t14830EB28C2BFFBA043D792D24CC70209E400011_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return s_saveServiceProvider;
		RuntimeObject* L_0 = ((ExternalServiceProvider_t14830EB28C2BFFBA043D792D24CC70209E400011_StaticFields*)il2cpp_codegen_static_fields_for(ExternalServiceProvider_t14830EB28C2BFFBA043D792D24CC70209E400011_il2cpp_TypeInfo_var))->___s_saveServiceProvider_1;
		return L_0;
	}
}
// System.Void VoxelBusters.CoreLibrary.ExternalServiceProvider::set_SaveServiceProvider(VoxelBusters.CoreLibrary.ISaveServiceProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalServiceProvider_set_SaveServiceProvider_m4B0E41BAC9C9F3D7A08E909360883670A9A5A62D (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternalServiceProvider_t14830EB28C2BFFBA043D792D24CC70209E400011_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Assert.IsPropertyNotNull(value, "value");
		RuntimeObject* L_0 = ___0_value;
		Assert_IsPropertyNotNull_mEFBFEDDD73F6236D273A03646B7EA3B754241CE5(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		// s_saveServiceProvider       = value;
		RuntimeObject* L_1 = ___0_value;
		((ExternalServiceProvider_t14830EB28C2BFFBA043D792D24CC70209E400011_StaticFields*)il2cpp_codegen_static_fields_for(ExternalServiceProvider_t14830EB28C2BFFBA043D792D24CC70209E400011_il2cpp_TypeInfo_var))->___s_saveServiceProvider_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ExternalServiceProvider_t14830EB28C2BFFBA043D792D24CC70209E400011_StaticFields*)il2cpp_codegen_static_fields_for(ExternalServiceProvider_t14830EB28C2BFFBA043D792D24CC70209E400011_il2cpp_TypeInfo_var))->___s_saveServiceProvider_1), (void*)L_1);
		// }
		return;
	}
}
// VoxelBusters.CoreLibrary.ILocalisationServiceProvider VoxelBusters.CoreLibrary.ExternalServiceProvider::get_LocalisationServiceProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExternalServiceProvider_get_LocalisationServiceProvider_m16253BF10470F0BEFC74A2CB2618AB50CCDFCF7C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternalServiceProvider_t14830EB28C2BFFBA043D792D24CC70209E400011_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return s_localisationServiceProvider;
		RuntimeObject* L_0 = ((ExternalServiceProvider_t14830EB28C2BFFBA043D792D24CC70209E400011_StaticFields*)il2cpp_codegen_static_fields_for(ExternalServiceProvider_t14830EB28C2BFFBA043D792D24CC70209E400011_il2cpp_TypeInfo_var))->___s_localisationServiceProvider_2;
		return L_0;
	}
}
// System.Void VoxelBusters.CoreLibrary.ExternalServiceProvider::set_LocalisationServiceProvider(VoxelBusters.CoreLibrary.ILocalisationServiceProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalServiceProvider_set_LocalisationServiceProvider_m173F99C2CB6A86EF8537D0D5DD148A44CB1E707D (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternalServiceProvider_t14830EB28C2BFFBA043D792D24CC70209E400011_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Assert.IsPropertyNotNull(value, "value");
		RuntimeObject* L_0 = ___0_value;
		Assert_IsPropertyNotNull_mEFBFEDDD73F6236D273A03646B7EA3B754241CE5(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, NULL);
		// s_localisationServiceProvider       = value;
		RuntimeObject* L_1 = ___0_value;
		((ExternalServiceProvider_t14830EB28C2BFFBA043D792D24CC70209E400011_StaticFields*)il2cpp_codegen_static_fields_for(ExternalServiceProvider_t14830EB28C2BFFBA043D792D24CC70209E400011_il2cpp_TypeInfo_var))->___s_localisationServiceProvider_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ExternalServiceProvider_t14830EB28C2BFFBA043D792D24CC70209E400011_StaticFields*)il2cpp_codegen_static_fields_for(ExternalServiceProvider_t14830EB28C2BFFBA043D792D24CC70209E400011_il2cpp_TypeInfo_var))->___s_localisationServiceProvider_2), (void*)L_1);
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
// System.Void VoxelBusters.CoreLibrary.Assert::IsNotNull(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsNotNull_mBA1AD6B57CCCAC8B6E53AE65504DED58AC8EDE0F (RuntimeObject* ___0_obj, String_t* ___1_message, const RuntimeMethod* method) 
{
	{
		// if (obj == null)
		RuntimeObject* L_0 = ___0_obj;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		// throw new VBException(message);
		String_t* L_1 = ___1_message;
		VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489* L_2 = (VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		VBException__ctor_mAA2CD9B68883BC301FE0F92D3CA53622A0345DB1(L_2, L_1, (-1), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Assert_IsNotNull_mBA1AD6B57CCCAC8B6E53AE65504DED58AC8EDE0F_RuntimeMethod_var)));
	}

IL_000c:
	{
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.Assert::IsNull(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsNull_mB505F7991308F64E75B4E314DFA7A36726D7E6A6 (RuntimeObject* ___0_obj, String_t* ___1_message, const RuntimeMethod* method) 
{
	{
		// if (obj != null)
		RuntimeObject* L_0 = ___0_obj;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		// throw new VBException(message);
		String_t* L_1 = ___1_message;
		VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489* L_2 = (VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		VBException__ctor_mAA2CD9B68883BC301FE0F92D3CA53622A0345DB1(L_2, L_1, (-1), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Assert_IsNull_mB505F7991308F64E75B4E314DFA7A36726D7E6A6_RuntimeMethod_var)));
	}

IL_000c:
	{
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.Assert::IsPropertyNotNull(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsPropertyNotNull_mEFBFEDDD73F6236D273A03646B7EA3B754241CE5 (RuntimeObject* ___0_obj, String_t* ___1_property, const RuntimeMethod* method) 
{
	{
		// if (obj == null)
		RuntimeObject* L_0 = ___0_obj;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		// throw new VBException(string.Format("{0} is null.", property));
		String_t* L_1 = ___1_property;
		String_t* L_2;
		L_2 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF97D76C45F4CEECF3DE0D9336C326F43FA467675)), L_1, NULL);
		VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489* L_3 = (VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		VBException__ctor_mAA2CD9B68883BC301FE0F92D3CA53622A0345DB1(L_3, L_2, (-1), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Assert_IsPropertyNotNull_mEFBFEDDD73F6236D273A03646B7EA3B754241CE5_RuntimeMethod_var)));
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.Assert::IsArgNotNull(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsArgNotNull_mEE70C86075147997C1C822DE942A1B657EAF257B (RuntimeObject* ___0_obj, String_t* ___1_argName, const RuntimeMethod* method) 
{
	{
		// if (obj == null)
		RuntimeObject* L_0 = ___0_obj;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		// throw new VBException(string.Format("Arg {0} is null.", argName));
		String_t* L_1 = ___1_argName;
		String_t* L_2;
		L_2 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5F0A3448D0218D998BD21D1DE2254D39303C44DF)), L_1, NULL);
		VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489* L_3 = (VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		VBException__ctor_mAA2CD9B68883BC301FE0F92D3CA53622A0345DB1(L_3, L_2, (-1), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Assert_IsArgNotNull_mEE70C86075147997C1C822DE942A1B657EAF257B_RuntimeMethod_var)));
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.Assert::AreNotEqual(System.Object,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_AreNotEqual_mA546C87370F07D556B5277122EA204C352354B70 (RuntimeObject* ___0_obj1, RuntimeObject* ___1_obj2, String_t* ___2_message, const RuntimeMethod* method) 
{
	{
		// if (obj1 == obj2)
		RuntimeObject* L_0 = ___0_obj1;
		RuntimeObject* L_1 = ___1_obj2;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_000d;
		}
	}
	{
		// throw new VBException(message);
		String_t* L_2 = ___2_message;
		VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489* L_3 = (VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		VBException__ctor_mAA2CD9B68883BC301FE0F92D3CA53622A0345DB1(L_3, L_2, (-1), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Assert_AreNotEqual_mA546C87370F07D556B5277122EA204C352354B70_RuntimeMethod_var)));
	}

IL_000d:
	{
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.Assert::IsTrue(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsTrue_m274F99147F4EAB4FD10C4BEAFEEC9FA7DF9A9EB1 (bool ___0_status, String_t* ___1_message, const RuntimeMethod* method) 
{
	{
		// if (!status)
		bool L_0 = ___0_status;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		// throw new VBException(message);
		String_t* L_1 = ___1_message;
		VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489* L_2 = (VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		VBException__ctor_mAA2CD9B68883BC301FE0F92D3CA53622A0345DB1(L_2, L_1, (-1), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Assert_IsTrue_m274F99147F4EAB4FD10C4BEAFEEC9FA7DF9A9EB1_RuntimeMethod_var)));
	}

IL_000c:
	{
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.Assert::IsFalse(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsFalse_m9D206557BA0ACE724B22FADBD3154CF6903D97DF (bool ___0_status, String_t* ___1_message, const RuntimeMethod* method) 
{
	{
		// if (status)
		bool L_0 = ___0_status;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		// throw new VBException(message);
		String_t* L_1 = ___1_message;
		VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489* L_2 = (VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		VBException__ctor_mAA2CD9B68883BC301FE0F92D3CA53622A0345DB1(L_2, L_1, (-1), (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Assert_IsFalse_m9D206557BA0ACE724B22FADBD3154CF6903D97DF_RuntimeMethod_var)));
	}

IL_000c:
	{
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.Assert::IsNotZero(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsNotZero_mDA41B2F60467F14027CA149BE6CD9D95FCB76061 (int32_t ___0_value, String_t* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_AreNotEqual_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9C31F17B1F86EF8A55559678E798FB6CA0DAE393_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AreNotEqual(value, 0, message);
		int32_t L_0 = ___0_value;
		String_t* L_1 = ___1_message;
		Assert_AreNotEqual_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9C31F17B1F86EF8A55559678E798FB6CA0DAE393(L_0, 0, L_1, Assert_AreNotEqual_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9C31F17B1F86EF8A55559678E798FB6CA0DAE393_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.Assert::IsNotNullOrEmpty(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsNotNullOrEmpty_m53BB2D375D164967F21495F18416D175794300AC (String_t* ___0_value, String_t* ___1_message, const RuntimeMethod* method) 
{
	{
		// IsFalse(string.IsNullOrEmpty(value), message);
		String_t* L_0 = ___0_value;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		String_t* L_2 = ___1_message;
		Assert_IsFalse_m9D206557BA0ACE724B22FADBD3154CF6903D97DF(L_1, L_2, NULL);
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
// System.Void VoxelBusters.CoreLibrary.DebugLogger::SetLogLevel(VoxelBusters.CoreLibrary.DebugLogger/LogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogger_SetLogLevel_m4140075F25E45DE82DFC6B231699F84A1689C179 (int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugLogger_t00BCF0F5494A633B6B5483F0A4B79C39F8F40623_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_logLevel  = value;
		int32_t L_0 = ___0_value;
		((DebugLogger_t00BCF0F5494A633B6B5483F0A4B79C39F8F40623_StaticFields*)il2cpp_codegen_static_fields_for(DebugLogger_t00BCF0F5494A633B6B5483F0A4B79C39F8F40623_il2cpp_TypeInfo_var))->___s_logLevel_0 = L_0;
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.DebugLogger::Log(System.String,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogger_Log_m47EF53F755D0D94C8B8656BA2AB14408685793BA (String_t* ___0_message, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35237BA71FF80F7404066B4FF18F017E74DED48A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IgnoreLog(LogLevel.Info))
		bool L_0;
		L_0 = DebugLogger_IgnoreLog_m210DFE3E098333B2038B45932A5F9D743BF20F82(0, NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// var     formattedMessage    = "[VoxelBusters] " + message;
		String_t* L_1 = ___0_message;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral35237BA71FF80F7404066B4FF18F017E74DED48A, L_1, NULL);
		// Debug.Log(formattedMessage, context);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3 = ___1_context;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.DebugLogger::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogger_LogFormat_m7A89A4D2752A714DC0447CF8F103D64B563C4BBB (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_arguments, const RuntimeMethod* method) 
{
	{
		// LogFormat(null, format, arguments);
		String_t* L_0 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_arguments;
		DebugLogger_LogFormat_mDE23A7696433FF078DB4F7D6C590EA0D6CD44D01((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.DebugLogger::LogFormat(UnityEngine.Object,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogger_LogFormat_mDE23A7696433FF078DB4F7D6C590EA0D6CD44D01 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_context, String_t* ___1_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_arguments, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35237BA71FF80F7404066B4FF18F017E74DED48A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IgnoreLog(LogLevel.Info))
		bool L_0;
		L_0 = DebugLogger_IgnoreLog_m210DFE3E098333B2038B45932A5F9D743BF20F82(0, NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// var     formattedMessage    = "[VoxelBusters] " + string.Format(format, arguments);
		String_t* L_1 = ___1_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_arguments;
		String_t* L_3;
		L_3 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_1, L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral35237BA71FF80F7404066B4FF18F017E74DED48A, L_3, NULL);
		// Debug.Log(formattedMessage, context);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_5 = ___0_context;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.DebugLogger::LogWarning(System.String,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogger_LogWarning_mBD5E3FC82F3C0B0DEB67FDD9B622A15DA28DE86D (String_t* ___0_message, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35237BA71FF80F7404066B4FF18F017E74DED48A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IgnoreLog(LogLevel.Warning))
		bool L_0;
		L_0 = DebugLogger_IgnoreLog_m210DFE3E098333B2038B45932A5F9D743BF20F82(1, NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// var     formattedMessage    = "[VoxelBusters] " + message;
		String_t* L_1 = ___0_message;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral35237BA71FF80F7404066B4FF18F017E74DED48A, L_1, NULL);
		// Debug.LogWarning(formattedMessage, context);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3 = ___1_context;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.DebugLogger::LogWarningFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogger_LogWarningFormat_m44177A894EE5E7AA1068827FC97A5C8C0C71A208 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_arguments, const RuntimeMethod* method) 
{
	{
		// LogWarningFormat(null, format, arguments);
		String_t* L_0 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_arguments;
		DebugLogger_LogWarningFormat_m005C9726454C1826E44BD809B3A2307D6FBE05C9((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.DebugLogger::LogWarningFormat(UnityEngine.Object,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogger_LogWarningFormat_m005C9726454C1826E44BD809B3A2307D6FBE05C9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_context, String_t* ___1_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_arguments, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35237BA71FF80F7404066B4FF18F017E74DED48A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IgnoreLog(LogLevel.Warning))
		bool L_0;
		L_0 = DebugLogger_IgnoreLog_m210DFE3E098333B2038B45932A5F9D743BF20F82(1, NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// var     formattedMessage    = "[VoxelBusters] " + string.Format(format, arguments);
		String_t* L_1 = ___1_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_arguments;
		String_t* L_3;
		L_3 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_1, L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral35237BA71FF80F7404066B4FF18F017E74DED48A, L_3, NULL);
		// Debug.LogWarning(formattedMessage, context);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_5 = ___0_context;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.DebugLogger::LogError(System.String,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogger_LogError_m0B0702336C201F086F6FB45FC89E33F7FC407E61 (String_t* ___0_message, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35237BA71FF80F7404066B4FF18F017E74DED48A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IgnoreLog(LogLevel.Error))
		bool L_0;
		L_0 = DebugLogger_IgnoreLog_m210DFE3E098333B2038B45932A5F9D743BF20F82(2, NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// var     formattedMessage    = "[VoxelBusters] " + message;
		String_t* L_1 = ___0_message;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral35237BA71FF80F7404066B4FF18F017E74DED48A, L_1, NULL);
		// Debug.LogError(formattedMessage, context);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3 = ___1_context;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.DebugLogger::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogger_LogErrorFormat_m7B088A66F3101A0656379584146156EC0ACABD86 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_arguments, const RuntimeMethod* method) 
{
	{
		// LogErrorFormat(null, format, arguments);
		String_t* L_0 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_arguments;
		DebugLogger_LogErrorFormat_mECE51A3FEBF349CCC63586168621EA1B221F3638((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.DebugLogger::LogErrorFormat(UnityEngine.Object,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogger_LogErrorFormat_mECE51A3FEBF349CCC63586168621EA1B221F3638 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_context, String_t* ___1_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_arguments, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35237BA71FF80F7404066B4FF18F017E74DED48A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IgnoreLog(LogLevel.Error))
		bool L_0;
		L_0 = DebugLogger_IgnoreLog_m210DFE3E098333B2038B45932A5F9D743BF20F82(2, NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// var     formattedMessage    = "[VoxelBusters] " + string.Format(format, arguments);
		String_t* L_1 = ___1_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_arguments;
		String_t* L_3;
		L_3 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(L_1, L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral35237BA71FF80F7404066B4FF18F017E74DED48A, L_3, NULL);
		// Debug.LogError(formattedMessage, context);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_5 = ___0_context;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.DebugLogger::LogException(System.Exception,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogger_LogException_m364F087AD666D272579E5EA51B11E8EA3AD0CAEE (Exception_t* ___0_exception, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IgnoreLog(LogLevel.Critical))
		bool L_0;
		L_0 = DebugLogger_IgnoreLog_m210DFE3E098333B2038B45932A5F9D743BF20F82(3, NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// Debug.LogException(exception, context);
		Exception_t* L_1 = ___0_exception;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2 = ___1_context;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogException_mD4CF3A9C64D8D4BA0570D529E705D134A9A5E498(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Boolean VoxelBusters.CoreLibrary.DebugLogger::IgnoreLog(VoxelBusters.CoreLibrary.DebugLogger/LogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DebugLogger_IgnoreLog_m210DFE3E098333B2038B45932A5F9D743BF20F82 (int32_t ___0_level, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugLogger_t00BCF0F5494A633B6B5483F0A4B79C39F8F40623_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (level < s_logLevel);
		int32_t L_0 = ___0_level;
		int32_t L_1 = ((DebugLogger_t00BCF0F5494A633B6B5483F0A4B79C39F8F40623_StaticFields*)il2cpp_codegen_static_fields_for(DebugLogger_t00BCF0F5494A633B6B5483F0A4B79C39F8F40623_il2cpp_TypeInfo_var))->___s_logLevel_0;
		return (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
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
// VoxelBusters.CoreLibrary.UnityPackageDefinition VoxelBusters.CoreLibrary.CoreLibrarySettings::get_Package()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* CoreLibrarySettings_get_Package_m842A3DDBE3214F2B675AFF0B3E15720A9D2AF94B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreLibrarySettings_t98C8916E04DAD5515C6F71FFA5EDE4CA306BEBEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral161DE1F4646BAB73BA57BE2D847E3B821EF2362A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BE14190ED352F27CF0B99DCF3AE6D27EE9CCFBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6CD9AC5407C25DC7003CF4BA675B23609D7F1F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEDF7892A254ADF90ABF5856512A230790CB64C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA27DF071A1AD8629847ED24B0C587EFDDD36D5E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (s_package == null)
		UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* L_0 = ((CoreLibrarySettings_t98C8916E04DAD5515C6F71FFA5EDE4CA306BEBEE_StaticFields*)il2cpp_codegen_static_fields_for(CoreLibrarySettings_t98C8916E04DAD5515C6F71FFA5EDE4CA306BEBEE_il2cpp_TypeInfo_var))->___s_package_0;
		if (L_0)
		{
			goto IL_002b;
		}
	}
	{
		// s_package   = new UnityPackageDefinition(
		//     name: "com.voxelbusters.corelibrary",
		//     displayName: "Core Library",
		//     version: "1.0.0",
		//     defaultInstallPath: $"Assets/Plugins/VoxelBusters/CoreLibrary");
		UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* L_1 = (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4*)il2cpp_codegen_object_new(UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityPackageDefinition__ctor_m839967524CCE5B6D7F43EC5C794E3B59186E1D38(L_1, _stringLiteral161DE1F4646BAB73BA57BE2D847E3B821EF2362A, _stringLiteralEA27DF071A1AD8629847ED24B0C587EFDDD36D5E, _stringLiteralBEDF7892A254ADF90ABF5856512A230790CB64C1, _stringLiteralB6CD9AC5407C25DC7003CF4BA675B23609D7F1F2, _stringLiteral6BE14190ED352F27CF0B99DCF3AE6D27EE9CCFBB, (String_t*)NULL, NULL);
		((CoreLibrarySettings_t98C8916E04DAD5515C6F71FFA5EDE4CA306BEBEE_StaticFields*)il2cpp_codegen_static_fields_for(CoreLibrarySettings_t98C8916E04DAD5515C6F71FFA5EDE4CA306BEBEE_il2cpp_TypeInfo_var))->___s_package_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((CoreLibrarySettings_t98C8916E04DAD5515C6F71FFA5EDE4CA306BEBEE_StaticFields*)il2cpp_codegen_static_fields_for(CoreLibrarySettings_t98C8916E04DAD5515C6F71FFA5EDE4CA306BEBEE_il2cpp_TypeInfo_var))->___s_package_0), (void*)L_1);
	}

IL_002b:
	{
		// return s_package;
		UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* L_2 = ((CoreLibrarySettings_t98C8916E04DAD5515C6F71FFA5EDE4CA306BEBEE_StaticFields*)il2cpp_codegen_static_fields_for(CoreLibrarySettings_t98C8916E04DAD5515C6F71FFA5EDE4CA306BEBEE_il2cpp_TypeInfo_var))->___s_package_0;
		return L_2;
	}
}
// System.String VoxelBusters.CoreLibrary.CoreLibrarySettings::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CoreLibrarySettings_get_Name_m8D624972080ECAF3CC793445A71B92944BB06D97 (const RuntimeMethod* method) 
{
	{
		// public static string Name => Package.Name;
		UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* L_0;
		L_0 = CoreLibrarySettings_get_Package_m842A3DDBE3214F2B675AFF0B3E15720A9D2AF94B(NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UnityPackageDefinition_get_Name_m46EA77ABFE4D2F9888788AA7D293346CFB69F98C_inline(L_0, NULL);
		return L_1;
	}
}
// System.String VoxelBusters.CoreLibrary.CoreLibrarySettings::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CoreLibrarySettings_get_DisplayName_m7C010B0942CAB2D3EF80698CA832968BE76F263D (const RuntimeMethod* method) 
{
	{
		// public static string DisplayName => Package.DisplayName;
		UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* L_0;
		L_0 = CoreLibrarySettings_get_Package_m842A3DDBE3214F2B675AFF0B3E15720A9D2AF94B(NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UnityPackageDefinition_get_DisplayName_m4E6C2C6137877D7306D7C686B7F927EE52F772A3_inline(L_0, NULL);
		return L_1;
	}
}
// System.String VoxelBusters.CoreLibrary.CoreLibrarySettings::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CoreLibrarySettings_get_Version_m0A9EF6D8621561491608E7B5E6A362AAD332DD9B (const RuntimeMethod* method) 
{
	{
		// public static string Version => Package.Version;
		UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* L_0;
		L_0 = CoreLibrarySettings_get_Package_m842A3DDBE3214F2B675AFF0B3E15720A9D2AF94B(NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UnityPackageDefinition_get_Version_mE7D31494D4153ADB62F4917F29C4C7321C3C34AF_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void VoxelBusters.CoreLibrary.CoreLibrarySettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreLibrarySettings__ctor_m52057D9B4A6A6C05B75FC5BB176338037313759E (CoreLibrarySettings_t98C8916E04DAD5515C6F71FFA5EDE4CA306BEBEE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void VoxelBusters.CoreLibrary.SettingsObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsObject__ctor_m9D55A12DEDFA092EC543BC6314CD14A28CCC28D6 (SettingsObject_tAA894A5065E21DE53DD53E99D31AAFAAB9B3A1F6* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void VoxelBusters.CoreLibrary.ApplicationServices::SetApplicationPaused(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationServices_SetApplicationPaused_m84B8BC1CEBF90501F57930B1DF357526AA0277C4 (bool ___0_pause, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationServices_tCDA3042D8169655D158C8555E9F1E05139B0E1E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (pause)
		bool L_0 = ___0_pause;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// s_originalTimeScale = Time.timeScale;
		float L_1;
		L_1 = Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616(NULL);
		il2cpp_codegen_runtime_class_init_inline(ApplicationServices_tCDA3042D8169655D158C8555E9F1E05139B0E1E0_il2cpp_TypeInfo_var);
		((ApplicationServices_tCDA3042D8169655D158C8555E9F1E05139B0E1E0_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationServices_tCDA3042D8169655D158C8555E9F1E05139B0E1E0_il2cpp_TypeInfo_var))->___s_originalTimeScale_0 = L_1;
		// Time.timeScale      = 0f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		return;
	}

IL_0018:
	{
		// Time.timeScale      = s_originalTimeScale;
		il2cpp_codegen_runtime_class_init_inline(ApplicationServices_tCDA3042D8169655D158C8555E9F1E05139B0E1E0_il2cpp_TypeInfo_var);
		float L_2 = ((ApplicationServices_tCDA3042D8169655D158C8555E9F1E05139B0E1E0_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationServices_tCDA3042D8169655D158C8555E9F1E05139B0E1E0_il2cpp_TypeInfo_var))->___s_originalTimeScale_0;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331(L_2, NULL);
		// }
		return;
	}
}
// UnityEngine.RuntimePlatform VoxelBusters.CoreLibrary.ApplicationServices::GetActiveOrSimulationPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ApplicationServices_GetActiveOrSimulationPlatform_m4C629BD76B01D14CCB10BC5D0C46BE60CF826CAD (const RuntimeMethod* method) 
{
	{
		// return Application.platform;
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		return L_0;
	}
}
// System.Boolean VoxelBusters.CoreLibrary.ApplicationServices::IsPlayingOrSimulatingMobilePlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ApplicationServices_IsPlayingOrSimulatingMobilePlatform_m134E29416D1DFA58E929055134937F4AABA15BC6 (const RuntimeMethod* method) 
{
	{
		// return Application.isMobilePlatform;
		bool L_0;
		L_0 = Application_get_isMobilePlatform_mE0BBFDE72BBFE5877581FA67DDBBFC397608AFCA(NULL);
		return L_0;
	}
}
// System.Void VoxelBusters.CoreLibrary.ApplicationServices::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationServices__cctor_m9E8B1DFD18500401B5098F79D9D4B0B10E7C2B32 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationServices_tCDA3042D8169655D158C8555E9F1E05139B0E1E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private     static      float       s_originalTimeScale     = Time.timeScale;
		float L_0;
		L_0 = Time_get_timeScale_m1F45A413D4EEA08B1E0988022512C137F6C1E616(NULL);
		((ApplicationServices_tCDA3042D8169655D158C8555E9F1E05139B0E1E0_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationServices_tCDA3042D8169655D158C8555E9F1E05139B0E1E0_il2cpp_TypeInfo_var))->___s_originalTimeScale_0 = L_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.GameObject VoxelBusters.CoreLibrary.GameObjectUtility::CreateChild(System.String,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObjectUtility_CreateChild_m50AE18DB148E0B443474CF983F5CC8E94A7F5DFB (String_t* ___0_childName, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method) 
{
	{
		// return CreateChild(childName, Vector3.zero, Quaternion.identity, Vector3.one, parent);
		String_t* L_0 = ___0_childName;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___1_parent;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObjectUtility_CreateChild_mB1D94E3BE6CF23BC871FA06CB5C88DB54B1AEDC4(L_0, L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// UnityEngine.GameObject VoxelBusters.CoreLibrary.GameObjectUtility::CreateChild(System.String,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObjectUtility_CreateChild_mB1D94E3BE6CF23BC871FA06CB5C88DB54B1AEDC4 (String_t* ___0_childName, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_localPosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_localRotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_localScale, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___4_parent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	{
		// var     containerGO     = (parent is RectTransform) ? new GameObject(childName, typeof(RectTransform)) : new GameObject(childName);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___4_parent;
		if (((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_0, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)))
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ___0_childName;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_2, L_1, NULL);
		G_B3_0 = L_2;
		goto IL_002a;
	}

IL_0011:
	{
		String_t* L_3 = ___0_childName;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_4 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_5 = L_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		GameObject__ctor_m721D643351E55308EA4F5F41B67D5446D11C61F0(L_8, L_3, L_5, NULL);
		G_B3_0 = L_8;
	}

IL_002a:
	{
		// var     containerTrans          = containerGO.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = G_B3_0;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		// containerTrans.SetParent(parent);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = L_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = ___4_parent;
		NullCheck(L_11);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_11, L_12, NULL);
		// containerTrans.localPosition    = localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = L_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___1_localPosition;
		NullCheck(L_13);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_13, L_14, NULL);
		// containerTrans.localRotation    = localRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = L_13;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___2_localRotation;
		NullCheck(L_15);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_15, L_16, NULL);
		// containerTrans.localScale       = localScale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___3_localScale;
		NullCheck(L_15);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_15, L_17, NULL);
		// return containerGO;
		return L_9;
	}
}
// System.Void VoxelBusters.CoreLibrary.GameObjectUtility::SetActive(UnityEngine.GameObject[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectUtility_SetActive_m2FF66AA7A45D769C3252867825F16BC7CF97CF08 (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___0_gameObjects, bool ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int iter = 0; iter < gameObjects.Length; iter++)
		V_0 = 0;
		goto IL_0011;
	}

IL_0004:
	{
		// gameObjects[iter].SetActive(value);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = ___0_gameObjects;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		bool L_4 = ___1_value;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, L_4, NULL);
		// for (int iter = 0; iter < gameObjects.Length; iter++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0011:
	{
		// for (int iter = 0; iter < gameObjects.Length; iter++)
		int32_t L_6 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = ___0_gameObjects;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
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
// System.String VoxelBusters.CoreLibrary.IOServices::CombinePath(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IOServices_CombinePath_m64C44812631446719FAE4B96E893C764979BDEBE (String_t* ___0_path1, String_t* ___1_path2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Path.Combine(path1, path2);
		String_t* L_0 = ___0_path1;
		String_t* L_1 = ___1_path2;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_0, L_1, NULL);
		return L_2;
	}
}
// System.String VoxelBusters.CoreLibrary.IOServices::GetAbsolutePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IOServices_GetAbsolutePath_m2153FFA09ACA347565B1A4CBC2DDC2B112A662CA (String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(path))
		String_t* L_0 = ___0_path;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return Environment.CurrentDirectory;
		String_t* L_2;
		L_2 = Environment_get_CurrentDirectory_m96621163A47F5BE09FEBA00EB4644EE115B5E259(NULL);
		return L_2;
	}

IL_000e:
	{
		// return Path.GetFullPath(path);
		String_t* L_3 = ___0_path;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = Path_GetFullPath_m9E485D7D38A868A6A5863CBD24677231288EECE2(L_3, NULL);
		return L_4;
	}
}
// System.String VoxelBusters.CoreLibrary.IOServices::GetRelativePath(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IOServices_GetRelativePath_mE49BCA04CC1D0359DBD28812C6A347F7AFD6EDD4 (String_t* ___0_referencePath, String_t* ___1_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8B9C90519031D6F6CFC9E8A7CE4CB5BA59C8284);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* V_1 = NULL;
	{
		// string  directorySeparatorChar  = Path.DirectorySeparatorChar.ToString();
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2), NULL);
		V_0 = L_0;
		// if (!referencePath.EndsWith(directorySeparatorChar))
		String_t* L_1 = ___0_referencePath;
		String_t* L_2 = V_0;
		NullCheck(L_1);
		bool L_3;
		L_3 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_1, L_2, NULL);
		if (L_3)
		{
			goto IL_003c;
		}
	}
	{
		// referencePath      += Path.DirectorySeparatorChar;
		String_t* L_4 = ___0_referencePath;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2), NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_4, L_5, NULL);
		___0_referencePath = L_6;
		// if (referencePath.StartsWith(directorySeparatorChar))
		String_t* L_7 = ___0_referencePath;
		String_t* L_8 = V_0;
		NullCheck(L_7);
		bool L_9;
		L_9 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_003c;
		}
	}
	{
		// referencePath += "a.tmp";
		String_t* L_10 = ___0_referencePath;
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_10, _stringLiteralA8B9C90519031D6F6CFC9E8A7CE4CB5BA59C8284, NULL);
		___0_referencePath = L_11;
	}

IL_003c:
	{
		// var     referenceUri    = new Uri(referencePath);
		String_t* L_12 = ___0_referencePath;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_13 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A(L_13, L_12, NULL);
		// var     pathUri         = new Uri(path);
		String_t* L_14 = ___1_path;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_15 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A(L_15, L_14, NULL);
		V_1 = L_15;
		// var     relativeUri     = referenceUri.MakeRelativeUri(pathUri);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_16 = V_1;
		NullCheck(L_13);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_17;
		L_17 = Uri_MakeRelativeUri_m381F6F3A899125AAA7AE9374CDB794E84D17075C(L_13, L_16, NULL);
		// return Uri.UnescapeDataString(relativeUri.ToString().Replace('/', Path.DirectorySeparatorChar));
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_17);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_19 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2;
		NullCheck(L_18);
		String_t* L_20;
		L_20 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_18, ((int32_t)47), L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		String_t* L_21;
		L_21 = Uri_UnescapeDataString_m095AF55EE0F237A44FC8A53D2EE6FA66A567634D(L_20, NULL);
		return L_21;
	}
}
// System.Boolean VoxelBusters.CoreLibrary.IOServices::IsDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IOServices_IsDirectory_mCB3C142F72E575316A9365F2E02CC52B2CDFF837 (String_t* ___0_path, const RuntimeMethod* method) 
{
	{
		// var     attr    = File.GetAttributes(path);
		String_t* L_0 = ___0_path;
		int32_t L_1;
		L_1 = File_GetAttributes_mA6F7E4345FF27BF66C1EB8F2AE3BF03ACF4868CA(L_0, NULL);
		// return ((attr & FileAttributes.Directory) == FileAttributes.Directory);
		return (bool)((((int32_t)((int32_t)((int32_t)L_1&((int32_t)16)))) == ((int32_t)((int32_t)16)))? 1 : 0);
	}
}
// System.Boolean VoxelBusters.CoreLibrary.IOServices::CreateDirectory(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IOServices_CreateDirectory_m1AEDF4D5DD44E6F1058114E1D90565CBEF683084 (String_t* ___0_path, bool ___1_overwrite, const RuntimeMethod* method) 
{
	{
		// if (DirectoryExists(path))
		String_t* L_0 = ___0_path;
		bool L_1;
		L_1 = IOServices_DirectoryExists_mB580B5DACEFE1E1C19871B24F03AA25A73A0511A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if (!overwrite)
		bool L_2 = ___1_overwrite;
		if (L_2)
		{
			goto IL_000d;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000d:
	{
		// DeleteDirectory(path, true);
		String_t* L_3 = ___0_path;
		IOServices_DeleteDirectory_mE6D082854DFB9D2435723F24C9E6F3A1884F1500(L_3, (bool)1, (bool)0, NULL);
	}

IL_0015:
	{
		// Directory.CreateDirectory(path);
		String_t* L_4 = ___0_path;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_5;
		L_5 = Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F(L_4, NULL);
		// return true;
		return (bool)1;
	}
}
// System.Void VoxelBusters.CoreLibrary.IOServices::DeleteDirectory(System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOServices_DeleteDirectory_mE6D082854DFB9D2435723F24C9E6F3A1884F1500 (String_t* ___0_path, bool ___1_recursive, bool ___2_throwError, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* V_0 = NULL;
	{
		// var     directoryInfo   = new DirectoryInfo(path);
		String_t* L_0 = ___0_path;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_1 = (DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2*)il2cpp_codegen_object_new(DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		DirectoryInfo__ctor_m36BC476C58B55083046C0A738157D84E2323E0E9(L_1, L_0, NULL);
		V_0 = L_1;
		// if (!directoryInfo.Exists)
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.FileSystemInfo::get_Exists() */, L_2);
		if (L_3)
		{
			goto IL_0019;
		}
	}
	{
		// if (throwError)
		bool L_4 = ___2_throwError;
		if (!L_4)
		{
			goto IL_0018;
		}
	}
	{
		// throw new FileNotFoundException();
		FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* L_5 = (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		FileNotFoundException__ctor_m02E41C66D9C7421CF93252AEE29CF96C15CA6E0B(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOServices_DeleteDirectory_mE6D082854DFB9D2435723F24C9E6F3A1884F1500_RuntimeMethod_var)));
	}

IL_0018:
	{
		// return;
		return;
	}

IL_0019:
	{
		// directoryInfo.Delete(recursive);
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_6 = V_0;
		bool L_7 = ___1_recursive;
		NullCheck(L_6);
		DirectoryInfo_Delete_mF79B7BBC51DC847268E2EB216FBBF5412C9E870C(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.IOServices::ClearDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOServices_ClearDirectory_m8E577D2FCAE28B34423272991ACE2C07C88E246C (String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* V_0 = NULL;
	FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6* V_1 = NULL;
	int32_t V_2 = 0;
	DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953* V_3 = NULL;
	{
		// var     directoryInfo   = new DirectoryInfo(path);
		String_t* L_0 = ___0_path;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_1 = (DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2*)il2cpp_codegen_object_new(DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		DirectoryInfo__ctor_m36BC476C58B55083046C0A738157D84E2323E0E9(L_1, L_0, NULL);
		V_0 = L_1;
		// if (directoryInfo.Exists)
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.FileSystemInfo::get_Exists() */, L_2);
		if (!L_3)
		{
			goto IL_004a;
		}
	}
	{
		// foreach (var file in directoryInfo.GetFiles())
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_4 = V_0;
		NullCheck(L_4);
		FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6* L_5;
		L_5 = DirectoryInfo_GetFiles_m998040748717954CDDCE273F61EEC0625069543F(L_4, NULL);
		V_1 = L_5;
		V_2 = 0;
		goto IL_0026;
	}

IL_001a:
	{
		// foreach (var file in directoryInfo.GetFiles())
		FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6* L_6 = V_1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		// file.Delete();
		NullCheck(L_9);
		VirtualActionInvoker0::Invoke(11 /* System.Void System.IO.FileSystemInfo::Delete() */, L_9);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0026:
	{
		// foreach (var file in directoryInfo.GetFiles())
		int32_t L_11 = V_2;
		FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6* L_12 = V_1;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		// foreach (var dir in directoryInfo.GetDirectories())
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_13 = V_0;
		NullCheck(L_13);
		DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953* L_14;
		L_14 = DirectoryInfo_GetDirectories_m2EC8498544C3A85EF92273330858E03B284C6901(L_13, NULL);
		V_3 = L_14;
		V_2 = 0;
		goto IL_0044;
	}

IL_0037:
	{
		// foreach (var dir in directoryInfo.GetDirectories())
		DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953* L_15 = V_3;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		// dir.Delete(true);
		NullCheck(L_18);
		DirectoryInfo_Delete_mF79B7BBC51DC847268E2EB216FBBF5412C9E870C(L_18, (bool)1, NULL);
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0044:
	{
		// foreach (var dir in directoryInfo.GetDirectories())
		int32_t L_20 = V_2;
		DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953* L_21 = V_3;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0037;
		}
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.String VoxelBusters.CoreLibrary.IOServices::GetDirectoryName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IOServices_GetDirectoryName_m4EDA97247B0B4E2A03CEA7D0D1AB81C5B26E134F (String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Path.GetDirectoryName(path);
		String_t* L_0 = ___0_path;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_GetDirectoryName_m428BADBE493A3927B51A13DEF658929B430516F6(L_0, NULL);
		return L_1;
	}
}
// System.Void VoxelBusters.CoreLibrary.IOServices::CopyDirectory(System.String,System.String,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOServices_CopyDirectory_m3741071F070EEE9742051A5A6C2A2B1E3111F2B9 (String_t* ___0_root, String_t* ___1_dest, bool ___2_recursive, String_t* ___3_filePattern, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B3_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_0 = NULL;
	{
		// if (recursive)
		bool L_0 = ___2_recursive;
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		// foreach (var directory in Directory.GetDirectories(root))
		String_t* L_1 = ___0_root;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = Directory_GetDirectories_m071EF47103F7A38FBF882C900F0A0AFB4326631F(L_1, NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0045;
	}

IL_000e:
	{
		// foreach (var directory in Directory.GetDirectories(root))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		// string  dirName = Path.GetFileName(directory);
		String_t* L_7 = L_6;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_8;
		L_8 = Path_GetFileName_mB1A8CE314EE250B06E3D33142315E2BD3A75D1D6(L_7, NULL);
		V_2 = L_8;
		// if (!Directory.Exists(Path.Combine(dest, dirName)))
		String_t* L_9 = ___1_dest;
		String_t* L_10 = V_2;
		String_t* L_11;
		L_11 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_9, L_10, NULL);
		bool L_12;
		L_12 = Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7(L_11, NULL);
		G_B3_0 = L_7;
		if (L_12)
		{
			G_B4_0 = L_7;
			goto IL_0033;
		}
	}
	{
		// Directory.CreateDirectory(Path.Combine(dest, dirName));
		String_t* L_13 = ___1_dest;
		String_t* L_14 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_15;
		L_15 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_13, L_14, NULL);
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_16;
		L_16 = Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F(L_15, NULL);
		G_B4_0 = G_B3_0;
	}

IL_0033:
	{
		// CopyDirectory(directory, Path.Combine(dest, dirName), recursive, filePattern);
		String_t* L_17 = ___1_dest;
		String_t* L_18 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_19;
		L_19 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_17, L_18, NULL);
		bool L_20 = ___2_recursive;
		String_t* L_21 = ___3_filePattern;
		IOServices_CopyDirectory_m3741071F070EEE9742051A5A6C2A2B1E3111F2B9(G_B4_0, L_19, L_20, L_21, NULL);
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0045:
	{
		// foreach (var directory in Directory.GetDirectories(root))
		int32_t L_23 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = V_0;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_000e;
		}
	}

IL_004b:
	{
		// var     files   = (filePattern == null) ? Directory.GetFiles(root) : Directory.GetFiles(root, filePattern);
		String_t* L_25 = ___3_filePattern;
		if (!L_25)
		{
			goto IL_0057;
		}
	}
	{
		String_t* L_26 = ___0_root;
		String_t* L_27 = ___3_filePattern;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28;
		L_28 = Directory_GetFiles_m35ACD3D557D3B7EF4CF9A7908D2EDA61E6330090(L_26, L_27, NULL);
		G_B9_0 = L_28;
		goto IL_005d;
	}

IL_0057:
	{
		String_t* L_29 = ___0_root;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30;
		L_30 = Directory_GetFiles_m3E6AA407767C85CD62C5FD2750747274D1C4EA76(L_29, NULL);
		G_B9_0 = L_30;
	}

IL_005d:
	{
		// foreach (var file in files)
		V_0 = G_B9_0;
		V_1 = 0;
		goto IL_007c;
	}

IL_0062:
	{
		// foreach (var file in files)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = V_0;
		int32_t L_32 = V_1;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		String_t* L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_3 = L_34;
		// File.Copy(file, Path.Combine(dest, Path.GetFileName(file)));
		String_t* L_35 = V_3;
		String_t* L_36 = ___1_dest;
		String_t* L_37 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_38;
		L_38 = Path_GetFileName_mB1A8CE314EE250B06E3D33142315E2BD3A75D1D6(L_37, NULL);
		String_t* L_39;
		L_39 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_36, L_38, NULL);
		File_Copy_mC698F2F0FF8BBF3339527CD00E57A6D5B26DE4AA(L_35, L_39, NULL);
		int32_t L_40 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_007c:
	{
		// foreach (var file in files)
		int32_t L_41 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = V_0;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0062;
		}
	}
	{
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.IOServices::MoveDirectory(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOServices_MoveDirectory_m59958799F513FF76E78AE35F310710C69F5C7D51 (String_t* ___0_source, String_t* ___1_destination, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// var     parent  = Directory.GetParent(destination);
		String_t* L_0 = ___1_destination;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_1;
		L_1 = Directory_GetParent_mDD1F4DD5F95A5D6676009FB76E5016EDD127FFB2(L_0, NULL);
		// CreateDirectory(parent.FullName);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.IO.FileSystemInfo::get_FullName() */, L_1);
		bool L_3;
		L_3 = IOServices_CreateDirectory_m1AEDF4D5DD44E6F1058114E1D90565CBEF683084(L_2, (bool)0, NULL);
		// Directory.Move(source, destination);
		String_t* L_4 = ___0_source;
		String_t* L_5 = ___1_destination;
		Directory_Move_mA9C7ED31B0223C808C52AC0AF5F4476305DB5D31(L_4, L_5, NULL);
		// }
		goto IL_0022;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001b;
		}
		throw e;
	}

CATCH_001b:
	{// begin catch(System.Exception)
		// Debug.LogException(e);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0022;
	}// end catch (depth: 1)

IL_0022:
	{
		// }
		return;
	}
}
// System.Boolean VoxelBusters.CoreLibrary.IOServices::DirectoryExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IOServices_DirectoryExists_mB580B5DACEFE1E1C19871B24F03AA25A73A0511A (String_t* ___0_path, const RuntimeMethod* method) 
{
	{
		// return Directory.Exists(path);
		String_t* L_0 = ___0_path;
		bool L_1;
		L_1 = Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7(L_0, NULL);
		return L_1;
	}
}
// System.String VoxelBusters.CoreLibrary.IOServices::GetUniquePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IOServices_GetUniquePath_mEBE58E68D8927A4CF6C3588E9241B0C90A2C0E4F (String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// string  uniquePath      = path;
		String_t* L_0 = ___0_path;
		V_0 = L_0;
		// int     tryCount        = 0;
		V_1 = 0;
		goto IL_001c;
	}

IL_0006:
	{
		// uniquePath          = string.Format("{0}{1}", path, ++tryCount);
		String_t* L_1 = ___0_path;
		int32_t L_2 = V_1;
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		V_1 = L_3;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE, L_1, L_5, NULL);
		V_0 = L_6;
	}

IL_001c:
	{
		// while (Directory.Exists(uniquePath))
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7(L_7, NULL);
		if (L_8)
		{
			goto IL_0006;
		}
	}
	{
		// return uniquePath;
		String_t* L_9 = V_0;
		return L_9;
	}
}
// System.String VoxelBusters.CoreLibrary.IOServices::GenerateFileName(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IOServices_GenerateFileName_m2530B893A5261E134343B99AB8A2192167DF5D86 (String_t* ___0_prefix, String_t* ___1_extension, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0C5865675F1EF5AB9E4EA3F72A2A6452608E93E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return $"{prefix}_{DateTime.Now:yyyyMMddHHmmssfff}.{extension}";
		String_t* L_0 = ___0_prefix;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2 = L_1;
		RuntimeObject* L_3 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4 = ___1_extension;
		String_t* L_5;
		L_5 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteralD0C5865675F1EF5AB9E4EA3F72A2A6452608E93E, L_0, L_3, L_4, NULL);
		return L_5;
	}
}
// System.Boolean VoxelBusters.CoreLibrary.IOServices::FileExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IOServices_FileExists_m671E8720CF69CFD1FD088DE87B7AF79014291DBF (String_t* ___0_path, const RuntimeMethod* method) 
{
	{
		// return File.Exists(path);
		String_t* L_0 = ___0_path;
		bool L_1;
		L_1 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_0, NULL);
		return L_1;
	}
}
// System.String VoxelBusters.CoreLibrary.IOServices::GetFileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IOServices_GetFileName_m6CFF1855C5EDF8551CB7FFB0EC5A366D334B7478 (String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Path.GetFileName(path);
		String_t* L_0 = ___0_path;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_GetFileName_mB1A8CE314EE250B06E3D33142315E2BD3A75D1D6(L_0, NULL);
		return L_1;
	}
}
// System.Void VoxelBusters.CoreLibrary.IOServices::CreateFile(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOServices_CreateFile_m549D3DCEFB88D777D97E09D40A58C745231EB7D4 (String_t* ___0_path, String_t* ___1_contents, const RuntimeMethod* method) 
{
	{
		// File.WriteAllText(path, contents);
		String_t* L_0 = ___0_path;
		String_t* L_1 = ___1_contents;
		File_WriteAllText_m8AE8932A417928EF1E86F1E6B37C7A41904614D1(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.IOServices::CreateFile(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOServices_CreateFile_mC96D22CFBD87668C2324B638ACD76BA4F4B1F048 (String_t* ___0_path, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_contents, const RuntimeMethod* method) 
{
	{
		// File.WriteAllBytes(path, contents);
		String_t* L_0 = ___0_path;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_contents;
		File_WriteAllBytes_mC491031DA14AA9B591F62D6AD0181D090E081077(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.String VoxelBusters.CoreLibrary.IOServices::ReadFile(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IOServices_ReadFile_mD180335BE1AB1D7C474B281E934BC2C771399F42 (String_t* ___0_path, const RuntimeMethod* method) 
{
	{
		// return File.ReadAllText(path);
		String_t* L_0 = ___0_path;
		String_t* L_1;
		L_1 = File_ReadAllText_mA4A939F853D573379F7129AFDC469B91E9747BAA(L_0, NULL);
		return L_1;
	}
}
// System.Byte[] VoxelBusters.CoreLibrary.IOServices::ReadFileData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* IOServices_ReadFileData_m9B3AE623EC5DFE865872F89F69146B794E92CA9E (String_t* ___0_path, const RuntimeMethod* method) 
{
	{
		// return File.ReadAllBytes(path);
		String_t* L_0 = ___0_path;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24(L_0, NULL);
		return L_1;
	}
}
// System.Void VoxelBusters.CoreLibrary.IOServices::CopyFile(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOServices_CopyFile_mE92CF39AB453135F138C98AF547299E6ED8C4A24 (String_t* ___0_source, String_t* ___1_destination, bool ___2_overwrite, const RuntimeMethod* method) 
{
	{
		// File.Copy(source, destination, overwrite);
		String_t* L_0 = ___0_source;
		String_t* L_1 = ___1_destination;
		bool L_2 = ___2_overwrite;
		File_Copy_m3798F05909C43D7EA26130D51D0A15CFCBE7458A(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.IOServices::MoveFile(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOServices_MoveFile_mABC455D0949B9E688428F3EEAA5F57E909DBFA9E (String_t* ___0_source, String_t* ___1_destination, const RuntimeMethod* method) 
{
	{
		// if(File.Exists(source))
		String_t* L_0 = ___0_source;
		bool L_1;
		L_1 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_0, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// File.Move(source, destination);
		String_t* L_2 = ___0_source;
		String_t* L_3 = ___1_destination;
		File_Move_mBC9450111E0144A55D893A720F19E612D658AC37(L_2, L_3, NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.IOServices::DeleteFile(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOServices_DeleteFile_m6FE24EE12AA2C5F9E69127E42F7C43545CB06EEA (String_t* ___0_path, bool ___1_throwError, const RuntimeMethod* method) 
{
	{
		// if (!FileExists(path))
		String_t* L_0 = ___0_path;
		bool L_1;
		L_1 = IOServices_FileExists_m671E8720CF69CFD1FD088DE87B7AF79014291DBF(L_0, NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		// if (throwError)
		bool L_2 = ___1_throwError;
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		// throw new FileNotFoundException();
		FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A* L_3 = (FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileNotFoundException_t17F1B49AD996E4A60C87C7ADC9D3A25EB5808A9A_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		FileNotFoundException__ctor_m02E41C66D9C7421CF93252AEE29CF96C15CA6E0B(L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOServices_DeleteFile_m6FE24EE12AA2C5F9E69127E42F7C43545CB06EEA_RuntimeMethod_var)));
	}

IL_0011:
	{
		// return;
		return;
	}

IL_0012:
	{
		// File.Delete(path);
		String_t* L_4 = ___0_path;
		File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386(L_4, NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.IOServices::DeleteFileOrDirectory(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOServices_DeleteFileOrDirectory_m0FDA01329E4B9B935F7A9F108B4234DB0FA8FC7F (String_t* ___0_path, bool ___1_throwError, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* V_0 = NULL;
	{
		// var     fileInfo    = new FileInfo(path);
		String_t* L_0 = ___0_path;
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_1 = (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C*)il2cpp_codegen_object_new(FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FileInfo__ctor_m0A602529DFCFC44BB4EF4C530E6FBA765C44143F(L_1, L_0, NULL);
		V_0 = L_1;
		// if (fileInfo.Exists)
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.FileSystemInfo::get_Exists() */, L_2);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// if ((fileInfo.Attributes & FileAttributes.Directory) != 0)
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = FileSystemInfo_get_Attributes_m38971A5B147214C5EE193CE9F60628EA834EF6DA(L_4, NULL);
		if (!((int32_t)((int32_t)L_5&((int32_t)16))))
		{
			goto IL_0023;
		}
	}
	{
		// DeleteDirectory(path, true, throwError);
		String_t* L_6 = ___0_path;
		bool L_7 = ___1_throwError;
		IOServices_DeleteDirectory_mE6D082854DFB9D2435723F24C9E6F3A1884F1500(L_6, (bool)1, L_7, NULL);
		return;
	}

IL_0023:
	{
		// DeleteFile(path, throwError);
		String_t* L_8 = ___0_path;
		bool L_9 = ___1_throwError;
		IOServices_DeleteFile_m6FE24EE12AA2C5F9E69127E42F7C43545CB06EEA(L_8, L_9, NULL);
	}

IL_002a:
	{
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Type VoxelBusters.CoreLibrary.ReflectionUtility::GetTypeFromCSharpAssembly(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* ReflectionUtility_GetTypeFromCSharpAssembly_mC2E4AE104BB4FC1491F517FED12A2C0664C1D88B (String_t* ___0_typeName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral977A71115E05B54B449539D8B6701AE4DAD2B1BE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetType(kCSharpAssembly, typeName);
		String_t* L_0 = ___0_typeName;
		Type_t* L_1;
		L_1 = ReflectionUtility_GetType_m2025FFED3A239BD12BC7B6D9E3CEBC8F75DFD91D(_stringLiteral977A71115E05B54B449539D8B6701AE4DAD2B1BE, L_0, NULL);
		return L_1;
	}
}
// System.Type VoxelBusters.CoreLibrary.ReflectionUtility::GetTypeFromCSharpFirstPassAssembly(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* ReflectionUtility_GetTypeFromCSharpFirstPassAssembly_m82ADD767F0EAC1E68546665568A5CC80A2348C5A (String_t* ___0_typeName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95675B27AC106EEB6B26B9D45BFB1C7A5F7F6F7D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetType(kCSharpFirstPassAssembly, typeName);
		String_t* L_0 = ___0_typeName;
		Type_t* L_1;
		L_1 = ReflectionUtility_GetType_m2025FFED3A239BD12BC7B6D9E3CEBC8F75DFD91D(_stringLiteral95675B27AC106EEB6B26B9D45BFB1C7A5F7F6F7D, L_0, NULL);
		return L_1;
	}
}
// System.Type VoxelBusters.CoreLibrary.ReflectionUtility::GetType(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* ReflectionUtility_GetType_m2025FFED3A239BD12BC7B6D9E3CEBC8F75DFD91D (String_t* ___0_assemblyName, String_t* ___1_typeName, const RuntimeMethod* method) 
{
	Assembly_t* V_0 = NULL;
	{
		// var targetAssembly  = FindAssemblyWithName(assemblyName);
		String_t* L_0 = ___0_assemblyName;
		Assembly_t* L_1;
		L_1 = ReflectionUtility_FindAssemblyWithName_m450DB8A908F7503FAE1C244917D2C2080CE89D52(L_0, NULL);
		V_0 = L_1;
		// if (targetAssembly != null)
		Assembly_t* L_2 = V_0;
		bool L_3;
		L_3 = Assembly_op_Inequality_m58825496C0F2FD59DFC42085A1E60C69F6DD20F0(L_2, (Assembly_t*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		// return targetAssembly.GetType(typeName, false);
		Assembly_t* L_4 = V_0;
		String_t* L_5 = ___1_typeName;
		NullCheck(L_4);
		Type_t* L_6;
		L_6 = VirtualFuncInvoker2< Type_t*, String_t*, bool >::Invoke(17 /* System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean) */, L_4, L_5, (bool)0);
		return L_6;
	}

IL_0019:
	{
		// return null;
		return (Type_t*)NULL;
	}
}
// System.Reflection.Assembly VoxelBusters.CoreLibrary.ReflectionUtility::FindAssemblyWithName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assembly_t* ReflectionUtility_FindAssemblyWithName_m450DB8A908F7503FAE1C244917D2C2080CE89D52 (String_t* ___0_assemblyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Find_TisAssembly_t_m69D7963E7C3F19E3FD5B7D9FE783F9F7DF083DB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t877E877D4EA2E6B0BB21BB8CB526484EF9F3F52E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3CFindAssemblyWithNameU3Eb__0_mD254DF947833C2F606C34730947BA42BD9ED53CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_tDA27EFFEDC489B135075AE1E3634B2D41E115EBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_tDA27EFFEDC489B135075AE1E3634B2D41E115EBB* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass5_0_tDA27EFFEDC489B135075AE1E3634B2D41E115EBB* L_0 = (U3CU3Ec__DisplayClass5_0_tDA27EFFEDC489B135075AE1E3634B2D41E115EBB*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_tDA27EFFEDC489B135075AE1E3634B2D41E115EBB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass5_0__ctor_m0A304508784FD4B50D019359DA48DF44D5680529(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_tDA27EFFEDC489B135075AE1E3634B2D41E115EBB* L_1 = V_0;
		String_t* L_2 = ___0_assemblyName;
		NullCheck(L_1);
		L_1->___assemblyName_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___assemblyName_0), (void*)L_2);
		// return Array.Find(AppDomain.CurrentDomain.GetAssemblies(), (item) =>
		// {
		//     return string.Equals(item.GetName().Name, assemblyName);
		// });
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_3;
		L_3 = AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667(NULL);
		NullCheck(L_3);
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_4;
		L_4 = AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249(L_3, NULL);
		U3CU3Ec__DisplayClass5_0_tDA27EFFEDC489B135075AE1E3634B2D41E115EBB* L_5 = V_0;
		Predicate_1_t877E877D4EA2E6B0BB21BB8CB526484EF9F3F52E* L_6 = (Predicate_1_t877E877D4EA2E6B0BB21BB8CB526484EF9F3F52E*)il2cpp_codegen_object_new(Predicate_1_t877E877D4EA2E6B0BB21BB8CB526484EF9F3F52E_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Predicate_1__ctor_m48B6BB78EBAEDDBE451D41754CCD6E6A179AA237(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3CFindAssemblyWithNameU3Eb__0_mD254DF947833C2F606C34730947BA42BD9ED53CD_RuntimeMethod_var), NULL);
		Assembly_t* L_7;
		L_7 = Array_Find_TisAssembly_t_m69D7963E7C3F19E3FD5B7D9FE783F9F7DF083DB5(L_4, L_6, Array_Find_TisAssembly_t_m69D7963E7C3F19E3FD5B7D9FE783F9F7DF083DB5_RuntimeMethod_var);
		return L_7;
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
// System.Void VoxelBusters.CoreLibrary.ReflectionUtility/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m0A304508784FD4B50D019359DA48DF44D5680529 (U3CU3Ec__DisplayClass5_0_tDA27EFFEDC489B135075AE1E3634B2D41E115EBB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean VoxelBusters.CoreLibrary.ReflectionUtility/<>c__DisplayClass5_0::<FindAssemblyWithName>b__0(System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass5_0_U3CFindAssemblyWithNameU3Eb__0_mD254DF947833C2F606C34730947BA42BD9ED53CD (U3CU3Ec__DisplayClass5_0_tDA27EFFEDC489B135075AE1E3634B2D41E115EBB* __this, Assembly_t* ___0_item, const RuntimeMethod* method) 
{
	{
		// return string.Equals(item.GetName().Name, assemblyName);
		Assembly_t* L_0 = ___0_item;
		NullCheck(L_0);
		AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* L_1;
		L_1 = VirtualFuncInvoker0< AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* >::Invoke(20 /* System.Reflection.AssemblyName System.Reflection.Assembly::GetName() */, L_0);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = AssemblyName_get_Name_m7899B9B3F289EEBAF62AEAB51D1CA91DA92C4E6A_inline(L_1, NULL);
		String_t* L_3 = __this->___assemblyName_0;
		bool L_4;
		L_4 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_2, L_3, NULL);
		return L_4;
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
// System.Void VoxelBusters.CoreLibrary.ScreenUtility::CaptureFrame(VoxelBusters.CoreLibrary.Callback`1<UnityEngine.Texture2D>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenUtility_CaptureFrame_m4121C95B7C71DDBF8006807181FC9CE8EFB9348D (Callback_1_t45CF87BD031D91AA8EE1A5E4F183D27CB925DC5E* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Callback_1_t45CF87BD031D91AA8EE1A5E4F183D27CB925DC5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrivateSingletonBehaviour_1_GetSingleton_m32958FD4F5FAA1A9B10E82E2B04F724748F77AE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrivateSingletonBehaviour_1_tD719FD1AEB686D10D356594D720E77755FA8781F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var     instance        = GetSingleton();
		il2cpp_codegen_runtime_class_init_inline(PrivateSingletonBehaviour_1_tD719FD1AEB686D10D356594D720E77755FA8781F_il2cpp_TypeInfo_var);
		ScreenUtility_t786316A2864D43D72F0DB7C56A661CA5C6DE086D* L_0;
		L_0 = PrivateSingletonBehaviour_1_GetSingleton_m32958FD4F5FAA1A9B10E82E2B04F724748F77AE2(PrivateSingletonBehaviour_1_GetSingleton_m32958FD4F5FAA1A9B10E82E2B04F724748F77AE2_RuntimeMethod_var);
		// instance.m_captureFrame = true;
		ScreenUtility_t786316A2864D43D72F0DB7C56A661CA5C6DE086D* L_1 = L_0;
		NullCheck(L_1);
		L_1->___m_captureFrame_10 = (bool)1;
		// instance.m_callback    += callback;
		ScreenUtility_t786316A2864D43D72F0DB7C56A661CA5C6DE086D* L_2 = L_1;
		NullCheck(L_2);
		Callback_1_t45CF87BD031D91AA8EE1A5E4F183D27CB925DC5E* L_3 = L_2->___m_callback_11;
		Callback_1_t45CF87BD031D91AA8EE1A5E4F183D27CB925DC5E* L_4 = ___0_callback;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		NullCheck(L_2);
		L_2->___m_callback_11 = ((Callback_1_t45CF87BD031D91AA8EE1A5E4F183D27CB925DC5E*)Castclass((RuntimeObject*)L_5, Callback_1_t45CF87BD031D91AA8EE1A5E4F183D27CB925DC5E_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___m_callback_11), (void*)((Callback_1_t45CF87BD031D91AA8EE1A5E4F183D27CB925DC5E*)Castclass((RuntimeObject*)L_5, Callback_1_t45CF87BD031D91AA8EE1A5E4F183D27CB925DC5E_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.ScreenUtility::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenUtility_LateUpdate_m095499E982C6CA5D016B06534849B89B32836BA9 (ScreenUtility_t786316A2864D43D72F0DB7C56A661CA5C6DE086D* __this, const RuntimeMethod* method) 
{
	{
		// if (m_captureFrame)
		bool L_0 = __this->___m_captureFrame_10;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		// m_captureFrame  = false;
		__this->___m_captureFrame_10 = (bool)0;
		// StartCoroutine(CaptureFrameRoutine());
		RuntimeObject* L_1;
		L_1 = ScreenUtility_CaptureFrameRoutine_mD34C7FB45F075F9EAB19DB1D56FE8F1D730D101E(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator VoxelBusters.CoreLibrary.ScreenUtility::CaptureFrameRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScreenUtility_CaptureFrameRoutine_mD34C7FB45F075F9EAB19DB1D56FE8F1D730D101E (ScreenUtility_t786316A2864D43D72F0DB7C56A661CA5C6DE086D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCaptureFrameRoutineU3Ed__4_t660CAD1E8A27FCF4C48992C4108F08F30D4A80E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCaptureFrameRoutineU3Ed__4_t660CAD1E8A27FCF4C48992C4108F08F30D4A80E2* L_0 = (U3CCaptureFrameRoutineU3Ed__4_t660CAD1E8A27FCF4C48992C4108F08F30D4A80E2*)il2cpp_codegen_object_new(U3CCaptureFrameRoutineU3Ed__4_t660CAD1E8A27FCF4C48992C4108F08F30D4A80E2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCaptureFrameRoutineU3Ed__4__ctor_mAE5D2EDDFFAF019DEE8310059379E2B750420291(L_0, 0, NULL);
		U3CCaptureFrameRoutineU3Ed__4_t660CAD1E8A27FCF4C48992C4108F08F30D4A80E2* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void VoxelBusters.CoreLibrary.ScreenUtility::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScreenUtility__ctor_mBE7EE7DADD1AD20C11FA90748BB0102367406C1B (ScreenUtility_t786316A2864D43D72F0DB7C56A661CA5C6DE086D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrivateSingletonBehaviour_1__ctor_mF4829E05B2DC31D6DD1A90C63DBC577F85818E13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrivateSingletonBehaviour_1_tD719FD1AEB686D10D356594D720E77755FA8781F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PrivateSingletonBehaviour_1_tD719FD1AEB686D10D356594D720E77755FA8781F_il2cpp_TypeInfo_var);
		PrivateSingletonBehaviour_1__ctor_mF4829E05B2DC31D6DD1A90C63DBC577F85818E13(__this, PrivateSingletonBehaviour_1__ctor_mF4829E05B2DC31D6DD1A90C63DBC577F85818E13_RuntimeMethod_var);
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
// System.Void VoxelBusters.CoreLibrary.ScreenUtility/<CaptureFrameRoutine>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCaptureFrameRoutineU3Ed__4__ctor_mAE5D2EDDFFAF019DEE8310059379E2B750420291 (U3CCaptureFrameRoutineU3Ed__4_t660CAD1E8A27FCF4C48992C4108F08F30D4A80E2* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.ScreenUtility/<CaptureFrameRoutine>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCaptureFrameRoutineU3Ed__4_System_IDisposable_Dispose_m5FEE3BFAAA851F7D976B409EFCF3D797EE146384 (U3CCaptureFrameRoutineU3Ed__4_t660CAD1E8A27FCF4C48992C4108F08F30D4A80E2* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean VoxelBusters.CoreLibrary.ScreenUtility/<CaptureFrameRoutine>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCaptureFrameRoutineU3Ed__4_MoveNext_m2CDA5C2F7C01221B63034F9505731AC5DF067715 (U3CCaptureFrameRoutineU3Ed__4_t660CAD1E8A27FCF4C48992C4108F08F30D4A80E2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ScreenUtility_t786316A2864D43D72F0DB7C56A661CA5C6DE086D* V_1 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_2 = NULL;
	Callback_1_t45CF87BD031D91AA8EE1A5E4F183D27CB925DC5E* G_B6_0 = NULL;
	Callback_1_t45CF87BD031D91AA8EE1A5E4F183D27CB925DC5E* G_B5_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ScreenUtility_t786316A2864D43D72F0DB7C56A661CA5C6DE086D* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0032;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_4 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_4, NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0032:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var     texture     = ScreenCapture.CaptureScreenshotAsTexture();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_5;
		L_5 = ScreenCapture_CaptureScreenshotAsTexture_m3041B552FEB1E7AA144F9E36BADB0A2CAFD49512(NULL);
		V_2 = L_5;
		// m_callback?.Invoke(texture);
		ScreenUtility_t786316A2864D43D72F0DB7C56A661CA5C6DE086D* L_6 = V_1;
		NullCheck(L_6);
		Callback_1_t45CF87BD031D91AA8EE1A5E4F183D27CB925DC5E* L_7 = L_6->___m_callback_11;
		Callback_1_t45CF87BD031D91AA8EE1A5E4F183D27CB925DC5E* L_8 = L_7;
		G_B5_0 = L_8;
		if (L_8)
		{
			G_B6_0 = L_8;
			goto IL_004b;
		}
	}
	{
		goto IL_0051;
	}

IL_004b:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_9 = V_2;
		NullCheck(G_B6_0);
		Callback_1_Invoke_mE9AF05DB5B5B1C027C62687D2308260FF368C14C_inline(G_B6_0, L_9, NULL);
	}

IL_0051:
	{
		// m_callback          = null;
		ScreenUtility_t786316A2864D43D72F0DB7C56A661CA5C6DE086D* L_10 = V_1;
		NullCheck(L_10);
		L_10->___m_callback_11 = (Callback_1_t45CF87BD031D91AA8EE1A5E4F183D27CB925DC5E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___m_callback_11), (void*)(Callback_1_t45CF87BD031D91AA8EE1A5E4F183D27CB925DC5E*)NULL);
		// Object.Destroy(texture);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_11, NULL);
		// }
		return (bool)0;
	}
}
// System.Object VoxelBusters.CoreLibrary.ScreenUtility/<CaptureFrameRoutine>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCaptureFrameRoutineU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE4390AB9730D6502CF1413F4DB4645EE9AA58629 (U3CCaptureFrameRoutineU3Ed__4_t660CAD1E8A27FCF4C48992C4108F08F30D4A80E2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void VoxelBusters.CoreLibrary.ScreenUtility/<CaptureFrameRoutine>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCaptureFrameRoutineU3Ed__4_System_Collections_IEnumerator_Reset_mF05A779F56ACAAB04064F15E96783EE13382A615 (U3CCaptureFrameRoutineU3Ed__4_t660CAD1E8A27FCF4C48992C4108F08F30D4A80E2* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCaptureFrameRoutineU3Ed__4_System_Collections_IEnumerator_Reset_mF05A779F56ACAAB04064F15E96783EE13382A615_RuntimeMethod_var)));
	}
}
// System.Object VoxelBusters.CoreLibrary.ScreenUtility/<CaptureFrameRoutine>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCaptureFrameRoutineU3Ed__4_System_Collections_IEnumerator_get_Current_mE87040CA5C42C8DDE74339345DBD11022433C901 (U3CCaptureFrameRoutineU3Ed__4_t660CAD1E8A27FCF4C48992C4108F08F30D4A80E2* __this, const RuntimeMethod* method) 
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
// System.String VoxelBusters.CoreLibrary.SystemUtility::EscapeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemUtility_EscapeString_mB1CD6031853B543D3EBC2AE7DF171E0203A33333 (String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral122DAEB6E112576FD0519243E425F6CD2E97BA90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return UnityWebRequest.EscapeURL(value).Replace("+", "%20");
		String_t* L_0 = ___0_value;
		String_t* L_1;
		L_1 = UnityWebRequest_EscapeURL_m1B819655E6FFE468B9DE9D101A17398F3E1A4F27(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_1, _stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952, _stringLiteral122DAEB6E112576FD0519243E425F6CD2E97BA90, NULL);
		return L_2;
	}
}
// System.Object[] VoxelBusters.CoreLibrary.SystemUtility::ConvertListToArray(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* SystemUtility_ConvertListToArray_m94A006CACADC967C33B317990C654C8D247333CF (RuntimeObject* ___0_list, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// int     count   = list.Count;
		RuntimeObject* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		// var     array   = new object[count];
		int32_t L_2 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_1 = L_3;
		// for (int iter = 0; iter < count; iter++)
		V_2 = 0;
		goto IL_0020;
	}

IL_0012:
	{
		// array[iter] = list[iter];
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		RuntimeObject* L_6 = ___0_list;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_6, L_7);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_8);
		// for (int iter = 0; iter < count; iter++)
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0020:
	{
		// for (int iter = 0; iter < count; iter++)
		int32_t L_10 = V_2;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0012;
		}
	}
	{
		// return array;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = V_1;
		return L_12;
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
// System.String VoxelBusters.CoreLibrary.TextureUtility::GetMimeType(VoxelBusters.CoreLibrary.TextureEncodingFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextureUtility_GetMimeType_m508C5794B04BA9DFF39F054F27CB1FF7F489D583 (int32_t ___0_encodeFormat, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_encodeFormat;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_encodeFormat;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0013;
		}
	}
	{
		// return MimeType.kJPGImage;
		return _stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC;
	}

IL_000d:
	{
		// return MimeType.kPNGImage;
		return _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821;
	}

IL_0013:
	{
		// throw VBException.SwitchCaseNotImplemented(encodeFormat);
		int32_t L_2 = ___0_encodeFormat;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TextureEncodingFormat_t0D5F37298305DE6629F8DBF41B2AF4F5294EB672_il2cpp_TypeInfo_var)), &L_3);
		VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489* L_5;
		L_5 = VBException_SwitchCaseNotImplemented_m1A614215F2864235741CF4392D99116AA299BBF6(L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TextureUtility_GetMimeType_m508C5794B04BA9DFF39F054F27CB1FF7F489D583_RuntimeMethod_var)));
	}
}
// System.Byte[] VoxelBusters.CoreLibrary.TextureUtility::Encode(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TextureUtility_Encode_m87A9E721B8E1A8A99ED1A98775A6263F7E33B9C8 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// return Encode(texture, out mimeType);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___0_texture;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = TextureUtility_Encode_m37D889BAD53AB90528BB2C846C53D24BB2AFE1E3(L_0, (&V_0), NULL);
		return L_1;
	}
}
// System.Byte[] VoxelBusters.CoreLibrary.TextureUtility::Encode(UnityEngine.Texture2D,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TextureUtility_Encode_m37D889BAD53AB90528BB2C846C53D24BB2AFE1E3 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, String_t** ___1_mimeType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch (texture.format)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___0_texture;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Texture2D_get_format_mE39DD922F83CA1097383309278BB6F20636A7D9D(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)14))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, 1))) > ((uint32_t)1))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 4))) > ((uint32_t)1))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, ((int32_t)13)))) > ((uint32_t)1))))
		{
			goto IL_003c;
		}
	}
	{
		goto IL_004a;
	}

IL_0021:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) > ((int32_t)((int32_t)20))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)17))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)20))))
		{
			goto IL_003c;
		}
	}
	{
		goto IL_004a;
	}

IL_0032:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)31))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_10 = V_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)33)))))
		{
			goto IL_004a;
		}
	}

IL_003c:
	{
		// mimeType = MimeType.kPNGImage;
		String_t** L_11 = ___1_mimeType;
		*((RuntimeObject**)L_11) = (RuntimeObject*)_stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_11, (void*)(RuntimeObject*)_stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821);
		// return texture.EncodeToPNG();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_12 = ___0_texture;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = ImageConversion_EncodeToPNG_m0804AD31B83C653AEBB234F6CC31A02D4FA7C945(L_12, NULL);
		return L_13;
	}

IL_004a:
	{
		// mimeType = MimeType.kJPGImage;
		String_t** L_14 = ___1_mimeType;
		*((RuntimeObject**)L_14) = (RuntimeObject*)_stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_14, (void*)(RuntimeObject*)_stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC);
		// return texture.EncodeToJPG();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_15 = ___0_texture;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = ImageConversion_EncodeToJPG_mD3B358B8645CF85EBAD979554FFDE05A54A99804(L_15, NULL);
		return L_16;
	}
}
// System.Byte[] VoxelBusters.CoreLibrary.TextureUtility::Encode(UnityEngine.Texture2D,VoxelBusters.CoreLibrary.TextureEncodingFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TextureUtility_Encode_m103987F4BC41A033D6D38BAC159B0F0C44D36935 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, int32_t ___1_encodeFormat, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_encodeFormat;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = ___1_encodeFormat;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		// return ImageConversion.EncodeToJPG(texture);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = ___0_texture;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = ImageConversion_EncodeToJPG_mD3B358B8645CF85EBAD979554FFDE05A54A99804(L_2, NULL);
		return L_3;
	}

IL_000e:
	{
		// return ImageConversion.EncodeToPNG(texture);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = ___0_texture;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = ImageConversion_EncodeToPNG_m0804AD31B83C653AEBB234F6CC31A02D4FA7C945(L_4, NULL);
		return L_5;
	}

IL_0015:
	{
		// throw VBException.SwitchCaseNotImplemented(encodeFormat);
		int32_t L_6 = ___1_encodeFormat;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TextureEncodingFormat_t0D5F37298305DE6629F8DBF41B2AF4F5294EB672_il2cpp_TypeInfo_var)), &L_7);
		VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489* L_9;
		L_9 = VBException_SwitchCaseNotImplemented_m1A614215F2864235741CF4392D99116AA299BBF6(L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TextureUtility_Encode_m103987F4BC41A033D6D38BAC159B0F0C44D36935_RuntimeMethod_var)));
	}
}
// System.Byte[] VoxelBusters.CoreLibrary.TextureUtility::Encode(UnityEngine.Texture2D,VoxelBusters.CoreLibrary.TextureEncodingFormat,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TextureUtility_Encode_m541F84657C79BFCBAE7143A5E820DF2ED9B1F380 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, int32_t ___1_encodeFormat, String_t** ___2_mimeType, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// return Encode(texture, encodeFormat, out mimeType, out textEncodingName);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___0_texture;
		int32_t L_1 = ___1_encodeFormat;
		String_t** L_2 = ___2_mimeType;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = TextureUtility_Encode_m0EE99ECA8F3853C983401D0FAD86841680FE3881(L_0, L_1, L_2, (&V_0), NULL);
		return L_3;
	}
}
// System.Byte[] VoxelBusters.CoreLibrary.TextureUtility::Encode(UnityEngine.Texture2D,VoxelBusters.CoreLibrary.TextureEncodingFormat,System.String&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* TextureUtility_Encode_m0EE99ECA8F3853C983401D0FAD86841680FE3881 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_texture, int32_t ___1_encodeFormat, String_t** ___2_mimeType, String_t** ___3_textEncodingName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE06F79CC91CBA3EFF69C9035EB350CE374F8B79F);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// mimeType            = null;
		String_t** L_0 = ___2_mimeType;
		*((RuntimeObject**)L_0) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)NULL);
		// textEncodingName    = TextEncodingFormat.kUTF8;
		String_t** L_1 = ___3_textEncodingName;
		*((RuntimeObject**)L_1) = (RuntimeObject*)_stringLiteralE06F79CC91CBA3EFF69C9035EB350CE374F8B79F;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_1, (void*)(RuntimeObject*)_stringLiteralE06F79CC91CBA3EFF69C9035EB350CE374F8B79F);
		// byte[]  data        = null;
		V_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		int32_t L_2 = ___1_encodeFormat;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = ___1_encodeFormat;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_0033;
	}

IL_0015:
	{
		// data        = texture.EncodeToPNG();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = ___0_texture;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = ImageConversion_EncodeToPNG_m0804AD31B83C653AEBB234F6CC31A02D4FA7C945(L_4, NULL);
		V_0 = L_5;
		// mimeType    = MimeType.kPNGImage;
		String_t** L_6 = ___2_mimeType;
		*((RuntimeObject**)L_6) = (RuntimeObject*)_stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)(RuntimeObject*)_stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821);
		// break;
		goto IL_0033;
	}

IL_0025:
	{
		// data        = texture.EncodeToJPG();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_7 = ___0_texture;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = ImageConversion_EncodeToJPG_mD3B358B8645CF85EBAD979554FFDE05A54A99804(L_7, NULL);
		V_0 = L_8;
		// mimeType    = MimeType.kJPGImage;
		String_t** L_9 = ___2_mimeType;
		*((RuntimeObject**)L_9) = (RuntimeObject*)_stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_9, (void*)(RuntimeObject*)_stringLiteral3E96C9BB1B953A85290371E8CE7BB3F3ABB307CC);
	}

IL_0033:
	{
		// return data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		return L_10;
	}
}
// System.String VoxelBusters.CoreLibrary.TextureUtility::TakeScreenshot(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextureUtility_TakeScreenshot_mCD1E9DE8C908A39E88F8D96DF11394D2C28A641E (String_t* ___0_fileName, const RuntimeMethod* method) 
{
	{
		// return TakeScreenshot(Application.persistentDataPath, fileName);
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		String_t* L_1 = ___0_fileName;
		String_t* L_2;
		L_2 = TextureUtility_TakeScreenshot_mFF3C9FE0CD1B96044780FDAE770149A2F2DA7650(L_0, L_1, NULL);
		return L_2;
	}
}
// System.String VoxelBusters.CoreLibrary.TextureUtility::TakeScreenshot(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextureUtility_TakeScreenshot_mFF3C9FE0CD1B96044780FDAE770149A2F2DA7650 (String_t* ___0_directory, String_t* ___1_fileName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string filePath = directory + "/" + fileName;
		String_t* L_0 = ___0_directory;
		String_t* L_1 = ___1_fileName;
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_0, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_1, NULL);
		// IOServices.CreateDirectory(directory);
		String_t* L_3 = ___0_directory;
		bool L_4;
		L_4 = IOServices_CreateDirectory_m1AEDF4D5DD44E6F1058114E1D90565CBEF683084(L_3, (bool)0, NULL);
		// IOServices.DeleteFileOrDirectory(filePath);
		String_t* L_5 = L_2;
		IOServices_DeleteFileOrDirectory_m0FDA01329E4B9B935F7A9F108B4234DB0FA8FC7F(L_5, (bool)0, NULL);
		// ScreenCapture.CaptureScreenshot(fileName);
		String_t* L_6 = ___1_fileName;
		ScreenCapture_CaptureScreenshot_m897B0264A202824D377CCD9A5221B164DE2CF9DE(L_6, NULL);
		// return filePath;
		return L_5;
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
// UnityEngine.Transform[] VoxelBusters.CoreLibrary.TransformUtility::GetImmediateChildren(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* TransformUtility_GetImmediateChildren_m688E6FFE00CDCB57CA1D13E23C10EABBD698E209 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_transform, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// int     childCount  = transform.childCount;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_transform;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_0, NULL);
		V_0 = L_1;
		// var     children    = new Transform[childCount];
		int32_t L_2 = V_0;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_3 = (TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)SZArrayNew(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_1 = L_3;
		// for (int iter = 0; iter < childCount; iter++)
		V_2 = 0;
		goto IL_0020;
	}

IL_0012:
	{
		// children[iter]  = transform.GetChild(iter);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_4 = V_1;
		int32_t L_5 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = ___0_transform;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_6, L_7, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_8);
		// for (int iter = 0; iter < childCount; iter++)
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0020:
	{
		// for (int iter = 0; iter < childCount; iter++)
		int32_t L_10 = V_2;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0012;
		}
	}
	{
		// return children;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_12 = V_1;
		return L_12;
	}
}
// System.Void VoxelBusters.CoreLibrary.TransformUtility::RemoveAllChilds(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtility_RemoveAllChilds_m17D55ED1E577291837207D9C51667AAB009EF5A0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, const RuntimeMethod* method) 
{
	{
		// RemoveChildren(parent);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_parent;
		TransformUtility_RemoveChildren_m7439F132629D107219DAB883A5C52AF70EA313E8(L_0, NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.TransformUtility::RemoveChildren(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformUtility_RemoveChildren_m7439F132629D107219DAB883A5C52AF70EA313E8 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var     children    = GetImmediateChildren(parent);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_parent;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_1;
		L_1 = TransformUtility_GetImmediateChildren_m688E6FFE00CDCB57CA1D13E23C10EABBD698E209(L_0, NULL);
		V_0 = L_1;
		// for (int iter = 0; iter < children.Length; iter++)
		V_1 = 0;
		goto IL_001c;
	}

IL_000b:
	{
		// Object.Destroy(children[iter].gameObject);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_6, NULL);
		// for (int iter = 0; iter < children.Length; iter++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_001c:
	{
		// for (int iter = 0; iter < children.Length; iter++)
		int32_t L_8 = V_1;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean VoxelBusters.CoreLibrary.TransformUtility::RemoveChild(UnityEngine.Transform,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TransformUtility_RemoveChild_mFA7C6295014C938A20A8738AE5CC356FFB4A9896 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((index < 0) || (index >= parent.childCount)) return false;
		int32_t L_0 = ___1_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___1_index;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___0_parent;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_2, NULL);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_000f;
		}
	}

IL_000d:
	{
		// if ((index < 0) || (index >= parent.childCount)) return false;
		return (bool)0;
	}

IL_000f:
	{
		// Object.Destroy(parent.GetChild(index).gameObject);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___0_parent;
		int32_t L_5 = ___1_index;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_4, L_5, NULL);
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_7, NULL);
		// return true;
		return (bool)1;
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
// UnityEngine.Vector2 VoxelBusters.CoreLibrary.UnityEngineUtility::InvertScreenPosition(UnityEngine.Vector2,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UnityEngineUtility_InvertScreenPosition_m003C8C31331AEF0A685818612300D9DE386E54A0 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_position, bool ___1_invertX, bool ___2_invertY, const RuntimeMethod* method) 
{
	{
		// if (invertX)
		bool L_0 = ___1_invertX;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// position.x  = Screen.width - position.x;
		int32_t L_1;
		L_1 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_position;
		float L_3 = L_2.___x_0;
		(&___0_position)->___x_0 = ((float)il2cpp_codegen_subtract(((float)L_1), L_3));
	}

IL_0017:
	{
		// if (invertY)
		bool L_4 = ___2_invertY;
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		// position.y  = Screen.height - position.y;
		int32_t L_5;
		L_5 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___0_position;
		float L_7 = L_6.___y_1;
		(&___0_position)->___y_1 = ((float)il2cpp_codegen_subtract(((float)L_5), L_7));
	}

IL_002e:
	{
		// return position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___0_position;
		return L_8;
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
// System.Boolean VoxelBusters.CoreLibrary.UnityPackagePathResolver::IsInstalledWithinAssets(VoxelBusters.CoreLibrary.UnityPackageDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityPackagePathResolver_IsInstalledWithinAssets_mB3A933F022E90E8D72A591DFB2119F3B9617E869 (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* ___0_package, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FEF94F91815F92CFDC237C75CD8F7AF765C81AD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return IOServices.DirectoryExists(package.DefaultInstallPath) &&
		//     IOServices.FileExists($"{package.DefaultInstallPath}/package.json");
		UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* L_0 = ___0_package;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UnityPackageDefinition_get_DefaultInstallPath_m3A2B3AEDBD9281C14AE8C6AD9C9CBA86B6B5BFCC_inline(L_0, NULL);
		bool L_2;
		L_2 = IOServices_DirectoryExists_mB580B5DACEFE1E1C19871B24F03AA25A73A0511A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* L_3 = ___0_package;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = UnityPackageDefinition_get_DefaultInstallPath_m3A2B3AEDBD9281C14AE8C6AD9C9CBA86B6B5BFCC_inline(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_4, _stringLiteral0FEF94F91815F92CFDC237C75CD8F7AF765C81AD, NULL);
		bool L_6;
		L_6 = IOServices_FileExists_m671E8720CF69CFD1FD088DE87B7AF79014291DBF(L_5, NULL);
		return L_6;
	}

IL_0023:
	{
		return (bool)0;
	}
}
// System.String VoxelBusters.CoreLibrary.UnityPackagePathResolver::GetInstallPath(VoxelBusters.CoreLibrary.UnityPackageDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityPackagePathResolver_GetInstallPath_m6FA9AB5B80344E9A1B714480E04625206F1C007B (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* ___0_package, const RuntimeMethod* method) 
{
	{
		// if (IsSupported())
		bool L_0;
		L_0 = UnityPackagePathResolver_IsSupported_m800B61233D9EA269CC399B8A8CC6C6BBDA1B967C(NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// return  IsInstalledWithinAssets(package) ? package.DefaultInstallPath : package.UpmInstallPath;
		UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* L_1 = ___0_package;
		bool L_2;
		L_2 = UnityPackagePathResolver_IsInstalledWithinAssets_mB3A933F022E90E8D72A591DFB2119F3B9617E869(L_1, NULL);
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* L_3 = ___0_package;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = UnityPackageDefinition_get_UpmInstallPath_m3F0A9CC49E5FF725ED57A6CB9061128BD8E67150_inline(L_3, NULL);
		return L_4;
	}

IL_0016:
	{
		UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* L_5 = ___0_package;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = UnityPackageDefinition_get_DefaultInstallPath_m3A2B3AEDBD9281C14AE8C6AD9C9CBA86B6B5BFCC_inline(L_5, NULL);
		return L_6;
	}

IL_001d:
	{
		// return null;
		return (String_t*)NULL;
	}
}
// System.String VoxelBusters.CoreLibrary.UnityPackagePathResolver::GetRuntimeScriptsPath(VoxelBusters.CoreLibrary.UnityPackageDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityPackagePathResolver_GetRuntimeScriptsPath_m510DA34746EC322E1CF994D25DE5D22369E89EDD (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* ___0_package, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral353B61A4CD89DAFE65F7B91760BA802E0BE7DF01);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return CombinePath(pathA: GetInstallPath(package), pathB: "Runtime");
		UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* L_0 = ___0_package;
		String_t* L_1;
		L_1 = UnityPackagePathResolver_GetInstallPath_m6FA9AB5B80344E9A1B714480E04625206F1C007B(L_0, NULL);
		String_t* L_2;
		L_2 = UnityPackagePathResolver_CombinePath_mAF28CB9C1DA73BE851D5E811D24B2D6660B89057(L_1, _stringLiteral353B61A4CD89DAFE65F7B91760BA802E0BE7DF01, NULL);
		return L_2;
	}
}
// System.String VoxelBusters.CoreLibrary.UnityPackagePathResolver::GetEditorScriptsPath(VoxelBusters.CoreLibrary.UnityPackageDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityPackagePathResolver_GetEditorScriptsPath_m40427C3151D9B7994B33BA07A131F94B066D36D1 (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* ___0_package, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral542885AE634D3A3453565EADF8AE8F209B4DC959);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return CombinePath(pathA: GetInstallPath(package), pathB: "Editor");
		UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* L_0 = ___0_package;
		String_t* L_1;
		L_1 = UnityPackagePathResolver_GetInstallPath_m6FA9AB5B80344E9A1B714480E04625206F1C007B(L_0, NULL);
		String_t* L_2;
		L_2 = UnityPackagePathResolver_CombinePath_mAF28CB9C1DA73BE851D5E811D24B2D6660B89057(L_1, _stringLiteral542885AE634D3A3453565EADF8AE8F209B4DC959, NULL);
		return L_2;
	}
}
// System.String VoxelBusters.CoreLibrary.UnityPackagePathResolver::GetEditorResourcesPath(VoxelBusters.CoreLibrary.UnityPackageDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityPackagePathResolver_GetEditorResourcesPath_m822C39BD0D869B0C7D60A47D4D83E1F4418636ED (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* ___0_package, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3301780F4B4E43907E6CBCE234389A7878FBE21);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return CombinePath(pathA: GetInstallPath(package), pathB: "EditorResources");
		UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* L_0 = ___0_package;
		String_t* L_1;
		L_1 = UnityPackagePathResolver_GetInstallPath_m6FA9AB5B80344E9A1B714480E04625206F1C007B(L_0, NULL);
		String_t* L_2;
		L_2 = UnityPackagePathResolver_CombinePath_mAF28CB9C1DA73BE851D5E811D24B2D6660B89057(L_1, _stringLiteralF3301780F4B4E43907E6CBCE234389A7878FBE21, NULL);
		return L_2;
	}
}
// System.String VoxelBusters.CoreLibrary.UnityPackagePathResolver::GetMutableResourcesPath(VoxelBusters.CoreLibrary.UnityPackageDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityPackagePathResolver_GetMutableResourcesPath_m516C45F320EE703B3B19BA8D90DF8796A92C7545 (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* ___0_package, const RuntimeMethod* method) 
{
	{
		// return package.MutableResourcesPath;
		UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* L_0 = ___0_package;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UnityPackageDefinition_get_MutableResourcesPath_mD09C3E273F2B116AF8D1DE040A4BAC3A95052C09_inline(L_0, NULL);
		return L_1;
	}
}
// System.String VoxelBusters.CoreLibrary.UnityPackagePathResolver::GetImmutableResourcesPath(VoxelBusters.CoreLibrary.UnityPackageDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityPackagePathResolver_GetImmutableResourcesPath_mB9F441F8FA7795E50F217DACF7788189D1761FCA (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* ___0_package, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78E86F042D371FD16F0D696EF476DAAA4953E187);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return CombinePath(pathA: GetInstallPath(package), pathB: "Resources");
		UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* L_0 = ___0_package;
		String_t* L_1;
		L_1 = UnityPackagePathResolver_GetInstallPath_m6FA9AB5B80344E9A1B714480E04625206F1C007B(L_0, NULL);
		String_t* L_2;
		L_2 = UnityPackagePathResolver_CombinePath_mAF28CB9C1DA73BE851D5E811D24B2D6660B89057(L_1, _stringLiteral78E86F042D371FD16F0D696EF476DAAA4953E187, NULL);
		return L_2;
	}
}
// System.String VoxelBusters.CoreLibrary.UnityPackagePathResolver::GetPackageResourcesPath(VoxelBusters.CoreLibrary.UnityPackageDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityPackagePathResolver_GetPackageResourcesPath_m4476C5DB8D1BB3081E65B440AD03ED5509E1D5D3 (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* ___0_package, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AD95F858F3E2EED0733BA656A3FE77CFDA0C839);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return CombinePath(pathA: GetInstallPath(package), pathB: "PackageResources");
		UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* L_0 = ___0_package;
		String_t* L_1;
		L_1 = UnityPackagePathResolver_GetInstallPath_m6FA9AB5B80344E9A1B714480E04625206F1C007B(L_0, NULL);
		String_t* L_2;
		L_2 = UnityPackagePathResolver_CombinePath_mAF28CB9C1DA73BE851D5E811D24B2D6660B89057(L_1, _stringLiteral0AD95F858F3E2EED0733BA656A3FE77CFDA0C839, NULL);
		return L_2;
	}
}
// System.String VoxelBusters.CoreLibrary.UnityPackagePathResolver::GetFullPath(VoxelBusters.CoreLibrary.UnityPackageDefinition,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityPackagePathResolver_GetFullPath_m0DAC2CBE94BAF62611AB36A54D573CF0435AFD94 (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* ___0_package, String_t* ___1_relativePath, const RuntimeMethod* method) 
{
	{
		// return CombinePath(pathA: GetInstallPath(package), pathB: relativePath);
		UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* L_0 = ___0_package;
		String_t* L_1;
		L_1 = UnityPackagePathResolver_GetInstallPath_m6FA9AB5B80344E9A1B714480E04625206F1C007B(L_0, NULL);
		String_t* L_2 = ___1_relativePath;
		String_t* L_3;
		L_3 = UnityPackagePathResolver_CombinePath_mAF28CB9C1DA73BE851D5E811D24B2D6660B89057(L_1, L_2, NULL);
		return L_3;
	}
}
// System.String VoxelBusters.CoreLibrary.UnityPackagePathResolver::GetMutableResourceRelativePath(VoxelBusters.CoreLibrary.UnityPackageDefinition,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityPackagePathResolver_GetMutableResourceRelativePath_m7FD10DDD2AE3790C2CDB4A48C4A0F696B37D1B0F (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* ___0_package, String_t* ___1_name, const RuntimeMethod* method) 
{
	{
		// return CombinePath(pathA: package.MutableResourcesRelativePath, pathB: name);
		UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* L_0 = ___0_package;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = UnityPackageDefinition_get_MutableResourcesRelativePath_m0B66EEDDDA0AAF2B5A2E4711EA0CD62EB0094854_inline(L_0, NULL);
		String_t* L_2 = ___1_name;
		String_t* L_3;
		L_3 = UnityPackagePathResolver_CombinePath_mAF28CB9C1DA73BE851D5E811D24B2D6660B89057(L_1, L_2, NULL);
		return L_3;
	}
}
// System.Boolean VoxelBusters.CoreLibrary.UnityPackagePathResolver::IsSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityPackagePathResolver_IsSupported_m800B61233D9EA269CC399B8A8CC6C6BBDA1B967C (const RuntimeMethod* method) 
{
	{
		// private static bool IsSupported() => Application.isEditor;
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		return L_0;
	}
}
// System.String VoxelBusters.CoreLibrary.UnityPackagePathResolver::CombinePath(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityPackagePathResolver_CombinePath_mAF28CB9C1DA73BE851D5E811D24B2D6660B89057 (String_t* ___0_pathA, String_t* ___1_pathB, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (pathA == null)
		String_t* L_0 = ___0_pathA;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_0005:
	{
		// else if (pathA == "")
		String_t* L_1 = ___0_pathA;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// return pathB;
		String_t* L_3 = ___1_pathB;
		return L_3;
	}

IL_0014:
	{
		// return $"{pathA}/{pathB}";
		String_t* L_4 = ___0_pathA;
		String_t* L_5 = ___1_pathB;
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_4, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_5, NULL);
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EnumMaskFieldAttribute_set_EnumType_m4A8245B4CB5B42B6EDD2D4AFDFC82D5EB01B9CE2_inline (EnumMaskFieldAttribute_t9F83D1D3FB2A1CD07651302E577F9C5860265329* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// private set;
		Type_t* L_0 = ___0_value;
		__this->___U3CEnumTypeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEnumTypeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FileBrowserAttribute_set_UsesRelativePath_mE7919E193716EEE40AA86FDA2EA4814A9F10282C_inline (FileBrowserAttribute_t52AB25C592944562F617FABF0794B8D2D8734936* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool UsesRelativePath { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CUsesRelativePathU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FileBrowserAttribute_set_Extension_m091FB703C181DC5DCAA1609263F539BAAE774280_inline (FileBrowserAttribute_t52AB25C592944562F617FABF0794B8D2D8734936* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Extension { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CExtensionU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CExtensionU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FolderBrowserAttribute_set_UsesRelativePath_mD54C734753FD6D6F21E29CF0881748EC5A197696_inline (FolderBrowserAttribute_t64304F0CFADEFA7A832F7F62A031A9408DA4520C* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool UsesRelativePath { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CUsesRelativePathU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InterfaceFieldAttribute_set_InterfaceType_mC160AD1E515344445FAF90A22DABED5E859BA016_inline (InterfaceFieldAttribute_tD02A2181D6171CD85C01C5B04D3D52410B2AE960* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// private set;
		Type_t* L_0 = ___0_value;
		__this->___U3CInterfaceTypeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CInterfaceTypeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool StringPopupAttribute_get_UsesConstantOptions_m9D9A513DC46F962A157CC05A938B3F61B267ADD4_inline (StringPopupAttribute_tE6EE825FCAEDBE24D412CC293D8DB8AFEB93E536* __this, const RuntimeMethod* method) 
{
	{
		// public bool UsesConstantOptions { get; private set; }
		bool L_0 = __this->___U3CUsesConstantOptionsU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StringPopupAttribute_set_PreferencePropertyName_m0264FD1C4DE6A4C8F109B27D296D41312D17E80A_inline (StringPopupAttribute_tE6EE825FCAEDBE24D412CC293D8DB8AFEB93E536* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string PreferencePropertyName { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CPreferencePropertyNameU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPreferencePropertyNameU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StringPopupAttribute_set_PreferencePropertyValue_m836AE4DC5546E810DDB34F69D7EE13E5A88D919E_inline (StringPopupAttribute_tE6EE825FCAEDBE24D412CC293D8DB8AFEB93E536* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool PreferencePropertyValue { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CPreferencePropertyValueU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StringPopupAttribute_set_UsesConstantOptions_m6CF32F981516A772C9B24CF1FB55FCADB65D5890_inline (StringPopupAttribute_tE6EE825FCAEDBE24D412CC293D8DB8AFEB93E536* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool UsesConstantOptions { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CUsesConstantOptionsU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Callback_Invoke_m5FD7518DBA221D5EB50AC047BC8F39278A2C9828_inline (Callback_t208DBAACB6E941FCFFB3FCCBD9B6D8036DCC3829* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CompletionCallback_Invoke_mCA26D91460900D446A4976F7810083CB06BE89A6_inline (CompletionCallback_t012328C9E3710F3FE34906CDC694F8E177261A69* __this, Error_t141DBA81928651667910B46EE98D0BC82AA746D2* ___0_error, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Error_t141DBA81928651667910B46EE98D0BC82AA746D2*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_error, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Asset_set_Data_m795834BEFB440CF053CA40D43E61C17EE04135EB_inline (Asset_t7CD7395B84CF4879BA158B4B56779849378B06EF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	{
		// public byte[] Data { get; private set; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		__this->___U3CDataU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Asset_set_MimeType_m6B6C5FD1D001A4B0F04BD25182D0A2E03633A8DC_inline (Asset_t7CD7395B84CF4879BA158B4B56779849378B06EF* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string MimeType { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CMimeTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMimeTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Asset_set_Name_mD6C27F9F97DA9E66AEF64C2A68280CC681EC535C_inline (Asset_t7CD7395B84CF4879BA158B4B56779849378B06EF* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Error_set_Domain_m7A33F343589706C81648F7BE906D9F4C162CA4B3_inline (Error_t141DBA81928651667910B46EE98D0BC82AA746D2* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Domain { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CDomainU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDomainU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Error_set_Code_m31572DDBF0FE76130760D0DAD7F4F44B69929037_inline (Error_t141DBA81928651667910B46EE98D0BC82AA746D2* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Code { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CCodeU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Error_set_Description_m020DEBA45411298CE10D2743D70D319A0EE2C02B_inline (Error_t141DBA81928651667910B46EE98D0BC82AA746D2* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Description { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CDescriptionU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDescriptionU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Error_get_Domain_m50DB0EFEA276C4AEA40BC2F1811DFE53F215B13C_inline (Error_t141DBA81928651667910B46EE98D0BC82AA746D2* __this, const RuntimeMethod* method) 
{
	{
		// public string Domain { get; private set; }
		String_t* L_0 = __this->___U3CDomainU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Error_get_Code_mA0CADCCFFC4F11747133CD1D23AFF351F170A061_inline (Error_t141DBA81928651667910B46EE98D0BC82AA746D2* __this, const RuntimeMethod* method) 
{
	{
		// public int Code { get; private set; }
		int32_t L_0 = __this->___U3CCodeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Error_get_Description_m056AE5B740F749E34208B58C44D3C57BF1CF4050_inline (Error_t141DBA81928651667910B46EE98D0BC82AA746D2* __this, const RuntimeMethod* method) 
{
	{
		// public string Description { get; private set; }
		String_t* L_0 = __this->___U3CDescriptionU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ExternalServiceProvider_get_JsonServiceProvider_m9C400AF74CA8D4FD07A4DA205529E862EB356DA9_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExternalServiceProvider_t14830EB28C2BFFBA043D792D24CC70209E400011_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return s_jsonServiceProvider;
		RuntimeObject* L_0 = ((ExternalServiceProvider_t14830EB28C2BFFBA043D792D24CC70209E400011_StaticFields*)il2cpp_codegen_static_fields_for(ExternalServiceProvider_t14830EB28C2BFFBA043D792D24CC70209E400011_il2cpp_TypeInfo_var))->___s_jsonServiceProvider_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityPackageDefinition_set_Name_m89B54404D0F7336741D828220ED8441FDB6B0D59_inline (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityPackageDefinition_set_DisplayName_m68C5E138EE218CF75B16B0B78F0DE763860350A8_inline (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string DisplayName { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CDisplayNameU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayNameU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityPackageDefinition_set_Version_m2A86B9CF94C9A49B612E3A365771DCF0EE59A77D_inline (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Version { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CVersionU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CVersionU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UnityPackageDefinition_get_Name_m46EA77ABFE4D2F9888788AA7D293346CFB69F98C_inline (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityPackageDefinition_set_DefaultInstallPath_m31C3C6480AE8201E7DAA8871C20B35E85B8A8FE0_inline (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string DefaultInstallPath { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CDefaultInstallPathU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDefaultInstallPathU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityPackageDefinition_set_UpmInstallPath_m4825B66919985B0B210E98DC99610CE867CD2A2C_inline (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string UpmInstallPath { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CUpmInstallPathU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUpmInstallPathU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityPackageDefinition_set_MutableResourcesPath_m61EBDF33413C852BAF56B8F897B0E6A2BD4A18A8_inline (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string MutableResourcesPath { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CMutableResourcesPathU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMutableResourcesPathU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityPackageDefinition_set_MutableResourcesRelativePath_m491AD9FB2D8FE37346D40E3B35F3F15E0269E66D_inline (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string MutableResourcesRelativePath { get; private set; }
		String_t* L_0 = ___0_value;
		__this->___U3CMutableResourcesRelativePathU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMutableResourcesRelativePathU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool URLString_get_IsValid_m169562BEF18D983FFFA9AE4C4C83B32658DEEAA8_inline (URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77* __this, const RuntimeMethod* method) 
{
	{
		// get;
		bool L_0 = __this->___U3CIsValidU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void URLString_set_IsValid_m66AA059CDC9988AE810ED6A79E2B0270806E86D8_inline (URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// private set;
		bool L_0 = ___0_value;
		__this->___U3CIsValidU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool URLString_get_IsFilePath_m25A776D613DC54119C8A814BBE048FFDCD51FDBE_inline (URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77* __this, const RuntimeMethod* method) 
{
	{
		// get;
		bool L_0 = __this->___U3CIsFilePathU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void URLString_set_IsFilePath_m347545BE7704E3445CF1E4A5FECDA671442B1396_inline (URLString_t6981E561E7C0A85B41F7ED41024A4FB861561B77* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// private set;
		bool L_0 = ___0_value;
		__this->___U3CIsFilePathU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void VBException_set_ErrorCode_m4B321FA0661C8AD554422248B8935D42FDFAAD3B_inline (VBException_tB5CF98E680E4F7D39FDF5E32997AA38EE1B7C489* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int ErrorCode { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CErrorCodeU3Ek__BackingField_19 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UnityPackageDefinition_get_DisplayName_m4E6C2C6137877D7306D7C686B7F927EE52F772A3_inline (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, const RuntimeMethod* method) 
{
	{
		// public string DisplayName { get; private set; }
		String_t* L_0 = __this->___U3CDisplayNameU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UnityPackageDefinition_get_Version_mE7D31494D4153ADB62F4917F29C4C7321C3C34AF_inline (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, const RuntimeMethod* method) 
{
	{
		// public string Version { get; private set; }
		String_t* L_0 = __this->___U3CVersionU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AssemblyName_get_Name_m7899B9B3F289EEBAF62AEAB51D1CA91DA92C4E6A_inline (AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___name_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UnityPackageDefinition_get_DefaultInstallPath_m3A2B3AEDBD9281C14AE8C6AD9C9CBA86B6B5BFCC_inline (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, const RuntimeMethod* method) 
{
	{
		// public string DefaultInstallPath { get; private set; }
		String_t* L_0 = __this->___U3CDefaultInstallPathU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UnityPackageDefinition_get_UpmInstallPath_m3F0A9CC49E5FF725ED57A6CB9061128BD8E67150_inline (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, const RuntimeMethod* method) 
{
	{
		// public string UpmInstallPath { get; private set; }
		String_t* L_0 = __this->___U3CUpmInstallPathU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UnityPackageDefinition_get_MutableResourcesPath_mD09C3E273F2B116AF8D1DE040A4BAC3A95052C09_inline (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, const RuntimeMethod* method) 
{
	{
		// public string MutableResourcesPath { get; private set; }
		String_t* L_0 = __this->___U3CMutableResourcesPathU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UnityPackageDefinition_get_MutableResourcesRelativePath_m0B66EEDDDA0AAF2B5A2E4711EA0CD62EB0094854_inline (UnityPackageDefinition_t09B615384425E40BD0C7C208E3553B33186CD5E4* __this, const RuntimeMethod* method) 
{
	{
		// public string MutableResourcesRelativePath { get; private set; }
		String_t* L_0 = __this->___U3CMutableResourcesRelativePathU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Callback_1_Invoke_mAEABA0FD24BEA85646C36FF7783A4E766C5B8CD8_gshared_inline (Callback_1_t7E848646326A9B0F3AF08E574007EE4CE4B96703* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_result, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
