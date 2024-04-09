#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		void* params[3] = { &p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		void* params[4] = { p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// VoxelBusters.CoreLibrary.Error
struct Error_t141DBA81928651667910B46EE98D0BC82AA746D2;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativeObjectRef
struct IosNativeObjectRef_t37DF50DF8103DF298DE9E384C5C1787AF15D9C8D;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// VoxelBusters.CoreLibrary.NativePlugins.NativeObjectRef
struct NativeObjectRef_tC6ABA7C995B08E5386CDCB52A51E86AD76CEFDE4;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility/LoadImageCallback
struct LoadImageCallback_t787B710D4336A75798F68101F3E5C5657F07367F;
// VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility/LoadImageNativeCallback
struct LoadImageNativeCallback_t8B17B42E3BCD5DA59BCA133FF158E50A6903AA06;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Error_t141DBA81928651667910B46EE98D0BC82AA746D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IosNativePluginsUtility_t8C2D455FF214C23E896C87422FBDFA820CA3AA8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadImageCallback_t787B710D4336A75798F68101F3E5C5657F07367F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadImageNativeCallback_t8B17B42E3BCD5DA59BCA133FF158E50A6903AA06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral137D3F6C9D078DCA813CAFAF015B055B328AAA5D;
IL2CPP_EXTERN_C String_t* _stringLiteral5E9D6365A21B64F391BD5EA572F61F512AF1491B;
IL2CPP_EXTERN_C String_t* _stringLiteral6A355F56935F79D8EDEE16F87B011979929C36C1;
IL2CPP_EXTERN_C String_t* _stringLiteralDC71B380AFF23A38F6029B32B61C6943CB960350;
IL2CPP_EXTERN_C String_t* _stringLiteralF4600E095C26E1DDFA8614370D8AD14ADCDB0C03;
IL2CPP_EXTERN_C const RuntimeMethod* IosNativePluginsUtility_HandleLoadImageCallbackInternal_m04B7B88ED3F5AA154A48DE5D65126D368E9179A4_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tEBBAA480614A581629644FADCDFC5947CF4A8F5D 
{
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

// VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility
struct IosNativePluginsUtility_t8C2D455FF214C23E896C87422FBDFA820CA3AA8C  : public RuntimeObject
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

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// VoxelBusters.CoreLibrary.NativePlugins.NativeObjectRef
struct NativeObjectRef_tC6ABA7C995B08E5386CDCB52A51E86AD76CEFDE4  : public RuntimeObject
{
	// System.Boolean VoxelBusters.CoreLibrary.NativePlugins.NativeObjectRef::m_disposed
	bool ___m_disposed_0;
	// System.IntPtr VoxelBusters.CoreLibrary.NativePlugins.NativeObjectRef::<Pointer>k__BackingField
	intptr_t ___U3CPointerU3Ek__BackingField_1;
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

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativeObjectRef
struct IosNativeObjectRef_t37DF50DF8103DF298DE9E384C5C1787AF15D9C8D  : public NativeObjectRef_tC6ABA7C995B08E5386CDCB52A51E86AD76CEFDE4
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

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility/LoadImageCallback
struct LoadImageCallback_t787B710D4336A75798F68101F3E5C5657F07367F  : public MulticastDelegate_t
{
};

// VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility/LoadImageNativeCallback
struct LoadImageNativeCallback_t8B17B42E3BCD5DA59BCA133FF158E50A6903AA06  : public MulticastDelegate_t
{
};

// <Module>

// <Module>

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

// VoxelBusters.CoreLibrary.Error

// VoxelBusters.CoreLibrary.Error

// VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility

// VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

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

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Single

// System.Single

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

// System.Void

// System.Void

// System.Delegate

// System.Delegate

// System.Runtime.InteropServices.GCHandle

// System.Runtime.InteropServices.GCHandle

// VoxelBusters.CoreLibrary.NativePlugins.NativeObjectRef

// VoxelBusters.CoreLibrary.NativePlugins.NativeObjectRef

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Touch

// UnityEngine.Touch

// VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativeObjectRef

// VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativeObjectRef

// System.AsyncCallback

// System.AsyncCallback

// VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility/LoadImageCallback

// VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility/LoadImageCallback

// VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility/LoadImageNativeCallback

// VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility/LoadImageNativeCallback
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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



// System.Void VoxelBusters.CoreLibrary.NativePlugins.NativeObjectRef::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeObjectRef__ctor_mDD62AC35F1D3612DD7CDEC59028A9B5D431C8E19 (NativeObjectRef_tC6ABA7C995B08E5386CDCB52A51E86AD76CEFDE4* __this, intptr_t ___0_ptr, bool ___1_autoRetain, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility::RetainNativeObject(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativePluginsUtility_RetainNativeObject_m249A62DCCF686E99E40C8C34CFC0A79C6C466DB7 (intptr_t ___0_nativePtr, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility::ReleaseNativeObject(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativePluginsUtility_ReleaseNativeObject_mC2FA52769993227DD6AE13C3333823967409BE14 (intptr_t ___0_nativePtr, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility::HandleLoadImageCallbackInternal(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativePluginsUtility_HandleLoadImageCallbackInternal_m04B7B88ED3F5AA154A48DE5D65126D368E9179A4 (intptr_t ___0_dataArrayPtr, int32_t ___1_dataLength, intptr_t ___2_tagPtr, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility/LoadImageNativeCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadImageNativeCallback__ctor_m6E79BBBACC3CB092EADD79DF8860688AF499A7A0 (LoadImageNativeCallback_t8B17B42E3BCD5DA59BCA133FF158E50A6903AA06* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility::NPUtilityRegisterCallbacks(VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility/LoadImageNativeCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativePluginsUtility_NPUtilityRegisterCallbacks_m088B4DAB91DBAB4FA2E8007FD14A0817A05F70DE (LoadImageNativeCallback_t8B17B42E3BCD5DA59BCA133FF158E50A6903AA06* ___0_loadImageCallback, const RuntimeMethod* method) ;
// System.String System.IntPtr::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IntPtr_ToString_mDA1150F4802E1FB9313FB4E32C684EEE19116E5C (intptr_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.DebugLogger::Log(System.String,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogger_Log_m47EF53F755D0D94C8B8656BA2AB14408685793BA (String_t* ___0_message, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_context, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility::NPUtilityRetainObject(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativePluginsUtility_NPUtilityRetainObject_mF6AD4BC80A6A755EC4D121F2A0EB2D90F6465295 (intptr_t ___0_nativePtr, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility::NPUtilityReleaseObject(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativePluginsUtility_NPUtilityReleaseObject_mD71FD4E8FFB6E0F8A1E53A9E3B8EF44A8D32751A (intptr_t ___0_nativePtr, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility::NPUtilityFreeCPointerObject(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativePluginsUtility_NPUtilityFreeCPointerObject_m962261BDEE020E347D134D45DE90B7BD42BAA355 (intptr_t ___0_nativePtr, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.Assert::IsArgNotNull(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsArgNotNull_mEE70C86075147997C1C822DE942A1B657EAF257B (RuntimeObject* ___0_obj, String_t* ___1_argName, const RuntimeMethod* method) ;
// System.IntPtr VoxelBusters.CoreLibrary.NativePlugins.MarshalUtility::GetIntPtr(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MarshalUtility_GetIntPtr_m80AF6181AE2D08B25286CC0557BAF94F7F605926 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility::NPUtilityLoadImage(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativePluginsUtility_NPUtilityLoadImage_mEFB44D15A70DBEF57133794BCFD129585B393141 (intptr_t ___0_nativeDataPtr, intptr_t ___1_tagPtr, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility::NPUtilityTakeScreenshot(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativePluginsUtility_NPUtilityTakeScreenshot_m7657534794333BA32E0D14E103CDC73912939FEF (intptr_t ___0_tagPtr, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.DateTime System.DateTime::ParseExact(System.String,System.String,System.IFormatProvider,System.Globalization.DateTimeStyles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_ParseExact_m71470EC56D0A0F92134660CA8097F65EF70D91CA (String_t* ___0_s, String_t* ___1_format, RuntimeObject* ___2_provider, int32_t ___3_style, const RuntimeMethod* method) ;
// System.DateTimeKind System.DateTime::get_Kind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Kind_m83D45222D9386873333A178B9AB31AC2B2F2C993 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::ToUniversalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_ToUniversalTime_m52CA1EAD0BE0A357BCACC38747ECA4A8810155A9 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.String VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility::ToZuluFormatString(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IosNativePluginsUtility_ToZuluFormatString_m9F9D8504AD16D7A7D5ECB21313D2A2FC566BD054 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_dateTime, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility::NPUtilityOpenSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativePluginsUtility_NPUtilityOpenSettings_m9D199712D3A9584511B976E1CF67E5A8B964CA19 (const RuntimeMethod* method) ;
// UnityEngine.Vector2 VoxelBusters.CoreLibrary.UnityEngineUtility::InvertScreenPosition(UnityEngine.Vector2,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UnityEngineUtility_InvertScreenPosition_m003C8C31331AEF0A685818612300D9DE386E54A0 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_position, bool ___1_invertX, bool ___2_invertY, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility::NPUtilitySetLastTouchPosition(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativePluginsUtility_NPUtilitySetLastTouchPosition_m895744A619FA38DEC3B5383764D210821C3BCA21 (float ___0_posX, float ___1_posY, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility::SetLastTouchPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativePluginsUtility_SetLastTouchPosition_m843C993A8610297A5FB073ACAE09267E58D932ED (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_position, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::FromIntPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_FromIntPtr_mA7848A4285D007CADC52B6272DB243C8FDFD5FAC (intptr_t ___0_value, const RuntimeMethod* method) ;
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.Error::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Error__ctor_m3F2BFDE4C1781B9E6A6165661CADB428407ADA1A (Error_t141DBA81928651667910B46EE98D0BC82AA746D2* __this, String_t* ___0_description, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility/LoadImageCallback::Invoke(System.Byte[],VoxelBusters.CoreLibrary.Error)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoadImageCallback_Invoke_m55EC2909262B50E0C820AEDF34036AD24A89BE0F_inline (LoadImageCallback_t787B710D4336A75798F68101F3E5C5657F07367F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_imageData, Error_t141DBA81928651667910B46EE98D0BC82AA746D2* ___1_error, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77 (intptr_t ___0_source, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_destination, int32_t ___2_startIndex, int32_t ___3_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C void DEFAULT_CALL NPUtilityRegisterCallbacks(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL NPUtilityLoadImage(intptr_t, intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL NPUtilityTakeScreenshot(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL NPUtilityRetainObject(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL NPUtilityReleaseObject(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL NPUtilityOpenSettings();
IL2CPP_EXTERN_C void DEFAULT_CALL NPUtilityFreeCPointerObject(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL NPUtilitySetLastTouchPosition(float, float);
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
// System.Void VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativeObjectRef::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativeObjectRef__ctor_m9F74C7AA80CB223096DBD50BAB91784AA92B1F02 (IosNativeObjectRef_t37DF50DF8103DF298DE9E384C5C1787AF15D9C8D* __this, intptr_t ___0_ptr, bool ___1_retain, const RuntimeMethod* method) 
{
	{
		// : base(ptr, retain)
		intptr_t L_0 = ___0_ptr;
		bool L_1 = ___1_retain;
		NativeObjectRef__ctor_mDD62AC35F1D3612DD7CDEC59028A9B5D431C8E19(__this, L_0, L_1, NULL);
		// { }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativeObjectRef::RetainInternal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativeObjectRef_RetainInternal_m33A746A1AE752429F1E7CAFB8972BA46452E3EFB (IosNativeObjectRef_t37DF50DF8103DF298DE9E384C5C1787AF15D9C8D* __this, intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativePluginsUtility_t8C2D455FF214C23E896C87422FBDFA820CA3AA8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IosNativePluginsUtility.RetainNativeObject(ptr);
		intptr_t L_0 = ___0_ptr;
		il2cpp_codegen_runtime_class_init_inline(IosNativePluginsUtility_t8C2D455FF214C23E896C87422FBDFA820CA3AA8C_il2cpp_TypeInfo_var);
		IosNativePluginsUtility_RetainNativeObject_m249A62DCCF686E99E40C8C34CFC0A79C6C466DB7(L_0, NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativeObjectRef::ReleaseInternal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativeObjectRef_ReleaseInternal_m07D634336F140EEF9693B26BE97F80E3CDF38BBD (IosNativeObjectRef_t37DF50DF8103DF298DE9E384C5C1787AF15D9C8D* __this, intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativePluginsUtility_t8C2D455FF214C23E896C87422FBDFA820CA3AA8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IosNativePluginsUtility.ReleaseNativeObject(ptr);
		intptr_t L_0 = ___0_ptr;
		il2cpp_codegen_runtime_class_init_inline(IosNativePluginsUtility_t8C2D455FF214C23E896C87422FBDFA820CA3AA8C_il2cpp_TypeInfo_var);
		IosNativePluginsUtility_ReleaseNativeObject_mC2FA52769993227DD6AE13C3333823967409BE14(L_0, NULL);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IosNativePluginsUtility_HandleLoadImageCallbackInternal_m04B7B88ED3F5AA154A48DE5D65126D368E9179A4(intptr_t ___0_dataArrayPtr, int32_t ___1_dataLength, intptr_t ___2_tagPtr)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	IosNativePluginsUtility_HandleLoadImageCallbackInternal_m04B7B88ED3F5AA154A48DE5D65126D368E9179A4(___0_dataArrayPtr, ___1_dataLength, ___2_tagPtr, NULL);

}
// System.Void VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility::NPUtilityRegisterCallbacks(VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility/LoadImageNativeCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativePluginsUtility_NPUtilityRegisterCallbacks_m088B4DAB91DBAB4FA2E8007FD14A0817A05F70DE (LoadImageNativeCallback_t8B17B42E3BCD5DA59BCA133FF158E50A6903AA06* ___0_loadImageCallback, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___0_loadImageCallback' to native representation
	Il2CppMethodPointer ____0_loadImageCallback_marshaled = NULL;
	____0_loadImageCallback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_loadImageCallback));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(NPUtilityRegisterCallbacks)(____0_loadImageCallback_marshaled);

}
// System.Void VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility::NPUtilityLoadImage(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativePluginsUtility_NPUtilityLoadImage_mEFB44D15A70DBEF57133794BCFD129585B393141 (intptr_t ___0_nativeDataPtr, intptr_t ___1_tagPtr, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(NPUtilityLoadImage)(___0_nativeDataPtr, ___1_tagPtr);

}
// System.Void VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility::NPUtilityTakeScreenshot(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativePluginsUtility_NPUtilityTakeScreenshot_m7657534794333BA32E0D14E103CDC73912939FEF (intptr_t ___0_tagPtr, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(NPUtilityTakeScreenshot)(___0_tagPtr);

}
// System.Void VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility::NPUtilityRetainObject(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativePluginsUtility_NPUtilityRetainObject_mF6AD4BC80A6A755EC4D121F2A0EB2D90F6465295 (intptr_t ___0_nativePtr, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(NPUtilityRetainObject)(___0_nativePtr);

}
// System.Void VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility::NPUtilityReleaseObject(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativePluginsUtility_NPUtilityReleaseObject_mD71FD4E8FFB6E0F8A1E53A9E3B8EF44A8D32751A (intptr_t ___0_nativePtr, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(NPUtilityReleaseObject)(___0_nativePtr);

}
// System.Void VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility::NPUtilityOpenSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativePluginsUtility_NPUtilityOpenSettings_m9D199712D3A9584511B976E1CF67E5A8B964CA19 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(NPUtilityOpenSettings)();

}
// System.Void VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility::NPUtilityFreeCPointerObject(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativePluginsUtility_NPUtilityFreeCPointerObject_m962261BDEE020E347D134D45DE90B7BD42BAA355 (intptr_t ___0_nativePtr, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(NPUtilityFreeCPointerObject)(___0_nativePtr);

}
// System.Void VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility::NPUtilitySetLastTouchPosition(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativePluginsUtility_NPUtilitySetLastTouchPosition_m895744A619FA38DEC3B5383764D210821C3BCA21 (float ___0_posX, float ___1_posY, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float, float);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(NPUtilitySetLastTouchPosition)(___0_posX, ___1_posY);

}
// System.Void VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativePluginsUtility__cctor_mA1490EA64B6CA4EF95F27D1A063410E4A41DDDC3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativePluginsUtility_HandleLoadImageCallbackInternal_m04B7B88ED3F5AA154A48DE5D65126D368E9179A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadImageNativeCallback_t8B17B42E3BCD5DA59BCA133FF158E50A6903AA06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NPUtilityRegisterCallbacks(loadImageCallback: HandleLoadImageCallbackInternal);
		LoadImageNativeCallback_t8B17B42E3BCD5DA59BCA133FF158E50A6903AA06* L_0 = (LoadImageNativeCallback_t8B17B42E3BCD5DA59BCA133FF158E50A6903AA06*)il2cpp_codegen_object_new(LoadImageNativeCallback_t8B17B42E3BCD5DA59BCA133FF158E50A6903AA06_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LoadImageNativeCallback__ctor_m6E79BBBACC3CB092EADD79DF8860688AF499A7A0(L_0, NULL, (intptr_t)((void*)IosNativePluginsUtility_HandleLoadImageCallbackInternal_m04B7B88ED3F5AA154A48DE5D65126D368E9179A4_RuntimeMethod_var), NULL);
		IosNativePluginsUtility_NPUtilityRegisterCallbacks_m088B4DAB91DBAB4FA2E8007FD14A0817A05F70DE(L_0, NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility::RetainNativeObject(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativePluginsUtility_RetainNativeObject_m249A62DCCF686E99E40C8C34CFC0A79C6C466DB7 (intptr_t ___0_nativePtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativePluginsUtility_t8C2D455FF214C23E896C87422FBDFA820CA3AA8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4600E095C26E1DDFA8614370D8AD14ADCDB0C03);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DebugLogger.Log("Retaining native object pointer: " + nativePtr);
		String_t* L_0;
		L_0 = IntPtr_ToString_mDA1150F4802E1FB9313FB4E32C684EEE19116E5C((&___0_nativePtr), NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF4600E095C26E1DDFA8614370D8AD14ADCDB0C03, L_0, NULL);
		DebugLogger_Log_m47EF53F755D0D94C8B8656BA2AB14408685793BA(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		// NPUtilityRetainObject(nativePtr);
		intptr_t L_2 = ___0_nativePtr;
		il2cpp_codegen_runtime_class_init_inline(IosNativePluginsUtility_t8C2D455FF214C23E896C87422FBDFA820CA3AA8C_il2cpp_TypeInfo_var);
		IosNativePluginsUtility_NPUtilityRetainObject_mF6AD4BC80A6A755EC4D121F2A0EB2D90F6465295(L_2, NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility::ReleaseNativeObject(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativePluginsUtility_ReleaseNativeObject_mC2FA52769993227DD6AE13C3333823967409BE14 (intptr_t ___0_nativePtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativePluginsUtility_t8C2D455FF214C23E896C87422FBDFA820CA3AA8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E9D6365A21B64F391BD5EA572F61F512AF1491B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DebugLogger.Log("Releasing native object pointer: " + nativePtr);
		String_t* L_0;
		L_0 = IntPtr_ToString_mDA1150F4802E1FB9313FB4E32C684EEE19116E5C((&___0_nativePtr), NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral5E9D6365A21B64F391BD5EA572F61F512AF1491B, L_0, NULL);
		DebugLogger_Log_m47EF53F755D0D94C8B8656BA2AB14408685793BA(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		// NPUtilityReleaseObject(nativePtr);
		intptr_t L_2 = ___0_nativePtr;
		il2cpp_codegen_runtime_class_init_inline(IosNativePluginsUtility_t8C2D455FF214C23E896C87422FBDFA820CA3AA8C_il2cpp_TypeInfo_var);
		IosNativePluginsUtility_NPUtilityReleaseObject_mD71FD4E8FFB6E0F8A1E53A9E3B8EF44A8D32751A(L_2, NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility::FreeCPointerObject(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativePluginsUtility_FreeCPointerObject_m1404431809BE6714184DD2E3EEFEEC4588B32E6D (intptr_t ___0_nativePtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativePluginsUtility_t8C2D455FF214C23E896C87422FBDFA820CA3AA8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NPUtilityFreeCPointerObject(nativePtr);
		intptr_t L_0 = ___0_nativePtr;
		il2cpp_codegen_runtime_class_init_inline(IosNativePluginsUtility_t8C2D455FF214C23E896C87422FBDFA820CA3AA8C_il2cpp_TypeInfo_var);
		IosNativePluginsUtility_NPUtilityFreeCPointerObject_m962261BDEE020E347D134D45DE90B7BD42BAA355(L_0, NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility::LoadImage(System.IntPtr,VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility/LoadImageCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativePluginsUtility_LoadImage_mBFE1F9CAE8895432B4A6C54FE765B2BE15DFDA6A (intptr_t ___0_nativePtr, LoadImageCallback_t787B710D4336A75798F68101F3E5C5657F07367F* ___1_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativePluginsUtility_t8C2D455FF214C23E896C87422FBDFA820CA3AA8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC71B380AFF23A38F6029B32B61C6943CB960350);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Assert.IsArgNotNull(callback, "callback");
		LoadImageCallback_t787B710D4336A75798F68101F3E5C5657F07367F* L_0 = ___1_callback;
		Assert_IsArgNotNull_mEE70C86075147997C1C822DE942A1B657EAF257B(L_0, _stringLiteralDC71B380AFF23A38F6029B32B61C6943CB960350, NULL);
		// var     callbackPtr     = MarshalUtility.GetIntPtr(callback);
		LoadImageCallback_t787B710D4336A75798F68101F3E5C5657F07367F* L_1 = ___1_callback;
		intptr_t L_2;
		L_2 = MarshalUtility_GetIntPtr_m80AF6181AE2D08B25286CC0557BAF94F7F605926(L_1, NULL);
		V_0 = L_2;
		// NPUtilityLoadImage(nativePtr, callbackPtr);
		intptr_t L_3 = ___0_nativePtr;
		intptr_t L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(IosNativePluginsUtility_t8C2D455FF214C23E896C87422FBDFA820CA3AA8C_il2cpp_TypeInfo_var);
		IosNativePluginsUtility_NPUtilityLoadImage_mEFB44D15A70DBEF57133794BCFD129585B393141(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility::TakeScreenshot(VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility/LoadImageCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativePluginsUtility_TakeScreenshot_m91FD1B3A4E3508B8B5400979501E8082245DCE83 (LoadImageCallback_t787B710D4336A75798F68101F3E5C5657F07367F* ___0_callback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativePluginsUtility_t8C2D455FF214C23E896C87422FBDFA820CA3AA8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC71B380AFF23A38F6029B32B61C6943CB960350);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Assert.IsArgNotNull(callback, "callback");
		LoadImageCallback_t787B710D4336A75798F68101F3E5C5657F07367F* L_0 = ___0_callback;
		Assert_IsArgNotNull_mEE70C86075147997C1C822DE942A1B657EAF257B(L_0, _stringLiteralDC71B380AFF23A38F6029B32B61C6943CB960350, NULL);
		// var     callbackPtr     = MarshalUtility.GetIntPtr(callback);
		LoadImageCallback_t787B710D4336A75798F68101F3E5C5657F07367F* L_1 = ___0_callback;
		intptr_t L_2;
		L_2 = MarshalUtility_GetIntPtr_m80AF6181AE2D08B25286CC0557BAF94F7F605926(L_1, NULL);
		// NPUtilityTakeScreenshot(callbackPtr);
		il2cpp_codegen_runtime_class_init_inline(IosNativePluginsUtility_t8C2D455FF214C23E896C87422FBDFA820CA3AA8C_il2cpp_TypeInfo_var);
		IosNativePluginsUtility_NPUtilityTakeScreenshot_m7657534794333BA32E0D14E103CDC73912939FEF(L_2, NULL);
		// }
		return;
	}
}
// System.DateTime VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility::ParseDateTimeStringInUTCFormat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D IosNativePluginsUtility_ParseDateTimeStringInUTCFormat_mA2C43F02F9802CDAC4332D8F1BB3FD7DA0F21187 (String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A355F56935F79D8EDEE16F87B011979929C36C1);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (value != null)
		String_t* L_0 = ___0_value;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// return DateTime.ParseExact(value, kZuluFormat, CultureInfo.InvariantCulture, DateTimeStyles.AssumeUniversal);
		String_t* L_1 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_2;
		L_2 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3;
		L_3 = DateTime_ParseExact_m71470EC56D0A0F92134660CA8097F65EF70D91CA(L_1, _stringLiteral6A355F56935F79D8EDEE16F87B011979929C36C1, L_2, ((int32_t)64), NULL);
		return L_3;
	}

IL_0016:
	{
		// return default(DateTime);
		il2cpp_codegen_initobj((&V_0), sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4 = V_0;
		return L_4;
	}
}
// System.String VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility::ToZuluFormatString(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IosNativePluginsUtility_ToZuluFormatString_m9F9D8504AD16D7A7D5ECB21313D2A2FC566BD054 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_dateTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativePluginsUtility_t8C2D455FF214C23E896C87422FBDFA820CA3AA8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A355F56935F79D8EDEE16F87B011979929C36C1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (dateTime.Kind == DateTimeKind.Utc)
		int32_t L_0;
		L_0 = DateTime_get_Kind_m83D45222D9386873333A178B9AB31AC2B2F2C993((&___0_dateTime), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0017;
		}
	}
	{
		// return dateTime.ToString(kZuluFormat);
		String_t* L_1;
		L_1 = DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78((&___0_dateTime), _stringLiteral6A355F56935F79D8EDEE16F87B011979929C36C1, NULL);
		return L_1;
	}

IL_0017:
	{
		// return dateTime.ToUniversalTime().ToZuluFormatString();
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		L_2 = DateTime_ToUniversalTime_m52CA1EAD0BE0A357BCACC38747ECA4A8810155A9((&___0_dateTime), NULL);
		il2cpp_codegen_runtime_class_init_inline(IosNativePluginsUtility_t8C2D455FF214C23E896C87422FBDFA820CA3AA8C_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = IosNativePluginsUtility_ToZuluFormatString_m9F9D8504AD16D7A7D5ECB21313D2A2FC566BD054(L_2, NULL);
		return L_3;
	}
}
// System.Void VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility::OpenApplicationSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativePluginsUtility_OpenApplicationSettings_m177477BB627197D7C760F689ECC729A1981C86F6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativePluginsUtility_t8C2D455FF214C23E896C87422FBDFA820CA3AA8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NPUtilityOpenSettings();
		il2cpp_codegen_runtime_class_init_inline(IosNativePluginsUtility_t8C2D455FF214C23E896C87422FBDFA820CA3AA8C_il2cpp_TypeInfo_var);
		IosNativePluginsUtility_NPUtilityOpenSettings_m9D199712D3A9584511B976E1CF67E5A8B964CA19(NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility::SetLastTouchPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativePluginsUtility_SetLastTouchPosition_m843C993A8610297A5FB073ACAE09267E58D932ED (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_position, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativePluginsUtility_t8C2D455FF214C23E896C87422FBDFA820CA3AA8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var     invertedPosition    = UnityEngineUtility.InvertScreenPosition(position, invertX: false, invertY: true);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = UnityEngineUtility_InvertScreenPosition_m003C8C31331AEF0A685818612300D9DE386E54A0(L_0, (bool)0, (bool)1, NULL);
		V_0 = L_1;
		// NPUtilitySetLastTouchPosition(invertedPosition.x, invertedPosition.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		float L_5 = L_4.___y_1;
		il2cpp_codegen_runtime_class_init_inline(IosNativePluginsUtility_t8C2D455FF214C23E896C87422FBDFA820CA3AA8C_il2cpp_TypeInfo_var);
		IosNativePluginsUtility_NPUtilitySetLastTouchPosition_m895744A619FA38DEC3B5383764D210821C3BCA21(L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility::SetLastTouchPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativePluginsUtility_SetLastTouchPosition_m8148BF9D13269FF3B07F4FF6BA093DD140AF1E22 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IosNativePluginsUtility_t8C2D455FF214C23E896C87422FBDFA820CA3AA8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector2 _touchPosition    = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		V_0 = L_0;
		// if (Input.touchCount > 0)
		int32_t L_1;
		L_1 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		// _touchPosition        = Input.GetTouch(0).position;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_2;
		L_2 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_1 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_1), NULL);
		V_0 = L_3;
		// _touchPosition.y    = Screen.height - _touchPosition.y;
		int32_t L_4;
		L_4 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		float L_6 = L_5.___y_1;
		(&V_0)->___y_1 = ((float)il2cpp_codegen_subtract(((float)L_4), L_6));
	}

IL_0031:
	{
		// SetLastTouchPosition(_touchPosition);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(IosNativePluginsUtility_t8C2D455FF214C23E896C87422FBDFA820CA3AA8C_il2cpp_TypeInfo_var);
		IosNativePluginsUtility_SetLastTouchPosition_m843C993A8610297A5FB073ACAE09267E58D932ED(L_7, NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility::HandleLoadImageCallbackInternal(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IosNativePluginsUtility_HandleLoadImageCallbackInternal_m04B7B88ED3F5AA154A48DE5D65126D368E9179A4 (intptr_t ___0_dataArrayPtr, int32_t ___1_dataLength, intptr_t ___2_tagPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Error_t141DBA81928651667910B46EE98D0BC82AA746D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadImageCallback_t787B710D4336A75798F68101F3E5C5657F07367F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral137D3F6C9D078DCA813CAFAF015B055B328AAA5D);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	LoadImageCallback_t787B710D4336A75798F68101F3E5C5657F07367F* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		// var     handle      = GCHandle.FromIntPtr(tagPtr);
		intptr_t L_0 = ___2_tagPtr;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_FromIntPtr_mA7848A4285D007CADC52B6272DB243C8FDFD5FAC(L_0, NULL);
		V_0 = L_1;
		// var     callback    = (LoadImageCallback)handle.Target;
		RuntimeObject* L_2;
		L_2 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		V_1 = ((LoadImageCallback_t787B710D4336A75798F68101F3E5C5657F07367F*)CastclassSealed((RuntimeObject*)L_2, LoadImageCallback_t787B710D4336A75798F68101F3E5C5657F07367F_il2cpp_TypeInfo_var));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004e:
			{// begin finally (depth: 1)
				// handle.Free();
				GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_0), NULL);
				// }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (IntPtr.Zero == dataArrayPtr)
				intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
				intptr_t L_4 = ___0_dataArrayPtr;
				bool L_5;
				L_5 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_3, L_4, NULL);
				if (!L_5)
				{
					goto IL_0034_1;
				}
			}
			{
				// callback(null, new Error(description: "Could not load texture data."));
				LoadImageCallback_t787B710D4336A75798F68101F3E5C5657F07367F* L_6 = V_1;
				Error_t141DBA81928651667910B46EE98D0BC82AA746D2* L_7 = (Error_t141DBA81928651667910B46EE98D0BC82AA746D2*)il2cpp_codegen_object_new(Error_t141DBA81928651667910B46EE98D0BC82AA746D2_il2cpp_TypeInfo_var);
				NullCheck(L_7);
				Error__ctor_m3F2BFDE4C1781B9E6A6165661CADB428407ADA1A(L_7, _stringLiteral137D3F6C9D078DCA813CAFAF015B055B328AAA5D, NULL);
				NullCheck(L_6);
				LoadImageCallback_Invoke_m55EC2909262B50E0C820AEDF34036AD24A89BE0F_inline(L_6, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, L_7, NULL);
				goto IL_0056;
			}

IL_0034_1:
			{
				// var     byteArray   = new byte[dataLength];
				int32_t L_8 = ___1_dataLength;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_8);
				V_2 = L_9;
				// Marshal.Copy(dataArrayPtr, byteArray, 0, dataLength);
				intptr_t L_10 = ___0_dataArrayPtr;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_2;
				int32_t L_12 = ___1_dataLength;
				il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
				Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_10, L_11, 0, L_12, NULL);
				// callback(byteArray, null);
				LoadImageCallback_t787B710D4336A75798F68101F3E5C5657F07367F* L_13 = V_1;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
				NullCheck(L_13);
				LoadImageCallback_Invoke_m55EC2909262B50E0C820AEDF34036AD24A89BE0F_inline(L_13, L_14, (Error_t141DBA81928651667910B46EE98D0BC82AA746D2*)NULL, NULL);
				// }
				goto IL_0056;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0056:
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
void LoadImageCallback_Invoke_m55EC2909262B50E0C820AEDF34036AD24A89BE0F_Multicast(LoadImageCallback_t787B710D4336A75798F68101F3E5C5657F07367F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_imageData, Error_t141DBA81928651667910B46EE98D0BC82AA746D2* ___1_error, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		LoadImageCallback_t787B710D4336A75798F68101F3E5C5657F07367F* currentDelegate = reinterpret_cast<LoadImageCallback_t787B710D4336A75798F68101F3E5C5657F07367F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, Error_t141DBA81928651667910B46EE98D0BC82AA746D2*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_imageData, ___1_error, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void LoadImageCallback_Invoke_m55EC2909262B50E0C820AEDF34036AD24A89BE0F_OpenInst(LoadImageCallback_t787B710D4336A75798F68101F3E5C5657F07367F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_imageData, Error_t141DBA81928651667910B46EE98D0BC82AA746D2* ___1_error, const RuntimeMethod* method)
{
	NullCheck(___0_imageData);
	typedef void (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, Error_t141DBA81928651667910B46EE98D0BC82AA746D2*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_imageData, ___1_error, method);
}
void LoadImageCallback_Invoke_m55EC2909262B50E0C820AEDF34036AD24A89BE0F_OpenStatic(LoadImageCallback_t787B710D4336A75798F68101F3E5C5657F07367F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_imageData, Error_t141DBA81928651667910B46EE98D0BC82AA746D2* ___1_error, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, Error_t141DBA81928651667910B46EE98D0BC82AA746D2*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_imageData, ___1_error, method);
}
void LoadImageCallback_Invoke_m55EC2909262B50E0C820AEDF34036AD24A89BE0F_OpenStaticInvoker(LoadImageCallback_t787B710D4336A75798F68101F3E5C5657F07367F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_imageData, Error_t141DBA81928651667910B46EE98D0BC82AA746D2* ___1_error, const RuntimeMethod* method)
{
	InvokerActionInvoker2< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, Error_t141DBA81928651667910B46EE98D0BC82AA746D2* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_imageData, ___1_error);
}
void LoadImageCallback_Invoke_m55EC2909262B50E0C820AEDF34036AD24A89BE0F_ClosedStaticInvoker(LoadImageCallback_t787B710D4336A75798F68101F3E5C5657F07367F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_imageData, Error_t141DBA81928651667910B46EE98D0BC82AA746D2* ___1_error, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, Error_t141DBA81928651667910B46EE98D0BC82AA746D2* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_imageData, ___1_error);
}
// System.Void VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility/LoadImageCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadImageCallback__ctor_mD4D3350B709D582D34D388DDB3896529BE6078F9 (LoadImageCallback_t787B710D4336A75798F68101F3E5C5657F07367F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LoadImageCallback_Invoke_m55EC2909262B50E0C820AEDF34036AD24A89BE0F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&LoadImageCallback_Invoke_m55EC2909262B50E0C820AEDF34036AD24A89BE0F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LoadImageCallback_Invoke_m55EC2909262B50E0C820AEDF34036AD24A89BE0F_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&LoadImageCallback_Invoke_m55EC2909262B50E0C820AEDF34036AD24A89BE0F_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&LoadImageCallback_Invoke_m55EC2909262B50E0C820AEDF34036AD24A89BE0F_Multicast;
}
// System.Void VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility/LoadImageCallback::Invoke(System.Byte[],VoxelBusters.CoreLibrary.Error)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadImageCallback_Invoke_m55EC2909262B50E0C820AEDF34036AD24A89BE0F (LoadImageCallback_t787B710D4336A75798F68101F3E5C5657F07367F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_imageData, Error_t141DBA81928651667910B46EE98D0BC82AA746D2* ___1_error, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, Error_t141DBA81928651667910B46EE98D0BC82AA746D2*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_imageData, ___1_error, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility/LoadImageCallback::BeginInvoke(System.Byte[],VoxelBusters.CoreLibrary.Error,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoadImageCallback_BeginInvoke_mAB953FF8070B8385B4AC1D1CDBAC7DDFF311D7FB (LoadImageCallback_t787B710D4336A75798F68101F3E5C5657F07367F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_imageData, Error_t141DBA81928651667910B46EE98D0BC82AA746D2* ___1_error, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_imageData;
	__d_args[1] = ___1_error;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility/LoadImageCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadImageCallback_EndInvoke_mC6E9F2F90C0B4B39377DD84E341A957BEF389C11 (LoadImageCallback_t787B710D4336A75798F68101F3E5C5657F07367F* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
void LoadImageNativeCallback_Invoke_mB72597C6178B8640700C78849B70527263D68C39_Multicast(LoadImageNativeCallback_t8B17B42E3BCD5DA59BCA133FF158E50A6903AA06* __this, intptr_t ___0_byteArrayPtr, int32_t ___1_byteLength, intptr_t ___2_tagPtr, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		LoadImageNativeCallback_t8B17B42E3BCD5DA59BCA133FF158E50A6903AA06* currentDelegate = reinterpret_cast<LoadImageNativeCallback_t8B17B42E3BCD5DA59BCA133FF158E50A6903AA06*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_byteArrayPtr, ___1_byteLength, ___2_tagPtr, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void LoadImageNativeCallback_Invoke_mB72597C6178B8640700C78849B70527263D68C39_OpenInst(LoadImageNativeCallback_t8B17B42E3BCD5DA59BCA133FF158E50A6903AA06* __this, intptr_t ___0_byteArrayPtr, int32_t ___1_byteLength, intptr_t ___2_tagPtr, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_byteArrayPtr, ___1_byteLength, ___2_tagPtr, method);
}
void LoadImageNativeCallback_Invoke_mB72597C6178B8640700C78849B70527263D68C39_OpenStatic(LoadImageNativeCallback_t8B17B42E3BCD5DA59BCA133FF158E50A6903AA06* __this, intptr_t ___0_byteArrayPtr, int32_t ___1_byteLength, intptr_t ___2_tagPtr, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, int32_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_byteArrayPtr, ___1_byteLength, ___2_tagPtr, method);
}
void LoadImageNativeCallback_Invoke_mB72597C6178B8640700C78849B70527263D68C39_OpenStaticInvoker(LoadImageNativeCallback_t8B17B42E3BCD5DA59BCA133FF158E50A6903AA06* __this, intptr_t ___0_byteArrayPtr, int32_t ___1_byteLength, intptr_t ___2_tagPtr, const RuntimeMethod* method)
{
	InvokerActionInvoker3< intptr_t, int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_byteArrayPtr, ___1_byteLength, ___2_tagPtr);
}
void LoadImageNativeCallback_Invoke_mB72597C6178B8640700C78849B70527263D68C39_ClosedStaticInvoker(LoadImageNativeCallback_t8B17B42E3BCD5DA59BCA133FF158E50A6903AA06* __this, intptr_t ___0_byteArrayPtr, int32_t ___1_byteLength, intptr_t ___2_tagPtr, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, intptr_t, int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_byteArrayPtr, ___1_byteLength, ___2_tagPtr);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_LoadImageNativeCallback_t8B17B42E3BCD5DA59BCA133FF158E50A6903AA06 (LoadImageNativeCallback_t8B17B42E3BCD5DA59BCA133FF158E50A6903AA06* __this, intptr_t ___0_byteArrayPtr, int32_t ___1_byteLength, intptr_t ___2_tagPtr, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_byteArrayPtr, ___1_byteLength, ___2_tagPtr);

}
// System.Void VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility/LoadImageNativeCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadImageNativeCallback__ctor_m6E79BBBACC3CB092EADD79DF8860688AF499A7A0 (LoadImageNativeCallback_t8B17B42E3BCD5DA59BCA133FF158E50A6903AA06* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LoadImageNativeCallback_Invoke_mB72597C6178B8640700C78849B70527263D68C39_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&LoadImageNativeCallback_Invoke_mB72597C6178B8640700C78849B70527263D68C39_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LoadImageNativeCallback_Invoke_mB72597C6178B8640700C78849B70527263D68C39_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&LoadImageNativeCallback_Invoke_mB72597C6178B8640700C78849B70527263D68C39_Multicast;
}
// System.Void VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility/LoadImageNativeCallback::Invoke(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadImageNativeCallback_Invoke_mB72597C6178B8640700C78849B70527263D68C39 (LoadImageNativeCallback_t8B17B42E3BCD5DA59BCA133FF158E50A6903AA06* __this, intptr_t ___0_byteArrayPtr, int32_t ___1_byteLength, intptr_t ___2_tagPtr, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_byteArrayPtr, ___1_byteLength, ___2_tagPtr, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility/LoadImageNativeCallback::BeginInvoke(System.IntPtr,System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoadImageNativeCallback_BeginInvoke_m04F27D130927BB6BFDACF8C1E4AE77A714E8B0FC (LoadImageNativeCallback_t8B17B42E3BCD5DA59BCA133FF158E50A6903AA06* __this, intptr_t ___0_byteArrayPtr, int32_t ___1_byteLength, intptr_t ___2_tagPtr, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_byteArrayPtr);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_byteLength);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___2_tagPtr);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void VoxelBusters.CoreLibrary.NativePlugins.iOS.IosNativePluginsUtility/LoadImageNativeCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadImageNativeCallback_EndInvoke_mA6DB14CCB0B39C817A04533B43D8DFA8BE9EA9E9 (LoadImageNativeCallback_t8B17B42E3BCD5DA59BCA133FF158E50A6903AA06* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoadImageCallback_Invoke_m55EC2909262B50E0C820AEDF34036AD24A89BE0F_inline (LoadImageCallback_t787B710D4336A75798F68101F3E5C5657F07367F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_imageData, Error_t141DBA81928651667910B46EE98D0BC82AA746D2* ___1_error, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, Error_t141DBA81928651667910B46EE98D0BC82AA746D2*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_imageData, ___1_error, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
