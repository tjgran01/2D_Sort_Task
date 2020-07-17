#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;

IL2CPP_EXTERN_C RuntimeClass* List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m9DD19D800AE6D84ED0729D5D97CAF84DF317DD38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m82C4D0710B1BD00E77EFC7B8B55F1CD0C02A5377_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t StringConcat_ConcatNoDelimiter_m3C33183D3518F25FAEA2919B7C2EA8A10C03070E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringConcat_GetResult_m02B84D711FF4363F045D30164A554C9CE876345C_MetadataUsageId;

struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct  List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____items_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// System.Xml.Xsl.Runtime.StringConcat
struct  StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43 
{
public:
	// System.String System.Xml.Xsl.Runtime.StringConcat::s1
	String_t* ___s1_0;
	// System.String System.Xml.Xsl.Runtime.StringConcat::s2
	String_t* ___s2_1;
	// System.String System.Xml.Xsl.Runtime.StringConcat::s3
	String_t* ___s3_2;
	// System.String System.Xml.Xsl.Runtime.StringConcat::s4
	String_t* ___s4_3;
	// System.String System.Xml.Xsl.Runtime.StringConcat::delimiter
	String_t* ___delimiter_4;
	// System.Collections.Generic.List`1<System.String> System.Xml.Xsl.Runtime.StringConcat::strList
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___strList_5;
	// System.Int32 System.Xml.Xsl.Runtime.StringConcat::idxStr
	int32_t ___idxStr_6;

public:
	inline static int32_t get_offset_of_s1_0() { return static_cast<int32_t>(offsetof(StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43, ___s1_0)); }
	inline String_t* get_s1_0() const { return ___s1_0; }
	inline String_t** get_address_of_s1_0() { return &___s1_0; }
	inline void set_s1_0(String_t* value)
	{
		___s1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s1_0), (void*)value);
	}

	inline static int32_t get_offset_of_s2_1() { return static_cast<int32_t>(offsetof(StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43, ___s2_1)); }
	inline String_t* get_s2_1() const { return ___s2_1; }
	inline String_t** get_address_of_s2_1() { return &___s2_1; }
	inline void set_s2_1(String_t* value)
	{
		___s2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s2_1), (void*)value);
	}

	inline static int32_t get_offset_of_s3_2() { return static_cast<int32_t>(offsetof(StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43, ___s3_2)); }
	inline String_t* get_s3_2() const { return ___s3_2; }
	inline String_t** get_address_of_s3_2() { return &___s3_2; }
	inline void set_s3_2(String_t* value)
	{
		___s3_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s3_2), (void*)value);
	}

	inline static int32_t get_offset_of_s4_3() { return static_cast<int32_t>(offsetof(StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43, ___s4_3)); }
	inline String_t* get_s4_3() const { return ___s4_3; }
	inline String_t** get_address_of_s4_3() { return &___s4_3; }
	inline void set_s4_3(String_t* value)
	{
		___s4_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s4_3), (void*)value);
	}

	inline static int32_t get_offset_of_delimiter_4() { return static_cast<int32_t>(offsetof(StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43, ___delimiter_4)); }
	inline String_t* get_delimiter_4() const { return ___delimiter_4; }
	inline String_t** get_address_of_delimiter_4() { return &___delimiter_4; }
	inline void set_delimiter_4(String_t* value)
	{
		___delimiter_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delimiter_4), (void*)value);
	}

	inline static int32_t get_offset_of_strList_5() { return static_cast<int32_t>(offsetof(StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43, ___strList_5)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_strList_5() const { return ___strList_5; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_strList_5() { return &___strList_5; }
	inline void set_strList_5(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___strList_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___strList_5), (void*)value);
	}

	inline static int32_t get_offset_of_idxStr_6() { return static_cast<int32_t>(offsetof(StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43, ___idxStr_6)); }
	inline int32_t get_idxStr_6() const { return ___idxStr_6; }
	inline int32_t* get_address_of_idxStr_6() { return &___idxStr_6; }
	inline void set_idxStr_6(int32_t value)
	{
		___idxStr_6 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Xml.Xsl.Runtime.StringConcat
struct StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43_marshaled_pinvoke
{
	char* ___s1_0;
	char* ___s2_1;
	char* ___s3_2;
	char* ___s4_3;
	char* ___delimiter_4;
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___strList_5;
	int32_t ___idxStr_6;
};
// Native definition for COM marshalling of System.Xml.Xsl.Runtime.StringConcat
struct StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43_marshaled_com
{
	Il2CppChar* ___s1_0;
	Il2CppChar* ___s2_1;
	Il2CppChar* ___s3_2;
	Il2CppChar* ___s4_3;
	Il2CppChar* ___delimiter_4;
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___strList_5;
	int32_t ___idxStr_6;
};

// System.Xml.XsdValidatingReader_ValidatingReaderState
struct  ValidatingReaderState_tC8CD733F0A228AA8345EEB6CC764A4F08AC0D2CE 
{
public:
	// System.Int32 System.Xml.XsdValidatingReader_ValidatingReaderState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ValidatingReaderState_tC8CD733F0A228AA8345EEB6CC764A4F08AC0D2CE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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


// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* List_1_ToArray_m801D4DEF3587F60F463F04EEABE5CBE711FE5612_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mEE468B81D8E7C140F567D10FF7F5894A50EEEA57_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// System.Void System.Xml.Xsl.Runtime.StringConcat::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringConcat_Clear_m03C1710FADCD2580A01A47B92B406938564CF681 (StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43 * __this, const RuntimeMethod* method);
// System.Int32 System.Xml.Xsl.Runtime.StringConcat::get_Count()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t StringConcat_get_Count_mD3F81BDE90FED9E737C6ECE967F5D7904FB73184_inline (StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* List_1_ToArray_m9DD19D800AE6D84ED0729D5D97CAF84DF317DD38 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1_ToArray_m801D4DEF3587F60F463F04EEABE5CBE711FE5612_gshared)(__this, method);
}
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___values0, const RuntimeMethod* method);
// System.String System.Xml.Xsl.Runtime.StringConcat::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringConcat_GetResult_m02B84D711FF4363F045D30164A554C9CE876345C (StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_inline (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Int32)
inline void List_1__ctor_m82C4D0710B1BD00E77EFC7B8B55F1CD0C02A5377 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, int32_t, const RuntimeMethod*))List_1__ctor_mEE468B81D8E7C140F567D10FF7F5894A50EEEA57_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_mA348FA1140766465189459D25B01EB179001DE83 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, String_t*, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void System.Xml.Xsl.Runtime.StringConcat::ConcatNoDelimiter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringConcat_ConcatNoDelimiter_m3C33183D3518F25FAEA2919B7C2EA8A10C03070E (StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43 * __this, String_t* ___s0, const RuntimeMethod* method);
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
// Conversion methods for marshalling of: System.Xml.Xsl.Runtime.StringConcat
IL2CPP_EXTERN_C void StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43_marshal_pinvoke(const StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43& unmarshaled, StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43_marshaled_pinvoke& marshaled)
{
	Exception_t* ___strList_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'strList' of type 'StringConcat'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___strList_5Exception, NULL);
}
IL2CPP_EXTERN_C void StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43_marshal_pinvoke_back(const StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43_marshaled_pinvoke& marshaled, StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43& unmarshaled)
{
	Exception_t* ___strList_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'strList' of type 'StringConcat'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___strList_5Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Xml.Xsl.Runtime.StringConcat
IL2CPP_EXTERN_C void StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43_marshal_pinvoke_cleanup(StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Xml.Xsl.Runtime.StringConcat
IL2CPP_EXTERN_C void StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43_marshal_com(const StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43& unmarshaled, StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43_marshaled_com& marshaled)
{
	Exception_t* ___strList_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'strList' of type 'StringConcat'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___strList_5Exception, NULL);
}
IL2CPP_EXTERN_C void StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43_marshal_com_back(const StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43_marshaled_com& marshaled, StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43& unmarshaled)
{
	Exception_t* ___strList_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'strList' of type 'StringConcat'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___strList_5Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Xml.Xsl.Runtime.StringConcat
IL2CPP_EXTERN_C void StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43_marshal_com_cleanup(StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43_marshaled_com& marshaled)
{
}
// System.Void System.Xml.Xsl.Runtime.StringConcat::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringConcat_Clear_m03C1710FADCD2580A01A47B92B406938564CF681 (StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43 * __this, const RuntimeMethod* method)
{
	{
		__this->set_idxStr_6(0);
		__this->set_delimiter_4((String_t*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StringConcat_Clear_m03C1710FADCD2580A01A47B92B406938564CF681_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43 * _thisAdjusted = reinterpret_cast<StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43 *>(__this + _offset);
	StringConcat_Clear_m03C1710FADCD2580A01A47B92B406938564CF681(_thisAdjusted, method);
}
// System.Int32 System.Xml.Xsl.Runtime.StringConcat::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringConcat_get_Count_mD3F81BDE90FED9E737C6ECE967F5D7904FB73184 (StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_idxStr_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t StringConcat_get_Count_mD3F81BDE90FED9E737C6ECE967F5D7904FB73184_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43 * _thisAdjusted = reinterpret_cast<StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43 *>(__this + _offset);
	return StringConcat_get_Count_mD3F81BDE90FED9E737C6ECE967F5D7904FB73184_inline(_thisAdjusted, method);
}
// System.String System.Xml.Xsl.Runtime.StringConcat::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringConcat_GetResult_m02B84D711FF4363F045D30164A554C9CE876345C (StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringConcat_GetResult_m02B84D711FF4363F045D30164A554C9CE876345C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_idxStr_6();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0023;
			}
			case 1:
			{
				goto IL_0029;
			}
			case 2:
			{
				goto IL_0030;
			}
			case 3:
			{
				goto IL_0042;
			}
			case 4:
			{
				goto IL_005a;
			}
		}
	}
	{
		goto IL_0078;
	}

IL_0023:
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_2;
	}

IL_0029:
	{
		String_t* L_3 = __this->get_s1_0();
		return L_3;
	}

IL_0030:
	{
		String_t* L_4 = __this->get_s1_0();
		String_t* L_5 = __this->get_s2_1();
		String_t* L_6 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0042:
	{
		String_t* L_7 = __this->get_s1_0();
		String_t* L_8 = __this->get_s2_1();
		String_t* L_9 = __this->get_s3_2();
		String_t* L_10 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_7, L_8, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_005a:
	{
		String_t* L_11 = __this->get_s1_0();
		String_t* L_12 = __this->get_s2_1();
		String_t* L_13 = __this->get_s3_2();
		String_t* L_14 = __this->get_s4_3();
		String_t* L_15 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(L_11, L_12, L_13, L_14, /*hidden argument*/NULL);
		return L_15;
	}

IL_0078:
	{
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_16 = __this->get_strList_5();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_17 = List_1_ToArray_m9DD19D800AE6D84ED0729D5D97CAF84DF317DD38(L_16, /*hidden argument*/List_1_ToArray_m9DD19D800AE6D84ED0729D5D97CAF84DF317DD38_RuntimeMethod_var);
		String_t* L_18 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_17, /*hidden argument*/NULL);
		return L_18;
	}
}
IL2CPP_EXTERN_C  String_t* StringConcat_GetResult_m02B84D711FF4363F045D30164A554C9CE876345C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43 * _thisAdjusted = reinterpret_cast<StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43 *>(__this + _offset);
	return StringConcat_GetResult_m02B84D711FF4363F045D30164A554C9CE876345C(_thisAdjusted, method);
}
// System.Void System.Xml.Xsl.Runtime.StringConcat::ConcatNoDelimiter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringConcat_ConcatNoDelimiter_m3C33183D3518F25FAEA2919B7C2EA8A10C03070E (StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringConcat_ConcatNoDelimiter_m3C33183D3518F25FAEA2919B7C2EA8A10C03070E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * V_2 = NULL;
	int32_t G_B9_0 = 0;
	{
		int32_t L_0 = __this->get_idxStr_6();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0023;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_0035;
			}
			case 3:
			{
				goto IL_003e;
			}
			case 4:
			{
				goto IL_0047;
			}
		}
	}
	{
		goto IL_009c;
	}

IL_0023:
	{
		String_t* L_2 = ___s0;
		__this->set_s1_0(L_2);
		goto IL_00a8;
	}

IL_002c:
	{
		String_t* L_3 = ___s0;
		__this->set_s2_1(L_3);
		goto IL_00a8;
	}

IL_0035:
	{
		String_t* L_4 = ___s0;
		__this->set_s3_2(L_4);
		goto IL_00a8;
	}

IL_003e:
	{
		String_t* L_5 = ___s0;
		__this->set_s4_3(L_5);
		goto IL_00a8;
	}

IL_0047:
	{
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_6 = __this->get_strList_5();
		if (!L_6)
		{
			goto IL_005c;
		}
	}
	{
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_7 = __this->get_strList_5();
		int32_t L_8 = List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_inline(L_7, /*hidden argument*/List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_RuntimeMethod_var);
		G_B9_0 = L_8;
		goto IL_005d;
	}

IL_005c:
	{
		G_B9_0 = 8;
	}

IL_005d:
	{
		V_1 = G_B9_0;
		int32_t L_9 = V_1;
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_10 = (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *)il2cpp_codegen_object_new(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var);
		List_1__ctor_m82C4D0710B1BD00E77EFC7B8B55F1CD0C02A5377(L_10, L_9, /*hidden argument*/List_1__ctor_m82C4D0710B1BD00E77EFC7B8B55F1CD0C02A5377_RuntimeMethod_var);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_11 = L_10;
		V_2 = L_11;
		__this->set_strList_5(L_11);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_12 = V_2;
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_13 = L_12;
		String_t* L_14 = __this->get_s1_0();
		List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_13, L_14, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_15 = L_13;
		String_t* L_16 = __this->get_s2_1();
		List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_15, L_16, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_17 = L_15;
		String_t* L_18 = __this->get_s3_2();
		List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_17, L_18, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
		String_t* L_19 = __this->get_s4_3();
		List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_17, L_19, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
	}

IL_009c:
	{
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_20 = __this->get_strList_5();
		String_t* L_21 = ___s0;
		List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_20, L_21, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
	}

IL_00a8:
	{
		int32_t L_22 = __this->get_idxStr_6();
		__this->set_idxStr_6(((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1)));
		return;
	}
}
IL2CPP_EXTERN_C  void StringConcat_ConcatNoDelimiter_m3C33183D3518F25FAEA2919B7C2EA8A10C03070E_AdjustorThunk (RuntimeObject * __this, String_t* ___s0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43 * _thisAdjusted = reinterpret_cast<StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43 *>(__this + _offset);
	StringConcat_ConcatNoDelimiter_m3C33183D3518F25FAEA2919B7C2EA8A10C03070E(_thisAdjusted, ___s0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t StringConcat_get_Count_mD3F81BDE90FED9E737C6ECE967F5D7904FB73184_inline (StringConcat_t506391CC6FC326F2114A013043BA36C3066B5C43 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_idxStr_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
