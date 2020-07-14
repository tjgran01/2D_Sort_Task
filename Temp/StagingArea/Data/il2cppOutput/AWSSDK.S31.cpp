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

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// Amazon.Internal.IRegionEndpointProvider
struct IRegionEndpointProvider_tD4ACEEAE478CBB966038B770050617C00451162A;
// Amazon.RegionEndpoint
struct RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548;
// Amazon.Runtime.AWSCredentials
struct AWSCredentials_tEAA1FCADAF73EBE1DD61967CAC5AA436262D7948;
// Amazon.Runtime.ImmutableCredentials
struct ImmutableCredentials_tCD6CA6B5DF58E461FA5BC0CE8160248EFA24DBFE;
// Amazon.Runtime.Internal.Util.LruCache`2<System.Object,System.Object>
struct LruCache_2_tCD8FF07EC3D0E7CB16A6432E4E87573751FC2B4C;
// Amazon.Runtime.Internal.Util.LruCache`2<System.String,Amazon.RegionEndpoint>
struct LruCache_2_t1C9BE3EF059C467F8BA7871B870BB16DCC8F7FE3;
// Amazon.Runtime.Internal.Util.LruList`2<System.String,Amazon.RegionEndpoint>
struct LruList_2_t33CEB25482883CA74392A6740407C23297AB7A9A;
// Amazon.S3.Util.S3PostUploadSignedPolicy
struct S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C;
// Amazon.Util.CryptoUtilFactory/CryptoUtil
struct CryptoUtil_tA8CBEA6142A854AA438F40328BBE11330DB72AB9;
// Amazon.Util.ICryptoUtil
struct ICryptoUtil_tA9A8C422236D7AEA4FA0FC8D7498CDE269DE2D1B;
// Amazon.Util.Internal.ConfigurationElement
struct ConfigurationElement_tA254FE9C962BC7772B2FE9B97B478E24A4480DEE;
// Amazon.Util.Internal.ElementInformation
struct ElementInformation_tB9EF0F80428A2665011FE7F5469623439564BD50;
// Amazon.V4ClientSection
struct V4ClientSection_t2C28891A824A3E15AF6467DB4841A5411BE080C7;
// Amazon.V4ClientSectionRoot
struct V4ClientSectionRoot_t7503957BFD346A70AF90C1F682CCA04AAA857C62;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_tC73654392B284B89334464107B696C9BD89776D9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43;
// System.Collections.Generic.Dictionary`2<Amazon.RegionEndpoint,Amazon.RegionEndpoint>
struct Dictionary_2_t12A9D09C05CE2A458CBF53003864C70F1B7E8425;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,Amazon.RegionEndpoint>
struct Dictionary_2_t6EEE38CCDD80854864508B341890E4062953A899;
// System.Collections.Generic.Dictionary`2<System.String,Amazon.Runtime.Internal.Util.LruListItem`2<System.String,Amazon.RegionEndpoint>>
struct Dictionary_2_tB7B186ABE214C8C23B5CBE04C613191ED2A29C7E;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC;
// System.Collections.Generic.HashSet`1/Slot<System.String>[]
struct SlotU5BU5D_t53602D6A0A2A8B3DB893B552E437E8C6321C5039;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t725419BA457D845928B505ACE877FF46BC71E897;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E;
// System.Collections.Generic.IDictionary`2<System.String,ThirdParty.Json.LitJson.JsonData>
struct IDictionary_2_tAD698F1E63F21B01A7FAE2B52673675AAF81C27B;
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement>
struct IEnumerable_1_t7CE0C1128FF206142728C6F2878581A28330D757;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,ThirdParty.Json.LitJson.JsonData>>
struct IList_1_t8F25CE9B4111E62BCA1D54DA0CD81FEE67F5C996;
// System.Collections.Generic.IList`1<ThirdParty.Json.LitJson.JsonData>
struct IList_1_tDEAC0569CEFF9BC1D5A071526986E989F072E91D;
// System.Collections.Generic.Stack`1<ThirdParty.Json.LitJson.JsonToken>
struct Stack_1_t46C2E23963A1A3EA7FE0203CFBC57E3BE215701A;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Globalization.Calendar
struct Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB;
// System.Globalization.CompareInfo
struct CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1;
// System.Globalization.CultureData
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8;
// System.Globalization.TextInfo
struct TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8;
// System.IFormatProvider
struct IFormatProvider_t4247E13AE2D97A079B88D594B7ABABF313259901;
// System.IO.TextReader
struct TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t65659695B16C0BBF05707BF45191A97DC156D6BA;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.DecoderFallback
struct DecoderFallback_t128445EB7676870485230893338EF044F6B72F60;
// System.Text.EncoderFallback
struct EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// System.Xml.Linq.XAttribute
struct XAttribute_tE59FB05CB3017A75CD81C84F5E4FE613B8A8F015;
// System.Xml.Linq.XContainer
struct XContainer_t17E75C21493AAC7D12D6159A3A8C5308B3DBC599;
// System.Xml.Linq.XElement
struct XElement_t19F18C253C1E4E22F010C470A5181AB7BD0B5E95;
// System.Xml.Linq.XName
struct XName_t09FB17CAE73454416CC2CC694E68A9AFFD3C8F7A;
// ThirdParty.Json.LitJson.JsonData
struct JsonData_tB6316B120F536B8E6E0553E698129B2957074324;
// ThirdParty.Json.LitJson.JsonReader
struct JsonReader_t55C47D33ADAD0247A02AC80480A05B975411C8BE;
// ThirdParty.Json.LitJson.Lexer
struct Lexer_t21B54E1E8FB744EA8586CC4AF3D901AC7255BBED;

IL2CPP_EXTERN_C RuntimeClass* AWS4Signer_t9B2C633B8EDFA9EB133315E443940526345CE60E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AWSConfigs_tB1B5F30628E759145BD99A9C1E8A96E950C65A49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AWSSDKUtils_t618E3271B5C2C517127C9A36ECFEB4F0F24891D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BucketRegionDetector_tC2ECE2BEFA6DDAA2D4740E3C70A2BC884B07C836_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CryptoUtilFactory_t26A78D19624EC9BBBC7C5E91A2ED5DC501E9A7D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICryptoUtil_tA9A8C422236D7AEA4FA0FC8D7498CDE269DE2D1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonData_tB6316B120F536B8E6E0553E698129B2957074324_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonMapper_t76FE6C1EEFC89324851C4258A9440A5E51FBF4C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonReader_t55C47D33ADAD0247A02AC80480A05B975411C8BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LruCache_2_t1C9BE3EF059C467F8BA7871B870BB16DCC8F7FE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0BEE937E63DA9067663A47F1E28205E55D8C4B8A;
IL2CPP_EXTERN_C String_t* _stringLiteral1B6453892473A467D07372D45EB05ABC2031647A;
IL2CPP_EXTERN_C String_t* _stringLiteral26606ED3228857A57CF9DEC00A7E9C3D8400A879;
IL2CPP_EXTERN_C String_t* _stringLiteral2B5E4E69E2190039068F4719A0D4C6D244E81711;
IL2CPP_EXTERN_C String_t* _stringLiteral2F32BE1DC74166373C988EC03B0BD86F0A576919;
IL2CPP_EXTERN_C String_t* _stringLiteral310273666E298331311EC06C5B6740E8C16A1D06;
IL2CPP_EXTERN_C String_t* _stringLiteral324587D607818379B89B79135828F4AF9ADDD68F;
IL2CPP_EXTERN_C String_t* _stringLiteral3463148FD1D9A82845A3A65FE133A546C10C92B4;
IL2CPP_EXTERN_C String_t* _stringLiteral390AAD9020178F336D265617078000BEEFE0331C;
IL2CPP_EXTERN_C String_t* _stringLiteral3A9F0959A976A18F57E7121E6A41A253408CA0F9;
IL2CPP_EXTERN_C String_t* _stringLiteral3CED814DF66676AAF2883370BAF034A468B42F83;
IL2CPP_EXTERN_C String_t* _stringLiteral40A521DE757837EA103BB1E535B1572393987C44;
IL2CPP_EXTERN_C String_t* _stringLiteral4B624B421A85043D04DDF81E8CB3841C906860EE;
IL2CPP_EXTERN_C String_t* _stringLiteral5D20CF90606A1D9F08B7012BCD7E3C5618209E0F;
IL2CPP_EXTERN_C String_t* _stringLiteral5F1A8821417C95759C077F2EAFA390B023FDA953;
IL2CPP_EXTERN_C String_t* _stringLiteral77D12B97BA61FFCCB079E0DD2EF6809C1E957255;
IL2CPP_EXTERN_C String_t* _stringLiteral7833D95DCD0F011083FC90FFD5749493511F0728;
IL2CPP_EXTERN_C String_t* _stringLiteral87B52B98F24C652BBC3BA57077055A98FD08ED9C;
IL2CPP_EXTERN_C String_t* _stringLiteral8D3F0CD0CE5F86A528C4339DF19F44AA24899B91;
IL2CPP_EXTERN_C String_t* _stringLiteral8DC13DA4362FE472761B20B1440AD570818A3980;
IL2CPP_EXTERN_C String_t* _stringLiteral8EB3489FD48EA99BF65176CAE8DC812855D5293E;
IL2CPP_EXTERN_C String_t* _stringLiteral8FA413201419DEB7F49BF9FE05BD37F0DB428683;
IL2CPP_EXTERN_C String_t* _stringLiteral99FD65892E57B41835F4138794A9F31AD84F61FE;
IL2CPP_EXTERN_C String_t* _stringLiteral9F00FAD98BADC1330E637A0A015D704113498420;
IL2CPP_EXTERN_C String_t* _stringLiteralA62F2225BF70BFACCBC7F1EF2A397836717377DE;
IL2CPP_EXTERN_C String_t* _stringLiteralAAFFC0639435B7CDBAA1C19941E757D5D1B7AC5E;
IL2CPP_EXTERN_C String_t* _stringLiteralAECF0292DA85CB2048D8B648567127D024D4074F;
IL2CPP_EXTERN_C String_t* _stringLiteralB7CE958A3C8C22644890F05018CBD793598CC33E;
IL2CPP_EXTERN_C String_t* _stringLiteralB92FC054A02D595703E497C743CBF5289FB906CA;
IL2CPP_EXTERN_C String_t* _stringLiteralBB9CF1418089B3356038FDD24FCBDC9D1A7C42A5;
IL2CPP_EXTERN_C String_t* _stringLiteralBEA9D742D9BE99CDDE56213FEDF288656933E59F;
IL2CPP_EXTERN_C String_t* _stringLiteralBFA67576E89A9AA695262B98618099157BC834B8;
IL2CPP_EXTERN_C String_t* _stringLiteralC14E3DDE339A29A416ACE2E144201E8A61988686;
IL2CPP_EXTERN_C String_t* _stringLiteralC336FCEC997DB68BA1A16FF95D4B5A6B5F133C3B;
IL2CPP_EXTERN_C String_t* _stringLiteralD79D841BB2589F904EB872C10FEDD2E3E5DAED74;
IL2CPP_EXTERN_C String_t* _stringLiteralD7E6E1E37BA798B5098FEF9609F7016F5F76DB84;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA4B9237BACCCDF19C0760CAB7AEC4A8359010B0;
IL2CPP_EXTERN_C String_t* _stringLiteralDD33A084BA223DD231B0AA962F77A5920017BC8B;
IL2CPP_EXTERN_C String_t* _stringLiteralDE3CFFC7AB338619E2DE29993716CB338EA48D2B;
IL2CPP_EXTERN_C String_t* _stringLiteralF8EB525D26E1BFCCF25865E02EEF17703B609C66;
IL2CPP_EXTERN_C String_t* _stringLiteralF9913041C112CA1B11E7C292F1F89F50EF2313ED;
IL2CPP_EXTERN_C String_t* _stringLiteralFAB5F62863CDEDC5143552C9D37D6679E3304F7A;
IL2CPP_EXTERN_C String_t* _stringLiteralFE2C820370CCB0238D84E57AAB9BB41E7DFFDB2F;
IL2CPP_EXTERN_C String_t* _stringLiteralFE3C6138E95A1AF273E3E97B63557462B4AD3926;
IL2CPP_EXTERN_C const RuntimeMethod* AWSConfigs_GetObject_TisV4ClientSection_t2C28891A824A3E15AF6467DB4841A5411BE080C7_mC8BED8EDC9D5CD3B27E96F97F96CC4977DB0E2F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m8E1E97EC586BFF6D3F84BB3429DF6198853F25AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m3378B4792B81EF81397CB9D9A761BD7149BD27F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m16C0E963A012498CD27422B463DB327BA4C7A321_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m6E6A22A8620F5A5582BB67E367BE5086D7D895A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mBEC9B470213860581893E0F197CAAE657B8B6C69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m73EFAE0E6A574BC59B1B8977088B4F5A802176F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m99068A46E42F05504E434B1D6763629F4D94B87E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m1960AEAA9CE1FE1F69994434FFEAE113BD3AB3C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mEAF4B15DEEAC6EB29683A5C6569F0F50B4DEBDA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LruCache_2__ctor_m6C260E9D463CEB49EC706B6DA38D19DA2228D7A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t BucketRegionDetector__cctor_m402A38B79E4B0D132DA44486EFB7484BEBC277C0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BucketRegionDetector_get_BucketRegionCache_m2A167378EA2B6EF273DB2D7CE6D25D9E83DBA038_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BucketRegionDetector_set_BucketRegionCache_m68DE7E004750168841DD06DB3DEFF53370ACFEC7AWSSDK_S31_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BucketRegionDetector_set_BucketRegionCache_m68DE7E004750168841DD06DB3DEFF53370ACFEC7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CryptoUtilFactory_get_CryptoInstance_m2B76147B49F3163473A935FD83F410162A21C695AWSSDK_S31_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t S3Constants__cctor_mAC1A2A1A077F76E473F96AA414486DB0B75FD0AB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t S3PostUploadSignedPolicy_GetSignedPolicyV4_mA368E54BFAABC28FFA2007F917CD262BB8734E3C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t S3PostUploadSignedPolicy_GetSignedPolicy_m83202FEBF628A06D0B32BE6AAF25193D43BF3C1F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t S3PostUploadSignedPolicy__cctor_m049EE43975911875A407AC9D9E74668D91369D48_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t S3PostUploadSignedPolicy_addConditionsToPolicy_mC131808DC38F695CE88C2B0C902CEB21B347DF43_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t S3PostUploadSignedPolicy_addTokenToPolicy_m30EA22CC5B378ED9B357975AE6DD8A23C9F9BC01_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t V4ClientSectionRoot__ctor_m6C9E854B993464E859228C8C0DCA63935C16C350_MetadataUsageId;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Amazon.RegionEndpoint
struct  RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548  : public RuntimeObject
{
public:
	// System.String Amazon.RegionEndpoint::<SystemName>k__BackingField
	String_t* ___U3CSystemNameU3Ek__BackingField_29;
	// System.String Amazon.RegionEndpoint::<DisplayName>k__BackingField
	String_t* ___U3CDisplayNameU3Ek__BackingField_30;

public:
	inline static int32_t get_offset_of_U3CSystemNameU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548, ___U3CSystemNameU3Ek__BackingField_29)); }
	inline String_t* get_U3CSystemNameU3Ek__BackingField_29() const { return ___U3CSystemNameU3Ek__BackingField_29; }
	inline String_t** get_address_of_U3CSystemNameU3Ek__BackingField_29() { return &___U3CSystemNameU3Ek__BackingField_29; }
	inline void set_U3CSystemNameU3Ek__BackingField_29(String_t* value)
	{
		___U3CSystemNameU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSystemNameU3Ek__BackingField_29), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDisplayNameU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548, ___U3CDisplayNameU3Ek__BackingField_30)); }
	inline String_t* get_U3CDisplayNameU3Ek__BackingField_30() const { return ___U3CDisplayNameU3Ek__BackingField_30; }
	inline String_t** get_address_of_U3CDisplayNameU3Ek__BackingField_30() { return &___U3CDisplayNameU3Ek__BackingField_30; }
	inline void set_U3CDisplayNameU3Ek__BackingField_30(String_t* value)
	{
		___U3CDisplayNameU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDisplayNameU3Ek__BackingField_30), (void*)value);
	}
};

struct RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Amazon.RegionEndpoint> Amazon.RegionEndpoint::_hashBySystemName
	Dictionary_2_t6EEE38CCDD80854864508B341890E4062953A899 * ____hashBySystemName_0;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::USEast1
	RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * ___USEast1_1;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::USEast1Regional
	RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * ___USEast1Regional_2;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::USEast2
	RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * ___USEast2_3;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::USWest1
	RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * ___USWest1_4;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::USWest2
	RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * ___USWest2_5;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::EUNorth1
	RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * ___EUNorth1_6;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::EUWest1
	RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * ___EUWest1_7;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::EUWest2
	RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * ___EUWest2_8;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::EUWest3
	RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * ___EUWest3_9;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::EUCentral1
	RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * ___EUCentral1_10;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::EUSouth1
	RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * ___EUSouth1_11;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::APEast1
	RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * ___APEast1_12;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::APNortheast1
	RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * ___APNortheast1_13;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::APNortheast2
	RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * ___APNortheast2_14;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::APNortheast3
	RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * ___APNortheast3_15;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::APSouth1
	RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * ___APSouth1_16;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::APSoutheast1
	RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * ___APSoutheast1_17;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::APSoutheast2
	RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * ___APSoutheast2_18;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::SAEast1
	RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * ___SAEast1_19;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::USGovCloudEast1
	RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * ___USGovCloudEast1_20;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::USGovCloudWest1
	RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * ___USGovCloudWest1_21;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::CNNorth1
	RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * ___CNNorth1_22;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::CNNorthWest1
	RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * ___CNNorthWest1_23;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::CACentral1
	RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * ___CACentral1_24;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::MESouth1
	RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * ___MESouth1_25;
	// Amazon.RegionEndpoint Amazon.RegionEndpoint::AFSouth1
	RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * ___AFSouth1_26;
	// System.Collections.Generic.Dictionary`2<Amazon.RegionEndpoint,Amazon.RegionEndpoint> Amazon.RegionEndpoint::_hashRegionEndpointOverride
	Dictionary_2_t12A9D09C05CE2A458CBF53003864C70F1B7E8425 * ____hashRegionEndpointOverride_27;
	// Amazon.Internal.IRegionEndpointProvider Amazon.RegionEndpoint::_regionEndpointProvider
	RuntimeObject* ____regionEndpointProvider_28;

public:
	inline static int32_t get_offset_of__hashBySystemName_0() { return static_cast<int32_t>(offsetof(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548_StaticFields, ____hashBySystemName_0)); }
	inline Dictionary_2_t6EEE38CCDD80854864508B341890E4062953A899 * get__hashBySystemName_0() const { return ____hashBySystemName_0; }
	inline Dictionary_2_t6EEE38CCDD80854864508B341890E4062953A899 ** get_address_of__hashBySystemName_0() { return &____hashBySystemName_0; }
	inline void set__hashBySystemName_0(Dictionary_2_t6EEE38CCDD80854864508B341890E4062953A899 * value)
	{
		____hashBySystemName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____hashBySystemName_0), (void*)value);
	}

	inline static int32_t get_offset_of_USEast1_1() { return static_cast<int32_t>(offsetof(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548_StaticFields, ___USEast1_1)); }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * get_USEast1_1() const { return ___USEast1_1; }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 ** get_address_of_USEast1_1() { return &___USEast1_1; }
	inline void set_USEast1_1(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * value)
	{
		___USEast1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___USEast1_1), (void*)value);
	}

	inline static int32_t get_offset_of_USEast1Regional_2() { return static_cast<int32_t>(offsetof(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548_StaticFields, ___USEast1Regional_2)); }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * get_USEast1Regional_2() const { return ___USEast1Regional_2; }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 ** get_address_of_USEast1Regional_2() { return &___USEast1Regional_2; }
	inline void set_USEast1Regional_2(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * value)
	{
		___USEast1Regional_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___USEast1Regional_2), (void*)value);
	}

	inline static int32_t get_offset_of_USEast2_3() { return static_cast<int32_t>(offsetof(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548_StaticFields, ___USEast2_3)); }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * get_USEast2_3() const { return ___USEast2_3; }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 ** get_address_of_USEast2_3() { return &___USEast2_3; }
	inline void set_USEast2_3(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * value)
	{
		___USEast2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___USEast2_3), (void*)value);
	}

	inline static int32_t get_offset_of_USWest1_4() { return static_cast<int32_t>(offsetof(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548_StaticFields, ___USWest1_4)); }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * get_USWest1_4() const { return ___USWest1_4; }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 ** get_address_of_USWest1_4() { return &___USWest1_4; }
	inline void set_USWest1_4(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * value)
	{
		___USWest1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___USWest1_4), (void*)value);
	}

	inline static int32_t get_offset_of_USWest2_5() { return static_cast<int32_t>(offsetof(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548_StaticFields, ___USWest2_5)); }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * get_USWest2_5() const { return ___USWest2_5; }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 ** get_address_of_USWest2_5() { return &___USWest2_5; }
	inline void set_USWest2_5(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * value)
	{
		___USWest2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___USWest2_5), (void*)value);
	}

	inline static int32_t get_offset_of_EUNorth1_6() { return static_cast<int32_t>(offsetof(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548_StaticFields, ___EUNorth1_6)); }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * get_EUNorth1_6() const { return ___EUNorth1_6; }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 ** get_address_of_EUNorth1_6() { return &___EUNorth1_6; }
	inline void set_EUNorth1_6(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * value)
	{
		___EUNorth1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EUNorth1_6), (void*)value);
	}

	inline static int32_t get_offset_of_EUWest1_7() { return static_cast<int32_t>(offsetof(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548_StaticFields, ___EUWest1_7)); }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * get_EUWest1_7() const { return ___EUWest1_7; }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 ** get_address_of_EUWest1_7() { return &___EUWest1_7; }
	inline void set_EUWest1_7(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * value)
	{
		___EUWest1_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EUWest1_7), (void*)value);
	}

	inline static int32_t get_offset_of_EUWest2_8() { return static_cast<int32_t>(offsetof(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548_StaticFields, ___EUWest2_8)); }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * get_EUWest2_8() const { return ___EUWest2_8; }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 ** get_address_of_EUWest2_8() { return &___EUWest2_8; }
	inline void set_EUWest2_8(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * value)
	{
		___EUWest2_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EUWest2_8), (void*)value);
	}

	inline static int32_t get_offset_of_EUWest3_9() { return static_cast<int32_t>(offsetof(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548_StaticFields, ___EUWest3_9)); }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * get_EUWest3_9() const { return ___EUWest3_9; }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 ** get_address_of_EUWest3_9() { return &___EUWest3_9; }
	inline void set_EUWest3_9(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * value)
	{
		___EUWest3_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EUWest3_9), (void*)value);
	}

	inline static int32_t get_offset_of_EUCentral1_10() { return static_cast<int32_t>(offsetof(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548_StaticFields, ___EUCentral1_10)); }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * get_EUCentral1_10() const { return ___EUCentral1_10; }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 ** get_address_of_EUCentral1_10() { return &___EUCentral1_10; }
	inline void set_EUCentral1_10(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * value)
	{
		___EUCentral1_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EUCentral1_10), (void*)value);
	}

	inline static int32_t get_offset_of_EUSouth1_11() { return static_cast<int32_t>(offsetof(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548_StaticFields, ___EUSouth1_11)); }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * get_EUSouth1_11() const { return ___EUSouth1_11; }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 ** get_address_of_EUSouth1_11() { return &___EUSouth1_11; }
	inline void set_EUSouth1_11(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * value)
	{
		___EUSouth1_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EUSouth1_11), (void*)value);
	}

	inline static int32_t get_offset_of_APEast1_12() { return static_cast<int32_t>(offsetof(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548_StaticFields, ___APEast1_12)); }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * get_APEast1_12() const { return ___APEast1_12; }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 ** get_address_of_APEast1_12() { return &___APEast1_12; }
	inline void set_APEast1_12(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * value)
	{
		___APEast1_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___APEast1_12), (void*)value);
	}

	inline static int32_t get_offset_of_APNortheast1_13() { return static_cast<int32_t>(offsetof(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548_StaticFields, ___APNortheast1_13)); }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * get_APNortheast1_13() const { return ___APNortheast1_13; }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 ** get_address_of_APNortheast1_13() { return &___APNortheast1_13; }
	inline void set_APNortheast1_13(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * value)
	{
		___APNortheast1_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___APNortheast1_13), (void*)value);
	}

	inline static int32_t get_offset_of_APNortheast2_14() { return static_cast<int32_t>(offsetof(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548_StaticFields, ___APNortheast2_14)); }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * get_APNortheast2_14() const { return ___APNortheast2_14; }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 ** get_address_of_APNortheast2_14() { return &___APNortheast2_14; }
	inline void set_APNortheast2_14(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * value)
	{
		___APNortheast2_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___APNortheast2_14), (void*)value);
	}

	inline static int32_t get_offset_of_APNortheast3_15() { return static_cast<int32_t>(offsetof(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548_StaticFields, ___APNortheast3_15)); }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * get_APNortheast3_15() const { return ___APNortheast3_15; }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 ** get_address_of_APNortheast3_15() { return &___APNortheast3_15; }
	inline void set_APNortheast3_15(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * value)
	{
		___APNortheast3_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___APNortheast3_15), (void*)value);
	}

	inline static int32_t get_offset_of_APSouth1_16() { return static_cast<int32_t>(offsetof(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548_StaticFields, ___APSouth1_16)); }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * get_APSouth1_16() const { return ___APSouth1_16; }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 ** get_address_of_APSouth1_16() { return &___APSouth1_16; }
	inline void set_APSouth1_16(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * value)
	{
		___APSouth1_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___APSouth1_16), (void*)value);
	}

	inline static int32_t get_offset_of_APSoutheast1_17() { return static_cast<int32_t>(offsetof(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548_StaticFields, ___APSoutheast1_17)); }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * get_APSoutheast1_17() const { return ___APSoutheast1_17; }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 ** get_address_of_APSoutheast1_17() { return &___APSoutheast1_17; }
	inline void set_APSoutheast1_17(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * value)
	{
		___APSoutheast1_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___APSoutheast1_17), (void*)value);
	}

	inline static int32_t get_offset_of_APSoutheast2_18() { return static_cast<int32_t>(offsetof(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548_StaticFields, ___APSoutheast2_18)); }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * get_APSoutheast2_18() const { return ___APSoutheast2_18; }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 ** get_address_of_APSoutheast2_18() { return &___APSoutheast2_18; }
	inline void set_APSoutheast2_18(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * value)
	{
		___APSoutheast2_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___APSoutheast2_18), (void*)value);
	}

	inline static int32_t get_offset_of_SAEast1_19() { return static_cast<int32_t>(offsetof(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548_StaticFields, ___SAEast1_19)); }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * get_SAEast1_19() const { return ___SAEast1_19; }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 ** get_address_of_SAEast1_19() { return &___SAEast1_19; }
	inline void set_SAEast1_19(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * value)
	{
		___SAEast1_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SAEast1_19), (void*)value);
	}

	inline static int32_t get_offset_of_USGovCloudEast1_20() { return static_cast<int32_t>(offsetof(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548_StaticFields, ___USGovCloudEast1_20)); }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * get_USGovCloudEast1_20() const { return ___USGovCloudEast1_20; }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 ** get_address_of_USGovCloudEast1_20() { return &___USGovCloudEast1_20; }
	inline void set_USGovCloudEast1_20(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * value)
	{
		___USGovCloudEast1_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___USGovCloudEast1_20), (void*)value);
	}

	inline static int32_t get_offset_of_USGovCloudWest1_21() { return static_cast<int32_t>(offsetof(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548_StaticFields, ___USGovCloudWest1_21)); }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * get_USGovCloudWest1_21() const { return ___USGovCloudWest1_21; }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 ** get_address_of_USGovCloudWest1_21() { return &___USGovCloudWest1_21; }
	inline void set_USGovCloudWest1_21(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * value)
	{
		___USGovCloudWest1_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___USGovCloudWest1_21), (void*)value);
	}

	inline static int32_t get_offset_of_CNNorth1_22() { return static_cast<int32_t>(offsetof(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548_StaticFields, ___CNNorth1_22)); }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * get_CNNorth1_22() const { return ___CNNorth1_22; }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 ** get_address_of_CNNorth1_22() { return &___CNNorth1_22; }
	inline void set_CNNorth1_22(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * value)
	{
		___CNNorth1_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CNNorth1_22), (void*)value);
	}

	inline static int32_t get_offset_of_CNNorthWest1_23() { return static_cast<int32_t>(offsetof(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548_StaticFields, ___CNNorthWest1_23)); }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * get_CNNorthWest1_23() const { return ___CNNorthWest1_23; }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 ** get_address_of_CNNorthWest1_23() { return &___CNNorthWest1_23; }
	inline void set_CNNorthWest1_23(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * value)
	{
		___CNNorthWest1_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CNNorthWest1_23), (void*)value);
	}

	inline static int32_t get_offset_of_CACentral1_24() { return static_cast<int32_t>(offsetof(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548_StaticFields, ___CACentral1_24)); }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * get_CACentral1_24() const { return ___CACentral1_24; }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 ** get_address_of_CACentral1_24() { return &___CACentral1_24; }
	inline void set_CACentral1_24(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * value)
	{
		___CACentral1_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CACentral1_24), (void*)value);
	}

	inline static int32_t get_offset_of_MESouth1_25() { return static_cast<int32_t>(offsetof(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548_StaticFields, ___MESouth1_25)); }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * get_MESouth1_25() const { return ___MESouth1_25; }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 ** get_address_of_MESouth1_25() { return &___MESouth1_25; }
	inline void set_MESouth1_25(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * value)
	{
		___MESouth1_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MESouth1_25), (void*)value);
	}

	inline static int32_t get_offset_of_AFSouth1_26() { return static_cast<int32_t>(offsetof(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548_StaticFields, ___AFSouth1_26)); }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * get_AFSouth1_26() const { return ___AFSouth1_26; }
	inline RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 ** get_address_of_AFSouth1_26() { return &___AFSouth1_26; }
	inline void set_AFSouth1_26(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * value)
	{
		___AFSouth1_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AFSouth1_26), (void*)value);
	}

	inline static int32_t get_offset_of__hashRegionEndpointOverride_27() { return static_cast<int32_t>(offsetof(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548_StaticFields, ____hashRegionEndpointOverride_27)); }
	inline Dictionary_2_t12A9D09C05CE2A458CBF53003864C70F1B7E8425 * get__hashRegionEndpointOverride_27() const { return ____hashRegionEndpointOverride_27; }
	inline Dictionary_2_t12A9D09C05CE2A458CBF53003864C70F1B7E8425 ** get_address_of__hashRegionEndpointOverride_27() { return &____hashRegionEndpointOverride_27; }
	inline void set__hashRegionEndpointOverride_27(Dictionary_2_t12A9D09C05CE2A458CBF53003864C70F1B7E8425 * value)
	{
		____hashRegionEndpointOverride_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____hashRegionEndpointOverride_27), (void*)value);
	}

	inline static int32_t get_offset_of__regionEndpointProvider_28() { return static_cast<int32_t>(offsetof(RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548_StaticFields, ____regionEndpointProvider_28)); }
	inline RuntimeObject* get__regionEndpointProvider_28() const { return ____regionEndpointProvider_28; }
	inline RuntimeObject** get_address_of__regionEndpointProvider_28() { return &____regionEndpointProvider_28; }
	inline void set__regionEndpointProvider_28(RuntimeObject* value)
	{
		____regionEndpointProvider_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____regionEndpointProvider_28), (void*)value);
	}
};


// Amazon.Runtime.AWSCredentials
struct  AWSCredentials_tEAA1FCADAF73EBE1DD61967CAC5AA436262D7948  : public RuntimeObject
{
public:

public:
};


// Amazon.Runtime.ImmutableCredentials
struct  ImmutableCredentials_tCD6CA6B5DF58E461FA5BC0CE8160248EFA24DBFE  : public RuntimeObject
{
public:
	// System.String Amazon.Runtime.ImmutableCredentials::<AccessKey>k__BackingField
	String_t* ___U3CAccessKeyU3Ek__BackingField_0;
	// System.String Amazon.Runtime.ImmutableCredentials::<SecretKey>k__BackingField
	String_t* ___U3CSecretKeyU3Ek__BackingField_1;
	// System.String Amazon.Runtime.ImmutableCredentials::<Token>k__BackingField
	String_t* ___U3CTokenU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CAccessKeyU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ImmutableCredentials_tCD6CA6B5DF58E461FA5BC0CE8160248EFA24DBFE, ___U3CAccessKeyU3Ek__BackingField_0)); }
	inline String_t* get_U3CAccessKeyU3Ek__BackingField_0() const { return ___U3CAccessKeyU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CAccessKeyU3Ek__BackingField_0() { return &___U3CAccessKeyU3Ek__BackingField_0; }
	inline void set_U3CAccessKeyU3Ek__BackingField_0(String_t* value)
	{
		___U3CAccessKeyU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAccessKeyU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSecretKeyU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ImmutableCredentials_tCD6CA6B5DF58E461FA5BC0CE8160248EFA24DBFE, ___U3CSecretKeyU3Ek__BackingField_1)); }
	inline String_t* get_U3CSecretKeyU3Ek__BackingField_1() const { return ___U3CSecretKeyU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CSecretKeyU3Ek__BackingField_1() { return &___U3CSecretKeyU3Ek__BackingField_1; }
	inline void set_U3CSecretKeyU3Ek__BackingField_1(String_t* value)
	{
		___U3CSecretKeyU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSecretKeyU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTokenU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ImmutableCredentials_tCD6CA6B5DF58E461FA5BC0CE8160248EFA24DBFE, ___U3CTokenU3Ek__BackingField_2)); }
	inline String_t* get_U3CTokenU3Ek__BackingField_2() const { return ___U3CTokenU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CTokenU3Ek__BackingField_2() { return &___U3CTokenU3Ek__BackingField_2; }
	inline void set_U3CTokenU3Ek__BackingField_2(String_t* value)
	{
		___U3CTokenU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTokenU3Ek__BackingField_2), (void*)value);
	}
};


// Amazon.Runtime.Internal.Util.LruCache`2<System.String,Amazon.RegionEndpoint>
struct  LruCache_2_t1C9BE3EF059C467F8BA7871B870BB16DCC8F7FE3  : public RuntimeObject
{
public:
	// System.Object Amazon.Runtime.Internal.Util.LruCache`2::cacheLock
	RuntimeObject * ___cacheLock_0;
	// System.Collections.Generic.Dictionary`2<TKey,Amazon.Runtime.Internal.Util.LruListItem`2<TKey,TValue>> Amazon.Runtime.Internal.Util.LruCache`2::cache
	Dictionary_2_tB7B186ABE214C8C23B5CBE04C613191ED2A29C7E * ___cache_1;
	// Amazon.Runtime.Internal.Util.LruList`2<TKey,TValue> Amazon.Runtime.Internal.Util.LruCache`2::lruList
	LruList_2_t33CEB25482883CA74392A6740407C23297AB7A9A * ___lruList_2;
	// System.Int32 Amazon.Runtime.Internal.Util.LruCache`2::<MaxEntries>k__BackingField
	int32_t ___U3CMaxEntriesU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_cacheLock_0() { return static_cast<int32_t>(offsetof(LruCache_2_t1C9BE3EF059C467F8BA7871B870BB16DCC8F7FE3, ___cacheLock_0)); }
	inline RuntimeObject * get_cacheLock_0() const { return ___cacheLock_0; }
	inline RuntimeObject ** get_address_of_cacheLock_0() { return &___cacheLock_0; }
	inline void set_cacheLock_0(RuntimeObject * value)
	{
		___cacheLock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cacheLock_0), (void*)value);
	}

	inline static int32_t get_offset_of_cache_1() { return static_cast<int32_t>(offsetof(LruCache_2_t1C9BE3EF059C467F8BA7871B870BB16DCC8F7FE3, ___cache_1)); }
	inline Dictionary_2_tB7B186ABE214C8C23B5CBE04C613191ED2A29C7E * get_cache_1() const { return ___cache_1; }
	inline Dictionary_2_tB7B186ABE214C8C23B5CBE04C613191ED2A29C7E ** get_address_of_cache_1() { return &___cache_1; }
	inline void set_cache_1(Dictionary_2_tB7B186ABE214C8C23B5CBE04C613191ED2A29C7E * value)
	{
		___cache_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cache_1), (void*)value);
	}

	inline static int32_t get_offset_of_lruList_2() { return static_cast<int32_t>(offsetof(LruCache_2_t1C9BE3EF059C467F8BA7871B870BB16DCC8F7FE3, ___lruList_2)); }
	inline LruList_2_t33CEB25482883CA74392A6740407C23297AB7A9A * get_lruList_2() const { return ___lruList_2; }
	inline LruList_2_t33CEB25482883CA74392A6740407C23297AB7A9A ** get_address_of_lruList_2() { return &___lruList_2; }
	inline void set_lruList_2(LruList_2_t33CEB25482883CA74392A6740407C23297AB7A9A * value)
	{
		___lruList_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lruList_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMaxEntriesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(LruCache_2_t1C9BE3EF059C467F8BA7871B870BB16DCC8F7FE3, ___U3CMaxEntriesU3Ek__BackingField_3)); }
	inline int32_t get_U3CMaxEntriesU3Ek__BackingField_3() const { return ___U3CMaxEntriesU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CMaxEntriesU3Ek__BackingField_3() { return &___U3CMaxEntriesU3Ek__BackingField_3; }
	inline void set_U3CMaxEntriesU3Ek__BackingField_3(int32_t value)
	{
		___U3CMaxEntriesU3Ek__BackingField_3 = value;
	}
};


// Amazon.S3.Util.BucketRegionDetector
struct  BucketRegionDetector_tC2ECE2BEFA6DDAA2D4740E3C70A2BC884B07C836  : public RuntimeObject
{
public:

public:
};

struct BucketRegionDetector_tC2ECE2BEFA6DDAA2D4740E3C70A2BC884B07C836_StaticFields
{
public:
	// Amazon.Runtime.Internal.Util.LruCache`2<System.String,Amazon.RegionEndpoint> Amazon.S3.Util.BucketRegionDetector::<BucketRegionCache>k__BackingField
	LruCache_2_t1C9BE3EF059C467F8BA7871B870BB16DCC8F7FE3 * ___U3CBucketRegionCacheU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CBucketRegionCacheU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BucketRegionDetector_tC2ECE2BEFA6DDAA2D4740E3C70A2BC884B07C836_StaticFields, ___U3CBucketRegionCacheU3Ek__BackingField_0)); }
	inline LruCache_2_t1C9BE3EF059C467F8BA7871B870BB16DCC8F7FE3 * get_U3CBucketRegionCacheU3Ek__BackingField_0() const { return ___U3CBucketRegionCacheU3Ek__BackingField_0; }
	inline LruCache_2_t1C9BE3EF059C467F8BA7871B870BB16DCC8F7FE3 ** get_address_of_U3CBucketRegionCacheU3Ek__BackingField_0() { return &___U3CBucketRegionCacheU3Ek__BackingField_0; }
	inline void set_U3CBucketRegionCacheU3Ek__BackingField_0(LruCache_2_t1C9BE3EF059C467F8BA7871B870BB16DCC8F7FE3 * value)
	{
		___U3CBucketRegionCacheU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBucketRegionCacheU3Ek__BackingField_0), (void*)value);
	}
};


// Amazon.S3.Util.S3Constants
struct  S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C  : public RuntimeObject
{
public:

public:
};

struct S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields
{
public:
	// System.Int64 Amazon.S3.Util.S3Constants::MinPartSize
	int64_t ___MinPartSize_0;
	// System.String Amazon.S3.Util.S3Constants::PostFormDataObjectKey
	String_t* ___PostFormDataObjectKey_1;
	// System.String Amazon.S3.Util.S3Constants::PostFormDataAcl
	String_t* ___PostFormDataAcl_2;
	// System.String Amazon.S3.Util.S3Constants::PostFormDataRedirect
	String_t* ___PostFormDataRedirect_3;
	// System.String Amazon.S3.Util.S3Constants::PostFormDataStatus
	String_t* ___PostFormDataStatus_4;
	// System.String Amazon.S3.Util.S3Constants::PostFormDataContentType
	String_t* ___PostFormDataContentType_5;
	// System.String Amazon.S3.Util.S3Constants::PostFormDataMetaPrefix
	String_t* ___PostFormDataMetaPrefix_6;
	// System.String Amazon.S3.Util.S3Constants::PostFormDataXAmzPrefix
	String_t* ___PostFormDataXAmzPrefix_7;
	// System.String Amazon.S3.Util.S3Constants::PostFormDataAccessKeyId
	String_t* ___PostFormDataAccessKeyId_8;
	// System.String Amazon.S3.Util.S3Constants::PostFormDataPolicy
	String_t* ___PostFormDataPolicy_9;
	// System.String Amazon.S3.Util.S3Constants::PostFormDataSignature
	String_t* ___PostFormDataSignature_10;
	// System.String Amazon.S3.Util.S3Constants::PostFormDataXAmzSignature
	String_t* ___PostFormDataXAmzSignature_11;
	// System.String Amazon.S3.Util.S3Constants::PostFormDataXAmzAlgorithm
	String_t* ___PostFormDataXAmzAlgorithm_12;
	// System.String Amazon.S3.Util.S3Constants::PostFormDataXAmzCredential
	String_t* ___PostFormDataXAmzCredential_13;
	// System.String Amazon.S3.Util.S3Constants::PostFormDataXAmzDate
	String_t* ___PostFormDataXAmzDate_14;
	// System.String Amazon.S3.Util.S3Constants::PostFormDataSecurityToken
	String_t* ___PostFormDataSecurityToken_15;
	// System.String Amazon.S3.Util.S3Constants::AmzHeaderMultipartPartsCount
	String_t* ___AmzHeaderMultipartPartsCount_16;
	// System.String Amazon.S3.Util.S3Constants::AmzHeaderRequestPayer
	String_t* ___AmzHeaderRequestPayer_17;
	// System.String Amazon.S3.Util.S3Constants::AmzHeaderRequestCharged
	String_t* ___AmzHeaderRequestCharged_18;
	// System.String Amazon.S3.Util.S3Constants::AmzHeaderTagging
	String_t* ___AmzHeaderTagging_19;
	// System.String Amazon.S3.Util.S3Constants::AmzHeaderTaggingDirective
	String_t* ___AmzHeaderTaggingDirective_20;
	// System.String Amazon.S3.Util.S3Constants::AmzHeaderTaggingCount
	String_t* ___AmzHeaderTaggingCount_21;
	// System.String Amazon.S3.Util.S3Constants::AmzHeaderRestoreOutputPath
	String_t* ___AmzHeaderRestoreOutputPath_22;
	// System.String[] Amazon.S3.Util.S3Constants::BucketVersions
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___BucketVersions_23;
	// System.String[] Amazon.S3.Util.S3Constants::MetadataDirectives
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___MetadataDirectives_24;
	// System.Collections.Generic.HashSet`1<System.String> Amazon.S3.Util.S3Constants::GetObjectExtraSubResources
	HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * ___GetObjectExtraSubResources_25;

public:
	inline static int32_t get_offset_of_MinPartSize_0() { return static_cast<int32_t>(offsetof(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields, ___MinPartSize_0)); }
	inline int64_t get_MinPartSize_0() const { return ___MinPartSize_0; }
	inline int64_t* get_address_of_MinPartSize_0() { return &___MinPartSize_0; }
	inline void set_MinPartSize_0(int64_t value)
	{
		___MinPartSize_0 = value;
	}

	inline static int32_t get_offset_of_PostFormDataObjectKey_1() { return static_cast<int32_t>(offsetof(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields, ___PostFormDataObjectKey_1)); }
	inline String_t* get_PostFormDataObjectKey_1() const { return ___PostFormDataObjectKey_1; }
	inline String_t** get_address_of_PostFormDataObjectKey_1() { return &___PostFormDataObjectKey_1; }
	inline void set_PostFormDataObjectKey_1(String_t* value)
	{
		___PostFormDataObjectKey_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PostFormDataObjectKey_1), (void*)value);
	}

	inline static int32_t get_offset_of_PostFormDataAcl_2() { return static_cast<int32_t>(offsetof(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields, ___PostFormDataAcl_2)); }
	inline String_t* get_PostFormDataAcl_2() const { return ___PostFormDataAcl_2; }
	inline String_t** get_address_of_PostFormDataAcl_2() { return &___PostFormDataAcl_2; }
	inline void set_PostFormDataAcl_2(String_t* value)
	{
		___PostFormDataAcl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PostFormDataAcl_2), (void*)value);
	}

	inline static int32_t get_offset_of_PostFormDataRedirect_3() { return static_cast<int32_t>(offsetof(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields, ___PostFormDataRedirect_3)); }
	inline String_t* get_PostFormDataRedirect_3() const { return ___PostFormDataRedirect_3; }
	inline String_t** get_address_of_PostFormDataRedirect_3() { return &___PostFormDataRedirect_3; }
	inline void set_PostFormDataRedirect_3(String_t* value)
	{
		___PostFormDataRedirect_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PostFormDataRedirect_3), (void*)value);
	}

	inline static int32_t get_offset_of_PostFormDataStatus_4() { return static_cast<int32_t>(offsetof(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields, ___PostFormDataStatus_4)); }
	inline String_t* get_PostFormDataStatus_4() const { return ___PostFormDataStatus_4; }
	inline String_t** get_address_of_PostFormDataStatus_4() { return &___PostFormDataStatus_4; }
	inline void set_PostFormDataStatus_4(String_t* value)
	{
		___PostFormDataStatus_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PostFormDataStatus_4), (void*)value);
	}

	inline static int32_t get_offset_of_PostFormDataContentType_5() { return static_cast<int32_t>(offsetof(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields, ___PostFormDataContentType_5)); }
	inline String_t* get_PostFormDataContentType_5() const { return ___PostFormDataContentType_5; }
	inline String_t** get_address_of_PostFormDataContentType_5() { return &___PostFormDataContentType_5; }
	inline void set_PostFormDataContentType_5(String_t* value)
	{
		___PostFormDataContentType_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PostFormDataContentType_5), (void*)value);
	}

	inline static int32_t get_offset_of_PostFormDataMetaPrefix_6() { return static_cast<int32_t>(offsetof(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields, ___PostFormDataMetaPrefix_6)); }
	inline String_t* get_PostFormDataMetaPrefix_6() const { return ___PostFormDataMetaPrefix_6; }
	inline String_t** get_address_of_PostFormDataMetaPrefix_6() { return &___PostFormDataMetaPrefix_6; }
	inline void set_PostFormDataMetaPrefix_6(String_t* value)
	{
		___PostFormDataMetaPrefix_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PostFormDataMetaPrefix_6), (void*)value);
	}

	inline static int32_t get_offset_of_PostFormDataXAmzPrefix_7() { return static_cast<int32_t>(offsetof(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields, ___PostFormDataXAmzPrefix_7)); }
	inline String_t* get_PostFormDataXAmzPrefix_7() const { return ___PostFormDataXAmzPrefix_7; }
	inline String_t** get_address_of_PostFormDataXAmzPrefix_7() { return &___PostFormDataXAmzPrefix_7; }
	inline void set_PostFormDataXAmzPrefix_7(String_t* value)
	{
		___PostFormDataXAmzPrefix_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PostFormDataXAmzPrefix_7), (void*)value);
	}

	inline static int32_t get_offset_of_PostFormDataAccessKeyId_8() { return static_cast<int32_t>(offsetof(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields, ___PostFormDataAccessKeyId_8)); }
	inline String_t* get_PostFormDataAccessKeyId_8() const { return ___PostFormDataAccessKeyId_8; }
	inline String_t** get_address_of_PostFormDataAccessKeyId_8() { return &___PostFormDataAccessKeyId_8; }
	inline void set_PostFormDataAccessKeyId_8(String_t* value)
	{
		___PostFormDataAccessKeyId_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PostFormDataAccessKeyId_8), (void*)value);
	}

	inline static int32_t get_offset_of_PostFormDataPolicy_9() { return static_cast<int32_t>(offsetof(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields, ___PostFormDataPolicy_9)); }
	inline String_t* get_PostFormDataPolicy_9() const { return ___PostFormDataPolicy_9; }
	inline String_t** get_address_of_PostFormDataPolicy_9() { return &___PostFormDataPolicy_9; }
	inline void set_PostFormDataPolicy_9(String_t* value)
	{
		___PostFormDataPolicy_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PostFormDataPolicy_9), (void*)value);
	}

	inline static int32_t get_offset_of_PostFormDataSignature_10() { return static_cast<int32_t>(offsetof(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields, ___PostFormDataSignature_10)); }
	inline String_t* get_PostFormDataSignature_10() const { return ___PostFormDataSignature_10; }
	inline String_t** get_address_of_PostFormDataSignature_10() { return &___PostFormDataSignature_10; }
	inline void set_PostFormDataSignature_10(String_t* value)
	{
		___PostFormDataSignature_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PostFormDataSignature_10), (void*)value);
	}

	inline static int32_t get_offset_of_PostFormDataXAmzSignature_11() { return static_cast<int32_t>(offsetof(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields, ___PostFormDataXAmzSignature_11)); }
	inline String_t* get_PostFormDataXAmzSignature_11() const { return ___PostFormDataXAmzSignature_11; }
	inline String_t** get_address_of_PostFormDataXAmzSignature_11() { return &___PostFormDataXAmzSignature_11; }
	inline void set_PostFormDataXAmzSignature_11(String_t* value)
	{
		___PostFormDataXAmzSignature_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PostFormDataXAmzSignature_11), (void*)value);
	}

	inline static int32_t get_offset_of_PostFormDataXAmzAlgorithm_12() { return static_cast<int32_t>(offsetof(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields, ___PostFormDataXAmzAlgorithm_12)); }
	inline String_t* get_PostFormDataXAmzAlgorithm_12() const { return ___PostFormDataXAmzAlgorithm_12; }
	inline String_t** get_address_of_PostFormDataXAmzAlgorithm_12() { return &___PostFormDataXAmzAlgorithm_12; }
	inline void set_PostFormDataXAmzAlgorithm_12(String_t* value)
	{
		___PostFormDataXAmzAlgorithm_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PostFormDataXAmzAlgorithm_12), (void*)value);
	}

	inline static int32_t get_offset_of_PostFormDataXAmzCredential_13() { return static_cast<int32_t>(offsetof(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields, ___PostFormDataXAmzCredential_13)); }
	inline String_t* get_PostFormDataXAmzCredential_13() const { return ___PostFormDataXAmzCredential_13; }
	inline String_t** get_address_of_PostFormDataXAmzCredential_13() { return &___PostFormDataXAmzCredential_13; }
	inline void set_PostFormDataXAmzCredential_13(String_t* value)
	{
		___PostFormDataXAmzCredential_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PostFormDataXAmzCredential_13), (void*)value);
	}

	inline static int32_t get_offset_of_PostFormDataXAmzDate_14() { return static_cast<int32_t>(offsetof(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields, ___PostFormDataXAmzDate_14)); }
	inline String_t* get_PostFormDataXAmzDate_14() const { return ___PostFormDataXAmzDate_14; }
	inline String_t** get_address_of_PostFormDataXAmzDate_14() { return &___PostFormDataXAmzDate_14; }
	inline void set_PostFormDataXAmzDate_14(String_t* value)
	{
		___PostFormDataXAmzDate_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PostFormDataXAmzDate_14), (void*)value);
	}

	inline static int32_t get_offset_of_PostFormDataSecurityToken_15() { return static_cast<int32_t>(offsetof(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields, ___PostFormDataSecurityToken_15)); }
	inline String_t* get_PostFormDataSecurityToken_15() const { return ___PostFormDataSecurityToken_15; }
	inline String_t** get_address_of_PostFormDataSecurityToken_15() { return &___PostFormDataSecurityToken_15; }
	inline void set_PostFormDataSecurityToken_15(String_t* value)
	{
		___PostFormDataSecurityToken_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PostFormDataSecurityToken_15), (void*)value);
	}

	inline static int32_t get_offset_of_AmzHeaderMultipartPartsCount_16() { return static_cast<int32_t>(offsetof(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields, ___AmzHeaderMultipartPartsCount_16)); }
	inline String_t* get_AmzHeaderMultipartPartsCount_16() const { return ___AmzHeaderMultipartPartsCount_16; }
	inline String_t** get_address_of_AmzHeaderMultipartPartsCount_16() { return &___AmzHeaderMultipartPartsCount_16; }
	inline void set_AmzHeaderMultipartPartsCount_16(String_t* value)
	{
		___AmzHeaderMultipartPartsCount_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AmzHeaderMultipartPartsCount_16), (void*)value);
	}

	inline static int32_t get_offset_of_AmzHeaderRequestPayer_17() { return static_cast<int32_t>(offsetof(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields, ___AmzHeaderRequestPayer_17)); }
	inline String_t* get_AmzHeaderRequestPayer_17() const { return ___AmzHeaderRequestPayer_17; }
	inline String_t** get_address_of_AmzHeaderRequestPayer_17() { return &___AmzHeaderRequestPayer_17; }
	inline void set_AmzHeaderRequestPayer_17(String_t* value)
	{
		___AmzHeaderRequestPayer_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AmzHeaderRequestPayer_17), (void*)value);
	}

	inline static int32_t get_offset_of_AmzHeaderRequestCharged_18() { return static_cast<int32_t>(offsetof(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields, ___AmzHeaderRequestCharged_18)); }
	inline String_t* get_AmzHeaderRequestCharged_18() const { return ___AmzHeaderRequestCharged_18; }
	inline String_t** get_address_of_AmzHeaderRequestCharged_18() { return &___AmzHeaderRequestCharged_18; }
	inline void set_AmzHeaderRequestCharged_18(String_t* value)
	{
		___AmzHeaderRequestCharged_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AmzHeaderRequestCharged_18), (void*)value);
	}

	inline static int32_t get_offset_of_AmzHeaderTagging_19() { return static_cast<int32_t>(offsetof(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields, ___AmzHeaderTagging_19)); }
	inline String_t* get_AmzHeaderTagging_19() const { return ___AmzHeaderTagging_19; }
	inline String_t** get_address_of_AmzHeaderTagging_19() { return &___AmzHeaderTagging_19; }
	inline void set_AmzHeaderTagging_19(String_t* value)
	{
		___AmzHeaderTagging_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AmzHeaderTagging_19), (void*)value);
	}

	inline static int32_t get_offset_of_AmzHeaderTaggingDirective_20() { return static_cast<int32_t>(offsetof(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields, ___AmzHeaderTaggingDirective_20)); }
	inline String_t* get_AmzHeaderTaggingDirective_20() const { return ___AmzHeaderTaggingDirective_20; }
	inline String_t** get_address_of_AmzHeaderTaggingDirective_20() { return &___AmzHeaderTaggingDirective_20; }
	inline void set_AmzHeaderTaggingDirective_20(String_t* value)
	{
		___AmzHeaderTaggingDirective_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AmzHeaderTaggingDirective_20), (void*)value);
	}

	inline static int32_t get_offset_of_AmzHeaderTaggingCount_21() { return static_cast<int32_t>(offsetof(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields, ___AmzHeaderTaggingCount_21)); }
	inline String_t* get_AmzHeaderTaggingCount_21() const { return ___AmzHeaderTaggingCount_21; }
	inline String_t** get_address_of_AmzHeaderTaggingCount_21() { return &___AmzHeaderTaggingCount_21; }
	inline void set_AmzHeaderTaggingCount_21(String_t* value)
	{
		___AmzHeaderTaggingCount_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AmzHeaderTaggingCount_21), (void*)value);
	}

	inline static int32_t get_offset_of_AmzHeaderRestoreOutputPath_22() { return static_cast<int32_t>(offsetof(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields, ___AmzHeaderRestoreOutputPath_22)); }
	inline String_t* get_AmzHeaderRestoreOutputPath_22() const { return ___AmzHeaderRestoreOutputPath_22; }
	inline String_t** get_address_of_AmzHeaderRestoreOutputPath_22() { return &___AmzHeaderRestoreOutputPath_22; }
	inline void set_AmzHeaderRestoreOutputPath_22(String_t* value)
	{
		___AmzHeaderRestoreOutputPath_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AmzHeaderRestoreOutputPath_22), (void*)value);
	}

	inline static int32_t get_offset_of_BucketVersions_23() { return static_cast<int32_t>(offsetof(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields, ___BucketVersions_23)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_BucketVersions_23() const { return ___BucketVersions_23; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_BucketVersions_23() { return &___BucketVersions_23; }
	inline void set_BucketVersions_23(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___BucketVersions_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BucketVersions_23), (void*)value);
	}

	inline static int32_t get_offset_of_MetadataDirectives_24() { return static_cast<int32_t>(offsetof(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields, ___MetadataDirectives_24)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_MetadataDirectives_24() const { return ___MetadataDirectives_24; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_MetadataDirectives_24() { return &___MetadataDirectives_24; }
	inline void set_MetadataDirectives_24(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___MetadataDirectives_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MetadataDirectives_24), (void*)value);
	}

	inline static int32_t get_offset_of_GetObjectExtraSubResources_25() { return static_cast<int32_t>(offsetof(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields, ___GetObjectExtraSubResources_25)); }
	inline HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * get_GetObjectExtraSubResources_25() const { return ___GetObjectExtraSubResources_25; }
	inline HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E ** get_address_of_GetObjectExtraSubResources_25() { return &___GetObjectExtraSubResources_25; }
	inline void set_GetObjectExtraSubResources_25(HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * value)
	{
		___GetObjectExtraSubResources_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetObjectExtraSubResources_25), (void*)value);
	}
};


// Amazon.S3.Util.S3PostUploadSignedPolicy
struct  S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C  : public RuntimeObject
{
public:
	// System.String Amazon.S3.Util.S3PostUploadSignedPolicy::<Policy>k__BackingField
	String_t* ___U3CPolicyU3Ek__BackingField_0;
	// System.String Amazon.S3.Util.S3PostUploadSignedPolicy::<Signature>k__BackingField
	String_t* ___U3CSignatureU3Ek__BackingField_1;
	// System.String Amazon.S3.Util.S3PostUploadSignedPolicy::<AccessKeyId>k__BackingField
	String_t* ___U3CAccessKeyIdU3Ek__BackingField_2;
	// System.String Amazon.S3.Util.S3PostUploadSignedPolicy::<SecurityToken>k__BackingField
	String_t* ___U3CSecurityTokenU3Ek__BackingField_3;
	// System.String Amazon.S3.Util.S3PostUploadSignedPolicy::<SignatureVersion>k__BackingField
	String_t* ___U3CSignatureVersionU3Ek__BackingField_4;
	// System.String Amazon.S3.Util.S3PostUploadSignedPolicy::<Algorithm>k__BackingField
	String_t* ___U3CAlgorithmU3Ek__BackingField_5;
	// System.String Amazon.S3.Util.S3PostUploadSignedPolicy::<Date>k__BackingField
	String_t* ___U3CDateU3Ek__BackingField_6;
	// System.String Amazon.S3.Util.S3PostUploadSignedPolicy::<Credential>k__BackingField
	String_t* ___U3CCredentialU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CPolicyU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C, ___U3CPolicyU3Ek__BackingField_0)); }
	inline String_t* get_U3CPolicyU3Ek__BackingField_0() const { return ___U3CPolicyU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CPolicyU3Ek__BackingField_0() { return &___U3CPolicyU3Ek__BackingField_0; }
	inline void set_U3CPolicyU3Ek__BackingField_0(String_t* value)
	{
		___U3CPolicyU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPolicyU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSignatureU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C, ___U3CSignatureU3Ek__BackingField_1)); }
	inline String_t* get_U3CSignatureU3Ek__BackingField_1() const { return ___U3CSignatureU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CSignatureU3Ek__BackingField_1() { return &___U3CSignatureU3Ek__BackingField_1; }
	inline void set_U3CSignatureU3Ek__BackingField_1(String_t* value)
	{
		___U3CSignatureU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSignatureU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAccessKeyIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C, ___U3CAccessKeyIdU3Ek__BackingField_2)); }
	inline String_t* get_U3CAccessKeyIdU3Ek__BackingField_2() const { return ___U3CAccessKeyIdU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CAccessKeyIdU3Ek__BackingField_2() { return &___U3CAccessKeyIdU3Ek__BackingField_2; }
	inline void set_U3CAccessKeyIdU3Ek__BackingField_2(String_t* value)
	{
		___U3CAccessKeyIdU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAccessKeyIdU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSecurityTokenU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C, ___U3CSecurityTokenU3Ek__BackingField_3)); }
	inline String_t* get_U3CSecurityTokenU3Ek__BackingField_3() const { return ___U3CSecurityTokenU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CSecurityTokenU3Ek__BackingField_3() { return &___U3CSecurityTokenU3Ek__BackingField_3; }
	inline void set_U3CSecurityTokenU3Ek__BackingField_3(String_t* value)
	{
		___U3CSecurityTokenU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSecurityTokenU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSignatureVersionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C, ___U3CSignatureVersionU3Ek__BackingField_4)); }
	inline String_t* get_U3CSignatureVersionU3Ek__BackingField_4() const { return ___U3CSignatureVersionU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CSignatureVersionU3Ek__BackingField_4() { return &___U3CSignatureVersionU3Ek__BackingField_4; }
	inline void set_U3CSignatureVersionU3Ek__BackingField_4(String_t* value)
	{
		___U3CSignatureVersionU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSignatureVersionU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAlgorithmU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C, ___U3CAlgorithmU3Ek__BackingField_5)); }
	inline String_t* get_U3CAlgorithmU3Ek__BackingField_5() const { return ___U3CAlgorithmU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CAlgorithmU3Ek__BackingField_5() { return &___U3CAlgorithmU3Ek__BackingField_5; }
	inline void set_U3CAlgorithmU3Ek__BackingField_5(String_t* value)
	{
		___U3CAlgorithmU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAlgorithmU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDateU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C, ___U3CDateU3Ek__BackingField_6)); }
	inline String_t* get_U3CDateU3Ek__BackingField_6() const { return ___U3CDateU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CDateU3Ek__BackingField_6() { return &___U3CDateU3Ek__BackingField_6; }
	inline void set_U3CDateU3Ek__BackingField_6(String_t* value)
	{
		___U3CDateU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDateU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCredentialU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C, ___U3CCredentialU3Ek__BackingField_7)); }
	inline String_t* get_U3CCredentialU3Ek__BackingField_7() const { return ___U3CCredentialU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CCredentialU3Ek__BackingField_7() { return &___U3CCredentialU3Ek__BackingField_7; }
	inline void set_U3CCredentialU3Ek__BackingField_7(String_t* value)
	{
		___U3CCredentialU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCredentialU3Ek__BackingField_7), (void*)value);
	}
};

struct S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C_StaticFields
{
public:
	// System.String Amazon.S3.Util.S3PostUploadSignedPolicy::KEY_POLICY
	String_t* ___KEY_POLICY_8;
	// System.String Amazon.S3.Util.S3PostUploadSignedPolicy::KEY_SIGNATURE
	String_t* ___KEY_SIGNATURE_9;
	// System.String Amazon.S3.Util.S3PostUploadSignedPolicy::KEY_ACCESSKEY
	String_t* ___KEY_ACCESSKEY_10;

public:
	inline static int32_t get_offset_of_KEY_POLICY_8() { return static_cast<int32_t>(offsetof(S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C_StaticFields, ___KEY_POLICY_8)); }
	inline String_t* get_KEY_POLICY_8() const { return ___KEY_POLICY_8; }
	inline String_t** get_address_of_KEY_POLICY_8() { return &___KEY_POLICY_8; }
	inline void set_KEY_POLICY_8(String_t* value)
	{
		___KEY_POLICY_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KEY_POLICY_8), (void*)value);
	}

	inline static int32_t get_offset_of_KEY_SIGNATURE_9() { return static_cast<int32_t>(offsetof(S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C_StaticFields, ___KEY_SIGNATURE_9)); }
	inline String_t* get_KEY_SIGNATURE_9() const { return ___KEY_SIGNATURE_9; }
	inline String_t** get_address_of_KEY_SIGNATURE_9() { return &___KEY_SIGNATURE_9; }
	inline void set_KEY_SIGNATURE_9(String_t* value)
	{
		___KEY_SIGNATURE_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KEY_SIGNATURE_9), (void*)value);
	}

	inline static int32_t get_offset_of_KEY_ACCESSKEY_10() { return static_cast<int32_t>(offsetof(S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C_StaticFields, ___KEY_ACCESSKEY_10)); }
	inline String_t* get_KEY_ACCESSKEY_10() const { return ___KEY_ACCESSKEY_10; }
	inline String_t** get_address_of_KEY_ACCESSKEY_10() { return &___KEY_ACCESSKEY_10; }
	inline void set_KEY_ACCESSKEY_10(String_t* value)
	{
		___KEY_ACCESSKEY_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KEY_ACCESSKEY_10), (void*)value);
	}
};


// Amazon.Util.CryptoUtilFactory
struct  CryptoUtilFactory_t26A78D19624EC9BBBC7C5E91A2ED5DC501E9A7D7  : public RuntimeObject
{
public:

public:
};

struct CryptoUtilFactory_t26A78D19624EC9BBBC7C5E91A2ED5DC501E9A7D7_StaticFields
{
public:
	// Amazon.Util.CryptoUtilFactory_CryptoUtil Amazon.Util.CryptoUtilFactory::util
	CryptoUtil_tA8CBEA6142A854AA438F40328BBE11330DB72AB9 * ___util_0;
	// System.Collections.Generic.HashSet`1<System.String> Amazon.Util.CryptoUtilFactory::_initializedAlgorithmNames
	HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * ____initializedAlgorithmNames_1;
	// System.Object Amazon.Util.CryptoUtilFactory::_keyedHashAlgorithmCreationLock
	RuntimeObject * ____keyedHashAlgorithmCreationLock_2;

public:
	inline static int32_t get_offset_of_util_0() { return static_cast<int32_t>(offsetof(CryptoUtilFactory_t26A78D19624EC9BBBC7C5E91A2ED5DC501E9A7D7_StaticFields, ___util_0)); }
	inline CryptoUtil_tA8CBEA6142A854AA438F40328BBE11330DB72AB9 * get_util_0() const { return ___util_0; }
	inline CryptoUtil_tA8CBEA6142A854AA438F40328BBE11330DB72AB9 ** get_address_of_util_0() { return &___util_0; }
	inline void set_util_0(CryptoUtil_tA8CBEA6142A854AA438F40328BBE11330DB72AB9 * value)
	{
		___util_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___util_0), (void*)value);
	}

	inline static int32_t get_offset_of__initializedAlgorithmNames_1() { return static_cast<int32_t>(offsetof(CryptoUtilFactory_t26A78D19624EC9BBBC7C5E91A2ED5DC501E9A7D7_StaticFields, ____initializedAlgorithmNames_1)); }
	inline HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * get__initializedAlgorithmNames_1() const { return ____initializedAlgorithmNames_1; }
	inline HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E ** get_address_of__initializedAlgorithmNames_1() { return &____initializedAlgorithmNames_1; }
	inline void set__initializedAlgorithmNames_1(HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * value)
	{
		____initializedAlgorithmNames_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____initializedAlgorithmNames_1), (void*)value);
	}

	inline static int32_t get_offset_of__keyedHashAlgorithmCreationLock_2() { return static_cast<int32_t>(offsetof(CryptoUtilFactory_t26A78D19624EC9BBBC7C5E91A2ED5DC501E9A7D7_StaticFields, ____keyedHashAlgorithmCreationLock_2)); }
	inline RuntimeObject * get__keyedHashAlgorithmCreationLock_2() const { return ____keyedHashAlgorithmCreationLock_2; }
	inline RuntimeObject ** get_address_of__keyedHashAlgorithmCreationLock_2() { return &____keyedHashAlgorithmCreationLock_2; }
	inline void set__keyedHashAlgorithmCreationLock_2(RuntimeObject * value)
	{
		____keyedHashAlgorithmCreationLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keyedHashAlgorithmCreationLock_2), (void*)value);
	}
};


// Amazon.Util.CryptoUtilFactory_CryptoUtil
struct  CryptoUtil_tA8CBEA6142A854AA438F40328BBE11330DB72AB9  : public RuntimeObject
{
public:

public:
};

struct CryptoUtil_tA8CBEA6142A854AA438F40328BBE11330DB72AB9_ThreadStaticFields
{
public:
	// System.Security.Cryptography.HashAlgorithm Amazon.Util.CryptoUtilFactory_CryptoUtil::_hashAlgorithm
	HashAlgorithm_t65659695B16C0BBF05707BF45191A97DC156D6BA * ____hashAlgorithm_0;

public:
	inline static int32_t get_offset_of__hashAlgorithm_0() { return static_cast<int32_t>(offsetof(CryptoUtil_tA8CBEA6142A854AA438F40328BBE11330DB72AB9_ThreadStaticFields, ____hashAlgorithm_0)); }
	inline HashAlgorithm_t65659695B16C0BBF05707BF45191A97DC156D6BA * get__hashAlgorithm_0() const { return ____hashAlgorithm_0; }
	inline HashAlgorithm_t65659695B16C0BBF05707BF45191A97DC156D6BA ** get_address_of__hashAlgorithm_0() { return &____hashAlgorithm_0; }
	inline void set__hashAlgorithm_0(HashAlgorithm_t65659695B16C0BBF05707BF45191A97DC156D6BA * value)
	{
		____hashAlgorithm_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____hashAlgorithm_0), (void*)value);
	}
};


// Amazon.Util.Internal.ConfigurationElement
struct  ConfigurationElement_tA254FE9C962BC7772B2FE9B97B478E24A4480DEE  : public RuntimeObject
{
public:
	// Amazon.Util.Internal.ElementInformation Amazon.Util.Internal.ConfigurationElement::<ElementInformation>k__BackingField
	ElementInformation_tB9EF0F80428A2665011FE7F5469623439564BD50 * ___U3CElementInformationU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CElementInformationU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ConfigurationElement_tA254FE9C962BC7772B2FE9B97B478E24A4480DEE, ___U3CElementInformationU3Ek__BackingField_0)); }
	inline ElementInformation_tB9EF0F80428A2665011FE7F5469623439564BD50 * get_U3CElementInformationU3Ek__BackingField_0() const { return ___U3CElementInformationU3Ek__BackingField_0; }
	inline ElementInformation_tB9EF0F80428A2665011FE7F5469623439564BD50 ** get_address_of_U3CElementInformationU3Ek__BackingField_0() { return &___U3CElementInformationU3Ek__BackingField_0; }
	inline void set_U3CElementInformationU3Ek__BackingField_0(ElementInformation_tB9EF0F80428A2665011FE7F5469623439564BD50 * value)
	{
		___U3CElementInformationU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CElementInformationU3Ek__BackingField_0), (void*)value);
	}
};


// Amazon.V4ClientSectionRoot
struct  V4ClientSectionRoot_t7503957BFD346A70AF90C1F682CCA04AAA857C62  : public RuntimeObject
{
public:
	// Amazon.V4ClientSection Amazon.V4ClientSectionRoot::<S3>k__BackingField
	V4ClientSection_t2C28891A824A3E15AF6467DB4841A5411BE080C7 * ___U3CS3U3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CS3U3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(V4ClientSectionRoot_t7503957BFD346A70AF90C1F682CCA04AAA857C62, ___U3CS3U3Ek__BackingField_0)); }
	inline V4ClientSection_t2C28891A824A3E15AF6467DB4841A5411BE080C7 * get_U3CS3U3Ek__BackingField_0() const { return ___U3CS3U3Ek__BackingField_0; }
	inline V4ClientSection_t2C28891A824A3E15AF6467DB4841A5411BE080C7 ** get_address_of_U3CS3U3Ek__BackingField_0() { return &___U3CS3U3Ek__BackingField_0; }
	inline void set_U3CS3U3Ek__BackingField_0(V4ClientSection_t2C28891A824A3E15AF6467DB4841A5411BE080C7 * value)
	{
		___U3CS3U3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CS3U3Ek__BackingField_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct  Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___entries_1)); }
	inline EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___keys_7)); }
	inline KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___values_8)); }
	inline ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.String>
struct  HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____buckets_7;
	// System.Collections.Generic.HashSet`1_Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t53602D6A0A2A8B3DB893B552E437E8C6321C5039* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E, ____buckets_7)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E, ____slots_8)); }
	inline SlotU5BU5D_t53602D6A0A2A8B3DB893B552E437E8C6321C5039* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t53602D6A0A2A8B3DB893B552E437E8C6321C5039** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t53602D6A0A2A8B3DB893B552E437E8C6321C5039* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E, ____siInfo_14)); }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Globalization.CultureInfo
struct  CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F  : public RuntimeObject
{
public:
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
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
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
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___numInfo_10)); }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textInfo_12)); }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___native_calendar_names_20)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___compareInfo_21)); }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___calendar_24)); }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_culture_25)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_cultureData_28)); }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
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


// System.Text.Encoding
struct  Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * ___decoderFallback_60;

public:
	inline static int32_t get_offset_of_m_codePage_55() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_codePage_55)); }
	inline int32_t get_m_codePage_55() const { return ___m_codePage_55; }
	inline int32_t* get_address_of_m_codePage_55() { return &___m_codePage_55; }
	inline void set_m_codePage_55(int32_t value)
	{
		___m_codePage_55 = value;
	}

	inline static int32_t get_offset_of_dataItem_56() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___dataItem_56)); }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * get_dataItem_56() const { return ___dataItem_56; }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB ** get_address_of_dataItem_56() { return &___dataItem_56; }
	inline void set_dataItem_56(CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * value)
	{
		___dataItem_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_56), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_57() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_deserializedFromEverett_57)); }
	inline bool get_m_deserializedFromEverett_57() const { return ___m_deserializedFromEverett_57; }
	inline bool* get_address_of_m_deserializedFromEverett_57() { return &___m_deserializedFromEverett_57; }
	inline void set_m_deserializedFromEverett_57(bool value)
	{
		___m_deserializedFromEverett_57 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_58() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_isReadOnly_58)); }
	inline bool get_m_isReadOnly_58() const { return ___m_isReadOnly_58; }
	inline bool* get_address_of_m_isReadOnly_58() { return &___m_isReadOnly_58; }
	inline void set_m_isReadOnly_58(bool value)
	{
		___m_isReadOnly_58 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_59() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___encoderFallback_59)); }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * get_encoderFallback_59() const { return ___encoderFallback_59; }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 ** get_address_of_encoderFallback_59() { return &___encoderFallback_59; }
	inline void set_encoderFallback_59(EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * value)
	{
		___encoderFallback_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_59), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_60() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___decoderFallback_60)); }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * get_decoderFallback_60() const { return ___decoderFallback_60; }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 ** get_address_of_decoderFallback_60() { return &___decoderFallback_60; }
	inline void set_decoderFallback_60(DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * value)
	{
		___decoderFallback_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_60), (void*)value);
	}
};

struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_61;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___encodings_8)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_61() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___s_InternalSyncObject_61)); }
	inline RuntimeObject * get_s_InternalSyncObject_61() const { return ___s_InternalSyncObject_61; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_61() { return &___s_InternalSyncObject_61; }
	inline void set_s_InternalSyncObject_61(RuntimeObject * value)
	{
		___s_InternalSyncObject_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_61), (void*)value);
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

// System.Xml.Linq.XObject
struct  XObject_t0DA241208A0EC65CA16AEA485DD80F21A693EDEF  : public RuntimeObject
{
public:
	// System.Xml.Linq.XContainer System.Xml.Linq.XObject::parent
	XContainer_t17E75C21493AAC7D12D6159A3A8C5308B3DBC599 * ___parent_0;
	// System.Object System.Xml.Linq.XObject::annotations
	RuntimeObject * ___annotations_1;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(XObject_t0DA241208A0EC65CA16AEA485DD80F21A693EDEF, ___parent_0)); }
	inline XContainer_t17E75C21493AAC7D12D6159A3A8C5308B3DBC599 * get_parent_0() const { return ___parent_0; }
	inline XContainer_t17E75C21493AAC7D12D6159A3A8C5308B3DBC599 ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(XContainer_t17E75C21493AAC7D12D6159A3A8C5308B3DBC599 * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_0), (void*)value);
	}

	inline static int32_t get_offset_of_annotations_1() { return static_cast<int32_t>(offsetof(XObject_t0DA241208A0EC65CA16AEA485DD80F21A693EDEF, ___annotations_1)); }
	inline RuntimeObject * get_annotations_1() const { return ___annotations_1; }
	inline RuntimeObject ** get_address_of_annotations_1() { return &___annotations_1; }
	inline void set_annotations_1(RuntimeObject * value)
	{
		___annotations_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___annotations_1), (void*)value);
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct  KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
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


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Nullable`1<System.Boolean>
struct  Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
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


// System.Xml.Linq.XNode
struct  XNode_tC1E0A039E17CD7048FD925F35FB0413D3D292751  : public XObject_t0DA241208A0EC65CA16AEA485DD80F21A693EDEF
{
public:
	// System.Xml.Linq.XNode System.Xml.Linq.XNode::next
	XNode_tC1E0A039E17CD7048FD925F35FB0413D3D292751 * ___next_2;

public:
	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(XNode_tC1E0A039E17CD7048FD925F35FB0413D3D292751, ___next_2)); }
	inline XNode_tC1E0A039E17CD7048FD925F35FB0413D3D292751 * get_next_2() const { return ___next_2; }
	inline XNode_tC1E0A039E17CD7048FD925F35FB0413D3D292751 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(XNode_tC1E0A039E17CD7048FD925F35FB0413D3D292751 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___next_2), (void*)value);
	}
};


// Amazon.Runtime.SigningAlgorithm
struct  SigningAlgorithm_tEEB352B1DBD5D467D7751FC8F061BCCE1CF8923F 
{
public:
	// System.Int32 Amazon.Runtime.SigningAlgorithm::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SigningAlgorithm_tEEB352B1DBD5D467D7751FC8F061BCCE1CF8923F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Amazon.V4ClientSection
struct  V4ClientSection_t2C28891A824A3E15AF6467DB4841A5411BE080C7  : public ConfigurationElement_tA254FE9C962BC7772B2FE9B97B478E24A4480DEE
{
public:
	// System.Nullable`1<System.Boolean> Amazon.V4ClientSection::<UseSignatureVersion4>k__BackingField
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___U3CUseSignatureVersion4U3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CUseSignatureVersion4U3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(V4ClientSection_t2C28891A824A3E15AF6467DB4841A5411BE080C7, ___U3CUseSignatureVersion4U3Ek__BackingField_1)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_U3CUseSignatureVersion4U3Ek__BackingField_1() const { return ___U3CUseSignatureVersion4U3Ek__BackingField_1; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_U3CUseSignatureVersion4U3Ek__BackingField_1() { return &___U3CUseSignatureVersion4U3Ek__BackingField_1; }
	inline void set_U3CUseSignatureVersion4U3Ek__BackingField_1(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___U3CUseSignatureVersion4U3Ek__BackingField_1 = value;
	}
};


// System.Collections.Generic.Dictionary`2_Enumerator<System.Object,System.Object>
struct  Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___dictionary_0)); }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___current_3)); }
	inline KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2_Enumerator<System.String,System.String>
struct  Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::dictionary
	Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2_Enumerator::current
	KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2_Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3, ___dictionary_0)); }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3, ___current_3)); }
	inline KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Xml.Linq.XContainer
struct  XContainer_t17E75C21493AAC7D12D6159A3A8C5308B3DBC599  : public XNode_tC1E0A039E17CD7048FD925F35FB0413D3D292751
{
public:
	// System.Object System.Xml.Linq.XContainer::content
	RuntimeObject * ___content_3;

public:
	inline static int32_t get_offset_of_content_3() { return static_cast<int32_t>(offsetof(XContainer_t17E75C21493AAC7D12D6159A3A8C5308B3DBC599, ___content_3)); }
	inline RuntimeObject * get_content_3() const { return ___content_3; }
	inline RuntimeObject ** get_address_of_content_3() { return &___content_3; }
	inline void set_content_3(RuntimeObject * value)
	{
		___content_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___content_3), (void*)value);
	}
};


// ThirdParty.Json.LitJson.JsonToken
struct  JsonToken_t055BBC372460772641F978081D7AD09FF73F0FA3 
{
public:
	// System.Int32 ThirdParty.Json.LitJson.JsonToken::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsonToken_t055BBC372460772641F978081D7AD09FF73F0FA3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ThirdParty.Json.LitJson.JsonType
struct  JsonType_t60F8D8E2B17823E4B1CFEADBC60BAFF59619011D 
{
public:
	// System.Int32 ThirdParty.Json.LitJson.JsonType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsonType_t60F8D8E2B17823E4B1CFEADBC60BAFF59619011D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.Linq.XElement
struct  XElement_t19F18C253C1E4E22F010C470A5181AB7BD0B5E95  : public XContainer_t17E75C21493AAC7D12D6159A3A8C5308B3DBC599
{
public:
	// System.Xml.Linq.XName System.Xml.Linq.XElement::name
	XName_t09FB17CAE73454416CC2CC694E68A9AFFD3C8F7A * ___name_5;
	// System.Xml.Linq.XAttribute System.Xml.Linq.XElement::lastAttr
	XAttribute_tE59FB05CB3017A75CD81C84F5E4FE613B8A8F015 * ___lastAttr_6;

public:
	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(XElement_t19F18C253C1E4E22F010C470A5181AB7BD0B5E95, ___name_5)); }
	inline XName_t09FB17CAE73454416CC2CC694E68A9AFFD3C8F7A * get_name_5() const { return ___name_5; }
	inline XName_t09FB17CAE73454416CC2CC694E68A9AFFD3C8F7A ** get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(XName_t09FB17CAE73454416CC2CC694E68A9AFFD3C8F7A * value)
	{
		___name_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_5), (void*)value);
	}

	inline static int32_t get_offset_of_lastAttr_6() { return static_cast<int32_t>(offsetof(XElement_t19F18C253C1E4E22F010C470A5181AB7BD0B5E95, ___lastAttr_6)); }
	inline XAttribute_tE59FB05CB3017A75CD81C84F5E4FE613B8A8F015 * get_lastAttr_6() const { return ___lastAttr_6; }
	inline XAttribute_tE59FB05CB3017A75CD81C84F5E4FE613B8A8F015 ** get_address_of_lastAttr_6() { return &___lastAttr_6; }
	inline void set_lastAttr_6(XAttribute_tE59FB05CB3017A75CD81C84F5E4FE613B8A8F015 * value)
	{
		___lastAttr_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastAttr_6), (void*)value);
	}
};

struct XElement_t19F18C253C1E4E22F010C470A5181AB7BD0B5E95_StaticFields
{
public:
	// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement> System.Xml.Linq.XElement::emptySequence
	RuntimeObject* ___emptySequence_4;

public:
	inline static int32_t get_offset_of_emptySequence_4() { return static_cast<int32_t>(offsetof(XElement_t19F18C253C1E4E22F010C470A5181AB7BD0B5E95_StaticFields, ___emptySequence_4)); }
	inline RuntimeObject* get_emptySequence_4() const { return ___emptySequence_4; }
	inline RuntimeObject** get_address_of_emptySequence_4() { return &___emptySequence_4; }
	inline void set_emptySequence_4(RuntimeObject* value)
	{
		___emptySequence_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emptySequence_4), (void*)value);
	}
};


// ThirdParty.Json.LitJson.JsonData
struct  JsonData_tB6316B120F536B8E6E0553E698129B2957074324  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<ThirdParty.Json.LitJson.JsonData> ThirdParty.Json.LitJson.JsonData::inst_array
	RuntimeObject* ___inst_array_0;
	// System.Boolean ThirdParty.Json.LitJson.JsonData::inst_boolean
	bool ___inst_boolean_1;
	// System.Double ThirdParty.Json.LitJson.JsonData::inst_double
	double ___inst_double_2;
	// System.UInt64 ThirdParty.Json.LitJson.JsonData::inst_number
	uint64_t ___inst_number_3;
	// System.Collections.Generic.IDictionary`2<System.String,ThirdParty.Json.LitJson.JsonData> ThirdParty.Json.LitJson.JsonData::inst_object
	RuntimeObject* ___inst_object_4;
	// System.String ThirdParty.Json.LitJson.JsonData::inst_string
	String_t* ___inst_string_5;
	// System.String ThirdParty.Json.LitJson.JsonData::json
	String_t* ___json_6;
	// ThirdParty.Json.LitJson.JsonType ThirdParty.Json.LitJson.JsonData::type
	int32_t ___type_7;
	// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,ThirdParty.Json.LitJson.JsonData>> ThirdParty.Json.LitJson.JsonData::object_list
	RuntimeObject* ___object_list_8;

public:
	inline static int32_t get_offset_of_inst_array_0() { return static_cast<int32_t>(offsetof(JsonData_tB6316B120F536B8E6E0553E698129B2957074324, ___inst_array_0)); }
	inline RuntimeObject* get_inst_array_0() const { return ___inst_array_0; }
	inline RuntimeObject** get_address_of_inst_array_0() { return &___inst_array_0; }
	inline void set_inst_array_0(RuntimeObject* value)
	{
		___inst_array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inst_array_0), (void*)value);
	}

	inline static int32_t get_offset_of_inst_boolean_1() { return static_cast<int32_t>(offsetof(JsonData_tB6316B120F536B8E6E0553E698129B2957074324, ___inst_boolean_1)); }
	inline bool get_inst_boolean_1() const { return ___inst_boolean_1; }
	inline bool* get_address_of_inst_boolean_1() { return &___inst_boolean_1; }
	inline void set_inst_boolean_1(bool value)
	{
		___inst_boolean_1 = value;
	}

	inline static int32_t get_offset_of_inst_double_2() { return static_cast<int32_t>(offsetof(JsonData_tB6316B120F536B8E6E0553E698129B2957074324, ___inst_double_2)); }
	inline double get_inst_double_2() const { return ___inst_double_2; }
	inline double* get_address_of_inst_double_2() { return &___inst_double_2; }
	inline void set_inst_double_2(double value)
	{
		___inst_double_2 = value;
	}

	inline static int32_t get_offset_of_inst_number_3() { return static_cast<int32_t>(offsetof(JsonData_tB6316B120F536B8E6E0553E698129B2957074324, ___inst_number_3)); }
	inline uint64_t get_inst_number_3() const { return ___inst_number_3; }
	inline uint64_t* get_address_of_inst_number_3() { return &___inst_number_3; }
	inline void set_inst_number_3(uint64_t value)
	{
		___inst_number_3 = value;
	}

	inline static int32_t get_offset_of_inst_object_4() { return static_cast<int32_t>(offsetof(JsonData_tB6316B120F536B8E6E0553E698129B2957074324, ___inst_object_4)); }
	inline RuntimeObject* get_inst_object_4() const { return ___inst_object_4; }
	inline RuntimeObject** get_address_of_inst_object_4() { return &___inst_object_4; }
	inline void set_inst_object_4(RuntimeObject* value)
	{
		___inst_object_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inst_object_4), (void*)value);
	}

	inline static int32_t get_offset_of_inst_string_5() { return static_cast<int32_t>(offsetof(JsonData_tB6316B120F536B8E6E0553E698129B2957074324, ___inst_string_5)); }
	inline String_t* get_inst_string_5() const { return ___inst_string_5; }
	inline String_t** get_address_of_inst_string_5() { return &___inst_string_5; }
	inline void set_inst_string_5(String_t* value)
	{
		___inst_string_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inst_string_5), (void*)value);
	}

	inline static int32_t get_offset_of_json_6() { return static_cast<int32_t>(offsetof(JsonData_tB6316B120F536B8E6E0553E698129B2957074324, ___json_6)); }
	inline String_t* get_json_6() const { return ___json_6; }
	inline String_t** get_address_of_json_6() { return &___json_6; }
	inline void set_json_6(String_t* value)
	{
		___json_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___json_6), (void*)value);
	}

	inline static int32_t get_offset_of_type_7() { return static_cast<int32_t>(offsetof(JsonData_tB6316B120F536B8E6E0553E698129B2957074324, ___type_7)); }
	inline int32_t get_type_7() const { return ___type_7; }
	inline int32_t* get_address_of_type_7() { return &___type_7; }
	inline void set_type_7(int32_t value)
	{
		___type_7 = value;
	}

	inline static int32_t get_offset_of_object_list_8() { return static_cast<int32_t>(offsetof(JsonData_tB6316B120F536B8E6E0553E698129B2957074324, ___object_list_8)); }
	inline RuntimeObject* get_object_list_8() const { return ___object_list_8; }
	inline RuntimeObject** get_address_of_object_list_8() { return &___object_list_8; }
	inline void set_object_list_8(RuntimeObject* value)
	{
		___object_list_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___object_list_8), (void*)value);
	}
};


// ThirdParty.Json.LitJson.JsonReader
struct  JsonReader_t55C47D33ADAD0247A02AC80480A05B975411C8BE  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<ThirdParty.Json.LitJson.JsonToken> ThirdParty.Json.LitJson.JsonReader::depth
	Stack_1_t46C2E23963A1A3EA7FE0203CFBC57E3BE215701A * ___depth_0;
	// System.Int32 ThirdParty.Json.LitJson.JsonReader::current_input
	int32_t ___current_input_1;
	// System.Int32 ThirdParty.Json.LitJson.JsonReader::current_symbol
	int32_t ___current_symbol_2;
	// System.Boolean ThirdParty.Json.LitJson.JsonReader::end_of_json
	bool ___end_of_json_3;
	// System.Boolean ThirdParty.Json.LitJson.JsonReader::end_of_input
	bool ___end_of_input_4;
	// ThirdParty.Json.LitJson.Lexer ThirdParty.Json.LitJson.JsonReader::lexer
	Lexer_t21B54E1E8FB744EA8586CC4AF3D901AC7255BBED * ___lexer_5;
	// System.Boolean ThirdParty.Json.LitJson.JsonReader::parser_in_string
	bool ___parser_in_string_6;
	// System.Boolean ThirdParty.Json.LitJson.JsonReader::parser_return
	bool ___parser_return_7;
	// System.Boolean ThirdParty.Json.LitJson.JsonReader::read_started
	bool ___read_started_8;
	// System.IO.TextReader ThirdParty.Json.LitJson.JsonReader::reader
	TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * ___reader_9;
	// System.Boolean ThirdParty.Json.LitJson.JsonReader::reader_is_owned
	bool ___reader_is_owned_10;
	// System.Object ThirdParty.Json.LitJson.JsonReader::token_value
	RuntimeObject * ___token_value_11;
	// ThirdParty.Json.LitJson.JsonToken ThirdParty.Json.LitJson.JsonReader::token
	int32_t ___token_12;

public:
	inline static int32_t get_offset_of_depth_0() { return static_cast<int32_t>(offsetof(JsonReader_t55C47D33ADAD0247A02AC80480A05B975411C8BE, ___depth_0)); }
	inline Stack_1_t46C2E23963A1A3EA7FE0203CFBC57E3BE215701A * get_depth_0() const { return ___depth_0; }
	inline Stack_1_t46C2E23963A1A3EA7FE0203CFBC57E3BE215701A ** get_address_of_depth_0() { return &___depth_0; }
	inline void set_depth_0(Stack_1_t46C2E23963A1A3EA7FE0203CFBC57E3BE215701A * value)
	{
		___depth_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___depth_0), (void*)value);
	}

	inline static int32_t get_offset_of_current_input_1() { return static_cast<int32_t>(offsetof(JsonReader_t55C47D33ADAD0247A02AC80480A05B975411C8BE, ___current_input_1)); }
	inline int32_t get_current_input_1() const { return ___current_input_1; }
	inline int32_t* get_address_of_current_input_1() { return &___current_input_1; }
	inline void set_current_input_1(int32_t value)
	{
		___current_input_1 = value;
	}

	inline static int32_t get_offset_of_current_symbol_2() { return static_cast<int32_t>(offsetof(JsonReader_t55C47D33ADAD0247A02AC80480A05B975411C8BE, ___current_symbol_2)); }
	inline int32_t get_current_symbol_2() const { return ___current_symbol_2; }
	inline int32_t* get_address_of_current_symbol_2() { return &___current_symbol_2; }
	inline void set_current_symbol_2(int32_t value)
	{
		___current_symbol_2 = value;
	}

	inline static int32_t get_offset_of_end_of_json_3() { return static_cast<int32_t>(offsetof(JsonReader_t55C47D33ADAD0247A02AC80480A05B975411C8BE, ___end_of_json_3)); }
	inline bool get_end_of_json_3() const { return ___end_of_json_3; }
	inline bool* get_address_of_end_of_json_3() { return &___end_of_json_3; }
	inline void set_end_of_json_3(bool value)
	{
		___end_of_json_3 = value;
	}

	inline static int32_t get_offset_of_end_of_input_4() { return static_cast<int32_t>(offsetof(JsonReader_t55C47D33ADAD0247A02AC80480A05B975411C8BE, ___end_of_input_4)); }
	inline bool get_end_of_input_4() const { return ___end_of_input_4; }
	inline bool* get_address_of_end_of_input_4() { return &___end_of_input_4; }
	inline void set_end_of_input_4(bool value)
	{
		___end_of_input_4 = value;
	}

	inline static int32_t get_offset_of_lexer_5() { return static_cast<int32_t>(offsetof(JsonReader_t55C47D33ADAD0247A02AC80480A05B975411C8BE, ___lexer_5)); }
	inline Lexer_t21B54E1E8FB744EA8586CC4AF3D901AC7255BBED * get_lexer_5() const { return ___lexer_5; }
	inline Lexer_t21B54E1E8FB744EA8586CC4AF3D901AC7255BBED ** get_address_of_lexer_5() { return &___lexer_5; }
	inline void set_lexer_5(Lexer_t21B54E1E8FB744EA8586CC4AF3D901AC7255BBED * value)
	{
		___lexer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lexer_5), (void*)value);
	}

	inline static int32_t get_offset_of_parser_in_string_6() { return static_cast<int32_t>(offsetof(JsonReader_t55C47D33ADAD0247A02AC80480A05B975411C8BE, ___parser_in_string_6)); }
	inline bool get_parser_in_string_6() const { return ___parser_in_string_6; }
	inline bool* get_address_of_parser_in_string_6() { return &___parser_in_string_6; }
	inline void set_parser_in_string_6(bool value)
	{
		___parser_in_string_6 = value;
	}

	inline static int32_t get_offset_of_parser_return_7() { return static_cast<int32_t>(offsetof(JsonReader_t55C47D33ADAD0247A02AC80480A05B975411C8BE, ___parser_return_7)); }
	inline bool get_parser_return_7() const { return ___parser_return_7; }
	inline bool* get_address_of_parser_return_7() { return &___parser_return_7; }
	inline void set_parser_return_7(bool value)
	{
		___parser_return_7 = value;
	}

	inline static int32_t get_offset_of_read_started_8() { return static_cast<int32_t>(offsetof(JsonReader_t55C47D33ADAD0247A02AC80480A05B975411C8BE, ___read_started_8)); }
	inline bool get_read_started_8() const { return ___read_started_8; }
	inline bool* get_address_of_read_started_8() { return &___read_started_8; }
	inline void set_read_started_8(bool value)
	{
		___read_started_8 = value;
	}

	inline static int32_t get_offset_of_reader_9() { return static_cast<int32_t>(offsetof(JsonReader_t55C47D33ADAD0247A02AC80480A05B975411C8BE, ___reader_9)); }
	inline TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * get_reader_9() const { return ___reader_9; }
	inline TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A ** get_address_of_reader_9() { return &___reader_9; }
	inline void set_reader_9(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * value)
	{
		___reader_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reader_9), (void*)value);
	}

	inline static int32_t get_offset_of_reader_is_owned_10() { return static_cast<int32_t>(offsetof(JsonReader_t55C47D33ADAD0247A02AC80480A05B975411C8BE, ___reader_is_owned_10)); }
	inline bool get_reader_is_owned_10() const { return ___reader_is_owned_10; }
	inline bool* get_address_of_reader_is_owned_10() { return &___reader_is_owned_10; }
	inline void set_reader_is_owned_10(bool value)
	{
		___reader_is_owned_10 = value;
	}

	inline static int32_t get_offset_of_token_value_11() { return static_cast<int32_t>(offsetof(JsonReader_t55C47D33ADAD0247A02AC80480A05B975411C8BE, ___token_value_11)); }
	inline RuntimeObject * get_token_value_11() const { return ___token_value_11; }
	inline RuntimeObject ** get_address_of_token_value_11() { return &___token_value_11; }
	inline void set_token_value_11(RuntimeObject * value)
	{
		___token_value_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___token_value_11), (void*)value);
	}

	inline static int32_t get_offset_of_token_12() { return static_cast<int32_t>(offsetof(JsonReader_t55C47D33ADAD0247A02AC80480A05B975411C8BE, ___token_12)); }
	inline int32_t get_token_12() const { return ___token_12; }
	inline int32_t* get_address_of_token_12() { return &___token_12; }
	inline void set_token_12(int32_t value)
	{
		___token_12 = value;
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
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
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
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void Amazon.Runtime.Internal.Util.LruCache`2<System.Object,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LruCache_2__ctor_m2B3C7F6A3CD92C0BA0240FD5428CD3F49BBB5902_gshared (LruCache_2_tCD8FF07EC3D0E7CB16A6432E4E87573751FC2B4C * __this, int32_t ___maxEntries0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mD42210B24B60EF3FE585AC51F7D237FB59F8C1D7_gshared (HashSet_1_t725419BA457D845928B505ACE877FF46BC71E897 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m5C5C93EC82B1448E5890A57160FE0700FBE62DDC_gshared (HashSet_1_t725419BA457D845928B505ACE877FF46BC71E897 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB  Dictionary_2_GetEnumerator_mF1CF1D13F3E70C6D20D96D9AC88E44454E4C0053_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  Enumerator_get_Current_m5B32A9FC8294CB723DCD1171744B32E1775B6318_gshared_inline (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m9B9FB07EC2C1D82E921C9316A4E0901C933BBF6C_gshared (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mE363888280B72ED50538416C060EF9FC94B3BB00_gshared (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB * __this, const RuntimeMethod* method);
// !!0 Amazon.AWSConfigs::GetObject<System.Object>(System.Xml.Linq.XElement,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AWSConfigs_GetObject_TisRuntimeObject_mA0856BE6328A297D1DFCA1D7100D5DB8B0EE690F_gshared (XElement_t19F18C253C1E4E22F010C470A5181AB7BD0B5E95 * ___rootElement0, String_t* ___propertyName1, const RuntimeMethod* method);

// System.Void Amazon.Runtime.Internal.Util.LruCache`2<System.String,Amazon.RegionEndpoint>::.ctor(System.Int32)
inline void LruCache_2__ctor_m6C260E9D463CEB49EC706B6DA38D19DA2228D7A3 (LruCache_2_t1C9BE3EF059C467F8BA7871B870BB16DCC8F7FE3 * __this, int32_t ___maxEntries0, const RuntimeMethod* method)
{
	((  void (*) (LruCache_2_t1C9BE3EF059C467F8BA7871B870BB16DCC8F7FE3 *, int32_t, const RuntimeMethod*))LruCache_2__ctor_m2B3C7F6A3CD92C0BA0240FD5428CD3F49BBB5902_gshared)(__this, ___maxEntries0, method);
}
// System.Void Amazon.S3.Util.BucketRegionDetector::set_BucketRegionCache(Amazon.Runtime.Internal.Util.LruCache`2<System.String,Amazon.RegionEndpoint>)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BucketRegionDetector_set_BucketRegionCache_m68DE7E004750168841DD06DB3DEFF53370ACFEC7_inline (LruCache_2_t1C9BE3EF059C467F8BA7871B870BB16DCC8F7FE3 * ___value0, const RuntimeMethod* method);
// System.Double System.Math::Pow(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Pow_m9CD842663B1A2FA4C66EEFFC6F0D705B40BE46F1 (double ___x0, double ___y1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor()
inline void HashSet_1__ctor_m99068A46E42F05504E434B1D6763629F4D94B87E (HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E *, const RuntimeMethod*))HashSet_1__ctor_mD42210B24B60EF3FE585AC51F7D237FB59F8C1D7_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Add(!0)
inline bool HashSet_1_Add_m73EFAE0E6A574BC59B1B8977088B4F5A802176F9 (HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E *, String_t*, const RuntimeMethod*))HashSet_1_Add_m5C5C93EC82B1448E5890A57160FE0700FBE62DDC_gshared)(__this, ___item0, method);
}
// System.Boolean Amazon.Runtime.ImmutableCredentials::get_UseToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImmutableCredentials_get_UseToken_m3819927FD658ED2F6D313D67A1843B016C5FA3A4 (ImmutableCredentials_tCD6CA6B5DF58E461FA5BC0CE8160248EFA24DBFE * __this, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9 (const RuntimeMethod* method);
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D (String_t* __this, const RuntimeMethod* method);
// System.String Amazon.Runtime.ImmutableCredentials::get_Token()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ImmutableCredentials_get_Token_mDA5FD2469CE50DDD3B01F3769C3DF4CA5F873C32_inline (ImmutableCredentials_tCD6CA6B5DF58E461FA5BC0CE8160248EFA24DBFE * __this, const RuntimeMethod* method);
// System.Byte[] Amazon.S3.Util.S3PostUploadSignedPolicy::addTokenToPolicy(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* S3PostUploadSignedPolicy_addTokenToPolicy_m30EA22CC5B378ED9B357975AE6DD8A23C9F9BC01 (String_t* ___policy0, String_t* ___token1, const RuntimeMethod* method);
// System.String System.Convert::ToBase64String(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToBase64String_mF201749AD724C437524C8A6108519470A0F65B84 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___inArray0, const RuntimeMethod* method);
// Amazon.Util.ICryptoUtil Amazon.Util.CryptoUtilFactory::get_CryptoInstance()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* CryptoUtilFactory_get_CryptoInstance_m2B76147B49F3163473A935FD83F410162A21C695_inline (const RuntimeMethod* method);
// System.String Amazon.Runtime.ImmutableCredentials::get_SecretKey()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ImmutableCredentials_get_SecretKey_m0190DBE6E5D41095BA45523E1B28171F0A72D3D3_inline (ImmutableCredentials_tCD6CA6B5DF58E461FA5BC0CE8160248EFA24DBFE * __this, const RuntimeMethod* method);
// System.Void Amazon.S3.Util.S3PostUploadSignedPolicy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void S3PostUploadSignedPolicy__ctor_mECA52D4348793CA4295DFEE550E363064BF330DE (S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * __this, const RuntimeMethod* method);
// System.Void Amazon.S3.Util.S3PostUploadSignedPolicy::set_Policy(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void S3PostUploadSignedPolicy_set_Policy_mDFCDCFC777781B79CCC35CA3293F2C32E1FC223D_inline (S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Amazon.S3.Util.S3PostUploadSignedPolicy::set_Signature(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void S3PostUploadSignedPolicy_set_Signature_m89B89EFDF00E438E9D4B5E9C41CF0E3FF605DB27_inline (S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String Amazon.Runtime.ImmutableCredentials::get_AccessKey()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ImmutableCredentials_get_AccessKey_m77BE2374E72A92E3A9F4116F5CB2347E502E432F_inline (ImmutableCredentials_tCD6CA6B5DF58E461FA5BC0CE8160248EFA24DBFE * __this, const RuntimeMethod* method);
// System.Void Amazon.S3.Util.S3PostUploadSignedPolicy::set_AccessKeyId(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void S3PostUploadSignedPolicy_set_AccessKeyId_m7610299592CCAF92EBE8C73D924835B31C613ED7_inline (S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Amazon.S3.Util.S3PostUploadSignedPolicy::set_SecurityToken(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void S3PostUploadSignedPolicy_set_SecurityToken_mC7D685FED68BD3F68CD8F2C322A1FC7AF3CEB95B_inline (S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Amazon.S3.Util.S3PostUploadSignedPolicy::set_SignatureVersion(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void S3PostUploadSignedPolicy_set_SignatureVersion_m5F27B9968EADA3F9EBA0E6EFCCBEFF71DDAE5929_inline (S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * __this, String_t* ___value0, const RuntimeMethod* method);
// System.DateTime Amazon.Util.AWSSDKUtils::get_CorrectedUtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  AWSSDKUtils_get_CorrectedUtcNow_m245B33A7581121C4E58F485F5DE10199C1208A15 (const RuntimeMethod* method);
// System.String Amazon.Runtime.Internal.Auth.AWS4Signer::FormatDateTime(System.DateTime,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWS4Signer_FormatDateTime_mB2BE2EACE967A911F9B9EF43C107F2C34F8C2C70 (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___dt0, String_t* ___formatString1, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72 (const RuntimeMethod* method);
// System.String Amazon.RegionEndpoint::get_SystemName()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* RegionEndpoint_get_SystemName_m80AA7E67BD0A75C2ACEE4F7A9B6122EE61F09BD4_inline (RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mF68EE0DEC1AA5ADE9DFEF9AE0508E428FBB10EFD (RuntimeObject* ___provider0, String_t* ___format1, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(!0,!1)
inline void Dictionary_2_Add_m8E1E97EC586BFF6D3F84BB3429DF6198853F25AC (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// System.Byte[] Amazon.S3.Util.S3PostUploadSignedPolicy::addConditionsToPolicy(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* S3PostUploadSignedPolicy_addConditionsToPolicy_mC131808DC38F695CE88C2B0C902CEB21B347DF43 (String_t* ___policy0, Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * ___newConditions1, const RuntimeMethod* method);
// System.Byte[] Amazon.Runtime.Internal.Auth.AWS4Signer::ComposeSigningKey(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* AWS4Signer_ComposeSigningKey_m2AC7B3F31C40B2480AA1D6FB73D7DDC9165735FF (String_t* ___awsSecretAccessKey0, String_t* ___region1, String_t* ___date2, String_t* ___service3, const RuntimeMethod* method);
// System.Byte[] Amazon.Runtime.Internal.Auth.AWS4Signer::ComputeKeyedHash(Amazon.Runtime.SigningAlgorithm,System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* AWS4Signer_ComputeKeyedHash_m588C5351C813483B8AFD985CBB6F679995270DA0 (int32_t ___algorithm0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___key1, String_t* ___data2, const RuntimeMethod* method);
// System.String Amazon.Util.AWSSDKUtils::ToHex(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AWSSDKUtils_ToHex_m9F93403D185FF2B6CE29DF7F262E787E919042CB (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, bool ___lowercase1, const RuntimeMethod* method);
// System.Void Amazon.S3.Util.S3PostUploadSignedPolicy::set_Algorithm(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void S3PostUploadSignedPolicy_set_Algorithm_m52796BB73F5C208E97C0D9E8CF8464E535CCFEFD_inline (S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Amazon.S3.Util.S3PostUploadSignedPolicy::set_Date(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void S3PostUploadSignedPolicy_set_Date_m97728ECCCF02B639BF1846AAE4A4F98D53E07B94_inline (S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Amazon.S3.Util.S3PostUploadSignedPolicy::set_Credential(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void S3PostUploadSignedPolicy_set_Credential_m620B3E34C24EA40B8359010E627E4365E0B239F4_inline (S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void ThirdParty.Json.LitJson.JsonReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_mF652063D4B8937FBD599D1BF8870EA352E65A516 (JsonReader_t55C47D33ADAD0247A02AC80480A05B975411C8BE * __this, String_t* ___json_text0, const RuntimeMethod* method);
// ThirdParty.Json.LitJson.JsonData ThirdParty.Json.LitJson.JsonMapper::ToObject(ThirdParty.Json.LitJson.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * JsonMapper_ToObject_m9C4406B8EB08BE6A6FE843BBA86A433A93889D17 (JsonReader_t55C47D33ADAD0247A02AC80480A05B975411C8BE * ___reader0, const RuntimeMethod* method);
// ThirdParty.Json.LitJson.JsonData ThirdParty.Json.LitJson.JsonData::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * JsonData_get_Item_m74E227854AA343B13C40E26C4F15AF050DA27570 (JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * __this, String_t* ___prop_name0, const RuntimeMethod* method);
// System.Boolean ThirdParty.Json.LitJson.JsonData::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsArray_mB52F91FB3E577B9DDD2E1FB52D6F3EEEA25F986A (JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
inline Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3  Dictionary_2_GetEnumerator_m3378B4792B81EF81397CB9D9A761BD7149BD27F5 (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3  (*) (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mF1CF1D13F3E70C6D20D96D9AC88E44454E4C0053_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
inline KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8  Enumerator_get_Current_mBEC9B470213860581893E0F197CAAE657B8B6C69_inline (Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8  (*) (Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3 *, const RuntimeMethod*))Enumerator_get_Current_m5B32A9FC8294CB723DCD1171744B32E1775B6318_gshared_inline)(__this, method);
}
// ThirdParty.Json.LitJson.JsonData ThirdParty.Json.LitJson.JsonData::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * JsonData_get_Item_m79E7245C805DD2A01C2BBACE937DA2F894B14DBA (JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean ThirdParty.Json.LitJson.JsonData::get_IsObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsObject_m6A7CA733E9A7722F6E2E1DA24F072FC614CA7AD7 (JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m1960AEAA9CE1FE1F69994434FFEAE113BD3AB3C7_inline (KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_mEAF4B15DEEAC6EB29683A5C6569F0F50B4DEBDA2_inline (KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline)(__this, method);
}
// ThirdParty.Json.LitJson.JsonData ThirdParty.Json.LitJson.JsonData::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * JsonData_op_Implicit_mF1BDAD9AA2DE4C2B43DBA399A47D5B8D185D1107 (String_t* ___data0, const RuntimeMethod* method);
// System.Void ThirdParty.Json.LitJson.JsonData::set_Item(System.String,ThirdParty.Json.LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_set_Item_mEC987705D8E776ADC7C12E33004BC9BBFD3E7A19 (JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * __this, String_t* ___prop_name0, JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * ___value1, const RuntimeMethod* method);
// System.Int32 ThirdParty.Json.LitJson.JsonData::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_get_Count_m7E226D7A9F1CB08147D8FD0BED17FCD14FFB4405 (JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * __this, const RuntimeMethod* method);
// System.Void ThirdParty.Json.LitJson.JsonData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m41B877087276E3E9EC0EAE8D65D442F4B68B451F (JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * __this, const RuntimeMethod* method);
// System.Void ThirdParty.Json.LitJson.JsonData::SetJsonType(ThirdParty.Json.LitJson.JsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_SetJsonType_m70E9F89FC574B290E197E72C3472C2CAE93FE44D (JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * __this, int32_t ___type0, const RuntimeMethod* method);
// System.Int32 ThirdParty.Json.LitJson.JsonData::Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_Add_m88834A06E6FD83742394FAC03CF31F3D6D1A5C71 (JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_m6E6A22A8620F5A5582BB67E367BE5086D7D895A6 (Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3 *, const RuntimeMethod*))Enumerator_MoveNext_m9B9FB07EC2C1D82E921C9316A4E0901C933BBF6C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m16C0E963A012498CD27422B463DB327BA4C7A321 (Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3 *, const RuntimeMethod*))Enumerator_Dispose_mE363888280B72ED50538416C060EF9FC94B3BB00_gshared)(__this, method);
}
// System.String ThirdParty.Json.LitJson.JsonMapper::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonMapper_ToJson_m7C63C4EC3F3AA55D20D954D76115C243172CE4CA (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Amazon.Util.Internal.ConfigurationElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigurationElement__ctor_mF921105D2403104EB56463484787DEC198CBFA3B (ConfigurationElement_tA254FE9C962BC7772B2FE9B97B478E24A4480DEE * __this, const RuntimeMethod* method);
// !!0 Amazon.AWSConfigs::GetObject<Amazon.V4ClientSection>(System.Xml.Linq.XElement,System.String)
inline V4ClientSection_t2C28891A824A3E15AF6467DB4841A5411BE080C7 * AWSConfigs_GetObject_TisV4ClientSection_t2C28891A824A3E15AF6467DB4841A5411BE080C7_mC8BED8EDC9D5CD3B27E96F97F96CC4977DB0E2F7 (XElement_t19F18C253C1E4E22F010C470A5181AB7BD0B5E95 * ___rootElement0, String_t* ___propertyName1, const RuntimeMethod* method)
{
	return ((  V4ClientSection_t2C28891A824A3E15AF6467DB4841A5411BE080C7 * (*) (XElement_t19F18C253C1E4E22F010C470A5181AB7BD0B5E95 *, String_t*, const RuntimeMethod*))AWSConfigs_GetObject_TisRuntimeObject_mA0856BE6328A297D1DFCA1D7100D5DB8B0EE690F_gshared)(___rootElement0, ___propertyName1, method);
}
// System.Void Amazon.V4ClientSectionRoot::set_S3(Amazon.V4ClientSection)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void V4ClientSectionRoot_set_S3_mA038859C78EAD5A2589B3BBD4CB36637F199546E_inline (V4ClientSectionRoot_t7503957BFD346A70AF90C1F682CCA04AAA857C62 * __this, V4ClientSection_t2C28891A824A3E15AF6467DB4841A5411BE080C7 * ___value0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Amazon.Runtime.Internal.Util.LruCache`2<System.String,Amazon.RegionEndpoint> Amazon.S3.Util.BucketRegionDetector::get_BucketRegionCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LruCache_2_t1C9BE3EF059C467F8BA7871B870BB16DCC8F7FE3 * BucketRegionDetector_get_BucketRegionCache_m2A167378EA2B6EF273DB2D7CE6D25D9E83DBA038 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BucketRegionDetector_get_BucketRegionCache_m2A167378EA2B6EF273DB2D7CE6D25D9E83DBA038_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BucketRegionDetector_tC2ECE2BEFA6DDAA2D4740E3C70A2BC884B07C836_il2cpp_TypeInfo_var);
		LruCache_2_t1C9BE3EF059C467F8BA7871B870BB16DCC8F7FE3 * L_0 = ((BucketRegionDetector_tC2ECE2BEFA6DDAA2D4740E3C70A2BC884B07C836_StaticFields*)il2cpp_codegen_static_fields_for(BucketRegionDetector_tC2ECE2BEFA6DDAA2D4740E3C70A2BC884B07C836_il2cpp_TypeInfo_var))->get_U3CBucketRegionCacheU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Amazon.S3.Util.BucketRegionDetector::set_BucketRegionCache(Amazon.Runtime.Internal.Util.LruCache`2<System.String,Amazon.RegionEndpoint>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BucketRegionDetector_set_BucketRegionCache_m68DE7E004750168841DD06DB3DEFF53370ACFEC7 (LruCache_2_t1C9BE3EF059C467F8BA7871B870BB16DCC8F7FE3 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BucketRegionDetector_set_BucketRegionCache_m68DE7E004750168841DD06DB3DEFF53370ACFEC7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		LruCache_2_t1C9BE3EF059C467F8BA7871B870BB16DCC8F7FE3 * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(BucketRegionDetector_tC2ECE2BEFA6DDAA2D4740E3C70A2BC884B07C836_il2cpp_TypeInfo_var);
		((BucketRegionDetector_tC2ECE2BEFA6DDAA2D4740E3C70A2BC884B07C836_StaticFields*)il2cpp_codegen_static_fields_for(BucketRegionDetector_tC2ECE2BEFA6DDAA2D4740E3C70A2BC884B07C836_il2cpp_TypeInfo_var))->set_U3CBucketRegionCacheU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void Amazon.S3.Util.BucketRegionDetector::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BucketRegionDetector__cctor_m402A38B79E4B0D132DA44486EFB7484BEBC277C0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BucketRegionDetector__cctor_m402A38B79E4B0D132DA44486EFB7484BEBC277C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		LruCache_2_t1C9BE3EF059C467F8BA7871B870BB16DCC8F7FE3 * L_0 = (LruCache_2_t1C9BE3EF059C467F8BA7871B870BB16DCC8F7FE3 *)il2cpp_codegen_object_new(LruCache_2_t1C9BE3EF059C467F8BA7871B870BB16DCC8F7FE3_il2cpp_TypeInfo_var);
		LruCache_2__ctor_m6C260E9D463CEB49EC706B6DA38D19DA2228D7A3(L_0, ((int32_t)300), /*hidden argument*/LruCache_2__ctor_m6C260E9D463CEB49EC706B6DA38D19DA2228D7A3_RuntimeMethod_var);
		BucketRegionDetector_set_BucketRegionCache_m68DE7E004750168841DD06DB3DEFF53370ACFEC7_inline(L_0, /*hidden argument*/NULL);
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
// System.Void Amazon.S3.Util.S3Constants::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void S3Constants__cctor_mAC1A2A1A077F76E473F96AA414486DB0B75FD0AB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (S3Constants__cctor_mAC1A2A1A077F76E473F96AA414486DB0B75FD0AB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		double L_0 = Math_Pow_m9CD842663B1A2FA4C66EEFFC6F0D705B40BE46F1((2.0), (20.0), /*hidden argument*/NULL);
		((S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields*)il2cpp_codegen_static_fields_for(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_il2cpp_TypeInfo_var))->set_MinPartSize_0(((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)5))), (int64_t)(((int64_t)((int64_t)L_0))))));
		((S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields*)il2cpp_codegen_static_fields_for(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_il2cpp_TypeInfo_var))->set_PostFormDataObjectKey_1(_stringLiteralA62F2225BF70BFACCBC7F1EF2A397836717377DE);
		((S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields*)il2cpp_codegen_static_fields_for(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_il2cpp_TypeInfo_var))->set_PostFormDataAcl_2(_stringLiteral8DC13DA4362FE472761B20B1440AD570818A3980);
		((S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields*)il2cpp_codegen_static_fields_for(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_il2cpp_TypeInfo_var))->set_PostFormDataRedirect_3(_stringLiteral3463148FD1D9A82845A3A65FE133A546C10C92B4);
		((S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields*)il2cpp_codegen_static_fields_for(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_il2cpp_TypeInfo_var))->set_PostFormDataStatus_4(_stringLiteralFE2C820370CCB0238D84E57AAB9BB41E7DFFDB2F);
		((S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields*)il2cpp_codegen_static_fields_for(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_il2cpp_TypeInfo_var))->set_PostFormDataContentType_5(_stringLiteral77D12B97BA61FFCCB079E0DD2EF6809C1E957255);
		((S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields*)il2cpp_codegen_static_fields_for(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_il2cpp_TypeInfo_var))->set_PostFormDataMetaPrefix_6(_stringLiteral310273666E298331311EC06C5B6740E8C16A1D06);
		((S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields*)il2cpp_codegen_static_fields_for(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_il2cpp_TypeInfo_var))->set_PostFormDataXAmzPrefix_7(_stringLiteral5D20CF90606A1D9F08B7012BCD7E3C5618209E0F);
		((S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields*)il2cpp_codegen_static_fields_for(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_il2cpp_TypeInfo_var))->set_PostFormDataAccessKeyId_8(_stringLiteral0BEE937E63DA9067663A47F1E28205E55D8C4B8A);
		((S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields*)il2cpp_codegen_static_fields_for(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_il2cpp_TypeInfo_var))->set_PostFormDataPolicy_9(_stringLiteralBB9CF1418089B3356038FDD24FCBDC9D1A7C42A5);
		((S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields*)il2cpp_codegen_static_fields_for(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_il2cpp_TypeInfo_var))->set_PostFormDataSignature_10(_stringLiteral2F32BE1DC74166373C988EC03B0BD86F0A576919);
		((S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields*)il2cpp_codegen_static_fields_for(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_il2cpp_TypeInfo_var))->set_PostFormDataXAmzSignature_11(_stringLiteralBFA67576E89A9AA695262B98618099157BC834B8);
		((S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields*)il2cpp_codegen_static_fields_for(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_il2cpp_TypeInfo_var))->set_PostFormDataXAmzAlgorithm_12(_stringLiteral3CED814DF66676AAF2883370BAF034A468B42F83);
		((S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields*)il2cpp_codegen_static_fields_for(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_il2cpp_TypeInfo_var))->set_PostFormDataXAmzCredential_13(_stringLiteral390AAD9020178F336D265617078000BEEFE0331C);
		((S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields*)il2cpp_codegen_static_fields_for(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_il2cpp_TypeInfo_var))->set_PostFormDataXAmzDate_14(_stringLiteralD79D841BB2589F904EB872C10FEDD2E3E5DAED74);
		((S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields*)il2cpp_codegen_static_fields_for(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_il2cpp_TypeInfo_var))->set_PostFormDataSecurityToken_15(_stringLiteralBEA9D742D9BE99CDDE56213FEDF288656933E59F);
		((S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields*)il2cpp_codegen_static_fields_for(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_il2cpp_TypeInfo_var))->set_AmzHeaderMultipartPartsCount_16(_stringLiteralB7CE958A3C8C22644890F05018CBD793598CC33E);
		((S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields*)il2cpp_codegen_static_fields_for(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_il2cpp_TypeInfo_var))->set_AmzHeaderRequestPayer_17(_stringLiteral5F1A8821417C95759C077F2EAFA390B023FDA953);
		((S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields*)il2cpp_codegen_static_fields_for(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_il2cpp_TypeInfo_var))->set_AmzHeaderRequestCharged_18(_stringLiteral3A9F0959A976A18F57E7121E6A41A253408CA0F9);
		((S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields*)il2cpp_codegen_static_fields_for(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_il2cpp_TypeInfo_var))->set_AmzHeaderTagging_19(_stringLiteral2B5E4E69E2190039068F4719A0D4C6D244E81711);
		((S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields*)il2cpp_codegen_static_fields_for(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_il2cpp_TypeInfo_var))->set_AmzHeaderTaggingDirective_20(_stringLiteral8FA413201419DEB7F49BF9FE05BD37F0DB428683);
		((S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields*)il2cpp_codegen_static_fields_for(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_il2cpp_TypeInfo_var))->set_AmzHeaderTaggingCount_21(_stringLiteral4B624B421A85043D04DDF81E8CB3841C906860EE);
		((S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields*)il2cpp_codegen_static_fields_for(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_il2cpp_TypeInfo_var))->set_AmzHeaderRestoreOutputPath_22(_stringLiteral7833D95DCD0F011083FC90FFD5749493511F0728);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = L_1;
		ArrayElementTypeCheck (L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = L_2;
		ArrayElementTypeCheck (L_3, _stringLiteralC14E3DDE339A29A416ACE2E144201E8A61988686);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralC14E3DDE339A29A416ACE2E144201E8A61988686);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = L_3;
		ArrayElementTypeCheck (L_4, _stringLiteral8D3F0CD0CE5F86A528C4339DF19F44AA24899B91);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral8D3F0CD0CE5F86A528C4339DF19F44AA24899B91);
		((S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields*)il2cpp_codegen_static_fields_for(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_il2cpp_TypeInfo_var))->set_BucketVersions_23(L_4);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = L_5;
		ArrayElementTypeCheck (L_6, _stringLiteralAECF0292DA85CB2048D8B648567127D024D4074F);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralAECF0292DA85CB2048D8B648567127D024D4074F);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = L_6;
		ArrayElementTypeCheck (L_7, _stringLiteralC336FCEC997DB68BA1A16FF95D4B5A6B5F133C3B);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralC336FCEC997DB68BA1A16FF95D4B5A6B5F133C3B);
		((S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields*)il2cpp_codegen_static_fields_for(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_il2cpp_TypeInfo_var))->set_MetadataDirectives_24(L_7);
		HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * L_8 = (HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E *)il2cpp_codegen_object_new(HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m99068A46E42F05504E434B1D6763629F4D94B87E(L_8, /*hidden argument*/HashSet_1__ctor_m99068A46E42F05504E434B1D6763629F4D94B87E_RuntimeMethod_var);
		HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * L_9 = L_8;
		HashSet_1_Add_m73EFAE0E6A574BC59B1B8977088B4F5A802176F9(L_9, _stringLiteralFE3C6138E95A1AF273E3E97B63557462B4AD3926, /*hidden argument*/HashSet_1_Add_m73EFAE0E6A574BC59B1B8977088B4F5A802176F9_RuntimeMethod_var);
		HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * L_10 = L_9;
		HashSet_1_Add_m73EFAE0E6A574BC59B1B8977088B4F5A802176F9(L_10, _stringLiteralAAFFC0639435B7CDBAA1C19941E757D5D1B7AC5E, /*hidden argument*/HashSet_1_Add_m73EFAE0E6A574BC59B1B8977088B4F5A802176F9_RuntimeMethod_var);
		HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * L_11 = L_10;
		HashSet_1_Add_m73EFAE0E6A574BC59B1B8977088B4F5A802176F9(L_11, _stringLiteral8EB3489FD48EA99BF65176CAE8DC812855D5293E, /*hidden argument*/HashSet_1_Add_m73EFAE0E6A574BC59B1B8977088B4F5A802176F9_RuntimeMethod_var);
		HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * L_12 = L_11;
		HashSet_1_Add_m73EFAE0E6A574BC59B1B8977088B4F5A802176F9(L_12, _stringLiteral99FD65892E57B41835F4138794A9F31AD84F61FE, /*hidden argument*/HashSet_1_Add_m73EFAE0E6A574BC59B1B8977088B4F5A802176F9_RuntimeMethod_var);
		HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * L_13 = L_12;
		HashSet_1_Add_m73EFAE0E6A574BC59B1B8977088B4F5A802176F9(L_13, _stringLiteralDE3CFFC7AB338619E2DE29993716CB338EA48D2B, /*hidden argument*/HashSet_1_Add_m73EFAE0E6A574BC59B1B8977088B4F5A802176F9_RuntimeMethod_var);
		HashSet_1_tC8214FEC830040D37F12A482FF0284D9C2B9001E * L_14 = L_13;
		HashSet_1_Add_m73EFAE0E6A574BC59B1B8977088B4F5A802176F9(L_14, _stringLiteralF9913041C112CA1B11E7C292F1F89F50EF2313ED, /*hidden argument*/HashSet_1_Add_m73EFAE0E6A574BC59B1B8977088B4F5A802176F9_RuntimeMethod_var);
		((S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields*)il2cpp_codegen_static_fields_for(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_il2cpp_TypeInfo_var))->set_GetObjectExtraSubResources_25(L_14);
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
// Amazon.S3.Util.S3PostUploadSignedPolicy Amazon.S3.Util.S3PostUploadSignedPolicy::GetSignedPolicy(System.String,Amazon.Runtime.AWSCredentials)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * S3PostUploadSignedPolicy_GetSignedPolicy_m83202FEBF628A06D0B32BE6AAF25193D43BF3C1F (String_t* ___policy0, AWSCredentials_tEAA1FCADAF73EBE1DD61967CAC5AA436262D7948 * ___credentials1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (S3PostUploadSignedPolicy_GetSignedPolicy_m83202FEBF628A06D0B32BE6AAF25193D43BF3C1F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ImmutableCredentials_tCD6CA6B5DF58E461FA5BC0CE8160248EFA24DBFE * V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* G_B3_0 = NULL;
	{
		AWSCredentials_tEAA1FCADAF73EBE1DD61967CAC5AA436262D7948 * L_0 = ___credentials1;
		ImmutableCredentials_tCD6CA6B5DF58E461FA5BC0CE8160248EFA24DBFE * L_1 = VirtFuncInvoker0< ImmutableCredentials_tCD6CA6B5DF58E461FA5BC0CE8160248EFA24DBFE * >::Invoke(4 /* Amazon.Runtime.ImmutableCredentials Amazon.Runtime.AWSCredentials::GetCredentials() */, L_0);
		V_0 = L_1;
		ImmutableCredentials_tCD6CA6B5DF58E461FA5BC0CE8160248EFA24DBFE * L_2 = V_0;
		bool L_3 = ImmutableCredentials_get_UseToken_m3819927FD658ED2F6D313D67A1843B016C5FA3A4(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_4 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		String_t* L_5 = ___policy0;
		String_t* L_6 = String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D(L_5, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_4, L_6);
		G_B3_0 = L_7;
		goto IL_002d;
	}

IL_0021:
	{
		String_t* L_8 = ___policy0;
		ImmutableCredentials_tCD6CA6B5DF58E461FA5BC0CE8160248EFA24DBFE * L_9 = V_0;
		String_t* L_10 = ImmutableCredentials_get_Token_mDA5FD2469CE50DDD3B01F3769C3DF4CA5F873C32_inline(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = S3PostUploadSignedPolicy_addTokenToPolicy_m30EA22CC5B378ED9B357975AE6DD8A23C9F9BC01(L_8, L_10, /*hidden argument*/NULL);
		G_B3_0 = L_11;
	}

IL_002d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		String_t* L_12 = Convert_ToBase64String_mF201749AD724C437524C8A6108519470A0F65B84(G_B3_0, /*hidden argument*/NULL);
		V_1 = L_12;
		IL2CPP_RUNTIME_CLASS_INIT(CryptoUtilFactory_t26A78D19624EC9BBBC7C5E91A2ED5DC501E9A7D7_il2cpp_TypeInfo_var);
		RuntimeObject* L_13 = CryptoUtilFactory_get_CryptoInstance_m2B76147B49F3163473A935FD83F410162A21C695_inline(/*hidden argument*/NULL);
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_14 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		String_t* L_15 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_16 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_14, L_15);
		ImmutableCredentials_tCD6CA6B5DF58E461FA5BC0CE8160248EFA24DBFE * L_17 = V_0;
		String_t* L_18 = ImmutableCredentials_get_SecretKey_m0190DBE6E5D41095BA45523E1B28171F0A72D3D3_inline(L_17, /*hidden argument*/NULL);
		String_t* L_19 = InterfaceFuncInvoker3< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t*, int32_t >::Invoke(1 /* System.String Amazon.Util.ICryptoUtil::HMACSign(System.Byte[],System.String,Amazon.Runtime.SigningAlgorithm) */, ICryptoUtil_tA9A8C422236D7AEA4FA0FC8D7498CDE269DE2D1B_il2cpp_TypeInfo_var, L_13, L_16, L_18, 0);
		V_2 = L_19;
		S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * L_20 = (S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C *)il2cpp_codegen_object_new(S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C_il2cpp_TypeInfo_var);
		S3PostUploadSignedPolicy__ctor_mECA52D4348793CA4295DFEE550E363064BF330DE(L_20, /*hidden argument*/NULL);
		S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * L_21 = L_20;
		String_t* L_22 = V_1;
		S3PostUploadSignedPolicy_set_Policy_mDFCDCFC777781B79CCC35CA3293F2C32E1FC223D_inline(L_21, L_22, /*hidden argument*/NULL);
		S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * L_23 = L_21;
		String_t* L_24 = V_2;
		S3PostUploadSignedPolicy_set_Signature_m89B89EFDF00E438E9D4B5E9C41CF0E3FF605DB27_inline(L_23, L_24, /*hidden argument*/NULL);
		S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * L_25 = L_23;
		ImmutableCredentials_tCD6CA6B5DF58E461FA5BC0CE8160248EFA24DBFE * L_26 = V_0;
		String_t* L_27 = ImmutableCredentials_get_AccessKey_m77BE2374E72A92E3A9F4116F5CB2347E502E432F_inline(L_26, /*hidden argument*/NULL);
		S3PostUploadSignedPolicy_set_AccessKeyId_m7610299592CCAF92EBE8C73D924835B31C613ED7_inline(L_25, L_27, /*hidden argument*/NULL);
		S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * L_28 = L_25;
		ImmutableCredentials_tCD6CA6B5DF58E461FA5BC0CE8160248EFA24DBFE * L_29 = V_0;
		String_t* L_30 = ImmutableCredentials_get_Token_mDA5FD2469CE50DDD3B01F3769C3DF4CA5F873C32_inline(L_29, /*hidden argument*/NULL);
		S3PostUploadSignedPolicy_set_SecurityToken_mC7D685FED68BD3F68CD8F2C322A1FC7AF3CEB95B_inline(L_28, L_30, /*hidden argument*/NULL);
		S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * L_31 = L_28;
		S3PostUploadSignedPolicy_set_SignatureVersion_m5F27B9968EADA3F9EBA0E6EFCCBEFF71DDAE5929_inline(L_31, _stringLiteralDA4B9237BACCCDF19C0760CAB7AEC4A8359010B0, /*hidden argument*/NULL);
		return L_31;
	}
}
// Amazon.S3.Util.S3PostUploadSignedPolicy Amazon.S3.Util.S3PostUploadSignedPolicy::GetSignedPolicyV4(System.String,Amazon.Runtime.AWSCredentials,Amazon.RegionEndpoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * S3PostUploadSignedPolicy_GetSignedPolicyV4_mA368E54BFAABC28FFA2007F917CD262BB8734E3C (String_t* ___policy0, AWSCredentials_tEAA1FCADAF73EBE1DD61967CAC5AA436262D7948 * ___credentials1, RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * ___region2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (S3PostUploadSignedPolicy_GetSignedPolicyV4_mA368E54BFAABC28FFA2007F917CD262BB8734E3C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ImmutableCredentials_tCD6CA6B5DF58E461FA5BC0CE8160248EFA24DBFE * V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * V_5 = NULL;
	String_t* V_6 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(AWSSDKUtils_t618E3271B5C2C517127C9A36ECFEB4F0F24891D0_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = AWSSDKUtils_get_CorrectedUtcNow_m245B33A7581121C4E58F485F5DE10199C1208A15(/*hidden argument*/NULL);
		AWSCredentials_tEAA1FCADAF73EBE1DD61967CAC5AA436262D7948 * L_1 = ___credentials1;
		ImmutableCredentials_tCD6CA6B5DF58E461FA5BC0CE8160248EFA24DBFE * L_2 = VirtFuncInvoker0< ImmutableCredentials_tCD6CA6B5DF58E461FA5BC0CE8160248EFA24DBFE * >::Invoke(4 /* Amazon.Runtime.ImmutableCredentials Amazon.Runtime.AWSCredentials::GetCredentials() */, L_1);
		V_0 = L_2;
		V_1 = _stringLiteral26606ED3228857A57CF9DEC00A7E9C3D8400A879;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_3 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(AWS4Signer_t9B2C633B8EDFA9EB133315E443940526345CE60E_il2cpp_TypeInfo_var);
		String_t* L_4 = AWS4Signer_FormatDateTime_mB2BE2EACE967A911F9B9EF43C107F2C34F8C2C70(L_3, _stringLiteralD7E6E1E37BA798B5098FEF9609F7016F5F76DB84, /*hidden argument*/NULL);
		V_2 = L_4;
		String_t* L_5 = AWS4Signer_FormatDateTime_mB2BE2EACE967A911F9B9EF43C107F2C34F8C2C70(L_3, _stringLiteral324587D607818379B89B79135828F4AF9ADDD68F, /*hidden argument*/NULL);
		V_3 = L_5;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_6 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_7;
		ImmutableCredentials_tCD6CA6B5DF58E461FA5BC0CE8160248EFA24DBFE * L_9 = V_0;
		String_t* L_10 = ImmutableCredentials_get_AccessKey_m77BE2374E72A92E3A9F4116F5CB2347E502E432F_inline(L_9, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_8;
		String_t* L_12 = V_2;
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_12);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = L_11;
		RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * L_14 = ___region2;
		String_t* L_15 = RegionEndpoint_get_SystemName_m80AA7E67BD0A75C2ACEE4F7A9B6122EE61F09BD4_inline(L_14, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_15);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = L_13;
		ArrayElementTypeCheck (L_16, _stringLiteralDD33A084BA223DD231B0AA962F77A5920017BC8B);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteralDD33A084BA223DD231B0AA962F77A5920017BC8B);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = L_16;
		ArrayElementTypeCheck (L_17, _stringLiteral40A521DE757837EA103BB1E535B1572393987C44);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral40A521DE757837EA103BB1E535B1572393987C44);
		String_t* L_18 = String_Format_mF68EE0DEC1AA5ADE9DFEF9AE0508E428FBB10EFD(L_6, _stringLiteralB92FC054A02D595703E497C743CBF5289FB906CA, L_17, /*hidden argument*/NULL);
		V_4 = L_18;
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_19 = (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *)il2cpp_codegen_object_new(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B(L_19, /*hidden argument*/Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B_RuntimeMethod_var);
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_20 = L_19;
		IL2CPP_RUNTIME_CLASS_INIT(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_il2cpp_TypeInfo_var);
		String_t* L_21 = ((S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields*)il2cpp_codegen_static_fields_for(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_il2cpp_TypeInfo_var))->get_PostFormDataXAmzCredential_13();
		String_t* L_22 = V_4;
		Dictionary_2_Add_m8E1E97EC586BFF6D3F84BB3429DF6198853F25AC(L_20, L_21, L_22, /*hidden argument*/Dictionary_2_Add_m8E1E97EC586BFF6D3F84BB3429DF6198853F25AC_RuntimeMethod_var);
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_23 = L_20;
		String_t* L_24 = ((S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields*)il2cpp_codegen_static_fields_for(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_il2cpp_TypeInfo_var))->get_PostFormDataXAmzAlgorithm_12();
		String_t* L_25 = V_1;
		Dictionary_2_Add_m8E1E97EC586BFF6D3F84BB3429DF6198853F25AC(L_23, L_24, L_25, /*hidden argument*/Dictionary_2_Add_m8E1E97EC586BFF6D3F84BB3429DF6198853F25AC_RuntimeMethod_var);
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_26 = L_23;
		String_t* L_27 = ((S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields*)il2cpp_codegen_static_fields_for(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_il2cpp_TypeInfo_var))->get_PostFormDataXAmzDate_14();
		String_t* L_28 = V_3;
		Dictionary_2_Add_m8E1E97EC586BFF6D3F84BB3429DF6198853F25AC(L_26, L_27, L_28, /*hidden argument*/Dictionary_2_Add_m8E1E97EC586BFF6D3F84BB3429DF6198853F25AC_RuntimeMethod_var);
		V_5 = L_26;
		ImmutableCredentials_tCD6CA6B5DF58E461FA5BC0CE8160248EFA24DBFE * L_29 = V_0;
		bool L_30 = ImmutableCredentials_get_UseToken_m3819927FD658ED2F6D313D67A1843B016C5FA3A4(L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00ac;
		}
	}
	{
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_31 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_il2cpp_TypeInfo_var);
		String_t* L_32 = ((S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields*)il2cpp_codegen_static_fields_for(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_il2cpp_TypeInfo_var))->get_PostFormDataSecurityToken_15();
		ImmutableCredentials_tCD6CA6B5DF58E461FA5BC0CE8160248EFA24DBFE * L_33 = V_0;
		String_t* L_34 = ImmutableCredentials_get_Token_mDA5FD2469CE50DDD3B01F3769C3DF4CA5F873C32_inline(L_33, /*hidden argument*/NULL);
		Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD(L_31, L_32, L_34, /*hidden argument*/Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD_RuntimeMethod_var);
	}

IL_00ac:
	{
		String_t* L_35 = ___policy0;
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_36 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_37 = S3PostUploadSignedPolicy_addConditionsToPolicy_mC131808DC38F695CE88C2B0C902CEB21B347DF43(L_35, L_36, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		String_t* L_38 = Convert_ToBase64String_mF201749AD724C437524C8A6108519470A0F65B84(L_37, /*hidden argument*/NULL);
		V_6 = L_38;
		ImmutableCredentials_tCD6CA6B5DF58E461FA5BC0CE8160248EFA24DBFE * L_39 = V_0;
		String_t* L_40 = ImmutableCredentials_get_SecretKey_m0190DBE6E5D41095BA45523E1B28171F0A72D3D3_inline(L_39, /*hidden argument*/NULL);
		RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * L_41 = ___region2;
		String_t* L_42 = RegionEndpoint_get_SystemName_m80AA7E67BD0A75C2ACEE4F7A9B6122EE61F09BD4_inline(L_41, /*hidden argument*/NULL);
		String_t* L_43 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(AWS4Signer_t9B2C633B8EDFA9EB133315E443940526345CE60E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_44 = AWS4Signer_ComposeSigningKey_m2AC7B3F31C40B2480AA1D6FB73D7DDC9165735FF(L_40, L_42, L_43, _stringLiteralDD33A084BA223DD231B0AA962F77A5920017BC8B, /*hidden argument*/NULL);
		V_7 = L_44;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_45 = V_7;
		String_t* L_46 = V_6;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_47 = AWS4Signer_ComputeKeyedHash_m588C5351C813483B8AFD985CBB6F679995270DA0(1, L_45, L_46, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(AWSSDKUtils_t618E3271B5C2C517127C9A36ECFEB4F0F24891D0_il2cpp_TypeInfo_var);
		String_t* L_48 = AWSSDKUtils_ToHex_m9F93403D185FF2B6CE29DF7F262E787E919042CB(L_47, (bool)1, /*hidden argument*/NULL);
		V_8 = L_48;
		S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * L_49 = (S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C *)il2cpp_codegen_object_new(S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C_il2cpp_TypeInfo_var);
		S3PostUploadSignedPolicy__ctor_mECA52D4348793CA4295DFEE550E363064BF330DE(L_49, /*hidden argument*/NULL);
		S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * L_50 = L_49;
		String_t* L_51 = V_6;
		S3PostUploadSignedPolicy_set_Policy_mDFCDCFC777781B79CCC35CA3293F2C32E1FC223D_inline(L_50, L_51, /*hidden argument*/NULL);
		S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * L_52 = L_50;
		String_t* L_53 = V_8;
		S3PostUploadSignedPolicy_set_Signature_m89B89EFDF00E438E9D4B5E9C41CF0E3FF605DB27_inline(L_52, L_53, /*hidden argument*/NULL);
		S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * L_54 = L_52;
		ImmutableCredentials_tCD6CA6B5DF58E461FA5BC0CE8160248EFA24DBFE * L_55 = V_0;
		String_t* L_56 = ImmutableCredentials_get_AccessKey_m77BE2374E72A92E3A9F4116F5CB2347E502E432F_inline(L_55, /*hidden argument*/NULL);
		S3PostUploadSignedPolicy_set_AccessKeyId_m7610299592CCAF92EBE8C73D924835B31C613ED7_inline(L_54, L_56, /*hidden argument*/NULL);
		S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * L_57 = L_54;
		ImmutableCredentials_tCD6CA6B5DF58E461FA5BC0CE8160248EFA24DBFE * L_58 = V_0;
		String_t* L_59 = ImmutableCredentials_get_Token_mDA5FD2469CE50DDD3B01F3769C3DF4CA5F873C32_inline(L_58, /*hidden argument*/NULL);
		S3PostUploadSignedPolicy_set_SecurityToken_mC7D685FED68BD3F68CD8F2C322A1FC7AF3CEB95B_inline(L_57, L_59, /*hidden argument*/NULL);
		S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * L_60 = L_57;
		S3PostUploadSignedPolicy_set_SignatureVersion_m5F27B9968EADA3F9EBA0E6EFCCBEFF71DDAE5929_inline(L_60, _stringLiteral1B6453892473A467D07372D45EB05ABC2031647A, /*hidden argument*/NULL);
		S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * L_61 = L_60;
		String_t* L_62 = V_1;
		S3PostUploadSignedPolicy_set_Algorithm_m52796BB73F5C208E97C0D9E8CF8464E535CCFEFD_inline(L_61, L_62, /*hidden argument*/NULL);
		S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * L_63 = L_61;
		String_t* L_64 = V_3;
		S3PostUploadSignedPolicy_set_Date_m97728ECCCF02B639BF1846AAE4A4F98D53E07B94_inline(L_63, L_64, /*hidden argument*/NULL);
		S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * L_65 = L_63;
		String_t* L_66 = V_4;
		S3PostUploadSignedPolicy_set_Credential_m620B3E34C24EA40B8359010E627E4365E0B239F4_inline(L_65, L_66, /*hidden argument*/NULL);
		return L_65;
	}
}
// System.Byte[] Amazon.S3.Util.S3PostUploadSignedPolicy::addConditionsToPolicy(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* S3PostUploadSignedPolicy_addConditionsToPolicy_mC131808DC38F695CE88C2B0C902CEB21B347DF43 (String_t* ___policy0, Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * ___newConditions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (S3PostUploadSignedPolicy_addConditionsToPolicy_mC131808DC38F695CE88C2B0C902CEB21B347DF43_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * V_0 = NULL;
	JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * V_1 = NULL;
	Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3  V_2;
	memset((&V_2), 0, sizeof(V_2));
	KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8  V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	int32_t V_5 = 0;
	JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * V_6 = NULL;
	JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		String_t* L_0 = ___policy0;
		JsonReader_t55C47D33ADAD0247A02AC80480A05B975411C8BE * L_1 = (JsonReader_t55C47D33ADAD0247A02AC80480A05B975411C8BE *)il2cpp_codegen_object_new(JsonReader_t55C47D33ADAD0247A02AC80480A05B975411C8BE_il2cpp_TypeInfo_var);
		JsonReader__ctor_mF652063D4B8937FBD599D1BF8870EA352E65A516(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t76FE6C1EEFC89324851C4258A9440A5E51FBF4C7_il2cpp_TypeInfo_var);
		JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * L_2 = JsonMapper_ToObject_m9C4406B8EB08BE6A6FE843BBA86A433A93889D17(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * L_3 = V_0;
		JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * L_4 = JsonData_get_Item_m74E227854AA343B13C40E26C4F15AF050DA27570(L_3, _stringLiteralF8EB525D26E1BFCCF25865E02EEF17703B609C66, /*hidden argument*/NULL);
		V_1 = L_4;
		JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * L_5 = V_1;
		if (!L_5)
		{
			goto IL_00e7;
		}
	}
	{
		JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * L_6 = V_1;
		bool L_7 = JsonData_get_IsArray_mB52F91FB3E577B9DDD2E1FB52D6F3EEEA25F986A(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_00e7;
		}
	}
	{
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_8 = ___newConditions1;
		Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3  L_9 = Dictionary_2_GetEnumerator_m3378B4792B81EF81397CB9D9A761BD7149BD27F5(L_8, /*hidden argument*/Dictionary_2_GetEnumerator_m3378B4792B81EF81397CB9D9A761BD7149BD27F5_RuntimeMethod_var);
		V_2 = L_9;
	}

IL_0030:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00cb;
		}

IL_0035:
		{
			KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8  L_10 = Enumerator_get_Current_mBEC9B470213860581893E0F197CAAE657B8B6C69_inline((Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3 *)(&V_2), /*hidden argument*/Enumerator_get_Current_mBEC9B470213860581893E0F197CAAE657B8B6C69_RuntimeMethod_var);
			V_3 = L_10;
			V_4 = (bool)0;
			V_5 = 0;
			goto IL_008b;
		}

IL_0045:
		{
			JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * L_11 = V_1;
			int32_t L_12 = V_5;
			JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * L_13 = JsonData_get_Item_m79E7245C805DD2A01C2BBACE937DA2F894B14DBA(L_11, L_12, /*hidden argument*/NULL);
			V_6 = L_13;
			JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * L_14 = V_6;
			bool L_15 = JsonData_get_IsObject_m6A7CA733E9A7722F6E2E1DA24F072FC614CA7AD7(L_14, /*hidden argument*/NULL);
			if (!L_15)
			{
				goto IL_0085;
			}
		}

IL_0058:
		{
			JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * L_16 = V_6;
			String_t* L_17 = KeyValuePair_2_get_Key_m1960AEAA9CE1FE1F69994434FFEAE113BD3AB3C7_inline((KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m1960AEAA9CE1FE1F69994434FFEAE113BD3AB3C7_RuntimeMethod_var);
			JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * L_18 = JsonData_get_Item_m74E227854AA343B13C40E26C4F15AF050DA27570(L_16, L_17, /*hidden argument*/NULL);
			if (!L_18)
			{
				goto IL_0085;
			}
		}

IL_0068:
		{
			JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * L_19 = V_6;
			String_t* L_20 = KeyValuePair_2_get_Key_m1960AEAA9CE1FE1F69994434FFEAE113BD3AB3C7_inline((KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m1960AEAA9CE1FE1F69994434FFEAE113BD3AB3C7_RuntimeMethod_var);
			String_t* L_21 = KeyValuePair_2_get_Value_mEAF4B15DEEAC6EB29683A5C6569F0F50B4DEBDA2_inline((KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_mEAF4B15DEEAC6EB29683A5C6569F0F50B4DEBDA2_RuntimeMethod_var);
			JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * L_22 = JsonData_op_Implicit_mF1BDAD9AA2DE4C2B43DBA399A47D5B8D185D1107(L_21, /*hidden argument*/NULL);
			JsonData_set_Item_mEC987705D8E776ADC7C12E33004BC9BBFD3E7A19(L_19, L_20, L_22, /*hidden argument*/NULL);
			V_4 = (bool)1;
		}

IL_0085:
		{
			int32_t L_23 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
		}

IL_008b:
		{
			int32_t L_24 = V_5;
			JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * L_25 = V_1;
			int32_t L_26 = JsonData_get_Count_m7E226D7A9F1CB08147D8FD0BED17FCD14FFB4405(L_25, /*hidden argument*/NULL);
			if ((((int32_t)L_24) < ((int32_t)L_26)))
			{
				goto IL_0045;
			}
		}

IL_0095:
		{
			bool L_27 = V_4;
			if (L_27)
			{
				goto IL_00cb;
			}
		}

IL_0099:
		{
			JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * L_28 = (JsonData_tB6316B120F536B8E6E0553E698129B2957074324 *)il2cpp_codegen_object_new(JsonData_tB6316B120F536B8E6E0553E698129B2957074324_il2cpp_TypeInfo_var);
			JsonData__ctor_m41B877087276E3E9EC0EAE8D65D442F4B68B451F(L_28, /*hidden argument*/NULL);
			V_7 = L_28;
			JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * L_29 = V_7;
			JsonData_SetJsonType_m70E9F89FC574B290E197E72C3472C2CAE93FE44D(L_29, 1, /*hidden argument*/NULL);
			JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * L_30 = V_7;
			String_t* L_31 = KeyValuePair_2_get_Key_m1960AEAA9CE1FE1F69994434FFEAE113BD3AB3C7_inline((KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Key_m1960AEAA9CE1FE1F69994434FFEAE113BD3AB3C7_RuntimeMethod_var);
			String_t* L_32 = KeyValuePair_2_get_Value_mEAF4B15DEEAC6EB29683A5C6569F0F50B4DEBDA2_inline((KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 *)(&V_3), /*hidden argument*/KeyValuePair_2_get_Value_mEAF4B15DEEAC6EB29683A5C6569F0F50B4DEBDA2_RuntimeMethod_var);
			JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * L_33 = JsonData_op_Implicit_mF1BDAD9AA2DE4C2B43DBA399A47D5B8D185D1107(L_32, /*hidden argument*/NULL);
			JsonData_set_Item_mEC987705D8E776ADC7C12E33004BC9BBFD3E7A19(L_30, L_31, L_33, /*hidden argument*/NULL);
			JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * L_34 = V_1;
			JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * L_35 = V_7;
			JsonData_Add_m88834A06E6FD83742394FAC03CF31F3D6D1A5C71(L_34, L_35, /*hidden argument*/NULL);
		}

IL_00cb:
		{
			bool L_36 = Enumerator_MoveNext_m6E6A22A8620F5A5582BB67E367BE5086D7D895A6((Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m6E6A22A8620F5A5582BB67E367BE5086D7D895A6_RuntimeMethod_var);
			if (L_36)
			{
				goto IL_0035;
			}
		}

IL_00d7:
		{
			IL2CPP_LEAVE(0xE7, FINALLY_00d9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00d9;
	}

FINALLY_00d9:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m16C0E963A012498CD27422B463DB327BA4C7A321((Enumerator_tEE17C0B6306B38B4D74140569F93EA8C3BDD05A3 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m16C0E963A012498CD27422B463DB327BA4C7A321_RuntimeMethod_var);
		IL2CPP_END_FINALLY(217)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(217)
	{
		IL2CPP_JUMP_TBL(0xE7, IL_00e7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00e7:
	{
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_37 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * L_38 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t76FE6C1EEFC89324851C4258A9440A5E51FBF4C7_il2cpp_TypeInfo_var);
		String_t* L_39 = JsonMapper_ToJson_m7C63C4EC3F3AA55D20D954D76115C243172CE4CA(L_38, /*hidden argument*/NULL);
		String_t* L_40 = String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D(L_39, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_41 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_37, L_40);
		return L_41;
	}
}
// System.Byte[] Amazon.S3.Util.S3PostUploadSignedPolicy::addTokenToPolicy(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* S3PostUploadSignedPolicy_addTokenToPolicy_m30EA22CC5B378ED9B357975AE6DD8A23C9F9BC01 (String_t* ___policy0, String_t* ___token1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (S3PostUploadSignedPolicy_addTokenToPolicy_m30EA22CC5B378ED9B357975AE6DD8A23C9F9BC01_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * V_0 = NULL;
	bool V_1 = false;
	JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * V_2 = NULL;
	int32_t V_3 = 0;
	JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * V_4 = NULL;
	JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * V_5 = NULL;
	{
		String_t* L_0 = ___policy0;
		JsonReader_t55C47D33ADAD0247A02AC80480A05B975411C8BE * L_1 = (JsonReader_t55C47D33ADAD0247A02AC80480A05B975411C8BE *)il2cpp_codegen_object_new(JsonReader_t55C47D33ADAD0247A02AC80480A05B975411C8BE_il2cpp_TypeInfo_var);
		JsonReader__ctor_mF652063D4B8937FBD599D1BF8870EA352E65A516(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t76FE6C1EEFC89324851C4258A9440A5E51FBF4C7_il2cpp_TypeInfo_var);
		JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * L_2 = JsonMapper_ToObject_m9C4406B8EB08BE6A6FE843BBA86A433A93889D17(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = (bool)0;
		JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * L_3 = V_0;
		JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * L_4 = JsonData_get_Item_m74E227854AA343B13C40E26C4F15AF050DA27570(L_3, _stringLiteralF8EB525D26E1BFCCF25865E02EEF17703B609C66, /*hidden argument*/NULL);
		V_2 = L_4;
		JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * L_5 = V_2;
		if (!L_5)
		{
			goto IL_0097;
		}
	}
	{
		JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * L_6 = V_2;
		bool L_7 = JsonData_get_IsArray_mB52F91FB3E577B9DDD2E1FB52D6F3EEEA25F986A(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0097;
		}
	}
	{
		V_3 = 0;
		goto IL_0061;
	}

IL_0029:
	{
		JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * L_8 = V_2;
		int32_t L_9 = V_3;
		JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * L_10 = JsonData_get_Item_m79E7245C805DD2A01C2BBACE937DA2F894B14DBA(L_8, L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * L_11 = V_4;
		bool L_12 = JsonData_get_IsObject_m6A7CA733E9A7722F6E2E1DA24F072FC614CA7AD7(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_005d;
		}
	}
	{
		JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * L_13 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_il2cpp_TypeInfo_var);
		String_t* L_14 = ((S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields*)il2cpp_codegen_static_fields_for(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_il2cpp_TypeInfo_var))->get_PostFormDataSecurityToken_15();
		JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * L_15 = JsonData_get_Item_m74E227854AA343B13C40E26C4F15AF050DA27570(L_13, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_005d;
		}
	}
	{
		JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * L_16 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_il2cpp_TypeInfo_var);
		String_t* L_17 = ((S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields*)il2cpp_codegen_static_fields_for(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_il2cpp_TypeInfo_var))->get_PostFormDataSecurityToken_15();
		String_t* L_18 = ___token1;
		JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * L_19 = JsonData_op_Implicit_mF1BDAD9AA2DE4C2B43DBA399A47D5B8D185D1107(L_18, /*hidden argument*/NULL);
		JsonData_set_Item_mEC987705D8E776ADC7C12E33004BC9BBFD3E7A19(L_16, L_17, L_19, /*hidden argument*/NULL);
		V_1 = (bool)1;
	}

IL_005d:
	{
		int32_t L_20 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0061:
	{
		int32_t L_21 = V_3;
		JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * L_22 = V_2;
		int32_t L_23 = JsonData_get_Count_m7E226D7A9F1CB08147D8FD0BED17FCD14FFB4405(L_22, /*hidden argument*/NULL);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_0029;
		}
	}
	{
		bool L_24 = V_1;
		if (L_24)
		{
			goto IL_0097;
		}
	}
	{
		JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * L_25 = (JsonData_tB6316B120F536B8E6E0553E698129B2957074324 *)il2cpp_codegen_object_new(JsonData_tB6316B120F536B8E6E0553E698129B2957074324_il2cpp_TypeInfo_var);
		JsonData__ctor_m41B877087276E3E9EC0EAE8D65D442F4B68B451F(L_25, /*hidden argument*/NULL);
		V_5 = L_25;
		JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * L_26 = V_5;
		JsonData_SetJsonType_m70E9F89FC574B290E197E72C3472C2CAE93FE44D(L_26, 1, /*hidden argument*/NULL);
		JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * L_27 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_il2cpp_TypeInfo_var);
		String_t* L_28 = ((S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_StaticFields*)il2cpp_codegen_static_fields_for(S3Constants_tE12AF931998AA2949E3ECC41E0C42F7025C6764C_il2cpp_TypeInfo_var))->get_PostFormDataSecurityToken_15();
		String_t* L_29 = ___token1;
		JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * L_30 = JsonData_op_Implicit_mF1BDAD9AA2DE4C2B43DBA399A47D5B8D185D1107(L_29, /*hidden argument*/NULL);
		JsonData_set_Item_mEC987705D8E776ADC7C12E33004BC9BBFD3E7A19(L_27, L_28, L_30, /*hidden argument*/NULL);
		JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * L_31 = V_2;
		JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * L_32 = V_5;
		JsonData_Add_m88834A06E6FD83742394FAC03CF31F3D6D1A5C71(L_31, L_32, /*hidden argument*/NULL);
	}

IL_0097:
	{
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_33 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		JsonData_tB6316B120F536B8E6E0553E698129B2957074324 * L_34 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_t76FE6C1EEFC89324851C4258A9440A5E51FBF4C7_il2cpp_TypeInfo_var);
		String_t* L_35 = JsonMapper_ToJson_m7C63C4EC3F3AA55D20D954D76115C243172CE4CA(L_34, /*hidden argument*/NULL);
		String_t* L_36 = String_Trim_mB52EB7876C7132358B76B7DC95DEACA20722EF4D(L_35, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_37 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_33, L_36);
		return L_37;
	}
}
// System.String Amazon.S3.Util.S3PostUploadSignedPolicy::get_Policy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* S3PostUploadSignedPolicy_get_Policy_m60648BD9962DBEB27FA8DF59708DE9EC7AF618E1 (S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CPolicyU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Amazon.S3.Util.S3PostUploadSignedPolicy::set_Policy(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void S3PostUploadSignedPolicy_set_Policy_mDFCDCFC777781B79CCC35CA3293F2C32E1FC223D (S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CPolicyU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String Amazon.S3.Util.S3PostUploadSignedPolicy::get_Signature()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* S3PostUploadSignedPolicy_get_Signature_m91B5A555C39EDCAC3CACA97D5726FC000B5FED81 (S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CSignatureU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Amazon.S3.Util.S3PostUploadSignedPolicy::set_Signature(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void S3PostUploadSignedPolicy_set_Signature_m89B89EFDF00E438E9D4B5E9C41CF0E3FF605DB27 (S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CSignatureU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String Amazon.S3.Util.S3PostUploadSignedPolicy::get_AccessKeyId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* S3PostUploadSignedPolicy_get_AccessKeyId_mA98A8FD72D2964CF39E47519E44509F9C9B922A7 (S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CAccessKeyIdU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Amazon.S3.Util.S3PostUploadSignedPolicy::set_AccessKeyId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void S3PostUploadSignedPolicy_set_AccessKeyId_m7610299592CCAF92EBE8C73D924835B31C613ED7 (S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CAccessKeyIdU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String Amazon.S3.Util.S3PostUploadSignedPolicy::get_SecurityToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* S3PostUploadSignedPolicy_get_SecurityToken_m57D787E726660B9AE8F6C6004921CA4AA8B8C8CF (S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CSecurityTokenU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Amazon.S3.Util.S3PostUploadSignedPolicy::set_SecurityToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void S3PostUploadSignedPolicy_set_SecurityToken_mC7D685FED68BD3F68CD8F2C322A1FC7AF3CEB95B (S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CSecurityTokenU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.String Amazon.S3.Util.S3PostUploadSignedPolicy::get_SignatureVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* S3PostUploadSignedPolicy_get_SignatureVersion_mD1D8643AE2ABCCBB68CD7349F42159ECD92D6769 (S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CSignatureVersionU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Amazon.S3.Util.S3PostUploadSignedPolicy::set_SignatureVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void S3PostUploadSignedPolicy_set_SignatureVersion_m5F27B9968EADA3F9EBA0E6EFCCBEFF71DDAE5929 (S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CSignatureVersionU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.String Amazon.S3.Util.S3PostUploadSignedPolicy::get_Algorithm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* S3PostUploadSignedPolicy_get_Algorithm_mB94D0ADF8CF34DDB18A295E3FAA3050195EC596D (S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CAlgorithmU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Amazon.S3.Util.S3PostUploadSignedPolicy::set_Algorithm(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void S3PostUploadSignedPolicy_set_Algorithm_m52796BB73F5C208E97C0D9E8CF8464E535CCFEFD (S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CAlgorithmU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.String Amazon.S3.Util.S3PostUploadSignedPolicy::get_Date()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* S3PostUploadSignedPolicy_get_Date_mD2D50A9176BA066434D50D8038A3532349BCA7FF (S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CDateU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Amazon.S3.Util.S3PostUploadSignedPolicy::set_Date(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void S3PostUploadSignedPolicy_set_Date_m97728ECCCF02B639BF1846AAE4A4F98D53E07B94 (S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CDateU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.String Amazon.S3.Util.S3PostUploadSignedPolicy::get_Credential()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* S3PostUploadSignedPolicy_get_Credential_m0E4950DA359509CA3B8D7A0F447A01446531F9E0 (S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CCredentialU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void Amazon.S3.Util.S3PostUploadSignedPolicy::set_Credential(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void S3PostUploadSignedPolicy_set_Credential_m620B3E34C24EA40B8359010E627E4365E0B239F4 (S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CCredentialU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Void Amazon.S3.Util.S3PostUploadSignedPolicy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void S3PostUploadSignedPolicy__ctor_mECA52D4348793CA4295DFEE550E363064BF330DE (S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Amazon.S3.Util.S3PostUploadSignedPolicy::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void S3PostUploadSignedPolicy__cctor_m049EE43975911875A407AC9D9E74668D91369D48 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (S3PostUploadSignedPolicy__cctor_m049EE43975911875A407AC9D9E74668D91369D48_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C_StaticFields*)il2cpp_codegen_static_fields_for(S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C_il2cpp_TypeInfo_var))->set_KEY_POLICY_8(_stringLiteral9F00FAD98BADC1330E637A0A015D704113498420);
		((S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C_StaticFields*)il2cpp_codegen_static_fields_for(S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C_il2cpp_TypeInfo_var))->set_KEY_SIGNATURE_9(_stringLiteralFAB5F62863CDEDC5143552C9D37D6679E3304F7A);
		((S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C_StaticFields*)il2cpp_codegen_static_fields_for(S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C_il2cpp_TypeInfo_var))->set_KEY_ACCESSKEY_10(_stringLiteral87B52B98F24C652BBC3BA57077055A98FD08ED9C);
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
// System.Nullable`1<System.Boolean> Amazon.V4ClientSection::get_UseSignatureVersion4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  V4ClientSection_get_UseSignatureVersion4_m341710EB37EE21339C38F038FFE48CF4A95504FE (V4ClientSection_t2C28891A824A3E15AF6467DB4841A5411BE080C7 * __this, const RuntimeMethod* method)
{
	{
		Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  L_0 = __this->get_U3CUseSignatureVersion4U3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Amazon.V4ClientSection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void V4ClientSection__ctor_m06B813F05E4A544BEC4193C05C8A5F78959C15FA (V4ClientSection_t2C28891A824A3E15AF6467DB4841A5411BE080C7 * __this, const RuntimeMethod* method)
{
	{
		ConfigurationElement__ctor_mF921105D2403104EB56463484787DEC198CBFA3B(__this, /*hidden argument*/NULL);
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
// System.Void Amazon.V4ClientSectionRoot::.ctor(System.Xml.Linq.XElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void V4ClientSectionRoot__ctor_m6C9E854B993464E859228C8C0DCA63935C16C350 (V4ClientSectionRoot_t7503957BFD346A70AF90C1F682CCA04AAA857C62 * __this, XElement_t19F18C253C1E4E22F010C470A5181AB7BD0B5E95 * ___section0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (V4ClientSectionRoot__ctor_m6C9E854B993464E859228C8C0DCA63935C16C350_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		XElement_t19F18C253C1E4E22F010C470A5181AB7BD0B5E95 * L_0 = ___section0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		XElement_t19F18C253C1E4E22F010C470A5181AB7BD0B5E95 * L_1 = ___section0;
		IL2CPP_RUNTIME_CLASS_INIT(AWSConfigs_tB1B5F30628E759145BD99A9C1E8A96E950C65A49_il2cpp_TypeInfo_var);
		V4ClientSection_t2C28891A824A3E15AF6467DB4841A5411BE080C7 * L_2 = AWSConfigs_GetObject_TisV4ClientSection_t2C28891A824A3E15AF6467DB4841A5411BE080C7_mC8BED8EDC9D5CD3B27E96F97F96CC4977DB0E2F7(L_1, _stringLiteralDD33A084BA223DD231B0AA962F77A5920017BC8B, /*hidden argument*/AWSConfigs_GetObject_TisV4ClientSection_t2C28891A824A3E15AF6467DB4841A5411BE080C7_mC8BED8EDC9D5CD3B27E96F97F96CC4977DB0E2F7_RuntimeMethod_var);
		V4ClientSectionRoot_set_S3_mA038859C78EAD5A2589B3BBD4CB36637F199546E_inline(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// Amazon.V4ClientSection Amazon.V4ClientSectionRoot::get_S3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR V4ClientSection_t2C28891A824A3E15AF6467DB4841A5411BE080C7 * V4ClientSectionRoot_get_S3_m605ED32AF5300CDDB2B45DDA39A627B244F0B841 (V4ClientSectionRoot_t7503957BFD346A70AF90C1F682CCA04AAA857C62 * __this, const RuntimeMethod* method)
{
	{
		V4ClientSection_t2C28891A824A3E15AF6467DB4841A5411BE080C7 * L_0 = __this->get_U3CS3U3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Amazon.V4ClientSectionRoot::set_S3(Amazon.V4ClientSection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void V4ClientSectionRoot_set_S3_mA038859C78EAD5A2589B3BBD4CB36637F199546E (V4ClientSectionRoot_t7503957BFD346A70AF90C1F682CCA04AAA857C62 * __this, V4ClientSection_t2C28891A824A3E15AF6467DB4841A5411BE080C7 * ___value0, const RuntimeMethod* method)
{
	{
		V4ClientSection_t2C28891A824A3E15AF6467DB4841A5411BE080C7 * L_0 = ___value0;
		__this->set_U3CS3U3Ek__BackingField_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void BucketRegionDetector_set_BucketRegionCache_m68DE7E004750168841DD06DB3DEFF53370ACFEC7_inline (LruCache_2_t1C9BE3EF059C467F8BA7871B870BB16DCC8F7FE3 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BucketRegionDetector_set_BucketRegionCache_m68DE7E004750168841DD06DB3DEFF53370ACFEC7AWSSDK_S31_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		LruCache_2_t1C9BE3EF059C467F8BA7871B870BB16DCC8F7FE3 * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(BucketRegionDetector_tC2ECE2BEFA6DDAA2D4740E3C70A2BC884B07C836_il2cpp_TypeInfo_var);
		((BucketRegionDetector_tC2ECE2BEFA6DDAA2D4740E3C70A2BC884B07C836_StaticFields*)il2cpp_codegen_static_fields_for(BucketRegionDetector_tC2ECE2BEFA6DDAA2D4740E3C70A2BC884B07C836_il2cpp_TypeInfo_var))->set_U3CBucketRegionCacheU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ImmutableCredentials_get_Token_mDA5FD2469CE50DDD3B01F3769C3DF4CA5F873C32_inline (ImmutableCredentials_tCD6CA6B5DF58E461FA5BC0CE8160248EFA24DBFE * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CTokenU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* CryptoUtilFactory_get_CryptoInstance_m2B76147B49F3163473A935FD83F410162A21C695_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CryptoUtilFactory_get_CryptoInstance_m2B76147B49F3163473A935FD83F410162A21C695AWSSDK_S31_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CryptoUtilFactory_t26A78D19624EC9BBBC7C5E91A2ED5DC501E9A7D7_il2cpp_TypeInfo_var);
		CryptoUtil_tA8CBEA6142A854AA438F40328BBE11330DB72AB9 * L_0 = ((CryptoUtilFactory_t26A78D19624EC9BBBC7C5E91A2ED5DC501E9A7D7_StaticFields*)il2cpp_codegen_static_fields_for(CryptoUtilFactory_t26A78D19624EC9BBBC7C5E91A2ED5DC501E9A7D7_il2cpp_TypeInfo_var))->get_util_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ImmutableCredentials_get_SecretKey_m0190DBE6E5D41095BA45523E1B28171F0A72D3D3_inline (ImmutableCredentials_tCD6CA6B5DF58E461FA5BC0CE8160248EFA24DBFE * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CSecretKeyU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void S3PostUploadSignedPolicy_set_Policy_mDFCDCFC777781B79CCC35CA3293F2C32E1FC223D_inline (S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CPolicyU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void S3PostUploadSignedPolicy_set_Signature_m89B89EFDF00E438E9D4B5E9C41CF0E3FF605DB27_inline (S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CSignatureU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* ImmutableCredentials_get_AccessKey_m77BE2374E72A92E3A9F4116F5CB2347E502E432F_inline (ImmutableCredentials_tCD6CA6B5DF58E461FA5BC0CE8160248EFA24DBFE * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CAccessKeyU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void S3PostUploadSignedPolicy_set_AccessKeyId_m7610299592CCAF92EBE8C73D924835B31C613ED7_inline (S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CAccessKeyIdU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void S3PostUploadSignedPolicy_set_SecurityToken_mC7D685FED68BD3F68CD8F2C322A1FC7AF3CEB95B_inline (S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CSecurityTokenU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void S3PostUploadSignedPolicy_set_SignatureVersion_m5F27B9968EADA3F9EBA0E6EFCCBEFF71DDAE5929_inline (S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CSignatureVersionU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* RegionEndpoint_get_SystemName_m80AA7E67BD0A75C2ACEE4F7A9B6122EE61F09BD4_inline (RegionEndpoint_tA120BDC5062BCBF12A72187C51E18D5042FA4548 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CSystemNameU3Ek__BackingField_29();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void S3PostUploadSignedPolicy_set_Algorithm_m52796BB73F5C208E97C0D9E8CF8464E535CCFEFD_inline (S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CAlgorithmU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void S3PostUploadSignedPolicy_set_Date_m97728ECCCF02B639BF1846AAE4A4F98D53E07B94_inline (S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CDateU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void S3PostUploadSignedPolicy_set_Credential_m620B3E34C24EA40B8359010E627E4365E0B239F4_inline (S3PostUploadSignedPolicy_tDC0618BB70FE69202F32788CA190121D9E32433C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CCredentialU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void V4ClientSectionRoot_set_S3_mA038859C78EAD5A2589B3BBD4CB36637F199546E_inline (V4ClientSectionRoot_t7503957BFD346A70AF90C1F682CCA04AAA857C62 * __this, V4ClientSection_t2C28891A824A3E15AF6467DB4841A5411BE080C7 * ___value0, const RuntimeMethod* method)
{
	{
		V4ClientSection_t2C28891A824A3E15AF6467DB4841A5411BE080C7 * L_0 = ___value0;
		__this->set_U3CS3U3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  Enumerator_get_Current_m5B32A9FC8294CB723DCD1171744B32E1775B6318_gshared_inline (Enumerator_tED23DFBF3911229086C71CCE7A54D56F5FFB34CB * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE  L_0 = (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE )__this->get_current_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
