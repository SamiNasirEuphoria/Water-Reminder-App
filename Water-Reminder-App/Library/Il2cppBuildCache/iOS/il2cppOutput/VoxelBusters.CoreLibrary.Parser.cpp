#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
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
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Collections.IList
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
// VoxelBusters.CoreLibrary.Parser.JsonConstants
struct JsonConstants_tAB1FDB844DA5CB3AC4C25FC8130D3F74ACB690D6;
// VoxelBusters.CoreLibrary.Parser.JsonReader
struct JsonReader_t47F60D6EDD8D2B55D6DD8203522B13253E2394A2;
// VoxelBusters.CoreLibrary.Parser.JsonString
struct JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF;
// VoxelBusters.CoreLibrary.Parser.JsonWriter
struct JsonWriter_tBE379245CF2B3A0806A9D2117384BF460ADA6C69;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonReader_t47F60D6EDD8D2B55D6DD8203522B13253E2394A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonWriter_tBE379245CF2B3A0806A9D2117384BF460ADA6C69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeArray_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral750483B1B79D7876103D12AD91A365DD2A867A80;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699;
IL2CPP_EXTERN_C String_t* _stringLiteralDB5776E5C9D2479BF6D901DFBBD112A57EA557E3;
IL2CPP_EXTERN_C String_t* _stringLiteralE727BF366E3CC855B808D806440542BF7152AF19;
IL2CPP_EXTERN_C String_t* _stringLiteralE9133A9B366EB2BC1B98829EED9025B6D65EA494;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t8E6E581FA5A71C21FE57A0D58E7A9B6355AB8176 
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

// VoxelBusters.CoreLibrary.Parser.JsonConstants
struct JsonConstants_tAB1FDB844DA5CB3AC4C25FC8130D3F74ACB690D6  : public RuntimeObject
{
};

// VoxelBusters.CoreLibrary.Parser.JsonExtensions
struct JsonExtensions_t7ED956BBCD6F4569CC54A720CF1B72FFD83DC92B  : public RuntimeObject
{
};

// VoxelBusters.CoreLibrary.Parser.JsonReader
struct JsonReader_t47F60D6EDD8D2B55D6DD8203522B13253E2394A2  : public RuntimeObject
{
	// VoxelBusters.CoreLibrary.Parser.JsonString VoxelBusters.CoreLibrary.Parser.JsonReader::<JSONString>k__BackingField
	JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* ___U3CJSONStringU3Ek__BackingField_0;
};

// VoxelBusters.CoreLibrary.Parser.JsonString
struct JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF  : public RuntimeObject
{
	// System.String VoxelBusters.CoreLibrary.Parser.JsonString::<Value>k__BackingField
	String_t* ___U3CValueU3Ek__BackingField_0;
	// System.Boolean VoxelBusters.CoreLibrary.Parser.JsonString::<IsNullOrEmpty>k__BackingField
	bool ___U3CIsNullOrEmptyU3Ek__BackingField_1;
	// System.Int32 VoxelBusters.CoreLibrary.Parser.JsonString::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_2;
};

// VoxelBusters.CoreLibrary.Parser.JsonUtility
struct JsonUtility_t5A818BFBA09BB3B592AFC5D33C13247D493ECBC0  : public RuntimeObject
{
};

// VoxelBusters.CoreLibrary.Parser.JsonWriter
struct JsonWriter_tBE379245CF2B3A0806A9D2117384BF460ADA6C69  : public RuntimeObject
{
	// System.Text.StringBuilder VoxelBusters.CoreLibrary.Parser.JsonWriter::m_stringBuilder
	StringBuilder_t* ___m_stringBuilder_1;
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

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

// VoxelBusters.CoreLibrary.Parser.JsonConstants

// VoxelBusters.CoreLibrary.Parser.JsonConstants

// VoxelBusters.CoreLibrary.Parser.JsonExtensions

// VoxelBusters.CoreLibrary.Parser.JsonExtensions

// VoxelBusters.CoreLibrary.Parser.JsonReader

// VoxelBusters.CoreLibrary.Parser.JsonReader

// VoxelBusters.CoreLibrary.Parser.JsonString

// VoxelBusters.CoreLibrary.Parser.JsonString

// VoxelBusters.CoreLibrary.Parser.JsonUtility

// VoxelBusters.CoreLibrary.Parser.JsonUtility

// VoxelBusters.CoreLibrary.Parser.JsonWriter

// VoxelBusters.CoreLibrary.Parser.JsonWriter

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.Void

// System.Void

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
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String VoxelBusters.CoreLibrary.Parser.JsonUtility::ToJSON(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJSON_m46530BB31DEEE35BBFBA36DD678BAE76FA307157 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean VoxelBusters.CoreLibrary.Parser.JsonUtility::IsNull(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonUtility_IsNull_m778FC2ED57C7FE82EFFE3B8AEB965190C912C9DE (String_t* ___0_jsonStr, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.Parser.JsonString::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonString__ctor_mC9AB9337561E417331260138209AA8B24F27C340 (JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.Parser.JsonReader::set_JSONString(VoxelBusters.CoreLibrary.Parser.JsonString)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonReader_set_JSONString_m43E31766F6CBC3843C0A09BA74A7EA69F4C65C65_inline (JsonReader_t47F60D6EDD8D2B55D6DD8203522B13253E2394A2* __this, JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* ___0_value, const RuntimeMethod* method) ;
// VoxelBusters.CoreLibrary.Parser.JsonString VoxelBusters.CoreLibrary.Parser.JsonReader::get_JSONString()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* JsonReader_get_JSONString_m70992A9462A2D0A2401C667D06C0F421E0224F38_inline (JsonReader_t47F60D6EDD8D2B55D6DD8203522B13253E2394A2* __this, const RuntimeMethod* method) ;
// System.Boolean VoxelBusters.CoreLibrary.Parser.JsonString::get_IsNullOrEmpty()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonString_get_IsNullOrEmpty_mE2D51FE0C3397E355E35066274AF789171773A59_inline (JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* __this, const RuntimeMethod* method) ;
// System.Object VoxelBusters.CoreLibrary.Parser.JsonReader::ReadValue(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonReader_ReadValue_mF7B33A4CCE13B875BA774225F039E42CDC3FCBA9 (JsonReader_t47F60D6EDD8D2B55D6DD8203522B13253E2394A2* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
// System.Int32 VoxelBusters.CoreLibrary.Parser.JsonString::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonString_get_Length_m12389C71C2A01AC11EBCC26820BF41F9B175B652_inline (JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* __this, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.Parser.JsonReader::RemoveWhiteSpace(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_RemoveWhiteSpace_m3E13BCFFA97AC63A4DC60D16A0FC294D749FF7F6 (JsonReader_t47F60D6EDD8D2B55D6DD8203522B13253E2394A2* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
// VoxelBusters.CoreLibrary.Parser.JsonToken VoxelBusters.CoreLibrary.Parser.JsonReader::LookAhead(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonReader_LookAhead_m87164631E2B9C9C1606A4DCBFA11F265CBE6DFB1 (JsonReader_t47F60D6EDD8D2B55D6DD8203522B13253E2394A2* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Object VoxelBusters.CoreLibrary.Parser.JsonReader::ReadObject(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonReader_ReadObject_m1FE45F856D3B979B6AB9806603445109A39B48D8 (JsonReader_t47F60D6EDD8D2B55D6DD8203522B13253E2394A2* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
// System.Object VoxelBusters.CoreLibrary.Parser.JsonReader::ReadArray(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonReader_ReadArray_mDD9E2038E5684F9BE33EDBACAE876606B7140E40 (JsonReader_t47F60D6EDD8D2B55D6DD8203522B13253E2394A2* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
// System.String VoxelBusters.CoreLibrary.Parser.JsonReader::ReadString(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonReader_ReadString_mFCFC921F8FF183A965CA72CB287D43D9774A4CA7 (JsonReader_t47F60D6EDD8D2B55D6DD8203522B13253E2394A2* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
// System.Object VoxelBusters.CoreLibrary.Parser.JsonReader::ReadNumber(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonReader_ReadNumber_m6A51349E2D9E85D7CF7D2D9A5BC5676A4F460A8E (JsonReader_t47F60D6EDD8D2B55D6DD8203522B13253E2394A2* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// VoxelBusters.CoreLibrary.Parser.JsonToken VoxelBusters.CoreLibrary.Parser.JsonReader::NextToken(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonReader_NextToken_mF0C486420177A38B66B2AF0B7174B0D459673F09 (JsonReader_t47F60D6EDD8D2B55D6DD8203522B13253E2394A2* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
// System.Int32 VoxelBusters.CoreLibrary.Parser.JsonReader::ReadKeyValuePair(System.Int32&,System.String&,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonReader_ReadKeyValuePair_mBE8D6019B726302277FBB35E207E5681A997037F (JsonReader_t47F60D6EDD8D2B55D6DD8203522B13253E2394A2* __this, int32_t* ___0_index, String_t** ___1_key, RuntimeObject** ___2_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Char VoxelBusters.CoreLibrary.Parser.JsonString::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar JsonString_get_Item_mB4BD9B9501CBC3BB6BCD5F7051C51F648C24EF89 (JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.String VoxelBusters.CoreLibrary.Parser.JsonString::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* JsonString_get_Value_m7743D4944294FF490002D5C880CF5460D8289989_inline (JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String,System.Globalization.NumberStyles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mF336325913DF125A6F8F05F2909E3AFB0D73830E (String_t* ___0_s, int32_t ___1_style, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Int64::TryParse(System.String,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m3FC0128C89CC2331239FC2A0A749BF33455F03D2 (String_t* ___0_s, int64_t* ___1_result, const RuntimeMethod* method) ;
// System.Boolean System.Double::TryParse(System.String,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018 (String_t* ___0_s, double* ___1_result, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.Parser.JsonString::set_Value(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonString_set_Value_m36B4AE0D41B1E90B8A442BC20B2DE466EA75A26E_inline (JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.Parser.JsonString::set_IsNullOrEmpty(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonString_set_IsNullOrEmpty_m41089F16C4DDAE5712B31B3CEA37BC61619C2170_inline (JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.Parser.JsonString::set_Length(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonString_set_Length_m0DA3A351013C6FC2A06E43C805310DF5329DC1F0_inline (JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.Parser.JsonWriter::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_mE4226A2258F4AC75269C96989ECB89742A3FCC41 (JsonWriter_tBE379245CF2B3A0806A9D2117384BF460ADA6C69* __this, int32_t ___0_bufferLength, const RuntimeMethod* method) ;
// System.String VoxelBusters.CoreLibrary.Parser.JsonWriter::Serialise(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonWriter_Serialise_m7A93F65903D4171244ECCBA1BA5BC73C8C91AA92 (JsonWriter_tBE379245CF2B3A0806A9D2117384BF460ADA6C69* __this, RuntimeObject* ___0_objectValue, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.Parser.JsonReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_m061CAF9A9406D5817FF72A7F7493F836E6000B08 (JsonReader_t47F60D6EDD8D2B55D6DD8203522B13253E2394A2* __this, String_t* ___0_stringValue, const RuntimeMethod* method) ;
// System.Object VoxelBusters.CoreLibrary.Parser.JsonReader::Deserialise()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonReader_Deserialise_m9E478710BA22C7E81241AA74555A4D12E7C64A85 (JsonReader_t47F60D6EDD8D2B55D6DD8203522B13253E2394A2* __this, const RuntimeMethod* method) ;
// System.Object VoxelBusters.CoreLibrary.Parser.JsonReader::Deserialise(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonReader_Deserialise_m9E9D929002BA725166FB3A5A51C3AA49EF970504 (JsonReader_t47F60D6EDD8D2B55D6DD8203522B13253E2394A2* __this, int32_t* ___0_errorIndex, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.Parser.JsonWriter::WriteObjectValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteObjectValue_mC4F25A003906D257B8B1B394374C2CB0578727FC (JsonWriter_tBE379245CF2B3A0806A9D2117384BF460ADA6C69* __this, RuntimeObject* ___0_objectVal, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.Parser.JsonWriter::WriteNullValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteNullValue_m949601FC923129D35A8411CEDB035378AA9CBD6E (JsonWriter_tBE379245CF2B3A0806A9D2117384BF460ADA6C69* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsPrimitive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18 (Type_t* __this, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.Parser.JsonWriter::WritePrimitive(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WritePrimitive_m2EF7253DCCE38A3C2450436A9EFD31649D67DCB2 (JsonWriter_tBE379245CF2B3A0806A9D2117384BF460ADA6C69* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.Parser.JsonWriter::WriteEnum(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteEnum_mEF15CBA9253DB2E73E762CE6A0A152401FF3F418 (JsonWriter_tBE379245CF2B3A0806A9D2117384BF460ADA6C69* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673 (Type_t* __this, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.Parser.JsonWriter::WriteArray(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteArray_m7AEF1DD09947A3EA257C13A6582313EF083BA273 (JsonWriter_tBE379245CF2B3A0806A9D2117384BF460ADA6C69* __this, RuntimeArray* ___0_array, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.Parser.JsonWriter::WriteList(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteList_m3BD7BD4D14A98CF42F3EC6AC8BFAD5E7D9C8240B (JsonWriter_tBE379245CF2B3A0806A9D2117384BF460ADA6C69* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.Parser.JsonWriter::WriteDictionary(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteDictionary_mDC53A242F72745B9504B2F6B39BCDDB1DA63E143 (JsonWriter_tBE379245CF2B3A0806A9D2117384BF460ADA6C69* __this, RuntimeObject* ___0_dict, const RuntimeMethod* method) ;
// System.Void VoxelBusters.CoreLibrary.Parser.JsonWriter::WriteString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteString_mC13D674DA63E56735EBE4D5B20526B4669A00FAF (JsonWriter_tBE379245CF2B3A0806A9D2117384BF460ADA6C69* __this, String_t* ___0_stringVal, const RuntimeMethod* method) ;
// System.Int32 System.Array::get_Rank()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Int32 System.Array::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Object System.Array::GetValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_GetValue_m007D247B8A6FE5BD60FD1CD510A714A416F2BA21 (RuntimeArray* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.Array::GetLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935 (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
// System.Object System.Array::GetValue(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_GetValue_mC7B3B59C7533244E396308CA7C17EEAD913FF3A1 (RuntimeArray* __this, int32_t ___0_index1, int32_t ___1_index2, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.IFormatProvider,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_m91278D58CD695B07613B9A3941B745B815542E1E (StringBuilder_t* __this, RuntimeObject* ___0_provider, String_t* ___1_format, RuntimeObject* ___2_arg0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA (StringBuilder_t* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9 (int32_t* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
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
// System.Void VoxelBusters.CoreLibrary.Parser.JsonConstants::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConstants__ctor_m7E3B90A8E8F6A0EE513529B326BCA027DEC5837C (JsonConstants_tAB1FDB844DA5CB3AC4C25FC8130D3F74ACB690D6* __this, const RuntimeMethod* method) 
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
// System.String VoxelBusters.CoreLibrary.Parser.JsonExtensions::ToJSON(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonExtensions_ToJSON_m0F8A7DD555CA33DE477713E6F4890AAB8BE77591 (RuntimeObject* ___0_dictionary, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// string  jsonStr = JsonUtility.ToJSON(dictionary);
		RuntimeObject* L_0 = ___0_dictionary;
		String_t* L_1;
		L_1 = JsonUtility_ToJSON_m46530BB31DEEE35BBFBA36DD678BAE76FA307157(L_0, NULL);
		V_0 = L_1;
		// return JsonUtility.IsNull(jsonStr) ? null : jsonStr;
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = JsonUtility_IsNull_m778FC2ED57C7FE82EFFE3B8AEB965190C912C9DE(L_2, NULL);
		if (L_3)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_4 = V_0;
		return L_4;
	}

IL_0011:
	{
		return (String_t*)NULL;
	}
}
// System.String VoxelBusters.CoreLibrary.Parser.JsonExtensions::ToJSON(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonExtensions_ToJSON_m1D8F32C5E39CA174216CDD26FD18790CC84702C8 (RuntimeObject* ___0_list, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// string  jsonStr    = JsonUtility.ToJSON(list);
		RuntimeObject* L_0 = ___0_list;
		String_t* L_1;
		L_1 = JsonUtility_ToJSON_m46530BB31DEEE35BBFBA36DD678BAE76FA307157(L_0, NULL);
		V_0 = L_1;
		// return JsonUtility.IsNull(jsonStr) ? null : jsonStr;
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = JsonUtility_IsNull_m778FC2ED57C7FE82EFFE3B8AEB965190C912C9DE(L_2, NULL);
		if (L_3)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_4 = V_0;
		return L_4;
	}

IL_0011:
	{
		return (String_t*)NULL;
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
// VoxelBusters.CoreLibrary.Parser.JsonString VoxelBusters.CoreLibrary.Parser.JsonReader::get_JSONString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* JsonReader_get_JSONString_m70992A9462A2D0A2401C667D06C0F421E0224F38 (JsonReader_t47F60D6EDD8D2B55D6DD8203522B13253E2394A2* __this, const RuntimeMethod* method) 
{
	{
		// internal JsonString JSONString { get; private set; }
		JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* L_0 = __this->___U3CJSONStringU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void VoxelBusters.CoreLibrary.Parser.JsonReader::set_JSONString(VoxelBusters.CoreLibrary.Parser.JsonString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_set_JSONString_m43E31766F6CBC3843C0A09BA74A7EA69F4C65C65 (JsonReader_t47F60D6EDD8D2B55D6DD8203522B13253E2394A2* __this, JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal JsonString JSONString { get; private set; }
		JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* L_0 = ___0_value;
		__this->___U3CJSONStringU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJSONStringU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.Parser.JsonReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_m8E3879027C847E813C7FBB2B5FE6BDB147614A5B (JsonReader_t47F60D6EDD8D2B55D6DD8203522B13253E2394A2* __this, const RuntimeMethod* method) 
{
	{
		// private JsonReader()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// {}
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.Parser.JsonReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_m061CAF9A9406D5817FF72A7F7493F836E6000B08 (JsonReader_t47F60D6EDD8D2B55D6DD8203522B13253E2394A2* __this, String_t* ___0_stringValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public JsonReader(string stringValue)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// JSONString = new JsonString(stringValue);
		String_t* L_0 = ___0_stringValue;
		JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* L_1 = (JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF*)il2cpp_codegen_object_new(JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JsonString__ctor_mC9AB9337561E417331260138209AA8B24F27C340(L_1, L_0, NULL);
		JsonReader_set_JSONString_m43E31766F6CBC3843C0A09BA74A7EA69F4C65C65_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Object VoxelBusters.CoreLibrary.Parser.JsonReader::Deserialise()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonReader_Deserialise_m9E478710BA22C7E81241AA74555A4D12E7C64A85 (JsonReader_t47F60D6EDD8D2B55D6DD8203522B13253E2394A2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (JSONString.IsNullOrEmpty)
		JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* L_0;
		L_0 = JsonReader_get_JSONString_m70992A9462A2D0A2401C667D06C0F421E0224F38_inline(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = JsonString_get_IsNullOrEmpty_mE2D51FE0C3397E355E35066274AF789171773A59_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return null;
		return NULL;
	}

IL_000f:
	{
		// int readErrorIndex    = 0;
		V_0 = 0;
		// return ReadValue(ref readErrorIndex);
		RuntimeObject* L_2;
		L_2 = JsonReader_ReadValue_mF7B33A4CCE13B875BA774225F039E42CDC3FCBA9(__this, (&V_0), NULL);
		return L_2;
	}
}
// System.Object VoxelBusters.CoreLibrary.Parser.JsonReader::Deserialise(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonReader_Deserialise_m9E9D929002BA725166FB3A5A51C3AA49EF970504 (JsonReader_t47F60D6EDD8D2B55D6DD8203522B13253E2394A2* __this, int32_t* ___0_errorIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		// if (JSONString.IsNullOrEmpty)
		JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* L_0;
		L_0 = JsonReader_get_JSONString_m70992A9462A2D0A2401C667D06C0F421E0224F38_inline(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = JsonString_get_IsNullOrEmpty_mE2D51FE0C3397E355E35066274AF789171773A59_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return null;
		return NULL;
	}

IL_000f:
	{
		// int     index   = 0;
		V_0 = 0;
		// object  value   = ReadValue(ref index);
		RuntimeObject* L_2;
		L_2 = JsonReader_ReadValue_mF7B33A4CCE13B875BA774225F039E42CDC3FCBA9(__this, (&V_0), NULL);
		// if (index != JSONString.Length)
		int32_t L_3 = V_0;
		JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* L_4;
		L_4 = JsonReader_get_JSONString_m70992A9462A2D0A2401C667D06C0F421E0224F38_inline(__this, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = JsonString_get_Length_m12389C71C2A01AC11EBCC26820BF41F9B175B652_inline(L_4, NULL);
		G_B3_0 = L_2;
		if ((((int32_t)L_3) == ((int32_t)L_5)))
		{
			G_B4_0 = L_2;
			goto IL_002b;
		}
	}
	{
		// errorIndex  = index;
		int32_t* L_6 = ___0_errorIndex;
		int32_t L_7 = V_0;
		*((int32_t*)L_6) = (int32_t)L_7;
		return G_B3_0;
	}

IL_002b:
	{
		// errorIndex  = -1;
		int32_t* L_8 = ___0_errorIndex;
		*((int32_t*)L_8) = (int32_t)(-1);
		// return value;
		return G_B4_0;
	}
}
// System.Object VoxelBusters.CoreLibrary.Parser.JsonReader::ReadValue(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonReader_ReadValue_mF7B33A4CCE13B875BA774225F039E42CDC3FCBA9 (JsonReader_t47F60D6EDD8D2B55D6DD8203522B13253E2394A2* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9133A9B366EB2BC1B98829EED9025B6D65EA494);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// RemoveWhiteSpace(ref index);
		int32_t* L_0 = ___0_index;
		JsonReader_RemoveWhiteSpace_m3E13BCFFA97AC63A4DC60D16A0FC294D749FF7F6(__this, L_0, NULL);
		// JsonToken    token    = LookAhead(index);
		int32_t* L_1 = ___0_index;
		int32_t L_2 = *((int32_t*)L_1);
		int32_t L_3;
		L_3 = JsonReader_LookAhead_m87164631E2B9C9C1606A4DCBFA11F265CBE6DFB1(__this, L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		switch (L_4)
		{
			case 0:
			{
				goto IL_0048;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_0050;
			}
			case 3:
			{
				goto IL_008a;
			}
			case 4:
			{
				goto IL_008a;
			}
			case 5:
			{
				goto IL_008a;
			}
			case 6:
			{
				goto IL_0058;
			}
			case 7:
			{
				goto IL_0060;
			}
			case 8:
			{
				goto IL_008a;
			}
			case 9:
			{
				goto IL_0070;
			}
			case 10:
			{
				goto IL_007d;
			}
			case 11:
			{
				goto IL_0068;
			}
		}
	}
	{
		goto IL_008a;
	}

IL_0048:
	{
		// return ReadObject(ref index);
		int32_t* L_5 = ___0_index;
		RuntimeObject* L_6;
		L_6 = JsonReader_ReadObject_m1FE45F856D3B979B6AB9806603445109A39B48D8(__this, L_5, NULL);
		return L_6;
	}

IL_0050:
	{
		// return ReadArray(ref index);
		int32_t* L_7 = ___0_index;
		RuntimeObject* L_8;
		L_8 = JsonReader_ReadArray_mDD9E2038E5684F9BE33EDBACAE876606B7140E40(__this, L_7, NULL);
		return L_8;
	}

IL_0058:
	{
		// return ReadString(ref index);
		int32_t* L_9 = ___0_index;
		String_t* L_10;
		L_10 = JsonReader_ReadString_mFCFC921F8FF183A965CA72CB287D43D9774A4CA7(__this, L_9, NULL);
		return L_10;
	}

IL_0060:
	{
		// return ReadNumber(ref index);
		int32_t* L_11 = ___0_index;
		RuntimeObject* L_12;
		L_12 = JsonReader_ReadNumber_m6A51349E2D9E85D7CF7D2D9A5BC5676A4F460A8E(__this, L_11, NULL);
		return L_12;
	}

IL_0068:
	{
		// index   += 4;
		int32_t* L_13 = ___0_index;
		int32_t* L_14 = ___0_index;
		int32_t L_15 = *((int32_t*)L_14);
		*((int32_t*)L_13) = (int32_t)((int32_t)il2cpp_codegen_add(L_15, 4));
		// return null;
		return NULL;
	}

IL_0070:
	{
		// index   += 4;
		int32_t* L_16 = ___0_index;
		int32_t* L_17 = ___0_index;
		int32_t L_18 = *((int32_t*)L_17);
		*((int32_t*)L_16) = (int32_t)((int32_t)il2cpp_codegen_add(L_18, 4));
		// return true;
		bool L_19 = ((bool)1);
		RuntimeObject* L_20 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_19);
		return L_20;
	}

IL_007d:
	{
		// index   += 5;
		int32_t* L_21 = ___0_index;
		int32_t* L_22 = ___0_index;
		int32_t L_23 = *((int32_t*)L_22);
		*((int32_t*)L_21) = (int32_t)((int32_t)il2cpp_codegen_add(L_23, 5));
		// return false;
		bool L_24 = ((bool)0);
		RuntimeObject* L_25 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_24);
		return L_25;
	}

IL_008a:
	{
		// Debug.LogError(string.Format("[JSON] Parse error at index ={0}", index));
		int32_t* L_26 = ___0_index;
		int32_t L_27 = *((int32_t*)L_26);
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_28);
		String_t* L_30;
		L_30 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralE9133A9B366EB2BC1B98829EED9025B6D65EA494, L_29, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_30, NULL);
		// return null;
		return NULL;
	}
}
// System.Object VoxelBusters.CoreLibrary.Parser.JsonReader::ReadObject(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonReader_ReadObject_m1FE45F856D3B979B6AB9806603445109A39B48D8 (JsonReader_t47F60D6EDD8D2B55D6DD8203522B13253E2394A2* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9133A9B366EB2BC1B98829EED9025B6D65EA494);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	{
		// IDictionary     dictionary     = new Dictionary<string, object>();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_0, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		V_0 = L_0;
		// bool             isDone         = false;
		V_1 = (bool)0;
		// index++;
		int32_t* L_1 = ___0_index;
		int32_t* L_2 = ___0_index;
		int32_t L_3 = *((int32_t*)L_2);
		*((int32_t*)L_1) = (int32_t)((int32_t)il2cpp_codegen_add(L_3, 1));
		goto IL_00a2;
	}

IL_0013:
	{
		// JsonToken     token       = LookAhead(index);
		int32_t* L_4 = ___0_index;
		int32_t L_5 = *((int32_t*)L_4);
		int32_t L_6;
		L_6 = JsonReader_LookAhead_m87164631E2B9C9C1606A4DCBFA11F265CBE6DFB1(__this, L_5, NULL);
		V_2 = L_6;
		// if (token == JsonToken.None)
		int32_t L_7 = V_2;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_0039;
		}
	}
	{
		// Debug.LogError(string.Format("[JSON] Parse error at index ={0}", index));
		int32_t* L_8 = ___0_index;
		int32_t L_9 = *((int32_t*)L_8);
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralE9133A9B366EB2BC1B98829EED9025B6D65EA494, L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_12, NULL);
		// return null;
		return NULL;
	}

IL_0039:
	{
		// else if (token == JsonToken.CurlyCloseBracket)
		int32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)1))))
		{
			goto IL_0049;
		}
	}
	{
		// NextToken(ref index);
		int32_t* L_14 = ___0_index;
		int32_t L_15;
		L_15 = JsonReader_NextToken_mF0C486420177A38B66B2AF0B7174B0D459673F09(__this, L_14, NULL);
		// isDone      = true;
		V_1 = (bool)1;
		goto IL_00a2;
	}

IL_0049:
	{
		// int        readStatus        = ReadKeyValuePair(ref index, out key, out value);
		int32_t* L_16 = ___0_index;
		int32_t L_17;
		L_17 = JsonReader_ReadKeyValuePair_mBE8D6019B726302277FBB35E207E5681A997037F(__this, L_16, (&V_3), (&V_4), NULL);
		// if (readStatus != -1)
		if ((((int32_t)L_17) == ((int32_t)(-1))))
		{
			goto IL_00a2;
		}
	}
	{
		// dictionary[key]        = value;
		RuntimeObject* L_18 = V_0;
		String_t* L_19 = V_3;
		RuntimeObject* L_20 = V_4;
		NullCheck(L_18);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_18, L_19, L_20);
		// JsonToken   nextToken    = LookAhead(index);
		int32_t* L_21 = ___0_index;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23;
		L_23 = JsonReader_LookAhead_m87164631E2B9C9C1606A4DCBFA11F265CBE6DFB1(__this, L_22, NULL);
		V_5 = L_23;
		// if (nextToken == JsonToken.Comma)
		int32_t L_24 = V_5;
		if ((!(((uint32_t)L_24) == ((uint32_t)5))))
		{
			goto IL_0079;
		}
	}
	{
		// NextToken(ref index);
		int32_t* L_25 = ___0_index;
		int32_t L_26;
		L_26 = JsonReader_NextToken_mF0C486420177A38B66B2AF0B7174B0D459673F09(__this, L_25, NULL);
		goto IL_00a2;
	}

IL_0079:
	{
		// else if (nextToken == JsonToken.CurlyCloseBracket)
		int32_t L_27 = V_5;
		if ((!(((uint32_t)L_27) == ((uint32_t)1))))
		{
			goto IL_008a;
		}
	}
	{
		// NextToken(ref index);
		int32_t* L_28 = ___0_index;
		int32_t L_29;
		L_29 = JsonReader_NextToken_mF0C486420177A38B66B2AF0B7174B0D459673F09(__this, L_28, NULL);
		// isDone  = true;
		V_1 = (bool)1;
		goto IL_00a2;
	}

IL_008a:
	{
		// Debug.LogError(string.Format("[JSON] Parse error at index ={0}", index));
		int32_t* L_30 = ___0_index;
		int32_t L_31 = *((int32_t*)L_30);
		int32_t L_32 = L_31;
		RuntimeObject* L_33 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_32);
		String_t* L_34;
		L_34 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralE9133A9B366EB2BC1B98829EED9025B6D65EA494, L_33, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_34, NULL);
		// return null;
		return NULL;
	}

IL_00a2:
	{
		// while (!isDone)
		bool L_35 = V_1;
		if (!L_35)
		{
			goto IL_0013;
		}
	}
	{
		// return dictionary;
		RuntimeObject* L_36 = V_0;
		return L_36;
	}
}
// System.Int32 VoxelBusters.CoreLibrary.Parser.JsonReader::ReadKeyValuePair(System.Int32&,System.String&,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonReader_ReadKeyValuePair_mBE8D6019B726302277FBB35E207E5681A997037F (JsonReader_t47F60D6EDD8D2B55D6DD8203522B13253E2394A2* __this, int32_t* ___0_index, String_t** ___1_key, RuntimeObject** ___2_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9133A9B366EB2BC1B98829EED9025B6D65EA494);
		s_Il2CppMethodInitialized = true;
	}
	{
		// key        = null;
		String_t** L_0 = ___1_key;
		*((RuntimeObject**)L_0) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)NULL);
		// value    = null;
		RuntimeObject** L_1 = ___2_value;
		*((RuntimeObject**)L_1) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_1, (void*)(RuntimeObject*)NULL);
		// key        = ReadValue(ref index) as string;
		String_t** L_2 = ___1_key;
		int32_t* L_3 = ___0_index;
		RuntimeObject* L_4;
		L_4 = JsonReader_ReadValue_mF7B33A4CCE13B875BA774225F039E42CDC3FCBA9(__this, L_3, NULL);
		*((RuntimeObject**)L_2) = (RuntimeObject*)((String_t*)IsInstSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)((String_t*)IsInstSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var)));
		// if (key == null)
		String_t** L_5 = ___1_key;
		String_t* L_6 = *((String_t**)L_5);
		if (L_6)
		{
			goto IL_0030;
		}
	}
	{
		// Debug.LogError(string.Format("[JSON] Parse error at index ={0}", index));
		int32_t* L_7 = ___0_index;
		int32_t L_8 = *((int32_t*)L_7);
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11;
		L_11 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralE9133A9B366EB2BC1B98829EED9025B6D65EA494, L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_11, NULL);
		// return -1;
		return (-1);
	}

IL_0030:
	{
		// if (NextToken(ref index) != JsonToken.Colon)
		int32_t* L_12 = ___0_index;
		int32_t L_13;
		L_13 = JsonReader_NextToken_mF0C486420177A38B66B2AF0B7174B0D459673F09(__this, L_12, NULL);
		if ((((int32_t)L_13) == ((int32_t)4)))
		{
			goto IL_0052;
		}
	}
	{
		// Debug.LogError(string.Format("[JSON] Parse error at index ={0}", index));
		int32_t* L_14 = ___0_index;
		int32_t L_15 = *((int32_t*)L_14);
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_16);
		String_t* L_18;
		L_18 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralE9133A9B366EB2BC1B98829EED9025B6D65EA494, L_17, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_18, NULL);
		// return -1;
		return (-1);
	}

IL_0052:
	{
		// value    = ReadValue(ref index);
		RuntimeObject** L_19 = ___2_value;
		int32_t* L_20 = ___0_index;
		RuntimeObject* L_21;
		L_21 = JsonReader_ReadValue_mF7B33A4CCE13B875BA774225F039E42CDC3FCBA9(__this, L_20, NULL);
		*((RuntimeObject**)L_19) = (RuntimeObject*)L_21;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_19, (void*)(RuntimeObject*)L_21);
		// return 0;
		return 0;
	}
}
// System.Object VoxelBusters.CoreLibrary.Parser.JsonReader::ReadArray(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonReader_ReadArray_mDD9E2038E5684F9BE33EDBACAE876606B7140E40 (JsonReader_t47F60D6EDD8D2B55D6DD8203522B13253E2394A2* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9133A9B366EB2BC1B98829EED9025B6D65EA494);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// IList   list    = new List<object>();
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_0, List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		V_0 = L_0;
		// bool    isDone  = false;
		V_1 = (bool)0;
		// index++;
		int32_t* L_1 = ___0_index;
		int32_t* L_2 = ___0_index;
		int32_t L_3 = *((int32_t*)L_2);
		*((int32_t*)L_1) = (int32_t)((int32_t)il2cpp_codegen_add(L_3, 1));
		goto IL_009b;
	}

IL_0013:
	{
		// JsonToken   token   = LookAhead(index);
		int32_t* L_4 = ___0_index;
		int32_t L_5 = *((int32_t*)L_4);
		int32_t L_6;
		L_6 = JsonReader_LookAhead_m87164631E2B9C9C1606A4DCBFA11F265CBE6DFB1(__this, L_5, NULL);
		V_2 = L_6;
		// if (token == JsonToken.None)
		int32_t L_7 = V_2;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_0039;
		}
	}
	{
		// Debug.LogError(string.Format("[JSON] Parse error at index ={0}", index));
		int32_t* L_8 = ___0_index;
		int32_t L_9 = *((int32_t*)L_8);
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralE9133A9B366EB2BC1B98829EED9025B6D65EA494, L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_12, NULL);
		// return null;
		return NULL;
	}

IL_0039:
	{
		// else if (token == JsonToken.SquareCloseBracket)
		int32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)3))))
		{
			goto IL_0049;
		}
	}
	{
		// NextToken(ref index);
		int32_t* L_14 = ___0_index;
		int32_t L_15;
		L_15 = JsonReader_NextToken_mF0C486420177A38B66B2AF0B7174B0D459673F09(__this, L_14, NULL);
		// isDone            = true;
		V_1 = (bool)1;
		goto IL_009b;
	}

IL_0049:
	{
		// object        arrayElement    = ReadValue(ref index);
		int32_t* L_16 = ___0_index;
		RuntimeObject* L_17;
		L_17 = JsonReader_ReadValue_mF7B33A4CCE13B875BA774225F039E42CDC3FCBA9(__this, L_16, NULL);
		V_3 = L_17;
		// list.Add(arrayElement);
		RuntimeObject* L_18 = V_0;
		RuntimeObject* L_19 = V_3;
		NullCheck(L_18);
		int32_t L_20;
		L_20 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_18, L_19);
		// JsonToken    nextToken        = LookAhead(index);
		int32_t* L_21 = ___0_index;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23;
		L_23 = JsonReader_LookAhead_m87164631E2B9C9C1606A4DCBFA11F265CBE6DFB1(__this, L_22, NULL);
		V_4 = L_23;
		// if (nextToken == JsonToken.Comma)
		int32_t L_24 = V_4;
		if ((!(((uint32_t)L_24) == ((uint32_t)5))))
		{
			goto IL_0072;
		}
	}
	{
		// NextToken(ref index);
		int32_t* L_25 = ___0_index;
		int32_t L_26;
		L_26 = JsonReader_NextToken_mF0C486420177A38B66B2AF0B7174B0D459673F09(__this, L_25, NULL);
		goto IL_009b;
	}

IL_0072:
	{
		// else if (nextToken == JsonToken.SquareCloseBracket)
		int32_t L_27 = V_4;
		if ((!(((uint32_t)L_27) == ((uint32_t)3))))
		{
			goto IL_0083;
		}
	}
	{
		// NextToken(ref index);
		int32_t* L_28 = ___0_index;
		int32_t L_29;
		L_29 = JsonReader_NextToken_mF0C486420177A38B66B2AF0B7174B0D459673F09(__this, L_28, NULL);
		// isDone        = true;
		V_1 = (bool)1;
		goto IL_009b;
	}

IL_0083:
	{
		// Debug.LogError(string.Format("[JSON] Parse error at index ={0}", index));
		int32_t* L_30 = ___0_index;
		int32_t L_31 = *((int32_t*)L_30);
		int32_t L_32 = L_31;
		RuntimeObject* L_33 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_32);
		String_t* L_34;
		L_34 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralE9133A9B366EB2BC1B98829EED9025B6D65EA494, L_33, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_34, NULL);
		// return null;
		return NULL;
	}

IL_009b:
	{
		// while (!isDone)
		bool L_35 = V_1;
		if (!L_35)
		{
			goto IL_0013;
		}
	}
	{
		// return list;
		RuntimeObject* L_36 = V_0;
		return L_36;
	}
}
// System.String VoxelBusters.CoreLibrary.Parser.JsonReader::ReadString(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonReader_ReadString_mFCFC921F8FF183A965CA72CB287D43D9774A4CA7 (JsonReader_t47F60D6EDD8D2B55D6DD8203522B13253E2394A2* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	{
		// StringBuilder   stringBuilder    = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// bool            isDone            = false;
		V_1 = (bool)0;
		// index++;
		int32_t* L_1 = ___0_index;
		int32_t* L_2 = ___0_index;
		int32_t L_3 = *((int32_t*)L_2);
		*((int32_t*)L_1) = (int32_t)((int32_t)il2cpp_codegen_add(L_3, 1));
		goto IL_014f;
	}

IL_0013:
	{
		// if (index == JSONString.Length)
		int32_t* L_4 = ___0_index;
		int32_t L_5 = *((int32_t*)L_4);
		JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* L_6;
		L_6 = JsonReader_get_JSONString_m70992A9462A2D0A2401C667D06C0F421E0224F38_inline(__this, NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = JsonString_get_Length_m12389C71C2A01AC11EBCC26820BF41F9B175B652_inline(L_6, NULL);
		if ((((int32_t)L_5) == ((int32_t)L_7)))
		{
			goto IL_0155;
		}
	}
	{
		// char    charValue    = JSONString[index++];
		JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* L_8;
		L_8 = JsonReader_get_JSONString_m70992A9462A2D0A2401C667D06C0F421E0224F38_inline(__this, NULL);
		int32_t* L_9 = ___0_index;
		int32_t* L_10 = ___0_index;
		int32_t L_11 = *((int32_t*)L_10);
		V_3 = L_11;
		int32_t L_12 = V_3;
		*((int32_t*)L_9) = (int32_t)((int32_t)il2cpp_codegen_add(L_12, 1));
		int32_t L_13 = V_3;
		NullCheck(L_8);
		Il2CppChar L_14;
		L_14 = JsonString_get_Item_mB4BD9B9501CBC3BB6BCD5F7051C51F648C24EF89(L_8, L_13, NULL);
		V_2 = L_14;
		// if (charValue == '"')
		Il2CppChar L_15 = V_2;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0046;
		}
	}
	{
		// isDone    = true;
		V_1 = (bool)1;
		goto IL_014f;
	}

IL_0046:
	{
		// else if (charValue == '\\')
		Il2CppChar L_16 = V_2;
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0147;
		}
	}
	{
		// if (index == JSONString.Length)
		int32_t* L_17 = ___0_index;
		int32_t L_18 = *((int32_t*)L_17);
		JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* L_19;
		L_19 = JsonReader_get_JSONString_m70992A9462A2D0A2401C667D06C0F421E0224F38_inline(__this, NULL);
		NullCheck(L_19);
		int32_t L_20;
		L_20 = JsonString_get_Length_m12389C71C2A01AC11EBCC26820BF41F9B175B652_inline(L_19, NULL);
		if ((((int32_t)L_18) == ((int32_t)L_20)))
		{
			goto IL_0155;
		}
	}
	{
		// charValue    = JSONString[index++];
		JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* L_21;
		L_21 = JsonReader_get_JSONString_m70992A9462A2D0A2401C667D06C0F421E0224F38_inline(__this, NULL);
		int32_t* L_22 = ___0_index;
		int32_t* L_23 = ___0_index;
		int32_t L_24 = *((int32_t*)L_23);
		V_3 = L_24;
		int32_t L_25 = V_3;
		*((int32_t*)L_22) = (int32_t)((int32_t)il2cpp_codegen_add(L_25, 1));
		int32_t L_26 = V_3;
		NullCheck(L_21);
		Il2CppChar L_27;
		L_27 = JsonString_get_Item_mB4BD9B9501CBC3BB6BCD5F7051C51F648C24EF89(L_21, L_26, NULL);
		V_2 = L_27;
		// if (charValue == '"')
		Il2CppChar L_28 = V_2;
		if ((!(((uint32_t)L_28) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0088;
		}
	}
	{
		// stringBuilder.Append('"');
		StringBuilder_t* L_29 = V_0;
		NullCheck(L_29);
		StringBuilder_t* L_30;
		L_30 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_29, ((int32_t)34), NULL);
		goto IL_014f;
	}

IL_0088:
	{
		// else if (charValue == '\\')
		Il2CppChar L_31 = V_2;
		if ((!(((uint32_t)L_31) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_009b;
		}
	}
	{
		// stringBuilder.Append('\\');
		StringBuilder_t* L_32 = V_0;
		NullCheck(L_32);
		StringBuilder_t* L_33;
		L_33 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_32, ((int32_t)92), NULL);
		goto IL_014f;
	}

IL_009b:
	{
		// else if (charValue == '/')
		Il2CppChar L_34 = V_2;
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_00ae;
		}
	}
	{
		// stringBuilder.Append('/');
		StringBuilder_t* L_35 = V_0;
		NullCheck(L_35);
		StringBuilder_t* L_36;
		L_36 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_35, ((int32_t)47), NULL);
		goto IL_014f;
	}

IL_00ae:
	{
		// else if (charValue == 'b')
		Il2CppChar L_37 = V_2;
		if ((!(((uint32_t)L_37) == ((uint32_t)((int32_t)98)))))
		{
			goto IL_00c0;
		}
	}
	{
		// stringBuilder.Append('\b');
		StringBuilder_t* L_38 = V_0;
		NullCheck(L_38);
		StringBuilder_t* L_39;
		L_39 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_38, 8, NULL);
		goto IL_014f;
	}

IL_00c0:
	{
		// else if (charValue == 'f')
		Il2CppChar L_40 = V_2;
		if ((!(((uint32_t)L_40) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_00d0;
		}
	}
	{
		// stringBuilder.Append('\f');
		StringBuilder_t* L_41 = V_0;
		NullCheck(L_41);
		StringBuilder_t* L_42;
		L_42 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_41, ((int32_t)12), NULL);
		goto IL_014f;
	}

IL_00d0:
	{
		// else if (charValue == 'n')
		Il2CppChar L_43 = V_2;
		if ((!(((uint32_t)L_43) == ((uint32_t)((int32_t)110)))))
		{
			goto IL_00e0;
		}
	}
	{
		// stringBuilder.Append('\n');
		StringBuilder_t* L_44 = V_0;
		NullCheck(L_44);
		StringBuilder_t* L_45;
		L_45 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_44, ((int32_t)10), NULL);
		goto IL_014f;
	}

IL_00e0:
	{
		// else if (charValue == 'r')
		Il2CppChar L_46 = V_2;
		if ((!(((uint32_t)L_46) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_00f0;
		}
	}
	{
		// stringBuilder.Append('\r');
		StringBuilder_t* L_47 = V_0;
		NullCheck(L_47);
		StringBuilder_t* L_48;
		L_48 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_47, ((int32_t)13), NULL);
		goto IL_014f;
	}

IL_00f0:
	{
		// else if (charValue == 't')
		Il2CppChar L_49 = V_2;
		if ((!(((uint32_t)L_49) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_0100;
		}
	}
	{
		// stringBuilder.Append('\t');
		StringBuilder_t* L_50 = V_0;
		NullCheck(L_50);
		StringBuilder_t* L_51;
		L_51 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_50, ((int32_t)9), NULL);
		goto IL_014f;
	}

IL_0100:
	{
		// else if (charValue == 'u')
		Il2CppChar L_52 = V_2;
		if ((!(((uint32_t)L_52) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_014f;
		}
	}
	{
		// int remLength = JSONString.Length - index;
		JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* L_53;
		L_53 = JsonReader_get_JSONString_m70992A9462A2D0A2401C667D06C0F421E0224F38_inline(__this, NULL);
		NullCheck(L_53);
		int32_t L_54;
		L_54 = JsonString_get_Length_m12389C71C2A01AC11EBCC26820BF41F9B175B652_inline(L_53, NULL);
		int32_t* L_55 = ___0_index;
		int32_t L_56 = *((int32_t*)L_55);
		// if (remLength >= 4)
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_54, L_56))) < ((int32_t)4)))
		{
			goto IL_0155;
		}
	}
	{
		// string  unicodeStr  = JSONString.Value.Substring(index, 4);
		JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* L_57;
		L_57 = JsonReader_get_JSONString_m70992A9462A2D0A2401C667D06C0F421E0224F38_inline(__this, NULL);
		NullCheck(L_57);
		String_t* L_58;
		L_58 = JsonString_get_Value_m7743D4944294FF490002D5C880CF5460D8289989_inline(L_57, NULL);
		int32_t* L_59 = ___0_index;
		int32_t L_60 = *((int32_t*)L_59);
		NullCheck(L_58);
		String_t* L_61;
		L_61 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_58, L_60, 4, NULL);
		// char    unicodeChar = (char)int.Parse(unicodeStr, System.Globalization.NumberStyles.HexNumber);
		int32_t L_62;
		L_62 = Int32_Parse_mF336325913DF125A6F8F05F2909E3AFB0D73830E(L_61, ((int32_t)515), NULL);
		V_4 = ((int32_t)(uint16_t)L_62);
		// stringBuilder.Append(unicodeChar);
		StringBuilder_t* L_63 = V_0;
		Il2CppChar L_64 = V_4;
		NullCheck(L_63);
		StringBuilder_t* L_65;
		L_65 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_63, L_64, NULL);
		// index += 4;
		int32_t* L_66 = ___0_index;
		int32_t* L_67 = ___0_index;
		int32_t L_68 = *((int32_t*)L_67);
		*((int32_t*)L_66) = (int32_t)((int32_t)il2cpp_codegen_add(L_68, 4));
		goto IL_014f;
	}

IL_0147:
	{
		// stringBuilder.Append(charValue);
		StringBuilder_t* L_69 = V_0;
		Il2CppChar L_70 = V_2;
		NullCheck(L_69);
		StringBuilder_t* L_71;
		L_71 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_69, L_70, NULL);
	}

IL_014f:
	{
		// while (!isDone)
		bool L_72 = V_1;
		if (!L_72)
		{
			goto IL_0013;
		}
	}

IL_0155:
	{
		// if (!isDone)
		bool L_73 = V_1;
		if (L_73)
		{
			goto IL_015a;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_015a:
	{
		// return stringBuilder.ToString();
		StringBuilder_t* L_74 = V_0;
		NullCheck(L_74);
		String_t* L_75;
		L_75 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_74);
		return L_75;
	}
}
// System.Object VoxelBusters.CoreLibrary.Parser.JsonReader::ReadNumber(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonReader_ReadNumber_m6A51349E2D9E85D7CF7D2D9A5BC5676A4F460A8E (JsonReader_t47F60D6EDD8D2B55D6DD8203522B13253E2394A2* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral750483B1B79D7876103D12AD91A365DD2A867A80);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	int64_t V_4 = 0;
	double V_5 = 0.0;
	{
		// int     numIndex    = index;
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = L_1;
		// bool    isDone        = false;
		V_1 = (bool)0;
		goto IL_0038;
	}

IL_0007:
	{
		// if (JsonConstants.kNumericLiterals.IndexOf(JSONString[numIndex]) != -1)
		JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* L_2;
		L_2 = JsonReader_get_JSONString_m70992A9462A2D0A2401C667D06C0F421E0224F38_inline(__this, NULL);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		Il2CppChar L_4;
		L_4 = JsonString_get_Item_mB4BD9B9501CBC3BB6BCD5F7051C51F648C24EF89(L_2, L_3, NULL);
		NullCheck(_stringLiteral750483B1B79D7876103D12AD91A365DD2A867A80);
		int32_t L_5;
		L_5 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(_stringLiteral750483B1B79D7876103D12AD91A365DD2A867A80, L_4, NULL);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0036;
		}
	}
	{
		// numIndex++;
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		// if (numIndex >= JSONString.Length)
		int32_t L_7 = V_0;
		JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* L_8;
		L_8 = JsonReader_get_JSONString_m70992A9462A2D0A2401C667D06C0F421E0224F38_inline(__this, NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = JsonString_get_Length_m12389C71C2A01AC11EBCC26820BF41F9B175B652_inline(L_8, NULL);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0038;
		}
	}
	{
		// isDone  = true;
		V_1 = (bool)1;
		goto IL_0038;
	}

IL_0036:
	{
		// isDone        = true;
		V_1 = (bool)1;
	}

IL_0038:
	{
		// while (!isDone)
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0007;
		}
	}
	{
		// int     stringLength    = numIndex - index;
		int32_t L_11 = V_0;
		int32_t* L_12 = ___0_index;
		int32_t L_13 = *((int32_t*)L_12);
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_11, L_13));
		// string  numberStr        = JSONString.Value.Substring(index, stringLength);
		JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* L_14;
		L_14 = JsonReader_get_JSONString_m70992A9462A2D0A2401C667D06C0F421E0224F38_inline(__this, NULL);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = JsonString_get_Value_m7743D4944294FF490002D5C880CF5460D8289989_inline(L_14, NULL);
		int32_t* L_16 = ___0_index;
		int32_t L_17 = *((int32_t*)L_16);
		int32_t L_18 = V_2;
		NullCheck(L_15);
		String_t* L_19;
		L_19 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_15, L_17, L_18, NULL);
		V_3 = L_19;
		// index                    = numIndex;
		int32_t* L_20 = ___0_index;
		int32_t L_21 = V_0;
		*((int32_t*)L_20) = (int32_t)L_21;
		// if (long.TryParse(numberStr, out longValue))
		String_t* L_22 = V_3;
		bool L_23;
		L_23 = Int64_TryParse_m3FC0128C89CC2331239FC2A0A749BF33455F03D2(L_22, (&V_4), NULL);
		if (!L_23)
		{
			goto IL_0069;
		}
	}
	{
		// return longValue;
		int64_t L_24 = V_4;
		int64_t L_25 = L_24;
		RuntimeObject* L_26 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_25);
		return L_26;
	}

IL_0069:
	{
		// if (double.TryParse(numberStr, out doubleValue))
		String_t* L_27 = V_3;
		bool L_28;
		L_28 = Double_TryParse_m60AD55BC181D70F661BC2A2294E66B5466C3C018(L_27, (&V_5), NULL);
		if (!L_28)
		{
			goto IL_007b;
		}
	}
	{
		// return doubleValue;
		double L_29 = V_5;
		double L_30 = L_29;
		RuntimeObject* L_31 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_30);
		return L_31;
	}

IL_007b:
	{
		// return null;
		return NULL;
	}
}
// VoxelBusters.CoreLibrary.Parser.JsonToken VoxelBusters.CoreLibrary.Parser.JsonReader::LookAhead(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonReader_LookAhead_m87164631E2B9C9C1606A4DCBFA11F265CBE6DFB1 (JsonReader_t47F60D6EDD8D2B55D6DD8203522B13253E2394A2* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int indexCopy    = index;
		int32_t L_0 = ___0_index;
		V_0 = L_0;
		// return NextToken(ref indexCopy);
		int32_t L_1;
		L_1 = JsonReader_NextToken_mF0C486420177A38B66B2AF0B7174B0D459673F09(__this, (&V_0), NULL);
		return L_1;
	}
}
// VoxelBusters.CoreLibrary.Parser.JsonToken VoxelBusters.CoreLibrary.Parser.JsonReader::NextToken(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonReader_NextToken_mF0C486420177A38B66B2AF0B7174B0D459673F09 (JsonReader_t47F60D6EDD8D2B55D6DD8203522B13253E2394A2* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	Il2CppChar V_0 = 0x0;
	int32_t V_1 = 0;
	{
		// if (index == JSONString.Length)
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* L_2;
		L_2 = JsonReader_get_JSONString_m70992A9462A2D0A2401C667D06C0F421E0224F38_inline(__this, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = JsonString_get_Length_m12389C71C2A01AC11EBCC26820BF41F9B175B652_inline(L_2, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0012;
		}
	}
	{
		// return JsonToken.None;
		return (int32_t)(((int32_t)12));
	}

IL_0012:
	{
		// RemoveWhiteSpace(ref index);
		int32_t* L_4 = ___0_index;
		JsonReader_RemoveWhiteSpace_m3E13BCFFA97AC63A4DC60D16A0FC294D749FF7F6(__this, L_4, NULL);
		// char    charValue   = JSONString[index++];
		JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* L_5;
		L_5 = JsonReader_get_JSONString_m70992A9462A2D0A2401C667D06C0F421E0224F38_inline(__this, NULL);
		int32_t* L_6 = ___0_index;
		int32_t* L_7 = ___0_index;
		int32_t L_8 = *((int32_t*)L_7);
		V_1 = L_8;
		int32_t L_9 = V_1;
		*((int32_t*)L_6) = (int32_t)((int32_t)il2cpp_codegen_add(L_9, 1));
		int32_t L_10 = V_1;
		NullCheck(L_5);
		Il2CppChar L_11;
		L_11 = JsonString_get_Item_mB4BD9B9501CBC3BB6BCD5F7051C51F648C24EF89(L_5, L_10, NULL);
		V_0 = L_11;
		Il2CppChar L_12 = V_0;
		if ((!(((uint32_t)L_12) <= ((uint32_t)((int32_t)91)))))
		{
			goto IL_00a7;
		}
	}
	{
		Il2CppChar L_13 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_13, ((int32_t)34))))
		{
			case 0:
			{
				goto IL_00c4;
			}
			case 1:
			{
				goto IL_00c8;
			}
			case 2:
			{
				goto IL_00c8;
			}
			case 3:
			{
				goto IL_00c8;
			}
			case 4:
			{
				goto IL_00c8;
			}
			case 5:
			{
				goto IL_00c8;
			}
			case 6:
			{
				goto IL_00c8;
			}
			case 7:
			{
				goto IL_00c8;
			}
			case 8:
			{
				goto IL_00c8;
			}
			case 9:
			{
				goto IL_00c8;
			}
			case 10:
			{
				goto IL_00c2;
			}
			case 11:
			{
				goto IL_00c6;
			}
			case 12:
			{
				goto IL_00c8;
			}
			case 13:
			{
				goto IL_00c8;
			}
			case 14:
			{
				goto IL_00c6;
			}
			case 15:
			{
				goto IL_00c6;
			}
			case 16:
			{
				goto IL_00c6;
			}
			case 17:
			{
				goto IL_00c6;
			}
			case 18:
			{
				goto IL_00c6;
			}
			case 19:
			{
				goto IL_00c6;
			}
			case 20:
			{
				goto IL_00c6;
			}
			case 21:
			{
				goto IL_00c6;
			}
			case 22:
			{
				goto IL_00c6;
			}
			case 23:
			{
				goto IL_00c6;
			}
			case 24:
			{
				goto IL_00c0;
			}
		}
	}
	{
		Il2CppChar L_14 = V_0;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)91))))
		{
			goto IL_00bc;
		}
	}
	{
		goto IL_00c8;
	}

IL_00a7:
	{
		Il2CppChar L_15 = V_0;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)93))))
		{
			goto IL_00be;
		}
	}
	{
		Il2CppChar L_16 = V_0;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)123))))
		{
			goto IL_00b8;
		}
	}
	{
		Il2CppChar L_17 = V_0;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)125))))
		{
			goto IL_00ba;
		}
	}
	{
		goto IL_00c8;
	}

IL_00b8:
	{
		// return JsonToken.CurlyOpenBracket;
		return (int32_t)(0);
	}

IL_00ba:
	{
		// return JsonToken.CurlyCloseBracket;
		return (int32_t)(1);
	}

IL_00bc:
	{
		// return JsonToken.SquareOpenBracket;
		return (int32_t)(2);
	}

IL_00be:
	{
		// return JsonToken.SquareCloseBracket;
		return (int32_t)(3);
	}

IL_00c0:
	{
		// return JsonToken.Colon;
		return (int32_t)(4);
	}

IL_00c2:
	{
		// return JsonToken.Comma;
		return (int32_t)(5);
	}

IL_00c4:
	{
		// return JsonToken.String;
		return (int32_t)(6);
	}

IL_00c6:
	{
		// return JsonToken.Number;
		return (int32_t)(7);
	}

IL_00c8:
	{
		// index--;
		int32_t* L_18 = ___0_index;
		int32_t* L_19 = ___0_index;
		int32_t L_20 = *((int32_t*)L_19);
		*((int32_t*)L_18) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_20, 1));
		// if ((index + 4) < JSONString.Length)
		int32_t* L_21 = ___0_index;
		int32_t L_22 = *((int32_t*)L_21);
		JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* L_23;
		L_23 = JsonReader_get_JSONString_m70992A9462A2D0A2401C667D06C0F421E0224F38_inline(__this, NULL);
		NullCheck(L_23);
		int32_t L_24;
		L_24 = JsonString_get_Length_m12389C71C2A01AC11EBCC26820BF41F9B175B652_inline(L_23, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_22, 4))) >= ((int32_t)L_24)))
		{
			goto IL_0132;
		}
	}
	{
		// if (('n' == JSONString[index]) &&
		//     ('u' == JSONString[index + 1]) &&
		//     ('l' == JSONString[index + 2]) &&
		//     ('l' == JSONString[index + 3]))
		JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* L_25;
		L_25 = JsonReader_get_JSONString_m70992A9462A2D0A2401C667D06C0F421E0224F38_inline(__this, NULL);
		int32_t* L_26 = ___0_index;
		int32_t L_27 = *((int32_t*)L_26);
		NullCheck(L_25);
		Il2CppChar L_28;
		L_28 = JsonString_get_Item_mB4BD9B9501CBC3BB6BCD5F7051C51F648C24EF89(L_25, L_27, NULL);
		if ((!(((uint32_t)((int32_t)110)) == ((uint32_t)L_28))))
		{
			goto IL_0132;
		}
	}
	{
		JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* L_29;
		L_29 = JsonReader_get_JSONString_m70992A9462A2D0A2401C667D06C0F421E0224F38_inline(__this, NULL);
		int32_t* L_30 = ___0_index;
		int32_t L_31 = *((int32_t*)L_30);
		NullCheck(L_29);
		Il2CppChar L_32;
		L_32 = JsonString_get_Item_mB4BD9B9501CBC3BB6BCD5F7051C51F648C24EF89(L_29, ((int32_t)il2cpp_codegen_add(L_31, 1)), NULL);
		if ((!(((uint32_t)((int32_t)117)) == ((uint32_t)L_32))))
		{
			goto IL_0132;
		}
	}
	{
		JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* L_33;
		L_33 = JsonReader_get_JSONString_m70992A9462A2D0A2401C667D06C0F421E0224F38_inline(__this, NULL);
		int32_t* L_34 = ___0_index;
		int32_t L_35 = *((int32_t*)L_34);
		NullCheck(L_33);
		Il2CppChar L_36;
		L_36 = JsonString_get_Item_mB4BD9B9501CBC3BB6BCD5F7051C51F648C24EF89(L_33, ((int32_t)il2cpp_codegen_add(L_35, 2)), NULL);
		if ((!(((uint32_t)((int32_t)108)) == ((uint32_t)L_36))))
		{
			goto IL_0132;
		}
	}
	{
		JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* L_37;
		L_37 = JsonReader_get_JSONString_m70992A9462A2D0A2401C667D06C0F421E0224F38_inline(__this, NULL);
		int32_t* L_38 = ___0_index;
		int32_t L_39 = *((int32_t*)L_38);
		NullCheck(L_37);
		Il2CppChar L_40;
		L_40 = JsonString_get_Item_mB4BD9B9501CBC3BB6BCD5F7051C51F648C24EF89(L_37, ((int32_t)il2cpp_codegen_add(L_39, 3)), NULL);
		if ((!(((uint32_t)((int32_t)108)) == ((uint32_t)L_40))))
		{
			goto IL_0132;
		}
	}
	{
		// index   += 4;
		int32_t* L_41 = ___0_index;
		int32_t* L_42 = ___0_index;
		int32_t L_43 = *((int32_t*)L_42);
		*((int32_t*)L_41) = (int32_t)((int32_t)il2cpp_codegen_add(L_43, 4));
		// return JsonToken.Null;
		return (int32_t)(((int32_t)11));
	}

IL_0132:
	{
		// if ((index + 4) < JSONString.Length)
		int32_t* L_44 = ___0_index;
		int32_t L_45 = *((int32_t*)L_44);
		JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* L_46;
		L_46 = JsonReader_get_JSONString_m70992A9462A2D0A2401C667D06C0F421E0224F38_inline(__this, NULL);
		NullCheck(L_46);
		int32_t L_47;
		L_47 = JsonString_get_Length_m12389C71C2A01AC11EBCC26820BF41F9B175B652_inline(L_46, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_45, 4))) >= ((int32_t)L_47)))
		{
			goto IL_0196;
		}
	}
	{
		// if (('t' == JSONString[index]) &&
		//     ('r' == JSONString[index + 1]) &&
		//     ('u' == JSONString[index + 2]) &&
		//     ('e' == JSONString[index + 3]))
		JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* L_48;
		L_48 = JsonReader_get_JSONString_m70992A9462A2D0A2401C667D06C0F421E0224F38_inline(__this, NULL);
		int32_t* L_49 = ___0_index;
		int32_t L_50 = *((int32_t*)L_49);
		NullCheck(L_48);
		Il2CppChar L_51;
		L_51 = JsonString_get_Item_mB4BD9B9501CBC3BB6BCD5F7051C51F648C24EF89(L_48, L_50, NULL);
		if ((!(((uint32_t)((int32_t)116)) == ((uint32_t)L_51))))
		{
			goto IL_0196;
		}
	}
	{
		JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* L_52;
		L_52 = JsonReader_get_JSONString_m70992A9462A2D0A2401C667D06C0F421E0224F38_inline(__this, NULL);
		int32_t* L_53 = ___0_index;
		int32_t L_54 = *((int32_t*)L_53);
		NullCheck(L_52);
		Il2CppChar L_55;
		L_55 = JsonString_get_Item_mB4BD9B9501CBC3BB6BCD5F7051C51F648C24EF89(L_52, ((int32_t)il2cpp_codegen_add(L_54, 1)), NULL);
		if ((!(((uint32_t)((int32_t)114)) == ((uint32_t)L_55))))
		{
			goto IL_0196;
		}
	}
	{
		JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* L_56;
		L_56 = JsonReader_get_JSONString_m70992A9462A2D0A2401C667D06C0F421E0224F38_inline(__this, NULL);
		int32_t* L_57 = ___0_index;
		int32_t L_58 = *((int32_t*)L_57);
		NullCheck(L_56);
		Il2CppChar L_59;
		L_59 = JsonString_get_Item_mB4BD9B9501CBC3BB6BCD5F7051C51F648C24EF89(L_56, ((int32_t)il2cpp_codegen_add(L_58, 2)), NULL);
		if ((!(((uint32_t)((int32_t)117)) == ((uint32_t)L_59))))
		{
			goto IL_0196;
		}
	}
	{
		JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* L_60;
		L_60 = JsonReader_get_JSONString_m70992A9462A2D0A2401C667D06C0F421E0224F38_inline(__this, NULL);
		int32_t* L_61 = ___0_index;
		int32_t L_62 = *((int32_t*)L_61);
		NullCheck(L_60);
		Il2CppChar L_63;
		L_63 = JsonString_get_Item_mB4BD9B9501CBC3BB6BCD5F7051C51F648C24EF89(L_60, ((int32_t)il2cpp_codegen_add(L_62, 3)), NULL);
		if ((!(((uint32_t)((int32_t)101)) == ((uint32_t)L_63))))
		{
			goto IL_0196;
		}
	}
	{
		// index   += 4;
		int32_t* L_64 = ___0_index;
		int32_t* L_65 = ___0_index;
		int32_t L_66 = *((int32_t*)L_65);
		*((int32_t*)L_64) = (int32_t)((int32_t)il2cpp_codegen_add(L_66, 4));
		// return JsonToken.True;
		return (int32_t)(((int32_t)9));
	}

IL_0196:
	{
		// if ((index + 5) < JSONString.Length)
		int32_t* L_67 = ___0_index;
		int32_t L_68 = *((int32_t*)L_67);
		JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* L_69;
		L_69 = JsonReader_get_JSONString_m70992A9462A2D0A2401C667D06C0F421E0224F38_inline(__this, NULL);
		NullCheck(L_69);
		int32_t L_70;
		L_70 = JsonString_get_Length_m12389C71C2A01AC11EBCC26820BF41F9B175B652_inline(L_69, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_68, 5))) >= ((int32_t)L_70)))
		{
			goto IL_020d;
		}
	}
	{
		// if (('f' == JSONString[index]) &&
		//     ('a' == JSONString[index + 1]) &&
		//     ('l' == JSONString[index + 2]) &&
		//     ('s' == JSONString[index + 3]) &&
		//     ('e' == JSONString[index + 4]))
		JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* L_71;
		L_71 = JsonReader_get_JSONString_m70992A9462A2D0A2401C667D06C0F421E0224F38_inline(__this, NULL);
		int32_t* L_72 = ___0_index;
		int32_t L_73 = *((int32_t*)L_72);
		NullCheck(L_71);
		Il2CppChar L_74;
		L_74 = JsonString_get_Item_mB4BD9B9501CBC3BB6BCD5F7051C51F648C24EF89(L_71, L_73, NULL);
		if ((!(((uint32_t)((int32_t)102)) == ((uint32_t)L_74))))
		{
			goto IL_020d;
		}
	}
	{
		JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* L_75;
		L_75 = JsonReader_get_JSONString_m70992A9462A2D0A2401C667D06C0F421E0224F38_inline(__this, NULL);
		int32_t* L_76 = ___0_index;
		int32_t L_77 = *((int32_t*)L_76);
		NullCheck(L_75);
		Il2CppChar L_78;
		L_78 = JsonString_get_Item_mB4BD9B9501CBC3BB6BCD5F7051C51F648C24EF89(L_75, ((int32_t)il2cpp_codegen_add(L_77, 1)), NULL);
		if ((!(((uint32_t)((int32_t)97)) == ((uint32_t)L_78))))
		{
			goto IL_020d;
		}
	}
	{
		JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* L_79;
		L_79 = JsonReader_get_JSONString_m70992A9462A2D0A2401C667D06C0F421E0224F38_inline(__this, NULL);
		int32_t* L_80 = ___0_index;
		int32_t L_81 = *((int32_t*)L_80);
		NullCheck(L_79);
		Il2CppChar L_82;
		L_82 = JsonString_get_Item_mB4BD9B9501CBC3BB6BCD5F7051C51F648C24EF89(L_79, ((int32_t)il2cpp_codegen_add(L_81, 2)), NULL);
		if ((!(((uint32_t)((int32_t)108)) == ((uint32_t)L_82))))
		{
			goto IL_020d;
		}
	}
	{
		JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* L_83;
		L_83 = JsonReader_get_JSONString_m70992A9462A2D0A2401C667D06C0F421E0224F38_inline(__this, NULL);
		int32_t* L_84 = ___0_index;
		int32_t L_85 = *((int32_t*)L_84);
		NullCheck(L_83);
		Il2CppChar L_86;
		L_86 = JsonString_get_Item_mB4BD9B9501CBC3BB6BCD5F7051C51F648C24EF89(L_83, ((int32_t)il2cpp_codegen_add(L_85, 3)), NULL);
		if ((!(((uint32_t)((int32_t)115)) == ((uint32_t)L_86))))
		{
			goto IL_020d;
		}
	}
	{
		JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* L_87;
		L_87 = JsonReader_get_JSONString_m70992A9462A2D0A2401C667D06C0F421E0224F38_inline(__this, NULL);
		int32_t* L_88 = ___0_index;
		int32_t L_89 = *((int32_t*)L_88);
		NullCheck(L_87);
		Il2CppChar L_90;
		L_90 = JsonString_get_Item_mB4BD9B9501CBC3BB6BCD5F7051C51F648C24EF89(L_87, ((int32_t)il2cpp_codegen_add(L_89, 4)), NULL);
		if ((!(((uint32_t)((int32_t)101)) == ((uint32_t)L_90))))
		{
			goto IL_020d;
		}
	}
	{
		// index += 5;
		int32_t* L_91 = ___0_index;
		int32_t* L_92 = ___0_index;
		int32_t L_93 = *((int32_t*)L_92);
		*((int32_t*)L_91) = (int32_t)((int32_t)il2cpp_codegen_add(L_93, 5));
		// return JsonToken.False;
		return (int32_t)(((int32_t)10));
	}

IL_020d:
	{
		// return JsonToken.None;
		return (int32_t)(((int32_t)12));
	}
}
// System.Void VoxelBusters.CoreLibrary.Parser.JsonReader::RemoveWhiteSpace(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_RemoveWhiteSpace_m3E13BCFFA97AC63A4DC60D16A0FC294D749FF7F6 (JsonReader_t47F60D6EDD8D2B55D6DD8203522B13253E2394A2* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB5776E5C9D2479BF6D901DFBBD112A57EA557E3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	{
		// int     charCount   = JSONString.Length;
		JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* L_0;
		L_0 = JsonReader_get_JSONString_m70992A9462A2D0A2401C667D06C0F421E0224F38_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = JsonString_get_Length_m12389C71C2A01AC11EBCC26820BF41F9B175B652_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_0030;
	}

IL_000e:
	{
		// char charValue    = JSONString[index];
		JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* L_2;
		L_2 = JsonReader_get_JSONString_m70992A9462A2D0A2401C667D06C0F421E0224F38_inline(__this, NULL);
		int32_t* L_3 = ___0_index;
		int32_t L_4 = *((int32_t*)L_3);
		NullCheck(L_2);
		Il2CppChar L_5;
		L_5 = JsonString_get_Item_mB4BD9B9501CBC3BB6BCD5F7051C51F648C24EF89(L_2, L_4, NULL);
		V_1 = L_5;
		// if (JsonConstants.kWhiteSpaceLiterals.IndexOf(charValue) != -1)
		Il2CppChar L_6 = V_1;
		NullCheck(_stringLiteralDB5776E5C9D2479BF6D901DFBBD112A57EA557E3);
		int32_t L_7;
		L_7 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(_stringLiteralDB5776E5C9D2479BF6D901DFBBD112A57EA557E3, L_6, NULL);
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			goto IL_0035;
		}
	}
	{
		// index++;
		int32_t* L_8 = ___0_index;
		int32_t* L_9 = ___0_index;
		int32_t L_10 = *((int32_t*)L_9);
		*((int32_t*)L_8) = (int32_t)((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0030:
	{
		// while (index < charCount)
		int32_t* L_11 = ___0_index;
		int32_t L_12 = *((int32_t*)L_11);
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_000e;
		}
	}

IL_0035:
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
// System.String VoxelBusters.CoreLibrary.Parser.JsonString::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonString_get_Value_m7743D4944294FF490002D5C880CF5460D8289989 (JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CValueU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void VoxelBusters.CoreLibrary.Parser.JsonString::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonString_set_Value_m36B4AE0D41B1E90B8A442BC20B2DE466EA75A26E (JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// private set;
		String_t* L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Boolean VoxelBusters.CoreLibrary.Parser.JsonString::get_IsNullOrEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonString_get_IsNullOrEmpty_mE2D51FE0C3397E355E35066274AF789171773A59 (JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* __this, const RuntimeMethod* method) 
{
	{
		// get;
		bool L_0 = __this->___U3CIsNullOrEmptyU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void VoxelBusters.CoreLibrary.Parser.JsonString::set_IsNullOrEmpty(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonString_set_IsNullOrEmpty_m41089F16C4DDAE5712B31B3CEA37BC61619C2170 (JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// private set;
		bool L_0 = ___0_value;
		__this->___U3CIsNullOrEmptyU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Int32 VoxelBusters.CoreLibrary.Parser.JsonString::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonString_get_Length_m12389C71C2A01AC11EBCC26820BF41F9B175B652 (JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* __this, const RuntimeMethod* method) 
{
	{
		// get;
		int32_t L_0 = __this->___U3CLengthU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void VoxelBusters.CoreLibrary.Parser.JsonString::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonString_set_Length_m0DA3A351013C6FC2A06E43C805310DF5329DC1F0 (JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// private set;
		int32_t L_0 = ___0_value;
		__this->___U3CLengthU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Char VoxelBusters.CoreLibrary.Parser.JsonString::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar JsonString_get_Item_mB4BD9B9501CBC3BB6BCD5F7051C51F648C24EF89 (JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		// return Value[index];
		String_t* L_0;
		L_0 = JsonString_get_Value_m7743D4944294FF490002D5C880CF5460D8289989_inline(__this, NULL);
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Il2CppChar L_2;
		L_2 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void VoxelBusters.CoreLibrary.Parser.JsonString::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonString__ctor_mC9AB9337561E417331260138209AA8B24F27C340 (JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* G_B2_0 = NULL;
	JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* G_B3_1 = NULL;
	{
		// public JsonString(string value)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Value            = value;
		String_t* L_0 = ___0_value;
		JsonString_set_Value_m36B4AE0D41B1E90B8A442BC20B2DE466EA75A26E_inline(__this, L_0, NULL);
		// IsNullOrEmpty    = string.IsNullOrEmpty(value);
		String_t* L_1 = ___0_value;
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		JsonString_set_IsNullOrEmpty_m41089F16C4DDAE5712B31B3CEA37BC61619C2170_inline(__this, L_2, NULL);
		// Length            = IsNullOrEmpty ? 0 : value.Length;
		bool L_3;
		L_3 = JsonString_get_IsNullOrEmpty_mE2D51FE0C3397E355E35066274AF789171773A59_inline(__this, NULL);
		G_B1_0 = __this;
		if (L_3)
		{
			G_B2_0 = __this;
			goto IL_002a;
		}
	}
	{
		String_t* L_4 = ___0_value;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_002b;
	}

IL_002a:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_002b:
	{
		NullCheck(G_B3_1);
		JsonString_set_Length_m0DA3A351013C6FC2A06E43C805310DF5329DC1F0_inline(G_B3_1, G_B3_0, NULL);
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
// System.String VoxelBusters.CoreLibrary.Parser.JsonUtility::ToJSON(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJSON_m46530BB31DEEE35BBFBA36DD678BAE76FA307157 (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_tBE379245CF2B3A0806A9D2117384BF460ADA6C69_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// JsonWriter  writer  = new JsonWriter();
		JsonWriter_tBE379245CF2B3A0806A9D2117384BF460ADA6C69* L_0 = (JsonWriter_tBE379245CF2B3A0806A9D2117384BF460ADA6C69*)il2cpp_codegen_object_new(JsonWriter_tBE379245CF2B3A0806A9D2117384BF460ADA6C69_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JsonWriter__ctor_mE4226A2258F4AC75269C96989ECB89742A3FCC41(L_0, ((int32_t)512), NULL);
		// return writer.Serialise(obj);
		RuntimeObject* L_1 = ___0_obj;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = JsonWriter_Serialise_m7A93F65903D4171244ECCBA1BA5BC73C8C91AA92(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean VoxelBusters.CoreLibrary.Parser.JsonUtility::IsNull(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonUtility_IsNull_m778FC2ED57C7FE82EFFE3B8AEB965190C912C9DE (String_t* ___0_jsonStr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return jsonStr.Equals(JsonConstants.kNull);
		String_t* L_0 = ___0_jsonStr;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_0, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		return L_1;
	}
}
// System.Object VoxelBusters.CoreLibrary.Parser.JsonUtility::FromJSON(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJSON_mA072D4AA228F11B2973AD2C06388F4CB888FE7D6 (String_t* ___0_jsonStr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReader_t47F60D6EDD8D2B55D6DD8203522B13253E2394A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// JsonReader  reader  = new JsonReader(jsonStr);
		String_t* L_0 = ___0_jsonStr;
		JsonReader_t47F60D6EDD8D2B55D6DD8203522B13253E2394A2* L_1 = (JsonReader_t47F60D6EDD8D2B55D6DD8203522B13253E2394A2*)il2cpp_codegen_object_new(JsonReader_t47F60D6EDD8D2B55D6DD8203522B13253E2394A2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JsonReader__ctor_m061CAF9A9406D5817FF72A7F7493F836E6000B08(L_1, L_0, NULL);
		// return reader.Deserialise();
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = JsonReader_Deserialise_m9E478710BA22C7E81241AA74555A4D12E7C64A85(L_1, NULL);
		return L_2;
	}
}
// System.Object VoxelBusters.CoreLibrary.Parser.JsonUtility::FromJSON(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJSON_m41F284519CEC2E361695969A61F1CE6B8669BAB0 (String_t* ___0_jsonStr, int32_t* ___1_errorIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReader_t47F60D6EDD8D2B55D6DD8203522B13253E2394A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// JsonReader  reader  = new JsonReader(jsonStr);
		String_t* L_0 = ___0_jsonStr;
		JsonReader_t47F60D6EDD8D2B55D6DD8203522B13253E2394A2* L_1 = (JsonReader_t47F60D6EDD8D2B55D6DD8203522B13253E2394A2*)il2cpp_codegen_object_new(JsonReader_t47F60D6EDD8D2B55D6DD8203522B13253E2394A2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JsonReader__ctor_m061CAF9A9406D5817FF72A7F7493F836E6000B08(L_1, L_0, NULL);
		// return reader.Deserialise(ref errorIndex);
		int32_t* L_2 = ___1_errorIndex;
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = JsonReader_Deserialise_m9E9D929002BA725166FB3A5A51C3AA49EF970504(L_1, L_2, NULL);
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
// System.Void VoxelBusters.CoreLibrary.Parser.JsonWriter::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_mE4226A2258F4AC75269C96989ECB89742A3FCC41 (JsonWriter_tBE379245CF2B3A0806A9D2117384BF460ADA6C69* __this, int32_t ___0_bufferLength, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public JsonWriter(int bufferLength = kBufferLength)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_stringBuilder        = new StringBuilder(bufferLength);
		int32_t L_0 = ___0_bufferLength;
		StringBuilder_t* L_1 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_1, L_0, NULL);
		__this->___m_stringBuilder_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_stringBuilder_1), (void*)L_1);
		// }
		return;
	}
}
// System.String VoxelBusters.CoreLibrary.Parser.JsonWriter::Serialise(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonWriter_Serialise_m7A93F65903D4171244ECCBA1BA5BC73C8C91AA92 (JsonWriter_tBE379245CF2B3A0806A9D2117384BF460ADA6C69* __this, RuntimeObject* ___0_objectValue, const RuntimeMethod* method) 
{
	{
		// WriteObjectValue(objectValue);
		RuntimeObject* L_0 = ___0_objectValue;
		JsonWriter_WriteObjectValue_mC4F25A003906D257B8B1B394374C2CB0578727FC(__this, L_0, NULL);
		// return m_stringBuilder.ToString();
		StringBuilder_t* L_1 = __this->___m_stringBuilder_1;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		return L_2;
	}
}
// System.Void VoxelBusters.CoreLibrary.Parser.JsonWriter::WriteObjectValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteObjectValue_mC4F25A003906D257B8B1B394374C2CB0578727FC (JsonWriter_tBE379245CF2B3A0806A9D2117384BF460ADA6C69* __this, RuntimeObject* ___0_objectVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	{
		// if (objectVal == null)
		RuntimeObject* L_0 = ___0_objectVal;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// WriteNullValue();
		JsonWriter_WriteNullValue_m949601FC923129D35A8411CEDB035378AA9CBD6E(__this, NULL);
		// return;
		return;
	}

IL_000a:
	{
		// Type objectType    = objectVal.GetType();
		RuntimeObject* L_1 = ___0_objectVal;
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_1, NULL);
		V_0 = L_2;
		// if (objectType.IsPrimitive)
		Type_t* L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18(L_3, NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		// WritePrimitive(objectVal);
		RuntimeObject* L_5 = ___0_objectVal;
		JsonWriter_WritePrimitive_m2EF7253DCCE38A3C2450436A9EFD31649D67DCB2(__this, L_5, NULL);
		// return;
		return;
	}

IL_0021:
	{
		// else if (objectType.IsEnum)
		Type_t* L_6 = V_0;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(69 /* System.Boolean System.Type::get_IsEnum() */, L_6);
		if (!L_7)
		{
			goto IL_0031;
		}
	}
	{
		// WriteEnum(objectVal);
		RuntimeObject* L_8 = ___0_objectVal;
		JsonWriter_WriteEnum_mEF15CBA9253DB2E73E762CE6A0A152401FF3F418(__this, L_8, NULL);
		// return;
		return;
	}

IL_0031:
	{
		// else if (objectType.IsArray)
		Type_t* L_9 = V_0;
		NullCheck(L_9);
		bool L_10;
		L_10 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_9, NULL);
		if (!L_10)
		{
			goto IL_0046;
		}
	}
	{
		// WriteArray(objectVal as Array);
		RuntimeObject* L_11 = ___0_objectVal;
		JsonWriter_WriteArray_m7AEF1DD09947A3EA257C13A6582313EF083BA273(__this, ((RuntimeArray*)IsInstClass((RuntimeObject*)L_11, RuntimeArray_il2cpp_TypeInfo_var)), NULL);
		// return;
		return;
	}

IL_0046:
	{
		// else if (objectVal as IList != null)
		RuntimeObject* L_12 = ___0_objectVal;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_12, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var)))
		{
			goto IL_005b;
		}
	}
	{
		// WriteList(objectVal as IList);
		RuntimeObject* L_13 = ___0_objectVal;
		JsonWriter_WriteList_m3BD7BD4D14A98CF42F3EC6AC8BFAD5E7D9C8240B(__this, ((RuntimeObject*)IsInst((RuntimeObject*)L_13, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var)), NULL);
		// return;
		return;
	}

IL_005b:
	{
		// else if (objectVal as IDictionary != null)
		RuntimeObject* L_14 = ___0_objectVal;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_14, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var)))
		{
			goto IL_0070;
		}
	}
	{
		// WriteDictionary(objectVal as IDictionary);
		RuntimeObject* L_15 = ___0_objectVal;
		JsonWriter_WriteDictionary_mDC53A242F72745B9504B2F6B39BCDDB1DA63E143(__this, ((RuntimeObject*)IsInst((RuntimeObject*)L_15, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var)), NULL);
		// return;
		return;
	}

IL_0070:
	{
		// WriteString(objectVal.ToString());
		RuntimeObject* L_16 = ___0_objectVal;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
		JsonWriter_WriteString_mC13D674DA63E56735EBE4D5B20526B4669A00FAF(__this, L_17, NULL);
		// return;
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.Parser.JsonWriter::WriteDictionary(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteDictionary_mDC53A242F72745B9504B2F6B39BCDDB1DA63E143 (JsonWriter_tBE379245CF2B3A0806A9D2117384BF460ADA6C69* __this, RuntimeObject* ___0_dict, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		// bool                    firstEntry        = true;
		V_0 = (bool)1;
		// IDictionaryEnumerator   dictEnumerator    = dict.GetEnumerator();
		RuntimeObject* L_0 = ___0_dict;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_0);
		V_1 = L_1;
		// m_stringBuilder.Append('{');
		StringBuilder_t* L_2 = __this->___m_stringBuilder_1;
		NullCheck(L_2);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_2, ((int32_t)123), NULL);
		goto IL_0059;
	}

IL_0019:
	{
		// if (firstEntry)
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		// firstEntry  = false;
		V_0 = (bool)0;
		goto IL_002e;
	}

IL_0020:
	{
		// m_stringBuilder.Append(',');
		StringBuilder_t* L_5 = __this->___m_stringBuilder_1;
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_5, ((int32_t)44), NULL);
	}

IL_002e:
	{
		// WriteString(dictEnumerator.Key.ToString());
		RuntimeObject* L_7 = V_1;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Object System.Collections.IDictionaryEnumerator::get_Key() */, IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		JsonWriter_WriteString_mC13D674DA63E56735EBE4D5B20526B4669A00FAF(__this, L_9, NULL);
		// m_stringBuilder.Append(':');
		StringBuilder_t* L_10 = __this->___m_stringBuilder_1;
		NullCheck(L_10);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_10, ((int32_t)58), NULL);
		// WriteObjectValue(dictEnumerator.Value);
		RuntimeObject* L_12 = V_1;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IDictionaryEnumerator::get_Value() */, IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16_il2cpp_TypeInfo_var, L_12);
		JsonWriter_WriteObjectValue_mC4F25A003906D257B8B1B394374C2CB0578727FC(__this, L_13, NULL);
	}

IL_0059:
	{
		// while (dictEnumerator.MoveNext())
		RuntimeObject* L_14 = V_1;
		NullCheck(L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
		if (L_15)
		{
			goto IL_0019;
		}
	}
	{
		// m_stringBuilder.Append('}');
		StringBuilder_t* L_16 = __this->___m_stringBuilder_1;
		NullCheck(L_16);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_16, ((int32_t)125), NULL);
		// return;
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.Parser.JsonWriter::WriteArray(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteArray_m7AEF1DD09947A3EA257C13A6582313EF083BA273 (JsonWriter_tBE379245CF2B3A0806A9D2117384BF460ADA6C69* __this, RuntimeArray* ___0_array, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// m_stringBuilder.Append('[');
		StringBuilder_t* L_0 = __this->___m_stringBuilder_1;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)91), NULL);
		// switch (array.Rank)
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		V_3 = L_3;
		int32_t L_4 = V_3;
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_5 = V_3;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_005e;
		}
	}
	{
		goto IL_00de;
	}

IL_0022:
	{
		// int arrayLength = array.Length;
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_6, NULL);
		V_0 = L_7;
		// for (int iter = 0; iter < arrayLength; iter++)
		V_4 = 0;
		goto IL_0054;
	}

IL_002e:
	{
		// if (iter != 0)
		int32_t L_8 = V_4;
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		// m_stringBuilder.Append(',');
		StringBuilder_t* L_9 = __this->___m_stringBuilder_1;
		NullCheck(L_9);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_9, ((int32_t)44), NULL);
	}

IL_0040:
	{
		// WriteObjectValue(array.GetValue(iter));
		RuntimeArray* L_11 = ___0_array;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = Array_GetValue_m007D247B8A6FE5BD60FD1CD510A714A416F2BA21(L_11, L_12, NULL);
		JsonWriter_WriteObjectValue_mC4F25A003906D257B8B1B394374C2CB0578727FC(__this, L_13, NULL);
		// for (int iter = 0; iter < arrayLength; iter++)
		int32_t L_14 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0054:
	{
		// for (int iter = 0; iter < arrayLength; iter++)
		int32_t L_15 = V_4;
		int32_t L_16 = V_0;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_002e;
		}
	}
	{
		// break;
		goto IL_00de;
	}

IL_005e:
	{
		// int outerArrayLength    = array.GetLength(0);
		RuntimeArray* L_17 = ___0_array;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935(L_17, 0, NULL);
		V_1 = L_18;
		// int innerArrayLength    = array.GetLength(1);
		RuntimeArray* L_19 = ___0_array;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935(L_19, 1, NULL);
		V_2 = L_20;
		// for (int outerIter = 0; outerIter < outerArrayLength; outerIter++)
		V_5 = 0;
		goto IL_00d9;
	}

IL_0073:
	{
		// if (outerIter != 0)
		int32_t L_21 = V_5;
		if (!L_21)
		{
			goto IL_0085;
		}
	}
	{
		// m_stringBuilder.Append(',');
		StringBuilder_t* L_22 = __this->___m_stringBuilder_1;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, ((int32_t)44), NULL);
	}

IL_0085:
	{
		// m_stringBuilder.Append('[');
		StringBuilder_t* L_24 = __this->___m_stringBuilder_1;
		NullCheck(L_24);
		StringBuilder_t* L_25;
		L_25 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_24, ((int32_t)91), NULL);
		// for (int _innerIter = 0; _innerIter < innerArrayLength; _innerIter++)
		V_6 = 0;
		goto IL_00c0;
	}

IL_0098:
	{
		// if (_innerIter != 0)
		int32_t L_26 = V_6;
		if (!L_26)
		{
			goto IL_00aa;
		}
	}
	{
		// m_stringBuilder.Append(',');
		StringBuilder_t* L_27 = __this->___m_stringBuilder_1;
		NullCheck(L_27);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_27, ((int32_t)44), NULL);
	}

IL_00aa:
	{
		// WriteObjectValue(array.GetValue(outerIter, _innerIter));
		RuntimeArray* L_29 = ___0_array;
		int32_t L_30 = V_5;
		int32_t L_31 = V_6;
		NullCheck(L_29);
		RuntimeObject* L_32;
		L_32 = Array_GetValue_mC7B3B59C7533244E396308CA7C17EEAD913FF3A1(L_29, L_30, L_31, NULL);
		JsonWriter_WriteObjectValue_mC4F25A003906D257B8B1B394374C2CB0578727FC(__this, L_32, NULL);
		// for (int _innerIter = 0; _innerIter < innerArrayLength; _innerIter++)
		int32_t L_33 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00c0:
	{
		// for (int _innerIter = 0; _innerIter < innerArrayLength; _innerIter++)
		int32_t L_34 = V_6;
		int32_t L_35 = V_2;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_0098;
		}
	}
	{
		// m_stringBuilder.Append(']');
		StringBuilder_t* L_36 = __this->___m_stringBuilder_1;
		NullCheck(L_36);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_36, ((int32_t)93), NULL);
		// for (int outerIter = 0; outerIter < outerArrayLength; outerIter++)
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00d9:
	{
		// for (int outerIter = 0; outerIter < outerArrayLength; outerIter++)
		int32_t L_39 = V_5;
		int32_t L_40 = V_1;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0073;
		}
	}

IL_00de:
	{
		// m_stringBuilder.Append(']');
		StringBuilder_t* L_41 = __this->___m_stringBuilder_1;
		NullCheck(L_41);
		StringBuilder_t* L_42;
		L_42 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_41, ((int32_t)93), NULL);
		// return;
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.Parser.JsonWriter::WriteList(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteList_m3BD7BD4D14A98CF42F3EC6AC8BFAD5E7D9C8240B (JsonWriter_tBE379245CF2B3A0806A9D2117384BF460ADA6C69* __this, RuntimeObject* ___0_list, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int     totalCount      = list.Count;
		RuntimeObject* L_0 = ___0_list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		// m_stringBuilder.Append('[');
		StringBuilder_t* L_2 = __this->___m_stringBuilder_1;
		NullCheck(L_2);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_2, ((int32_t)91), NULL);
		// for (int iter = 0; iter < totalCount; iter++)
		V_1 = 0;
		goto IL_003b;
	}

IL_0019:
	{
		// if (iter != 0)
		int32_t L_4 = V_1;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// m_stringBuilder.Append(',');
		StringBuilder_t* L_5 = __this->___m_stringBuilder_1;
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_5, ((int32_t)44), NULL);
	}

IL_002a:
	{
		// WriteObjectValue(list[iter]);
		RuntimeObject* L_7 = ___0_list;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_7, L_8);
		JsonWriter_WriteObjectValue_mC4F25A003906D257B8B1B394374C2CB0578727FC(__this, L_9, NULL);
		// for (int iter = 0; iter < totalCount; iter++)
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_003b:
	{
		// for (int iter = 0; iter < totalCount; iter++)
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0019;
		}
	}
	{
		// m_stringBuilder.Append(']');
		StringBuilder_t* L_13 = __this->___m_stringBuilder_1;
		NullCheck(L_13);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_13, ((int32_t)93), NULL);
		// return;
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.Parser.JsonWriter::WritePrimitive(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WritePrimitive_m2EF7253DCCE38A3C2450436A9EFD31649D67DCB2 (JsonWriter_tBE379245CF2B3A0806A9D2117384BF460ADA6C69* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value is bool)
		RuntimeObject* L_0 = ___0_value;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))
		{
			goto IL_0034;
		}
	}
	{
		// if ((bool)value)
		RuntimeObject* L_1 = ___0_value;
		if (!((*(bool*)((bool*)(bool*)UnBox(L_1, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))))
		{
			goto IL_0022;
		}
	}
	{
		// m_stringBuilder.Append(JsonConstants.kBoolTrue);
		StringBuilder_t* L_2 = __this->___m_stringBuilder_1;
		NullCheck(L_2);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_2, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		return;
	}

IL_0022:
	{
		// m_stringBuilder.Append(JsonConstants.kBoolFalse);
		StringBuilder_t* L_4 = __this->___m_stringBuilder_1;
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, NULL);
		return;
	}

IL_0034:
	{
		// else if (value is char)
		RuntimeObject* L_6 = ___0_value;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_6, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var)))
		{
			goto IL_005d;
		}
	}
	{
		// m_stringBuilder.Append('"').Append((char)value).Append('"');
		StringBuilder_t* L_7 = __this->___m_stringBuilder_1;
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_7, ((int32_t)34), NULL);
		RuntimeObject* L_9 = ___0_value;
		NullCheck(L_8);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_8, ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_9, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var)))), NULL);
		NullCheck(L_10);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_10, ((int32_t)34), NULL);
		return;
	}

IL_005d:
	{
		// m_stringBuilder.AppendFormat(CultureInfo.InvariantCulture, "{0}", value); //Fix for globalization
		StringBuilder_t* L_12 = __this->___m_stringBuilder_1;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_13;
		L_13 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		RuntimeObject* L_14 = ___0_value;
		NullCheck(L_12);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_AppendFormat_m91278D58CD695B07613B9A3941B745B815542E1E(L_12, L_13, _stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94, L_14, NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.Parser.JsonWriter::WriteEnum(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteEnum_mEF15CBA9253DB2E73E762CE6A0A152401FF3F418 (JsonWriter_tBE379245CF2B3A0806A9D2117384BF460ADA6C69* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_stringBuilder.Append((int)value);
		StringBuilder_t* L_0 = __this->___m_stringBuilder_1;
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_0);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_0, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_1, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.Parser.JsonWriter::WriteNullValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteNullValue_m949601FC923129D35A8411CEDB035378AA9CBD6E (JsonWriter_tBE379245CF2B3A0806A9D2117384BF460ADA6C69* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_stringBuilder.Append(JsonConstants.kNull);
		StringBuilder_t* L_0 = __this->___m_stringBuilder_1;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.Parser.JsonWriter::WriteString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteString_mC13D674DA63E56735EBE4D5B20526B4669A00FAF (JsonWriter_tBE379245CF2B3A0806A9D2117384BF460ADA6C69* __this, String_t* ___0_stringVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE727BF366E3CC855B808D806440542BF7152AF19);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// int charCount    = stringVal.Length;
		String_t* L_0 = ___0_stringVal;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		V_0 = L_1;
		// int charIter    = 0;
		V_1 = 0;
		// m_stringBuilder.Append('"');
		StringBuilder_t* L_2 = __this->___m_stringBuilder_1;
		NullCheck(L_2);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_2, ((int32_t)34), NULL);
		goto IL_0151;
	}

IL_001c:
	{
		// char    charValue    = stringVal[charIter++];
		String_t* L_4 = ___0_stringVal;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		NullCheck(L_4);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_4, L_6, NULL);
		V_2 = L_7;
		// if (charValue == '"')
		Il2CppChar L_8 = V_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_0047;
		}
	}
	{
		// m_stringBuilder.Append('\\').Append('"');
		StringBuilder_t* L_9 = __this->___m_stringBuilder_1;
		NullCheck(L_9);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_9, ((int32_t)92), NULL);
		NullCheck(L_10);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_10, ((int32_t)34), NULL);
		goto IL_0151;
	}

IL_0047:
	{
		// else if (charValue == '\\')
		Il2CppChar L_12 = V_2;
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0066;
		}
	}
	{
		// m_stringBuilder.Append('\\').Append('\\');
		StringBuilder_t* L_13 = __this->___m_stringBuilder_1;
		NullCheck(L_13);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_13, ((int32_t)92), NULL);
		NullCheck(L_14);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_14, ((int32_t)92), NULL);
		goto IL_0151;
	}

IL_0066:
	{
		// else if (charValue == '/')
		Il2CppChar L_16 = V_2;
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0085;
		}
	}
	{
		// m_stringBuilder.Append('\\').Append('/');
		StringBuilder_t* L_17 = __this->___m_stringBuilder_1;
		NullCheck(L_17);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_17, ((int32_t)92), NULL);
		NullCheck(L_18);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_18, ((int32_t)47), NULL);
		goto IL_0151;
	}

IL_0085:
	{
		// else if (charValue == '\b')
		Il2CppChar L_20 = V_2;
		if ((!(((uint32_t)L_20) == ((uint32_t)8))))
		{
			goto IL_00a3;
		}
	}
	{
		// m_stringBuilder.Append('\\').Append('b');
		StringBuilder_t* L_21 = __this->___m_stringBuilder_1;
		NullCheck(L_21);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_21, ((int32_t)92), NULL);
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_22, ((int32_t)98), NULL);
		goto IL_0151;
	}

IL_00a3:
	{
		// else if (charValue == '\f')
		Il2CppChar L_24 = V_2;
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_00c2;
		}
	}
	{
		// m_stringBuilder.Append('\\').Append('f');
		StringBuilder_t* L_25 = __this->___m_stringBuilder_1;
		NullCheck(L_25);
		StringBuilder_t* L_26;
		L_26 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_25, ((int32_t)92), NULL);
		NullCheck(L_26);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_26, ((int32_t)102), NULL);
		goto IL_0151;
	}

IL_00c2:
	{
		// else if (charValue == '\n')
		Il2CppChar L_28 = V_2;
		if ((!(((uint32_t)L_28) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_00de;
		}
	}
	{
		// m_stringBuilder.Append('\\').Append('n');
		StringBuilder_t* L_29 = __this->___m_stringBuilder_1;
		NullCheck(L_29);
		StringBuilder_t* L_30;
		L_30 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_29, ((int32_t)92), NULL);
		NullCheck(L_30);
		StringBuilder_t* L_31;
		L_31 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_30, ((int32_t)110), NULL);
		goto IL_0151;
	}

IL_00de:
	{
		// else if (charValue == '\r')
		Il2CppChar L_32 = V_2;
		if ((!(((uint32_t)L_32) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_00fa;
		}
	}
	{
		// m_stringBuilder.Append('\\').Append('r');
		StringBuilder_t* L_33 = __this->___m_stringBuilder_1;
		NullCheck(L_33);
		StringBuilder_t* L_34;
		L_34 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_33, ((int32_t)92), NULL);
		NullCheck(L_34);
		StringBuilder_t* L_35;
		L_35 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_34, ((int32_t)114), NULL);
		goto IL_0151;
	}

IL_00fa:
	{
		// else if (charValue == '\t')
		Il2CppChar L_36 = V_2;
		if ((!(((uint32_t)L_36) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0116;
		}
	}
	{
		// m_stringBuilder.Append('\\').Append('t');
		StringBuilder_t* L_37 = __this->___m_stringBuilder_1;
		NullCheck(L_37);
		StringBuilder_t* L_38;
		L_38 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_37, ((int32_t)92), NULL);
		NullCheck(L_38);
		StringBuilder_t* L_39;
		L_39 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_38, ((int32_t)116), NULL);
		goto IL_0151;
	}

IL_0116:
	{
		// else if (charValue > 127)
		Il2CppChar L_40 = V_2;
		if ((((int32_t)L_40) <= ((int32_t)((int32_t)127))))
		{
			goto IL_0144;
		}
	}
	{
		// string  unicode = "\\u" + ((int)charValue).ToString("x4");
		Il2CppChar L_41 = V_2;
		V_4 = L_41;
		String_t* L_42;
		L_42 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&V_4), _stringLiteralE727BF366E3CC855B808D806440542BF7152AF19, NULL);
		String_t* L_43;
		L_43 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699, L_42, NULL);
		V_3 = L_43;
		// m_stringBuilder.Append(unicode);
		StringBuilder_t* L_44 = __this->___m_stringBuilder_1;
		String_t* L_45 = V_3;
		NullCheck(L_44);
		StringBuilder_t* L_46;
		L_46 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_44, L_45, NULL);
		goto IL_0151;
	}

IL_0144:
	{
		// m_stringBuilder.Append(charValue);
		StringBuilder_t* L_47 = __this->___m_stringBuilder_1;
		Il2CppChar L_48 = V_2;
		NullCheck(L_47);
		StringBuilder_t* L_49;
		L_49 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_47, L_48, NULL);
	}

IL_0151:
	{
		// while (charIter < charCount)
		int32_t L_50 = V_1;
		int32_t L_51 = V_0;
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_001c;
		}
	}
	{
		// m_stringBuilder.Append('"');
		StringBuilder_t* L_52 = __this->___m_stringBuilder_1;
		NullCheck(L_52);
		StringBuilder_t* L_53;
		L_53 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_52, ((int32_t)34), NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.Parser.JsonWriter::WriteDictionaryStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteDictionaryStart_m9325D7132478096600C6663B9644B83CAF11D746 (JsonWriter_tBE379245CF2B3A0806A9D2117384BF460ADA6C69* __this, const RuntimeMethod* method) 
{
	{
		// m_stringBuilder.Append('{');
		StringBuilder_t* L_0 = __this->___m_stringBuilder_1;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)123), NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.Parser.JsonWriter::WriteKeyValuePair(System.String,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteKeyValuePair_mD82BC685D3DCB87297C3CDF8344C472723F7552D (JsonWriter_tBE379245CF2B3A0806A9D2117384BF460ADA6C69* __this, String_t* ___0_key, RuntimeObject* ___1_value, bool ___2_appendSeperator, const RuntimeMethod* method) 
{
	{
		// WriteString(key);
		String_t* L_0 = ___0_key;
		JsonWriter_WriteString_mC13D674DA63E56735EBE4D5B20526B4669A00FAF(__this, L_0, NULL);
		// m_stringBuilder.Append(':');
		StringBuilder_t* L_1 = __this->___m_stringBuilder_1;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, ((int32_t)58), NULL);
		// WriteObjectValue(value);
		RuntimeObject* L_3 = ___1_value;
		JsonWriter_WriteObjectValue_mC4F25A003906D257B8B1B394374C2CB0578727FC(__this, L_3, NULL);
		// if (appendSeperator)
		bool L_4 = ___2_appendSeperator;
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		// m_stringBuilder.Append(',');
		StringBuilder_t* L_5 = __this->___m_stringBuilder_1;
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_5, ((int32_t)44), NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.Parser.JsonWriter::WriteKeyValuePairSeperator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteKeyValuePairSeperator_mDA2BFF73EF57BB6526E1B23027ED17D07A5B2A80 (JsonWriter_tBE379245CF2B3A0806A9D2117384BF460ADA6C69* __this, const RuntimeMethod* method) 
{
	{
		// m_stringBuilder.Append(':');
		StringBuilder_t* L_0 = __this->___m_stringBuilder_1;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)58), NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.Parser.JsonWriter::WriteDictionaryEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteDictionaryEnd_mF15F2958534C4CD519914E5A91945C72856C00C5 (JsonWriter_tBE379245CF2B3A0806A9D2117384BF460ADA6C69* __this, const RuntimeMethod* method) 
{
	{
		// m_stringBuilder.Append('}');
		StringBuilder_t* L_0 = __this->___m_stringBuilder_1;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)125), NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.Parser.JsonWriter::WriteArrayStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteArrayStart_m25D473733AB0180509D69249A8B38E26088C4A8E (JsonWriter_tBE379245CF2B3A0806A9D2117384BF460ADA6C69* __this, const RuntimeMethod* method) 
{
	{
		// m_stringBuilder.Append('[');
		StringBuilder_t* L_0 = __this->___m_stringBuilder_1;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)91), NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.Parser.JsonWriter::WriteArrayEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteArrayEnd_m5B27B29C60F3F031EAD8F74C1FC55534AEA165EB (JsonWriter_tBE379245CF2B3A0806A9D2117384BF460ADA6C69* __this, const RuntimeMethod* method) 
{
	{
		// m_stringBuilder.Append(']');
		StringBuilder_t* L_0 = __this->___m_stringBuilder_1;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)93), NULL);
		// }
		return;
	}
}
// System.Void VoxelBusters.CoreLibrary.Parser.JsonWriter::WriteElementSeperator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteElementSeperator_m86980F0FC825C34CCAA9B17C8FD2DAA32B8A1C13 (JsonWriter_tBE379245CF2B3A0806A9D2117384BF460ADA6C69* __this, const RuntimeMethod* method) 
{
	{
		// m_stringBuilder.Append(',');
		StringBuilder_t* L_0 = __this->___m_stringBuilder_1;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_0, ((int32_t)44), NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonReader_set_JSONString_m43E31766F6CBC3843C0A09BA74A7EA69F4C65C65_inline (JsonReader_t47F60D6EDD8D2B55D6DD8203522B13253E2394A2* __this, JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal JsonString JSONString { get; private set; }
		JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* L_0 = ___0_value;
		__this->___U3CJSONStringU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJSONStringU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* JsonReader_get_JSONString_m70992A9462A2D0A2401C667D06C0F421E0224F38_inline (JsonReader_t47F60D6EDD8D2B55D6DD8203522B13253E2394A2* __this, const RuntimeMethod* method) 
{
	{
		// internal JsonString JSONString { get; private set; }
		JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* L_0 = __this->___U3CJSONStringU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonString_get_IsNullOrEmpty_mE2D51FE0C3397E355E35066274AF789171773A59_inline (JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* __this, const RuntimeMethod* method) 
{
	{
		// get;
		bool L_0 = __this->___U3CIsNullOrEmptyU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonString_get_Length_m12389C71C2A01AC11EBCC26820BF41F9B175B652_inline (JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* __this, const RuntimeMethod* method) 
{
	{
		// get;
		int32_t L_0 = __this->___U3CLengthU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* JsonString_get_Value_m7743D4944294FF490002D5C880CF5460D8289989_inline (JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* __this, const RuntimeMethod* method) 
{
	{
		// get;
		String_t* L_0 = __this->___U3CValueU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonString_set_Value_m36B4AE0D41B1E90B8A442BC20B2DE466EA75A26E_inline (JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// private set;
		String_t* L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonString_set_IsNullOrEmpty_m41089F16C4DDAE5712B31B3CEA37BC61619C2170_inline (JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// private set;
		bool L_0 = ___0_value;
		__this->___U3CIsNullOrEmptyU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonString_set_Length_m0DA3A351013C6FC2A06E43C805310DF5329DC1F0_inline (JsonString_tFE27E73E2D738E19BB086122B75F8424CD1A5CAF* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// private set;
		int32_t L_0 = ___0_value;
		__this->___U3CLengthU3Ek__BackingField_2 = L_0;
		return;
	}
}
