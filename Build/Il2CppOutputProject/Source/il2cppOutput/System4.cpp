﻿#include "pch-cpp.hpp"

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
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { &p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.Object>
struct ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Net.ServicePointManager/SPKey,System.Net.ServicePoint>
struct ConcurrentDictionary_2_tA479A4D42D40E0772A26F55B2BB647B6B7B8BDD6;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509Extension>
struct IEnumerable_1_t88BC7ABEC98371147F87484F0BECBC7021EDE51D;
// System.Collections.Generic.IEqualityComparer`1<System.Net.ServicePointManager/SPKey>
struct IEqualityComparer_1_t7DEF6A7F733A12BFAF629D0D430AE07F50CCD72D;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.Security.Cryptography.Oid>
struct List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B;
// System.Collections.Generic.List`1<System.Security.Cryptography.X509Certificates.X509CertificateImpl>
struct List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC;
// System.Collections.Generic.List`1<System.Security.Cryptography.X509Certificates.X509Extension>
struct List_1_t03551104C97124C9D83186EEB3F066B8BFFD87E3;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.Net.ServicePointManager/SPKey,System.Net.ServicePoint>
struct Tables_tA4EED5C769DBB50C98B0D2CB16445489E2D4B333;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Collections.Generic.KeyValuePair`2<System.Net.ServicePointManager/SPKey,System.Net.ServicePoint>[]
struct KeyValuePair_2U5BU5D_t3A196B8FA26BCF9E3162B52E6068AB53F964E297;
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
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.Security.Cryptography.X509Certificates.X509CertificateImpl[]
struct X509CertificateImplU5BU5D_tF7670421D516AF3E064DBA6E32AA03CED589795D;
// System.Security.Cryptography.X509Certificates.X509ChainStatus[]
struct X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299;
// System.Security.Cryptography.X509Certificates.X509Extension[]
struct X509ExtensionU5BU5D_t6CB6866A33687382EC1D848C41F2687E57166403;
// Mono.Security.ASN1
struct ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.ComponentModel.ArrayConverter
struct ArrayConverter_tE417E9DB044C4317BF7F9B7DF5CD0F4C7C38672C;
// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Mono.Net.Security.AsyncProtocolRequest
struct AsyncProtocolRequest_tF31CF30F8C57A3D5DC10A9FB0A5568FA254DFE86;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Net.Security.AuthenticatedStream
struct AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39;
// Mono.Security.Authenticode.AuthenticodeDeformatter
struct AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2;
// System.ComponentModel.BaseNumberConverter
struct BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706;
// Mono.Math.BigInteger
struct BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.ComponentModel.BooleanConverter
struct BooleanConverter_tC955870C6FB390C432D032E5025342C0BCB2DEE9;
// Mono.Net.Security.BufferOffsetSize2
struct BufferOffsetSize2_t2C3F7F42F64D84F357DC24AFCD44AC4679B20629;
// System.Net.Configuration.BypassElementCollection
struct BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.Collections.CollectionBase
struct CollectionBase_t44F966CC555C87F2815D668FB4586526E1C2383F;
// System.ComponentModel.CollectionConverter
struct CollectionConverter_t47EAA5F1386CB891414AB5096CFA50418A5D64B0;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93;
// System.Net.Configuration.ConnectionManagementElementCollection
struct ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1;
// System.Net.Configuration.ConnectionManagementSection
struct ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Security.Cryptography.CryptographicException
struct CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Security.Cryptography.DSA
struct DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41;
// System.Security.Cryptography.DSACryptoServiceProvider
struct DSACryptoServiceProvider_tB418CD8E85D69D879C7298E4A6A7D8CFAC09D79E;
// Mono.Security.Cryptography.DSAManaged
struct DSAManaged_t93F6FE86F625186D42535B8E70AE3094A24367EB;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.ComponentModel.DecimalConverter
struct DecimalConverter_tCBE948B718842C42CB22DF92D59AB2C1EC0FAEDF;
// System.Net.Configuration.DefaultProxySection
struct DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34;
// System.IO.Compression.DeflateStream
struct DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104;
// System.IO.Compression.DeflateStreamNative
struct DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.ComponentModel.DescriptionAttribute
struct DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86;
// System.ComponentModel.DesignTimeVisibleAttribute
struct DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE;
// System.Diagnostics.DiagnosticsConfigurationHandler
struct DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7;
// System.ComponentModel.DisplayNameAttribute
struct DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8;
// System.ComponentModel.DoubleConverter
struct DoubleConverter_t1FB61A3A8171D3023AA9678231D9C480A67799DE;
// System.ComponentModel.EditorBrowsableAttribute
struct EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.ComponentModel.EnumConverter
struct EnumConverter_t2E799BC1F322DBF25DEFEC2C57C006223320182D;
// System.Exception
struct Exception_t;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// System.IO.Compression.GZipStream
struct GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D;
// System.Net.Configuration.HttpWebRequestElement
struct HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerable
struct IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
// System.Runtime.Remoting.Messaging.IMessage
struct IMessage_t4D2DC61F0664F305059641FF6BDA07DF2141236C;
// System.Runtime.Remoting.Messaging.IMessageCtrl
struct IMessageCtrl_t20C0BA2FB19CAD6D3BD432B033BC560186E574C1;
// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910;
// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484;
// System.ComponentModel.Int16Converter
struct Int16Converter_t6513884DE2649E1FA03AC947F80FCE6BE61792BB;
// System.ComponentModel.Int32Converter
struct Int32Converter_t461564B848A4566C9E72FED147B4FC64BD4BE6ED;
// System.ComponentModel.Int64Converter
struct Int64Converter_tF9458770A9BF6718A4866AFEAABCACD022754E23;
// System.ComponentModel.InvalidEnumArgumentException
struct InvalidEnumArgumentException_t5B42625AD815A72639D894ED1592FF4BE438D989;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Net.Configuration.Ipv6Element
struct Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932;
// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t78D61FCDE172753BFE756B555CBD85127832CDF6;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Mono.Net.Security.MobileAuthenticatedStream
struct MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E;
// Mono.Net.Security.MobileTlsContext
struct MobileTlsContext_t456DDC89866EE34EF32EEF959AD92C9F17684476;
// Mono.Net.Security.MobileTlsProvider
struct MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017;
// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601;
// Mono.Security.Interface.MonoTlsSettings
struct MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0;
// System.Net.Configuration.NetSectionGroup
struct NetSectionGroup_tA83DCAF89773087D0E921B92F67441132B71D52F;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB;
// System.Security.Cryptography.Oid
struct Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287;
// System.Security.Cryptography.OidCollection
struct OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3;
// System.Security.Cryptography.OidEnumerator
struct OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41;
// Mono.Security.X509.PKCS12
struct PKCS12_t1E7D81A38668D35E4536A15ADC8190525267A989;
// System.Net.Configuration.PerformanceCountersElement
struct PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30;
// System.PlatformNotSupportedException
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A;
// System.Net.Configuration.ProxyElement
struct ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65;
// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405;
// System.Security.Cryptography.RSA
struct RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A;
// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C;
// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4;
// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t897B29EF76C459408E11A42680C942716D809001;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3;
// System.Security.Cryptography.SHA1
struct SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE;
// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7;
// Microsoft.Win32.SafeHandles.SafePasswordHandle
struct SafePasswordHandle_t07A3BFCF046DFE44216ACE030F838C8AE2564463;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.Net.Configuration.ServicePointManagerElement
struct ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2;
// System.Net.Configuration.SettingsSection
struct SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12;
// System.ComponentModel.SingleConverter
struct SingleConverter_tF3C0B984505288F214BFECEAD90CA0498B7378C1;
// System.Net.Configuration.SocketElement
struct SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6;
// System.Net.Security.SslStream
struct SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.ComponentModel.StringConverter
struct StringConverter_t1AE794D42AE414C00F2443B76F3EA694C310FF1E;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.ComponentModel.TimeSpanConverter
struct TimeSpanConverter_tB91A0347D2F1228A476F50705D3048A50F1A4B9F;
// System.Type
struct Type_t;
// System.ComponentModel.TypeConverter
struct TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C;
// System.ComponentModel.TypeConverterAttribute
struct TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3;
// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8;
// System.Net.Configuration.WebProxyScriptElement
struct WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167;
// System.Net.Configuration.WebRequestModuleElementCollection
struct WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463;
// System.Net.Configuration.WebRequestModulesSection
struct WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName
struct X500DistinguishedName_t53976A4567E82199856DAD47D3850F8EECABDAF6;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB;
// System.Security.Cryptography.X509Certificates.X509Certificate2Impl
struct X509Certificate2Impl_t9EC3180958225F2A99501C70603CE52BCD1DFD25;
// System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono
struct X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240;
// System.Security.Cryptography.X509Certificates.X509Certificate2ImplUnix
struct X509Certificate2ImplUnix_tF8DFA7FF05CC33C9010EFDCA21A827247CB8E86D;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE;
// System.Security.Cryptography.X509Certificates.X509CertificateImpl
struct X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF;
// System.Security.Cryptography.X509Certificates.X509CertificateImplCollection
struct X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098;
// Mono.Security.X509.X509Chain
struct X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5;
// System.Security.Cryptography.X509Certificates.X509ChainElement
struct X509ChainElement_t95FFAD3F504A1CA731ECCBA88C5CB3B0EE28786D;
// System.Security.Cryptography.X509Certificates.X509ChainElementCollection
struct X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D;
// System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator
struct X509ChainElementEnumerator_tE4033654D4E19B54FE64143E10BCB1775B57BD6D;
// System.Security.Cryptography.X509Certificates.X509ChainImpl
struct X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F;
// System.Security.Cryptography.X509Certificates.X509ChainImplMono
struct X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D;
// System.Security.Cryptography.X509Certificates.X509ChainPolicy
struct X509ChainPolicy_t34F49B4067492A1E5F91DD91FA7C934B68D880EC;
// System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension
struct X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF;
// System.Security.Cryptography.X509Certificates.X509Extension
struct X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t4A6DDB3D653B72CD358E09B7A1D6DE4EA4DB6534;
// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0;
// System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator
struct X509ExtensionEnumerator_t7C4F4F5D65C7023FA1BEE3F6522B066A6CECCFF6;
// System.Security.Cryptography.X509Certificates.X509KeyUsageExtension
struct X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B;
// Mono.Security.X509.X509Store
struct X509Store_tC2D674DE1D07619474A1D17B132DDA911F9FD661;
// System.Security.Cryptography.X509Certificates.X509Store
struct X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6;
// System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension
struct X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5;
// System.Xml.XmlNode
struct XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF;
// System.IO.Compression.DeflateStream/ReadMethod
struct ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6;
// System.IO.Compression.DeflateStream/WriteMethod
struct WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9;
// System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle
struct SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8;
// System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite
struct UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA;
// System.Net.IPAddress/ReadOnlyIPAddress
struct ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C;
// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t5EDD824AAD4D47A4C32E693596793AB83DB84107;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_tC5F10128EB5F9B6E4E5519E6AE47DA01384F91E3;
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t6629E2BB0FB5D92B2EB502312B764686BAFDF0D9;

IL2CPP_EXTERN_C RuntimeClass* ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConcurrentDictionary_2_tA479A4D42D40E0772A26F55B2BB647B6B7B8BDD6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DSACryptoServiceProvider_tB418CD8E85D69D879C7298E4A6A7D8CFAC09D79E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marvin_t0342A28B10725C354B3E96D240FF68C4D7A0D242_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PKCS12_t1E7D81A38668D35E4536A15ADC8190525267A989_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509CertificateEnumerator_t6629E2BB0FB5D92B2EB502312B764686BAFDF0D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509ChainElementEnumerator_tE4033654D4E19B54FE64143E10BCB1775B57BD6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509ChainPolicy_t34F49B4067492A1E5F91DD91FA7C934B68D880EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509ChainStatusFlags_t57C80D7C1F4C319F6D6B9FBDEA402E3023E6C769_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509ExtensionEnumerator_t7C4F4F5D65C7023FA1BEE3F6522B066A6CECCFF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t56F624E1051A2E261613B6A81CA2333397F49CB3____27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811_2_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral001611EA36FEB747E4C160A3E7A402813B416AF1;
IL2CPP_EXTERN_C String_t* _stringLiteral056D86C00DCC9B50BC4439477A2268822E0C9095;
IL2CPP_EXTERN_C String_t* _stringLiteral05A239D304E1CD9654D716DE8B8F8AD99E2AB53F;
IL2CPP_EXTERN_C String_t* _stringLiteral05EB610FCC2B53833966AA8CE4B029154C502A88;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral0B85D604B5CD78CCF01CDA620C0DEF5DCC5C1FD7;
IL2CPP_EXTERN_C String_t* _stringLiteral0DFF292E20A24D880E7AD23C0246F1B2DA7F9159;
IL2CPP_EXTERN_C String_t* _stringLiteral16770065DAB8E218EBB0B0BB3BC4FE763DF3C18B;
IL2CPP_EXTERN_C String_t* _stringLiteral1EF9E33E97E3023577871E2EA773996440F2F5F9;
IL2CPP_EXTERN_C String_t* _stringLiteral1F40F39B9F659411903AC93DF93E8658291E5522;
IL2CPP_EXTERN_C String_t* _stringLiteral212797907CC7AD095EFEBD10D643DF1F9608C8C1;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2523CBFED84EF78578D85909448E8C0C4ECDA163;
IL2CPP_EXTERN_C String_t* _stringLiteral2DA0AC110457767EB539C31A3B243D2C4C5C2D9D;
IL2CPP_EXTERN_C String_t* _stringLiteral2FDCE7F577695853459152469012B0121731CD52;
IL2CPP_EXTERN_C String_t* _stringLiteral3032791810C3C28A8817104A5F4621172856E8C9;
IL2CPP_EXTERN_C String_t* _stringLiteral315E5D2D2D07B33F565952A5C0509A988785ABF6;
IL2CPP_EXTERN_C String_t* _stringLiteral3C77EE02D0B62256DB746EEC2F12CB9BC801126A;
IL2CPP_EXTERN_C String_t* _stringLiteral3C850BA1FC7F3581DBA2DD6DDF642D5C34A8C120;
IL2CPP_EXTERN_C String_t* _stringLiteral3ECCF64C0782442EC426220868830513FD924C3C;
IL2CPP_EXTERN_C String_t* _stringLiteral443F4C4E0724E859C348938724B926BE877FC5FE;
IL2CPP_EXTERN_C String_t* _stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5;
IL2CPP_EXTERN_C String_t* _stringLiteral4818B6292BB54C3BA36849A617241A4C666A6CB8;
IL2CPP_EXTERN_C String_t* _stringLiteral5295380188F75D696383F8BDB2147F0053791372;
IL2CPP_EXTERN_C String_t* _stringLiteral53549F14C4C0C01E846937308C01413567514ED9;
IL2CPP_EXTERN_C String_t* _stringLiteral53B6A8F4629CFB02CF5AFB3B1D3C6A5584EB8548;
IL2CPP_EXTERN_C String_t* _stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4;
IL2CPP_EXTERN_C String_t* _stringLiteral547999BA16094C3536189EA1CC631B96EFC47117;
IL2CPP_EXTERN_C String_t* _stringLiteral59BD369CF985844B111CA4447943A285D359441C;
IL2CPP_EXTERN_C String_t* _stringLiteral5DF5634099E210FAACAB500FEB3F80C226FE7C7F;
IL2CPP_EXTERN_C String_t* _stringLiteral5EDC47BC71D706BB11343CC890323569C143CD50;
IL2CPP_EXTERN_C String_t* _stringLiteral606F0CC71C796275607A15AAF1A3AA6B5E27B434;
IL2CPP_EXTERN_C String_t* _stringLiteral61A2E25EECE5CA17D408DC393538F1767DE78408;
IL2CPP_EXTERN_C String_t* _stringLiteral62F92E932A25B80B40DBB89A07F4AD690B6F800D;
IL2CPP_EXTERN_C String_t* _stringLiteral63DCC50AED43B00BB793B2D0F054171D9D12A15E;
IL2CPP_EXTERN_C String_t* _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260;
IL2CPP_EXTERN_C String_t* _stringLiteral6FE6AA6EF03FB6550152903A7B201A6108F728DB;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral75C57EB9FD95FB9243FE99EBB78A77B0117BD190;
IL2CPP_EXTERN_C String_t* _stringLiteral78875BB01F47001614AE95132434E503D00EA404;
IL2CPP_EXTERN_C String_t* _stringLiteral7C2AB991735C660B6786443AF56195932AA7F9E7;
IL2CPP_EXTERN_C String_t* _stringLiteral80B8BD8C952DF4747A939211EB3E250030FF7705;
IL2CPP_EXTERN_C String_t* _stringLiteral830B64B4254C502C612E53C83DBEE6238E710499;
IL2CPP_EXTERN_C String_t* _stringLiteral88E3C436425EACB2A5AAA1F1DAA0E9E15389128D;
IL2CPP_EXTERN_C String_t* _stringLiteral898F62C1CB5B52471F58EE23AAB5BCB055458288;
IL2CPP_EXTERN_C String_t* _stringLiteral8A577A5A6848BEDC7A1DBA1211A06E627EEF0057;
IL2CPP_EXTERN_C String_t* _stringLiteral8B179EF532CBF38773A257E5F951512B4287DAF9;
IL2CPP_EXTERN_C String_t* _stringLiteral91E2D84A2649FBF80361A807D1020FB40280EF31;
IL2CPP_EXTERN_C String_t* _stringLiteral93A695AC92DC55FD2E0C8095080AD5AF2B1F34FE;
IL2CPP_EXTERN_C String_t* _stringLiteral95B4432B3C3526A7D6F1251C0238760D017B4551;
IL2CPP_EXTERN_C String_t* _stringLiteral9A1C57A14DBAA067A98C8B33FA6B28D793AFE67D;
IL2CPP_EXTERN_C String_t* _stringLiteral9C1ED970007229D4BBE511BC369FF3ACD197B1F2;
IL2CPP_EXTERN_C String_t* _stringLiteralA4BCB8F07D7B01D0ED0445AB3038F6DE65C11CB6;
IL2CPP_EXTERN_C String_t* _stringLiteralA6EAFAF4139980ACB770E237272125EB9180B7A6;
IL2CPP_EXTERN_C String_t* _stringLiteralA9AF8D13B64E63A31A01386E007E5C9CF3A6CF5B;
IL2CPP_EXTERN_C String_t* _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74;
IL2CPP_EXTERN_C String_t* _stringLiteralB2AED74A19DD9414DD0792FD340CC531536B8454;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB4A94E440E57B3321B2097CEC9E046D28EE1C0CD;
IL2CPP_EXTERN_C String_t* _stringLiteralB53E23262CA871DD51B621D069CC5E93A75BDAB6;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBF139BD350C3DEE302CB511B339EAB5BBA9E5D30;
IL2CPP_EXTERN_C String_t* _stringLiteralC4E1CA5F695C0687C577DB8E17E55E7B5845A445;
IL2CPP_EXTERN_C String_t* _stringLiteralC6F79988FD2BDBA6A0518B070DC366C3276EDD71;
IL2CPP_EXTERN_C String_t* _stringLiteralC9FB8C73B342D5B3C700EDA7C5212DD547D29E4E;
IL2CPP_EXTERN_C String_t* _stringLiteralCABCFE6297E437347D23F1B446C58DD70094E306;
IL2CPP_EXTERN_C String_t* _stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B;
IL2CPP_EXTERN_C String_t* _stringLiteralD20A4058B7B405BF173793FAAC54A85874A0CDDE;
IL2CPP_EXTERN_C String_t* _stringLiteralD615D452AAA84D559E3E5FFF5168A1AF47500E8D;
IL2CPP_EXTERN_C String_t* _stringLiteralD680BB985C766A862C17089DCA4435BD5EF69761;
IL2CPP_EXTERN_C String_t* _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32;
IL2CPP_EXTERN_C String_t* _stringLiteralD9B53FE83B364433B53BD1F5712DD31D58258FB4;
IL2CPP_EXTERN_C String_t* _stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73;
IL2CPP_EXTERN_C String_t* _stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F;
IL2CPP_EXTERN_C String_t* _stringLiteralE290FE00878B1C01707983AAF8A6BB8464DFAB6D;
IL2CPP_EXTERN_C String_t* _stringLiteralE2E90A74AF10748DDAB6F42388BD10A4D42D95BB;
IL2CPP_EXTERN_C String_t* _stringLiteralE7C7449D840A91B3AF035F43E6106A0BC8372CC6;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C String_t* _stringLiteralEB6BBFD5D01FC65219978A6C56AF3DD9C51AD35E;
IL2CPP_EXTERN_C String_t* _stringLiteralF47527D7B72D5957FA184B6B1B6A7A1A9A56BF37;
IL2CPP_EXTERN_C String_t* _stringLiteralF678DBEEE39BA115BA762E7766D189E0CD47CD41;
IL2CPP_EXTERN_C String_t* _stringLiteralF8E8E3CB7E102B63C5E2F7011280E4E41798F185;
IL2CPP_EXTERN_C String_t* _stringLiteralFC7CE1550BE8A973149B3C0EC550C5A65BDD7413;
IL2CPP_EXTERN_C String_t* _stringLiteralFC82027EEEA4BFAD4FE7FBFDD886E7D82ADBEA69;
IL2CPP_EXTERN_C const RuntimeMethod* AuthenticatedStream__ctor_m8B163146A01B938A3E87E1BED07EE07494A3E357_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2__ctor_m73468EC4E3B499BCB73252A85E27618168FA0460_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStreamNative_CheckResult_m9354BDD0FA5B71935FFD628698412B5380329C47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStreamNative_UnmanagedRead_m321A2621068F1C9509594A4D8F405F4F12C1CEB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStreamNative_UnmanagedWrite_mB0AD438266A9DD2813715E8BC90BF07DC7A02F52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_BeginRead_m5FD78CDEDE42221D07255D38C4E8BBB3FFAD0235_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_BeginWrite_m00FB9CAB52A95FA92911DBB50200D8AB81F4F4BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_EndRead_m3A49F7660DAE5121AC48BD7409580CD46E3D8D9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_EndWrite_m304251B2932DD464A16C7306E862BF86BA516A6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_Flush_mE12E917486F3EA41FE453945AA5B5617F80E6D0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_ReadInternal_m4FCD4EB1534E24E85A9E5D933D6AF6EABF5F223C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_Read_m46316C432282671BF001324B75881E50CC2B7FA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_Seek_mCABEFA32513E0858BC7A98F05AAA217A09C65B16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_SetLength_mC18B3CCD1225B3C3A15EF54830C44236670F63F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_WriteInternal_m5BD64441B31FC3D10F20A273FF45380EAAB97845_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_Write_mA09DDD17D3B00089F808F9C7C587226666DB141A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream__ctor_m67AEE7C38BCFD323CD25D3FB36674E6A5010CD36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_get_Length_m8C7CE98029153C5065D28496ACE3F99CB644897C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_get_Position_mA6B4FE66DBE953C5504A3561AD75FCC87718F376_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeflateStream_set_Position_m9BA570C4BF91C325EFE8E6BEAF40E6AB54BCC885_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF2F81B27137A7641D3B4452C12BE24CB3EAB9EE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m217A518B7184D37D2D3F09F20CCB95E336B4A925_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6989325883A9638A05539FF349699DD229F1BFC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_Seek_m72909F60549EAB072B86484A1E80BA15D4352E66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_SetLength_m5DCF13005B2AB45961D14230670698CBAF93D0C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_ThrowStreamClosedException_m36E38FF71D68FFDE6707E3691F06929BE72713C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_get_Length_mCBA17CDD8925825AC2EB07E04CDE391B8E46C583_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_get_Position_m934BD5709034CAAEE05A6BCF382D1FEB0314C420_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GZipStream_set_Position_m7FEEE9F3845C130340DC5E1DF984ACB2CD53E957_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPAddress_ThrowAddressNullException_m2D5037C15BE289427E4A761A643C4F26C2F3F034_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPAddress__ctor_mC240D2060BA0F5A96D286CDE3772FE4354D7030B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPAddress__ctor_mFD3C42E1EECC3099D6E347238FB2A0EBE822AF19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m10CC2722143C1DC7B95D477A55FECA1E623DEC22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mB9337DA08797552E15D8A3F77F1572319A78CFC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mFE648B06B9E2D79024C2451DCF73EF57FD5EBA90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA46E7ABD24DB39F8B033217C3D1E60F24FF01C66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1DA18D48815EEF38EBDCE6B843686E75B71C9FD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m5F8FB8F5A9B5BC41A0FCFB9E7F042B66B66A428B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB4ED9F6A5BD665DDFD6708B6FAEE4F577A490F51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_AsBytes_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m7E0CA4F0B8AC2C1FEAA2B6D00C2A4B1B075DB08C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_AsBytes_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE5D7D4C294D50AFEE7AF6B303DE7FA7BD156B83A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_CreateReadOnlySpan_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m363F8E1E0CC75E2736384E86E770507F7483D649_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_ToArray_mF805FAE3816BCFA5C63592CA173237F9B1E4566E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m0B70907CF5F6B4F10CB2914FEFC34CBE07112698_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_mD4ED59BC2ABC1D881B1CFEAD85109BB38AF0BC29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_op_Implicit_m22DF3B7E5AFF3E8C8902EC1D98CD56CBC8375F54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SslStream_CheckDisposed_m884E18F119B366EE6734CCFA126A1F633687FA95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SslStream_Seek_mFEDBF392998DDDB0F7A71F25D1BB821EA1463B25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SslStream_set_Position_m70987A87C7DB346D2FD447EA11E96774105EE5D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCA309E122256972A27C74FC814F47AD13AF623ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowStub_ThrowNotSupportedException_m14168B43936EF78B7B8AC08BD815254DAA1D9FA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509Certificate2ImplMono__ctor_m1B2FB6BBB7558184F07C2E42ECE23C70075A9B7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509Certificate2ImplMono_get_PrivateKey_m2B92DBE7562BBE32D2DC2F5ADC6E96FCD2497F60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509ChainImpl_ThrowIfContextInvalid_m85AF480D1B87D8DA3D780040385CBB88D9B173CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509Chain__ctor_m2B6C93313DDBB62BE6E2AE073958B7662C5FBB7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509EnhancedKeyUsageExtension_CopyFrom_m9577FF97B8E3074B12B7056BF7E30AA0F84309BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509EnhancedKeyUsageExtension_Decode_m1110DD9BD5D717540009DB5D90805458CF07423C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509EnhancedKeyUsageExtension__ctor_mE0CA01F89B6532A7E7B256F248C23B61F0A909CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509ExtensionCollection_Add_mC02BE13A042962E83E849483642F122AEADD2A79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509ExtensionCollection_System_Collections_ICollection_CopyTo_mD9F01B71381CFDD12AF55B244025A99529465472_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509Extension_CopyFrom_m674ABC4ECF701B708C28B546B42B7799CA24D4A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509Helper2_ThrowIfContextInvalid_mB6E09D4292818B28DC4FA6BA9695006B0B0119C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509KeyUsageExtension_CopyFrom_mCBCF5CA17676B2030F6C82ED80A008EF029AF733_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509KeyUsageExtension_get_KeyUsages_m1BD6C5BC6E3E380982C135B2E81731435345144F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509SubjectKeyIdentifierExtension_CopyFrom_m959BB16C6973B1B565D02ED9993AF9069019D77A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509SubjectKeyIdentifierExtension__ctor_m1858C1B050FAF65946B790737652E874781B4B56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509SubjectKeyIdentifierExtension__ctor_m610C9C804421B7CB519F3A5C7D66827CC1106EE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509SubjectKeyIdentifierExtension__ctor_mECF6398B9841FB4533228FE77F51F93316EADE94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509SubjectKeyIdentifierExtension_get_SubjectKeyIdentifier_mFF2A155072C67F430E7F4B178733A80388943CBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshaled_com;
struct MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshaled_pinvoke;
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_com;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Concurrent.ConcurrentDictionary`2<System.Net.ServicePointManager/SPKey,System.Net.ServicePoint>
struct ConcurrentDictionary_2_tA479A4D42D40E0772A26F55B2BB647B6B7B8BDD6  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_tA4EED5C769DBB50C98B0D2CB16445489E2D4B333* ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2::_serializationArray
	KeyValuePair_2U5BU5D_t3A196B8FA26BCF9E3162B52E6068AB53F964E297* ____serializationArray_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationConcurrencyLevel
	int32_t ____serializationConcurrencyLevel_5;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationCapacity
	int32_t ____serializationCapacity_6;
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

// System.Collections.Generic.List`1<System.Security.Cryptography.X509Certificates.X509CertificateImpl>
struct List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	X509CertificateImplU5BU5D_tF7670421D516AF3E064DBA6E32AA03CED589795D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Security.Cryptography.X509Certificates.X509Extension>
struct List_1_t03551104C97124C9D83186EEB3F066B8BFFD87E3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	X509ExtensionU5BU5D_t6CB6866A33687382EC1D848C41F2687E57166403* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// Mono.Security.ASN1
struct ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F  : public RuntimeObject
{
	// System.Byte Mono.Security.ASN1::m_nTag
	uint8_t ___m_nTag_0;
	// System.Byte[] Mono.Security.ASN1::m_aValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_aValue_1;
	// System.Collections.ArrayList Mono.Security.ASN1::elist
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___elist_2;
};

// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A  : public RuntimeObject
{
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8  : public RuntimeObject
{
	// System.Security.Cryptography.Oid System.Security.Cryptography.AsnEncodedData::_oid
	Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* ____oid_0;
	// System.Byte[] System.Security.Cryptography.AsnEncodedData::_raw
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____raw_1;
};

// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8  : public RuntimeObject
{
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___LegalKeySizesValue_1;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Mono.Security.Authenticode.AuthenticodeBase
struct AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD  : public RuntimeObject
{
	// System.Byte[] Mono.Security.Authenticode.AuthenticodeBase::fileblock
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___fileblock_0;
	// System.IO.Stream Mono.Security.Authenticode.AuthenticodeBase::fs
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___fs_1;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::blockNo
	int32_t ___blockNo_2;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::blockLength
	int32_t ___blockLength_3;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::peOffset
	int32_t ___peOffset_4;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::dirSecurityOffset
	int32_t ___dirSecurityOffset_5;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::dirSecuritySize
	int32_t ___dirSecuritySize_6;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeBase::coffSymbolTableOffset
	int32_t ___coffSymbolTableOffset_7;
	// System.Boolean Mono.Security.Authenticode.AuthenticodeBase::pe64
	bool ___pe64_8;
};

// System.Collections.CollectionBase
struct CollectionBase_t44F966CC555C87F2815D668FB4586526E1C2383F  : public RuntimeObject
{
	// System.Collections.ArrayList System.Collections.CollectionBase::_list
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____list_0;
};

// System.Configuration.ConfigurationElement
struct ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E  : public RuntimeObject
{
};

// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93  : public RuntimeObject
{
};

// System.Configuration.ConfigurationSectionGroup
struct ConfigurationSectionGroup_tE7948C2D31B193F4BA8828947ED3094B952C7863  : public RuntimeObject
{
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
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

// System.Diagnostics.DiagnosticsConfigurationHandler
struct DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7  : public RuntimeObject
{
};

// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D  : public RuntimeObject
{
	// System.Boolean System.Security.Cryptography.HashAlgorithm::_disposed
	bool ____disposed_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___HashValue_2;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_3;
};

// System.Collections.HashtableExtensions
struct HashtableExtensions_t856DEECAB5172E908DD4944C65112B8D863DC779  : public RuntimeObject
{
};

// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484  : public RuntimeObject
{
	// System.UInt32 System.Net.IPAddress::_addressOrScopeId
	uint32_t ____addressOrScopeId_8;
	// System.UInt16[] System.Net.IPAddress::_numbers
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ____numbers_9;
	// System.String System.Net.IPAddress::_toString
	String_t* ____toString_10;
	// System.Int32 System.Net.IPAddress::_hashCode
	int32_t ____hashCode_11;
};

// System.Net.IPAddressParser
struct IPAddressParser_t4EBAFE480B61AF2AA63D53B93829B674C8BEE392  : public RuntimeObject
{
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

// System.Marvin
struct Marvin_t0342A28B10725C354B3E96D240FF68C4D7A0D242  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Security.Cryptography.Oid
struct Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287  : public RuntimeObject
{
	// System.String System.Security.Cryptography.Oid::_value
	String_t* ____value_0;
	// System.String System.Security.Cryptography.Oid::_friendlyName
	String_t* ____friendlyName_1;
	// System.Security.Cryptography.OidGroup System.Security.Cryptography.Oid::_group
	int32_t ____group_2;
};

// System.Security.Cryptography.OidCollection
struct OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Security.Cryptography.Oid> System.Security.Cryptography.OidCollection::_list
	List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B* ____list_0;
};

// System.Security.Cryptography.OidEnumerator
struct OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41  : public RuntimeObject
{
	// System.Security.Cryptography.OidCollection System.Security.Cryptography.OidEnumerator::_oids
	OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* ____oids_0;
	// System.Int32 System.Security.Cryptography.OidEnumerator::_current
	int32_t ____current_1;
};

// Mono.Security.X509.PKCS12
struct PKCS12_t1E7D81A38668D35E4536A15ADC8190525267A989  : public RuntimeObject
{
	// System.Byte[] Mono.Security.X509.PKCS12::_password
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____password_0;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_keyBags
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____keyBags_1;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_secretBags
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____secretBags_2;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.PKCS12::_certs
	X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4* ____certs_3;
	// System.Boolean Mono.Security.X509.PKCS12::_keyBagsChanged
	bool ____keyBagsChanged_4;
	// System.Boolean Mono.Security.X509.PKCS12::_secretBagsChanged
	bool ____secretBagsChanged_5;
	// System.Boolean Mono.Security.X509.PKCS12::_certsChanged
	bool ____certsChanged_6;
	// System.Int32 Mono.Security.X509.PKCS12::_iterations
	int32_t ____iterations_7;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_safeBags
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____safeBags_8;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.X509.PKCS12::_rng
	RandomNumberGenerator_t4E862666A2F7D55324960670C7A1B4C2D40222F3* ____rng_9;
};

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405  : public RuntimeObject
{
	// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::_keyValue
	AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ____keyValue_0;
	// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::_params
	AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ____params_1;
	// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::_oid
	Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* ____oid_2;
};

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t* ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;
};

// System.Net.ServicePoint
struct ServicePoint_t5DB5939994CAA6A0DF221C5F58D59D1A6131CE29  : public RuntimeObject
{
};

// System.Net.ServicePointManager
struct ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120  : public RuntimeObject
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

// System.ComponentModel.TypeConverter
struct TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C  : public RuntimeObject
{
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

// System.Security.Cryptography.X509Certificates.X509CertificateImpl
struct X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF  : public RuntimeObject
{
};

// System.Security.Cryptography.X509Certificates.X509CertificateImplCollection
struct X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Security.Cryptography.X509Certificates.X509CertificateImpl> System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::list
	List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC* ___list_0;
};

// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5  : public RuntimeObject
{
	// System.Security.Cryptography.X509Certificates.X509ChainImpl System.Security.Cryptography.X509Certificates.X509Chain::impl
	X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* ___impl_0;
};

// System.Security.Cryptography.X509Certificates.X509ChainElement
struct X509ChainElement_t95FFAD3F504A1CA731ECCBA88C5CB3B0EE28786D  : public RuntimeObject
{
};

// System.Security.Cryptography.X509Certificates.X509ChainElementCollection
struct X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D  : public RuntimeObject
{
	// System.Collections.ArrayList System.Security.Cryptography.X509Certificates.X509ChainElementCollection::_list
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____list_0;
};

// System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator
struct X509ChainElementEnumerator_tE4033654D4E19B54FE64143E10BCB1775B57BD6D  : public RuntimeObject
{
	// System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::enumerator
	RuntimeObject* ___enumerator_0;
};

// System.Security.Cryptography.X509Certificates.X509ChainImpl
struct X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F  : public RuntimeObject
{
};

// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0  : public RuntimeObject
{
	// System.Collections.ArrayList System.Security.Cryptography.X509Certificates.X509ExtensionCollection::_list
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____list_1;
};

// System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator
struct X509ExtensionEnumerator_t7C4F4F5D65C7023FA1BEE3F6522B066A6CECCFF6  : public RuntimeObject
{
	// System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::enumerator
	RuntimeObject* ___enumerator_0;
};

// System.Security.Cryptography.X509Certificates.X509Helper2
struct X509Helper2_t6282AE44135C3E58DB3FD965347CB88163D2E924  : public RuntimeObject
{
};

// Mono.Security.X509.X509Store
struct X509Store_tC2D674DE1D07619474A1D17B132DDA911F9FD661  : public RuntimeObject
{
	// System.String Mono.Security.X509.X509Store::_storePath
	String_t* ____storePath_0;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::_certificates
	X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4* ____certificates_1;
	// System.Boolean Mono.Security.X509.X509Store::_crl
	bool ____crl_2;
	// System.Boolean Mono.Security.X509.X509Store::_newFormat
	bool ____newFormat_3;
};

// System.Security.Cryptography.X509Certificates.X509Store
struct X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6  : public RuntimeObject
{
	// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Store::list
	X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB* ___list_0;
	// Mono.Security.X509.X509Store System.Security.Cryptography.X509Certificates.X509Store::store
	X509Store_tC2D674DE1D07619474A1D17B132DDA911F9FD661* ___store_1;
};

// System.Xml.XmlNode
struct XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF  : public RuntimeObject
{
};

// System.Net.ServicePointManager/SPKey
struct SPKey_t3FD8B8DF5F452D3E34F29B5EC1AEC33370B1A6E5  : public RuntimeObject
{
};

// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_tC5F10128EB5F9B6E4E5519E6AE47DA01384F91E3  : public RuntimeObject
{
};

// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE  : public RuntimeObject
{
	// System.Collections.IEnumerator Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::enumerator
	RuntimeObject* ___enumerator_0;
};

// System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t6629E2BB0FB5D92B2EB502312B764686BAFDF0D9  : public RuntimeObject
{
	// System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::enumerator
	RuntimeObject* ___enumerator_0;
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

// System.Collections.Generic.List`1/Enumerator<System.Security.Cryptography.X509Certificates.X509CertificateImpl>
struct Enumerator_tF4CDD4C302133A0B789C3FF957DFC0C461B604AF 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF* ____current_3;
};

// System.Memory`1<System.Byte>
struct Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 
{
	// System.Object System.Memory`1::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.Memory`1::_index
	int32_t ____index_1;
	// System.Int32 System.Memory`1::_length
	int32_t ____length_2;
};
// Native definition for P/Invoke marshalling of System.Memory`1
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.Memory`1
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

// System.ReadOnlyMemory`1<System.Byte>
struct ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 
{
	// System.Object System.ReadOnlyMemory`1::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.ReadOnlyMemory`1::_index
	int32_t ____index_1;
	// System.Int32 System.ReadOnlyMemory`1::_length
	int32_t ____length_2;
};
// Native definition for P/Invoke marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_22;
};

// System.Threading.Tasks.ValueTask`1<System.Int32>
struct ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 
{
	// System.Object System.Threading.Tasks.ValueTask`1::_obj
	RuntimeObject* ____obj_0;
	// TResult System.Threading.Tasks.ValueTask`1::_result
	int32_t ____result_1;
	// System.Int16 System.Threading.Tasks.ValueTask`1::_token
	int16_t ____token_2;
	// System.Boolean System.Threading.Tasks.ValueTask`1::_continueOnCapturedContext
	bool ____continueOnCapturedContext_3;
};

// System.ValueTuple`2<System.Int32,System.Int32>
struct ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D 
{
	// T1 System.ValueTuple`2::Item1
	int32_t ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	int32_t ___Item2_1;
};

// System.ComponentModel.BaseNumberConverter
struct BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706  : public TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.ComponentModel.BooleanConverter
struct BooleanConverter_tC955870C6FB390C432D032E5025342C0BCB2DEE9  : public TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C
{
};

// System.Net.Configuration.BypassElement
struct BypassElement_t1626DF2ACB357F8677EA94142CFA984569ADB4DC  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// System.ComponentModel.CollectionConverter
struct CollectionConverter_t47EAA5F1386CB891414AB5096CFA50418A5D64B0  : public TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C
{
};

// System.Configuration.ConfigurationElementCollection
struct ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Configuration.ConfigurationSection
struct ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Net.Configuration.ConnectionManagementElement
struct ConnectionManagementElement_t44321336DB0AC70D7B85FAB146D7F66036D51353  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Security.Cryptography.DSA
struct DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41  : public AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8
{
};

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 
{
	// System.Byte[] System.Security.Cryptography.DSAParameters::P
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___P_0;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Q
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Q_1;
	// System.Byte[] System.Security.Cryptography.DSAParameters::G
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___G_2;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Y
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Y_3;
	// System.Byte[] System.Security.Cryptography.DSAParameters::J
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___J_4;
	// System.Byte[] System.Security.Cryptography.DSAParameters::X
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___X_5;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Seed
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Seed_6;
	// System.Int32 System.Security.Cryptography.DSAParameters::Counter
	int32_t ___Counter_7;
};
// Native definition for P/Invoke marshalling of System.Security.Cryptography.DSAParameters
struct DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___P_0;
	Il2CppSafeArray/*NONE*/* ___Q_1;
	Il2CppSafeArray/*NONE*/* ___G_2;
	Il2CppSafeArray/*NONE*/* ___Y_3;
	Il2CppSafeArray/*NONE*/* ___J_4;
	Il2CppSafeArray/*NONE*/* ___X_5;
	Il2CppSafeArray/*NONE*/* ___Seed_6;
	int32_t ___Counter_7;
};
// Native definition for COM marshalling of System.Security.Cryptography.DSAParameters
struct DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___P_0;
	Il2CppSafeArray/*NONE*/* ___Q_1;
	Il2CppSafeArray/*NONE*/* ___G_2;
	Il2CppSafeArray/*NONE*/* ___Y_3;
	Il2CppSafeArray/*NONE*/* ___J_4;
	Il2CppSafeArray/*NONE*/* ___X_5;
	Il2CppSafeArray/*NONE*/* ___Seed_6;
	int32_t ___Counter_7;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.ComponentModel.DescriptionAttribute
struct DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.ComponentModel.DescriptionAttribute::<DescriptionValue>k__BackingField
	String_t* ___U3CDescriptionValueU3Ek__BackingField_1;
};

// System.ComponentModel.DesignTimeVisibleAttribute
struct DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Boolean System.ComponentModel.DesignTimeVisibleAttribute::<Visible>k__BackingField
	bool ___U3CVisibleU3Ek__BackingField_0;
};

// System.ComponentModel.DisplayNameAttribute
struct DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.ComponentModel.DisplayNameAttribute::<DisplayNameValue>k__BackingField
	String_t* ___U3CDisplayNameValueU3Ek__BackingField_1;
};

// System.ComponentModel.EditorBrowsableAttribute
struct EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.ComponentModel.EditorBrowsableState System.ComponentModel.EditorBrowsableAttribute::browsableState
	int32_t ___browsableState_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.ComponentModel.EnumConverter
struct EnumConverter_t2E799BC1F322DBF25DEFEC2C57C006223320182D  : public TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C
{
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.EnumConverter::values
	StandardValuesCollection_tC5F10128EB5F9B6E4E5519E6AE47DA01384F91E3* ___values_2;
	// System.Type System.ComponentModel.EnumConverter::type
	Type_t* ___type_3;
};

// System.Net.Configuration.HttpWebRequestElement
struct HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
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

// System.Net.Configuration.Ipv6Element
struct Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Net.Configuration.NetSectionGroup
struct NetSectionGroup_tA83DCAF89773087D0E921B92F67441132B71D52F  : public ConfigurationSectionGroup_tE7948C2D31B193F4BA8828947ED3094B952C7863
{
};

// System.Net.Configuration.PerformanceCountersElement
struct PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Net.Configuration.ProxyElement
struct ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Security.Cryptography.RSA
struct RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A  : public AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8
{
};

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF 
{
	// System.Byte[] System.Security.Cryptography.RSAParameters::Exponent
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Exponent_0;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Modulus
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Modulus_1;
	// System.Byte[] System.Security.Cryptography.RSAParameters::P
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___P_2;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Q
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Q_3;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DP
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___DP_4;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DQ
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___DQ_5;
	// System.Byte[] System.Security.Cryptography.RSAParameters::InverseQ
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___InverseQ_6;
	// System.Byte[] System.Security.Cryptography.RSAParameters::D
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___D_7;
};
// Native definition for P/Invoke marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___Exponent_0;
	Il2CppSafeArray/*NONE*/* ___Modulus_1;
	Il2CppSafeArray/*NONE*/* ___P_2;
	Il2CppSafeArray/*NONE*/* ___Q_3;
	Il2CppSafeArray/*NONE*/* ___DP_4;
	Il2CppSafeArray/*NONE*/* ___DQ_5;
	Il2CppSafeArray/*NONE*/* ___InverseQ_6;
	Il2CppSafeArray/*NONE*/* ___D_7;
};
// Native definition for COM marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___Exponent_0;
	Il2CppSafeArray/*NONE*/* ___Modulus_1;
	Il2CppSafeArray/*NONE*/* ___P_2;
	Il2CppSafeArray/*NONE*/* ___Q_3;
	Il2CppSafeArray/*NONE*/* ___DP_4;
	Il2CppSafeArray/*NONE*/* ___DQ_5;
	Il2CppSafeArray/*NONE*/* ___InverseQ_6;
	Il2CppSafeArray/*NONE*/* ___D_7;
};

// System.Security.Cryptography.SHA1
struct SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};

// System.Net.Configuration.ServicePointManagerElement
struct ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Net.Configuration.SocketElement
struct SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.ComponentModel.StringConverter
struct StringConverter_t1AE794D42AE414C00F2443B76F3EA694C310FF1E  : public TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C
{
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

// System.ComponentModel.TimeSpanConverter
struct TimeSpanConverter_tB91A0347D2F1228A476F50705D3048A50F1A4B9F  : public TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C
{
};

// System.ComponentModel.TypeConverterAttribute
struct TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.ComponentModel.TypeConverterAttribute::<ConverterTypeName>k__BackingField
	String_t* ___U3CConverterTypeNameU3Ek__BackingField_1;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Threading.Tasks.ValueTask
struct ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F 
{
	// System.Object System.Threading.Tasks.ValueTask::_obj
	RuntimeObject* ____obj_1;
	// System.Int16 System.Threading.Tasks.ValueTask::_token
	int16_t ____token_2;
	// System.Boolean System.Threading.Tasks.ValueTask::_continueOnCapturedContext
	bool ____continueOnCapturedContext_3;
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

// System.Net.Configuration.WebProxyScriptElement
struct WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Net.Configuration.WebRequestModuleElement
struct WebRequestModuleElement_t9856A4B94D713299F842F672DFD60557C38349FD  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Security.Cryptography.X509Certificates.X500DistinguishedName
struct X500DistinguishedName_t53976A4567E82199856DAD47D3850F8EECABDAF6  : public AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8
{
	// System.String System.Security.Cryptography.X509Certificates.X500DistinguishedName::name
	String_t* ___name_2;
};

// System.Security.Cryptography.X509Certificates.X509Certificate2Impl
struct X509Certificate2Impl_t9EC3180958225F2A99501C70603CE52BCD1DFD25  : public X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF
{
};

// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4  : public CollectionBase_t44F966CC555C87F2815D668FB4586526E1C2383F
{
};

// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE  : public CollectionBase_t44F966CC555C87F2815D668FB4586526E1C2383F
{
};

// System.Security.Cryptography.X509Certificates.X509ChainImplMono
struct X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D  : public X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F
{
	// System.Security.Cryptography.X509Certificates.StoreLocation System.Security.Cryptography.X509Certificates.X509ChainImplMono::location
	int32_t ___location_0;
	// System.Security.Cryptography.X509Certificates.X509ChainElementCollection System.Security.Cryptography.X509Certificates.X509ChainImplMono::elements
	X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D* ___elements_1;
	// System.Security.Cryptography.X509Certificates.X509ChainPolicy System.Security.Cryptography.X509Certificates.X509ChainImplMono::policy
	X509ChainPolicy_t34F49B4067492A1E5F91DD91FA7C934B68D880EC* ___policy_2;
	// System.Security.Cryptography.X509Certificates.X509ChainStatus[] System.Security.Cryptography.X509Certificates.X509ChainImplMono::status
	X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299* ___status_3;
	// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.X509ChainImplMono::working_public_key
	AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8* ___working_public_key_5;
	// System.Security.Cryptography.X509Certificates.X509ChainElement System.Security.Cryptography.X509Certificates.X509ChainImplMono::bce_restriction
	X509ChainElement_t95FFAD3F504A1CA731ECCBA88C5CB3B0EE28786D* ___bce_restriction_6;
	// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509ChainImplMono::roots
	X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB* ___roots_7;
	// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509ChainImplMono::cas
	X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB* ___cas_8;
	// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509ChainImplMono::root_store
	X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* ___root_store_9;
	// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509ChainImplMono::ca_store
	X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* ___ca_store_10;
	// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509ChainImplMono::user_root_store
	X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* ___user_root_store_11;
	// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509ChainImplMono::user_ca_store
	X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* ___user_ca_store_12;
	// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509ChainImplMono::collection
	X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB* ___collection_13;
};

// System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D 
{
	// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509ChainStatus::status
	int32_t ___status_0;
	// System.String System.Security.Cryptography.X509Certificates.X509ChainStatus::info
	String_t* ___info_1;
};
// Native definition for P/Invoke marshalling of System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_pinvoke
{
	int32_t ___status_0;
	char* ___info_1;
};
// Native definition for COM marshalling of System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_com
{
	int32_t ___status_0;
	Il2CppChar* ___info_1;
};

// System.Security.Cryptography.X509Certificates.X509Extension
struct X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5  : public AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8
{
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Extension::_critical
	bool ____critical_2;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10
struct __StaticArrayInitTypeSizeU3D10_t92CF09DC4E69422B6E8E804C0DE84FDE8FB89800 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D10_t92CF09DC4E69422B6E8E804C0DE84FDE8FB89800__padding[10];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct __StaticArrayInitTypeSizeU3D128_tCC4BD0E4F5977323EDA6FFF6CD1484F1848F5B0E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_tCC4BD0E4F5977323EDA6FFF6CD1484F1848F5B0E__padding[128];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48__padding[32];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9
struct __StaticArrayInitTypeSizeU3D9_tE2A1104C752B51004E61139D4615CC263948C4A7 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D9_tE2A1104C752B51004E61139D4615CC263948C4A7__padding[9];
	};
};

// Internal.Cryptography.Pal.CertificateData/AlgorithmIdentifier
struct AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8 
{
	// System.String Internal.Cryptography.Pal.CertificateData/AlgorithmIdentifier::AlgorithmId
	String_t* ___AlgorithmId_0;
	// System.Byte[] Internal.Cryptography.Pal.CertificateData/AlgorithmIdentifier::Parameters
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Parameters_1;
};
// Native definition for P/Invoke marshalling of Internal.Cryptography.Pal.CertificateData/AlgorithmIdentifier
struct AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8_marshaled_pinvoke
{
	char* ___AlgorithmId_0;
	Il2CppSafeArray/*NONE*/* ___Parameters_1;
};
// Native definition for COM marshalling of Internal.Cryptography.Pal.CertificateData/AlgorithmIdentifier
struct AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8_marshaled_com
{
	Il2CppChar* ___AlgorithmId_0;
	Il2CppSafeArray/*NONE*/* ___Parameters_1;
};

// System.Net.IPAddress/ReadOnlyIPAddress
struct ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C  : public IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484
{
};

// System.ByReference`1<System.Byte>
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// System.ByReference`1<System.UInt16>
struct ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// System.ByReference`1<System.UInt32>
struct ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t56F624E1051A2E261613B6A81CA2333397F49CB3  : public RuntimeObject
{
};

// System.ComponentModel.ArrayConverter
struct ArrayConverter_tE417E9DB044C4317BF7F9B7DF5CD0F4C7C38672C  : public CollectionConverter_t47EAA5F1386CB891414AB5096CFA50418A5D64B0
{
};

// System.Net.Security.AuthenticatedStream
struct AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.IO.Stream System.Net.Security.AuthenticatedStream::_InnerStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____InnerStream_4;
	// System.Boolean System.Net.Security.AuthenticatedStream::_LeaveStreamOpen
	bool ____LeaveStreamOpen_5;
};

// Mono.Security.Authenticode.AuthenticodeDeformatter
struct AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2  : public AuthenticodeBase_t14D3C295865C85D138AF4DDCD73F6CE08AE02EAD
{
	// System.String Mono.Security.Authenticode.AuthenticodeDeformatter::filename
	String_t* ___filename_9;
	// System.Byte[] Mono.Security.Authenticode.AuthenticodeDeformatter::rawdata
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rawdata_10;
	// System.Byte[] Mono.Security.Authenticode.AuthenticodeDeformatter::hash
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___hash_11;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.Authenticode.AuthenticodeDeformatter::coll
	X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4* ___coll_12;
	// Mono.Security.ASN1 Mono.Security.Authenticode.AuthenticodeDeformatter::signedHash
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ___signedHash_13;
	// System.DateTime Mono.Security.Authenticode.AuthenticodeDeformatter::timestamp
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___timestamp_14;
	// Mono.Security.X509.X509Certificate Mono.Security.Authenticode.AuthenticodeDeformatter::signingCertificate
	X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* ___signingCertificate_15;
	// System.Int32 Mono.Security.Authenticode.AuthenticodeDeformatter::reason
	int32_t ___reason_16;
	// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::trustedRoot
	bool ___trustedRoot_17;
	// System.Boolean Mono.Security.Authenticode.AuthenticodeDeformatter::trustedTimestampRoot
	bool ___trustedTimestampRoot_18;
	// System.Byte[] Mono.Security.Authenticode.AuthenticodeDeformatter::entry
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___entry_19;
	// Mono.Security.X509.X509Chain Mono.Security.Authenticode.AuthenticodeDeformatter::signerChain
	X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21* ___signerChain_20;
	// Mono.Security.X509.X509Chain Mono.Security.Authenticode.AuthenticodeDeformatter::timestampChain
	X509Chain_t5B2B343190D10F0CBE48EF822C92F1486E321E21* ___timestampChain_21;
};

// System.Net.Configuration.BypassElementCollection
struct BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE  : public ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606
{
};

// Internal.Cryptography.Pal.CertificateData
struct CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1 
{
	// System.Byte[] Internal.Cryptography.Pal.CertificateData::RawData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___RawData_0;
	// System.Byte[] Internal.Cryptography.Pal.CertificateData::SubjectPublicKeyInfo
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___SubjectPublicKeyInfo_1;
	// System.Int32 Internal.Cryptography.Pal.CertificateData::Version
	int32_t ___Version_2;
	// System.Byte[] Internal.Cryptography.Pal.CertificateData::SerialNumber
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___SerialNumber_3;
	// Internal.Cryptography.Pal.CertificateData/AlgorithmIdentifier Internal.Cryptography.Pal.CertificateData::TbsSignature
	AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8 ___TbsSignature_4;
	// System.Security.Cryptography.X509Certificates.X500DistinguishedName Internal.Cryptography.Pal.CertificateData::Issuer
	X500DistinguishedName_t53976A4567E82199856DAD47D3850F8EECABDAF6* ___Issuer_5;
	// System.DateTime Internal.Cryptography.Pal.CertificateData::NotBefore
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___NotBefore_6;
	// System.DateTime Internal.Cryptography.Pal.CertificateData::NotAfter
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___NotAfter_7;
	// System.Security.Cryptography.X509Certificates.X500DistinguishedName Internal.Cryptography.Pal.CertificateData::Subject
	X500DistinguishedName_t53976A4567E82199856DAD47D3850F8EECABDAF6* ___Subject_8;
	// Internal.Cryptography.Pal.CertificateData/AlgorithmIdentifier Internal.Cryptography.Pal.CertificateData::PublicKeyAlgorithm
	AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8 ___PublicKeyAlgorithm_9;
	// System.Byte[] Internal.Cryptography.Pal.CertificateData::PublicKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___PublicKey_10;
	// System.Byte[] Internal.Cryptography.Pal.CertificateData::IssuerUniqueId
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___IssuerUniqueId_11;
	// System.Byte[] Internal.Cryptography.Pal.CertificateData::SubjectUniqueId
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___SubjectUniqueId_12;
	// System.Collections.Generic.List`1<System.Security.Cryptography.X509Certificates.X509Extension> Internal.Cryptography.Pal.CertificateData::Extensions
	List_1_t03551104C97124C9D83186EEB3F066B8BFFD87E3* ___Extensions_13;
	// Internal.Cryptography.Pal.CertificateData/AlgorithmIdentifier Internal.Cryptography.Pal.CertificateData::SignatureAlgorithm
	AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8 ___SignatureAlgorithm_14;
	// System.Byte[] Internal.Cryptography.Pal.CertificateData::SignatureValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___SignatureValue_15;
};
// Native definition for P/Invoke marshalling of Internal.Cryptography.Pal.CertificateData
struct CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___RawData_0;
	Il2CppSafeArray/*NONE*/* ___SubjectPublicKeyInfo_1;
	int32_t ___Version_2;
	Il2CppSafeArray/*NONE*/* ___SerialNumber_3;
	AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8_marshaled_pinvoke ___TbsSignature_4;
	X500DistinguishedName_t53976A4567E82199856DAD47D3850F8EECABDAF6* ___Issuer_5;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___NotBefore_6;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___NotAfter_7;
	X500DistinguishedName_t53976A4567E82199856DAD47D3850F8EECABDAF6* ___Subject_8;
	AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8_marshaled_pinvoke ___PublicKeyAlgorithm_9;
	Il2CppSafeArray/*NONE*/* ___PublicKey_10;
	Il2CppSafeArray/*NONE*/* ___IssuerUniqueId_11;
	Il2CppSafeArray/*NONE*/* ___SubjectUniqueId_12;
	List_1_t03551104C97124C9D83186EEB3F066B8BFFD87E3* ___Extensions_13;
	AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8_marshaled_pinvoke ___SignatureAlgorithm_14;
	Il2CppSafeArray/*NONE*/* ___SignatureValue_15;
};
// Native definition for COM marshalling of Internal.Cryptography.Pal.CertificateData
struct CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___RawData_0;
	Il2CppSafeArray/*NONE*/* ___SubjectPublicKeyInfo_1;
	int32_t ___Version_2;
	Il2CppSafeArray/*NONE*/* ___SerialNumber_3;
	AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8_marshaled_com ___TbsSignature_4;
	X500DistinguishedName_t53976A4567E82199856DAD47D3850F8EECABDAF6* ___Issuer_5;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___NotBefore_6;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___NotAfter_7;
	X500DistinguishedName_t53976A4567E82199856DAD47D3850F8EECABDAF6* ___Subject_8;
	AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8_marshaled_com ___PublicKeyAlgorithm_9;
	Il2CppSafeArray/*NONE*/* ___PublicKey_10;
	Il2CppSafeArray/*NONE*/* ___IssuerUniqueId_11;
	Il2CppSafeArray/*NONE*/* ___SubjectUniqueId_12;
	List_1_t03551104C97124C9D83186EEB3F066B8BFFD87E3* ___Extensions_13;
	AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8_marshaled_com ___SignatureAlgorithm_14;
	Il2CppSafeArray/*NONE*/* ___SignatureValue_15;
};

// System.Net.Configuration.ConnectionManagementElementCollection
struct ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1  : public ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606
{
};

// System.Net.Configuration.ConnectionManagementSection
struct ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};

// System.Security.Cryptography.DSACryptoServiceProvider
struct DSACryptoServiceProvider_tB418CD8E85D69D879C7298E4A6A7D8CFAC09D79E  : public DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41
{
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.DSACryptoServiceProvider::store
	KeyPairPersistence_t78D61FCDE172753BFE756B555CBD85127832CDF6* ___store_2;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::persistKey
	bool ___persistKey_3;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::persisted
	bool ___persisted_4;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable_5;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::m_disposed
	bool ___m_disposed_6;
	// Mono.Security.Cryptography.DSAManaged System.Security.Cryptography.DSACryptoServiceProvider::dsa
	DSAManaged_t93F6FE86F625186D42535B8E70AE3094A24367EB* ___dsa_7;
};

// System.ComponentModel.DecimalConverter
struct DecimalConverter_tCBE948B718842C42CB22DF92D59AB2C1EC0FAEDF  : public BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706
{
};

// System.Net.Configuration.DefaultProxySection
struct DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};

// System.IO.Compression.DeflateStream
struct DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.IO.Stream System.IO.Compression.DeflateStream::base_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___base_stream_4;
	// System.IO.Compression.CompressionMode System.IO.Compression.DeflateStream::mode
	int32_t ___mode_5;
	// System.Boolean System.IO.Compression.DeflateStream::leaveOpen
	bool ___leaveOpen_6;
	// System.Boolean System.IO.Compression.DeflateStream::disposed
	bool ___disposed_7;
	// System.IO.Compression.DeflateStreamNative System.IO.Compression.DeflateStream::native
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* ___native_8;
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

// System.ComponentModel.DoubleConverter
struct DoubleConverter_t1FB61A3A8171D3023AA9678231D9C480A67799DE  : public BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706
{
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// System.IO.Compression.GZipStream
struct GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.IO.Compression.DeflateStream System.IO.Compression.GZipStream::_deflateStream
	DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* ____deflateStream_4;
};

// System.ComponentModel.Int16Converter
struct Int16Converter_t6513884DE2649E1FA03AC947F80FCE6BE61792BB  : public BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706
{
};

// System.ComponentModel.Int32Converter
struct Int32Converter_t461564B848A4566C9E72FED147B4FC64BD4BE6ED  : public BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706
{
};

// System.ComponentModel.Int64Converter
struct Int64Converter_tF9458770A9BF6718A4866AFEAABCACD022754E23  : public BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706
{
};

// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C  : public RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A
{
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.RSACryptoServiceProvider::store
	KeyPairPersistence_t78D61FCDE172753BFE756B555CBD85127832CDF6* ___store_3;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persistKey
	bool ___persistKey_4;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persisted
	bool ___persisted_5;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable_6;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::m_disposed
	bool ___m_disposed_7;
	// Mono.Security.Cryptography.RSAManaged System.Security.Cryptography.RSACryptoServiceProvider::rsa
	RSAManaged_t897B29EF76C459408E11A42680C942716D809001* ___rsa_8;
};

// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4  : public RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A
{
	// System.Boolean Mono.Security.Cryptography.RSAManaged::isCRTpossible
	bool ___isCRTpossible_2;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::keyBlinding
	bool ___keyBlinding_3;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::keypairGenerated
	bool ___keypairGenerated_4;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::m_disposed
	bool ___m_disposed_5;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::d
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___d_6;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::p
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___p_7;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::q
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___q_8;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dp
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___dp_9;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dq
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___dq_10;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::qInv
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___qInv_11;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::n
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___n_12;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::e
	BigInteger_t890C3F24704442DA2A8C5B3F1E05E1588C7B5F08* ___e_13;
	// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler Mono.Security.Cryptography.RSAManaged::KeyGenerated
	KeyGeneratedEventHandler_t5EDD824AAD4D47A4C32E693596793AB83DB84107* ___KeyGenerated_14;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::_state
	int32_t ____state_1;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_ownsHandle
	bool ____ownsHandle_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_fullyInitialized
	bool ____fullyInitialized_3;
};

// System.Net.Configuration.SettingsSection
struct SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};

// System.ComponentModel.SingleConverter
struct SingleConverter_tF3C0B984505288F214BFECEAD90CA0498B7378C1  : public BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706
{
};

// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449* ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;
};
// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// System.Net.Configuration.WebRequestModuleElementCollection
struct WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463  : public ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606
{
};

// System.Net.Configuration.WebRequestModulesSection
struct WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};

// Mono.Security.X509.X509Certificate
struct X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356  : public RuntimeObject
{
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::decoder
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ___decoder_0;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_encodedcert
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_encodedcert_1;
	// System.DateTime Mono.Security.X509.X509Certificate::m_from
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___m_from_2;
	// System.DateTime Mono.Security.X509.X509Certificate::m_until
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___m_until_3;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::issuer
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ___issuer_4;
	// System.String Mono.Security.X509.X509Certificate::m_issuername
	String_t* ___m_issuername_5;
	// System.String Mono.Security.X509.X509Certificate::m_keyalgo
	String_t* ___m_keyalgo_6;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_keyalgoparams
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_keyalgoparams_7;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::subject
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ___subject_8;
	// System.String Mono.Security.X509.X509Certificate::m_subject
	String_t* ___m_subject_9;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_publickey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_publickey_10;
	// System.Byte[] Mono.Security.X509.X509Certificate::signature
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___signature_11;
	// System.String Mono.Security.X509.X509Certificate::m_signaturealgo
	String_t* ___m_signaturealgo_12;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_signaturealgoparams
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_signaturealgoparams_13;
	// System.Byte[] Mono.Security.X509.X509Certificate::certhash
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___certhash_14;
	// System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::_rsa
	RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* ____rsa_15;
	// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::_dsa
	DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* ____dsa_16;
	// System.Int32 Mono.Security.X509.X509Certificate::version
	int32_t ___version_17;
	// System.Byte[] Mono.Security.X509.X509Certificate::serialnumber
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___serialnumber_18;
	// System.Byte[] Mono.Security.X509.X509Certificate::issuerUniqueID
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___issuerUniqueID_19;
	// System.Byte[] Mono.Security.X509.X509Certificate::subjectUniqueID
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___subjectUniqueID_20;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::extensions
	X509ExtensionCollection_t4A6DDB3D653B72CD358E09B7A1D6DE4EA4DB6534* ___extensions_21;
};

// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4  : public RuntimeObject
{
	// System.Security.Cryptography.X509Certificates.X509CertificateImpl System.Security.Cryptography.X509Certificates.X509Certificate::impl
	X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF* ___impl_0;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyCertHash
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyCertHash_1;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazySerialNumber
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazySerialNumber_2;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyIssuer
	String_t* ___lazyIssuer_3;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazySubject
	String_t* ___lazySubject_4;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyKeyAlgorithm
	String_t* ___lazyKeyAlgorithm_5;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyKeyAlgorithmParameters
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyKeyAlgorithmParameters_6;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyPublicKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyPublicKey_7;
	// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate::lazyNotBefore
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___lazyNotBefore_8;
	// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate::lazyNotAfter
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___lazyNotAfter_9;
};

// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB  : public X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE
{
};

// System.Security.Cryptography.X509Certificates.X509ChainPolicy
struct X509ChainPolicy_t34F49B4067492A1E5F91DD91FA7C934B68D880EC  : public RuntimeObject
{
	// System.Security.Cryptography.OidCollection System.Security.Cryptography.X509Certificates.X509ChainPolicy::apps
	OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* ___apps_0;
	// System.Security.Cryptography.OidCollection System.Security.Cryptography.X509Certificates.X509ChainPolicy::cert
	OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* ___cert_1;
	// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509ChainPolicy::store2
	X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB* ___store2_2;
	// System.Security.Cryptography.X509Certificates.X509RevocationFlag System.Security.Cryptography.X509Certificates.X509ChainPolicy::rflag
	int32_t ___rflag_3;
	// System.Security.Cryptography.X509Certificates.X509RevocationMode System.Security.Cryptography.X509Certificates.X509ChainPolicy::mode
	int32_t ___mode_4;
	// System.TimeSpan System.Security.Cryptography.X509Certificates.X509ChainPolicy::timeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___timeout_5;
	// System.Security.Cryptography.X509Certificates.X509VerificationFlags System.Security.Cryptography.X509Certificates.X509ChainPolicy::vflags
	int32_t ___vflags_6;
	// System.DateTime System.Security.Cryptography.X509Certificates.X509ChainPolicy::vtime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___vtime_7;
};

// System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension
struct X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF  : public X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5
{
	// System.Security.Cryptography.OidCollection System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::_enhKeyUsage
	OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* ____enhKeyUsage_3;
	// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::_status
	int32_t ____status_4;
};

// System.Security.Cryptography.X509Certificates.X509KeyUsageExtension
struct X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B  : public X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5
{
	// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::_keyUsages
	int32_t ____keyUsages_6;
	// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::_status
	int32_t ____status_7;
};

// System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension
struct X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5  : public X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5
{
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::_subjectKeyIdentifier
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____subjectKeyIdentifier_5;
	// System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::_ski
	String_t* ____ski_6;
	// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::_status
	int32_t ____status_7;
};

// System.Array/RawData
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	// System.IntPtr System.Array/RawData::Bounds
	intptr_t ___Bounds_0;
	// System.IntPtr System.Array/RawData::Count
	intptr_t ___Count_1;
	// System.Byte System.Array/RawData::Data
	uint8_t ___Data_2;
};
// Native definition for P/Invoke marshalling of System.Array/RawData
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds_0;
	intptr_t ___Count_1;
	uint8_t ___Data_2;
};
// Native definition for COM marshalling of System.Array/RawData
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds_0;
	intptr_t ___Count_1;
	uint8_t ___Data_2;
};

// System.ReadOnlySpan`1<System.Byte>
struct ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// System.ReadOnlySpan`1<System.UInt16>
struct ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// System.ReadOnlySpan`1<System.UInt32>
struct ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// System.Span`1<System.Byte>
struct Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 
{
	// System.ByReference`1<T> System.Span`1::_pointer
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer_0;
	// System.Int32 System.Span`1::_length
	int32_t ____length_1;
};

// System.Runtime.Remoting.Messaging.AsyncResult
struct AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760  : public RuntimeObject
{
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::async_state
	RuntimeObject* ___async_state_0;
	// System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::handle
	WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8* ___handle_1;
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::async_delegate
	RuntimeObject* ___async_delegate_2;
	// System.IntPtr System.Runtime.Remoting.Messaging.AsyncResult::data
	intptr_t ___data_3;
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::object_data
	RuntimeObject* ___object_data_4;
	// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::sync_completed
	bool ___sync_completed_5;
	// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::completed
	bool ___completed_6;
	// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::endinvoke_called
	bool ___endinvoke_called_7;
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::async_callback
	RuntimeObject* ___async_callback_8;
	// System.Threading.ExecutionContext System.Runtime.Remoting.Messaging.AsyncResult::current
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___current_9;
	// System.Threading.ExecutionContext System.Runtime.Remoting.Messaging.AsyncResult::original
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___original_10;
	// System.Int64 System.Runtime.Remoting.Messaging.AsyncResult::add_time
	int64_t ___add_time_11;
	// System.Runtime.Remoting.Messaging.MonoMethodMessage System.Runtime.Remoting.Messaging.AsyncResult::call_message
	MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601* ___call_message_12;
	// System.Runtime.Remoting.Messaging.IMessageCtrl System.Runtime.Remoting.Messaging.AsyncResult::message_ctrl
	RuntimeObject* ___message_ctrl_13;
	// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::reply_message
	RuntimeObject* ___reply_message_14;
	// System.Threading.WaitCallback System.Runtime.Remoting.Messaging.AsyncResult::orig_cb
	WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___orig_cb_15;
};
// Native definition for P/Invoke marshalling of System.Runtime.Remoting.Messaging.AsyncResult
struct AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_marshaled_pinvoke
{
	Il2CppIUnknown* ___async_state_0;
	WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_pinvoke ___handle_1;
	Il2CppIUnknown* ___async_delegate_2;
	intptr_t ___data_3;
	Il2CppIUnknown* ___object_data_4;
	int32_t ___sync_completed_5;
	int32_t ___completed_6;
	int32_t ___endinvoke_called_7;
	Il2CppIUnknown* ___async_callback_8;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___current_9;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___original_10;
	int64_t ___add_time_11;
	MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshaled_pinvoke* ___call_message_12;
	RuntimeObject* ___message_ctrl_13;
	RuntimeObject* ___reply_message_14;
	Il2CppMethodPointer ___orig_cb_15;
};
// Native definition for COM marshalling of System.Runtime.Remoting.Messaging.AsyncResult
struct AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_marshaled_com
{
	Il2CppIUnknown* ___async_state_0;
	WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_com* ___handle_1;
	Il2CppIUnknown* ___async_delegate_2;
	intptr_t ___data_3;
	Il2CppIUnknown* ___object_data_4;
	int32_t ___sync_completed_5;
	int32_t ___completed_6;
	int32_t ___endinvoke_called_7;
	Il2CppIUnknown* ___async_callback_8;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___current_9;
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___original_10;
	int64_t ___add_time_11;
	MonoMethodMessage_t0A062C5351332ED078EDDF6FA38A87B0A7B5A601_marshaled_com* ___call_message_12;
	RuntimeObject* ___message_ctrl_13;
	RuntimeObject* ___reply_message_14;
	Il2CppMethodPointer ___orig_cb_15;
};

// System.IO.Compression.DeflateStreamNative
struct DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD  : public RuntimeObject
{
	// System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite System.IO.Compression.DeflateStreamNative::feeder
	UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* ___feeder_0;
	// System.IO.Stream System.IO.Compression.DeflateStreamNative::base_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___base_stream_1;
	// System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle System.IO.Compression.DeflateStreamNative::z_stream
	SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* ___z_stream_2;
	// System.Runtime.InteropServices.GCHandle System.IO.Compression.DeflateStreamNative::data
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___data_3;
	// System.Boolean System.IO.Compression.DeflateStreamNative::disposed
	bool ___disposed_4;
	// System.Byte[] System.IO.Compression.DeflateStreamNative::io_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___io_buffer_5;
	// System.Exception System.IO.Compression.DeflateStreamNative::last_error
	Exception_t* ___last_error_6;
};

// Mono.Net.Security.MobileAuthenticatedStream
struct MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E  : public AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39
{
	// Mono.Net.Security.MobileTlsContext Mono.Net.Security.MobileAuthenticatedStream::xobileTlsContext
	MobileTlsContext_t456DDC89866EE34EF32EEF959AD92C9F17684476* ___xobileTlsContext_6;
	// System.Runtime.ExceptionServices.ExceptionDispatchInfo Mono.Net.Security.MobileAuthenticatedStream::lastException
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ___lastException_7;
	// Mono.Net.Security.AsyncProtocolRequest Mono.Net.Security.MobileAuthenticatedStream::asyncHandshakeRequest
	AsyncProtocolRequest_tF31CF30F8C57A3D5DC10A9FB0A5568FA254DFE86* ___asyncHandshakeRequest_8;
	// Mono.Net.Security.AsyncProtocolRequest Mono.Net.Security.MobileAuthenticatedStream::asyncReadRequest
	AsyncProtocolRequest_tF31CF30F8C57A3D5DC10A9FB0A5568FA254DFE86* ___asyncReadRequest_9;
	// Mono.Net.Security.AsyncProtocolRequest Mono.Net.Security.MobileAuthenticatedStream::asyncWriteRequest
	AsyncProtocolRequest_tF31CF30F8C57A3D5DC10A9FB0A5568FA254DFE86* ___asyncWriteRequest_10;
	// Mono.Net.Security.BufferOffsetSize2 Mono.Net.Security.MobileAuthenticatedStream::readBuffer
	BufferOffsetSize2_t2C3F7F42F64D84F357DC24AFCD44AC4679B20629* ___readBuffer_11;
	// Mono.Net.Security.BufferOffsetSize2 Mono.Net.Security.MobileAuthenticatedStream::writeBuffer
	BufferOffsetSize2_t2C3F7F42F64D84F357DC24AFCD44AC4679B20629* ___writeBuffer_12;
	// System.Object Mono.Net.Security.MobileAuthenticatedStream::ioLock
	RuntimeObject* ___ioLock_13;
	// System.Boolean Mono.Net.Security.MobileAuthenticatedStream::shutdown
	bool ___shutdown_14;
	// Mono.Net.Security.MobileAuthenticatedStream/Operation Mono.Net.Security.MobileAuthenticatedStream::operation
	int32_t ___operation_15;
	// System.Net.Security.SslStream Mono.Net.Security.MobileAuthenticatedStream::<SslStream>k__BackingField
	SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* ___U3CSslStreamU3Ek__BackingField_17;
	// Mono.Security.Interface.MonoTlsSettings Mono.Net.Security.MobileAuthenticatedStream::<Settings>k__BackingField
	MonoTlsSettings_tD79AF4AE5C2CD533A3D7A08FED479B1EC1A031B0* ___U3CSettingsU3Ek__BackingField_18;
	// Mono.Net.Security.MobileTlsProvider Mono.Net.Security.MobileAuthenticatedStream::<Provider>k__BackingField
	MobileTlsProvider_tD60D82BEBF267F50F388A026DBB092C7188BB017* ___U3CProviderU3Ek__BackingField_19;
	// System.Int32 Mono.Net.Security.MobileAuthenticatedStream::ID
	int32_t ___ID_21;
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

// Microsoft.Win32.SafeHandles.SafePasswordHandle
struct SafePasswordHandle_t07A3BFCF046DFE44216ACE030F838C8AE2564463  : public SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7
{
};

// System.Net.Security.SslStream
struct SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27  : public AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39
{
	// Mono.Net.Security.MobileAuthenticatedStream System.Net.Security.SslStream::impl
	MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* ___impl_6;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Security.Cryptography.X509Certificates.X509Certificate2ImplUnix
struct X509Certificate2ImplUnix_tF8DFA7FF05CC33C9010EFDCA21A827247CB8E86D  : public X509Certificate2Impl_t9EC3180958225F2A99501C70603CE52BCD1DFD25
{
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2ImplUnix::readCertData
	bool ___readCertData_0;
	// Internal.Cryptography.Pal.CertificateData System.Security.Cryptography.X509Certificates.X509Certificate2ImplUnix::certData
	CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1 ___certData_1;
};

// System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle
struct SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8  : public SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.Security.Cryptography.CryptographicException
struct CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono
struct X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240  : public X509Certificate2ImplUnix_tF8DFA7FF05CC33C9010EFDCA21A827247CB8E86D
{
	// System.Security.Cryptography.X509Certificates.X509CertificateImplCollection System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::intermediateCerts
	X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098* ___intermediateCerts_2;
	// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::_cert
	X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* ____cert_3;
};

// System.IO.Compression.DeflateStream/ReadMethod
struct ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6  : public MulticastDelegate_t
{
};

// System.IO.Compression.DeflateStream/WriteMethod
struct WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9  : public MulticastDelegate_t
{
};

// System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite
struct UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.ComponentModel.InvalidEnumArgumentException
struct InvalidEnumArgumentException_t5B42625AD815A72639D894ED1592FF4BE438D989  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.String System.ObjectDisposedException::_objectName
	String_t* ____objectName_18;
};

// System.PlatformNotSupportedException
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A  : public NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A
{
};

// Unity.ThrowStub
struct ThrowStub_tA028CA7941154A8E0F17F9AD0563D538617A7A47  : public ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB
{
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.Net.ServicePointManager/SPKey,System.Net.ServicePoint>
struct ConcurrentDictionary_2_tA479A4D42D40E0772A26F55B2BB647B6B7B8BDD6_StaticFields
{
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_7;
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.Net.ServicePointManager/SPKey,System.Net.ServicePoint>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.Security.Cryptography.X509Certificates.X509CertificateImpl>
struct List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	X509CertificateImplU5BU5D_tF7670421D516AF3E064DBA6E32AA03CED589795D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Security.Cryptography.X509Certificates.X509CertificateImpl>

// System.Collections.Generic.List`1<System.Security.Cryptography.X509Certificates.X509Extension>
struct List_1_t03551104C97124C9D83186EEB3F066B8BFFD87E3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	X509ExtensionU5BU5D_t6CB6866A33687382EC1D848C41F2687E57166403* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Security.Cryptography.X509Certificates.X509Extension>

// Mono.Security.ASN1

// Mono.Security.ASN1

// System.Collections.ArrayList

// System.Collections.ArrayList

// System.Security.Cryptography.AsnEncodedData

// System.Security.Cryptography.AsnEncodedData

// System.Security.Cryptography.AsymmetricAlgorithm

// System.Security.Cryptography.AsymmetricAlgorithm

// System.Attribute

// System.Attribute

// Mono.Security.Authenticode.AuthenticodeBase

// Mono.Security.Authenticode.AuthenticodeBase

// System.Collections.CollectionBase

// System.Collections.CollectionBase

// System.Configuration.ConfigurationElement

// System.Configuration.ConfigurationElement

// System.Configuration.ConfigurationPropertyCollection

// System.Configuration.ConfigurationPropertyCollection

// System.Configuration.ConfigurationSectionGroup

// System.Configuration.ConfigurationSectionGroup

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject

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

// System.Diagnostics.DiagnosticsConfigurationHandler

// System.Diagnostics.DiagnosticsConfigurationHandler

// System.Security.Cryptography.HashAlgorithm

// System.Security.Cryptography.HashAlgorithm

// System.Collections.HashtableExtensions

// System.Collections.HashtableExtensions

// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields
{
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Any_5;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Loopback_6;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6None_7;
};

// System.Net.IPAddress

// System.Net.IPAddressParser

// System.Net.IPAddressParser

// System.MarshalByRefObject

// System.MarshalByRefObject

// System.Marvin
struct Marvin_t0342A28B10725C354B3E96D240FF68C4D7A0D242_StaticFields
{
	// System.UInt64 System.Marvin::<DefaultSeed>k__BackingField
	uint64_t ___U3CDefaultSeedU3Ek__BackingField_0;
};

// System.Marvin

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.Security.Cryptography.Oid

// System.Security.Cryptography.Oid

// System.Security.Cryptography.OidCollection

// System.Security.Cryptography.OidCollection

// System.Security.Cryptography.OidEnumerator

// System.Security.Cryptography.OidEnumerator

// Mono.Security.X509.PKCS12
struct PKCS12_t1E7D81A38668D35E4536A15ADC8190525267A989_StaticFields
{
	// System.Int32 Mono.Security.X509.PKCS12::password_max_length
	int32_t ___password_max_length_10;
};

// Mono.Security.X509.PKCS12

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405_StaticFields
{
	// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::Empty
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Empty_3;
};

// System.Security.Cryptography.X509Certificates.PublicKey

// System.Runtime.Serialization.SerializationInfo

// System.Runtime.Serialization.SerializationInfo

// System.Net.ServicePoint

// System.Net.ServicePoint

// System.Net.ServicePointManager
struct ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_StaticFields
{
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.Net.ServicePointManager/SPKey,System.Net.ServicePoint> System.Net.ServicePointManager::servicePoints
	ConcurrentDictionary_2_tA479A4D42D40E0772A26F55B2BB647B6B7B8BDD6* ___servicePoints_0;
	// System.Int32 System.Net.ServicePointManager::defaultConnectionLimit
	int32_t ___defaultConnectionLimit_1;
	// System.Int32 System.Net.ServicePointManager::maxServicePointIdleTime
	int32_t ___maxServicePointIdleTime_2;
	// System.Int32 System.Net.ServicePointManager::maxServicePoints
	int32_t ___maxServicePoints_3;
	// System.Int32 System.Net.ServicePointManager::dnsRefreshTimeout
	int32_t ___dnsRefreshTimeout_4;
	// System.Boolean System.Net.ServicePointManager::_checkCRL
	bool ____checkCRL_5;
	// System.Net.SecurityProtocolType System.Net.ServicePointManager::_securityProtocol
	int32_t ____securityProtocol_6;
	// System.Boolean System.Net.ServicePointManager::expectContinue
	bool ___expectContinue_7;
};

// System.Net.ServicePointManager

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// System.Threading.Tasks.Task
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

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// System.ComponentModel.TypeConverter
struct TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C_StaticFields
{
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.TypeConverter::useCompatibleTypeConversion
	bool ___useCompatibleTypeConversion_1;
};

// System.ComponentModel.TypeConverter

// System.ValueType

// System.ValueType

// System.Security.Cryptography.X509Certificates.X509CertificateImpl

// System.Security.Cryptography.X509Certificates.X509CertificateImpl

// System.Security.Cryptography.X509Certificates.X509CertificateImplCollection

// System.Security.Cryptography.X509Certificates.X509CertificateImplCollection

// System.Security.Cryptography.X509Certificates.X509Chain

// System.Security.Cryptography.X509Certificates.X509Chain

// System.Security.Cryptography.X509Certificates.X509ChainElement

// System.Security.Cryptography.X509Certificates.X509ChainElement

// System.Security.Cryptography.X509Certificates.X509ChainElementCollection

// System.Security.Cryptography.X509Certificates.X509ChainElementCollection

// System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator

// System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator

// System.Security.Cryptography.X509Certificates.X509ChainImpl

// System.Security.Cryptography.X509Certificates.X509ChainImpl

// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0_StaticFields
{
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509ExtensionCollection::Empty
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Empty_0;
};

// System.Security.Cryptography.X509Certificates.X509ExtensionCollection

// System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator

// System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator

// System.Security.Cryptography.X509Certificates.X509Helper2

// System.Security.Cryptography.X509Certificates.X509Helper2

// Mono.Security.X509.X509Store

// Mono.Security.X509.X509Store

// System.Security.Cryptography.X509Certificates.X509Store

// System.Security.Cryptography.X509Certificates.X509Store

// System.Xml.XmlNode

// System.Xml.XmlNode

// System.Net.ServicePointManager/SPKey

// System.Net.ServicePointManager/SPKey

// System.ComponentModel.TypeConverter/StandardValuesCollection

// System.ComponentModel.TypeConverter/StandardValuesCollection

// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator

// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator

// System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator

// System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Security.Cryptography.X509Certificates.X509CertificateImpl>

// System.Collections.Generic.List`1/Enumerator<System.Security.Cryptography.X509Certificates.X509CertificateImpl>

// System.Memory`1<System.Byte>

// System.Memory`1<System.Byte>

// System.ReadOnlyMemory`1<System.Byte>

// System.ReadOnlyMemory`1<System.Byte>

// System.Threading.Tasks.Task`1<System.Int32>

// System.Threading.Tasks.Task`1<System.Int32>

// System.Threading.Tasks.ValueTask`1<System.Int32>

// System.Threading.Tasks.ValueTask`1<System.Int32>

// System.ValueTuple`2<System.Int32,System.Int32>

// System.ValueTuple`2<System.Int32,System.Int32>

// System.ComponentModel.BaseNumberConverter

// System.ComponentModel.BaseNumberConverter

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.ComponentModel.BooleanConverter
struct BooleanConverter_tC955870C6FB390C432D032E5025342C0BCB2DEE9_StaticFields
{
	// System.ComponentModel.TypeConverter/StandardValuesCollection modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.BooleanConverter::s_values
	StandardValuesCollection_tC5F10128EB5F9B6E4E5519E6AE47DA01384F91E3* ___s_values_2;
};

// System.ComponentModel.BooleanConverter

// System.Net.Configuration.BypassElement

// System.Net.Configuration.BypassElement

// System.Byte

// System.Byte

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};

// System.Threading.CancellationToken

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.ComponentModel.CollectionConverter

// System.ComponentModel.CollectionConverter

// System.Configuration.ConfigurationElementCollection

// System.Configuration.ConfigurationElementCollection

// System.Configuration.ConfigurationSection

// System.Configuration.ConfigurationSection

// System.Net.Configuration.ConnectionManagementElement

// System.Net.Configuration.ConnectionManagementElement

// System.Security.Cryptography.DSA

// System.Security.Cryptography.DSA

// System.Security.Cryptography.DSAParameters

// System.Security.Cryptography.DSAParameters

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

// System.ComponentModel.DescriptionAttribute
struct DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_StaticFields
{
	// System.ComponentModel.DescriptionAttribute System.ComponentModel.DescriptionAttribute::Default
	DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* ___Default_0;
};

// System.ComponentModel.DescriptionAttribute

// System.ComponentModel.DesignTimeVisibleAttribute
struct DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_StaticFields
{
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::Yes
	DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE* ___Yes_1;
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::No
	DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE* ___No_2;
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::Default
	DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE* ___Default_3;
};

// System.ComponentModel.DesignTimeVisibleAttribute

// System.ComponentModel.DisplayNameAttribute
struct DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8_StaticFields
{
	// System.ComponentModel.DisplayNameAttribute System.ComponentModel.DisplayNameAttribute::Default
	DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* ___Default_0;
};

// System.ComponentModel.DisplayNameAttribute

// System.ComponentModel.EditorBrowsableAttribute

// System.ComponentModel.EditorBrowsableAttribute

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.ComponentModel.EnumConverter

// System.ComponentModel.EnumConverter

// System.Net.Configuration.HttpWebRequestElement

// System.Net.Configuration.HttpWebRequestElement

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

// System.Net.Configuration.Ipv6Element

// System.Net.Configuration.Ipv6Element

// System.Net.Configuration.NetSectionGroup

// System.Net.Configuration.NetSectionGroup

// System.Net.Configuration.PerformanceCountersElement

// System.Net.Configuration.PerformanceCountersElement

// System.Net.Configuration.ProxyElement

// System.Net.Configuration.ProxyElement

// System.Security.Cryptography.RSA

// System.Security.Cryptography.RSA

// System.Security.Cryptography.RSAParameters

// System.Security.Cryptography.RSAParameters

// System.Security.Cryptography.SHA1

// System.Security.Cryptography.SHA1

// System.Net.Configuration.ServicePointManagerElement

// System.Net.Configuration.ServicePointManagerElement

// System.Net.Configuration.SocketElement

// System.Net.Configuration.SocketElement

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.Stream

// System.Runtime.Serialization.StreamingContext

// System.Runtime.Serialization.StreamingContext

// System.ComponentModel.StringConverter

// System.ComponentModel.StringConverter

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.TimeSpan

// System.ComponentModel.TimeSpanConverter

// System.ComponentModel.TimeSpanConverter

// System.ComponentModel.TypeConverterAttribute
struct TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_StaticFields
{
	// System.ComponentModel.TypeConverterAttribute System.ComponentModel.TypeConverterAttribute::Default
	TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* ___Default_0;
};

// System.ComponentModel.TypeConverterAttribute

// System.UInt16

// System.UInt16

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// System.Threading.Tasks.ValueTask
struct ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F_StaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.ValueTask::s_canceledTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___s_canceledTask_0;
};

// System.Threading.Tasks.ValueTask

// System.Void

// System.Void

// System.Net.Configuration.WebProxyScriptElement

// System.Net.Configuration.WebProxyScriptElement

// System.Net.Configuration.WebRequestModuleElement

// System.Net.Configuration.WebRequestModuleElement

// System.Security.Cryptography.X509Certificates.X500DistinguishedName

// System.Security.Cryptography.X509Certificates.X500DistinguishedName

// System.Security.Cryptography.X509Certificates.X509Certificate2Impl

// System.Security.Cryptography.X509Certificates.X509Certificate2Impl

// Mono.Security.X509.X509CertificateCollection

// Mono.Security.X509.X509CertificateCollection

// System.Security.Cryptography.X509Certificates.X509CertificateCollection

// System.Security.Cryptography.X509Certificates.X509CertificateCollection

// System.Security.Cryptography.X509Certificates.X509ChainImplMono
struct X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D_StaticFields
{
	// System.Security.Cryptography.X509Certificates.X509ChainStatus[] System.Security.Cryptography.X509Certificates.X509ChainImplMono::Empty
	X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299* ___Empty_4;
};

// System.Security.Cryptography.X509Certificates.X509ChainImplMono

// System.Security.Cryptography.X509Certificates.X509ChainStatus

// System.Security.Cryptography.X509Certificates.X509ChainStatus

// System.Security.Cryptography.X509Certificates.X509Extension

// System.Security.Cryptography.X509Certificates.X509Extension

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9

// Internal.Cryptography.Pal.CertificateData/AlgorithmIdentifier

// Internal.Cryptography.Pal.CertificateData/AlgorithmIdentifier

// System.Net.IPAddress/ReadOnlyIPAddress

// System.Net.IPAddress/ReadOnlyIPAddress

// System.ByReference`1<System.Byte>

// System.ByReference`1<System.Byte>

// System.ByReference`1<System.UInt16>

// System.ByReference`1<System.UInt16>

// System.ByReference`1<System.UInt32>

// System.ByReference`1<System.UInt32>

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t56F624E1051A2E261613B6A81CA2333397F49CB3_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::04D9D643E5A26924DC98C9906714082D395DCB17CEE9674D5EBFEC15D098C2B5
	__StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48 ___04D9D643E5A26924DC98C9906714082D395DCB17CEE9674D5EBFEC15D098C2B5_0;
	// System.Int64 <PrivateImplementationDetails>::1417FCAA8455DC8E3C88BF916DD5C75746A2597CC052F212A8E4394C890E012B
	int64_t ___1417FCAA8455DC8E3C88BF916DD5C75746A2597CC052F212A8E4394C890E012B_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9 <PrivateImplementationDetails>::27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811
	__StaticArrayInitTypeSizeU3D9_tE2A1104C752B51004E61139D4615CC263948C4A7 ___27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::2EF83B43314F8CD03190EEE30ECCF048DA37791237F27C62A579F23EACE9FD70
	__StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48 ___2EF83B43314F8CD03190EEE30ECCF048DA37791237F27C62A579F23EACE9FD70_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::B849624EC20707184A433E21DAAC963906D4B261A19BD8F139F0E269E59E308C
	__StaticArrayInitTypeSizeU3D128_tCC4BD0E4F5977323EDA6FFF6CD1484F1848F5B0E ___B849624EC20707184A433E21DAAC963906D4B261A19BD8F139F0E269E59E308C_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10 <PrivateImplementationDetails>::E478CC6C0579E2198C99BFDE0ABAADC66644AF69312CB9D6E94E2D4E3559482A
	__StaticArrayInitTypeSizeU3D10_t92CF09DC4E69422B6E8E804C0DE84FDE8FB89800 ___E478CC6C0579E2198C99BFDE0ABAADC66644AF69312CB9D6E94E2D4E3559482A_5;
};

// <PrivateImplementationDetails>

// System.ComponentModel.ArrayConverter

// System.ComponentModel.ArrayConverter

// System.Net.Security.AuthenticatedStream

// System.Net.Security.AuthenticatedStream

// Mono.Security.Authenticode.AuthenticodeDeformatter

// Mono.Security.Authenticode.AuthenticodeDeformatter

// System.Net.Configuration.BypassElementCollection

// System.Net.Configuration.BypassElementCollection

// Internal.Cryptography.Pal.CertificateData

// Internal.Cryptography.Pal.CertificateData

// System.Net.Configuration.ConnectionManagementElementCollection

// System.Net.Configuration.ConnectionManagementElementCollection

// System.Net.Configuration.ConnectionManagementSection

// System.Net.Configuration.ConnectionManagementSection

// System.Security.Cryptography.DSACryptoServiceProvider
struct DSACryptoServiceProvider_tB418CD8E85D69D879C7298E4A6A7D8CFAC09D79E_StaticFields
{
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::useMachineKeyStore
	bool ___useMachineKeyStore_8;
};

// System.Security.Cryptography.DSACryptoServiceProvider

// System.ComponentModel.DecimalConverter

// System.ComponentModel.DecimalConverter

// System.Net.Configuration.DefaultProxySection

// System.Net.Configuration.DefaultProxySection

// System.IO.Compression.DeflateStream

// System.IO.Compression.DeflateStream

// System.Delegate

// System.Delegate

// System.ComponentModel.DoubleConverter

// System.ComponentModel.DoubleConverter

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Runtime.InteropServices.GCHandle

// System.Runtime.InteropServices.GCHandle

// System.IO.Compression.GZipStream

// System.IO.Compression.GZipStream

// System.ComponentModel.Int16Converter

// System.ComponentModel.Int16Converter

// System.ComponentModel.Int32Converter

// System.ComponentModel.Int32Converter

// System.ComponentModel.Int64Converter

// System.ComponentModel.Int64Converter

// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_StaticFields
{
	// System.Security.Cryptography.CspProviderFlags modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.RSACryptoServiceProvider::s_UseMachineKeyStore
	int32_t ___s_UseMachineKeyStore_2;
};

// System.Security.Cryptography.RSACryptoServiceProvider

// Mono.Security.Cryptography.RSAManaged

// Mono.Security.Cryptography.RSAManaged

// System.RuntimeFieldHandle

// System.RuntimeFieldHandle

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.Runtime.InteropServices.SafeHandle

// System.Runtime.InteropServices.SafeHandle

// System.Net.Configuration.SettingsSection

// System.Net.Configuration.SettingsSection

// System.ComponentModel.SingleConverter

// System.ComponentModel.SingleConverter

// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_StaticFields
{
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_11;
};

// System.Threading.WaitHandle

// System.Net.Configuration.WebRequestModuleElementCollection

// System.Net.Configuration.WebRequestModuleElementCollection

// System.Net.Configuration.WebRequestModulesSection

// System.Net.Configuration.WebRequestModulesSection

// Mono.Security.X509.X509Certificate
struct X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356_StaticFields
{
	// System.String Mono.Security.X509.X509Certificate::encoding_error
	String_t* ___encoding_error_22;
};

// Mono.Security.X509.X509Certificate

// System.Security.Cryptography.X509Certificates.X509Certificate

// System.Security.Cryptography.X509Certificates.X509Certificate

// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB_StaticFields
{
	// System.String[] System.Security.Cryptography.X509Certificates.X509Certificate2Collection::newline_split
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___newline_split_1;
};

// System.Security.Cryptography.X509Certificates.X509Certificate2Collection

// System.Security.Cryptography.X509Certificates.X509ChainPolicy

// System.Security.Cryptography.X509Certificates.X509ChainPolicy

// System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension

// System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension

// System.Security.Cryptography.X509Certificates.X509KeyUsageExtension

// System.Security.Cryptography.X509Certificates.X509KeyUsageExtension

// System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension

// System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension

// System.Array/RawData

// System.Array/RawData

// System.ReadOnlySpan`1<System.Byte>

// System.ReadOnlySpan`1<System.Byte>

// System.ReadOnlySpan`1<System.UInt16>

// System.ReadOnlySpan`1<System.UInt16>

// System.ReadOnlySpan`1<System.UInt32>

// System.ReadOnlySpan`1<System.UInt32>

// System.Span`1<System.Byte>

// System.Span`1<System.Byte>

// System.Runtime.Remoting.Messaging.AsyncResult

// System.Runtime.Remoting.Messaging.AsyncResult

// System.IO.Compression.DeflateStreamNative

// System.IO.Compression.DeflateStreamNative

// Mono.Net.Security.MobileAuthenticatedStream
struct MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E_StaticFields
{
	// System.Int32 Mono.Net.Security.MobileAuthenticatedStream::uniqueNameInteger
	int32_t ___uniqueNameInteger_16;
	// System.Int32 Mono.Net.Security.MobileAuthenticatedStream::nextId
	int32_t ___nextId_20;
};

// Mono.Net.Security.MobileAuthenticatedStream

// System.MulticastDelegate

// System.MulticastDelegate

// Microsoft.Win32.SafeHandles.SafePasswordHandle

// Microsoft.Win32.SafeHandles.SafePasswordHandle

// System.Net.Security.SslStream

// System.Net.Security.SslStream

// System.SystemException

// System.SystemException

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

// System.Security.Cryptography.X509Certificates.X509Certificate2ImplUnix

// System.Security.Cryptography.X509Certificates.X509Certificate2ImplUnix

// System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle

// System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle

// System.ArgumentException

// System.ArgumentException

// System.AsyncCallback

// System.AsyncCallback

// System.Security.Cryptography.CryptographicException

// System.Security.Cryptography.CryptographicException

// System.IO.IOException

// System.IO.IOException

// System.InvalidOperationException

// System.InvalidOperationException

// System.NotImplementedException

// System.NotImplementedException

// System.NotSupportedException

// System.NotSupportedException

// System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono
struct X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240_StaticFields
{
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::empty_error
	String_t* ___empty_error_4;
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::signedData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___signedData_5;
};

// System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono

// System.IO.Compression.DeflateStream/ReadMethod

// System.IO.Compression.DeflateStream/ReadMethod

// System.IO.Compression.DeflateStream/WriteMethod

// System.IO.Compression.DeflateStream/WriteMethod

// System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite

// System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite

// System.ArgumentNullException

// System.ArgumentNullException

// System.ArgumentOutOfRangeException

// System.ArgumentOutOfRangeException

// System.ComponentModel.InvalidEnumArgumentException

// System.ComponentModel.InvalidEnumArgumentException

// System.ObjectDisposedException

// System.ObjectDisposedException

// System.PlatformNotSupportedException

// System.PlatformNotSupportedException

// Unity.ThrowStub

// Unity.ThrowStub
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
// System.Security.Cryptography.X509Certificates.X509ChainStatus[]
struct X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299  : public RuntimeArray
{
	ALIGN_FIELD (8) X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D m_Items[1];

	inline X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___info_1), (void*)NULL);
	}
	inline X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___info_1), (void*)NULL);
	}
};
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83  : public RuntimeArray
{
	ALIGN_FIELD (8) uint16_t m_Items[1];

	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(T[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.Byte>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::.ctor(System.Void*,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.UInt16>::.ctor(T[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD4ED59BC2ABC1D881B1CFEAD85109BB38AF0BC29_gshared_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_array, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<System.Byte> System.Runtime.InteropServices.MemoryMarshal::AsBytes<System.UInt16>(System.ReadOnlySpan`1<T>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D MemoryMarshal_AsBytes_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m7E0CA4F0B8AC2C1FEAA2B6D00C2A4B1B075DB08C_gshared_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F ___0_span, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::CopyTo(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, const RuntimeMethod* method) ;
// System.Span`1<T> System.Span`1<System.Byte>::Slice(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.Span`1<System.Byte>::op_Implicit(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.Runtime.InteropServices.MemoryMarshal::CreateReadOnlySpan<System.UInt32>(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 MemoryMarshal_CreateReadOnlySpan_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m363F8E1E0CC75E2736384E86E770507F7483D649_gshared_inline (uint32_t* ___0_reference, int32_t ___1_length, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<System.Byte> System.Runtime.InteropServices.MemoryMarshal::AsBytes<System.UInt32>(System.ReadOnlySpan`1<T>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D MemoryMarshal_AsBytes_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE5D7D4C294D50AFEE7AF6B303DE7FA7BD156B83A_gshared_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 ___0_span, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.UInt16>::op_Implicit(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F ReadOnlySpan_1_op_Implicit_m22DF3B7E5AFF3E8C8902EC1D98CD56CBC8375F54_gshared (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_array, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.UInt16>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0B70907CF5F6B4F10CB2914FEFC34CBE07112698_gshared_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2__ctor_m0891574E19148D39C27C179BF2787093757C5F57_gshared (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* __this, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.TaskToApm::End<System.Int32>(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCA309E122256972A27C74FC814F47AD13AF623ED_gshared (RuntimeObject* ___0_asyncResult, const RuntimeMethod* method) ;
// System.Int32 System.Span`1<System.Byte>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) ;
// System.Span`1<T> System.MemoryExtensions::AsSpan<System.Byte>(T[],System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB4ED9F6A5BD665DDFD6708B6FAEE4F577A490F51_gshared_inline (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::CopyTo(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, const RuntimeMethod* method) ;
// T[] System.ReadOnlySpan`1<System.Byte>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ReadOnlySpan_1_ToArray_mF805FAE3816BCFA5C63592CA173237F9B1E4566E_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) ;
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.ReadOnlySpan`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.UInt16>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m339FDCE1FC17C2B97AEA44937294504AF706F7FF_gshared_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.UInt32>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_gshared_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, uint32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.UInt32>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m031225D82859BA85FEE8375AA52B4CE8DF1ACE00_gshared_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;

// System.Void System.Security.Cryptography.X509Certificates.X509CertificateImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CertificateImpl__ctor_m7EDF52F692FFBF7527B6ECBBF39BC35444BFB287 (X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplUnix::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Certificate2ImplUnix__ctor_mF3392E6B555FBA22CBDC93DF0C53479586EBF327 (X509Certificate2ImplUnix_tF8DFA7FF05CC33C9010EFDCA21A827247CB8E86D* __this, const RuntimeMethod* method) ;
// System.Security.Cryptography.X509Certificates.X509CertificateImplCollection System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098* X509CertificateImplCollection_Clone_m2AC54E741E6AB673D07464C05D27A3FF9F4112B0 (X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098* __this, const RuntimeMethod* method) ;
// System.Security.Cryptography.X509Certificates.X509ContentType System.Security.Cryptography.X509Certificates.X509Certificate2::GetCertContentType(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509Certificate2_GetCertContentType_m8D232C26231C35597793EB5DE62EC7916417F652 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rawData, const RuntimeMethod* method) ;
// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::ImportPkcs12(System.Byte[],Microsoft.Win32.SafeHandles.SafePasswordHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* X509Certificate2ImplMono_ImportPkcs12_mE10A545B13FB03F48E6F4E7210F6FE86BEAD77B0 (X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rawData, SafePasswordHandle_t07A3BFCF046DFE44216ACE030F838C8AE2564463* ___1_password, const RuntimeMethod* method) ;
// System.Void Mono.Security.X509.X509Certificate::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Certificate__ctor_m4F437D7E76C6CCB0941AB5801946076C82583946 (X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) ;
// System.Void Mono.Security.Authenticode.AuthenticodeDeformatter::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticodeDeformatter__ctor_mE7D65775E1289E0DBB208034BE5EB40AB6469BA0 (AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rawData, const RuntimeMethod* method) ;
// Mono.Security.X509.X509Certificate Mono.Security.Authenticode.AuthenticodeDeformatter::get_SigningCertificate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* AuthenticodeDeformatter_get_SigningCertificate_m5C675A2AB0464670DF6C557C4433871014EB52CC_inline (AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2* __this, const RuntimeMethod* method) ;
// System.String Locale::GetText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Locale_GetText_m7BA18BC14D3028C4C4722E220800563188DA3600 (String_t* ___0_msg, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateImpl::ThrowIfContextInvalid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CertificateImpl_ThrowIfContextInvalid_m253EB9023E9902680A338B86D7EC55AAB7EFDDBA (X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Certificate2ImplMono__ctor_m622D5FDEB76F561EA4AE9C8F4597D8E6AE1C6C28 (X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240* __this, X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240* ___0_other, const RuntimeMethod* method) ;
// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::get_Cert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* X509Certificate2ImplMono_get_Cert_m456536A0FC9BB84D859CC7ECAA421203FDCE6E00 (X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240* __this, const RuntimeMethod* method) ;
// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::get_PublicOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RSACryptoServiceProvider_get_PublicOnly_mA9FB1ABFDF5D4E7355DC09980EF5C2EEF6236504 (RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSACryptoServiceProvider__ctor_mE4BC404364B89F41C863EC3860ED4B9D7DD7A06F (RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* __this, const RuntimeMethod* method) ;
// System.Boolean Mono.Security.Cryptography.RSAManaged::get_PublicOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RSAManaged_get_PublicOnly_m12DE914F7BDDD2E850EDD7F34BA9CF3114C333BF (RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4* __this, const RuntimeMethod* method) ;
// System.Void Mono.Security.Cryptography.RSAManaged::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSAManaged__ctor_m3DC50713376908C5D1B7EDE7662070DBC185597A (RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4* __this, const RuntimeMethod* method) ;
// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::get_DSA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* X509Certificate_get_DSA_m661EA8FA79C2108403B685495B961422BC531AA6 (X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* __this, const RuntimeMethod* method) ;
// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::get_PublicOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DSACryptoServiceProvider_get_PublicOnly_m6F32B85139774D360292384FECF3FCDEA10488B5 (DSACryptoServiceProvider_tB418CD8E85D69D879C7298E4A6A7D8CFAC09D79E* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DSACryptoServiceProvider__ctor_mC1490075F0C3EDE07208BB0F20727473CD6CE32E (DSACryptoServiceProvider_tB418CD8E85D69D879C7298E4A6A7D8CFAC09D79E* __this, const RuntimeMethod* method) ;
// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::ImportPkcs12(System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* X509Certificate2ImplMono_ImportPkcs12_mC29B89A6EDBB108185C4A91028F6EB496ACB2C98 (X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rawData, String_t* ___1_password, const RuntimeMethod* method) ;
// System.String Microsoft.Win32.SafeHandles.SafePasswordHandle::Mono_DangerousGetString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SafePasswordHandle_Mono_DangerousGetString_m247A8B0941D759ED1EBC9769C82A06201FD2B9D5 (SafePasswordHandle_t07A3BFCF046DFE44216ACE030F838C8AE2564463* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PKCS12__ctor_m2C6FBB30C343DA9D9E1753FBB72F01AD4E1F7FFC (PKCS12_t1E7D81A38668D35E4536A15ADC8190525267A989* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, String_t* ___1_password, const RuntimeMethod* method) ;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.PKCS12::get_Certificates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4* PKCS12_get_Certificates_m6FB30DF4377FE4FC725153AC237CBC59786E719E (PKCS12_t1E7D81A38668D35E4536A15ADC8190525267A989* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.CollectionBase::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CollectionBase_get_Count_m2BD48A6DDD376554A7956E4B26EC27F9F1E43C72 (CollectionBase_t44F966CC555C87F2815D668FB4586526E1C2383F* __this, const RuntimeMethod* method) ;
// System.Collections.ArrayList Mono.Security.X509.PKCS12::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* PKCS12_get_Keys_mFF1C9F9DEF54D27CC472AA46DDBBE224F67DC46B (PKCS12_t1E7D81A38668D35E4536A15ADC8190525267A989* __this, const RuntimeMethod* method) ;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509CertificateCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* X509CertificateCollection_get_Item_m68CBCD6C145B7EC4E4BDF6BA208576976385A538 (X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator Mono.Security.X509.X509CertificateCollection::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE* X509CertificateCollection_GetEnumerator_m602E7163983BF2C8F8B5C09652D5E74771969B56 (X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4* __this, const RuntimeMethod* method) ;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* X509CertificateEnumerator_get_Current_mA12833D7DAE7B1E3FB58D8596D266CA30A6BCD69 (X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Boolean Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509CertificateEnumerator_MoveNext_mAB0C32FB96AD574439B87E0E7D2553CBD7DF37C7 (X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE* __this, const RuntimeMethod* method) ;
// System.Void Mono.Security.X509.X509Certificate::set_DSA(System.Security.Cryptography.DSA)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Certificate_set_DSA_m35B061538E1BA0B2492CA50F46092FB3C48927B8 (X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* __this, DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CertificateImplCollection__ctor_m9A1E10EE2FC833E8F8C938A91AD907BC437452E2 (X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::.ctor(Mono.Security.X509.X509Certificate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Certificate2ImplMono__ctor_m3F6BBB4381EB9A720E11577B9F663DC10B3B93A7 (X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240* __this, X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* ___0_cert, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::Add(System.Security.Cryptography.X509Certificates.X509CertificateImpl,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CertificateImplCollection_Add_mDF2DF7D94CEB84BCCC7292831C838FCDB1322B8C (X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098* __this, X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF* ___0_impl, bool ___1_takeOwnership, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
// System.Void Internal.Cryptography.Pal.CertificateData::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CertificateData__ctor_m623A235F902E7262CB9DA2CEB1BF5D3E64A6D23F (CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rawData, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplUnix::EnsureCertData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Certificate2ImplUnix_EnsureCertData_m4BD3C65CDE138D7239A18652543C7A93BFDD4E62 (X509Certificate2ImplUnix_tF8DFA7FF05CC33C9010EFDCA21A827247CB8E86D* __this, const RuntimeMethod* method) ;
// System.String System.Security.Cryptography.X509Certificates.X500DistinguishedName::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* X500DistinguishedName_get_Name_m57B2708AAA2B4E15AB6F6B513D88C4468898B5A9_inline (X500DistinguishedName_t53976A4567E82199856DAD47D3850F8EECABDAF6* __this, const RuntimeMethod* method) ;
// System.Security.Cryptography.SHA1 System.Security.Cryptography.SHA1::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* SHA1_Create_m10D40BE4E0A3737F58EB3B7D21B3EB53964BB042 (const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) ;
// System.String Internal.Cryptography.Pal.CertificateData::GetNameInfo(System.Security.Cryptography.X509Certificates.X509NameType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CertificateData_GetNameInfo_m8DC5068DE35A32AC641DCBA45C409D05C4CE9D72 (CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1* __this, int32_t ___0_nameType, bool ___1_forIssuer, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::ToLocalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_ToLocalTime_mD87626169251A26AF699DAE90A1C31190AD30B94 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88 (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Impl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Certificate2Impl__ctor_mE6FF68AD589010E57C86555935DB601680AC1839 (X509Certificate2Impl_t9EC3180958225F2A99501C70603CE52BCD1DFD25* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.CollectionBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionBase__ctor_m9AB03A7692AA8F78FA5519ACA74FF3FA2F9520BC (CollectionBase_t44F966CC555C87F2815D668FB4586526E1C2383F* __this, const RuntimeMethod* method) ;
// System.Collections.ArrayList System.Collections.CollectionBase::get_InnerList()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* CollectionBase_get_InnerList_mD37144662A9045A5CA82681C265719733934DEAB_inline (CollectionBase_t44F966CC555C87F2815D668FB4586526E1C2383F* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::.ctor(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CertificateEnumerator__ctor_m7FEB0CE4B71CB9CE860AAF29554279392249D237 (X509CertificateEnumerator_t6629E2BB0FB5D92B2EB502312B764686BAFDF0D9* __this, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___0_mappings, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Security.Cryptography.X509Certificates.X509CertificateImpl>::.ctor()
inline void List_1__ctor_mA46E7ABD24DB39F8B033217C3D1E60F24FF01C66 (List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Security.Cryptography.X509Certificates.X509CertificateImpl>::GetEnumerator()
inline Enumerator_tF4CDD4C302133A0B789C3FF957DFC0C461B604AF List_1_GetEnumerator_mFE648B06B9E2D79024C2451DCF73EF57FD5EBA90 (List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF4CDD4C302133A0B789C3FF957DFC0C461B604AF (*) (List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Security.Cryptography.X509Certificates.X509CertificateImpl>::Dispose()
inline void Enumerator_Dispose_mF2F81B27137A7641D3B4452C12BE24CB3EAB9EE2 (Enumerator_tF4CDD4C302133A0B789C3FF957DFC0C461B604AF* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF4CDD4C302133A0B789C3FF957DFC0C461B604AF*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Security.Cryptography.X509Certificates.X509CertificateImpl>::get_Current()
inline X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF* Enumerator_get_Current_m6989325883A9638A05539FF349699DD229F1BFC0_inline (Enumerator_tF4CDD4C302133A0B789C3FF957DFC0C461B604AF* __this, const RuntimeMethod* method)
{
	return ((  X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF* (*) (Enumerator_tF4CDD4C302133A0B789C3FF957DFC0C461B604AF*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Security.Cryptography.X509Certificates.X509CertificateImpl>::Add(T)
inline void List_1_Add_m10CC2722143C1DC7B95D477A55FECA1E623DEC22_inline (List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC* __this, X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC*, X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Security.Cryptography.X509Certificates.X509CertificateImpl>::MoveNext()
inline bool Enumerator_MoveNext_m217A518B7184D37D2D3F09F20CCB95E336B4A925 (Enumerator_tF4CDD4C302133A0B789C3FF957DFC0C461B604AF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF4CDD4C302133A0B789C3FF957DFC0C461B604AF*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Security.Cryptography.X509Certificates.X509CertificateImpl>::get_Count()
inline int32_t List_1_get_Count_m1DA18D48815EEF38EBDCE6B843686E75B71C9FD0_inline (List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.Security.Cryptography.X509Certificates.X509CertificateImpl>::get_Item(System.Int32)
inline X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF* List_1_get_Item_m5F8FB8F5A9B5BC41A0FCFB9E7F042B66B66A428B (List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF* (*) (List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::.ctor(System.Security.Cryptography.X509Certificates.X509CertificateImplCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CertificateImplCollection__ctor_mC7C4FAB75F44B53B8FE8D9CA3443F1411CD0BA11 (X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098* __this, X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098* ___0_other, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateImpl::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CertificateImpl_Dispose_mDC516A5BF712329AC6C12CCF08F41C438EA0A4D5 (X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Security.Cryptography.X509Certificates.X509CertificateImpl>::Clear()
inline void List_1_Clear_mB9337DA08797552E15D8A3F77F1572319A78CFC6_inline (List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509Helper2::ThrowIfContextInvalid(System.Security.Cryptography.X509Certificates.X509ChainImpl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Helper2_ThrowIfContextInvalid_mB6E09D4292818B28DC4FA6BA9695006B0B0119C8 (X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* ___0_impl, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Chain__ctor_mF765A0057950154FC61FF1D112A8EFCB73314EC4 (X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* __this, bool ___0_useMachineContext, const RuntimeMethod* method) ;
// System.Security.Cryptography.X509Certificates.X509ChainImpl System.Security.Cryptography.X509Certificates.X509Helper2::CreateChainImpl(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* X509Helper2_CreateChainImpl_m37D8C8E930B60BDF04C0E5ED0A6D279C959A8A7D (bool ___0_useMachineContext, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainImpl_Dispose_mB7A6D60B308E90F0173FA8160F7FF0A00709A25A (X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.ArrayList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::.ctor(System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainElementEnumerator__ctor_m552B42A7693729672B7EF7F95B4211F6BD69AE6D (X509ChainElementEnumerator_tE4033654D4E19B54FE64143E10BCB1775B57BD6D* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) ;
// System.Exception System.Security.Cryptography.X509Certificates.X509Helper2::GetInvalidChainContextException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* X509Helper2_GetInvalidChainContextException_m9C124C1AD37A16B10C791BB76505016059EFC9C5 (const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainImpl__ctor_m16F671EB135FB6E7E3CF6C42715D7106E6FAAF18 (X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainElementCollection__ctor_mAEF26718ED02C8480A7041E3C6B66500950E013D (X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainPolicy__ctor_m069F83BFFF3E79ED4CEBE8CF553CC65576F8D3D9 (X509ChainPolicy_t34F49B4067492A1E5F91DD91FA7C934B68D880EC* __this, const RuntimeMethod* method) ;
// System.Int32 System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509ChainElementCollection_get_Count_m5448D972C3009FA67B3F4E13061B6012D561B78B (X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainElementCollection_Clear_mF0C2AE76F73C525E29E808615576C7EE11409659 (X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509Store::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Store_Close_mE444AB5FE15C355E4EF9369E7EB5F78F345320F0 (X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainPolicy_Reset_mEE02175020B69CE1732C0E89A2AE60F0BA5B1417 (X509ChainPolicy_t34F49B4067492A1E5F91DD91FA7C934B68D880EC* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.OidCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OidCollection__ctor_m9B8C252AE048962DAD7419597007ABA2793F9D98 (OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.String System.Security.Cryptography.X509Certificates.X509ChainStatus::GetInformation(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509ChainStatus_GetInformation_m0EAE0070740CD8BB7A498614C7BF2E656D048D56 (int32_t ___0_flags, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainStatus::.ctor(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainStatus__ctor_m5AD96E11604F8DB96673677AC2FFF68EBA550859 (X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* __this, int32_t ___0_flag, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC (X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.Oid::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* __this, String_t* ___0_value, String_t* ___1_friendlyName, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.AsnEncodedData::get_RawData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::set_Critical(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline (X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509EnhancedKeyUsageExtension_Decode_m1110DD9BD5D717540009DB5D90805458CF07423C (X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_extension, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Security.Cryptography.OidEnumerator System.Security.Cryptography.OidCollection::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* OidCollection_GetEnumerator_mBB791F48E305B3355A1BCE624E0BB367331F82AC (OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* __this, const RuntimeMethod* method) ;
// System.Security.Cryptography.Oid System.Security.Cryptography.OidEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* OidEnumerator_get_Current_mCED077699FA00ED57FA82F8B460C28B86F1B5C9F (OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* __this, const RuntimeMethod* method) ;
// System.Int32 System.Security.Cryptography.OidCollection::Add(System.Security.Cryptography.Oid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OidCollection_Add_m1D4822DF4EA0B912A1DED6AA102D41F7FAEDC8F5 (OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* __this, Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* ___0_oid, const RuntimeMethod* method) ;
// System.Boolean System.Security.Cryptography.OidEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OidEnumerator_MoveNext_mD42201944C163E81DABDE08B1535C4AB9A5778DD (OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* __this, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::Encode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* X509EnhancedKeyUsageExtension_Encode_mBE23AB15722B1822172F860B5F7651EA871B5550 (X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.AsnEncodedData::set_RawData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsnEncodedData_set_RawData_m05F9F17765AD384ECE3A333DCBF6A0572099346B (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.Oid::.ctor(System.Security.Cryptography.Oid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Oid__ctor_m3973A5FE5482D45FABC8642E59B655274B0B5D59 (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* __this, Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* ___0_oid, const RuntimeMethod* method) ;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Extension::get_Critical()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool X509Extension_get_Critical_mEF827F09D95784210C2F8D5FD7BE27BB54803E35_inline (X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* __this, const RuntimeMethod* method) ;
// System.Void Mono.Security.ASN1::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASN1__ctor_m950BFCCF44A987ACBA12142624AA222200EE503E (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) ;
// System.Byte Mono.Security.ASN1::get_Tag()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t ASN1_get_Tag_m1984CF0DDF54424E61BA3650D93CBA0DCB58F232_inline (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, const RuntimeMethod* method) ;
// Mono.Security.ASN1 Mono.Security.ASN1::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.String Mono.Security.ASN1Convert::ToOid(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ASN1Convert_ToOid_mBCE4FD3970C556190FB00A6AD409A6ABB4C627D8 (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ___0_asn1, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.Oid::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Oid__ctor_m4AF81B9D51BED48AE505251E0874EC654BA07B72 (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* __this, String_t* ___0_oid, const RuntimeMethod* method) ;
// System.Int32 Mono.Security.ASN1::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ASN1_get_Count_mBE45E73126FAD2694E9059CAC53B7AC9A5F60833 (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, const RuntimeMethod* method) ;
// System.Void Mono.Security.ASN1::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASN1__ctor_mA9AE2197367C1E13DBFDA67E0A383167F52CC114 (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, uint8_t ___0_tag, const RuntimeMethod* method) ;
// System.String System.Security.Cryptography.Oid::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* __this, const RuntimeMethod* method) ;
// Mono.Security.ASN1 Mono.Security.ASN1Convert::FromOid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ASN1Convert_FromOid_mBB920E2827A66620790C5E07549D74F244735C1C (String_t* ___0_oid, const RuntimeMethod* method) ;
// Mono.Security.ASN1 Mono.Security.ASN1::Add(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ASN1_Add_m4C61487A6CCF48D5CEB0D97B248FE31F9FCD849F (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ___0_asn1, const RuntimeMethod* method) ;
// System.String System.Security.Cryptography.X509Certificates.X509Extension::FormatUnkownData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509Extension_FormatUnkownData_mD0463F5096A6937E95E3165048299CBA9A1A6F7D (X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Int32 System.Security.Cryptography.OidCollection::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OidCollection_get_Count_m9560D70809087591935904924A15FBEC1FEFEB11 (OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Security.Cryptography.Oid System.Security.Cryptography.OidCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* OidCollection_get_Item_m0AEC71C746E735035A05C50EE2721C1E8FE08F7A (OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF (const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.AsnEncodedData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsnEncodedData__ctor_m90028EC56A5E36272EAA4A9279AE23358D46F547 (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.AsnEncodedData::.ctor(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsnEncodedData__ctor_m90834437DE68932EB0BE8BB434DDA1DB896DA67E (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, String_t* ___0_oid, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_rawData, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.AsnEncodedData::CopyFrom(System.Security.Cryptography.AsnEncodedData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsnEncodedData_CopyFrom_mA5DD4A419C5FC29D82DBE9B69C9F8CBC2872A1F2 (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ___0_asnEncodedData, const RuntimeMethod* method) ;
// System.String System.Byte::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310 (uint8_t* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Int32 System.Array::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::.ctor(System.Collections.ArrayList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ExtensionEnumerator__ctor_m64C36BD278E62F11279957CC3A5F58A2D7025976 (X509ExtensionEnumerator_t7C4F4F5D65C7023FA1BEE3F6522B066A6CECCFF6* __this, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___0_list, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainImplMono::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainImplMono__ctor_m0ACF8D6927E705577989597DAAF5CFE6346B1A76 (X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D* __this, bool ___0_useMachineContext, const RuntimeMethod* method) ;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Helper2::IsValid(System.Security.Cryptography.X509Certificates.X509ChainImpl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509Helper2_IsValid_m54342EEC1349CDC083FA35A3E51474A27C80FAF8 (X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* ___0_impl, const RuntimeMethod* method) ;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509KeyUsageExtension_Decode_mB64239ABDEA862E43E26CF324D3E41ECCF3088BC (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_extension, const RuntimeMethod* method) ;
// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::GetValidFlags(System.Security.Cryptography.X509Certificates.X509KeyUsageFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509KeyUsageExtension_GetValidFlags_m82B1C7DA4F4E0F16090782189E1B4984D133BB45 (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* __this, int32_t ___0_flags, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::Encode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* X509KeyUsageExtension_Encode_m38D20B2FB68EDF3594EDC0D9BA88800ABF305542 (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* __this, const RuntimeMethod* method) ;
// System.Byte[] Mono.Security.ASN1::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ASN1_get_Value_mA6F9BE5AC19AC060AC42673C8FD5AA864EA046B6 (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, const RuntimeMethod* method) ;
// System.Void Mono.Security.ASN1::.ctor(System.Byte,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASN1__ctor_mAA538F9E1BE0DE739E9747BC3BC71DC030B018AA (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, uint8_t ___0_tag, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_data, const RuntimeMethod* method) ;
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8 (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.CollectionBase::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionBase_Clear_m0357C9FEC2BDB351726BA642093656CB1025968F (CollectionBase_t44F966CC555C87F2815D668FB4586526E1C2383F* __this, const RuntimeMethod* method) ;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509SubjectKeyIdentifierExtension_Decode_m9E9B87F478F55E202411CBCE3AA314CBF73C7F30 (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_extension, const RuntimeMethod* method) ;
// System.Object System.Array::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042 (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Encode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* X509SubjectKeyIdentifierExtension_Encode_m8746D45CE4AC46543D3332BC6001FA1BC7A72CB3 (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* X509SubjectKeyIdentifierExtension_FromHex_m0C965FECB6AC9330589DBDC182E7EA34EFE4195D (String_t* ___0_hex, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509SubjectKeyIdentifierExtension__ctor_m1858C1B050FAF65946B790737652E874781B4B56 (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* ___0_key, int32_t ___1_algorithm, bool ___2_critical, const RuntimeMethod* method) ;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* PublicKey_get_EncodedKeyValue_m153EF781728D471C55002A40BBDA435F1B3A1213_inline (PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* __this, const RuntimeMethod* method) ;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___0_src, int32_t ___1_srcOffset, RuntimeArray* ___2_dst, int32_t ___3_dstOffset, int32_t ___4_count, const RuntimeMethod* method) ;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* PublicKey_get_Oid_mB5796F569C136759CB740F747C6A3B6F8976401A_inline (PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* __this, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.CryptoConfig::EncodeOID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CryptoConfig_EncodeOID_mFC779B3B35D074F2804F36F36D9DB4A8E2070CDD (String_t* ___0_str, const RuntimeMethod* method) ;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* PublicKey_get_EncodedParameters_mE338A4A69A15907E38A644D624A07DDD55C521E0_inline (PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* __this, const RuntimeMethod* method) ;
// System.String Mono.Security.Cryptography.CryptoConvert::ToHex(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CryptoConvert_ToHex_m1A0AD4D32CEEC47D3C60CB2E4D05A935C62F261A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, const RuntimeMethod* method) ;
// System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChar(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t X509SubjectKeyIdentifierExtension_FromHexChar_m6A90ECC8622DD1D2DEA0FB18356E97B15E8371A9 (Il2CppChar ___0_c, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChars(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t X509SubjectKeyIdentifierExtension_FromHexChars_mFBC6B2009778633420F9F4FF38D7E641FBF63EFA (Il2CppChar ___0_c1, Il2CppChar ___1_c2, const RuntimeMethod* method) ;
// System.Void System.Net.IPAddress::set_PrivateAddress(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddress_set_PrivateAddress_m73BD8A117538CBDB80F8FF47D31609FA4855D74E (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
// System.Byte[] System.Net.IPAddress::ThrowAddressNullException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* IPAddress_ThrowAddressNullException_m2D5037C15BE289427E4A761A643C4F26C2F3F034 (const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(T[])
inline void ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_gshared_inline)(__this, ___0_array, method);
}
// System.Void System.Net.IPAddress::.ctor(System.ReadOnlySpan`1<System.Byte>,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddress__ctor_mFD3C42E1EECC3099D6E347238FB2A0EBE822AF19 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_address, int64_t ___1_scopeid, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.Byte>::get_Length()
inline int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline)(__this, method);
}
// System.Void System.Net.IPAddress::set_PrivateScopeId(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddress_set_PrivateScopeId_m2BA43F20C3B975BDAC6E330C09E09BFD34594A42 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Net.IPAddress::get_IsIPv4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPAddress_get_IsIPv4_m912994B89DDE21F85E4FE40381CDFF1688BE3F38 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) ;
// System.UInt32 System.Net.IPAddress::get_PrivateScopeId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t IPAddress_get_PrivateScopeId_m3C01EDB8971607BAC0398557E295B5A818191532_inline (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) ;
// System.String System.Net.IPAddressParser::IPv6AddressToString(System.UInt16[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IPAddressParser_IPv6AddressToString_m7C25DEA2FB9E3F863777653CB9C314BBEDF911A6 (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_address, uint32_t ___1_scopeId, const RuntimeMethod* method) ;
// System.UInt32 System.Net.IPAddress::get_PrivateAddress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t IPAddress_get_PrivateAddress_mE1CD072F1E7BDF981FD71CBD984F5FD2A2EC6399_inline (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) ;
// System.String System.Net.IPAddressParser::IPv4AddressToString(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IPAddressParser_IPv4AddressToString_m3D56686708BDA87E76737D94441BF1AE486922D2 (uint32_t ___0_address, const RuntimeMethod* method) ;
// System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) ;
// System.Boolean System.Net.IPAddress::get_IsIPv6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPAddress_get_IsIPv6_m957F80A11C7E40C2CCAE554F12AA547E387B6884 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) ;
// System.Boolean System.Net.IPAddress::Equals(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPAddress_Equals_mC4514B3B7F9B95B79A1121706C115AECE61636C7 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, RuntimeObject* ___0_comparandObj, bool ___1_compareScopeId, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::.ctor(System.Void*,System.Int32)
inline void Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
// System.Void System.ReadOnlySpan`1<System.UInt16>::.ctor(T[])
inline void ReadOnlySpan_1__ctor_mD4ED59BC2ABC1D881B1CFEAD85109BB38AF0BC29_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, const RuntimeMethod*))ReadOnlySpan_1__ctor_mD4ED59BC2ABC1D881B1CFEAD85109BB38AF0BC29_gshared_inline)(__this, ___0_array, method);
}
// System.ReadOnlySpan`1<System.Byte> System.Runtime.InteropServices.MemoryMarshal::AsBytes<System.UInt16>(System.ReadOnlySpan`1<T>)
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D MemoryMarshal_AsBytes_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m7E0CA4F0B8AC2C1FEAA2B6D00C2A4B1B075DB08C_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F ___0_span, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F, const RuntimeMethod*))MemoryMarshal_AsBytes_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m7E0CA4F0B8AC2C1FEAA2B6D00C2A4B1B075DB08C_gshared_inline)(___0_span, method);
}
// System.Void System.ReadOnlySpan`1<System.Byte>::CopyTo(System.Span`1<T>)
inline void ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, const RuntimeMethod*))ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_gshared)(__this, ___0_destination, method);
}
// System.Span`1<T> System.Span`1<System.Byte>::Slice(System.Int32)
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, int32_t, const RuntimeMethod*))Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_gshared_inline)(__this, ___0_start, method);
}
// System.Boolean System.BitConverter::TryWriteBytes(System.Span`1<System.Byte>,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitConverter_TryWriteBytes_mC08570066B061A5EEBC9E54FFE8B4D10EDB3EC9B (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, uint32_t ___1_value, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.Span`1<System.Byte>::op_Implicit(System.Span`1<T>)
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84 (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, const RuntimeMethod*))Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_gshared)(___0_span, method);
}
// System.UInt64 System.Marvin::get_DefaultSeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t Marvin_get_DefaultSeed_m0CD0484A0C131EF70FE2252570EBE48CE045BA26_inline (const RuntimeMethod* method) ;
// System.Int32 System.Marvin::ComputeHash32(System.ReadOnlySpan`1<System.Byte>,System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Marvin_ComputeHash32_m4A0F0FD95EDFDF78DA2E1FCD47AAC3E39A2EB5B2_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_data, uint64_t ___1_seed, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.Runtime.InteropServices.MemoryMarshal::CreateReadOnlySpan<System.UInt32>(T&,System.Int32)
inline ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 MemoryMarshal_CreateReadOnlySpan_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m363F8E1E0CC75E2736384E86E770507F7483D649_inline (uint32_t* ___0_reference, int32_t ___1_length, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 (*) (uint32_t*, int32_t, const RuntimeMethod*))MemoryMarshal_CreateReadOnlySpan_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m363F8E1E0CC75E2736384E86E770507F7483D649_gshared_inline)(___0_reference, ___1_length, method);
}
// System.ReadOnlySpan`1<System.Byte> System.Runtime.InteropServices.MemoryMarshal::AsBytes<System.UInt32>(System.ReadOnlySpan`1<T>)
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D MemoryMarshal_AsBytes_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE5D7D4C294D50AFEE7AF6B303DE7FA7BD156B83A_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 ___0_span, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4, const RuntimeMethod*))MemoryMarshal_AsBytes_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE5D7D4C294D50AFEE7AF6B303DE7FA7BD156B83A_gshared_inline)(___0_span, method);
}
// System.Void System.Net.IPAddress/ReadOnlyIPAddress::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyIPAddress__ctor_m0E47AC9070535FCCC4796C165AC8DAB6FA2B5AC5 (ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C* __this, int64_t ___0_newAddress, const RuntimeMethod* method) ;
// System.Void System.Net.IPAddress::.ctor(System.Byte[],System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddress__ctor_m8D2578858CF6F8E56591F45C8A14150DEFFA44F5 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_address, int64_t ___1_scopeid, const RuntimeMethod* method) ;
// System.Void System.Net.IPAddress::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddress__ctor_mC240D2060BA0F5A96D286CDE3772FE4354D7030B (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, int64_t ___0_newAddress, const RuntimeMethod* method) ;
// System.Int32 System.Net.IPAddressParser::IPv4AddressToStringHelper(System.UInt32,System.Char*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IPAddressParser_IPv4AddressToStringHelper_m4226589AD61857FE45C082110271FFF2D3DF8C91 (uint32_t ___0_address, Il2CppChar* ___1_addressString, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2 (String_t* __this, Il2CppChar* ___0_value, int32_t ___1_startIndex, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m3B01AD486432033546C698FB95D3067DCB1A1448 (StringBuilder_t* __this, Il2CppChar* ___0_value, int32_t ___1_valueCount, const RuntimeMethod* method) ;
// System.Void System.Net.IPAddressParser::FormatIPv4AddressNumber(System.Int32,System.Char*,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddressParser_FormatIPv4AddressNumber_m716041E973744C431B090589D624C53696FD801F (int32_t ___0_number, Il2CppChar* ___1_addressString, int32_t* ___2_offset, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Net.IPAddressParser::IPv6AddressToStringHelper(System.UInt16[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* IPAddressParser_IPv6AddressToStringHelper_m405EE1B288D87500878DD96ADAEE31B106CCF930 (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_address, uint32_t ___1_scopeId, const RuntimeMethod* method) ;
// System.String System.Text.StringBuilderCache::GetStringAndRelease(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringBuilderCache_GetStringAndRelease_m4A7AB11554F7E80352AB8C3AC72D7AD4C7108FB0 (StringBuilder_t* ___0_sb, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilderCache::Acquire(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilderCache_Acquire_m1CF9421EC0F3431719E18A8EE78669748DF10892 (int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.UInt16>::op_Implicit(T[])
inline ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F ReadOnlySpan_1_op_Implicit_m22DF3B7E5AFF3E8C8902EC1D98CD56CBC8375F54 (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_array, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F (*) (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, const RuntimeMethod*))ReadOnlySpan_1_op_Implicit_m22DF3B7E5AFF3E8C8902EC1D98CD56CBC8375F54_gshared)(___0_array, method);
}
// System.Boolean System.IPv6AddressHelper::ShouldHaveIpv4Embedded(System.ReadOnlySpan`1<System.UInt16>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPv6AddressHelper_ShouldHaveIpv4Embedded_m08BEFD0452A0145779E70931B00F2D6EA15A1E70 (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F ___0_numbers, const RuntimeMethod* method) ;
// System.Void System.Net.IPAddressParser::AppendSections(System.UInt16[],System.Int32,System.Int32,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddressParser_AppendSections_m141C016465F9E7E1538E03340FEC16F89B500284 (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_address, int32_t ___1_fromInclusive, int32_t ___2_toExclusive, StringBuilder_t* ___3_buffer, const RuntimeMethod* method) ;
// System.Char System.Text.StringBuilder::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D (StringBuilder_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.UInt32 System.Net.IPAddressParser::ExtractIPv4Address(System.UInt16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t IPAddressParser_ExtractIPv4Address_mB79D4899358C69C1FC7C44C81A26BBD976FC2CB6 (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_address, const RuntimeMethod* method) ;
// System.Void System.Net.IPAddressParser::IPv4AddressToString(System.UInt32,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddressParser_IPv4AddressToString_m4113E0673C882A7CB1313639E2836FB24B9BC6A0 (uint32_t ___0_address, StringBuilder_t* ___1_destination, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m3C5F10B877B802CA99FA61EC5360B30631270062 (StringBuilder_t* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.Math::DivRem(System.Int32,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_DivRem_m531807E96CEE227EF54C8C16753B3F05A0F8BCB5 (int32_t ___0_a, int32_t ___1_b, int32_t* ___2_result, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.UInt16>::.ctor(T[],System.Int32,System.Int32)
inline void ReadOnlySpan_1__ctor_m0B70907CF5F6B4F10CB2914FEFC34CBE07112698_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0B70907CF5F6B4F10CB2914FEFC34CBE07112698_gshared_inline)(__this, ___0_array, ___1_start, ___2_length, method);
}
// System.ValueTuple`2<System.Int32,System.Int32> System.IPv6AddressHelper::FindCompressionRange(System.ReadOnlySpan`1<System.UInt16>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D IPv6AddressHelper_FindCompressionRange_m5BA0C004FA7BE7CB3C520AB47C4D6B6FA6C13C56 (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F ___0_numbers, const RuntimeMethod* method) ;
// System.Void System.Net.IPAddressParser::AppendHex(System.UInt16,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddressParser_AppendHex_m877259AD615A68FDC55EDC188758E5AA95C124B2 (uint16_t ___0_value, StringBuilder_t* ___1_buffer, const RuntimeMethod* method) ;
// System.UInt16 System.Net.IPAddressParser::Reverse(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t IPAddressParser_Reverse_mDEBC20FC5D00F7C505E1ADE428CB6967B72B425E (uint16_t ___0_number, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentDictionary`2<System.Net.ServicePointManager/SPKey,System.Net.ServicePoint>::.ctor()
inline void ConcurrentDictionary_2__ctor_m73468EC4E3B499BCB73252A85E27618168FA0460 (ConcurrentDictionary_2_tA479A4D42D40E0772A26F55B2BB647B6B7B8BDD6* __this, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_tA479A4D42D40E0772A26F55B2BB647B6B7B8BDD6*, const RuntimeMethod*))ConcurrentDictionary_2__ctor_m0891574E19148D39C27C179BF2787093757C5F57_gshared)(__this, method);
}
// System.Void System.IO.Stream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// System.String SR::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetString_m2F0EFCFA5FE3DB6DE89C5823284302D691355AA6 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, bool ___0_disposing, const RuntimeMethod* method) ;
// System.Void System.Net.Security.SslStream::CheckDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream_CheckDisposed_m884E18F119B366EE6734CCFA126A1F633687FA95 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, const RuntimeMethod* method) ;
// Mono.Net.Security.MobileAuthenticatedStream System.Net.Security.SslStream::get_Impl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.IO.Stream System.Net.Security.AuthenticatedStream::get_InnerStream()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* AuthenticatedStream_get_InnerStream_m5BDA4857898A90C696DAD90FD61C536FC3EB10C7_inline (AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39* __this, const RuntimeMethod* method) ;
// System.Void System.ObjectDisposedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___0_objectName, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Int32 System.Attribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Attribute_GetHashCode_mAE2C17FF608041F608207E2202E1BC0F98919C08 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.DescriptionAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescriptionAttribute__ctor_m5A3D1DF34E3AACD9FF690A3CBE78F822F3A2EF97 (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, String_t* ___0_description, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.DescriptionAttribute::set_DescriptionValue(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DescriptionAttribute_set_DescriptionValue_mE3DE3C009CBEA82A5DC0EFB299943118BF487800_inline (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.ComponentModel.DescriptionAttribute::get_DescriptionValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DescriptionAttribute_get_DescriptionValue_m1F4A0829E3BE8AF3BBB9A5F2344BA672E07DC975_inline (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.DescriptionAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescriptionAttribute__ctor_m6140728AB61731BC01DEC122FDAA93854AAC723F (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.DisplayNameAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayNameAttribute__ctor_m396F07353E80428B4AEB85DC66F5B9380A077AE3 (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* __this, String_t* ___0_displayName, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.DisplayNameAttribute::set_DisplayNameValue(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DisplayNameAttribute_set_DisplayNameValue_m2DA6A8AA72F3969BA5639F707AB90A2D363BC49C_inline (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.ComponentModel.DisplayNameAttribute::get_DisplayNameValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DisplayNameAttribute_get_DisplayNameValue_mD9F58F5FFF2B7C682D8470101352BEA88AE0E5AC_inline (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.DisplayNameAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayNameAttribute__ctor_mE16A1FD5C8425C7F00EC5728A1227AF6FBEFB968 (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.InvalidEnumArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidEnumArgumentException__ctor_mB48FBD0C68C97EF69D80B56EB927CAF08E3181E1 (InvalidEnumArgumentException_t5B42625AD815A72639D894ED1592FF4BE438D989* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5 (const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B (int32_t* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
// System.String SR::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m250FFAE6A6F747F6E6D4BB6EA43A757E347CD51D (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, RuntimeObject* ___2_p2, RuntimeObject* ___3_p3, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_mB4FA5CCA0CDB08730E9ED40FA935BA38C032D83A (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.CollectionConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionConverter__ctor_m20ED0C661750EBE427D356F24AED92A407988147 (CollectionConverter_t47EAA5F1386CB891414AB5096CFA50418A5D64B0* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.TypeConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2 (TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.BaseNumberConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseNumberConverter__ctor_m697E7E5DB315CE6CDA318F256A634BAEF3C7C76F (BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706* __this, const RuntimeMethod* method) ;
// System.Boolean System.ComponentModel.DesignTimeVisibleAttribute::get_Visible()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DesignTimeVisibleAttribute_get_Visible_m0EB229B7592D784080EEFA2C7100DF58ADFF064F_inline (DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.DesignTimeVisibleAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesignTimeVisibleAttribute__ctor_m89415646271B6901AF745CDD2BF3A2244DFCD946 (DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE* __this, bool ___0_visible, const RuntimeMethod* method) ;
// System.String System.ComponentModel.TypeConverterAttribute::get_ConverterTypeName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TypeConverterAttribute_get_ConverterTypeName_mBBE5335F11FC13345D2828866172BB5DDF9F3E45_inline (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.TypeConverterAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverterAttribute__ctor_mEEE3CA7C17555BA93BB76201BA2BCF879E617DA9 (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.GZipStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream__ctor_mFF3ECD9074856457C500AC6B4F80D833CCE487CF (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int32_t ___1_mode, bool ___2_leaveOpen, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_mFA0036CA1C1411FBED2DDFB2B563635F4755078C (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int32_t ___1_mode, bool ___2_leaveOpen, int32_t ___3_windowsBits, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.GZipStream::CheckDeflateStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, const RuntimeMethod* method) ;
// System.Threading.CancellationToken System.Threading.CancellationToken::get_None()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53 (const RuntimeMethod* method) ;
// System.IAsyncResult System.Threading.Tasks.TaskToApm::Begin(System.Threading.Tasks.Task,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskToApm_Begin_mA26D2A4F6EE0582B181AFD83B913916909D02777 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_task, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_state, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.TaskToApm::End<System.Int32>(System.IAsyncResult)
inline int32_t TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCA309E122256972A27C74FC814F47AD13AF623ED (RuntimeObject* ___0_asyncResult, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCA309E122256972A27C74FC814F47AD13AF623ED_gshared)(___0_asyncResult, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Int32 System.IO.Stream::Read(System.Span`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stream_Read_m655A5A3FE25BD7A2D965154D753DB5F360AD46FE (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_buffer, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStream::ReadCore(System.Span`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_ReadCore_m58E605C082DCF3455C4D56EBEBB8F2ABECCC9B40 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskToApm::End(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToApm_End_mDFB29EEE501409834D464F4C249A535723B7E6ED (RuntimeObject* ___0_asyncResult, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::Write(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Write_m84BD9BD831FAC81EAC315389E51E958F4BAA25E8 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_buffer, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStream::WriteCore(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_WriteCore_mC6ADF328D0A66CAFEEC9B23F89A22C223DFF3730 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.ValueTask`1<System.Int32> System.IO.Stream::ReadAsync(System.Memory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 Stream_ReadAsync_m1AA84A1F2DD3C7555BFC97A636E1CE56EB106B98 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___0_buffer, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) ;
// System.Threading.Tasks.ValueTask`1<System.Int32> System.IO.Compression.DeflateStream::ReadAsyncMemory(System.Memory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 DeflateStream_ReadAsyncMemory_m1FC9EB7B2284773AA527913018FEA9EB82965327 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___0_destination, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) ;
// System.Threading.Tasks.ValueTask System.IO.Stream::WriteAsync(System.ReadOnlyMemory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F Stream_WriteAsync_m31847C7A29AAFDA503991986F2BC02367F7A1C34 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___0_buffer, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) ;
// System.Threading.Tasks.ValueTask System.IO.Compression.DeflateStream::WriteAsyncMemory(System.ReadOnlyMemory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F DeflateStream_WriteAsyncMemory_mDEFCEC8FAA595B11419D022F351AD825C01AFCE6 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___0_source, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.GZipStream::ThrowStreamClosedException()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void GZipStream_ThrowStreamClosedException_m36E38FF71D68FFDE6707E3691F06929BE72713C8 (const RuntimeMethod* method) ;
// System.Void System.ObjectDisposedException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_m5C356C25295E89559C120CB4562783AAF7F41C84 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___0_objectName, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_m67AEE7C38BCFD323CD25D3FB36674E6A5010CD36 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_compressedStream, int32_t ___1_mode, bool ___2_leaveOpen, bool ___3_gzip, const RuntimeMethod* method) ;
// System.IO.Compression.DeflateStreamNative System.IO.Compression.DeflateStreamNative::Create(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* DeflateStreamNative_Create_m94968BF2895D7838185DE455772F3CDDD6E6F4A6 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_compressedStream, int32_t ___1_mode, bool ___2_gzip, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742 (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStreamNative::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_Dispose_m4FB7DA2D3E50360ECCE3B81A77CF25B5C6722C8E (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, bool ___0_disposing, const RuntimeMethod* method) ;
// System.Void System.IntPtr::.ctor(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::ReadZStream(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_ReadZStream_m64072AF17150906ED32D871778DC5EF313FADD9F (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, intptr_t ___0_buffer, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Int32 System.Span`1<System.Byte>::get_Length()
inline int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, const RuntimeMethod*))Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline)(__this, method);
}
// System.Span`1<T> System.MemoryExtensions::AsSpan<System.Byte>(T[],System.Int32,System.Int32)
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB4ED9F6A5BD665DDFD6708B6FAEE4F577A490F51_inline (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB4ED9F6A5BD665DDFD6708B6FAEE4F577A490F51_gshared_inline)(___0_array, ___1_start, ___2_length, method);
}
// System.Void System.Span`1<System.Byte>::CopyTo(System.Span`1<T>)
inline void Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542 (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, const RuntimeMethod*))Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_gshared)(__this, ___0_destination, method);
}
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStream::ReadInternal(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_ReadInternal_m4FCD4EB1534E24E85A9E5D933D6AF6EABF5F223C (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStreamNative::WriteZStream(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_WriteZStream_m4B066C7A2E031A2CA6EE0FE876A9611242630F18 (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, intptr_t ___0_buffer, int32_t ___1_length, const RuntimeMethod* method) ;
// T[] System.ReadOnlySpan`1<System.Byte>::ToArray()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ReadOnlySpan_1_ToArray_mF805FAE3816BCFA5C63592CA173237F9B1E4566E (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, const RuntimeMethod*))ReadOnlySpan_1_ToArray_mF805FAE3816BCFA5C63592CA173237F9B1E4566E_gshared)(__this, method);
}
// System.Void System.IO.Compression.DeflateStream::WriteInternal(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_WriteInternal_m5BD64441B31FC3D10F20A273FF45380EAAB97845 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStreamNative::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_Flush_m60D8D1C3DEBB720E402625ECFA9A0CFCA69E8F6F (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStream/ReadMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadMethod__ctor_mA65629D1C063B5E57095F952077323B5CE96C396 (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.IAsyncResult System.IO.Compression.DeflateStream/ReadMethod::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadMethod_BeginInvoke_mE465A26187BE3F1829ECA0C02AFAEFCA6D2F6EEF (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStream/WriteMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteMethod__ctor_mBE4CCCE38227B2D866CB539879255AD8B0C2B51A (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.IAsyncResult System.IO.Compression.DeflateStream/WriteMethod::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteMethod_BeginInvoke_m4A29F5255900687782F0A92A0A4D043AEA2C982C (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStream/ReadMethod::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadMethod_EndInvoke_mBCA4D1483C0504BF239C2305B7201E1EC72ED6F7 (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStream/WriteMethod::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteMethod_EndInvoke_mFDA332678A1FD46BAE42F3A0DF2073FD9CC6628C (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedRead(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedRead_m321A2621068F1C9509594A4D8F405F4F12C1CEB3 (intptr_t ___0_buffer, int32_t ___1_length, intptr_t ___2_data, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedWrite(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedWrite_mB0AD438266A9DD2813715E8BC90BF07DC7A02F52 (intptr_t ___0_buffer, int32_t ___1_length, intptr_t ___2_data, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStreamNative::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative__ctor_mCDA4F9E1FF67EFCE84EBB8889DDDD30F4A12BB0E (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedReadOrWrite__ctor_mF122921041A4F277205DD17182C31BBE9B1DEEF6 (UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.GCHandle::ToIntPtr(System.Runtime.InteropServices.GCHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_ToIntPtr_m45294AA913461A070BD555F81103A8BF2E5ED976 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___0_value, const RuntimeMethod* method) ;
// System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle System.IO.Compression.DeflateStreamNative::CreateZStream(System.IO.Compression.CompressionMode,System.Boolean,System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* DeflateStreamNative_CreateZStream_m41CBCDEB95EA9C72B49374B3EFA96709C97A5F01 (int32_t ___0_compress, bool ___1_gzip, UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* ___2_feeder, intptr_t ___3_data, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3 (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::Flush(System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_Flush_m7E8FA114A01ED15906DC66D6086E41DF2EAB4E50 (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* ___0_stream, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStreamNative::CheckResult(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_CheckResult_m9354BDD0FA5B71935FFD628698412B5380329C47 (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, int32_t ___0_result, String_t* ___1_where, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::ReadZStream(System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_ReadZStream_mF14CF4F54AE09805AA81A61FB6D04D6EA1E397FE (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* ___0_stream, intptr_t ___1_buffer, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::WriteZStream(System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_WriteZStream_m78EAA03E23C1445D652F936373061207CE50579F (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* ___0_stream, intptr_t ___1_buffer, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::FromIntPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_FromIntPtr_mA7848A4285D007CADC52B6272DB243C8FDFD5FAC (intptr_t ___0_value, const RuntimeMethod* method) ;
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedRead(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedRead_mC17A13844F4560E954F816037B0A5C04FFEDECB1 (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, intptr_t ___0_buffer, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_source, int32_t ___1_startIndex, intptr_t ___2_destination, int32_t ___3_length, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedWrite(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedWrite_m73ADBE62E8371FFDFFB380F568A8510E8644B1BD (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, intptr_t ___0_buffer, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77 (intptr_t ___0_source, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_destination, int32_t ___2_startIndex, int32_t ___3_length, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::ToPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void System.IO.IOException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeDeflateStreamHandle__ctor_mBDF78EC52524A938914F593AF5C198C9F7632E41 (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousAddRef(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922 (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, bool* ___0_success, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousRelease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.SafeHandle::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle__ctor_m23E44C94503043292DCD4E87818082CFC09A7F4B (SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* __this, intptr_t ___0_invalidHandleValue, bool ___1_ownsHandle, const RuntimeMethod* method) ;
// System.Int32 System.IO.Compression.DeflateStreamNative::CloseZStream(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_CloseZStream_m6FB720C1050656B8E8CF3BB53856D407509D6D0A (intptr_t ___0_stream, const RuntimeMethod* method) ;
// System.Void System.PlatformNotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1 (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* __this, const RuntimeMethod* method) ;
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.ReadOnlySpan`1<T>)
inline uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D, const RuntimeMethod*))MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_gshared)(___0_span, method);
}
// System.Int32 System.Marvin::ComputeHash32(System.Byte&,System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marvin_ComputeHash32_mAB058ED57AEEE83EF8016C0D7C3A5CF96825C08D (uint8_t* ___0_data, int32_t ___1_count, uint64_t ___2_seed, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Byte& System.Array::GetRawSzArrayData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowInvalidTypeWithPointersNotSupported(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF (Type_t* ___0_targetType, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.UInt16>::get_Length()
inline int32_t ReadOnlySpan_1_get_Length_m339FDCE1FC17C2B97AEA44937294504AF706F7FF_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m339FDCE1FC17C2B97AEA44937294504AF706F7FF_gshared_inline)(__this, method);
}
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(T&,System.Int32)
inline void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, uint8_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
// System.Void System.Span`1<System.Byte>::.ctor(T&,System.Int32)
inline void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, uint8_t*, int32_t, const RuntimeMethod*))Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
// System.Void System.ReadOnlySpan`1<System.UInt32>::.ctor(T&,System.Int32)
inline void ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, uint32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4*, uint32_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
// System.Int32 System.ReadOnlySpan`1<System.UInt32>::get_Length()
inline int32_t ReadOnlySpan_1_get_Length_m031225D82859BA85FEE8375AA52B4CE8DF1ACE00_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m031225D82859BA85FEE8375AA52B4CE8DF1ACE00_gshared_inline)(__this, method);
}
// System.Void System.Span`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
inline void Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_gshared_inline)(__this, ___0_array, ___1_start, ___2_length, method);
}
// System.Void System.ThrowHelper::ThrowArrayTypeMismatchException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590 (const RuntimeMethod* method) ;
#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MonoPosixHelper_INTERNAL
IL2CPP_EXTERN_C void* CDECL CreateZStream(int32_t, int32_t, Il2CppMethodPointer, intptr_t);
#endif
#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MonoPosixHelper_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL CloseZStream(intptr_t);
#endif
#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MonoPosixHelper_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL Flush(void*);
#endif
#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MonoPosixHelper_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL ReadZStream(void*, intptr_t, int32_t);
#endif
#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_MonoPosixHelper_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL WriteZStream(void*, intptr_t, int32_t);
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Impl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Certificate2Impl__ctor_mE6FF68AD589010E57C86555935DB601680AC1839 (X509Certificate2Impl_t9EC3180958225F2A99501C70603CE52BCD1DFD25* __this, const RuntimeMethod* method) 
{
	{
		X509CertificateImpl__ctor_m7EDF52F692FFBF7527B6ECBBF39BC35444BFB287(__this, NULL);
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
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509Certificate2ImplMono_get_IsValid_mA2D572B4E2382A93FEB9F88940269684D433439B (X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240* __this, const RuntimeMethod* method) 
{
	{
		X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_0 = __this->____cert_3;
		return (bool)((!(((RuntimeObject*)(X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::.ctor(Mono.Security.X509.X509Certificate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Certificate2ImplMono__ctor_m3F6BBB4381EB9A720E11577B9F663DC10B3B93A7 (X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240* __this, X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* ___0_cert, const RuntimeMethod* method) 
{
	{
		X509Certificate2ImplUnix__ctor_mF3392E6B555FBA22CBDC93DF0C53479586EBF327(__this, NULL);
		X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_0 = ___0_cert;
		__this->____cert_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cert_3), (void*)L_0);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Certificate2ImplMono__ctor_m622D5FDEB76F561EA4AE9C8F4597D8E6AE1C6C28 (X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240* __this, X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240* ___0_other, const RuntimeMethod* method) 
{
	{
		X509Certificate2ImplUnix__ctor_mF3392E6B555FBA22CBDC93DF0C53479586EBF327(__this, NULL);
		X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240* L_0 = ___0_other;
		NullCheck(L_0);
		X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_1 = L_0->____cert_3;
		__this->____cert_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cert_3), (void*)L_1);
		X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240* L_2 = ___0_other;
		NullCheck(L_2);
		X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098* L_3 = L_2->___intermediateCerts_2;
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240* L_4 = ___0_other;
		NullCheck(L_4);
		X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098* L_5 = L_4->___intermediateCerts_2;
		NullCheck(L_5);
		X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098* L_6;
		L_6 = X509CertificateImplCollection_Clone_m2AC54E741E6AB673D07464C05D27A3FF9F4112B0(L_5, NULL);
		__this->___intermediateCerts_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___intermediateCerts_2), (void*)L_6);
	}

IL_002b:
	{
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::.ctor(System.Byte[],Microsoft.Win32.SafeHandles.SafePasswordHandle,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Certificate2ImplMono__ctor_m1B2FB6BBB7558184F07C2E42ECE23C70075A9B7D (X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rawData, SafePasswordHandle_t07A3BFCF046DFE44216ACE030F838C8AE2564463* ___1_password, int32_t ___2_keyStorageFlags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2* V_0 = NULL;
	int32_t V_1 = 0;
	{
		X509Certificate2ImplUnix__ctor_mF3392E6B555FBA22CBDC93DF0C53479586EBF327(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_rawData;
		int32_t L_1;
		L_1 = X509Certificate2_GetCertContentType_m8D232C26231C35597793EB5DE62EC7916417F652(L_0, NULL);
		V_1 = L_1;
		int32_t L_2 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 1)))
		{
			case 0:
			{
				goto IL_003e;
			}
			case 1:
			{
				goto IL_0066;
			}
			case 2:
			{
				goto IL_002f;
			}
			case 3:
			{
				goto IL_0066;
			}
			case 4:
			{
				goto IL_003e;
			}
			case 5:
			{
				goto IL_004b;
			}
		}
	}
	{
		goto IL_0066;
	}

IL_002f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_rawData;
		SafePasswordHandle_t07A3BFCF046DFE44216ACE030F838C8AE2564463* L_4 = ___1_password;
		X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_5;
		L_5 = X509Certificate2ImplMono_ImportPkcs12_mE10A545B13FB03F48E6F4E7210F6FE86BEAD77B0(__this, L_3, L_4, NULL);
		__this->____cert_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cert_3), (void*)L_5);
		return;
	}

IL_003e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_rawData;
		X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_7 = (X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356*)il2cpp_codegen_object_new(X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		X509Certificate__ctor_m4F437D7E76C6CCB0941AB5801946076C82583946(L_7, L_6, NULL);
		__this->____cert_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cert_3), (void*)L_7);
		return;
	}

IL_004b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_rawData;
		AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2* L_9 = (AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2*)il2cpp_codegen_object_new(AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		AuthenticodeDeformatter__ctor_mE7D65775E1289E0DBB208034BE5EB40AB6469BA0(L_9, L_8, NULL);
		V_0 = L_9;
		AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2* L_10 = V_0;
		NullCheck(L_10);
		X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_11;
		L_11 = AuthenticodeDeformatter_get_SigningCertificate_m5C675A2AB0464670DF6C557C4433871014EB52CC_inline(L_10, NULL);
		__this->____cert_3 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cert_3), (void*)L_11);
		X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_12 = __this->____cert_3;
		if (L_12)
		{
			goto IL_0076;
		}
	}

IL_0066:
	{
		String_t* L_13;
		L_13 = Locale_GetText_m7BA18BC14D3028C4C4722E220800563188DA3600(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3032791810C3C28A8817104A5F4621172856E8C9)), NULL);
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_14 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509Certificate2ImplMono__ctor_m1B2FB6BBB7558184F07C2E42ECE23C70075A9B7D_RuntimeMethod_var)));
	}

IL_0076:
	{
		return;
	}
}
// System.Security.Cryptography.X509Certificates.X509CertificateImpl System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF* X509Certificate2ImplMono_Clone_mE74EE518CD4FAD43F670E3B9140350A0C9766385 (X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509CertificateImpl_ThrowIfContextInvalid_m253EB9023E9902680A338B86D7EC55AAB7EFDDBA(__this, NULL);
		X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240* L_0 = (X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240*)il2cpp_codegen_object_new(X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		X509Certificate2ImplMono__ctor_m622D5FDEB76F561EA4AE9C8F4597D8E6AE1C6C28(L_0, __this, NULL);
		return L_0;
	}
}
// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::get_Cert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* X509Certificate2ImplMono_get_Cert_m456536A0FC9BB84D859CC7ECAA421203FDCE6E00 (X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240* __this, const RuntimeMethod* method) 
{
	{
		X509CertificateImpl_ThrowIfContextInvalid_m253EB9023E9902680A338B86D7EC55AAB7EFDDBA(__this, NULL);
		X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_0 = __this->____cert_3;
		return L_0;
	}
}
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::GetRawCertData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* X509Certificate2ImplMono_GetRawCertData_mF4AB5CCF83D23AFE455D75CC7545423221565CC0 (X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240* __this, const RuntimeMethod* method) 
{
	{
		X509CertificateImpl_ThrowIfContextInvalid_m253EB9023E9902680A338B86D7EC55AAB7EFDDBA(__this, NULL);
		X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_0;
		L_0 = X509Certificate2ImplMono_get_Cert_m456536A0FC9BB84D859CC7ECAA421203FDCE6E00(__this, NULL);
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(10 /* System.Byte[] Mono.Security.X509.X509Certificate::get_RawData() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::get_HasPrivateKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509Certificate2ImplMono_get_HasPrivateKey_mE1EE233BC55F71002EA56248BCCADF483BE07B22 (X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240* __this, const RuntimeMethod* method) 
{
	{
		AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8* L_0;
		L_0 = VirtualFuncInvoker0< AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8* >::Invoke(21 /* System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.X509Certificate2Impl::get_PrivateKey() */, __this);
		return (bool)((!(((RuntimeObject*)(AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::get_PrivateKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8* X509Certificate2ImplMono_get_PrivateKey_m2B92DBE7562BBE32D2DC2F5ADC6E96FCD2497F60 (X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DSACryptoServiceProvider_tB418CD8E85D69D879C7298E4A6A7D8CFAC09D79E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* V_0 = NULL;
	RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4* V_1 = NULL;
	DSACryptoServiceProvider_tB418CD8E85D69D879C7298E4A6A7D8CFAC09D79E* V_2 = NULL;
	AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_0 = __this->____cert_3;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240_il2cpp_TypeInfo_var)));
		String_t* L_1 = ((X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240_il2cpp_TypeInfo_var))))->___empty_error_4;
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_2 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509Certificate2ImplMono_get_PrivateKey_m2B92DBE7562BBE32D2DC2F5ADC6E96FCD2497F60_RuntimeMethod_var)));
	}

IL_0013:
	{
	}
	try
	{// begin try (depth: 1)
		{
			X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_3 = __this->____cert_3;
			NullCheck(L_3);
			RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* L_4;
			L_4 = VirtualFuncInvoker0< RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* >::Invoke(8 /* System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::get_RSA() */, L_3);
			V_0 = ((RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C*)IsInstSealed((RuntimeObject*)L_4, RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_il2cpp_TypeInfo_var));
			RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* L_5 = V_0;
			if (!L_5)
			{
				goto IL_0059_1;
			}
		}
		{
			RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* L_6 = V_0;
			NullCheck(L_6);
			bool L_7;
			L_7 = RSACryptoServiceProvider_get_PublicOnly_mA9FB1ABFDF5D4E7355DC09980EF5C2EEF6236504(L_6, NULL);
			if (!L_7)
			{
				goto IL_0037_1;
			}
		}
		{
			V_3 = (AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8*)NULL;
			goto IL_00de;
		}

IL_0037_1:
		{
			RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* L_8 = (RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C*)il2cpp_codegen_object_new(RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_il2cpp_TypeInfo_var);
			NullCheck(L_8);
			RSACryptoServiceProvider__ctor_mE4BC404364B89F41C863EC3860ED4B9D7DD7A06F(L_8, NULL);
			RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* L_9 = L_8;
			X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_10 = __this->____cert_3;
			NullCheck(L_10);
			RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* L_11;
			L_11 = VirtualFuncInvoker0< RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* >::Invoke(8 /* System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::get_RSA() */, L_10);
			NullCheck(L_11);
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_12;
			L_12 = VirtualFuncInvoker1< RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF, bool >::Invoke(11 /* System.Security.Cryptography.RSAParameters System.Security.Cryptography.RSA::ExportParameters(System.Boolean) */, L_11, (bool)1);
			NullCheck(L_9);
			VirtualActionInvoker1< RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF >::Invoke(12 /* System.Void System.Security.Cryptography.RSA::ImportParameters(System.Security.Cryptography.RSAParameters) */, L_9, L_12);
			V_3 = L_9;
			goto IL_00de;
		}

IL_0059_1:
		{
			X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_13 = __this->____cert_3;
			NullCheck(L_13);
			RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* L_14;
			L_14 = VirtualFuncInvoker0< RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* >::Invoke(8 /* System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::get_RSA() */, L_13);
			V_1 = ((RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4*)IsInstClass((RuntimeObject*)L_14, RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4_il2cpp_TypeInfo_var));
			RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4* L_15 = V_1;
			if (!L_15)
			{
				goto IL_0098_1;
			}
		}
		{
			RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4* L_16 = V_1;
			NullCheck(L_16);
			bool L_17;
			L_17 = RSAManaged_get_PublicOnly_m12DE914F7BDDD2E850EDD7F34BA9CF3114C333BF(L_16, NULL);
			if (!L_17)
			{
				goto IL_0079_1;
			}
		}
		{
			V_3 = (AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8*)NULL;
			goto IL_00de;
		}

IL_0079_1:
		{
			RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4* L_18 = (RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4*)il2cpp_codegen_object_new(RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4_il2cpp_TypeInfo_var);
			NullCheck(L_18);
			RSAManaged__ctor_m3DC50713376908C5D1B7EDE7662070DBC185597A(L_18, NULL);
			RSAManaged_t16228062567201ED2F5B1335C00576283134F3D4* L_19 = L_18;
			X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_20 = __this->____cert_3;
			NullCheck(L_20);
			RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* L_21;
			L_21 = VirtualFuncInvoker0< RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* >::Invoke(8 /* System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::get_RSA() */, L_20);
			NullCheck(L_21);
			RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF L_22;
			L_22 = VirtualFuncInvoker1< RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF, bool >::Invoke(11 /* System.Security.Cryptography.RSAParameters System.Security.Cryptography.RSA::ExportParameters(System.Boolean) */, L_21, (bool)1);
			NullCheck(L_19);
			VirtualActionInvoker1< RSAParameters_t14B738B69F9D1EB594D5F391BDF8E42BA16435FF >::Invoke(12 /* System.Void System.Security.Cryptography.RSA::ImportParameters(System.Security.Cryptography.RSAParameters) */, L_19, L_22);
			V_3 = L_19;
			goto IL_00de;
		}

IL_0098_1:
		{
			X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_23 = __this->____cert_3;
			NullCheck(L_23);
			DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* L_24;
			L_24 = X509Certificate_get_DSA_m661EA8FA79C2108403B685495B961422BC531AA6(L_23, NULL);
			V_2 = ((DSACryptoServiceProvider_tB418CD8E85D69D879C7298E4A6A7D8CFAC09D79E*)IsInstSealed((RuntimeObject*)L_24, DSACryptoServiceProvider_tB418CD8E85D69D879C7298E4A6A7D8CFAC09D79E_il2cpp_TypeInfo_var));
			DSACryptoServiceProvider_tB418CD8E85D69D879C7298E4A6A7D8CFAC09D79E* L_25 = V_2;
			if (!L_25)
			{
				goto IL_00d7_1;
			}
		}
		{
			DSACryptoServiceProvider_tB418CD8E85D69D879C7298E4A6A7D8CFAC09D79E* L_26 = V_2;
			NullCheck(L_26);
			bool L_27;
			L_27 = DSACryptoServiceProvider_get_PublicOnly_m6F32B85139774D360292384FECF3FCDEA10488B5(L_26, NULL);
			if (!L_27)
			{
				goto IL_00b8_1;
			}
		}
		{
			V_3 = (AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8*)NULL;
			goto IL_00de;
		}

IL_00b8_1:
		{
			DSACryptoServiceProvider_tB418CD8E85D69D879C7298E4A6A7D8CFAC09D79E* L_28 = (DSACryptoServiceProvider_tB418CD8E85D69D879C7298E4A6A7D8CFAC09D79E*)il2cpp_codegen_object_new(DSACryptoServiceProvider_tB418CD8E85D69D879C7298E4A6A7D8CFAC09D79E_il2cpp_TypeInfo_var);
			NullCheck(L_28);
			DSACryptoServiceProvider__ctor_mC1490075F0C3EDE07208BB0F20727473CD6CE32E(L_28, NULL);
			DSACryptoServiceProvider_tB418CD8E85D69D879C7298E4A6A7D8CFAC09D79E* L_29 = L_28;
			X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_30 = __this->____cert_3;
			NullCheck(L_30);
			DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* L_31;
			L_31 = X509Certificate_get_DSA_m661EA8FA79C2108403B685495B961422BC531AA6(L_30, NULL);
			NullCheck(L_31);
			DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 L_32;
			L_32 = VirtualFuncInvoker1< DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9, bool >::Invoke(11 /* System.Security.Cryptography.DSAParameters System.Security.Cryptography.DSA::ExportParameters(System.Boolean) */, L_31, (bool)1);
			NullCheck(L_29);
			VirtualActionInvoker1< DSAParameters_t2FA923FEA7E2DB5515EE54A7E86B0401D025E0E9 >::Invoke(12 /* System.Void System.Security.Cryptography.DSA::ImportParameters(System.Security.Cryptography.DSAParameters) */, L_29, L_32);
			V_3 = L_29;
			goto IL_00de;
		}

IL_00d7_1:
		{
			goto IL_00dc;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d9;
		}
		throw e;
	}

CATCH_00d9:
	{// begin catch(System.Object)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00dc;
	}// end catch (depth: 1)

IL_00dc:
	{
		return (AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8*)NULL;
	}

IL_00de:
	{
		AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8* L_33 = V_3;
		return L_33;
	}
}
// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::ImportPkcs12(System.Byte[],Microsoft.Win32.SafeHandles.SafePasswordHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* X509Certificate2ImplMono_ImportPkcs12_mE10A545B13FB03F48E6F4E7210F6FE86BEAD77B0 (X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rawData, SafePasswordHandle_t07A3BFCF046DFE44216ACE030F838C8AE2564463* ___1_password, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		SafePasswordHandle_t07A3BFCF046DFE44216ACE030F838C8AE2564463* L_0 = ___1_password;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		SafePasswordHandle_t07A3BFCF046DFE44216ACE030F838C8AE2564463* L_1 = ___1_password;
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, L_1);
		if (!L_2)
		{
			goto IL_0014;
		}
	}

IL_000b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_rawData;
		X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_4;
		L_4 = X509Certificate2ImplMono_ImportPkcs12_mC29B89A6EDBB108185C4A91028F6EB496ACB2C98(__this, L_3, (String_t*)NULL, NULL);
		return L_4;
	}

IL_0014:
	{
		SafePasswordHandle_t07A3BFCF046DFE44216ACE030F838C8AE2564463* L_5 = ___1_password;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = SafePasswordHandle_Mono_DangerousGetString_m247A8B0941D759ED1EBC9769C82A06201FD2B9D5(L_5, NULL);
		V_0 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_rawData;
		String_t* L_8 = V_0;
		X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_9;
		L_9 = X509Certificate2ImplMono_ImportPkcs12_mC29B89A6EDBB108185C4A91028F6EB496ACB2C98(__this, L_7, L_8, NULL);
		return L_9;
	}
}
// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::ImportPkcs12(System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* X509Certificate2ImplMono_ImportPkcs12_mC29B89A6EDBB108185C4A91028F6EB496ACB2C98 (X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rawData, String_t* ___1_password, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PKCS12_t1E7D81A38668D35E4536A15ADC8190525267A989_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PKCS12_t1E7D81A38668D35E4536A15ADC8190525267A989* V_0 = NULL;
	X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* V_1 = NULL;
	AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8* V_2 = NULL;
	String_t* V_3 = NULL;
	X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE* V_4 = NULL;
	X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* V_7 = NULL;
	X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240* V_8 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = (PKCS12_t1E7D81A38668D35E4536A15ADC8190525267A989*)NULL;
		String_t* L_0 = ___1_password;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	try
	{// begin try (depth: 1)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_rawData;
		PKCS12_t1E7D81A38668D35E4536A15ADC8190525267A989* L_3 = (PKCS12_t1E7D81A38668D35E4536A15ADC8190525267A989*)il2cpp_codegen_object_new(PKCS12_t1E7D81A38668D35E4536A15ADC8190525267A989_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		PKCS12__ctor_m2C6FBB30C343DA9D9E1753FBB72F01AD4E1F7FFC(L_3, L_2, (String_t*)NULL, NULL);
		V_0 = L_3;
		goto IL_002b;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0014;
		}
		throw e;
	}

CATCH_0014:
	{// begin catch(System.Object)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_rawData;
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_t_il2cpp_TypeInfo_var))))->___Empty_6;
		PKCS12_t1E7D81A38668D35E4536A15ADC8190525267A989* L_6 = (PKCS12_t1E7D81A38668D35E4536A15ADC8190525267A989*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PKCS12_t1E7D81A38668D35E4536A15ADC8190525267A989_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		PKCS12__ctor_m2C6FBB30C343DA9D9E1753FBB72F01AD4E1F7FFC(L_6, L_4, L_5, NULL);
		V_0 = L_6;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002b;
	}// end catch (depth: 1)

IL_0023:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_rawData;
		String_t* L_8 = ___1_password;
		PKCS12_t1E7D81A38668D35E4536A15ADC8190525267A989* L_9 = (PKCS12_t1E7D81A38668D35E4536A15ADC8190525267A989*)il2cpp_codegen_object_new(PKCS12_t1E7D81A38668D35E4536A15ADC8190525267A989_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		PKCS12__ctor_m2C6FBB30C343DA9D9E1753FBB72F01AD4E1F7FFC(L_9, L_7, L_8, NULL);
		V_0 = L_9;
	}

IL_002b:
	{
		PKCS12_t1E7D81A38668D35E4536A15ADC8190525267A989* L_10 = V_0;
		NullCheck(L_10);
		X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4* L_11;
		L_11 = PKCS12_get_Certificates_m6FB30DF4377FE4FC725153AC237CBC59786E719E(L_10, NULL);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = CollectionBase_get_Count_m2BD48A6DDD376554A7956E4B26EC27F9F1E43C72(L_11, NULL);
		if (L_12)
		{
			goto IL_003a;
		}
	}
	{
		return (X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356*)NULL;
	}

IL_003a:
	{
		PKCS12_t1E7D81A38668D35E4536A15ADC8190525267A989* L_13 = V_0;
		NullCheck(L_13);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_14;
		L_14 = PKCS12_get_Keys_mFF1C9F9DEF54D27CC472AA46DDBBE224F67DC46B(L_13, NULL);
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_14);
		if (L_15)
		{
			goto IL_0054;
		}
	}
	{
		PKCS12_t1E7D81A38668D35E4536A15ADC8190525267A989* L_16 = V_0;
		NullCheck(L_16);
		X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4* L_17;
		L_17 = PKCS12_get_Certificates_m6FB30DF4377FE4FC725153AC237CBC59786E719E(L_16, NULL);
		NullCheck(L_17);
		X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_18;
		L_18 = X509CertificateCollection_get_Item_m68CBCD6C145B7EC4E4BDF6BA208576976385A538(L_17, 0, NULL);
		return L_18;
	}

IL_0054:
	{
		V_1 = (X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356*)NULL;
		PKCS12_t1E7D81A38668D35E4536A15ADC8190525267A989* L_19 = V_0;
		NullCheck(L_19);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_20;
		L_20 = PKCS12_get_Keys_mFF1C9F9DEF54D27CC472AA46DDBBE224F67DC46B(L_19, NULL);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(27 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_20, 0);
		V_2 = ((AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8*)IsInstClass((RuntimeObject*)L_21, AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8_il2cpp_TypeInfo_var));
		AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8* L_22 = V_2;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker1< String_t*, bool >::Invoke(9 /* System.String System.Security.Cryptography.AsymmetricAlgorithm::ToXmlString(System.Boolean) */, L_22, (bool)0);
		V_3 = L_23;
		PKCS12_t1E7D81A38668D35E4536A15ADC8190525267A989* L_24 = V_0;
		NullCheck(L_24);
		X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4* L_25;
		L_25 = PKCS12_get_Certificates_m6FB30DF4377FE4FC725153AC237CBC59786E719E(L_24, NULL);
		NullCheck(L_25);
		X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE* L_26;
		L_26 = X509CertificateCollection_GetEnumerator_m602E7163983BF2C8F8B5C09652D5E74771969B56(L_25, NULL);
		V_4 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d4:
			{// begin finally (depth: 1)
				{
					X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE* L_27 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_27, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_28 = V_6;
					if (!L_28)
					{
						goto IL_00e8;
					}
				}
				{
					RuntimeObject* L_29 = V_6;
					NullCheck(L_29);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_29);
				}

IL_00e8:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00c9_1;
			}

IL_007f_1:
			{
				X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE* L_30 = V_4;
				NullCheck(L_30);
				X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_31;
				L_31 = X509CertificateEnumerator_get_Current_mA12833D7DAE7B1E3FB58D8596D266CA30A6BCD69(L_30, NULL);
				V_5 = L_31;
				X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_32 = V_5;
				NullCheck(L_32);
				RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* L_33;
				L_33 = VirtualFuncInvoker0< RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* >::Invoke(8 /* System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::get_RSA() */, L_32);
				if (!L_33)
				{
					goto IL_00a6_1;
				}
			}
			{
				String_t* L_34 = V_3;
				X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_35 = V_5;
				NullCheck(L_35);
				RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* L_36;
				L_36 = VirtualFuncInvoker0< RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* >::Invoke(8 /* System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::get_RSA() */, L_35);
				NullCheck(L_36);
				String_t* L_37;
				L_37 = VirtualFuncInvoker1< String_t*, bool >::Invoke(9 /* System.String System.Security.Cryptography.AsymmetricAlgorithm::ToXmlString(System.Boolean) */, L_36, (bool)0);
				bool L_38;
				L_38 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, L_37, NULL);
				if (L_38)
				{
					goto IL_00c4_1;
				}
			}

IL_00a6_1:
			{
				X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_39 = V_5;
				NullCheck(L_39);
				DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* L_40;
				L_40 = X509Certificate_get_DSA_m661EA8FA79C2108403B685495B961422BC531AA6(L_39, NULL);
				if (!L_40)
				{
					goto IL_00c9_1;
				}
			}
			{
				String_t* L_41 = V_3;
				X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_42 = V_5;
				NullCheck(L_42);
				DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41* L_43;
				L_43 = X509Certificate_get_DSA_m661EA8FA79C2108403B685495B961422BC531AA6(L_42, NULL);
				NullCheck(L_43);
				String_t* L_44;
				L_44 = VirtualFuncInvoker1< String_t*, bool >::Invoke(9 /* System.String System.Security.Cryptography.AsymmetricAlgorithm::ToXmlString(System.Boolean) */, L_43, (bool)0);
				bool L_45;
				L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_41, L_44, NULL);
				if (!L_45)
				{
					goto IL_00c9_1;
				}
			}

IL_00c4_1:
			{
				X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_46 = V_5;
				V_1 = L_46;
				goto IL_00e9;
			}

IL_00c9_1:
			{
				X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE* L_47 = V_4;
				NullCheck(L_47);
				bool L_48;
				L_48 = X509CertificateEnumerator_MoveNext_mAB0C32FB96AD574439B87E0E7D2553CBD7DF37C7(L_47, NULL);
				if (L_48)
				{
					goto IL_007f_1;
				}
			}
			{
				goto IL_00e9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e9:
	{
		X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_49 = V_1;
		if (L_49)
		{
			goto IL_00fb;
		}
	}
	{
		PKCS12_t1E7D81A38668D35E4536A15ADC8190525267A989* L_50 = V_0;
		NullCheck(L_50);
		X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4* L_51;
		L_51 = PKCS12_get_Certificates_m6FB30DF4377FE4FC725153AC237CBC59786E719E(L_50, NULL);
		NullCheck(L_51);
		X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_52;
		L_52 = X509CertificateCollection_get_Item_m68CBCD6C145B7EC4E4BDF6BA208576976385A538(L_51, 0, NULL);
		V_1 = L_52;
		goto IL_0113;
	}

IL_00fb:
	{
		X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_53 = V_1;
		AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8* L_54 = V_2;
		NullCheck(L_53);
		VirtualActionInvoker1< RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A* >::Invoke(9 /* System.Void Mono.Security.X509.X509Certificate::set_RSA(System.Security.Cryptography.RSA) */, L_53, ((RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A*)IsInstClass((RuntimeObject*)L_54, RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A_il2cpp_TypeInfo_var)));
		X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_55 = V_1;
		AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8* L_56 = V_2;
		NullCheck(L_55);
		X509Certificate_set_DSA_m35B061538E1BA0B2492CA50F46092FB3C48927B8(L_55, ((DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41*)IsInstClass((RuntimeObject*)L_56, DSA_tB12EE3AEA99FBD41DE318E2A371878CA94653E41_il2cpp_TypeInfo_var)), NULL);
	}

IL_0113:
	{
		PKCS12_t1E7D81A38668D35E4536A15ADC8190525267A989* L_57 = V_0;
		NullCheck(L_57);
		X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4* L_58;
		L_58 = PKCS12_get_Certificates_m6FB30DF4377FE4FC725153AC237CBC59786E719E(L_57, NULL);
		NullCheck(L_58);
		int32_t L_59;
		L_59 = CollectionBase_get_Count_m2BD48A6DDD376554A7956E4B26EC27F9F1E43C72(L_58, NULL);
		if ((((int32_t)L_59) <= ((int32_t)1)))
		{
			goto IL_0180;
		}
	}
	{
		X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098* L_60 = (X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098*)il2cpp_codegen_object_new(X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098_il2cpp_TypeInfo_var);
		NullCheck(L_60);
		X509CertificateImplCollection__ctor_m9A1E10EE2FC833E8F8C938A91AD907BC437452E2(L_60, NULL);
		__this->___intermediateCerts_2 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___intermediateCerts_2), (void*)L_60);
		PKCS12_t1E7D81A38668D35E4536A15ADC8190525267A989* L_61 = V_0;
		NullCheck(L_61);
		X509CertificateCollection_t4FCE6AFCD042978CC0A24627945F864BB3188FC4* L_62;
		L_62 = PKCS12_get_Certificates_m6FB30DF4377FE4FC725153AC237CBC59786E719E(L_61, NULL);
		NullCheck(L_62);
		X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE* L_63;
		L_63 = X509CertificateCollection_GetEnumerator_m602E7163983BF2C8F8B5C09652D5E74771969B56(L_62, NULL);
		V_4 = L_63;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_016b:
			{// begin finally (depth: 1)
				{
					X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE* L_64 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_64, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_65 = V_6;
					if (!L_65)
					{
						goto IL_017f;
					}
				}
				{
					RuntimeObject* L_66 = V_6;
					NullCheck(L_66);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_66);
				}

IL_017f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0160_1;
			}

IL_013b_1:
			{
				X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE* L_67 = V_4;
				NullCheck(L_67);
				X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_68;
				L_68 = X509CertificateEnumerator_get_Current_mA12833D7DAE7B1E3FB58D8596D266CA30A6BCD69(L_67, NULL);
				V_7 = L_68;
				X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_69 = V_7;
				X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_70 = V_1;
				if ((((RuntimeObject*)(X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356*)L_69) == ((RuntimeObject*)(X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356*)L_70)))
				{
					goto IL_0160_1;
				}
			}
			{
				X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_71 = V_7;
				X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240* L_72 = (X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240*)il2cpp_codegen_object_new(X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240_il2cpp_TypeInfo_var);
				NullCheck(L_72);
				X509Certificate2ImplMono__ctor_m3F6BBB4381EB9A720E11577B9F663DC10B3B93A7(L_72, L_71, NULL);
				V_8 = L_72;
				X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098* L_73 = __this->___intermediateCerts_2;
				X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240* L_74 = V_8;
				NullCheck(L_73);
				X509CertificateImplCollection_Add_mDF2DF7D94CEB84BCCC7292831C838FCDB1322B8C(L_73, L_74, (bool)1, NULL);
			}

IL_0160_1:
			{
				X509CertificateEnumerator_t8AF08C6640E7B5CD464BBC965C56E30A36B009FE* L_75 = V_4;
				NullCheck(L_75);
				bool L_76;
				L_76 = X509CertificateEnumerator_MoveNext_mAB0C32FB96AD574439B87E0E7D2553CBD7DF37C7(L_75, NULL);
				if (L_76)
				{
					goto IL_013b_1;
				}
			}
			{
				goto IL_0180;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0180:
	{
		X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_77 = V_1;
		return L_77;
	}
}
// System.Security.Cryptography.X509Certificates.X509CertificateImplCollection System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::get_IntermediateCertificates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098* X509Certificate2ImplMono_get_IntermediateCertificates_m304680821DC498B386CF82B8B82DD1248DE52C85 (X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240* __this, const RuntimeMethod* method) 
{
	{
		X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098* L_0 = __this->___intermediateCerts_2;
		return L_0;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplMono::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Certificate2ImplMono__cctor_m607787AB7A172776EF6C616315D78B53DD9E6E81 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t56F624E1051A2E261613B6A81CA2333397F49CB3____27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811_2_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD680BB985C766A862C17089DCA4435BD5EF69761);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = Locale_GetText_m7BA18BC14D3028C4C4722E220800563188DA3600(_stringLiteralD680BB985C766A862C17089DCA4435BD5EF69761, NULL);
		((X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240_StaticFields*)il2cpp_codegen_static_fields_for(X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240_il2cpp_TypeInfo_var))->___empty_error_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240_StaticFields*)il2cpp_codegen_static_fields_for(X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240_il2cpp_TypeInfo_var))->___empty_error_4), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t56F624E1051A2E261613B6A81CA2333397F49CB3____27625E383C3A91E8B65BC745FF5D4048C82B883CCD293B07DED697BF82733811_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_2, L_3, NULL);
		((X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240_StaticFields*)il2cpp_codegen_static_fields_for(X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240_il2cpp_TypeInfo_var))->___signedData_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240_StaticFields*)il2cpp_codegen_static_fields_for(X509Certificate2ImplMono_t4566261D31F143C8CD222DB687625E5246BFD240_il2cpp_TypeInfo_var))->___signedData_5), (void*)L_2);
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
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplUnix::EnsureCertData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Certificate2ImplUnix_EnsureCertData_m4BD3C65CDE138D7239A18652543C7A93BFDD4E62 (X509Certificate2ImplUnix_tF8DFA7FF05CC33C9010EFDCA21A827247CB8E86D* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___readCertData_0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		X509CertificateImpl_ThrowIfContextInvalid_m253EB9023E9902680A338B86D7EC55AAB7EFDDBA(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(28 /* System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2ImplUnix::GetRawCertData() */, __this);
		CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1 L_2;
		memset((&L_2), 0, sizeof(L_2));
		CertificateData__ctor_m623A235F902E7262CB9DA2CEB1BF5D3E64A6D23F((&L_2), L_1, /*hidden argument*/NULL);
		__this->___certData_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___certData_1))->___RawData_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___certData_1))->___SubjectPublicKeyInfo_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___certData_1))->___SerialNumber_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___certData_1))->___TbsSignature_4))->___AlgorithmId_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___certData_1))->___TbsSignature_4))->___Parameters_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___certData_1))->___Issuer_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___certData_1))->___Subject_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___certData_1))->___PublicKeyAlgorithm_9))->___AlgorithmId_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___certData_1))->___PublicKeyAlgorithm_9))->___Parameters_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___certData_1))->___PublicKey_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___certData_1))->___IssuerUniqueId_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___certData_1))->___SubjectUniqueId_12), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___certData_1))->___Extensions_13), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___certData_1))->___SignatureAlgorithm_14))->___AlgorithmId_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___certData_1))->___SignatureAlgorithm_14))->___Parameters_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___certData_1))->___SignatureValue_15), (void*)NULL);
		#endif
		__this->___readCertData_0 = (bool)1;
		return;
	}
}
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2ImplUnix::get_KeyAlgorithm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509Certificate2ImplUnix_get_KeyAlgorithm_m91A6386635D6554DFE8D3ABE9BE166A2B39965DF (X509Certificate2ImplUnix_tF8DFA7FF05CC33C9010EFDCA21A827247CB8E86D* __this, const RuntimeMethod* method) 
{
	{
		X509Certificate2ImplUnix_EnsureCertData_m4BD3C65CDE138D7239A18652543C7A93BFDD4E62(__this, NULL);
		CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1* L_0 = (&__this->___certData_1);
		AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8* L_1 = (&L_0->___PublicKeyAlgorithm_9);
		String_t* L_2 = L_1->___AlgorithmId_0;
		return L_2;
	}
}
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2ImplUnix::get_KeyAlgorithmParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* X509Certificate2ImplUnix_get_KeyAlgorithmParameters_m97B958D5098C698F869D9C9C9BE13AD43AABCFD7 (X509Certificate2ImplUnix_tF8DFA7FF05CC33C9010EFDCA21A827247CB8E86D* __this, const RuntimeMethod* method) 
{
	{
		X509Certificate2ImplUnix_EnsureCertData_m4BD3C65CDE138D7239A18652543C7A93BFDD4E62(__this, NULL);
		CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1* L_0 = (&__this->___certData_1);
		AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8* L_1 = (&L_0->___PublicKeyAlgorithm_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1->___Parameters_1;
		return L_2;
	}
}
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2ImplUnix::get_PublicKeyValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* X509Certificate2ImplUnix_get_PublicKeyValue_m0C7862B1E1A55C681109592D4BD09439F43F301C (X509Certificate2ImplUnix_tF8DFA7FF05CC33C9010EFDCA21A827247CB8E86D* __this, const RuntimeMethod* method) 
{
	{
		X509Certificate2ImplUnix_EnsureCertData_m4BD3C65CDE138D7239A18652543C7A93BFDD4E62(__this, NULL);
		CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1* L_0 = (&__this->___certData_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0->___PublicKey_10;
		return L_1;
	}
}
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2ImplUnix::get_SerialNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* X509Certificate2ImplUnix_get_SerialNumber_m5388A1C777603B896EFE49885A320520AE8BFE71 (X509Certificate2ImplUnix_tF8DFA7FF05CC33C9010EFDCA21A827247CB8E86D* __this, const RuntimeMethod* method) 
{
	{
		X509Certificate2ImplUnix_EnsureCertData_m4BD3C65CDE138D7239A18652543C7A93BFDD4E62(__this, NULL);
		CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1* L_0 = (&__this->___certData_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0->___SerialNumber_3;
		return L_1;
	}
}
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2ImplUnix::get_SignatureAlgorithm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509Certificate2ImplUnix_get_SignatureAlgorithm_mC5519532C05449E473FDE2BCAB54F2429AE8A1C4 (X509Certificate2ImplUnix_tF8DFA7FF05CC33C9010EFDCA21A827247CB8E86D* __this, const RuntimeMethod* method) 
{
	{
		X509Certificate2ImplUnix_EnsureCertData_m4BD3C65CDE138D7239A18652543C7A93BFDD4E62(__this, NULL);
		CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1* L_0 = (&__this->___certData_1);
		AlgorithmIdentifier_tCF880F72315F1725C33F59BB2F5D213BB22275A8* L_1 = (&L_0->___SignatureAlgorithm_14);
		String_t* L_2 = L_1->___AlgorithmId_0;
		return L_2;
	}
}
// System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate2ImplUnix::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509Certificate2ImplUnix_get_Version_mCE7533BFE8F2E54A4386855F1288E87CB431BA6D (X509Certificate2ImplUnix_tF8DFA7FF05CC33C9010EFDCA21A827247CB8E86D* __this, const RuntimeMethod* method) 
{
	{
		X509Certificate2ImplUnix_EnsureCertData_m4BD3C65CDE138D7239A18652543C7A93BFDD4E62(__this, NULL);
		CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1* L_0 = (&__this->___certData_1);
		int32_t L_1 = L_0->___Version_2;
		return ((int32_t)il2cpp_codegen_add(L_1, 1));
	}
}
// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2ImplUnix::get_SubjectName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X500DistinguishedName_t53976A4567E82199856DAD47D3850F8EECABDAF6* X509Certificate2ImplUnix_get_SubjectName_m1080CB4AA55DEF3052FABE2681FCD500AEC2A786 (X509Certificate2ImplUnix_tF8DFA7FF05CC33C9010EFDCA21A827247CB8E86D* __this, const RuntimeMethod* method) 
{
	{
		X509Certificate2ImplUnix_EnsureCertData_m4BD3C65CDE138D7239A18652543C7A93BFDD4E62(__this, NULL);
		CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1* L_0 = (&__this->___certData_1);
		X500DistinguishedName_t53976A4567E82199856DAD47D3850F8EECABDAF6* L_1 = L_0->___Subject_8;
		return L_1;
	}
}
// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2ImplUnix::get_IssuerName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X500DistinguishedName_t53976A4567E82199856DAD47D3850F8EECABDAF6* X509Certificate2ImplUnix_get_IssuerName_mE929B42F7137A781DBAE7BA1DB8704D773DF50FF (X509Certificate2ImplUnix_tF8DFA7FF05CC33C9010EFDCA21A827247CB8E86D* __this, const RuntimeMethod* method) 
{
	{
		X509Certificate2ImplUnix_EnsureCertData_m4BD3C65CDE138D7239A18652543C7A93BFDD4E62(__this, NULL);
		CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1* L_0 = (&__this->___certData_1);
		X500DistinguishedName_t53976A4567E82199856DAD47D3850F8EECABDAF6* L_1 = L_0->___Issuer_5;
		return L_1;
	}
}
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2ImplUnix::get_Subject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509Certificate2ImplUnix_get_Subject_m32692DEEF247791D84F4F69D487D11A1243919DE (X509Certificate2ImplUnix_tF8DFA7FF05CC33C9010EFDCA21A827247CB8E86D* __this, const RuntimeMethod* method) 
{
	{
		X500DistinguishedName_t53976A4567E82199856DAD47D3850F8EECABDAF6* L_0;
		L_0 = VirtualFuncInvoker0< X500DistinguishedName_t53976A4567E82199856DAD47D3850F8EECABDAF6* >::Invoke(23 /* System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2Impl::get_SubjectName() */, __this);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = X500DistinguishedName_get_Name_m57B2708AAA2B4E15AB6F6B513D88C4468898B5A9_inline(L_0, NULL);
		return L_1;
	}
}
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2ImplUnix::get_Issuer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509Certificate2ImplUnix_get_Issuer_mD59B5CFCA2DABBDCA2B68A1FA13CD037BDEC5A35 (X509Certificate2ImplUnix_tF8DFA7FF05CC33C9010EFDCA21A827247CB8E86D* __this, const RuntimeMethod* method) 
{
	{
		X500DistinguishedName_t53976A4567E82199856DAD47D3850F8EECABDAF6* L_0;
		L_0 = VirtualFuncInvoker0< X500DistinguishedName_t53976A4567E82199856DAD47D3850F8EECABDAF6* >::Invoke(20 /* System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2Impl::get_IssuerName() */, __this);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = X500DistinguishedName_get_Name_m57B2708AAA2B4E15AB6F6B513D88C4468898B5A9_inline(L_0, NULL);
		return L_1;
	}
}
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2ImplUnix::get_RawData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* X509Certificate2ImplUnix_get_RawData_m113719E0C35A6A4917249A7F94D9146563ED6713 (X509Certificate2ImplUnix_tF8DFA7FF05CC33C9010EFDCA21A827247CB8E86D* __this, const RuntimeMethod* method) 
{
	{
		X509Certificate2ImplUnix_EnsureCertData_m4BD3C65CDE138D7239A18652543C7A93BFDD4E62(__this, NULL);
		CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1* L_0 = (&__this->___certData_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0->___RawData_0;
		return L_1;
	}
}
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2ImplUnix::get_Thumbprint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* X509Certificate2ImplUnix_get_Thumbprint_m493D3178B247696830F366F95EDEEF7619D7A174 (X509Certificate2ImplUnix_tF8DFA7FF05CC33C9010EFDCA21A827247CB8E86D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		X509Certificate2ImplUnix_EnsureCertData_m4BD3C65CDE138D7239A18652543C7A93BFDD4E62(__this, NULL);
		SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* L_0;
		L_0 = SHA1_Create_m10D40BE4E0A3737F58EB3B7D21B3EB53964BB042(NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0020:
			{// begin finally (depth: 1)
				{
					SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0029;
					}
				}
				{
					SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0029:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* L_3 = V_0;
			CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1* L_4 = (&__this->___certData_1);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_4->___RawData_0;
			NullCheck(L_3);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
			L_6 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_3, L_5, NULL);
			V_1 = L_6;
			goto IL_002a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_1;
		return L_7;
	}
}
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2ImplUnix::GetNameInfo(System.Security.Cryptography.X509Certificates.X509NameType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509Certificate2ImplUnix_GetNameInfo_m9F4BB6FBEE9CD1465008C26862D4C69854FAD653 (X509Certificate2ImplUnix_tF8DFA7FF05CC33C9010EFDCA21A827247CB8E86D* __this, int32_t ___0_nameType, bool ___1_forIssuer, const RuntimeMethod* method) 
{
	{
		X509Certificate2ImplUnix_EnsureCertData_m4BD3C65CDE138D7239A18652543C7A93BFDD4E62(__this, NULL);
		CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1* L_0 = (&__this->___certData_1);
		int32_t L_1 = ___0_nameType;
		bool L_2 = ___1_forIssuer;
		String_t* L_3;
		L_3 = CertificateData_GetNameInfo_m8DC5068DE35A32AC641DCBA45C409D05C4CE9D72(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Security.Cryptography.X509Certificates.X509Extension> System.Security.Cryptography.X509Certificates.X509Certificate2ImplUnix::get_Extensions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* X509Certificate2ImplUnix_get_Extensions_m216C3BA296F656BC33797000BAD6B06DD871AF3F (X509Certificate2ImplUnix_tF8DFA7FF05CC33C9010EFDCA21A827247CB8E86D* __this, const RuntimeMethod* method) 
{
	{
		X509Certificate2ImplUnix_EnsureCertData_m4BD3C65CDE138D7239A18652543C7A93BFDD4E62(__this, NULL);
		CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1* L_0 = (&__this->___certData_1);
		List_1_t03551104C97124C9D83186EEB3F066B8BFFD87E3* L_1 = L_0->___Extensions_13;
		return L_1;
	}
}
// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2ImplUnix::get_NotAfter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D X509Certificate2ImplUnix_get_NotAfter_mC7CE817FB14A0858D6FF56B92BEB9C62A54E3709 (X509Certificate2ImplUnix_tF8DFA7FF05CC33C9010EFDCA21A827247CB8E86D* __this, const RuntimeMethod* method) 
{
	{
		X509Certificate2ImplUnix_EnsureCertData_m4BD3C65CDE138D7239A18652543C7A93BFDD4E62(__this, NULL);
		CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1* L_0 = (&__this->___certData_1);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_1 = (&L_0->___NotAfter_7);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		L_2 = DateTime_ToLocalTime_mD87626169251A26AF699DAE90A1C31190AD30B94(L_1, NULL);
		return L_2;
	}
}
// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2ImplUnix::get_NotBefore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D X509Certificate2ImplUnix_get_NotBefore_mD0D40AAD63C151332B3A3F50B7856BAAE0D2A313 (X509Certificate2ImplUnix_tF8DFA7FF05CC33C9010EFDCA21A827247CB8E86D* __this, const RuntimeMethod* method) 
{
	{
		X509Certificate2ImplUnix_EnsureCertData_m4BD3C65CDE138D7239A18652543C7A93BFDD4E62(__this, NULL);
		CertificateData_t40A99242A632202B3115D05913ED12CAA78F65B1* L_0 = (&__this->___certData_1);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_1 = (&L_0->___NotBefore_6);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2;
		L_2 = DateTime_ToLocalTime_mD87626169251A26AF699DAE90A1C31190AD30B94(L_1, NULL);
		return L_2;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplUnix::AppendPrivateKeyInfo(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Certificate2ImplUnix_AppendPrivateKeyInfo_m0A248F4E075D601150745C99FAA3DE8131A52FDF (X509Certificate2ImplUnix_tF8DFA7FF05CC33C9010EFDCA21A827247CB8E86D* __this, StringBuilder_t* ___0_sb, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral056D86C00DCC9B50BC4439477A2268822E0C9095);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(17 /* System.Boolean System.Security.Cryptography.X509Certificates.X509CertificateImpl::get_HasPrivateKey() */, __this);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		StringBuilder_t* L_1 = ___0_sb;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E(L_1, NULL);
		StringBuilder_t* L_3 = ___0_sb;
		NullCheck(L_3);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E(L_3, NULL);
		StringBuilder_t* L_5 = ___0_sb;
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_5, _stringLiteral056D86C00DCC9B50BC4439477A2268822E0C9095, NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2ImplUnix::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Certificate2ImplUnix__ctor_mF3392E6B555FBA22CBDC93DF0C53479586EBF327 (X509Certificate2ImplUnix_tF8DFA7FF05CC33C9010EFDCA21A827247CB8E86D* __this, const RuntimeMethod* method) 
{
	{
		X509Certificate2Impl__ctor_mE6FF68AD589010E57C86555935DB601680AC1839(__this, NULL);
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
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CertificateCollection__ctor_m237A27DC157785FBC50EBAF3562AAF0907BF97EB (X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* __this, const RuntimeMethod* method) 
{
	{
		CollectionBase__ctor_m9AB03A7692AA8F78FA5519ACA74FF3FA2F9520BC(__this, NULL);
		return;
	}
}
// System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Cryptography.X509Certificates.X509CertificateCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* X509CertificateCollection_get_Item_m9EC79D4B62FB412278F92F3641969385252F6572 (X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0;
		L_0 = CollectionBase_get_InnerList_mD37144662A9045A5CA82681C265719733934DEAB_inline(__this, NULL);
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(27 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		return ((X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*)CastclassClass((RuntimeObject*)L_2, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4_il2cpp_TypeInfo_var));
	}
}
// System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator System.Security.Cryptography.X509Certificates.X509CertificateCollection::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509CertificateEnumerator_t6629E2BB0FB5D92B2EB502312B764686BAFDF0D9* X509CertificateCollection_GetEnumerator_mBD26239EE292204789D87CA73DBA5C898C2F4F14 (X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509CertificateEnumerator_t6629E2BB0FB5D92B2EB502312B764686BAFDF0D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509CertificateEnumerator_t6629E2BB0FB5D92B2EB502312B764686BAFDF0D9* L_0 = (X509CertificateEnumerator_t6629E2BB0FB5D92B2EB502312B764686BAFDF0D9*)il2cpp_codegen_object_new(X509CertificateEnumerator_t6629E2BB0FB5D92B2EB502312B764686BAFDF0D9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		X509CertificateEnumerator__ctor_m7FEB0CE4B71CB9CE860AAF29554279392249D237(L_0, __this, NULL);
		return L_0;
	}
}
// System.Int32 System.Security.Cryptography.X509Certificates.X509CertificateCollection::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509CertificateCollection_GetHashCode_m3F1BB9203AB722A6A9CF574390B0244F47485111 (X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* __this, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0;
		L_0 = CollectionBase_get_InnerList_mD37144662A9045A5CA82681C265719733934DEAB_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
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
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::.ctor(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CertificateEnumerator__ctor_m7FEB0CE4B71CB9CE860AAF29554279392249D237 (X509CertificateEnumerator_t6629E2BB0FB5D92B2EB502312B764686BAFDF0D9* __this, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___0_mappings, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_0 = ___0_mappings;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_0);
		__this->___enumerator_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_0), (void*)L_1);
		return;
	}
}
// System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* X509CertificateEnumerator_get_Current_mF256C5D7194A99B5C567F6E62806C153DA8864F1 (X509CertificateEnumerator_t6629E2BB0FB5D92B2EB502312B764686BAFDF0D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_0);
		return ((X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4*)CastclassClass((RuntimeObject*)L_1, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4_il2cpp_TypeInfo_var));
	}
}
// System.Object System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* X509CertificateEnumerator_System_Collections_IEnumerator_get_Current_mBBB3E8D212FD598C9C90F880D31B8227852F5075 (X509CertificateEnumerator_t6629E2BB0FB5D92B2EB502312B764686BAFDF0D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509CertificateEnumerator_System_Collections_IEnumerator_MoveNext_m297DB4F7F1CB60E4B3E0BB2BBF1B80279E5E6936 (X509CertificateEnumerator_t6629E2BB0FB5D92B2EB502312B764686BAFDF0D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CertificateEnumerator_System_Collections_IEnumerator_Reset_mC0D277DD2410455AE4EBCC14C4258F5F5F8677CC (X509CertificateEnumerator_t6629E2BB0FB5D92B2EB502312B764686BAFDF0D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator_0;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Boolean System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509CertificateEnumerator_MoveNext_m2DCBF7B544E0E410B90DF3FD96B473B11A37E8DA (X509CertificateEnumerator_t6629E2BB0FB5D92B2EB502312B764686BAFDF0D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_0);
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
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CertificateImplCollection__ctor_m9A1E10EE2FC833E8F8C938A91AD907BC437452E2 (X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA46E7ABD24DB39F8B033217C3D1E60F24FF01C66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC* L_0 = (List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC*)il2cpp_codegen_object_new(List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mA46E7ABD24DB39F8B033217C3D1E60F24FF01C66(L_0, List_1__ctor_mA46E7ABD24DB39F8B033217C3D1E60F24FF01C66_RuntimeMethod_var);
		__this->___list_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___list_0), (void*)L_0);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::.ctor(System.Security.Cryptography.X509Certificates.X509CertificateImplCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CertificateImplCollection__ctor_mC7C4FAB75F44B53B8FE8D9CA3443F1411CD0BA11 (X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098* __this, X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF2F81B27137A7641D3B4452C12BE24CB3EAB9EE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m217A518B7184D37D2D3F09F20CCB95E336B4A925_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6989325883A9638A05539FF349699DD229F1BFC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m10CC2722143C1DC7B95D477A55FECA1E623DEC22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mFE648B06B9E2D79024C2451DCF73EF57FD5EBA90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA46E7ABD24DB39F8B033217C3D1E60F24FF01C66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tF4CDD4C302133A0B789C3FF957DFC0C461B604AF V_0;
	memset((&V_0), 0, sizeof(V_0));
	X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF* V_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC* L_0 = (List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC*)il2cpp_codegen_object_new(List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mA46E7ABD24DB39F8B033217C3D1E60F24FF01C66(L_0, List_1__ctor_mA46E7ABD24DB39F8B033217C3D1E60F24FF01C66_RuntimeMethod_var);
		__this->___list_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___list_0), (void*)L_0);
		X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098* L_1 = ___0_other;
		NullCheck(L_1);
		List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC* L_2 = L_1->___list_0;
		NullCheck(L_2);
		Enumerator_tF4CDD4C302133A0B789C3FF957DFC0C461B604AF L_3;
		L_3 = List_1_GetEnumerator_mFE648B06B9E2D79024C2451DCF73EF57FD5EBA90(L_2, List_1_GetEnumerator_mFE648B06B9E2D79024C2451DCF73EF57FD5EBA90_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0043:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mF2F81B27137A7641D3B4452C12BE24CB3EAB9EE2((&V_0), Enumerator_Dispose_mF2F81B27137A7641D3B4452C12BE24CB3EAB9EE2_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0038_1;
			}

IL_001f_1:
			{
				X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF* L_4;
				L_4 = Enumerator_get_Current_m6989325883A9638A05539FF349699DD229F1BFC0_inline((&V_0), Enumerator_get_Current_m6989325883A9638A05539FF349699DD229F1BFC0_RuntimeMethod_var);
				V_1 = L_4;
				List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC* L_5 = __this->___list_0;
				X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF* L_6 = V_1;
				NullCheck(L_6);
				X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF* L_7;
				L_7 = VirtualFuncInvoker0< X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF* >::Invoke(6 /* System.Security.Cryptography.X509Certificates.X509CertificateImpl System.Security.Cryptography.X509Certificates.X509CertificateImpl::Clone() */, L_6);
				NullCheck(L_5);
				List_1_Add_m10CC2722143C1DC7B95D477A55FECA1E623DEC22_inline(L_5, L_7, List_1_Add_m10CC2722143C1DC7B95D477A55FECA1E623DEC22_RuntimeMethod_var);
			}

IL_0038_1:
			{
				bool L_8;
				L_8 = Enumerator_MoveNext_m217A518B7184D37D2D3F09F20CCB95E336B4A925((&V_0), Enumerator_MoveNext_m217A518B7184D37D2D3F09F20CCB95E336B4A925_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_001f_1;
				}
			}
			{
				goto IL_0051;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0051:
	{
		return;
	}
}
// System.Int32 System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509CertificateImplCollection_get_Count_mB81B621804D7FB640FDD4177610CEEDF0484378D (X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1DA18D48815EEF38EBDCE6B843686E75B71C9FD0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC* L_0 = __this->___list_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m1DA18D48815EEF38EBDCE6B843686E75B71C9FD0_inline(L_0, List_1_get_Count_m1DA18D48815EEF38EBDCE6B843686E75B71C9FD0_RuntimeMethod_var);
		return L_1;
	}
}
// System.Security.Cryptography.X509Certificates.X509CertificateImpl System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF* X509CertificateImplCollection_get_Item_mA250EDFA1ACBE344A52C5CD818A6578CC07763A1 (X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m5F8FB8F5A9B5BC41A0FCFB9E7F042B66B66A428B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC* L_0 = __this->___list_0;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF* L_2;
		L_2 = List_1_get_Item_m5F8FB8F5A9B5BC41A0FCFB9E7F042B66B66A428B(L_0, L_1, List_1_get_Item_m5F8FB8F5A9B5BC41A0FCFB9E7F042B66B66A428B_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::Add(System.Security.Cryptography.X509Certificates.X509CertificateImpl,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CertificateImplCollection_Add_mDF2DF7D94CEB84BCCC7292831C838FCDB1322B8C (X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098* __this, X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF* ___0_impl, bool ___1_takeOwnership, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m10CC2722143C1DC7B95D477A55FECA1E623DEC22_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___1_takeOwnership;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF* L_1 = ___0_impl;
		NullCheck(L_1);
		X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF* L_2;
		L_2 = VirtualFuncInvoker0< X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF* >::Invoke(6 /* System.Security.Cryptography.X509Certificates.X509CertificateImpl System.Security.Cryptography.X509Certificates.X509CertificateImpl::Clone() */, L_1);
		___0_impl = L_2;
	}

IL_000b:
	{
		List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC* L_3 = __this->___list_0;
		X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF* L_4 = ___0_impl;
		NullCheck(L_3);
		List_1_Add_m10CC2722143C1DC7B95D477A55FECA1E623DEC22_inline(L_3, L_4, List_1_Add_m10CC2722143C1DC7B95D477A55FECA1E623DEC22_RuntimeMethod_var);
		return;
	}
}
// System.Security.Cryptography.X509Certificates.X509CertificateImplCollection System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098* X509CertificateImplCollection_Clone_m2AC54E741E6AB673D07464C05D27A3FF9F4112B0 (X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098* L_0 = (X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098*)il2cpp_codegen_object_new(X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		X509CertificateImplCollection__ctor_mC7C4FAB75F44B53B8FE8D9CA3443F1411CD0BA11(L_0, __this, NULL);
		return L_0;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CertificateImplCollection_Dispose_m84BFDFFCD3B9DEC80EAFEBBFD156F1E246DBA617 (X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::Dispose(System.Boolean) */, __this, (bool)1);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CertificateImplCollection_Dispose_m77FC31F821A4066580E5F99685EB915466F034AC (X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF2F81B27137A7641D3B4452C12BE24CB3EAB9EE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m217A518B7184D37D2D3F09F20CCB95E336B4A925_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6989325883A9638A05539FF349699DD229F1BFC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mB9337DA08797552E15D8A3F77F1572319A78CFC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mFE648B06B9E2D79024C2451DCF73EF57FD5EBA90_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tF4CDD4C302133A0B789C3FF957DFC0C461B604AF V_0;
	memset((&V_0), 0, sizeof(V_0));
	X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC* L_0 = __this->___list_0;
		NullCheck(L_0);
		Enumerator_tF4CDD4C302133A0B789C3FF957DFC0C461B604AF L_1;
		L_1 = List_1_GetEnumerator_mFE648B06B9E2D79024C2451DCF73EF57FD5EBA90(L_0, List_1_GetEnumerator_mFE648B06B9E2D79024C2451DCF73EF57FD5EBA90_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mF2F81B27137A7641D3B4452C12BE24CB3EAB9EE2((&V_0), Enumerator_Dispose_mF2F81B27137A7641D3B4452C12BE24CB3EAB9EE2_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0021_1;
			}

IL_000e_1:
			{
				X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF* L_2;
				L_2 = Enumerator_get_Current_m6989325883A9638A05539FF349699DD229F1BFC0_inline((&V_0), Enumerator_get_Current_m6989325883A9638A05539FF349699DD229F1BFC0_RuntimeMethod_var);
				V_1 = L_2;
			}
			try
			{// begin try (depth: 2)
				X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF* L_3 = V_1;
				NullCheck(L_3);
				X509CertificateImpl_Dispose_mDC516A5BF712329AC6C12CCF08F41C438EA0A4D5(L_3, NULL);
				goto IL_0021_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_001e_1;
				}
				throw e;
			}

CATCH_001e_1:
			{// begin catch(System.Object)
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0021_1;
			}// end catch (depth: 2)

IL_0021_1:
			{
				bool L_4;
				L_4 = Enumerator_MoveNext_m217A518B7184D37D2D3F09F20CCB95E336B4A925((&V_0), Enumerator_MoveNext_m217A518B7184D37D2D3F09F20CCB95E336B4A925_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_003a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		List_1_tD4F904CB63AD4CA50117201EDE2856DC5320DADC* L_5 = __this->___list_0;
		NullCheck(L_5);
		List_1_Clear_mB9337DA08797552E15D8A3F77F1572319A78CFC6_inline(L_5, List_1_Clear_mB9337DA08797552E15D8A3F77F1572319A78CFC6_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CertificateImplCollection_Finalize_mE46191767109F329A19BBD0CC4BC1AA6E2C28A95 (X509CertificateImplCollection_t9F73F6038DB8173EAFCD920EF434BF5B68FFB098* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			VirtualActionInvoker1< bool >::Invoke(5 /* System.Void System.Security.Cryptography.X509Certificates.X509CertificateImplCollection::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_0010;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0010:
	{
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
// System.Security.Cryptography.X509Certificates.X509ChainImpl System.Security.Cryptography.X509Certificates.X509Chain::get_Impl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* X509Chain_get_Impl_m4B712BC99067069BCE090957082F5FE17EE237A6 (X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* __this, const RuntimeMethod* method) 
{
	{
		X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* L_0 = __this->___impl_0;
		X509Helper2_ThrowIfContextInvalid_mB6E09D4292818B28DC4FA6BA9695006B0B0119C8(L_0, NULL);
		X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* L_1 = __this->___impl_0;
		return L_1;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Chain__ctor_mE938759A3C3CA007FB171DDD375312F03394D3F6 (X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* __this, const RuntimeMethod* method) 
{
	{
		X509Chain__ctor_mF765A0057950154FC61FF1D112A8EFCB73314EC4(__this, (bool)0, NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Chain__ctor_mF765A0057950154FC61FF1D112A8EFCB73314EC4 (X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* __this, bool ___0_useMachineContext, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		bool L_0 = ___0_useMachineContext;
		X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* L_1;
		L_1 = X509Helper2_CreateChainImpl_m37D8C8E930B60BDF04C0E5ED0A6D279C959A8A7D(L_0, NULL);
		__this->___impl_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___impl_0), (void*)L_1);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor(System.Security.Cryptography.X509Certificates.X509ChainImpl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Chain__ctor_m6F2404400D7192FDA4CCB37DC67F18F12616000B (X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* __this, X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* ___0_impl, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* L_0 = ___0_impl;
		X509Helper2_ThrowIfContextInvalid_mB6E09D4292818B28DC4FA6BA9695006B0B0119C8(L_0, NULL);
		X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* L_1 = ___0_impl;
		__this->___impl_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___impl_0), (void*)L_1);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Chain__ctor_m2B6C93313DDBB62BE6E2AE073958B7662C5FBB7D (X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* __this, intptr_t ___0_chainContext, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509Chain__ctor_m2B6C93313DDBB62BE6E2AE073958B7662C5FBB7D_RuntimeMethod_var)));
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Chain_Dispose_mC10F7CE7DAF0799F13C798184330C046222E305D (X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void System.Security.Cryptography.X509Certificates.X509Chain::Dispose(System.Boolean) */, __this, (bool)1);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Chain_Dispose_m24B2B8C5A29F06A8A1F8564EB0B39820616B3930 (X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	{
		X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* L_0 = __this->___impl_0;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* L_1 = __this->___impl_0;
		NullCheck(L_1);
		X509ChainImpl_Dispose_mB7A6D60B308E90F0173FA8160F7FF0A00709A25A(L_1, NULL);
		__this->___impl_0 = (X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___impl_0), (void*)(X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F*)NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Chain_Finalize_m76B5ABE85F3D5596788618FFD03C4831DB0EDB39 (X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			VirtualActionInvoker1< bool >::Invoke(5 /* System.Void System.Security.Cryptography.X509Certificates.X509Chain::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_0010;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0010:
	{
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
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainElementCollection__ctor_mAEF26718ED02C8480A7041E3C6B66500950E013D (X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80(L_0, NULL);
		__this->____list_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____list_0), (void*)L_0);
		return;
	}
}
// System.Int32 System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509ChainElementCollection_get_Count_m5448D972C3009FA67B3F4E13061B6012D561B78B (X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D* __this, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____list_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509ChainElementCollection_get_IsSynchronized_m0519DC8E0939EB1DC9DC437CA3BC9BB3C2C0FF11 (X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D* __this, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____list_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Collections.ArrayList::get_IsSynchronized() */, L_0);
		return L_1;
	}
}
// System.Object System.Security.Cryptography.X509Certificates.X509ChainElementCollection::get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* X509ChainElementCollection_get_SyncRoot_m435D18A280E3D7609FB490021AC2E1436BE61568 (X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D* __this, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____list_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(26 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_0);
		return L_1;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainElementCollection_System_Collections_ICollection_CopyTo_m4909BF1B409D795DDD3D8D2206FA17B88AEA5B29 (X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____list_0;
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		VirtualActionInvoker2< RuntimeArray*, int32_t >::Invoke(34 /* System.Void System.Collections.ArrayList::CopyTo(System.Array,System.Int32) */, L_0, L_1, L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509ChainElementCollection::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* X509ChainElementCollection_System_Collections_IEnumerable_GetEnumerator_m25F89A23A06D302469D28DDA337A0B0C5C463269 (X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509ChainElementEnumerator_tE4033654D4E19B54FE64143E10BCB1775B57BD6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____list_0;
		X509ChainElementEnumerator_tE4033654D4E19B54FE64143E10BCB1775B57BD6D* L_1 = (X509ChainElementEnumerator_tE4033654D4E19B54FE64143E10BCB1775B57BD6D*)il2cpp_codegen_object_new(X509ChainElementEnumerator_tE4033654D4E19B54FE64143E10BCB1775B57BD6D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		X509ChainElementEnumerator__ctor_m552B42A7693729672B7EF7F95B4211F6BD69AE6D(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementCollection::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainElementCollection_Clear_mF0C2AE76F73C525E29E808615576C7EE11409659 (X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D* __this, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____list_0;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(31 /* System.Void System.Collections.ArrayList::Clear() */, L_0);
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
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::.ctor(System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainElementEnumerator__ctor_m552B42A7693729672B7EF7F95B4211F6BD69AE6D (X509ChainElementEnumerator_tE4033654D4E19B54FE64143E10BCB1775B57BD6D* __this, RuntimeObject* ___0_enumerable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_enumerable;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_0);
		__this->___enumerator_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_0), (void*)L_1);
		return;
	}
}
// System.Object System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* X509ChainElementEnumerator_System_Collections_IEnumerator_get_Current_mCE2DFBF81D34976171E7A936A04F87C0A625B025 (X509ChainElementEnumerator_tE4033654D4E19B54FE64143E10BCB1775B57BD6D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509ChainElementEnumerator_MoveNext_mA8C7DDBB648F9B1F15FA3E169D4361374BE2B995 (X509ChainElementEnumerator_tE4033654D4E19B54FE64143E10BCB1775B57BD6D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainElementEnumerator_Reset_m4E0A51B45009F95A6E9B64C15F87CC9E48444A40 (X509ChainElementEnumerator_tE4033654D4E19B54FE64143E10BCB1775B57BD6D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator_0;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_0);
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
// System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::ThrowIfContextInvalid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainImpl_ThrowIfContextInvalid_m85AF480D1B87D8DA3D780040385CBB88D9B173CD (X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Security.Cryptography.X509Certificates.X509ChainImpl::get_IsValid() */, __this);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t* L_1;
		L_1 = X509Helper2_GetInvalidChainContextException_m9C124C1AD37A16B10C791BB76505016059EFC9C5(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509ChainImpl_ThrowIfContextInvalid_m85AF480D1B87D8DA3D780040385CBB88D9B173CD_RuntimeMethod_var)));
	}

IL_000e:
	{
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainImpl_Dispose_mB7A6D60B308E90F0173FA8160F7FF0A00709A25A (X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualActionInvoker1< bool >::Invoke(8 /* System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::Dispose(System.Boolean) */, __this, (bool)1);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainImpl_Dispose_m9F8B96FFCB317F7F8C8E1ACA82061EA7404B732D (X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainImpl_Finalize_mB70B742567D0E59AE522AA9F80800B308D87BC6F (X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			VirtualActionInvoker1< bool >::Invoke(8 /* System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_0010;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0010:
	{
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509ChainImpl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainImpl__ctor_m16F671EB135FB6E7E3CF6C42715D7106E6FAAF18 (X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* __this, const RuntimeMethod* method) 
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
// System.Void System.Security.Cryptography.X509Certificates.X509ChainImplMono::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainImplMono__ctor_m0ACF8D6927E705577989597DAAF5CFE6346B1A76 (X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D* __this, bool ___0_useMachineContext, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509ChainPolicy_t34F49B4067492A1E5F91DD91FA7C934B68D880EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D* G_B2_0 = NULL;
	X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D* G_B3_1 = NULL;
	{
		X509ChainImpl__ctor_m16F671EB135FB6E7E3CF6C42715D7106E6FAAF18(__this, NULL);
		bool L_0 = ___0_useMachineContext;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_000e;
	}

IL_000d:
	{
		G_B3_0 = 2;
		G_B3_1 = G_B2_0;
	}

IL_000e:
	{
		NullCheck(G_B3_1);
		G_B3_1->___location_0 = G_B3_0;
		X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D* L_1 = (X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D*)il2cpp_codegen_object_new(X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		X509ChainElementCollection__ctor_mAEF26718ED02C8480A7041E3C6B66500950E013D(L_1, NULL);
		__this->___elements_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___elements_1), (void*)L_1);
		X509ChainPolicy_t34F49B4067492A1E5F91DD91FA7C934B68D880EC* L_2 = (X509ChainPolicy_t34F49B4067492A1E5F91DD91FA7C934B68D880EC*)il2cpp_codegen_object_new(X509ChainPolicy_t34F49B4067492A1E5F91DD91FA7C934B68D880EC_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		X509ChainPolicy__ctor_m069F83BFFF3E79ED4CEBE8CF553CC65576F8D3D9(L_2, NULL);
		__this->___policy_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___policy_2), (void*)L_2);
		return;
	}
}
// System.Boolean System.Security.Cryptography.X509Certificates.X509ChainImplMono::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509ChainImplMono_get_IsValid_m1140F06D0030BA5A55753B46FF61AE846B845F54 (X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509ChainImplMono::AddStatus(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainImplMono_AddStatus_mA336CCFEEB670FDF921E26F14C7CF32021A7D838 (X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D* __this, int32_t ___0_error, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509ChainImplMono::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainImplMono_Reset_m1155C3B608B1BCEE6F5BD6351A3D63013F1CB292 (X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D* __this, const RuntimeMethod* method) 
{
	{
		X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299* L_0 = __this->___status_3;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299* L_1 = __this->___status_3;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0018;
		}
	}
	{
		__this->___status_3 = (X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___status_3), (void*)(X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299*)NULL);
	}

IL_0018:
	{
		X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D* L_2 = __this->___elements_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = X509ChainElementCollection_get_Count_m5448D972C3009FA67B3F4E13061B6012D561B78B(L_2, NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		X509ChainElementCollection_t543DE35924C12A624ADA5111F7F47C1F9F99E70D* L_4 = __this->___elements_1;
		NullCheck(L_4);
		X509ChainElementCollection_Clear_mF0C2AE76F73C525E29E808615576C7EE11409659(L_4, NULL);
	}

IL_0031:
	{
		X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* L_5 = __this->___user_root_store_11;
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* L_6 = __this->___user_root_store_11;
		NullCheck(L_6);
		X509Store_Close_mE444AB5FE15C355E4EF9369E7EB5F78F345320F0(L_6, NULL);
		__this->___user_root_store_11 = (X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___user_root_store_11), (void*)(X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6*)NULL);
	}

IL_004b:
	{
		X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* L_7 = __this->___root_store_9;
		if (!L_7)
		{
			goto IL_0065;
		}
	}
	{
		X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* L_8 = __this->___root_store_9;
		NullCheck(L_8);
		X509Store_Close_mE444AB5FE15C355E4EF9369E7EB5F78F345320F0(L_8, NULL);
		__this->___root_store_9 = (X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___root_store_9), (void*)(X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6*)NULL);
	}

IL_0065:
	{
		X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* L_9 = __this->___user_ca_store_12;
		if (!L_9)
		{
			goto IL_007f;
		}
	}
	{
		X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* L_10 = __this->___user_ca_store_12;
		NullCheck(L_10);
		X509Store_Close_mE444AB5FE15C355E4EF9369E7EB5F78F345320F0(L_10, NULL);
		__this->___user_ca_store_12 = (X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___user_ca_store_12), (void*)(X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6*)NULL);
	}

IL_007f:
	{
		X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* L_11 = __this->___ca_store_10;
		if (!L_11)
		{
			goto IL_0099;
		}
	}
	{
		X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* L_12 = __this->___ca_store_10;
		NullCheck(L_12);
		X509Store_Close_mE444AB5FE15C355E4EF9369E7EB5F78F345320F0(L_12, NULL);
		__this->___ca_store_10 = (X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ca_store_10), (void*)(X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6*)NULL);
	}

IL_0099:
	{
		__this->___roots_7 = (X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___roots_7), (void*)(X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB*)NULL);
		__this->___cas_8 = (X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cas_8), (void*)(X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB*)NULL);
		__this->___collection_13 = (X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___collection_13), (void*)(X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB*)NULL);
		__this->___bce_restriction_6 = (X509ChainElement_t95FFAD3F504A1CA731ECCBA88C5CB3B0EE28786D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bce_restriction_6), (void*)(X509ChainElement_t95FFAD3F504A1CA731ECCBA88C5CB3B0EE28786D*)NULL);
		__this->___working_public_key_5 = (AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___working_public_key_5), (void*)(AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8*)NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509ChainImplMono::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainImplMono__cctor_m84D1A5168CDA3C59F5D72648F13A63B0B2BA1A2C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299* L_0 = (X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299*)(X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299*)SZArrayNew(X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299_il2cpp_TypeInfo_var, (uint32_t)0);
		((X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D_StaticFields*)il2cpp_codegen_static_fields_for(X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D_il2cpp_TypeInfo_var))->___Empty_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D_StaticFields*)il2cpp_codegen_static_fields_for(X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D_il2cpp_TypeInfo_var))->___Empty_4), (void*)L_0);
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
// System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainPolicy__ctor_m069F83BFFF3E79ED4CEBE8CF553CC65576F8D3D9 (X509ChainPolicy_t34F49B4067492A1E5F91DD91FA7C934B68D880EC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		X509ChainPolicy_Reset_mEE02175020B69CE1732C0E89A2AE60F0BA5B1417(__this, NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainPolicy_Reset_mEE02175020B69CE1732C0E89A2AE60F0BA5B1417 (X509ChainPolicy_t34F49B4067492A1E5F91DD91FA7C934B68D880EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* L_0 = (OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3*)il2cpp_codegen_object_new(OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		OidCollection__ctor_m9B8C252AE048962DAD7419597007ABA2793F9D98(L_0, NULL);
		__this->___apps_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___apps_0), (void*)L_0);
		OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* L_1 = (OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3*)il2cpp_codegen_object_new(OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		OidCollection__ctor_m9B8C252AE048962DAD7419597007ABA2793F9D98(L_1, NULL);
		__this->___cert_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cert_1), (void*)L_1);
		__this->___store2_2 = (X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___store2_2), (void*)(X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB*)NULL);
		__this->___rflag_3 = 2;
		__this->___mode_4 = 1;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2 = ((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var))->___Zero_19;
		__this->___timeout_5 = L_2;
		__this->___vflags_6 = 0;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3;
		L_3 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		__this->___vtime_7 = L_3;
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
// Conversion methods for marshalling of: System.Security.Cryptography.X509Certificates.X509ChainStatus
IL2CPP_EXTERN_C void X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshal_pinvoke(const X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D& unmarshaled, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_pinvoke& marshaled)
{
	marshaled.___status_0 = unmarshaled.___status_0;
	marshaled.___info_1 = il2cpp_codegen_marshal_string(unmarshaled.___info_1);
}
IL2CPP_EXTERN_C void X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshal_pinvoke_back(const X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_pinvoke& marshaled, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D& unmarshaled)
{
	int32_t unmarshaledstatus_temp_0 = 0;
	unmarshaledstatus_temp_0 = marshaled.___status_0;
	unmarshaled.___status_0 = unmarshaledstatus_temp_0;
	unmarshaled.___info_1 = il2cpp_codegen_marshal_string_result(marshaled.___info_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___info_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___info_1));
}
// Conversion method for clean up from marshalling of: System.Security.Cryptography.X509Certificates.X509ChainStatus
IL2CPP_EXTERN_C void X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshal_pinvoke_cleanup(X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___info_1);
	marshaled.___info_1 = NULL;
}
// Conversion methods for marshalling of: System.Security.Cryptography.X509Certificates.X509ChainStatus
IL2CPP_EXTERN_C void X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshal_com(const X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D& unmarshaled, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_com& marshaled)
{
	marshaled.___status_0 = unmarshaled.___status_0;
	marshaled.___info_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___info_1);
}
IL2CPP_EXTERN_C void X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshal_com_back(const X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_com& marshaled, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D& unmarshaled)
{
	int32_t unmarshaledstatus_temp_0 = 0;
	unmarshaledstatus_temp_0 = marshaled.___status_0;
	unmarshaled.___status_0 = unmarshaledstatus_temp_0;
	unmarshaled.___info_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___info_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___info_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___info_1));
}
// Conversion method for clean up from marshalling of: System.Security.Cryptography.X509Certificates.X509ChainStatus
IL2CPP_EXTERN_C void X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshal_com_cleanup(X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___info_1);
	marshaled.___info_1 = NULL;
}
// System.Void System.Security.Cryptography.X509Certificates.X509ChainStatus::.ctor(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ChainStatus__ctor_m5AD96E11604F8DB96673677AC2FFF68EBA550859 (X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* __this, int32_t ___0_flag, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_flag;
		__this->___status_0 = L_0;
		int32_t L_1 = ___0_flag;
		String_t* L_2;
		L_2 = X509ChainStatus_GetInformation_m0EAE0070740CD8BB7A498614C7BF2E656D048D56(L_1, NULL);
		__this->___info_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___info_1), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void X509ChainStatus__ctor_m5AD96E11604F8DB96673677AC2FFF68EBA550859_AdjustorThunk (RuntimeObject* __this, int32_t ___0_flag, const RuntimeMethod* method)
{
	X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D*>(__this + _offset);
	X509ChainStatus__ctor_m5AD96E11604F8DB96673677AC2FFF68EBA550859(_thisAdjusted, ___0_flag, method);
}
// System.String System.Security.Cryptography.X509Certificates.X509ChainStatus::GetInformation(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509ChainStatus_GetInformation_m0EAE0070740CD8BB7A498614C7BF2E656D048D56 (int32_t ___0_flags, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509ChainStatusFlags_t57C80D7C1F4C319F6D6B9FBDEA402E3023E6C769_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_flags;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)2048))))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_1 = ___0_flags;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)64))))
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_2 = ___0_flags;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)16))))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_3 = ___0_flags;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0125;
			}
			case 1:
			{
				goto IL_0112;
			}
			case 2:
			{
				goto IL_0112;
			}
			case 3:
			{
				goto IL_0125;
			}
			case 4:
			{
				goto IL_0112;
			}
			case 5:
			{
				goto IL_0125;
			}
			case 6:
			{
				goto IL_0125;
			}
			case 7:
			{
				goto IL_0125;
			}
			case 8:
			{
				goto IL_0112;
			}
		}
	}
	{
		int32_t L_4 = ___0_flags;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)16))))
		{
			goto IL_0112;
		}
	}
	{
		goto IL_0125;
	}

IL_004c:
	{
		int32_t L_5 = ___0_flags;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)32))))
		{
			goto IL_0112;
		}
	}
	{
		int32_t L_6 = ___0_flags;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)64))))
		{
			goto IL_0112;
		}
	}
	{
		goto IL_0125;
	}

IL_0061:
	{
		int32_t L_7 = ___0_flags;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)256))))
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_8 = ___0_flags;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)128))))
		{
			goto IL_0112;
		}
	}
	{
		int32_t L_9 = ___0_flags;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)256))))
		{
			goto IL_0112;
		}
	}
	{
		goto IL_0125;
	}

IL_0084:
	{
		int32_t L_10 = ___0_flags;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)512))))
		{
			goto IL_0112;
		}
	}
	{
		int32_t L_11 = ___0_flags;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)1024))))
		{
			goto IL_0112;
		}
	}
	{
		int32_t L_12 = ___0_flags;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)2048))))
		{
			goto IL_0112;
		}
	}
	{
		goto IL_0125;
	}

IL_00a4:
	{
		int32_t L_13 = ___0_flags;
		if ((((int32_t)L_13) > ((int32_t)((int32_t)65536))))
		{
			goto IL_00e0;
		}
	}
	{
		int32_t L_14 = ___0_flags;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)8192))))
		{
			goto IL_00c6;
		}
	}
	{
		int32_t L_15 = ___0_flags;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)4096))))
		{
			goto IL_0112;
		}
	}
	{
		int32_t L_16 = ___0_flags;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)8192))))
		{
			goto IL_0112;
		}
	}
	{
		goto IL_0125;
	}

IL_00c6:
	{
		int32_t L_17 = ___0_flags;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)16384))))
		{
			goto IL_0112;
		}
	}
	{
		int32_t L_18 = ___0_flags;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)32768))))
		{
			goto IL_0112;
		}
	}
	{
		int32_t L_19 = ___0_flags;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)65536))))
		{
			goto IL_0112;
		}
	}
	{
		goto IL_0125;
	}

IL_00e0:
	{
		int32_t L_20 = ___0_flags;
		if ((((int32_t)L_20) > ((int32_t)((int32_t)262144))))
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_21 = ___0_flags;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)131072))))
		{
			goto IL_0112;
		}
	}
	{
		int32_t L_22 = ___0_flags;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)262144))))
		{
			goto IL_0112;
		}
	}
	{
		goto IL_0125;
	}

IL_00fa:
	{
		int32_t L_23 = ___0_flags;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)524288))))
		{
			goto IL_0112;
		}
	}
	{
		int32_t L_24 = ___0_flags;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)16777216))))
		{
			goto IL_0112;
		}
	}
	{
		int32_t L_25 = ___0_flags;
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)33554432)))))
		{
			goto IL_0125;
		}
	}

IL_0112:
	{
		Il2CppFakeBox<int32_t> L_26(X509ChainStatusFlags_t57C80D7C1F4C319F6D6B9FBDEA402E3023E6C769_il2cpp_TypeInfo_var, (&___0_flags));
		String_t* L_27;
		L_27 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_26), NULL);
		String_t* L_28;
		L_28 = Locale_GetText_m7BA18BC14D3028C4C4722E220800563188DA3600(L_27, NULL);
		return L_28;
	}

IL_0125:
	{
		String_t* L_29 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_29;
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
// System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509EnhancedKeyUsageExtension__ctor_m7ECF7F6EEB96855182FD5466A04B4712B3F4C746 (X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EF9E33E97E3023577871E2EA773996440F2F5F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EDC47BC71D706BB11343CC890323569C143CD50);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC(__this, NULL);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_0 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_0, _stringLiteral5EDC47BC71D706BB11343CC890323569C143CD50, _stringLiteral1EF9E33E97E3023577871E2EA773996440F2F5F9, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_0);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509EnhancedKeyUsageExtension__ctor_mBDA55EB3C6594D4F6A06102B4EAF633F86C3E092 (X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF* __this, AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ___0_encodedEnhancedKeyUsages, bool ___1_critical, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EF9E33E97E3023577871E2EA773996440F2F5F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EDC47BC71D706BB11343CC890323569C143CD50);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC(__this, NULL);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_0 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_0, _stringLiteral5EDC47BC71D706BB11343CC890323569C143CD50, _stringLiteral1EF9E33E97E3023577871E2EA773996440F2F5F9, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_0);
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_1 = ___0_encodedEnhancedKeyUsages;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(L_1, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____raw_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____raw_1), (void*)L_2);
		bool L_3 = ___1_critical;
		X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline(__this, L_3, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(__this, NULL);
		int32_t L_5;
		L_5 = X509EnhancedKeyUsageExtension_Decode_m1110DD9BD5D717540009DB5D90805458CF07423C(__this, L_4, NULL);
		__this->____status_4 = L_5;
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::.ctor(System.Security.Cryptography.OidCollection,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509EnhancedKeyUsageExtension__ctor_mE0CA01F89B6532A7E7B256F248C23B61F0A909CC (X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF* __this, OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* ___0_enhancedKeyUsages, bool ___1_critical, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EF9E33E97E3023577871E2EA773996440F2F5F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EDC47BC71D706BB11343CC890323569C143CD50);
		s_Il2CppMethodInitialized = true;
	}
	OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* V_0 = NULL;
	Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* V_1 = NULL;
	{
		X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC(__this, NULL);
		OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* L_0 = ___0_enhancedKeyUsages;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8B179EF532CBF38773A257E5F951512B4287DAF9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509EnhancedKeyUsageExtension__ctor_mE0CA01F89B6532A7E7B256F248C23B61F0A909CC_RuntimeMethod_var)));
	}

IL_0014:
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_2 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_2, _stringLiteral5EDC47BC71D706BB11343CC890323569C143CD50, _stringLiteral1EF9E33E97E3023577871E2EA773996440F2F5F9, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_2);
		bool L_3 = ___1_critical;
		X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline(__this, L_3, NULL);
		OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* L_4 = (OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3*)il2cpp_codegen_object_new(OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		OidCollection__ctor_m9B8C252AE048962DAD7419597007ABA2793F9D98(L_4, NULL);
		__this->____enhKeyUsage_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____enhKeyUsage_3), (void*)L_4);
		OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* L_5 = ___0_enhancedKeyUsages;
		NullCheck(L_5);
		OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* L_6;
		L_6 = OidCollection_GetEnumerator_mBB791F48E305B3355A1BCE624E0BB367331F82AC(L_5, NULL);
		V_0 = L_6;
		goto IL_0058;
	}

IL_0044:
	{
		OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* L_7 = V_0;
		NullCheck(L_7);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_8;
		L_8 = OidEnumerator_get_Current_mCED077699FA00ED57FA82F8B460C28B86F1B5C9F(L_7, NULL);
		V_1 = L_8;
		OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* L_9 = __this->____enhKeyUsage_3;
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11;
		L_11 = OidCollection_Add_m1D4822DF4EA0B912A1DED6AA102D41F7FAEDC8F5(L_9, L_10, NULL);
	}

IL_0058:
	{
		OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* L_12 = V_0;
		NullCheck(L_12);
		bool L_13;
		L_13 = OidEnumerator_MoveNext_mD42201944C163E81DABDE08B1535C4AB9A5778DD(L_12, NULL);
		if (L_13)
		{
			goto IL_0044;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = X509EnhancedKeyUsageExtension_Encode_mBE23AB15722B1822172F860B5F7651EA871B5550(__this, NULL);
		AsnEncodedData_set_RawData_m05F9F17765AD384ECE3A333DCBF6A0572099346B(__this, L_14, NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509EnhancedKeyUsageExtension_CopyFrom_m9577FF97B8E3074B12B7056BF7E30AA0F84309BF (X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF* __this, AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ___0_asnEncodedData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EF9E33E97E3023577871E2EA773996440F2F5F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EDC47BC71D706BB11343CC890323569C143CD50);
		s_Il2CppMethodInitialized = true;
	}
	X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* V_0 = NULL;
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_0 = ___0_asnEncodedData;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB2AED74A19DD9414DD0792FD340CC531536B8454)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509EnhancedKeyUsageExtension_CopyFrom_m9577FF97B8E3074B12B7056BF7E30AA0F84309BF_RuntimeMethod_var)));
	}

IL_000e:
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_2 = ___0_asnEncodedData;
		V_0 = ((X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5*)IsInstClass((RuntimeObject*)L_2, X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5_il2cpp_TypeInfo_var));
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_3 = V_0;
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_4;
		L_4 = Locale_GetText_m7BA18BC14D3028C4C4722E220800563188DA3600(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD615D452AAA84D559E3E5FFF5168A1AF47500E8D)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9FB8C73B342D5B3C700EDA7C5212DD547D29E4E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509EnhancedKeyUsageExtension_CopyFrom_m9577FF97B8E3074B12B7056BF7E30AA0F84309BF_RuntimeMethod_var)));
	}

IL_002d:
	{
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_6 = V_0;
		NullCheck(L_6);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_7 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)L_6)->____oid_0;
		if (L_7)
		{
			goto IL_004c;
		}
	}
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_8 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_8, _stringLiteral5EDC47BC71D706BB11343CC890323569C143CD50, _stringLiteral1EF9E33E97E3023577871E2EA773996440F2F5F9, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_8);
		goto IL_005d;
	}

IL_004c:
	{
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_9 = V_0;
		NullCheck(L_9);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_10 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)L_9)->____oid_0;
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_11 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Oid__ctor_m3973A5FE5482D45FABC8642E59B655274B0B5D59(L_11, L_10, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_11);
	}

IL_005d:
	{
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_12 = V_0;
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(L_12, NULL);
		AsnEncodedData_set_RawData_m05F9F17765AD384ECE3A333DCBF6A0572099346B(__this, L_13, NULL);
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_14 = V_0;
		NullCheck(L_14);
		bool L_15;
		L_15 = X509Extension_get_Critical_mEF827F09D95784210C2F8D5FD7BE27BB54803E35_inline(L_14, NULL);
		X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline(__this, L_15, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(__this, NULL);
		int32_t L_17;
		L_17 = X509EnhancedKeyUsageExtension_Decode_m1110DD9BD5D717540009DB5D90805458CF07423C(__this, L_16, NULL);
		__this->____status_4 = L_17;
		return;
	}
}
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509EnhancedKeyUsageExtension_Decode_m1110DD9BD5D717540009DB5D90805458CF07423C (X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_extension, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_extension;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_extension;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0009;
		}
	}

IL_0007:
	{
		return (int32_t)(1);
	}

IL_0009:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_extension;
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint8_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if ((((int32_t)L_4) == ((int32_t)((int32_t)48))))
		{
			goto IL_0012;
		}
	}
	{
		return (int32_t)(2);
	}

IL_0012:
	{
		OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* L_5 = __this->____enhKeyUsage_3;
		if (L_5)
		{
			goto IL_0025;
		}
	}
	{
		OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* L_6 = (OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3*)il2cpp_codegen_object_new(OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		OidCollection__ctor_m9B8C252AE048962DAD7419597007ABA2793F9D98(L_6, NULL);
		__this->____enhKeyUsage_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____enhKeyUsage_3), (void*)L_6);
	}

IL_0025:
	{
	}
	try
	{// begin try (depth: 1)
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_extension;
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_8 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
			NullCheck(L_8);
			ASN1__ctor_m950BFCCF44A987ACBA12142624AA222200EE503E(L_8, L_7, NULL);
			V_0 = L_8;
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_9 = V_0;
			NullCheck(L_9);
			uint8_t L_10;
			L_10 = ASN1_get_Tag_m1984CF0DDF54424E61BA3650D93CBA0DCB58F232_inline(L_9, NULL);
			if ((((int32_t)L_10) == ((int32_t)((int32_t)48))))
			{
				goto IL_0047_1;
			}
		}
		{
			String_t* L_11;
			L_11 = Locale_GetText_m7BA18BC14D3028C4C4722E220800563188DA3600(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral212797907CC7AD095EFEBD10D643DF1F9608C8C1)), NULL);
			CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_12 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
			NullCheck(L_12);
			CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_12, L_11, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509EnhancedKeyUsageExtension_Decode_m1110DD9BD5D717540009DB5D90805458CF07423C_RuntimeMethod_var)));
		}

IL_0047_1:
		{
			V_1 = 0;
			goto IL_006c_1;
		}

IL_004b_1:
		{
			OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* L_13 = __this->____enhKeyUsage_3;
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_14 = V_0;
			int32_t L_15 = V_1;
			NullCheck(L_14);
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_16;
			L_16 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_14, L_15, NULL);
			String_t* L_17;
			L_17 = ASN1Convert_ToOid_mBCE4FD3970C556190FB00A6AD409A6ABB4C627D8(L_16, NULL);
			Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_18 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
			NullCheck(L_18);
			Oid__ctor_m4AF81B9D51BED48AE505251E0874EC654BA07B72(L_18, L_17, NULL);
			NullCheck(L_13);
			int32_t L_19;
			L_19 = OidCollection_Add_m1D4822DF4EA0B912A1DED6AA102D41F7FAEDC8F5(L_13, L_18, NULL);
			int32_t L_20 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		}

IL_006c_1:
		{
			int32_t L_21 = V_1;
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_22 = V_0;
			NullCheck(L_22);
			int32_t L_23;
			L_23 = ASN1_get_Count_mBE45E73126FAD2694E9059CAC53B7AC9A5F60833(L_22, NULL);
			if ((((int32_t)L_21) < ((int32_t)L_23)))
			{
				goto IL_004b_1;
			}
		}
		{
			goto IL_007c;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0077;
		}
		throw e;
	}

CATCH_0077:
	{// begin catch(System.Object)
		V_2 = 1;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_007e;
	}// end catch (depth: 1)

IL_007c:
	{
		return (int32_t)(0);
	}

IL_007e:
	{
		int32_t L_24 = V_2;
		return L_24;
	}
}
// System.Byte[] System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::Encode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* X509EnhancedKeyUsageExtension_Encode_mBE23AB15722B1822172F860B5F7651EA871B5550 (X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_0 = NULL;
	OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* V_1 = NULL;
	Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* V_2 = NULL;
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_0 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ASN1__ctor_mA9AE2197367C1E13DBFDA67E0A383167F52CC114(L_0, (uint8_t)((int32_t)48), NULL);
		V_0 = L_0;
		OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* L_1 = __this->____enhKeyUsage_3;
		NullCheck(L_1);
		OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* L_2;
		L_2 = OidCollection_GetEnumerator_mBB791F48E305B3355A1BCE624E0BB367331F82AC(L_1, NULL);
		V_1 = L_2;
		goto IL_002f;
	}

IL_0016:
	{
		OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* L_3 = V_1;
		NullCheck(L_3);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_4;
		L_4 = OidEnumerator_get_Current_mCED077699FA00ED57FA82F8B460C28B86F1B5C9F(L_3, NULL);
		V_2 = L_4;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_5 = V_0;
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_6 = V_2;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline(L_6, NULL);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_8;
		L_8 = ASN1Convert_FromOid_mBB920E2827A66620790C5E07549D74F244735C1C(L_7, NULL);
		NullCheck(L_5);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_9;
		L_9 = ASN1_Add_m4C61487A6CCF48D5CEB0D97B248FE31F9FCD849F(L_5, L_8, NULL);
	}

IL_002f:
	{
		OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* L_10 = V_1;
		NullCheck(L_10);
		bool L_11;
		L_11 = OidEnumerator_MoveNext_mD42201944C163E81DABDE08B1535C4AB9A5778DD(L_10, NULL);
		if (L_11)
		{
			goto IL_0016;
		}
	}
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_12 = V_0;
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_12);
		return L_13;
	}
}
// System.String System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::ToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509EnhancedKeyUsageExtension_ToString_m9576793CE590716A3BB5AAC1632F946DF75605DE (X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF* __this, bool ___0_multiLine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3ECCF64C0782442EC426220868830513FD924C3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EDC47BC71D706BB11343CC890323569C143CD50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63DCC50AED43B00BB793B2D0F054171D9D12A15E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9B53FE83B364433B53BD1F5712DD31D58258FB4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7C7449D840A91B3AF035F43E6106A0BC8372CC6);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* V_3 = NULL;
	{
		int32_t L_0 = __this->____status_4;
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 1)))
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_0027;
			}
			case 3:
			{
				goto IL_0034;
			}
		}
	}
	{
		goto IL_003a;
	}

IL_0021:
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_2;
	}

IL_0027:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____raw_1;
		String_t* L_4;
		L_4 = X509Extension_FormatUnkownData_mD0463F5096A6937E95E3165048299CBA9A1A6F7D(__this, L_3, NULL);
		return L_4;
	}

IL_0034:
	{
		return _stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B;
	}

IL_003a:
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_5 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline(L_5, NULL);
		bool L_7;
		L_7 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_6, _stringLiteral5EDC47BC71D706BB11343CC890323569C143CD50, NULL);
		if (!L_7)
		{
			goto IL_0067;
		}
	}
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_8 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline(L_8, NULL);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralD9B53FE83B364433B53BD1F5712DD31D58258FB4, L_9, NULL);
		return L_10;
	}

IL_0067:
	{
		OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* L_11 = __this->____enhKeyUsage_3;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = OidCollection_get_Count_m9560D70809087591935904924A15FBEC1FEFEB11(L_11, NULL);
		if (L_12)
		{
			goto IL_007a;
		}
	}
	{
		return _stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B;
	}

IL_007a:
	{
		StringBuilder_t* L_13 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_13, NULL);
		V_0 = L_13;
		V_2 = 0;
		goto IL_010a;
	}

IL_0087:
	{
		OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* L_14 = __this->____enhKeyUsage_3;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_16;
		L_16 = OidCollection_get_Item_m0AEC71C746E735035A05C50EE2721C1E8FE08F7A(L_14, L_15, NULL);
		V_3 = L_16;
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_17 = V_3;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline(L_17, NULL);
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralE7C7449D840A91B3AF035F43E6106A0BC8372CC6, NULL);
		if (!L_19)
		{
			goto IL_00b4;
		}
	}
	{
		StringBuilder_t* L_20 = V_0;
		NullCheck(L_20);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_20, _stringLiteral63DCC50AED43B00BB793B2D0F054171D9D12A15E, NULL);
		goto IL_00c0;
	}

IL_00b4:
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_22, _stringLiteral3ECCF64C0782442EC426220868830513FD924C3C, NULL);
	}

IL_00c0:
	{
		StringBuilder_t* L_24 = V_0;
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_25 = V_3;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline(L_25, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_26, NULL);
		StringBuilder_t* L_28 = V_0;
		NullCheck(L_28);
		StringBuilder_t* L_29;
		L_29 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_28, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		bool L_30 = ___0_multiLine;
		if (!L_30)
		{
			goto IL_00ea;
		}
	}
	{
		StringBuilder_t* L_31 = V_0;
		String_t* L_32;
		L_32 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		NullCheck(L_31);
		StringBuilder_t* L_33;
		L_33 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_31, L_32, NULL);
		goto IL_0106;
	}

IL_00ea:
	{
		int32_t L_34 = V_2;
		OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* L_35 = __this->____enhKeyUsage_3;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = OidCollection_get_Count_m9560D70809087591935904924A15FBEC1FEFEB11(L_35, NULL);
		if ((((int32_t)L_34) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_36, 1)))))
		{
			goto IL_0106;
		}
	}
	{
		StringBuilder_t* L_37 = V_0;
		NullCheck(L_37);
		StringBuilder_t* L_38;
		L_38 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_37, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0106:
	{
		int32_t L_39 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_010a:
	{
		int32_t L_40 = V_2;
		OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* L_41 = __this->____enhKeyUsage_3;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = OidCollection_get_Count_m9560D70809087591935904924A15FBEC1FEFEB11(L_41, NULL);
		if ((((int32_t)L_40) < ((int32_t)L_42)))
		{
			goto IL_0087;
		}
	}
	{
		StringBuilder_t* L_43 = V_0;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_43);
		return L_44;
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
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC (X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* __this, const RuntimeMethod* method) 
{
	{
		AsnEncodedData__ctor_m90028EC56A5E36272EAA4A9279AE23358D46F547(__this, NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::.ctor(System.String,System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Extension__ctor_m442E6EED0F68D0FA2D7D7B085BEAB11F35B9157F (X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* __this, String_t* ___0_oid, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_rawData, bool ___2_critical, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_oid;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_rawData;
		AsnEncodedData__ctor_m90834437DE68932EB0BE8BB434DDA1DB896DA67E(__this, L_0, L_1, NULL);
		bool L_2 = ___2_critical;
		__this->____critical_2 = L_2;
		return;
	}
}
// System.Boolean System.Security.Cryptography.X509Certificates.X509Extension::get_Critical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509Extension_get_Critical_mEF827F09D95784210C2F8D5FD7BE27BB54803E35 (X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____critical_2;
		return L_0;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::set_Critical(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF (X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->____critical_2 = L_0;
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Extension_CopyFrom_m674ABC4ECF701B708C28B546B42B7799CA24D4A9 (X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* __this, AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ___0_asnEncodedData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* V_0 = NULL;
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_0 = ___0_asnEncodedData;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB2AED74A19DD9414DD0792FD340CC531536B8454)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509Extension_CopyFrom_m674ABC4ECF701B708C28B546B42B7799CA24D4A9_RuntimeMethod_var)));
	}

IL_000e:
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_2 = ___0_asnEncodedData;
		V_0 = ((X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5*)IsInstClass((RuntimeObject*)L_2, X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5_il2cpp_TypeInfo_var));
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_3 = V_0;
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_4;
		L_4 = Locale_GetText_m7BA18BC14D3028C4C4722E220800563188DA3600(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3C77EE02D0B62256DB746EEC2F12CB9BC801126A)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509Extension_CopyFrom_m674ABC4ECF701B708C28B546B42B7799CA24D4A9_RuntimeMethod_var)));
	}

IL_0028:
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_6 = ___0_asnEncodedData;
		AsnEncodedData_CopyFrom_mA5DD4A419C5FC29D82DBE9B69C9F8CBC2872A1F2(__this, L_6, NULL);
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_7 = V_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = X509Extension_get_Critical_mEF827F09D95784210C2F8D5FD7BE27BB54803E35_inline(L_7, NULL);
		__this->____critical_2 = L_8;
		return;
	}
}
// System.String System.Security.Cryptography.X509Certificates.X509Extension::FormatUnkownData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509Extension_FormatUnkownData_mD0463F5096A6937E95E3165048299CBA9A1A6F7D (X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4A94E440E57B3321B2097CEC9E046D28EE1C0CD);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_data;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_data;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_000d;
		}
	}

IL_0007:
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_2;
	}

IL_000d:
	{
		StringBuilder_t* L_3 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_3, NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0033;
	}

IL_0017:
	{
		StringBuilder_t* L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_data;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		String_t* L_7;
		L_7 = Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310(((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), _stringLiteralB4A94E440E57B3321B2097CEC9E046D28EE1C0CD, NULL);
		NullCheck(L_4);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, L_7, NULL);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0033:
	{
		int32_t L_10 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___0_data;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		return L_13;
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
// System.Void System.Security.Cryptography.X509Certificates.X509ExtensionCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ExtensionCollection__ctor_m279F781688D6D8D301D06282132D8A02DC864AE9 (X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80(L_0, NULL);
		__this->____list_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____list_1), (void*)L_0);
		return;
	}
}
// System.Int32 System.Security.Cryptography.X509Certificates.X509ExtensionCollection::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509ExtensionCollection_get_Count_m2708E6751246E4E5E64BAE8A99FEC79CFD61E9A1 (X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0* __this, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____list_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Security.Cryptography.X509Certificates.X509ExtensionCollection::get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509ExtensionCollection_get_IsSynchronized_m7439392D6066DB8883D2545EB3BF05504AB35ED2 (X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0* __this, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____list_1;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(25 /* System.Boolean System.Collections.ArrayList::get_IsSynchronized() */, L_0);
		return L_1;
	}
}
// System.Object System.Security.Cryptography.X509Certificates.X509ExtensionCollection::get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* X509ExtensionCollection_get_SyncRoot_m22D5573E42FAAC75DC4DF16C962183E0CDC6AA0D (X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0* __this, const RuntimeMethod* method) 
{
	{
		return __this;
	}
}
// System.Int32 System.Security.Cryptography.X509Certificates.X509ExtensionCollection::Add(System.Security.Cryptography.X509Certificates.X509Extension)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509ExtensionCollection_Add_mC02BE13A042962E83E849483642F122AEADD2A79 (X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0* __this, X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* ___0_extension, const RuntimeMethod* method) 
{
	{
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_0 = ___0_extension;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral93A695AC92DC55FD2E0C8095080AD5AF2B1F34FE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509ExtensionCollection_Add_mC02BE13A042962E83E849483642F122AEADD2A79_RuntimeMethod_var)));
	}

IL_000e:
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_2 = __this->____list_1;
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_3 = ___0_extension;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_2, L_3);
		return L_4;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509ExtensionCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ExtensionCollection_System_Collections_ICollection_CopyTo_mD9F01B71381CFDD12AF55B244025A99529465472 (X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509ExtensionCollection_System_Collections_ICollection_CopyTo_mD9F01B71381CFDD12AF55B244025A99529465472_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC6F79988FD2BDBA6A0518B070DC366C3276EDD71)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509ExtensionCollection_System_Collections_ICollection_CopyTo_mD9F01B71381CFDD12AF55B244025A99529465472_RuntimeMethod_var)));
	}

IL_001d:
	{
		int32_t L_4 = ___1_index;
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_5, NULL);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0031;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_7 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF139BD350C3DEE302CB511B339EAB5BBA9E5D30)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509ExtensionCollection_System_Collections_ICollection_CopyTo_mD9F01B71381CFDD12AF55B244025A99529465472_RuntimeMethod_var)));
	}

IL_0031:
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_8 = __this->____list_1;
		RuntimeArray* L_9 = ___0_array;
		int32_t L_10 = ___1_index;
		NullCheck(L_8);
		VirtualActionInvoker2< RuntimeArray*, int32_t >::Invoke(34 /* System.Void System.Collections.ArrayList::CopyTo(System.Array,System.Int32) */, L_8, L_9, L_10);
		return;
	}
}
// System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator System.Security.Cryptography.X509Certificates.X509ExtensionCollection::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509ExtensionEnumerator_t7C4F4F5D65C7023FA1BEE3F6522B066A6CECCFF6* X509ExtensionCollection_GetEnumerator_m7F4BDDDF50FD335D3F6A2AB490221D27524BD0BF (X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509ExtensionEnumerator_t7C4F4F5D65C7023FA1BEE3F6522B066A6CECCFF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____list_1;
		X509ExtensionEnumerator_t7C4F4F5D65C7023FA1BEE3F6522B066A6CECCFF6* L_1 = (X509ExtensionEnumerator_t7C4F4F5D65C7023FA1BEE3F6522B066A6CECCFF6*)il2cpp_codegen_object_new(X509ExtensionEnumerator_t7C4F4F5D65C7023FA1BEE3F6522B066A6CECCFF6_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		X509ExtensionEnumerator__ctor_m64C36BD278E62F11279957CC3A5F58A2D7025976(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509ExtensionCollection::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* X509ExtensionCollection_System_Collections_IEnumerable_GetEnumerator_m574551E2A07A5E860E812C597544B627EE4C4E55 (X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509ExtensionEnumerator_t7C4F4F5D65C7023FA1BEE3F6522B066A6CECCFF6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____list_1;
		X509ExtensionEnumerator_t7C4F4F5D65C7023FA1BEE3F6522B066A6CECCFF6* L_1 = (X509ExtensionEnumerator_t7C4F4F5D65C7023FA1BEE3F6522B066A6CECCFF6*)il2cpp_codegen_object_new(X509ExtensionEnumerator_t7C4F4F5D65C7023FA1BEE3F6522B066A6CECCFF6_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		X509ExtensionEnumerator__ctor_m64C36BD278E62F11279957CC3A5F58A2D7025976(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509ExtensionCollection::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ExtensionCollection__cctor_mE8E55014129DA5FB0DA158BEE2601C43DC812991 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)0);
		((X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0_StaticFields*)il2cpp_codegen_static_fields_for(X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0_il2cpp_TypeInfo_var))->___Empty_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0_StaticFields*)il2cpp_codegen_static_fields_for(X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0_il2cpp_TypeInfo_var))->___Empty_0), (void*)L_0);
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
// System.Void System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::.ctor(System.Collections.ArrayList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ExtensionEnumerator__ctor_m64C36BD278E62F11279957CC3A5F58A2D7025976 (X509ExtensionEnumerator_t7C4F4F5D65C7023FA1BEE3F6522B066A6CECCFF6* __this, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___0_list, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = ___0_list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(35 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		__this->___enumerator_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_0), (void*)L_1);
		return;
	}
}
// System.Security.Cryptography.X509Certificates.X509Extension System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* X509ExtensionEnumerator_get_Current_m6057D68B2D7750669A51630A1561FCE7F597E232 (X509ExtensionEnumerator_t7C4F4F5D65C7023FA1BEE3F6522B066A6CECCFF6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_0);
		return ((X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5*)CastclassClass((RuntimeObject*)L_1, X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5_il2cpp_TypeInfo_var));
	}
}
// System.Object System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* X509ExtensionEnumerator_System_Collections_IEnumerator_get_Current_m5E7878C8D59799831C4350758873B6E0A358538D (X509ExtensionEnumerator_t7C4F4F5D65C7023FA1BEE3F6522B066A6CECCFF6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509ExtensionEnumerator_MoveNext_mDCF343DCC4699DFB3D6E72D84AF8A6C11AB247C3 (X509ExtensionEnumerator_t7C4F4F5D65C7023FA1BEE3F6522B066A6CECCFF6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ExtensionEnumerator_Reset_m1DF9302CFBB6B288D94EE627E3D4DACD78B94A9C (X509ExtensionEnumerator_t7C4F4F5D65C7023FA1BEE3F6522B066A6CECCFF6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator_0;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_0);
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
// System.Security.Cryptography.X509Certificates.X509ChainImpl System.Security.Cryptography.X509Certificates.X509Helper2::CreateChainImpl(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* X509Helper2_CreateChainImpl_m37D8C8E930B60BDF04C0E5ED0A6D279C959A8A7D (bool ___0_useMachineContext, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_useMachineContext;
		X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D* L_1 = (X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D*)il2cpp_codegen_object_new(X509ChainImplMono_t763E3B59A7689962856335623AC8C8590DD6EF7D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		X509ChainImplMono__ctor_m0ACF8D6927E705577989597DAAF5CFE6346B1A76(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Boolean System.Security.Cryptography.X509Certificates.X509Helper2::IsValid(System.Security.Cryptography.X509Certificates.X509ChainImpl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509Helper2_IsValid_m54342EEC1349CDC083FA35A3E51474A27C80FAF8 (X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* ___0_impl, const RuntimeMethod* method) 
{
	{
		X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* L_0 = ___0_impl;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* L_1 = ___0_impl;
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Security.Cryptography.X509Certificates.X509ChainImpl::get_IsValid() */, L_1);
		return L_2;
	}

IL_000a:
	{
		return (bool)0;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509Helper2::ThrowIfContextInvalid(System.Security.Cryptography.X509Certificates.X509ChainImpl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Helper2_ThrowIfContextInvalid_mB6E09D4292818B28DC4FA6BA9695006B0B0119C8 (X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* ___0_impl, const RuntimeMethod* method) 
{
	{
		X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* L_0 = ___0_impl;
		bool L_1;
		L_1 = X509Helper2_IsValid_m54342EEC1349CDC083FA35A3E51474A27C80FAF8(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t* L_2;
		L_2 = X509Helper2_GetInvalidChainContextException_m9C124C1AD37A16B10C791BB76505016059EFC9C5(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509Helper2_ThrowIfContextInvalid_mB6E09D4292818B28DC4FA6BA9695006B0B0119C8_RuntimeMethod_var)));
	}

IL_000e:
	{
		return;
	}
}
// System.Exception System.Security.Cryptography.X509Certificates.X509Helper2::GetInvalidChainContextException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* X509Helper2_GetInvalidChainContextException_m9C124C1AD37A16B10C791BB76505016059EFC9C5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DFF292E20A24D880E7AD23C0246F1B2DA7F9159);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = Locale_GetText_m7BA18BC14D3028C4C4722E220800563188DA3600(_stringLiteral0DFF292E20A24D880E7AD23C0246F1B2DA7F9159, NULL);
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_1 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_1, L_0, NULL);
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
// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509KeyUsageExtension__ctor_mE0EE68497EDEDD78213EEDC931D68DD35DF6340C (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FDCE7F577695853459152469012B0121731CD52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC(__this, NULL);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_0 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_0, _stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F, _stringLiteral2FDCE7F577695853459152469012B0121731CD52, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_0);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509KeyUsageExtension__ctor_m1DE9CD768712A07E5803496501CCFDA81CFB2689 (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* __this, AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ___0_encodedKeyUsage, bool ___1_critical, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FDCE7F577695853459152469012B0121731CD52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC(__this, NULL);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_0 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_0, _stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F, _stringLiteral2FDCE7F577695853459152469012B0121731CD52, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_0);
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_1 = ___0_encodedKeyUsage;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(L_1, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____raw_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____raw_1), (void*)L_2);
		bool L_3 = ___1_critical;
		X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline(__this, L_3, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(__this, NULL);
		int32_t L_5;
		L_5 = X509KeyUsageExtension_Decode_mB64239ABDEA862E43E26CF324D3E41ECCF3088BC(__this, L_4, NULL);
		__this->____status_7 = L_5;
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor(System.Security.Cryptography.X509Certificates.X509KeyUsageFlags,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509KeyUsageExtension__ctor_m2FAA526721435935D0B10E0DB916AF56CFD84751 (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* __this, int32_t ___0_keyUsages, bool ___1_critical, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FDCE7F577695853459152469012B0121731CD52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC(__this, NULL);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_0 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_0, _stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F, _stringLiteral2FDCE7F577695853459152469012B0121731CD52, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_0);
		bool L_1 = ___1_critical;
		X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline(__this, L_1, NULL);
		int32_t L_2 = ___0_keyUsages;
		int32_t L_3;
		L_3 = X509KeyUsageExtension_GetValidFlags_m82B1C7DA4F4E0F16090782189E1B4984D133BB45(__this, L_2, NULL);
		__this->____keyUsages_6 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = X509KeyUsageExtension_Encode_m38D20B2FB68EDF3594EDC0D9BA88800ABF305542(__this, NULL);
		AsnEncodedData_set_RawData_m05F9F17765AD384ECE3A333DCBF6A0572099346B(__this, L_4, NULL);
		return;
	}
}
// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::get_KeyUsages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509KeyUsageExtension_get_KeyUsages_m1BD6C5BC6E3E380982C135B2E81731435345144F (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____status_7;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)4))))
		{
			goto IL_0015;
		}
	}

IL_000e:
	{
		int32_t L_3 = __this->____keyUsages_6;
		return L_3;
	}

IL_0015:
	{
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_4 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD20A4058B7B405BF173793FAAC54A85874A0CDDE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509KeyUsageExtension_get_KeyUsages_m1BD6C5BC6E3E380982C135B2E81731435345144F_RuntimeMethod_var)));
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509KeyUsageExtension_CopyFrom_mCBCF5CA17676B2030F6C82ED80A008EF029AF733 (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* __this, AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ___0_asnEncodedData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FDCE7F577695853459152469012B0121731CD52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F);
		s_Il2CppMethodInitialized = true;
	}
	X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* V_0 = NULL;
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_0 = ___0_asnEncodedData;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9FB8C73B342D5B3C700EDA7C5212DD547D29E4E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509KeyUsageExtension_CopyFrom_mCBCF5CA17676B2030F6C82ED80A008EF029AF733_RuntimeMethod_var)));
	}

IL_000e:
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_2 = ___0_asnEncodedData;
		V_0 = ((X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5*)IsInstClass((RuntimeObject*)L_2, X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5_il2cpp_TypeInfo_var));
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_3 = V_0;
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_4;
		L_4 = Locale_GetText_m7BA18BC14D3028C4C4722E220800563188DA3600(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD615D452AAA84D559E3E5FFF5168A1AF47500E8D)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9FB8C73B342D5B3C700EDA7C5212DD547D29E4E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509KeyUsageExtension_CopyFrom_mCBCF5CA17676B2030F6C82ED80A008EF029AF733_RuntimeMethod_var)));
	}

IL_002d:
	{
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_6 = V_0;
		NullCheck(L_6);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_7 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)L_6)->____oid_0;
		if (L_7)
		{
			goto IL_004c;
		}
	}
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_8 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_8, _stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F, _stringLiteral2FDCE7F577695853459152469012B0121731CD52, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_8);
		goto IL_005d;
	}

IL_004c:
	{
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_9 = V_0;
		NullCheck(L_9);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_10 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)L_9)->____oid_0;
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_11 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Oid__ctor_m3973A5FE5482D45FABC8642E59B655274B0B5D59(L_11, L_10, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_11);
	}

IL_005d:
	{
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_12 = V_0;
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(L_12, NULL);
		AsnEncodedData_set_RawData_m05F9F17765AD384ECE3A333DCBF6A0572099346B(__this, L_13, NULL);
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_14 = V_0;
		NullCheck(L_14);
		bool L_15;
		L_15 = X509Extension_get_Critical_mEF827F09D95784210C2F8D5FD7BE27BB54803E35_inline(L_14, NULL);
		X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline(__this, L_15, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(__this, NULL);
		int32_t L_17;
		L_17 = X509KeyUsageExtension_Decode_mB64239ABDEA862E43E26CF324D3E41ECCF3088BC(__this, L_16, NULL);
		__this->____status_7 = L_17;
		return;
	}
}
// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::GetValidFlags(System.Security.Cryptography.X509Certificates.X509KeyUsageFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509KeyUsageExtension_GetValidFlags_m82B1C7DA4F4E0F16090782189E1B4984D133BB45 (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* __this, int32_t ___0_flags, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_flags;
		int32_t L_1 = ___0_flags;
		if ((((int32_t)((int32_t)((int32_t)L_0&((int32_t)33023)))) == ((int32_t)L_1)))
		{
			goto IL_000c;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000c:
	{
		int32_t L_2 = ___0_flags;
		return L_2;
	}
}
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509KeyUsageExtension_Decode_mB64239ABDEA862E43E26CF324D3E41ECCF3088BC (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_extension, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_extension;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_extension;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0009;
		}
	}

IL_0007:
	{
		return (int32_t)(1);
	}

IL_0009:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_extension;
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint8_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if ((((int32_t)L_4) == ((int32_t)3)))
		{
			goto IL_0011;
		}
	}
	{
		return (int32_t)(2);
	}

IL_0011:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_extension;
		NullCheck(L_5);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))) >= ((int32_t)3)))
		{
			goto IL_0019;
		}
	}
	{
		return (int32_t)(3);
	}

IL_0019:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_extension;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) >= ((int32_t)4)))
		{
			goto IL_0021;
		}
	}
	{
		return (int32_t)(4);
	}

IL_0021:
	{
	}
	try
	{// begin try (depth: 1)
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_extension;
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_8 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
			NullCheck(L_8);
			ASN1__ctor_m950BFCCF44A987ACBA12142624AA222200EE503E(L_8, L_7, NULL);
			V_0 = L_8;
			V_1 = 0;
			V_2 = 1;
			goto IL_0040_1;
		}

IL_002f_1:
		{
			int32_t L_9 = V_1;
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_10 = V_0;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = ASN1_get_Value_mA6F9BE5AC19AC060AC42673C8FD5AA864EA046B6(L_10, NULL);
			int32_t L_12 = V_2;
			int32_t L_13 = L_12;
			V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
			NullCheck(L_11);
			int32_t L_14 = L_13;
			uint8_t L_15 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
			V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)(L_9<<8)), (int32_t)L_15));
		}

IL_0040_1:
		{
			int32_t L_16 = V_2;
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_17 = V_0;
			NullCheck(L_17);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
			L_18 = ASN1_get_Value_mA6F9BE5AC19AC060AC42673C8FD5AA864EA046B6(L_17, NULL);
			NullCheck(L_18);
			if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
			{
				goto IL_002f_1;
			}
		}
		{
			int32_t L_19 = V_1;
			int32_t L_20;
			L_20 = X509KeyUsageExtension_GetValidFlags_m82B1C7DA4F4E0F16090782189E1B4984D133BB45(__this, L_19, NULL);
			__this->____keyUsages_6 = L_20;
			goto IL_005f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005a;
		}
		throw e;
	}

CATCH_005a:
	{// begin catch(System.Object)
		V_3 = 1;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0061;
	}// end catch (depth: 1)

IL_005f:
	{
		return (int32_t)(0);
	}

IL_0061:
	{
		int32_t L_21 = V_3;
		return L_21;
	}
}
// System.Byte[] System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::Encode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* X509KeyUsageExtension_Encode_m38D20B2FB68EDF3594EDC0D9BA88800ABF305542 (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_0 = NULL;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	int32_t V_3 = 0;
	int32_t G_B5_0 = 0;
	{
		V_0 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)NULL;
		int32_t L_0 = __this->____keyUsages_6;
		V_1 = L_0;
		V_2 = (uint8_t)0;
		int32_t L_1 = V_1;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2;
		uint8_t L_4 = V_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_4);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_5 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ASN1__ctor_mAA538F9E1BE0DE739E9747BC3BC71DC030B018AA(L_5, (uint8_t)3, L_3, NULL);
		V_0 = L_5;
		goto IL_0081;
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)255))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_7 = V_1;
		G_B5_0 = ((int32_t)(L_7>>8));
		goto IL_002f;
	}

IL_002e:
	{
		int32_t L_8 = V_1;
		G_B5_0 = L_8;
	}

IL_002f:
	{
		V_3 = G_B5_0;
		goto IL_003b;
	}

IL_0032:
	{
		uint8_t L_9 = V_2;
		V_2 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, 1)));
		int32_t L_10 = V_3;
		V_3 = ((int32_t)(L_10>>1));
	}

IL_003b:
	{
		int32_t L_11 = V_3;
		if (((int32_t)(L_11&1)))
		{
			goto IL_0044;
		}
	}
	{
		uint8_t L_12 = V_2;
		if ((((int32_t)L_12) < ((int32_t)8)))
		{
			goto IL_0032;
		}
	}

IL_0044:
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) > ((int32_t)((int32_t)255))))
		{
			goto IL_0064;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_14;
		uint8_t L_16 = V_2;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = L_15;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)L_18));
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_19 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		ASN1__ctor_mAA538F9E1BE0DE739E9747BC3BC71DC030B018AA(L_19, (uint8_t)3, L_17, NULL);
		V_0 = L_19;
		goto IL_0081;
	}

IL_0064:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = L_20;
		uint8_t L_22 = V_2;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_22);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = L_21;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)L_24));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = L_23;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_26>>8))));
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_27 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		ASN1__ctor_mAA538F9E1BE0DE739E9747BC3BC71DC030B018AA(L_27, (uint8_t)3, L_25, NULL);
		V_0 = L_27;
	}

IL_0081:
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_28 = V_0;
		NullCheck(L_28);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29;
		L_29 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_28);
		return L_29;
	}
}
// System.String System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::ToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509KeyUsageExtension_ToString_m270131139984275D7571120A2984F0F5E77E79DC (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* __this, bool ___0_multiLine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral001611EA36FEB747E4C160A3E7A402813B416AF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B85D604B5CD78CCF01CDA620C0DEF5DCC5C1FD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral315E5D2D2D07B33F565952A5C0509A988785ABF6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62F92E932A25B80B40DBB89A07F4AD690B6F800D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75C57EB9FD95FB9243FE99EBB78A77B0117BD190);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91E2D84A2649FBF80361A807D1020FB40280EF31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C1ED970007229D4BBE511BC369FF3ACD197B1F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCABCFE6297E437347D23F1B446C58DD70094E306);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9B53FE83B364433B53BD1F5712DD31D58258FB4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB6BBFD5D01FC65219978A6C56AF3DD9C51AD35E);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	{
		int32_t L_0 = __this->____status_7;
		V_2 = L_0;
		int32_t L_1 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 1)))
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_0027;
			}
			case 3:
			{
				goto IL_0034;
			}
		}
	}
	{
		goto IL_003a;
	}

IL_0021:
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_2;
	}

IL_0027:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____raw_1;
		String_t* L_4;
		L_4 = X509Extension_FormatUnkownData_mD0463F5096A6937E95E3165048299CBA9A1A6F7D(__this, L_3, NULL);
		return L_4;
	}

IL_0034:
	{
		return _stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B;
	}

IL_003a:
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_5 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline(L_5, NULL);
		bool L_7;
		L_7 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_6, _stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F, NULL);
		if (!L_7)
		{
			goto IL_0067;
		}
	}
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_8 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline(L_8, NULL);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralD9B53FE83B364433B53BD1F5712DD31D58258FB4, L_9, NULL);
		return L_10;
	}

IL_0067:
	{
		int32_t L_11 = __this->____keyUsages_6;
		if (L_11)
		{
			goto IL_0075;
		}
	}
	{
		return _stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B;
	}

IL_0075:
	{
		StringBuilder_t* L_12 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_12, NULL);
		V_0 = L_12;
		int32_t L_13 = __this->____keyUsages_6;
		if (!((int32_t)((int32_t)L_13&((int32_t)128))))
		{
			goto IL_0095;
		}
	}
	{
		StringBuilder_t* L_14 = V_0;
		NullCheck(L_14);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, _stringLiteralCABCFE6297E437347D23F1B446C58DD70094E306, NULL);
	}

IL_0095:
	{
		int32_t L_16 = __this->____keyUsages_6;
		if (!((int32_t)((int32_t)L_16&((int32_t)64))))
		{
			goto IL_00c1;
		}
	}
	{
		StringBuilder_t* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_17, NULL);
		if ((((int32_t)L_18) <= ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		StringBuilder_t* L_19 = V_0;
		NullCheck(L_19);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_19, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_00b5:
	{
		StringBuilder_t* L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_21, _stringLiteral91E2D84A2649FBF80361A807D1020FB40280EF31, NULL);
	}

IL_00c1:
	{
		int32_t L_23 = __this->____keyUsages_6;
		if (!((int32_t)((int32_t)L_23&((int32_t)32))))
		{
			goto IL_00ed;
		}
	}
	{
		StringBuilder_t* L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_24, NULL);
		if ((((int32_t)L_25) <= ((int32_t)0)))
		{
			goto IL_00e1;
		}
	}
	{
		StringBuilder_t* L_26 = V_0;
		NullCheck(L_26);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_26, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_00e1:
	{
		StringBuilder_t* L_28 = V_0;
		NullCheck(L_28);
		StringBuilder_t* L_29;
		L_29 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_28, _stringLiteralEB6BBFD5D01FC65219978A6C56AF3DD9C51AD35E, NULL);
	}

IL_00ed:
	{
		int32_t L_30 = __this->____keyUsages_6;
		if (!((int32_t)((int32_t)L_30&((int32_t)16))))
		{
			goto IL_0119;
		}
	}
	{
		StringBuilder_t* L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_31, NULL);
		if ((((int32_t)L_32) <= ((int32_t)0)))
		{
			goto IL_010d;
		}
	}
	{
		StringBuilder_t* L_33 = V_0;
		NullCheck(L_33);
		StringBuilder_t* L_34;
		L_34 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_33, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_010d:
	{
		StringBuilder_t* L_35 = V_0;
		NullCheck(L_35);
		StringBuilder_t* L_36;
		L_36 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_35, _stringLiteral9C1ED970007229D4BBE511BC369FF3ACD197B1F2, NULL);
	}

IL_0119:
	{
		int32_t L_37 = __this->____keyUsages_6;
		if (!((int32_t)((int32_t)L_37&8)))
		{
			goto IL_0144;
		}
	}
	{
		StringBuilder_t* L_38 = V_0;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_38, NULL);
		if ((((int32_t)L_39) <= ((int32_t)0)))
		{
			goto IL_0138;
		}
	}
	{
		StringBuilder_t* L_40 = V_0;
		NullCheck(L_40);
		StringBuilder_t* L_41;
		L_41 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_40, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0138:
	{
		StringBuilder_t* L_42 = V_0;
		NullCheck(L_42);
		StringBuilder_t* L_43;
		L_43 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_42, _stringLiteral001611EA36FEB747E4C160A3E7A402813B416AF1, NULL);
	}

IL_0144:
	{
		int32_t L_44 = __this->____keyUsages_6;
		if (!((int32_t)((int32_t)L_44&4)))
		{
			goto IL_016f;
		}
	}
	{
		StringBuilder_t* L_45 = V_0;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_45, NULL);
		if ((((int32_t)L_46) <= ((int32_t)0)))
		{
			goto IL_0163;
		}
	}
	{
		StringBuilder_t* L_47 = V_0;
		NullCheck(L_47);
		StringBuilder_t* L_48;
		L_48 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_47, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0163:
	{
		StringBuilder_t* L_49 = V_0;
		NullCheck(L_49);
		StringBuilder_t* L_50;
		L_50 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_49, _stringLiteral0B85D604B5CD78CCF01CDA620C0DEF5DCC5C1FD7, NULL);
	}

IL_016f:
	{
		int32_t L_51 = __this->____keyUsages_6;
		if (!((int32_t)((int32_t)L_51&2)))
		{
			goto IL_019a;
		}
	}
	{
		StringBuilder_t* L_52 = V_0;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_52, NULL);
		if ((((int32_t)L_53) <= ((int32_t)0)))
		{
			goto IL_018e;
		}
	}
	{
		StringBuilder_t* L_54 = V_0;
		NullCheck(L_54);
		StringBuilder_t* L_55;
		L_55 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_54, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_018e:
	{
		StringBuilder_t* L_56 = V_0;
		NullCheck(L_56);
		StringBuilder_t* L_57;
		L_57 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_56, _stringLiteral315E5D2D2D07B33F565952A5C0509A988785ABF6, NULL);
	}

IL_019a:
	{
		int32_t L_58 = __this->____keyUsages_6;
		if (!((int32_t)((int32_t)L_58&1)))
		{
			goto IL_01c5;
		}
	}
	{
		StringBuilder_t* L_59 = V_0;
		NullCheck(L_59);
		int32_t L_60;
		L_60 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_59, NULL);
		if ((((int32_t)L_60) <= ((int32_t)0)))
		{
			goto IL_01b9;
		}
	}
	{
		StringBuilder_t* L_61 = V_0;
		NullCheck(L_61);
		StringBuilder_t* L_62;
		L_62 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_61, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_01b9:
	{
		StringBuilder_t* L_63 = V_0;
		NullCheck(L_63);
		StringBuilder_t* L_64;
		L_64 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_63, _stringLiteral75C57EB9FD95FB9243FE99EBB78A77B0117BD190, NULL);
	}

IL_01c5:
	{
		int32_t L_65 = __this->____keyUsages_6;
		if (!((int32_t)((int32_t)L_65&((int32_t)32768))))
		{
			goto IL_01f4;
		}
	}
	{
		StringBuilder_t* L_66 = V_0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_66, NULL);
		if ((((int32_t)L_67) <= ((int32_t)0)))
		{
			goto IL_01e8;
		}
	}
	{
		StringBuilder_t* L_68 = V_0;
		NullCheck(L_68);
		StringBuilder_t* L_69;
		L_69 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_68, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_01e8:
	{
		StringBuilder_t* L_70 = V_0;
		NullCheck(L_70);
		StringBuilder_t* L_71;
		L_71 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_70, _stringLiteral62F92E932A25B80B40DBB89A07F4AD690B6F800D, NULL);
	}

IL_01f4:
	{
		int32_t L_72 = __this->____keyUsages_6;
		V_1 = L_72;
		StringBuilder_t* L_73 = V_0;
		NullCheck(L_73);
		StringBuilder_t* L_74;
		L_74 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_73, _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32, NULL);
		StringBuilder_t* L_75 = V_0;
		int32_t L_76 = V_1;
		V_3 = (uint8_t)((int32_t)(uint8_t)L_76);
		String_t* L_77;
		L_77 = Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310((&V_3), _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260, NULL);
		NullCheck(L_75);
		StringBuilder_t* L_78;
		L_78 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_75, L_77, NULL);
		int32_t L_79 = V_1;
		if ((((int32_t)L_79) <= ((int32_t)((int32_t)255))))
		{
			goto IL_0249;
		}
	}
	{
		StringBuilder_t* L_80 = V_0;
		NullCheck(L_80);
		StringBuilder_t* L_81;
		L_81 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_80, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		StringBuilder_t* L_82 = V_0;
		int32_t L_83 = V_1;
		V_3 = (uint8_t)((int32_t)(uint8_t)((int32_t)(L_83>>8)));
		String_t* L_84;
		L_84 = Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310((&V_3), _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260, NULL);
		NullCheck(L_82);
		StringBuilder_t* L_85;
		L_85 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_82, L_84, NULL);
	}

IL_0249:
	{
		StringBuilder_t* L_86 = V_0;
		NullCheck(L_86);
		StringBuilder_t* L_87;
		L_87 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_86, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		bool L_88 = ___0_multiLine;
		if (!L_88)
		{
			goto IL_0264;
		}
	}
	{
		StringBuilder_t* L_89 = V_0;
		String_t* L_90;
		L_90 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		NullCheck(L_89);
		StringBuilder_t* L_91;
		L_91 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_89, L_90, NULL);
	}

IL_0264:
	{
		StringBuilder_t* L_92 = V_0;
		NullCheck(L_92);
		String_t* L_93;
		L_93 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_92);
		return L_93;
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
// System.Void System.Security.Cryptography.X509Certificates.X509Store::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Store_Close_mE444AB5FE15C355E4EF9369E7EB5F78F345320F0 (X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* __this, const RuntimeMethod* method) 
{
	{
		__this->___store_1 = (X509Store_tC2D674DE1D07619474A1D17B132DDA911F9FD661*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___store_1), (void*)(X509Store_tC2D674DE1D07619474A1D17B132DDA911F9FD661*)NULL);
		X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB* L_0 = __this->___list_0;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB* L_1 = __this->___list_0;
		NullCheck(L_1);
		CollectionBase_Clear_m0357C9FEC2BDB351726BA642093656CB1025968F(L_1, NULL);
	}

IL_001a:
	{
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
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509SubjectKeyIdentifierExtension__ctor_mFC2A19B1301ABBA5F6C5CE407ABC4F4CA1EB49B1 (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral830B64B4254C502C612E53C83DBEE6238E710499);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC(__this, NULL);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_0 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_0, _stringLiteral830B64B4254C502C612E53C83DBEE6238E710499, _stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_0);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509SubjectKeyIdentifierExtension__ctor_m421293DCB67F3A918098962166B8166FD9657D08 (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ___0_encodedSubjectKeyIdentifier, bool ___1_critical, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral830B64B4254C502C612E53C83DBEE6238E710499);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC(__this, NULL);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_0 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_0, _stringLiteral830B64B4254C502C612E53C83DBEE6238E710499, _stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_0);
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_1 = ___0_encodedSubjectKeyIdentifier;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(L_1, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____raw_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____raw_1), (void*)L_2);
		bool L_3 = ___1_critical;
		X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline(__this, L_3, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(__this, NULL);
		int32_t L_5;
		L_5 = X509SubjectKeyIdentifierExtension_Decode_m9E9B87F478F55E202411CBCE3AA314CBF73C7F30(__this, L_4, NULL);
		__this->____status_7 = L_5;
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509SubjectKeyIdentifierExtension__ctor_m610C9C804421B7CB519F3A5C7D66827CC1106EE1 (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_subjectKeyIdentifier, bool ___1_critical, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral830B64B4254C502C612E53C83DBEE6238E710499);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_subjectKeyIdentifier;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4E1CA5F695C0687C577DB8E17E55E7B5845A445)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509SubjectKeyIdentifierExtension__ctor_m610C9C804421B7CB519F3A5C7D66827CC1106EE1_RuntimeMethod_var)));
	}

IL_0014:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_subjectKeyIdentifier;
		NullCheck(L_2);
		if ((((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0023;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4E1CA5F695C0687C577DB8E17E55E7B5845A445)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509SubjectKeyIdentifierExtension__ctor_m610C9C804421B7CB519F3A5C7D66827CC1106EE1_RuntimeMethod_var)));
	}

IL_0023:
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_4 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_4, _stringLiteral830B64B4254C502C612E53C83DBEE6238E710499, _stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_4);
		bool L_5 = ___1_critical;
		X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline(__this, L_5, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_subjectKeyIdentifier;
		NullCheck((RuntimeArray*)L_6);
		RuntimeObject* L_7;
		L_7 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_6, NULL);
		__this->____subjectKeyIdentifier_5 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_7, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____subjectKeyIdentifier_5), (void*)((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_7, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = X509SubjectKeyIdentifierExtension_Encode_m8746D45CE4AC46543D3332BC6001FA1BC7A72CB3(__this, NULL);
		AsnEncodedData_set_RawData_m05F9F17765AD384ECE3A333DCBF6A0572099346B(__this, L_8, NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509SubjectKeyIdentifierExtension__ctor_mECF6398B9841FB4533228FE77F51F93316EADE94 (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, String_t* ___0_subjectKeyIdentifier, bool ___1_critical, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral830B64B4254C502C612E53C83DBEE6238E710499);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC(__this, NULL);
		String_t* L_0 = ___0_subjectKeyIdentifier;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4E1CA5F695C0687C577DB8E17E55E7B5845A445)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509SubjectKeyIdentifierExtension__ctor_mECF6398B9841FB4533228FE77F51F93316EADE94_RuntimeMethod_var)));
	}

IL_0014:
	{
		String_t* L_2 = ___0_subjectKeyIdentifier;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		if ((((int32_t)L_3) >= ((int32_t)2)))
		{
			goto IL_0028;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4E1CA5F695C0687C577DB8E17E55E7B5845A445)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509SubjectKeyIdentifierExtension__ctor_mECF6398B9841FB4533228FE77F51F93316EADE94_RuntimeMethod_var)));
	}

IL_0028:
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_5 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_5, _stringLiteral830B64B4254C502C612E53C83DBEE6238E710499, _stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_5);
		bool L_6 = ___1_critical;
		X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline(__this, L_6, NULL);
		String_t* L_7 = ___0_subjectKeyIdentifier;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = X509SubjectKeyIdentifierExtension_FromHex_m0C965FECB6AC9330589DBDC182E7EA34EFE4195D(L_7, NULL);
		__this->____subjectKeyIdentifier_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____subjectKeyIdentifier_5), (void*)L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = X509SubjectKeyIdentifierExtension_Encode_m8746D45CE4AC46543D3332BC6001FA1BC7A72CB3(__this, NULL);
		AsnEncodedData_set_RawData_m05F9F17765AD384ECE3A333DCBF6A0572099346B(__this, L_9, NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509SubjectKeyIdentifierExtension__ctor_m3DD2C4E1505A6E625499FBD833BFC076D28D83EB (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* ___0_key, bool ___1_critical, const RuntimeMethod* method) 
{
	{
		PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* L_0 = ___0_key;
		bool L_1 = ___1_critical;
		X509SubjectKeyIdentifierExtension__ctor_m1858C1B050FAF65946B790737652E874781B4B56(__this, L_0, 0, L_1, NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509SubjectKeyIdentifierExtension__ctor_m1858C1B050FAF65946B790737652E874781B4B56 (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* ___0_key, int32_t ___1_algorithm, bool ___2_critical, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral830B64B4254C502C612E53C83DBEE6238E710499);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC(__this, NULL);
		PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509SubjectKeyIdentifierExtension__ctor_m1858C1B050FAF65946B790737652E874781B4B56_RuntimeMethod_var)));
	}

IL_0014:
	{
		PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* L_2 = ___0_key;
		NullCheck(L_2);
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_3;
		L_3 = PublicKey_get_EncodedKeyValue_m153EF781728D471C55002A40BBDA435F1B3A1213_inline(L_2, NULL);
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(L_3, NULL);
		V_0 = L_4;
		int32_t L_5 = ___1_algorithm;
		switch (L_5)
		{
			case 0:
			{
				goto IL_0037;
			}
			case 1:
			{
				goto IL_004d;
			}
			case 2:
			{
				goto IL_008f;
			}
		}
	}
	{
		goto IL_0113;
	}

IL_0037:
	{
		SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* L_6;
		L_6 = SHA1_Create_m10D40BE4E0A3737F58EB3B7D21B3EB53964BB042(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_6, L_7, NULL);
		__this->____subjectKeyIdentifier_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____subjectKeyIdentifier_5), (void*)L_8);
		goto IL_011e;
	}

IL_004d:
	{
		SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* L_9;
		L_9 = SHA1_Create_m10D40BE4E0A3737F58EB3B7D21B3EB53964BB042(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		NullCheck(L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_9, L_10, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->____subjectKeyIdentifier_5 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____subjectKeyIdentifier_5), (void*)L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->____subjectKeyIdentifier_5;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_11, ((int32_t)12), (RuntimeArray*)L_13, 0, 8, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->____subjectKeyIdentifier_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->____subjectKeyIdentifier_5;
		NullCheck(L_15);
		int32_t L_16 = 0;
		uint8_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)64)|((int32_t)((int32_t)L_17&((int32_t)15)))))));
		goto IL_011e;
	}

IL_008f:
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_18 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		ASN1__ctor_mA9AE2197367C1E13DBFDA67E0A383167F52CC114(L_18, (uint8_t)((int32_t)48), NULL);
		V_1 = L_18;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_19 = V_1;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_20 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		ASN1__ctor_mA9AE2197367C1E13DBFDA67E0A383167F52CC114(L_20, (uint8_t)((int32_t)48), NULL);
		NullCheck(L_19);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_21;
		L_21 = ASN1_Add_m4C61487A6CCF48D5CEB0D97B248FE31F9FCD849F(L_19, L_20, NULL);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_22 = L_21;
		PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* L_23 = ___0_key;
		NullCheck(L_23);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_24;
		L_24 = PublicKey_get_Oid_mB5796F569C136759CB740F747C6A3B6F8976401A_inline(L_23, NULL);
		NullCheck(L_24);
		String_t* L_25;
		L_25 = Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline(L_24, NULL);
		il2cpp_codegen_runtime_class_init_inline(CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26;
		L_26 = CryptoConfig_EncodeOID_mFC779B3B35D074F2804F36F36D9DB4A8E2070CDD(L_25, NULL);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_27 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		ASN1__ctor_m950BFCCF44A987ACBA12142624AA222200EE503E(L_27, L_26, NULL);
		NullCheck(L_22);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_28;
		L_28 = ASN1_Add_m4C61487A6CCF48D5CEB0D97B248FE31F9FCD849F(L_22, L_27, NULL);
		PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* L_29 = ___0_key;
		NullCheck(L_29);
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_30;
		L_30 = PublicKey_get_EncodedParameters_mE338A4A69A15907E38A644D624A07DDD55C521E0_inline(L_29, NULL);
		NullCheck(L_30);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31;
		L_31 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(L_30, NULL);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_32 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		ASN1__ctor_m950BFCCF44A987ACBA12142624AA222200EE503E(L_32, L_31, NULL);
		NullCheck(L_22);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_33;
		L_33 = ASN1_Add_m4C61487A6CCF48D5CEB0D97B248FE31F9FCD849F(L_22, L_32, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_0;
		NullCheck(L_34);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_34)->max_length)), 1)));
		V_2 = L_35;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_0;
		NullCheck(L_38);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_36, 0, (RuntimeArray*)L_37, 1, ((int32_t)(((RuntimeArray*)L_38)->max_length)), NULL);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_39 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_2;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_41 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		ASN1__ctor_mAA538F9E1BE0DE739E9747BC3BC71DC030B018AA(L_41, (uint8_t)3, L_40, NULL);
		NullCheck(L_39);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_42;
		L_42 = ASN1_Add_m4C61487A6CCF48D5CEB0D97B248FE31F9FCD849F(L_39, L_41, NULL);
		SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* L_43;
		L_43 = SHA1_Create_m10D40BE4E0A3737F58EB3B7D21B3EB53964BB042(NULL);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_44 = V_1;
		NullCheck(L_44);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45;
		L_45 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_44);
		NullCheck(L_43);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46;
		L_46 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_43, L_45, NULL);
		__this->____subjectKeyIdentifier_5 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____subjectKeyIdentifier_5), (void*)L_46);
		goto IL_011e;
	}

IL_0113:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_47);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA9AF8D13B64E63A31A01386E007E5C9CF3A6CF5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509SubjectKeyIdentifierExtension__ctor_m1858C1B050FAF65946B790737652E874781B4B56_RuntimeMethod_var)));
	}

IL_011e:
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_48 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_48, _stringLiteral830B64B4254C502C612E53C83DBEE6238E710499, _stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_48);
		bool L_49 = ___2_critical;
		X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline(__this, L_49, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50;
		L_50 = X509SubjectKeyIdentifierExtension_Encode_m8746D45CE4AC46543D3332BC6001FA1BC7A72CB3(__this, NULL);
		AsnEncodedData_set_RawData_m05F9F17765AD384ECE3A333DCBF6A0572099346B(__this, L_50, NULL);
		return;
	}
}
// System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::get_SubjectKeyIdentifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509SubjectKeyIdentifierExtension_get_SubjectKeyIdentifier_mFF2A155072C67F430E7F4B178733A80388943CBA (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____status_7;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)4))))
		{
			goto IL_002e;
		}
	}

IL_000e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->____subjectKeyIdentifier_5;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->____subjectKeyIdentifier_5;
		String_t* L_5;
		L_5 = CryptoConvert_ToHex_m1A0AD4D32CEEC47D3C60CB2E4D05A935C62F261A(L_4, NULL);
		__this->____ski_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ski_6), (void*)L_5);
	}

IL_0027:
	{
		String_t* L_6 = __this->____ski_6;
		return L_6;
	}

IL_002e:
	{
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_7 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD20A4058B7B405BF173793FAAC54A85874A0CDDE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509SubjectKeyIdentifierExtension_get_SubjectKeyIdentifier_mFF2A155072C67F430E7F4B178733A80388943CBA_RuntimeMethod_var)));
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509SubjectKeyIdentifierExtension_CopyFrom_m959BB16C6973B1B565D02ED9993AF9069019D77A (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ___0_asnEncodedData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral830B64B4254C502C612E53C83DBEE6238E710499);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73);
		s_Il2CppMethodInitialized = true;
	}
	X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* V_0 = NULL;
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_0 = ___0_asnEncodedData;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9FB8C73B342D5B3C700EDA7C5212DD547D29E4E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509SubjectKeyIdentifierExtension_CopyFrom_m959BB16C6973B1B565D02ED9993AF9069019D77A_RuntimeMethod_var)));
	}

IL_000e:
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_2 = ___0_asnEncodedData;
		V_0 = ((X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5*)IsInstClass((RuntimeObject*)L_2, X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5_il2cpp_TypeInfo_var));
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_3 = V_0;
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_4;
		L_4 = Locale_GetText_m7BA18BC14D3028C4C4722E220800563188DA3600(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD615D452AAA84D559E3E5FFF5168A1AF47500E8D)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9FB8C73B342D5B3C700EDA7C5212DD547D29E4E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509SubjectKeyIdentifierExtension_CopyFrom_m959BB16C6973B1B565D02ED9993AF9069019D77A_RuntimeMethod_var)));
	}

IL_002d:
	{
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_6 = V_0;
		NullCheck(L_6);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_7 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)L_6)->____oid_0;
		if (L_7)
		{
			goto IL_004c;
		}
	}
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_8 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_8, _stringLiteral830B64B4254C502C612E53C83DBEE6238E710499, _stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_8);
		goto IL_005d;
	}

IL_004c:
	{
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_9 = V_0;
		NullCheck(L_9);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_10 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)L_9)->____oid_0;
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_11 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Oid__ctor_m3973A5FE5482D45FABC8642E59B655274B0B5D59(L_11, L_10, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_11);
	}

IL_005d:
	{
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_12 = V_0;
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(L_12, NULL);
		AsnEncodedData_set_RawData_m05F9F17765AD384ECE3A333DCBF6A0572099346B(__this, L_13, NULL);
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_14 = V_0;
		NullCheck(L_14);
		bool L_15;
		L_15 = X509Extension_get_Critical_mEF827F09D95784210C2F8D5FD7BE27BB54803E35_inline(L_14, NULL);
		X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline(__this, L_15, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(__this, NULL);
		int32_t L_17;
		L_17 = X509SubjectKeyIdentifierExtension_Decode_m9E9B87F478F55E202411CBCE3AA314CBF73C7F30(__this, L_16, NULL);
		__this->____status_7 = L_17;
		return;
	}
}
// System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChar(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t X509SubjectKeyIdentifierExtension_FromHexChar_m6A90ECC8622DD1D2DEA0FB18356E97B15E8371A9 (Il2CppChar ___0_c, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = ___0_c;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)97))))
		{
			goto IL_0013;
		}
	}
	{
		Il2CppChar L_1 = ___0_c;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)102))))
		{
			goto IL_0013;
		}
	}
	{
		Il2CppChar L_2 = ___0_c;
		return (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract((int32_t)L_2, ((int32_t)97))), ((int32_t)10))));
	}

IL_0013:
	{
		Il2CppChar L_3 = ___0_c;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)65))))
		{
			goto IL_0026;
		}
	}
	{
		Il2CppChar L_4 = ___0_c;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)70))))
		{
			goto IL_0026;
		}
	}
	{
		Il2CppChar L_5 = ___0_c;
		return (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract((int32_t)L_5, ((int32_t)65))), ((int32_t)10))));
	}

IL_0026:
	{
		Il2CppChar L_6 = ___0_c;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)48))))
		{
			goto IL_0036;
		}
	}
	{
		Il2CppChar L_7 = ___0_c;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)57))))
		{
			goto IL_0036;
		}
	}
	{
		Il2CppChar L_8 = ___0_c;
		return (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, ((int32_t)48))));
	}

IL_0036:
	{
		return (uint8_t)((int32_t)255);
	}
}
// System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChars(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t X509SubjectKeyIdentifierExtension_FromHexChars_mFBC6B2009778633420F9F4FF38D7E641FBF63EFA (Il2CppChar ___0_c1, Il2CppChar ___1_c2, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		Il2CppChar L_0 = ___0_c1;
		uint8_t L_1;
		L_1 = X509SubjectKeyIdentifierExtension_FromHexChar_m6A90ECC8622DD1D2DEA0FB18356E97B15E8371A9(L_0, NULL);
		V_0 = L_1;
		uint8_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)255))))
		{
			goto IL_001b;
		}
	}
	{
		uint8_t L_3 = V_0;
		Il2CppChar L_4 = ___1_c2;
		uint8_t L_5;
		L_5 = X509SubjectKeyIdentifierExtension_FromHexChar_m6A90ECC8622DD1D2DEA0FB18356E97B15E8371A9(L_4, NULL);
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_3<<4))|(int32_t)L_5)));
	}

IL_001b:
	{
		uint8_t L_6 = V_0;
		return L_6;
	}
}
// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* X509SubjectKeyIdentifierExtension_FromHex_m0C965FECB6AC9330589DBDC182E7EA34EFE4195D (String_t* ___0_hex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		String_t* L_0 = ___0_hex;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}

IL_0005:
	{
		String_t* L_1 = ___0_hex;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		V_0 = ((int32_t)(L_2>>1));
		int32_t L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_1 = L_4;
		V_2 = 0;
		V_3 = 0;
		goto IL_003d;
	}

IL_001b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_1;
		int32_t L_6 = V_2;
		int32_t L_7 = L_6;
		V_2 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		String_t* L_8 = ___0_hex;
		int32_t L_9 = V_3;
		int32_t L_10 = L_9;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		NullCheck(L_8);
		Il2CppChar L_11;
		L_11 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_8, L_10, NULL);
		String_t* L_12 = ___0_hex;
		int32_t L_13 = V_3;
		int32_t L_14 = L_13;
		V_3 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		NullCheck(L_12);
		Il2CppChar L_15;
		L_15 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_12, L_14, NULL);
		uint8_t L_16;
		L_16 = X509SubjectKeyIdentifierExtension_FromHexChars_mFBC6B2009778633420F9F4FF38D7E641FBF63EFA(L_11, L_15, NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint8_t)L_16);
	}

IL_003d:
	{
		int32_t L_17 = V_2;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_001b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_1;
		return L_19;
	}
}
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509SubjectKeyIdentifierExtension_Decode_m9E9B87F478F55E202411CBCE3AA314CBF73C7F30 (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_extension, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_0 = NULL;
	int32_t V_1 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_extension;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_extension;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0009;
		}
	}

IL_0007:
	{
		return (int32_t)(1);
	}

IL_0009:
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->____ski_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ski_6), (void*)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_extension;
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint8_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if ((((int32_t)L_5) == ((int32_t)4)))
		{
			goto IL_001c;
		}
	}
	{
		return (int32_t)(2);
	}

IL_001c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_extension;
		NullCheck(L_6);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) == ((uint32_t)2))))
		{
			goto IL_0024;
		}
	}
	{
		return (int32_t)(4);
	}

IL_0024:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_extension;
		NullCheck(L_7);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))) >= ((int32_t)3)))
		{
			goto IL_002c;
		}
	}
	{
		return (int32_t)(3);
	}

IL_002c:
	{
	}
	try
	{// begin try (depth: 1)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_extension;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_9 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ASN1__ctor_m950BFCCF44A987ACBA12142624AA222200EE503E(L_9, L_8, NULL);
		V_0 = L_9;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_10 = V_0;
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = ASN1_get_Value_mA6F9BE5AC19AC060AC42673C8FD5AA864EA046B6(L_10, NULL);
		__this->____subjectKeyIdentifier_5 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____subjectKeyIdentifier_5), (void*)L_11);
		goto IL_0047;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0042;
		}
		throw e;
	}

CATCH_0042:
	{// begin catch(System.Object)
		V_1 = 1;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0049;
	}// end catch (depth: 1)

IL_0047:
	{
		return (int32_t)(0);
	}

IL_0049:
	{
		int32_t L_12 = V_1;
		return L_12;
	}
}
// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Encode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* X509SubjectKeyIdentifierExtension_Encode_m8746D45CE4AC46543D3332BC6001FA1BC7A72CB3 (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____subjectKeyIdentifier_5;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_1 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ASN1__ctor_mAA538F9E1BE0DE739E9747BC3BC71DC030B018AA(L_1, (uint8_t)4, L_0, NULL);
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_1);
		return L_2;
	}
}
// System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::ToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509SubjectKeyIdentifierExtension_ToString_m9AE51334149DE6200E554F9C30E2DC5570D36707 (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, bool ___0_multiLine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral830B64B4254C502C612E53C83DBEE6238E710499);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9B53FE83B364433B53BD1F5712DD31D58258FB4);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____status_7;
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 1)))
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_0027;
			}
			case 3:
			{
				goto IL_0034;
			}
		}
	}
	{
		goto IL_003a;
	}

IL_0021:
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_2;
	}

IL_0027:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____raw_1;
		String_t* L_4;
		L_4 = X509Extension_FormatUnkownData_mD0463F5096A6937E95E3165048299CBA9A1A6F7D(__this, L_3, NULL);
		return L_4;
	}

IL_0034:
	{
		return _stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B;
	}

IL_003a:
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_5 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline(L_5, NULL);
		bool L_7;
		L_7 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_6, _stringLiteral830B64B4254C502C612E53C83DBEE6238E710499, NULL);
		if (!L_7)
		{
			goto IL_0067;
		}
	}
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_8 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline(L_8, NULL);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralD9B53FE83B364433B53BD1F5712DD31D58258FB4, L_9, NULL);
		return L_10;
	}

IL_0067:
	{
		StringBuilder_t* L_11 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_11, NULL);
		V_0 = L_11;
		V_2 = 0;
		goto IL_00ab;
	}

IL_0071:
	{
		StringBuilder_t* L_12 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->____subjectKeyIdentifier_5;
		int32_t L_14 = V_2;
		NullCheck(L_13);
		String_t* L_15;
		L_15 = Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310(((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14))), _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260, NULL);
		NullCheck(L_12);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, L_15, NULL);
		int32_t L_17 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->____subjectKeyIdentifier_5;
		NullCheck(L_18);
		if ((((int32_t)L_17) == ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_18)->max_length)), 1)))))
		{
			goto IL_00a7;
		}
	}
	{
		StringBuilder_t* L_19 = V_0;
		NullCheck(L_19);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_19, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
	}

IL_00a7:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_00ab:
	{
		int32_t L_22 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = __this->____subjectKeyIdentifier_5;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_0071;
		}
	}
	{
		bool L_24 = ___0_multiLine;
		if (!L_24)
		{
			goto IL_00c5;
		}
	}
	{
		StringBuilder_t* L_25 = V_0;
		String_t* L_26;
		L_26 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		NullCheck(L_25);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_25, L_26, NULL);
	}

IL_00c5:
	{
		StringBuilder_t* L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_28);
		return L_29;
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
// System.Boolean System.Net.IPAddress::get_IsIPv4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPAddress_get_IsIPv4_m912994B89DDE21F85E4FE40381CDFF1688BE3F38 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) 
{
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = __this->____numbers_9;
		return (bool)((((RuntimeObject*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}
}
// System.Boolean System.Net.IPAddress::get_IsIPv6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPAddress_get_IsIPv6_m957F80A11C7E40C2CCAE554F12AA547E387B6884 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) 
{
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = __this->____numbers_9;
		return (bool)((!(((RuntimeObject*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.UInt32 System.Net.IPAddress::get_PrivateAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t IPAddress_get_PrivateAddress_mE1CD072F1E7BDF981FD71CBD984F5FD2A2EC6399 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->____addressOrScopeId_8;
		return L_0;
	}
}
// System.Void System.Net.IPAddress::set_PrivateAddress(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddress_set_PrivateAddress_m73BD8A117538CBDB80F8FF47D31609FA4855D74E (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		__this->____toString_10 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____toString_10), (void*)(String_t*)NULL);
		__this->____hashCode_11 = 0;
		uint32_t L_0 = ___0_value;
		__this->____addressOrScopeId_8 = L_0;
		return;
	}
}
// System.UInt32 System.Net.IPAddress::get_PrivateScopeId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t IPAddress_get_PrivateScopeId_m3C01EDB8971607BAC0398557E295B5A818191532 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->____addressOrScopeId_8;
		return L_0;
	}
}
// System.Void System.Net.IPAddress::set_PrivateScopeId(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddress_set_PrivateScopeId_m2BA43F20C3B975BDAC6E330C09E09BFD34594A42 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		__this->____toString_10 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____toString_10), (void*)(String_t*)NULL);
		__this->____hashCode_11 = 0;
		uint32_t L_0 = ___0_value;
		__this->____addressOrScopeId_8 = L_0;
		return;
	}
}
// System.Void System.Net.IPAddress::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddress__ctor_mC240D2060BA0F5A96D286CDE3772FE4354D7030B (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, int64_t ___0_newAddress, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int64_t L_0 = ___0_newAddress;
		if ((((int64_t)L_0) < ((int64_t)((int64_t)0))))
		{
			goto IL_0010;
		}
	}
	{
		int64_t L_1 = ___0_newAddress;
		if ((((int64_t)L_1) <= ((int64_t)((int64_t)(uint64_t)((uint32_t)(-1))))))
		{
			goto IL_001b;
		}
	}

IL_0010:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFC7CE1550BE8A973149B3C0EC550C5A65BDD7413)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IPAddress__ctor_mC240D2060BA0F5A96D286CDE3772FE4354D7030B_RuntimeMethod_var)));
	}

IL_001b:
	{
		int64_t L_3 = ___0_newAddress;
		IPAddress_set_PrivateAddress_m73BD8A117538CBDB80F8FF47D31609FA4855D74E(__this, ((int32_t)(uint32_t)L_3), NULL);
		return;
	}
}
// System.Void System.Net.IPAddress::.ctor(System.Byte[],System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddress__ctor_m8D2578858CF6F8E56591F45C8A14150DEFFA44F5 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_address, int64_t ___1_scopeid, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B2_0 = NULL;
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* G_B2_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B1_0 = NULL;
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* G_B1_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_address;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = IPAddress_ThrowAddressNullException_m2D5037C15BE289427E4A761A643C4F26C2F3F034(NULL);
		G_B2_0 = L_2;
		G_B2_1 = G_B1_1;
	}

IL_000b:
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_inline((&L_3), G_B2_0, /*hidden argument*/ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_RuntimeMethod_var);
		int64_t L_4 = ___1_scopeid;
		IPAddress__ctor_mFD3C42E1EECC3099D6E347238FB2A0EBE822AF19(G_B2_1, L_3, L_4, NULL);
		return;
	}
}
// System.Void System.Net.IPAddress::.ctor(System.ReadOnlySpan`1<System.Byte>,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddress__ctor_mFD3C42E1EECC3099D6E347238FB2A0EBE822AF19 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_address, int64_t ___1_scopeid, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_address), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)16))))
		{
			goto IL_0021;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8E8E3CB7E102B63C5E2F7011280E4E41798F185)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8A577A5A6848BEDC7A1DBA1211A06E627EEF0057)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IPAddress__ctor_mFD3C42E1EECC3099D6E347238FB2A0EBE822AF19_RuntimeMethod_var)));
	}

IL_0021:
	{
		int64_t L_2 = ___1_scopeid;
		if ((((int64_t)L_2) < ((int64_t)((int64_t)0))))
		{
			goto IL_002b;
		}
	}
	{
		int64_t L_3 = ___1_scopeid;
		if ((((int64_t)L_3) <= ((int64_t)((int64_t)(uint64_t)((uint32_t)(-1))))))
		{
			goto IL_0036;
		}
	}

IL_002b:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4818B6292BB54C3BA36849A617241A4C666A6CB8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IPAddress__ctor_mFD3C42E1EECC3099D6E347238FB2A0EBE822AF19_RuntimeMethod_var)));
	}

IL_0036:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_5 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->____numbers_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____numbers_9), (void*)L_5);
		V_0 = 0;
		goto IL_0072;
	}

IL_0046:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_6 = __this->____numbers_9;
		int32_t L_7 = V_0;
		int32_t L_8 = V_0;
		uint8_t* L_9;
		L_9 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_address))->____pointer_0))->value, (((int32_t)il2cpp_codegen_multiply(L_8, 2))), ((&___0_address))->____length_1);
		int32_t L_10 = *((uint8_t*)L_9);
		int32_t L_11 = V_0;
		uint8_t* L_12;
		L_12 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_address))->____pointer_0))->value, (((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_11, 2)), 1))), ((&___0_address))->____length_1);
		int32_t L_13 = *((uint8_t*)L_12);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)256))), L_13))));
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0072:
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)8)))
		{
			goto IL_0046;
		}
	}
	{
		int64_t L_16 = ___1_scopeid;
		IPAddress_set_PrivateScopeId_m2BA43F20C3B975BDAC6E330C09E09BFD34594A42(__this, ((int32_t)(uint32_t)L_16), NULL);
		return;
	}
}
// System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = IPAddress_get_IsIPv4_m912994B89DDE21F85E4FE40381CDFF1688BE3F38(__this, NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return (int32_t)(((int32_t)23));
	}

IL_000b:
	{
		return (int32_t)(2);
	}
}
// System.String System.Net.IPAddress::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IPAddress_ToString_m91FE727877BEAA0115F497387E2E9CB0B45C3895 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) 
{
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* G_B3_0 = NULL;
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* G_B2_0 = NULL;
	String_t* G_B4_0 = NULL;
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* G_B4_1 = NULL;
	{
		String_t* L_0 = __this->____toString_10;
		if (L_0)
		{
			goto IL_0034;
		}
	}
	{
		bool L_1;
		L_1 = IPAddress_get_IsIPv4_m912994B89DDE21F85E4FE40381CDFF1688BE3F38(__this, NULL);
		G_B2_0 = __this;
		if (L_1)
		{
			G_B3_0 = __this;
			goto IL_0024;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_2 = __this->____numbers_9;
		uint32_t L_3;
		L_3 = IPAddress_get_PrivateScopeId_m3C01EDB8971607BAC0398557E295B5A818191532_inline(__this, NULL);
		String_t* L_4;
		L_4 = IPAddressParser_IPv6AddressToString_m7C25DEA2FB9E3F863777653CB9C314BBEDF911A6(L_2, L_3, NULL);
		G_B4_0 = L_4;
		G_B4_1 = G_B2_0;
		goto IL_002f;
	}

IL_0024:
	{
		uint32_t L_5;
		L_5 = IPAddress_get_PrivateAddress_mE1CD072F1E7BDF981FD71CBD984F5FD2A2EC6399_inline(__this, NULL);
		String_t* L_6;
		L_6 = IPAddressParser_IPv4AddressToString_m3D56686708BDA87E76737D94441BF1AE486922D2(L_5, NULL);
		G_B4_0 = L_6;
		G_B4_1 = G_B3_0;
	}

IL_002f:
	{
		NullCheck(G_B4_1);
		G_B4_1->____toString_10 = G_B4_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->____toString_10), (void*)G_B4_0);
	}

IL_0034:
	{
		String_t* L_7 = __this->____toString_10;
		return L_7;
	}
}
// System.Boolean System.Net.IPAddress::Equals(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPAddress_Equals_mC4514B3B7F9B95B79A1121706C115AECE61636C7 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, RuntimeObject* ___0_comparandObj, bool ___1_compareScopeId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_comparandObj;
		V_0 = ((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484*)IsInstClass((RuntimeObject*)L_0, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var));
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		int32_t L_2;
		L_2 = IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21(__this, NULL);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21(L_3, NULL);
		if ((((int32_t)L_2) == ((int32_t)L_4)))
		{
			goto IL_001c;
		}
	}
	{
		return (bool)0;
	}

IL_001c:
	{
		bool L_5;
		L_5 = IPAddress_get_IsIPv6_m957F80A11C7E40C2CCAE554F12AA547E387B6884(__this, NULL);
		if (!L_5)
		{
			goto IL_0059;
		}
	}
	{
		V_1 = 0;
		goto IL_0040;
	}

IL_0028:
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_6 = V_0;
		NullCheck(L_6);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_7 = L_6->____numbers_9;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		uint16_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_11 = __this->____numbers_9;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint16_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if ((((int32_t)L_10) == ((int32_t)L_14)))
		{
			goto IL_003c;
		}
	}
	{
		return (bool)0;
	}

IL_003c:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0040:
	{
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) < ((int32_t)8)))
		{
			goto IL_0028;
		}
	}
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_17 = V_0;
		NullCheck(L_17);
		uint32_t L_18;
		L_18 = IPAddress_get_PrivateScopeId_m3C01EDB8971607BAC0398557E295B5A818191532_inline(L_17, NULL);
		uint32_t L_19;
		L_19 = IPAddress_get_PrivateScopeId_m3C01EDB8971607BAC0398557E295B5A818191532_inline(__this, NULL);
		if ((((int32_t)L_18) == ((int32_t)L_19)))
		{
			goto IL_0057;
		}
	}
	{
		bool L_20 = ___1_compareScopeId;
		return (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
	}

IL_0057:
	{
		return (bool)1;
	}

IL_0059:
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_21 = V_0;
		NullCheck(L_21);
		uint32_t L_22;
		L_22 = IPAddress_get_PrivateAddress_mE1CD072F1E7BDF981FD71CBD984F5FD2A2EC6399_inline(L_21, NULL);
		uint32_t L_23;
		L_23 = IPAddress_get_PrivateAddress_mE1CD072F1E7BDF981FD71CBD984F5FD2A2EC6399_inline(__this, NULL);
		return (bool)((((int32_t)L_22) == ((int32_t)L_23))? 1 : 0);
	}
}
// System.Boolean System.Net.IPAddress::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPAddress_Equals_m5EA56A0CBC4F66012C11628D8CC75E03E5A8C462 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, RuntimeObject* ___0_comparand, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_comparand;
		bool L_1;
		L_1 = IPAddress_Equals_mC4514B3B7F9B95B79A1121706C115AECE61636C7(__this, L_0, (bool)1, NULL);
		return L_1;
	}
}
// System.Int32 System.Net.IPAddress::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IPAddress_GetHashCode_m243850627E81961E58E3A7A0A39A1F365C47A4BA (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marvin_t0342A28B10725C354B3E96D240FF68C4D7A0D242_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_AsBytes_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m7E0CA4F0B8AC2C1FEAA2B6D00C2A4B1B075DB08C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_AsBytes_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE5D7D4C294D50AFEE7AF6B303DE7FA7BD156B83A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_CreateReadOnlySpan_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m363F8E1E0CC75E2736384E86E770507F7483D649_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_mD4ED59BC2ABC1D881B1CFEAD85109BB38AF0BC29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____hashCode_11;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = __this->____hashCode_11;
		return L_1;
	}

IL_000f:
	{
		bool L_2;
		L_2 = IPAddress_get_IsIPv6_m957F80A11C7E40C2CCAE554F12AA547E387B6884(__this, NULL);
		if (!L_2)
		{
			goto IL_0065;
		}
	}
	{
		uintptr_t L_3 = ((uintptr_t)((int32_t)20));
		int8_t* L_4 = (int8_t*) (L_3 ? alloca(L_3) : NULL);
		memset(L_4, 0, L_3);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_inline((&L_5), (void*)(L_4), ((int32_t)20), /*hidden argument*/Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_RuntimeMethod_var);
		V_1 = L_5;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_6 = __this->____numbers_9;
		ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F L_7;
		memset((&L_7), 0, sizeof(L_7));
		ReadOnlySpan_1__ctor_mD4ED59BC2ABC1D881B1CFEAD85109BB38AF0BC29_inline((&L_7), L_6, /*hidden argument*/ReadOnlySpan_1__ctor_mD4ED59BC2ABC1D881B1CFEAD85109BB38AF0BC29_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_8;
		L_8 = MemoryMarshal_AsBytes_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m7E0CA4F0B8AC2C1FEAA2B6D00C2A4B1B075DB08C_inline(L_7, MemoryMarshal_AsBytes_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m7E0CA4F0B8AC2C1FEAA2B6D00C2A4B1B075DB08C_RuntimeMethod_var);
		V_2 = L_8;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_9 = V_1;
		ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462((&V_2), L_9, ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_RuntimeMethod_var);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_10;
		L_10 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_1), ((int32_t)16), Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		uint32_t L_11 = __this->____addressOrScopeId_8;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = BitConverter_TryWriteBytes_mC08570066B061A5EEBC9E54FFE8B4D10EDB3EC9B(L_10, L_11, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_13 = V_1;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_14;
		L_14 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_13, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Marvin_t0342A28B10725C354B3E96D240FF68C4D7A0D242_il2cpp_TypeInfo_var);
		uint64_t L_15;
		L_15 = Marvin_get_DefaultSeed_m0CD0484A0C131EF70FE2252570EBE48CE045BA26_inline(NULL);
		int32_t L_16;
		L_16 = Marvin_ComputeHash32_m4A0F0FD95EDFDF78DA2E1FCD47AAC3E39A2EB5B2_inline(L_14, L_15, NULL);
		V_0 = L_16;
		goto IL_0081;
	}

IL_0065:
	{
		uint32_t* L_17 = (&__this->____addressOrScopeId_8);
		ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 L_18;
		L_18 = MemoryMarshal_CreateReadOnlySpan_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m363F8E1E0CC75E2736384E86E770507F7483D649_inline(L_17, 1, MemoryMarshal_CreateReadOnlySpan_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m363F8E1E0CC75E2736384E86E770507F7483D649_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_19;
		L_19 = MemoryMarshal_AsBytes_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE5D7D4C294D50AFEE7AF6B303DE7FA7BD156B83A_inline(L_18, MemoryMarshal_AsBytes_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE5D7D4C294D50AFEE7AF6B303DE7FA7BD156B83A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Marvin_t0342A28B10725C354B3E96D240FF68C4D7A0D242_il2cpp_TypeInfo_var);
		uint64_t L_20;
		L_20 = Marvin_get_DefaultSeed_m0CD0484A0C131EF70FE2252570EBE48CE045BA26_inline(NULL);
		int32_t L_21;
		L_21 = Marvin_ComputeHash32_m4A0F0FD95EDFDF78DA2E1FCD47AAC3E39A2EB5B2_inline(L_19, L_20, NULL);
		V_0 = L_21;
	}

IL_0081:
	{
		int32_t L_22 = V_0;
		__this->____hashCode_11 = L_22;
		int32_t L_23 = __this->____hashCode_11;
		return L_23;
	}
}
// System.Byte[] System.Net.IPAddress::ThrowAddressNullException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* IPAddress_ThrowAddressNullException_m2D5037C15BE289427E4A761A643C4F26C2F3F034 (const RuntimeMethod* method) 
{
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_0 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8A577A5A6848BEDC7A1DBA1211A06E627EEF0057)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IPAddress_ThrowAddressNullException_m2D5037C15BE289427E4A761A643C4F26C2F3F034_RuntimeMethod_var)));
	}
}
// System.Void System.Net.IPAddress::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddress__cctor_m83F9B947B6C0D0F8DEA3E0C62FCCC2573495D6CA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C* L_0 = (ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C*)il2cpp_codegen_object_new(ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ReadOnlyIPAddress__ctor_m0E47AC9070535FCCC4796C165AC8DAB6FA2B5AC5(L_0, ((int64_t)0), NULL);
		((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___Any_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___Any_0), (void*)L_0);
		ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C* L_1 = (ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C*)il2cpp_codegen_object_new(ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ReadOnlyIPAddress__ctor_m0E47AC9070535FCCC4796C165AC8DAB6FA2B5AC5(L_1, ((int64_t)((int32_t)16777343)), NULL);
		((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___Loopback_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___Loopback_1), (void*)L_1);
		ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C* L_2 = (ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C*)il2cpp_codegen_object_new(ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ReadOnlyIPAddress__ctor_m0E47AC9070535FCCC4796C165AC8DAB6FA2B5AC5(L_2, ((int64_t)(uint64_t)((uint32_t)(-1))), NULL);
		((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___Broadcast_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___Broadcast_2), (void*)L_2);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_3 = ((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___Broadcast_2;
		((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___None_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___None_3), (void*)L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_5 = (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484*)il2cpp_codegen_object_new(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		IPAddress__ctor_m8D2578858CF6F8E56591F45C8A14150DEFFA44F5(L_5, L_4, ((int64_t)0), NULL);
		((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___IPv6Any_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___IPv6Any_5), (void*)L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_6;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint8_t)1);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_8 = (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484*)il2cpp_codegen_object_new(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		IPAddress__ctor_m8D2578858CF6F8E56591F45C8A14150DEFFA44F5(L_8, L_7, ((int64_t)0), NULL);
		((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___IPv6Loopback_6 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___IPv6Loopback_6), (void*)L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_10 = (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484*)il2cpp_codegen_object_new(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		IPAddress__ctor_m8D2578858CF6F8E56591F45C8A14150DEFFA44F5(L_10, L_9, ((int64_t)0), NULL);
		((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___IPv6None_7 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___IPv6None_7), (void*)L_10);
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
// System.Void System.Net.IPAddress/ReadOnlyIPAddress::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyIPAddress__ctor_m0E47AC9070535FCCC4796C165AC8DAB6FA2B5AC5 (ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C* __this, int64_t ___0_newAddress, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___0_newAddress;
		il2cpp_codegen_runtime_class_init_inline(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		IPAddress__ctor_mC240D2060BA0F5A96D286CDE3772FE4354D7030B(__this, L_0, NULL);
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
// System.String System.Net.IPAddressParser::IPv4AddressToString(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IPAddressParser_IPv4AddressToString_m3D56686708BDA87E76737D94441BF1AE486922D2 (uint32_t ___0_address, const RuntimeMethod* method) 
{
	Il2CppChar* V_0 = NULL;
	int32_t V_1 = 0;
	{
		uintptr_t L_0 = ((uintptr_t)((int32_t)30));
		int8_t* L_1 = (int8_t*) (L_0 ? alloca(L_0) : NULL);
		memset(L_1, 0, L_0);
		V_0 = (Il2CppChar*)(L_1);
		uint32_t L_2 = ___0_address;
		Il2CppChar* L_3 = V_0;
		int32_t L_4;
		L_4 = IPAddressParser_IPv4AddressToStringHelper_m4226589AD61857FE45C082110271FFF2D3DF8C91(L_2, L_3, NULL);
		V_1 = L_4;
		Il2CppChar* L_5 = V_0;
		int32_t L_6 = V_1;
		String_t* L_7;
		L_7 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, L_5, 0, L_6, NULL);
		return L_7;
	}
}
// System.Void System.Net.IPAddressParser::IPv4AddressToString(System.UInt32,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddressParser_IPv4AddressToString_m4113E0673C882A7CB1313639E2836FB24B9BC6A0 (uint32_t ___0_address, StringBuilder_t* ___1_destination, const RuntimeMethod* method) 
{
	Il2CppChar* V_0 = NULL;
	int32_t V_1 = 0;
	{
		uintptr_t L_0 = ((uintptr_t)((int32_t)30));
		int8_t* L_1 = (int8_t*) (L_0 ? alloca(L_0) : NULL);
		memset(L_1, 0, L_0);
		V_0 = (Il2CppChar*)(L_1);
		uint32_t L_2 = ___0_address;
		Il2CppChar* L_3 = V_0;
		int32_t L_4;
		L_4 = IPAddressParser_IPv4AddressToStringHelper_m4226589AD61857FE45C082110271FFF2D3DF8C91(L_2, L_3, NULL);
		V_1 = L_4;
		StringBuilder_t* L_5 = ___1_destination;
		Il2CppChar* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_5);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m3B01AD486432033546C698FB95D3067DCB1A1448(L_5, L_6, L_7, NULL);
		return;
	}
}
// System.Int32 System.Net.IPAddressParser::IPv4AddressToStringHelper(System.UInt32,System.Char*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IPAddressParser_IPv4AddressToStringHelper_m4226589AD61857FE45C082110271FFF2D3DF8C91 (uint32_t ___0_address, Il2CppChar* ___1_addressString, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		uint32_t L_0 = ___0_address;
		Il2CppChar* L_1 = ___1_addressString;
		IPAddressParser_FormatIPv4AddressNumber_m716041E973744C431B090589D624C53696FD801F(((int32_t)((int32_t)L_0&((int32_t)255))), L_1, (&V_0), NULL);
		Il2CppChar* L_2 = ___1_addressString;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_2, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_4), 2))))) = (int16_t)((int32_t)46);
		uint32_t L_5 = ___0_address;
		Il2CppChar* L_6 = ___1_addressString;
		IPAddressParser_FormatIPv4AddressNumber_m716041E973744C431B090589D624C53696FD801F(((int32_t)(((int32_t)((uint32_t)L_5>>8))&((int32_t)255))), L_6, (&V_0), NULL);
		Il2CppChar* L_7 = ___1_addressString;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 2))))) = (int16_t)((int32_t)46);
		uint32_t L_10 = ___0_address;
		Il2CppChar* L_11 = ___1_addressString;
		IPAddressParser_FormatIPv4AddressNumber_m716041E973744C431B090589D624C53696FD801F(((int32_t)(((int32_t)((uint32_t)L_10>>((int32_t)16)))&((int32_t)255))), L_11, (&V_0), NULL);
		Il2CppChar* L_12 = ___1_addressString;
		int32_t L_13 = V_0;
		int32_t L_14 = L_13;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_14), 2))))) = (int16_t)((int32_t)46);
		uint32_t L_15 = ___0_address;
		Il2CppChar* L_16 = ___1_addressString;
		IPAddressParser_FormatIPv4AddressNumber_m716041E973744C431B090589D624C53696FD801F(((int32_t)(((int32_t)((uint32_t)L_15>>((int32_t)24)))&((int32_t)255))), L_16, (&V_0), NULL);
		int32_t L_17 = V_0;
		return L_17;
	}
}
// System.String System.Net.IPAddressParser::IPv6AddressToString(System.UInt16[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IPAddressParser_IPv6AddressToString_m7C25DEA2FB9E3F863777653CB9C314BBEDF911A6 (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_address, uint32_t ___1_scopeId, const RuntimeMethod* method) 
{
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___0_address;
		uint32_t L_1 = ___1_scopeId;
		StringBuilder_t* L_2;
		L_2 = IPAddressParser_IPv6AddressToStringHelper_m405EE1B288D87500878DD96ADAEE31B106CCF930(L_0, L_1, NULL);
		String_t* L_3;
		L_3 = StringBuilderCache_GetStringAndRelease_m4A7AB11554F7E80352AB8C3AC72D7AD4C7108FB0(L_2, NULL);
		return L_3;
	}
}
// System.Text.StringBuilder System.Net.IPAddressParser::IPv6AddressToStringHelper(System.UInt16[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* IPAddressParser_IPv6AddressToStringHelper_m405EE1B288D87500878DD96ADAEE31B106CCF930 (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_address, uint32_t ___1_scopeId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_op_Implicit_m22DF3B7E5AFF3E8C8902EC1D98CD56CBC8375F54_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	{
		StringBuilder_t* L_0;
		L_0 = StringBuilderCache_Acquire_m1CF9421EC0F3431719E18A8EE78669748DF10892(((int32_t)65), NULL);
		V_0 = L_0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = ___0_address;
		ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F L_2;
		L_2 = ReadOnlySpan_1_op_Implicit_m22DF3B7E5AFF3E8C8902EC1D98CD56CBC8375F54(L_1, ReadOnlySpan_1_op_Implicit_m22DF3B7E5AFF3E8C8902EC1D98CD56CBC8375F54_RuntimeMethod_var);
		bool L_3;
		L_3 = IPv6AddressHelper_ShouldHaveIpv4Embedded_m08BEFD0452A0145779E70931B00F2D6EA15A1E70(L_2, NULL);
		if (!L_3)
		{
			goto IL_0047;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_4 = ___0_address;
		StringBuilder_t* L_5 = V_0;
		IPAddressParser_AppendSections_m141C016465F9E7E1538E03340FEC16F89B500284(L_4, 0, 6, L_5, NULL);
		StringBuilder_t* L_6 = V_0;
		StringBuilder_t* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_7, NULL);
		NullCheck(L_6);
		Il2CppChar L_9;
		L_9 = StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D(L_6, ((int32_t)il2cpp_codegen_subtract(L_8, 1)), NULL);
		if ((((int32_t)L_9) == ((int32_t)((int32_t)58))))
		{
			goto IL_0039;
		}
	}
	{
		StringBuilder_t* L_10 = V_0;
		NullCheck(L_10);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_10, ((int32_t)58), NULL);
	}

IL_0039:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_12 = ___0_address;
		uint32_t L_13;
		L_13 = IPAddressParser_ExtractIPv4Address_mB79D4899358C69C1FC7C44C81A26BBD976FC2CB6(L_12, NULL);
		StringBuilder_t* L_14 = V_0;
		IPAddressParser_IPv4AddressToString_m4113E0673C882A7CB1313639E2836FB24B9BC6A0(L_13, L_14, NULL);
		goto IL_0050;
	}

IL_0047:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_15 = ___0_address;
		StringBuilder_t* L_16 = V_0;
		IPAddressParser_AppendSections_m141C016465F9E7E1538E03340FEC16F89B500284(L_15, 0, 8, L_16, NULL);
	}

IL_0050:
	{
		uint32_t L_17 = ___1_scopeId;
		if (!L_17)
		{
			goto IL_0062;
		}
	}
	{
		StringBuilder_t* L_18 = V_0;
		NullCheck(L_18);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_18, ((int32_t)37), NULL);
		uint32_t L_20 = ___1_scopeId;
		NullCheck(L_19);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m3C5F10B877B802CA99FA61EC5360B30631270062(L_19, L_20, NULL);
	}

IL_0062:
	{
		StringBuilder_t* L_22 = V_0;
		return L_22;
	}
}
// System.Void System.Net.IPAddressParser::FormatIPv4AddressNumber(System.Int32,System.Char*,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddressParser_FormatIPv4AddressNumber_m716041E973744C431B090589D624C53696FD801F (int32_t ___0_number, Il2CppChar* ___1_addressString, int32_t* ___2_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B4_0 = 0;
	int32_t* G_B4_1 = NULL;
	int32_t G_B1_0 = 0;
	int32_t* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	int32_t* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	int32_t* G_B2_1 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	int32_t* G_B5_2 = NULL;
	{
		int32_t* L_0 = ___2_offset;
		int32_t* L_1 = ___2_offset;
		int32_t L_2 = *((int32_t*)L_1);
		int32_t L_3 = ___0_number;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)99))))
		{
			G_B4_0 = L_2;
			G_B4_1 = L_0;
			goto IL_0013;
		}
	}
	{
		int32_t L_4 = ___0_number;
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)9))))
		{
			G_B3_0 = G_B1_0;
			G_B3_1 = G_B1_1;
			goto IL_0010;
		}
	}
	{
		G_B5_0 = 1;
		G_B5_1 = G_B2_0;
		G_B5_2 = G_B2_1;
		goto IL_0014;
	}

IL_0010:
	{
		G_B5_0 = 2;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0014;
	}

IL_0013:
	{
		G_B5_0 = 3;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0014:
	{
		*((int32_t*)G_B5_2) = (int32_t)((int32_t)il2cpp_codegen_add(G_B5_1, G_B5_0));
		int32_t* L_5 = ___2_offset;
		int32_t L_6 = *((int32_t*)L_5);
		V_0 = L_6;
	}

IL_0019:
	{
		int32_t L_7 = ___0_number;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = Math_DivRem_m531807E96CEE227EF54C8C16753B3F05A0F8BCB5(L_7, ((int32_t)10), (&V_1), NULL);
		___0_number = L_8;
		Il2CppChar* L_9 = ___1_addressString;
		int32_t L_10 = V_0;
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		V_0 = L_11;
		int32_t L_12 = V_1;
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), 2))))) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)48), L_12)));
		int32_t L_13 = ___0_number;
		if (L_13)
		{
			goto IL_0019;
		}
	}
	{
		return;
	}
}
// System.Void System.Net.IPAddressParser::AppendSections(System.UInt16[],System.Int32,System.Int32,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddressParser_AppendSections_m141C016465F9E7E1538E03340FEC16F89B500284 (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_address, int32_t ___1_fromInclusive, int32_t ___2_toExclusive, StringBuilder_t* ___3_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m0B70907CF5F6B4F10CB2914FEFC34CBE07112698_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5295380188F75D696383F8BDB2147F0053791372);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___0_address;
		int32_t L_1 = ___1_fromInclusive;
		int32_t L_2 = ___2_toExclusive;
		int32_t L_3 = ___1_fromInclusive;
		ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F L_4;
		memset((&L_4), 0, sizeof(L_4));
		ReadOnlySpan_1__ctor_m0B70907CF5F6B4F10CB2914FEFC34CBE07112698_inline((&L_4), L_0, L_1, ((int32_t)il2cpp_codegen_subtract(L_2, L_3)), /*hidden argument*/ReadOnlySpan_1__ctor_m0B70907CF5F6B4F10CB2914FEFC34CBE07112698_RuntimeMethod_var);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_5;
		L_5 = IPv6AddressHelper_FindCompressionRange_m5BA0C004FA7BE7CB3C520AB47C4D6B6FA6C13C56(L_4, NULL);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_6 = L_5;
		int32_t L_7 = L_6.___Item1_0;
		V_0 = L_7;
		int32_t L_8 = L_6.___Item2_1;
		V_1 = L_8;
		V_2 = (bool)0;
		int32_t L_9 = ___1_fromInclusive;
		V_3 = L_9;
		goto IL_003d;
	}

IL_0022:
	{
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_002e;
		}
	}
	{
		StringBuilder_t* L_11 = ___3_buffer;
		NullCheck(L_11);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_11, ((int32_t)58), NULL);
	}

IL_002e:
	{
		V_2 = (bool)1;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_13 = ___0_address;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		uint16_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		StringBuilder_t* L_17 = ___3_buffer;
		IPAddressParser_AppendHex_m877259AD615A68FDC55EDC188758E5AA95C124B2(L_16, L_17, NULL);
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_003d:
	{
		int32_t L_19 = V_3;
		int32_t L_20 = V_0;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_21 = V_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		StringBuilder_t* L_22 = ___3_buffer;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_22, _stringLiteral5295380188F75D696383F8BDB2147F0053791372, NULL);
		V_2 = (bool)0;
		int32_t L_24 = V_1;
		___1_fromInclusive = L_24;
	}

IL_0056:
	{
		int32_t L_25 = ___1_fromInclusive;
		V_4 = L_25;
		goto IL_0079;
	}

IL_005b:
	{
		bool L_26 = V_2;
		if (!L_26)
		{
			goto IL_0067;
		}
	}
	{
		StringBuilder_t* L_27 = ___3_buffer;
		NullCheck(L_27);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_27, ((int32_t)58), NULL);
	}

IL_0067:
	{
		V_2 = (bool)1;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_29 = ___0_address;
		int32_t L_30 = V_4;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		uint16_t L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		StringBuilder_t* L_33 = ___3_buffer;
		IPAddressParser_AppendHex_m877259AD615A68FDC55EDC188758E5AA95C124B2(L_32, L_33, NULL);
		int32_t L_34 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_0079:
	{
		int32_t L_35 = V_4;
		int32_t L_36 = ___2_toExclusive;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_005b;
		}
	}
	{
		return;
	}
}
// System.Void System.Net.IPAddressParser::AppendHex(System.UInt16,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddressParser_AppendHex_m877259AD615A68FDC55EDC188758E5AA95C124B2 (uint16_t ___0_value, StringBuilder_t* ___1_buffer, const RuntimeMethod* method) 
{
	Il2CppChar* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar* G_B3_0 = NULL;
	Il2CppChar* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	Il2CppChar* G_B4_1 = NULL;
	{
		uintptr_t L_0 = ((uintptr_t)8);
		int8_t* L_1 = (int8_t*) (L_0 ? alloca(L_0) : NULL);
		memset(L_1, 0, L_0);
		V_0 = (Il2CppChar*)(L_1);
		V_1 = 4;
	}

IL_0007:
	{
		uint16_t L_2 = ___0_value;
		V_2 = ((int32_t)((int32_t)L_2%((int32_t)16)));
		uint16_t L_3 = ___0_value;
		___0_value = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_3/((int32_t)16))));
		Il2CppChar* L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		V_1 = L_6;
		int32_t L_7 = V_2;
		G_B2_0 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_6), 2))));
		if ((((int32_t)L_7) < ((int32_t)((int32_t)10))))
		{
			G_B3_0 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_6), 2))));
			goto IL_002c;
		}
	}
	{
		int32_t L_8 = V_2;
		G_B4_0 = ((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)97), ((int32_t)il2cpp_codegen_subtract(L_8, ((int32_t)10))))));
		G_B4_1 = G_B2_0;
		goto IL_0031;
	}

IL_002c:
	{
		int32_t L_9 = V_2;
		G_B4_0 = ((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)48), L_9)));
		G_B4_1 = G_B3_0;
	}

IL_0031:
	{
		*((int16_t*)G_B4_1) = (int16_t)G_B4_0;
		uint16_t L_10 = ___0_value;
		if (L_10)
		{
			goto IL_0007;
		}
	}
	{
		StringBuilder_t* L_11 = ___1_buffer;
		Il2CppChar* L_12 = V_0;
		int32_t L_13 = V_1;
		int32_t L_14 = V_1;
		NullCheck(L_11);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m3B01AD486432033546C698FB95D3067DCB1A1448(L_11, ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), 2)))), ((int32_t)il2cpp_codegen_subtract(4, L_14)), NULL);
		return;
	}
}
// System.UInt32 System.Net.IPAddressParser::ExtractIPv4Address(System.UInt16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t IPAddressParser_ExtractIPv4Address_mB79D4899358C69C1FC7C44C81A26BBD976FC2CB6 (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_address, const RuntimeMethod* method) 
{
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___0_address;
		NullCheck(L_0);
		int32_t L_1 = 7;
		uint16_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		uint16_t L_3;
		L_3 = IPAddressParser_Reverse_mDEBC20FC5D00F7C505E1ADE428CB6967B72B425E(L_2, NULL);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_4 = ___0_address;
		NullCheck(L_4);
		int32_t L_5 = 6;
		uint16_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		uint16_t L_7;
		L_7 = IPAddressParser_Reverse_mDEBC20FC5D00F7C505E1ADE428CB6967B72B425E(L_6, NULL);
		return ((int32_t)(((int32_t)((int32_t)L_3<<((int32_t)16)))|(int32_t)L_7));
	}
}
// System.UInt16 System.Net.IPAddressParser::Reverse(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t IPAddressParser_Reverse_mDEBC20FC5D00F7C505E1ADE428CB6967B72B425E (uint16_t ___0_number, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___0_number;
		uint16_t L_1 = ___0_number;
		return (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_0>>8))&((int32_t)255)))|((int32_t)(((int32_t)((int32_t)L_1<<8))&((int32_t)65280))))));
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
// System.Void System.Net.ServicePointManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicePointManager__cctor_mB2159CD3E1D15E7F0C3D395EC4B004696A8ACEFB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2__ctor_m73468EC4E3B499BCB73252A85E27618168FA0460_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_tA479A4D42D40E0772A26F55B2BB647B6B7B8BDD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConcurrentDictionary_2_tA479A4D42D40E0772A26F55B2BB647B6B7B8BDD6* L_0 = (ConcurrentDictionary_2_tA479A4D42D40E0772A26F55B2BB647B6B7B8BDD6*)il2cpp_codegen_object_new(ConcurrentDictionary_2_tA479A4D42D40E0772A26F55B2BB647B6B7B8BDD6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ConcurrentDictionary_2__ctor_m73468EC4E3B499BCB73252A85E27618168FA0460(L_0, ConcurrentDictionary_2__ctor_m73468EC4E3B499BCB73252A85E27618168FA0460_RuntimeMethod_var);
		((ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_StaticFields*)il2cpp_codegen_static_fields_for(ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_il2cpp_TypeInfo_var))->___servicePoints_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_StaticFields*)il2cpp_codegen_static_fields_for(ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_il2cpp_TypeInfo_var))->___servicePoints_0), (void*)L_0);
		((ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_StaticFields*)il2cpp_codegen_static_fields_for(ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_il2cpp_TypeInfo_var))->___defaultConnectionLimit_1 = ((int32_t)10);
		((ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_StaticFields*)il2cpp_codegen_static_fields_for(ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_il2cpp_TypeInfo_var))->___maxServicePointIdleTime_2 = ((int32_t)100000);
		((ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_StaticFields*)il2cpp_codegen_static_fields_for(ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_il2cpp_TypeInfo_var))->___maxServicePoints_3 = 0;
		((ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_StaticFields*)il2cpp_codegen_static_fields_for(ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_il2cpp_TypeInfo_var))->___dnsRefreshTimeout_4 = ((int32_t)120000);
		((ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_StaticFields*)il2cpp_codegen_static_fields_for(ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_il2cpp_TypeInfo_var))->____checkCRL_5 = (bool)0;
		((ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_StaticFields*)il2cpp_codegen_static_fields_for(ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_il2cpp_TypeInfo_var))->____securityProtocol_6 = 0;
		((ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_StaticFields*)il2cpp_codegen_static_fields_for(ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_il2cpp_TypeInfo_var))->___expectContinue_7 = (bool)1;
		return;
	}
}
// System.Boolean System.Net.ServicePointManager::get_CheckCertificateRevocationList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ServicePointManager_get_CheckCertificateRevocationList_m2B469F84124A2FB6AD78D7F07A8C50DD427E6204 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_il2cpp_TypeInfo_var);
		bool L_0 = ((ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_StaticFields*)il2cpp_codegen_static_fields_for(ServicePointManager_t124F9D59A0C6581AC0C21156D657A2EB3C7EE120_il2cpp_TypeInfo_var))->____checkCRL_5;
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
// System.Void System.Net.Security.AuthenticatedStream::.ctor(System.IO.Stream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticatedStream__ctor_m8B163146A01B938A3E87E1BED07EE07494A3E357 (AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_innerStream, bool ___1_leaveInnerStreamOpen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_innerStream;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___0_innerStream;
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ((Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields*)il2cpp_codegen_static_fields_for(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var))->___Null_1;
		if ((!(((RuntimeObject*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_1) == ((RuntimeObject*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)L_2))))
		{
			goto IL_001c;
		}
	}

IL_0011:
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA6EAFAF4139980ACB770E237272125EB9180B7A6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AuthenticatedStream__ctor_m8B163146A01B938A3E87E1BED07EE07494A3E357_RuntimeMethod_var)));
	}

IL_001c:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = ___0_innerStream;
		NullCheck(L_4);
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_4);
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = ___0_innerStream;
		NullCheck(L_6);
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_6);
		if (L_7)
		{
			goto IL_0041;
		}
	}

IL_002c:
	{
		String_t* L_8;
		L_8 = SR_GetString_m2F0EFCFA5FE3DB6DE89C5823284302D691355AA6(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1F40F39B9F659411903AC93DF93E8658291E5522)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_9, L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA6EAFAF4139980ACB770E237272125EB9180B7A6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AuthenticatedStream__ctor_m8B163146A01B938A3E87E1BED07EE07494A3E357_RuntimeMethod_var)));
	}

IL_0041:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_10 = ___0_innerStream;
		__this->____InnerStream_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____InnerStream_4), (void*)L_10);
		bool L_11 = ___1_leaveInnerStreamOpen;
		__this->____LeaveStreamOpen_5 = L_11;
		return;
	}
}
// System.IO.Stream System.Net.Security.AuthenticatedStream::get_InnerStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* AuthenticatedStream_get_InnerStream_m5BDA4857898A90C696DAD90FD61C536FC3EB10C7 (AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____InnerStream_4;
		return L_0;
	}
}
// System.Void System.Net.Security.AuthenticatedStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticatedStream_Dispose_m031F600EE876A06427FB0713D992FF02B9C3320F (AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				bool L_0 = ___0_disposing;
				Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C(__this, L_0, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				bool L_1 = ___0_disposing;
				if (!L_1)
				{
					goto IL_0023_1;
				}
			}
			{
				bool L_2 = __this->____LeaveStreamOpen_5;
				if (!L_2)
				{
					goto IL_0018_1;
				}
			}
			{
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = __this->____InnerStream_4;
				NullCheck(L_3);
				VirtualActionInvoker0::Invoke(17 /* System.Void System.IO.Stream::Flush() */, L_3);
				goto IL_002d;
			}

IL_0018_1:
			{
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = __this->____InnerStream_4;
				NullCheck(L_4);
				VirtualActionInvoker0::Invoke(15 /* System.Void System.IO.Stream::Close() */, L_4);
			}

IL_0023_1:
			{
				goto IL_002d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002d:
	{
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
// Mono.Net.Security.MobileAuthenticatedStream System.Net.Security.SslStream::get_Impl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, const RuntimeMethod* method) 
{
	{
		SslStream_CheckDisposed_m884E18F119B366EE6734CCFA126A1F633687FA95(__this, NULL);
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0 = __this->___impl_6;
		return L_0;
	}
}
// System.Boolean System.Net.Security.SslStream::get_IsAuthenticated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SslStream_get_IsAuthenticated_m5056C714711944DA54B35F6F2A3025A720B49290 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0;
		L_0 = SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(35 /* System.Boolean System.Net.Security.AuthenticatedStream::get_IsAuthenticated() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Net.Security.SslStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SslStream_get_CanSeek_mA98FD41EDB70B03DB44F714CE952E128CA9D9B4B (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Boolean System.Net.Security.SslStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SslStream_get_CanRead_m0B2ED5711B4D7C796529F56D7039AD546571FEF2 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0 = __this->___impl_6;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_1 = __this->___impl_6;
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_1);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Boolean System.Net.Security.SslStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SslStream_get_CanWrite_mCBCABFAC940539066F34E4480E52E07CA06DA7CE (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0 = __this->___impl_6;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_1 = __this->___impl_6;
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_1);
		return L_2;
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Int64 System.Net.Security.SslStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SslStream_get_Length_mD6515D77DBB57912C598761F67C321B6B16E129C (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0;
		L_0 = SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057(__this, NULL);
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_0);
		return L_1;
	}
}
// System.Int64 System.Net.Security.SslStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SslStream_get_Position_mD2DBB36BA22F4620B635557B5748E0928F28B6A2 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0;
		L_0 = SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057(__this, NULL);
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_0);
		return L_1;
	}
}
// System.Void System.Net.Security.SslStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream_set_Position_m70987A87C7DB346D2FD447EA11E96774105EE5D2 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = SR_GetString_m2F0EFCFA5FE3DB6DE89C5823284302D691355AA6(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9A1C57A14DBAA067A98C8B33FA6B28D793AFE67D)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SslStream_set_Position_m70987A87C7DB346D2FD447EA11E96774105EE5D2_RuntimeMethod_var)));
	}
}
// System.Void System.Net.Security.SslStream::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream_SetLength_m3B8BAE2F8203BB823F1E934195F50842A46E5643 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0;
		L_0 = SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057(__this, NULL);
		int64_t L_1 = ___0_value;
		NullCheck(L_0);
		VirtualActionInvoker1< int64_t >::Invoke(28 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_0, L_1);
		return;
	}
}
// System.Int64 System.Net.Security.SslStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SslStream_Seek_mFEDBF392998DDDB0F7A71F25D1BB821EA1463B25 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, int64_t ___0_offset, int32_t ___1_origin, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = SR_GetString_m2F0EFCFA5FE3DB6DE89C5823284302D691355AA6(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9A1C57A14DBAA067A98C8B33FA6B28D793AFE67D)), NULL);
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SslStream_Seek_mFEDBF392998DDDB0F7A71F25D1BB821EA1463B25_RuntimeMethod_var)));
	}
}
// System.Void System.Net.Security.SslStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream_Flush_m61B328FCFEB939DE23740823CE3EB7E8DF3B14A4 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0;
		L_0 = AuthenticatedStream_get_InnerStream_m5BDA4857898A90C696DAD90FD61C536FC3EB10C7_inline(__this, NULL);
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(17 /* System.Void System.IO.Stream::Flush() */, L_0);
		return;
	}
}
// System.Void System.Net.Security.SslStream::CheckDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream_CheckDisposed_m884E18F119B366EE6734CCFA126A1F633687FA95 (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0 = __this->___impl_6;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_1 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6FE6AA6EF03FB6550152903A7B201A6108F728DB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SslStream_CheckDisposed_m884E18F119B366EE6734CCFA126A1F633687FA95_RuntimeMethod_var)));
	}

IL_0013:
	{
		return;
	}
}
// System.Int32 System.Net.Security.SslStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SslStream_Read_mEAFC2AA192D9EAF401E2B067395EA08EDC5FB47E (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0;
		L_0 = SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_buffer;
		int32_t L_2 = ___1_offset;
		int32_t L_3 = ___2_count;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(29 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Void System.Net.Security.SslStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SslStream_Write_mCF650FDF725E1AAEDC462A016A38E535F7210F3C (SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	{
		MobileAuthenticatedStream_tD0306DC2B0CDA3C7DB261C19FFA35CA8EE24309E* L_0;
		L_0 = SslStream_get_Impl_m1356F55D556B6CBE922FB053F79BC930FCADF057(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_buffer;
		int32_t L_2 = ___1_offset;
		int32_t L_3 = ___2_count;
		NullCheck(L_0);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(32 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
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
// System.Void System.ComponentModel.EditorBrowsableAttribute::.ctor(System.ComponentModel.EditorBrowsableState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditorBrowsableAttribute__ctor_mE6105AD9666A4DF03DB2590C687EAC6B12D908CE (EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D* __this, int32_t ___0_state, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		int32_t L_0 = ___0_state;
		__this->___browsableState_0 = L_0;
		return;
	}
}
// System.Boolean System.ComponentModel.EditorBrowsableAttribute::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EditorBrowsableAttribute_Equals_m2DFA6ADDE69D95657A8257840C01FCAF74A6B02F (EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D*)__this))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D*)IsInstSealed((RuntimeObject*)L_1, EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D_il2cpp_TypeInfo_var));
		EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = L_3->___browsableState_0;
		int32_t L_5 = __this->___browsableState_0;
		return (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
	}

IL_001f:
	{
		return (bool)0;
	}
}
// System.Int32 System.ComponentModel.EditorBrowsableAttribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EditorBrowsableAttribute_GetHashCode_m1AE50FA45B338D71189AA3C249DB56406DEC798C (EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Attribute_GetHashCode_mAE2C17FF608041F608207E2202E1BC0F98919C08(__this, NULL);
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
// System.Void System.ComponentModel.DescriptionAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescriptionAttribute__ctor_m6140728AB61731BC01DEC122FDAA93854AAC723F (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		DescriptionAttribute__ctor_m5A3D1DF34E3AACD9FF690A3CBE78F822F3A2EF97(__this, L_0, NULL);
		return;
	}
}
// System.Void System.ComponentModel.DescriptionAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescriptionAttribute__ctor_m5A3D1DF34E3AACD9FF690A3CBE78F822F3A2EF97 (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, String_t* ___0_description, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___0_description;
		DescriptionAttribute_set_DescriptionValue_mE3DE3C009CBEA82A5DC0EFB299943118BF487800_inline(__this, L_0, NULL);
		return;
	}
}
// System.String System.ComponentModel.DescriptionAttribute::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DescriptionAttribute_get_Description_m153F27F0911FC88F9DD8856BCA449AF5BE46F100 (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = DescriptionAttribute_get_DescriptionValue_m1F4A0829E3BE8AF3BBB9A5F2344BA672E07DC975_inline(__this, NULL);
		return L_0;
	}
}
// System.String System.ComponentModel.DescriptionAttribute::get_DescriptionValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DescriptionAttribute_get_DescriptionValue_m1F4A0829E3BE8AF3BBB9A5F2344BA672E07DC975 (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CDescriptionValueU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void System.ComponentModel.DescriptionAttribute::set_DescriptionValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescriptionAttribute_set_DescriptionValue_mE3DE3C009CBEA82A5DC0EFB299943118BF487800 (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CDescriptionValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDescriptionValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Boolean System.ComponentModel.DescriptionAttribute::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DescriptionAttribute_Equals_m1CD8A994656358F30F29950E0F51F6FDFCA5306A (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86*)__this))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86*)IsInstClass((RuntimeObject*)L_1, DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_il2cpp_TypeInfo_var));
		DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.ComponentModel.DescriptionAttribute::get_Description() */, L_3);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.ComponentModel.DescriptionAttribute::get_Description() */, __this);
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, L_5, NULL);
		return L_6;
	}

IL_0022:
	{
		return (bool)0;
	}
}
// System.Int32 System.ComponentModel.DescriptionAttribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DescriptionAttribute_GetHashCode_m611CD3279B54EE7678ED42409F142DF4303A3357 (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.ComponentModel.DescriptionAttribute::get_Description() */, __this);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Void System.ComponentModel.DescriptionAttribute::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescriptionAttribute__cctor_m834DAB71B6D455F27EDFF240E854DC175D402775 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* L_0 = (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86*)il2cpp_codegen_object_new(DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DescriptionAttribute__ctor_m6140728AB61731BC01DEC122FDAA93854AAC723F(L_0, NULL);
		((DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_StaticFields*)il2cpp_codegen_static_fields_for(DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_il2cpp_TypeInfo_var))->___Default_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_StaticFields*)il2cpp_codegen_static_fields_for(DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_il2cpp_TypeInfo_var))->___Default_0), (void*)L_0);
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
// System.Void System.ComponentModel.DisplayNameAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayNameAttribute__ctor_mE16A1FD5C8425C7F00EC5728A1227AF6FBEFB968 (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		DisplayNameAttribute__ctor_m396F07353E80428B4AEB85DC66F5B9380A077AE3(__this, L_0, NULL);
		return;
	}
}
// System.Void System.ComponentModel.DisplayNameAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayNameAttribute__ctor_m396F07353E80428B4AEB85DC66F5B9380A077AE3 (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* __this, String_t* ___0_displayName, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___0_displayName;
		DisplayNameAttribute_set_DisplayNameValue_m2DA6A8AA72F3969BA5639F707AB90A2D363BC49C_inline(__this, L_0, NULL);
		return;
	}
}
// System.String System.ComponentModel.DisplayNameAttribute::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DisplayNameAttribute_get_DisplayName_mA3E91855E1EAC0085BF2C1EB501B7801B9563D5D (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = DisplayNameAttribute_get_DisplayNameValue_mD9F58F5FFF2B7C682D8470101352BEA88AE0E5AC_inline(__this, NULL);
		return L_0;
	}
}
// System.String System.ComponentModel.DisplayNameAttribute::get_DisplayNameValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DisplayNameAttribute_get_DisplayNameValue_mD9F58F5FFF2B7C682D8470101352BEA88AE0E5AC (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CDisplayNameValueU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void System.ComponentModel.DisplayNameAttribute::set_DisplayNameValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayNameAttribute_set_DisplayNameValue_m2DA6A8AA72F3969BA5639F707AB90A2D363BC49C (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CDisplayNameValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayNameValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Boolean System.ComponentModel.DisplayNameAttribute::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DisplayNameAttribute_Equals_m06E1BC5B48A9D42FECF4BEC20338F8DD6A525E88 (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8*)__this))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8*)IsInstClass((RuntimeObject*)L_1, DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8_il2cpp_TypeInfo_var));
		DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.ComponentModel.DisplayNameAttribute::get_DisplayName() */, L_3);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.ComponentModel.DisplayNameAttribute::get_DisplayName() */, __this);
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, L_5, NULL);
		return L_6;
	}

IL_0022:
	{
		return (bool)0;
	}
}
// System.Int32 System.ComponentModel.DisplayNameAttribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DisplayNameAttribute_GetHashCode_m882BB47C783C5D55149DB892F41108D4953B8B16 (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.ComponentModel.DisplayNameAttribute::get_DisplayName() */, __this);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Void System.ComponentModel.DisplayNameAttribute::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayNameAttribute__cctor_mD9A9030A1931AD6CDF0428CFEC3E34B91652A8F4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* L_0 = (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8*)il2cpp_codegen_object_new(DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DisplayNameAttribute__ctor_mE16A1FD5C8425C7F00EC5728A1227AF6FBEFB968(L_0, NULL);
		((DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8_StaticFields*)il2cpp_codegen_static_fields_for(DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8_il2cpp_TypeInfo_var))->___Default_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8_StaticFields*)il2cpp_codegen_static_fields_for(DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8_il2cpp_TypeInfo_var))->___Default_0), (void*)L_0);
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
// System.Void System.ComponentModel.InvalidEnumArgumentException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidEnumArgumentException__ctor_m30DFADC9DAE3067EBFB7AF17F9EE5DBAF5B00D10 (InvalidEnumArgumentException_t5B42625AD815A72639D894ED1592FF4BE438D989* __this, const RuntimeMethod* method) 
{
	{
		InvalidEnumArgumentException__ctor_mB48FBD0C68C97EF69D80B56EB927CAF08E3181E1(__this, (String_t*)NULL, NULL);
		return;
	}
}
// System.Void System.ComponentModel.InvalidEnumArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidEnumArgumentException__ctor_mB48FBD0C68C97EF69D80B56EB927CAF08E3181E1 (InvalidEnumArgumentException_t5B42625AD815A72639D894ED1592FF4BE438D989* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_message;
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(__this, L_0, NULL);
		return;
	}
}
// System.Void System.ComponentModel.InvalidEnumArgumentException::.ctor(System.String,System.Int32,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidEnumArgumentException__ctor_mB6DA9F3F2403BFA3AAD577AA4A27034D29A60EB4 (InvalidEnumArgumentException_t5B42625AD815A72639D894ED1592FF4BE438D989* __this, String_t* ___0_argumentName, int32_t ___1_invalidValue, Type_t* ___2_enumClass, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral443F4C4E0724E859C348938724B926BE877FC5FE);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_argumentName;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		String_t* L_2;
		L_2 = Int32_ToString_m3B2730D9F5B0C1C57DCCC8B8DCFB8E5EC4E8979B((&___1_invalidValue), L_1, NULL);
		Type_t* L_3 = ___2_enumClass;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_3);
		String_t* L_5;
		L_5 = SR_Format_m250FFAE6A6F747F6E6D4BB6EA43A757E347CD51D(_stringLiteral443F4C4E0724E859C348938724B926BE877FC5FE, L_0, L_2, L_4, NULL);
		String_t* L_6 = ___0_argumentName;
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(__this, L_5, L_6, NULL);
		return;
	}
}
// System.Void System.ComponentModel.InvalidEnumArgumentException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidEnumArgumentException__ctor_m05AB9EBB8AEDE6DF1BFE1E8E7F2BA4EB303DAA13 (InvalidEnumArgumentException_t5B42625AD815A72639D894ED1592FF4BE438D989* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___1_context;
		ArgumentException__ctor_mB4FA5CCA0CDB08730E9ED40FA935BA38C032D83A(__this, L_0, L_1, NULL);
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
// System.Void System.ComponentModel.ArrayConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayConverter__ctor_mAA6B57C16F167FF104B8E23402DE87ACA5E13A2B (ArrayConverter_tE417E9DB044C4317BF7F9B7DF5CD0F4C7C38672C* __this, const RuntimeMethod* method) 
{
	{
		CollectionConverter__ctor_m20ED0C661750EBE427D356F24AED92A407988147(__this, NULL);
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
// System.Void System.ComponentModel.BaseNumberConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseNumberConverter__ctor_m697E7E5DB315CE6CDA318F256A634BAEF3C7C76F (BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706* __this, const RuntimeMethod* method) 
{
	{
		TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2(__this, NULL);
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
// System.Void System.ComponentModel.BooleanConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanConverter__ctor_m50990A1CB60D3557199985EF164FF1E8AFCADC87 (BooleanConverter_tC955870C6FB390C432D032E5025342C0BCB2DEE9* __this, const RuntimeMethod* method) 
{
	{
		TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2(__this, NULL);
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
// System.Void System.ComponentModel.DecimalConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecimalConverter__ctor_mC1E815EF17DE8DBD91FB472C83A4F38514704B46 (DecimalConverter_tCBE948B718842C42CB22DF92D59AB2C1EC0FAEDF* __this, const RuntimeMethod* method) 
{
	{
		BaseNumberConverter__ctor_m697E7E5DB315CE6CDA318F256A634BAEF3C7C76F(__this, NULL);
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
// System.Void System.ComponentModel.DesignTimeVisibleAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesignTimeVisibleAttribute__ctor_m89415646271B6901AF745CDD2BF3A2244DFCD946 (DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE* __this, bool ___0_visible, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		bool L_0 = ___0_visible;
		__this->___U3CVisibleU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Boolean System.ComponentModel.DesignTimeVisibleAttribute::get_Visible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DesignTimeVisibleAttribute_get_Visible_m0EB229B7592D784080EEFA2C7100DF58ADFF064F (DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CVisibleU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Boolean System.ComponentModel.DesignTimeVisibleAttribute::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DesignTimeVisibleAttribute_Equals_m59ADCA70D1F8363BAACDC37274852A8E6C9A954A (DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE*)__this))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE*)IsInstSealed((RuntimeObject*)L_1, DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_il2cpp_TypeInfo_var));
		DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE* L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = DesignTimeVisibleAttribute_get_Visible_m0EB229B7592D784080EEFA2C7100DF58ADFF064F_inline(L_3, NULL);
		bool L_5;
		L_5 = DesignTimeVisibleAttribute_get_Visible_m0EB229B7592D784080EEFA2C7100DF58ADFF064F_inline(__this, NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
	}

IL_001f:
	{
		return (bool)0;
	}
}
// System.Int32 System.ComponentModel.DesignTimeVisibleAttribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DesignTimeVisibleAttribute_GetHashCode_m4E2FF875B5BD47A6C7EDCB5F9CB66D6860F5132B (DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		bool L_3;
		L_3 = DesignTimeVisibleAttribute_get_Visible_m0EB229B7592D784080EEFA2C7100DF58ADFF064F_inline(__this, NULL);
		G_B1_0 = L_2;
		if (L_3)
		{
			G_B2_0 = L_2;
			goto IL_001a;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = (-1);
		G_B3_1 = G_B2_0;
	}

IL_001b:
	{
		return ((int32_t)(G_B3_1^G_B3_0));
	}
}
// System.Void System.ComponentModel.DesignTimeVisibleAttribute::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesignTimeVisibleAttribute__cctor_m60EE97AF27C65BA7BD5BC1FC200B7B261BD3F084 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE* L_0 = (DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE*)il2cpp_codegen_object_new(DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DesignTimeVisibleAttribute__ctor_m89415646271B6901AF745CDD2BF3A2244DFCD946(L_0, (bool)1, NULL);
		((DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_StaticFields*)il2cpp_codegen_static_fields_for(DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_il2cpp_TypeInfo_var))->___Yes_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_StaticFields*)il2cpp_codegen_static_fields_for(DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_il2cpp_TypeInfo_var))->___Yes_1), (void*)L_0);
		DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE* L_1 = (DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE*)il2cpp_codegen_object_new(DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		DesignTimeVisibleAttribute__ctor_m89415646271B6901AF745CDD2BF3A2244DFCD946(L_1, (bool)0, NULL);
		((DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_StaticFields*)il2cpp_codegen_static_fields_for(DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_il2cpp_TypeInfo_var))->___No_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_StaticFields*)il2cpp_codegen_static_fields_for(DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_il2cpp_TypeInfo_var))->___No_2), (void*)L_1);
		DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE* L_2 = ((DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_StaticFields*)il2cpp_codegen_static_fields_for(DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_il2cpp_TypeInfo_var))->___Yes_1;
		((DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_StaticFields*)il2cpp_codegen_static_fields_for(DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_il2cpp_TypeInfo_var))->___Default_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_StaticFields*)il2cpp_codegen_static_fields_for(DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE_il2cpp_TypeInfo_var))->___Default_3), (void*)L_2);
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
// System.Void System.ComponentModel.DoubleConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleConverter__ctor_m3CA5201BA68AB510BB2112A6755FCFEAB6DE53BA (DoubleConverter_t1FB61A3A8171D3023AA9678231D9C480A67799DE* __this, const RuntimeMethod* method) 
{
	{
		BaseNumberConverter__ctor_m697E7E5DB315CE6CDA318F256A634BAEF3C7C76F(__this, NULL);
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
// System.Void System.ComponentModel.Int16Converter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Int16Converter__ctor_m3803A7772B21F49200FC142C193A40DC286C9DFF (Int16Converter_t6513884DE2649E1FA03AC947F80FCE6BE61792BB* __this, const RuntimeMethod* method) 
{
	{
		BaseNumberConverter__ctor_m697E7E5DB315CE6CDA318F256A634BAEF3C7C76F(__this, NULL);
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
// System.Void System.ComponentModel.Int32Converter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Int32Converter__ctor_m88220DA12F6ED6FE4D1232B73C20DECE9EFC63FF (Int32Converter_t461564B848A4566C9E72FED147B4FC64BD4BE6ED* __this, const RuntimeMethod* method) 
{
	{
		BaseNumberConverter__ctor_m697E7E5DB315CE6CDA318F256A634BAEF3C7C76F(__this, NULL);
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
// System.Void System.ComponentModel.Int64Converter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Int64Converter__ctor_m3C124DB065F27F6BEAB7ABAF4B3D13E6A9F3E94C (Int64Converter_tF9458770A9BF6718A4866AFEAABCACD022754E23* __this, const RuntimeMethod* method) 
{
	{
		BaseNumberConverter__ctor_m697E7E5DB315CE6CDA318F256A634BAEF3C7C76F(__this, NULL);
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
// System.Void System.ComponentModel.SingleConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleConverter__ctor_m463B63EB8D945D2D43E5B8099D8F0EC24AEBDA7A (SingleConverter_tF3C0B984505288F214BFECEAD90CA0498B7378C1* __this, const RuntimeMethod* method) 
{
	{
		BaseNumberConverter__ctor_m697E7E5DB315CE6CDA318F256A634BAEF3C7C76F(__this, NULL);
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
// System.Void System.ComponentModel.StringConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringConverter__ctor_m074D8686ED6ABC0E64C20D1EFD4406F215E7187A (StringConverter_t1AE794D42AE414C00F2443B76F3EA694C310FF1E* __this, const RuntimeMethod* method) 
{
	{
		TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2(__this, NULL);
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
// System.Void System.ComponentModel.TimeSpanConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeSpanConverter__ctor_m7319DCEEDA2578B340AD4FEEE010AE5CEFAC9BD5 (TimeSpanConverter_tB91A0347D2F1228A476F50705D3048A50F1A4B9F* __this, const RuntimeMethod* method) 
{
	{
		TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2(__this, NULL);
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
// System.Void System.ComponentModel.TypeConverterAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverterAttribute__ctor_mEEE3CA7C17555BA93BB76201BA2BCF879E617DA9 (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___U3CConverterTypeNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConverterTypeNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void System.ComponentModel.TypeConverterAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverterAttribute__ctor_m0E1A55E1BD368F0AABCAF766BBCE1D275777A52A (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* __this, Type_t* ___0_type, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		Type_t* L_0 = ___0_type;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Type::get_AssemblyQualifiedName() */, L_0);
		__this->___U3CConverterTypeNameU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConverterTypeNameU3Ek__BackingField_1), (void*)L_1);
		return;
	}
}
// System.String System.ComponentModel.TypeConverterAttribute::get_ConverterTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeConverterAttribute_get_ConverterTypeName_mBBE5335F11FC13345D2828866172BB5DDF9F3E45 (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CConverterTypeNameU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Boolean System.ComponentModel.TypeConverterAttribute::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConverterAttribute_Equals_mA3BF2C8CFA0AE8B5D0F52E066B1141AA53B4E015 (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		V_0 = ((TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3*)IsInstSealed((RuntimeObject*)L_0, TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_il2cpp_TypeInfo_var));
		TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = TypeConverterAttribute_get_ConverterTypeName_mBBE5335F11FC13345D2828866172BB5DDF9F3E45_inline(L_2, NULL);
		String_t* L_4;
		L_4 = TypeConverterAttribute_get_ConverterTypeName_mBBE5335F11FC13345D2828866172BB5DDF9F3E45_inline(__this, NULL);
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, L_4, NULL);
		return L_5;
	}

IL_001c:
	{
		return (bool)0;
	}
}
// System.Int32 System.ComponentModel.TypeConverterAttribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeConverterAttribute_GetHashCode_m23ACA2A297447E17150BF490188919676FBD8A01 (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = TypeConverterAttribute_get_ConverterTypeName_mBBE5335F11FC13345D2828866172BB5DDF9F3E45_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Void System.ComponentModel.TypeConverterAttribute::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverterAttribute__cctor_m7A206154E18C66B9CEA6934D8AFB1AE9DA4EA666 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* L_0 = (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3*)il2cpp_codegen_object_new(TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TypeConverterAttribute__ctor_mEEE3CA7C17555BA93BB76201BA2BCF879E617DA9(L_0, NULL);
		((TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_StaticFields*)il2cpp_codegen_static_fields_for(TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_il2cpp_TypeInfo_var))->___Default_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_StaticFields*)il2cpp_codegen_static_fields_for(TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_il2cpp_TypeInfo_var))->___Default_0), (void*)L_0);
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
// System.Void System.ComponentModel.CollectionConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionConverter__ctor_m20ED0C661750EBE427D356F24AED92A407988147 (CollectionConverter_t47EAA5F1386CB891414AB5096CFA50418A5D64B0* __this, const RuntimeMethod* method) 
{
	{
		TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2(__this, NULL);
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
// System.Void System.ComponentModel.EnumConverter::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumConverter__ctor_m3E3C7D81C8092A5591BAA556288B2A3E22DCA99B (EnumConverter_t2E799BC1F322DBF25DEFEC2C57C006223320182D* __this, Type_t* ___0_type, const RuntimeMethod* method) 
{
	{
		TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2(__this, NULL);
		Type_t* L_0 = ___0_type;
		__this->___type_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___type_3), (void*)L_0);
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
// System.Void System.ComponentModel.TypeConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2 (TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* __this, const RuntimeMethod* method) 
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
// System.Void System.IO.Compression.GZipStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream__ctor_m25053634B041374B528EB0F01612B072A9AF2E05 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int32_t ___1_mode, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		int32_t L_1 = ___1_mode;
		GZipStream__ctor_mFF3ECD9074856457C500AC6B4F80D833CCE487CF(__this, L_0, L_1, (bool)0, NULL);
		return;
	}
}
// System.Void System.IO.Compression.GZipStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream__ctor_mFF3ECD9074856457C500AC6B4F80D833CCE487CF (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int32_t ___1_mode, bool ___2_leaveOpen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		int32_t L_1 = ___1_mode;
		bool L_2 = ___2_leaveOpen;
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_3 = (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104*)il2cpp_codegen_object_new(DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		DeflateStream__ctor_mFA0036CA1C1411FBED2DDFB2B563635F4755078C(L_3, L_0, L_1, L_2, ((int32_t)31), NULL);
		__this->____deflateStream_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____deflateStream_4), (void*)L_3);
		return;
	}
}
// System.Boolean System.IO.Compression.GZipStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GZipStream_get_CanRead_mFF4A941C8BD1D9C3A249A084C4335EFF8FAD47BB (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, const RuntimeMethod* method) 
{
	DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* G_B2_0 = NULL;
	DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* G_B1_0 = NULL;
	{
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_4;
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, G_B2_0);
		return L_2;
	}
}
// System.Boolean System.IO.Compression.GZipStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GZipStream_get_CanWrite_m0A3EC64CE819F978DE34A8477FAAA82889AE7248 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, const RuntimeMethod* method) 
{
	DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* G_B2_0 = NULL;
	DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* G_B1_0 = NULL;
	{
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_4;
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.Stream::get_CanWrite() */, G_B2_0);
		return L_2;
	}
}
// System.Boolean System.IO.Compression.GZipStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GZipStream_get_CanSeek_m530B997FC6D2144F7B73E708903E6E9F39E304DD (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, const RuntimeMethod* method) 
{
	DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* G_B2_0 = NULL;
	DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* G_B1_0 = NULL;
	{
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_4;
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanSeek() */, G_B2_0);
		return L_2;
	}
}
// System.Int64 System.IO.Compression.GZipStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GZipStream_get_Length_mCBA17CDD8925825AC2EB07E04CDE391B8E46C583 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral898F62C1CB5B52471F58EE23AAB5BCB055458288)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_get_Length_mCBA17CDD8925825AC2EB07E04CDE391B8E46C583_RuntimeMethod_var)));
	}
}
// System.Int64 System.IO.Compression.GZipStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GZipStream_get_Position_m934BD5709034CAAEE05A6BCF382D1FEB0314C420 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral898F62C1CB5B52471F58EE23AAB5BCB055458288)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_get_Position_m934BD5709034CAAEE05A6BCF382D1FEB0314C420_RuntimeMethod_var)));
	}
}
// System.Void System.IO.Compression.GZipStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_set_Position_m7FEEE9F3845C130340DC5E1DF984ACB2CD53E957 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral898F62C1CB5B52471F58EE23AAB5BCB055458288)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_set_Position_m7FEEE9F3845C130340DC5E1DF984ACB2CD53E957_RuntimeMethod_var)));
	}
}
// System.Void System.IO.Compression.GZipStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_Flush_m8D38670B3BE0472E83AA60F783A8EF3E1C1F01A0 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, const RuntimeMethod* method) 
{
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_4;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(17 /* System.Void System.IO.Stream::Flush() */, L_0);
		return;
	}
}
// System.Int64 System.IO.Compression.GZipStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t GZipStream_Seek_m72909F60549EAB072B86484A1E80BA15D4352E66 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, int64_t ___0_offset, int32_t ___1_origin, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral898F62C1CB5B52471F58EE23AAB5BCB055458288)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_Seek_m72909F60549EAB072B86484A1E80BA15D4352E66_RuntimeMethod_var)));
	}
}
// System.Void System.IO.Compression.GZipStream::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_SetLength_m5DCF13005B2AB45961D14230670698CBAF93D0C1 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral898F62C1CB5B52471F58EE23AAB5BCB055458288)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_SetLength_m5DCF13005B2AB45961D14230670698CBAF93D0C1_RuntimeMethod_var)));
	}
}
// System.Int32 System.IO.Compression.GZipStream::ReadByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GZipStream_ReadByte_m486ACD72754C08B02CF1B90A71A744EE92F4D42C (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, const RuntimeMethod* method) 
{
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(31 /* System.Int32 System.IO.Stream::ReadByte() */, L_0);
		return L_1;
	}
}
// System.IAsyncResult System.IO.Compression.GZipStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GZipStream_BeginRead_mDD211249BF8242D28889645A05453C3D89C6B0F1 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_asyncCallback, RuntimeObject* ___4_asyncState, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		int32_t L_1 = ___1_offset;
		int32_t L_2 = ___2_count;
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3;
		L_3 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_4;
		L_4 = VirtualFuncInvoker4< Task_1_t4C228DE57804012969575431CFF12D57C875552D*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(21 /* System.Threading.Tasks.Task`1<System.Int32> System.IO.Stream::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken) */, __this, L_0, L_1, L_2, L_3);
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_5 = ___3_asyncCallback;
		RuntimeObject* L_6 = ___4_asyncState;
		RuntimeObject* L_7;
		L_7 = TaskToApm_Begin_mA26D2A4F6EE0582B181AFD83B913916909D02777(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Int32 System.IO.Compression.GZipStream::EndRead(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GZipStream_EndRead_m8245FEE8D2B21A169DD1A40A67B5D398DD6005D2 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, RuntimeObject* ___0_asyncResult, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCA309E122256972A27C74FC814F47AD13AF623ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_asyncResult;
		int32_t L_1;
		L_1 = TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCA309E122256972A27C74FC814F47AD13AF623ED(L_0, TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCA309E122256972A27C74FC814F47AD13AF623ED_RuntimeMethod_var);
		return L_1;
	}
}
// System.Int32 System.IO.Compression.GZipStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GZipStream_Read_m41EC5D087FD227D05C8435E8704C9F0F6A7E2F9D (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_array;
		int32_t L_2 = ___1_offset;
		int32_t L_3 = ___2_count;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(29 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Int32 System.IO.Compression.GZipStream::Read(System.Span`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GZipStream_Read_mBC83A9A584B5A2DC2B08B044E96C0E8AF33723D5 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4 = ___0_buffer;
		int32_t L_5;
		L_5 = Stream_Read_m655A5A3FE25BD7A2D965154D753DB5F360AD46FE(__this, L_4, NULL);
		return L_5;
	}

IL_001f:
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_6 = __this->____deflateStream_4;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_7 = ___0_buffer;
		NullCheck(L_6);
		int32_t L_8;
		L_8 = DeflateStream_ReadCore_m58E605C082DCF3455C4D56EBEBB8F2ABECCC9B40(L_6, L_7, NULL);
		return L_8;
	}
}
// System.IAsyncResult System.IO.Compression.GZipStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GZipStream_BeginWrite_mB80B01F99925CF4A6B201E77B54E7656A40474B8 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_asyncCallback, RuntimeObject* ___4_asyncState, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		int32_t L_1 = ___1_offset;
		int32_t L_2 = ___2_count;
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3;
		L_3 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = VirtualFuncInvoker4< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(25 /* System.Threading.Tasks.Task System.IO.Stream::WriteAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken) */, __this, L_0, L_1, L_2, L_3);
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_5 = ___3_asyncCallback;
		RuntimeObject* L_6 = ___4_asyncState;
		RuntimeObject* L_7;
		L_7 = TaskToApm_Begin_mA26D2A4F6EE0582B181AFD83B913916909D02777(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Void System.IO.Compression.GZipStream::EndWrite(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_EndWrite_m7FC15F1CD67B5C6977FEB16E630545AD6E020C91 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, RuntimeObject* ___0_asyncResult, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_asyncResult;
		TaskToApm_End_mDFB29EEE501409834D464F4C249A535723B7E6ED(L_0, NULL);
		return;
	}
}
// System.Void System.IO.Compression.GZipStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_Write_mCA30092CA9BEFD7425587337A5C4451866E1EB34 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_array;
		int32_t L_2 = ___1_offset;
		int32_t L_3 = ___2_count;
		NullCheck(L_0);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(32 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		return;
	}
}
// System.Void System.IO.Compression.GZipStream::Write(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_Write_mF25D52D7EC30B244830E14477D047FC5028E51D3 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_buffer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4 = ___0_buffer;
		Stream_Write_m84BD9BD831FAC81EAC315389E51E958F4BAA25E8(__this, L_4, NULL);
		return;
	}

IL_001f:
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_5 = __this->____deflateStream_4;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_6 = ___0_buffer;
		NullCheck(L_5);
		DeflateStream_WriteCore_mC6ADF328D0A66CAFEEC9B23F89A22C223DFF3730(L_5, L_6, NULL);
		return;
	}
}
// System.Void System.IO.Compression.GZipStream::CopyTo(System.IO.Stream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_CopyTo_m14B3A1E4E385140F81F16B943C8A9CE21ED908E6 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_destination, int32_t ___1_bufferSize, const RuntimeMethod* method) 
{
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_4;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___0_destination;
		int32_t L_2 = ___1_bufferSize;
		NullCheck(L_0);
		VirtualActionInvoker2< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*, int32_t >::Invoke(14 /* System.Void System.IO.Stream::CopyTo(System.IO.Stream,System.Int32) */, L_0, L_1, L_2);
		return;
	}
}
// System.Void System.IO.Compression.GZipStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_Dispose_mD369BCB8951329CEE518D159BB1D16BBC0C709E3 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001f:
			{// begin finally (depth: 1)
				bool L_0 = ___0_disposing;
				Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C(__this, L_0, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				bool L_1 = ___0_disposing;
				if (!L_1)
				{
					goto IL_0016_1;
				}
			}
			{
				DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_2 = __this->____deflateStream_4;
				if (!L_2)
				{
					goto IL_0016_1;
				}
			}
			{
				DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_3 = __this->____deflateStream_4;
				NullCheck(L_3);
				Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(L_3, NULL);
			}

IL_0016_1:
			{
				__this->____deflateStream_4 = (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____deflateStream_4), (void*)(DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104*)NULL);
				goto IL_0027;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0027:
	{
		return;
	}
}
// System.Threading.Tasks.Task`1<System.Int32> System.IO.Compression.GZipStream::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* GZipStream_ReadAsync_mACECFB99609D4696156F98AE738B2038E6663471 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancellationToken, const RuntimeMethod* method) 
{
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_array;
		int32_t L_2 = ___1_offset;
		int32_t L_3 = ___2_count;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = ___3_cancellationToken;
		NullCheck(L_0);
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_5;
		L_5 = VirtualFuncInvoker4< Task_1_t4C228DE57804012969575431CFF12D57C875552D*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(21 /* System.Threading.Tasks.Task`1<System.Int32> System.IO.Stream::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken) */, L_0, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.ValueTask`1<System.Int32> System.IO.Compression.GZipStream::ReadAsync(System.Memory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 GZipStream_ReadAsync_mCFF5156AFDFF16B472A323F2D1BA86BFE13C7358 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___0_buffer, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_4 = ___0_buffer;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = ___1_cancellationToken;
		ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 L_6;
		L_6 = Stream_ReadAsync_m1AA84A1F2DD3C7555BFC97A636E1CE56EB106B98(__this, L_4, L_5, NULL);
		return L_6;
	}

IL_0020:
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_7 = __this->____deflateStream_4;
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_8 = ___0_buffer;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_9 = ___1_cancellationToken;
		NullCheck(L_7);
		ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 L_10;
		L_10 = DeflateStream_ReadAsyncMemory_m1FC9EB7B2284773AA527913018FEA9EB82965327(L_7, L_8, L_9, NULL);
		return L_10;
	}
}
// System.Threading.Tasks.Task System.IO.Compression.GZipStream::WriteAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* GZipStream_WriteAsync_m2CB67E3DB87DFC01588B604C8E2D60EE1AE27EF7 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancellationToken, const RuntimeMethod* method) 
{
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_array;
		int32_t L_2 = ___1_offset;
		int32_t L_3 = ___2_count;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = ___3_cancellationToken;
		NullCheck(L_0);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
		L_5 = VirtualFuncInvoker4< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(25 /* System.Threading.Tasks.Task System.IO.Stream::WriteAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken) */, L_0, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.ValueTask System.IO.Compression.GZipStream::WriteAsync(System.ReadOnlyMemory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F GZipStream_WriteAsync_m43C1DEA3F232AFD6036CB0637831887E93488000 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___0_buffer, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 L_4 = ___0_buffer;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = ___1_cancellationToken;
		ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F L_6;
		L_6 = Stream_WriteAsync_m31847C7A29AAFDA503991986F2BC02367F7A1C34(__this, L_4, L_5, NULL);
		return L_6;
	}

IL_0020:
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_7 = __this->____deflateStream_4;
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 L_8 = ___0_buffer;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_9 = ___1_cancellationToken;
		NullCheck(L_7);
		ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F L_10;
		L_10 = DeflateStream_WriteAsyncMemory_mDEFCEC8FAA595B11419D022F351AD825C01AFCE6(L_7, L_8, L_9, NULL);
		return L_10;
	}
}
// System.Threading.Tasks.Task System.IO.Compression.GZipStream::FlushAsync(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* GZipStream_FlushAsync_m4464D3AD21EE7393A37FE61CC2232CB19A575136 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_4;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___0_cancellationToken;
		NullCheck(L_0);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2;
		L_2 = VirtualFuncInvoker1< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(18 /* System.Threading.Tasks.Task System.IO.Stream::FlushAsync(System.Threading.CancellationToken) */, L_0, L_1);
		return L_2;
	}
}
// System.Threading.Tasks.Task System.IO.Compression.GZipStream::CopyToAsync(System.IO.Stream,System.Int32,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* GZipStream_CopyToAsync_mA5EE000E141E31AE1DE0594E5439FFBA430BD7F8 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_destination, int32_t ___1_bufferSize, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264(__this, NULL);
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_4;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___0_destination;
		int32_t L_2 = ___1_bufferSize;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___2_cancellationToken;
		NullCheck(L_0);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = VirtualFuncInvoker3< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(13 /* System.Threading.Tasks.Task System.IO.Stream::CopyToAsync(System.IO.Stream,System.Int32,System.Threading.CancellationToken) */, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Void System.IO.Compression.GZipStream::CheckDeflateStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GZipStream_CheckDeflateStream_m691CE26A65C042DAFBA84076906015A8B3CBE264 (GZipStream_t392ABAB2590E1C9CF625043CE14FD2BF7CA5FAE0* __this, const RuntimeMethod* method) 
{
	{
		DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* L_0 = __this->____deflateStream_4;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		GZipStream_ThrowStreamClosedException_m36E38FF71D68FFDE6707E3691F06929BE72713C8(NULL);
	}

IL_000d:
	{
		return;
	}
}
// System.Void System.IO.Compression.GZipStream::ThrowStreamClosedException()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void GZipStream_ThrowStreamClosedException_m36E38FF71D68FFDE6707E3691F06929BE72713C8 (const RuntimeMethod* method) 
{
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_0 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		ObjectDisposedException__ctor_m5C356C25295E89559C120CB4562783AAF7F41C84(L_0, (String_t*)NULL, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral78875BB01F47001614AE95132434E503D00EA404)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GZipStream_ThrowStreamClosedException_m36E38FF71D68FFDE6707E3691F06929BE72713C8_RuntimeMethod_var)));
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
// System.Void System.IO.Compression.DeflateStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_mFA0036CA1C1411FBED2DDFB2B563635F4755078C (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, int32_t ___1_mode, bool ___2_leaveOpen, int32_t ___3_windowsBits, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		int32_t L_1 = ___1_mode;
		bool L_2 = ___2_leaveOpen;
		DeflateStream__ctor_m67AEE7C38BCFD323CD25D3FB36674E6A5010CD36(__this, L_0, L_1, L_2, (bool)1, NULL);
		return;
	}
}
// System.Void System.IO.Compression.DeflateStream::.ctor(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream__ctor_m67AEE7C38BCFD323CD25D3FB36674E6A5010CD36 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_compressedStream, int32_t ___1_mode, bool ___2_leaveOpen, bool ___3_gzip, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_compressedStream;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59BD369CF985844B111CA4447943A285D359441C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream__ctor_m67AEE7C38BCFD323CD25D3FB36674E6A5010CD36_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_2 = ___1_mode;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = ___1_mode;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream__ctor_m67AEE7C38BCFD323CD25D3FB36674E6A5010CD36_RuntimeMethod_var)));
	}

IL_0026:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = ___0_compressedStream;
		__this->___base_stream_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___base_stream_4), (void*)L_5);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = ___0_compressedStream;
		int32_t L_7 = ___1_mode;
		bool L_8 = ___3_gzip;
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_9;
		L_9 = DeflateStreamNative_Create_m94968BF2895D7838185DE455772F3CDDD6E6F4A6(L_6, L_7, L_8, NULL);
		__this->___native_8 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___native_8), (void*)L_9);
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_10 = __this->___native_8;
		if (L_10)
		{
			goto IL_004f;
		}
	}
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_11 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral95B4432B3C3526A7D6F1251C0238760D017B4551)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream__ctor_m67AEE7C38BCFD323CD25D3FB36674E6A5010CD36_RuntimeMethod_var)));
	}

IL_004f:
	{
		int32_t L_12 = ___1_mode;
		__this->___mode_5 = L_12;
		bool L_13 = ___2_leaveOpen;
		__this->___leaveOpen_6 = L_13;
		return;
	}
}
// System.Void System.IO.Compression.DeflateStream::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Finalize_mAFF7BCEF197A6549D13572A0AFD326CD995EA7AC (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			VirtualActionInvoker1< bool >::Invoke(16 /* System.Void System.IO.Stream::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_0010;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0010:
	{
		return;
	}
}
// System.Void System.IO.Compression.DeflateStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Dispose_m85096A7176C94248E02CE7E9DA78338C45B2F746 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_0 = NULL;
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* G_B4_0 = NULL;
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* G_B3_0 = NULL;
	{
		bool L_0 = ___0_disposing;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
	}

IL_0009:
	{
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_1 = __this->___native_8;
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_2 = L_1;
		G_B3_0 = L_2;
		if (L_2)
		{
			G_B4_0 = L_2;
			goto IL_0015;
		}
	}
	{
		goto IL_001b;
	}

IL_0015:
	{
		bool L_3 = ___0_disposing;
		NullCheck(G_B4_0);
		DeflateStreamNative_Dispose_m4FB7DA2D3E50360ECCE3B81A77CF25B5C6722C8E(G_B4_0, L_3, NULL);
	}

IL_001b:
	{
		bool L_4 = ___0_disposing;
		if (!L_4)
		{
			goto IL_004c;
		}
	}
	{
		bool L_5 = __this->___disposed_7;
		if (L_5)
		{
			goto IL_004c;
		}
	}
	{
		__this->___disposed_7 = (bool)1;
		bool L_6 = __this->___leaveOpen_6;
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = __this->___base_stream_4;
		V_0 = L_7;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = V_0;
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_9 = V_0;
		NullCheck(L_9);
		VirtualActionInvoker0::Invoke(15 /* System.Void System.IO.Stream::Close() */, L_9);
	}

IL_0045:
	{
		__this->___base_stream_4 = (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___base_stream_4), (void*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL);
	}

IL_004c:
	{
		bool L_10 = ___0_disposing;
		Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C(__this, L_10, NULL);
		return;
	}
}
// System.Int32 System.IO.Compression.DeflateStream::ReadInternal(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_ReadInternal_m4FCD4EB1534E24E85A9E5D933D6AF6EABF5F223C (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = ___2_count;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		V_1 = L_2;
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		if (((int32_t)(((RuntimeArray*)L_3)->max_length)))
		{
			goto IL_0014;
		}
	}

IL_000f:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_001d;
	}

IL_0014:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		NullCheck(L_4);
		V_0 = (uint8_t*)((uintptr_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_001d:
	{
		uint8_t* L_5 = V_0;
		int32_t L_6 = ___1_offset;
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&V_2), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, L_6)), NULL);
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_7 = __this->___native_8;
		intptr_t L_8 = V_2;
		int32_t L_9 = ___2_count;
		NullCheck(L_7);
		int32_t L_10;
		L_10 = DeflateStreamNative_ReadZStream_m64072AF17150906ED32D871778DC5EF313FADD9F(L_7, L_8, L_9, NULL);
		return L_10;
	}
}
// System.Threading.Tasks.ValueTask`1<System.Int32> System.IO.Compression.DeflateStream::ReadAsyncMemory(System.Memory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 DeflateStream_ReadAsyncMemory_m1FC9EB7B2284773AA527913018FEA9EB82965327 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___0_destination, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_0 = ___0_destination;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___1_cancellationToken;
		ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 L_2;
		L_2 = Stream_ReadAsync_m1AA84A1F2DD3C7555BFC97A636E1CE56EB106B98(__this, L_0, L_1, NULL);
		return L_2;
	}
}
// System.Int32 System.IO.Compression.DeflateStream::ReadCore(System.Span`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_ReadCore_m58E605C082DCF3455C4D56EBEBB8F2ABECCC9B40 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB4ED9F6A5BD665DDFD6708B6FAEE4F577A490F51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___0_destination), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(29 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, __this, L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)));
		V_1 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		int32_t L_6 = V_1;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_7;
		L_7 = MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB4ED9F6A5BD665DDFD6708B6FAEE4F577A490F51_inline(L_5, 0, L_6, MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB4ED9F6A5BD665DDFD6708B6FAEE4F577A490F51_RuntimeMethod_var);
		V_2 = L_7;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_8 = ___0_destination;
		Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542((&V_2), L_8, Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_RuntimeMethod_var);
		int32_t L_9 = V_1;
		return L_9;
	}
}
// System.Int32 System.IO.Compression.DeflateStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_Read_m46316C432282671BF001324B75881E50CC2B7FA3 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		bool L_0 = __this->___disposed_7;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_m46316C432282671BF001324B75881E50CC2B7FA3_RuntimeMethod_var)));
	}

IL_0019:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_array;
		if (L_4)
		{
			goto IL_0027;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral16770065DAB8E218EBB0B0BB3BC4FE763DF3C18B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_m46316C432282671BF001324B75881E50CC2B7FA3_RuntimeMethod_var)));
	}

IL_0027:
	{
		bool L_6;
		L_6 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, __this);
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral547999BA16094C3536189EA1CC631B96EFC47117)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_m46316C432282671BF001324B75881E50CC2B7FA3_RuntimeMethod_var)));
	}

IL_003a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_array;
		NullCheck(L_8);
		V_0 = ((int32_t)(((RuntimeArray*)L_8)->max_length));
		int32_t L_9 = ___1_offset;
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_10 = ___2_count;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}

IL_0046:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3C850BA1FC7F3581DBA2DD6DDF642D5C34A8C120)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_m46316C432282671BF001324B75881E50CC2B7FA3_RuntimeMethod_var)));
	}

IL_0051:
	{
		int32_t L_12 = ___1_offset;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) <= ((int32_t)L_13)))
		{
			goto IL_0060;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_14 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFC82027EEEA4BFAD4FE7FBFDD886E7D82ADBEA69)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_m46316C432282671BF001324B75881E50CC2B7FA3_RuntimeMethod_var)));
	}

IL_0060:
	{
		int32_t L_15 = ___1_offset;
		int32_t L_16 = ___2_count;
		int32_t L_17 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_15, L_16))) <= ((int32_t)L_17)))
		{
			goto IL_0071;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_18 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral53549F14C4C0C01E846937308C01413567514ED9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Read_m46316C432282671BF001324B75881E50CC2B7FA3_RuntimeMethod_var)));
	}

IL_0071:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___0_array;
		int32_t L_20 = ___1_offset;
		int32_t L_21 = ___2_count;
		int32_t L_22;
		L_22 = DeflateStream_ReadInternal_m4FCD4EB1534E24E85A9E5D933D6AF6EABF5F223C(__this, L_19, L_20, L_21, NULL);
		return L_22;
	}
}
// System.Void System.IO.Compression.DeflateStream::WriteInternal(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_WriteInternal_m5BD64441B31FC3D10F20A273FF45380EAAB97845 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = ___2_count;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		V_1 = L_2;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		if (((int32_t)(((RuntimeArray*)L_3)->max_length)))
		{
			goto IL_0013;
		}
	}

IL_000e:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_001c;
	}

IL_0013:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		NullCheck(L_4);
		V_0 = (uint8_t*)((uintptr_t)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_001c:
	{
		uint8_t* L_5 = V_0;
		int32_t L_6 = ___1_offset;
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&V_2), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, L_6)), NULL);
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_7 = __this->___native_8;
		intptr_t L_8 = V_2;
		int32_t L_9 = ___2_count;
		NullCheck(L_7);
		DeflateStreamNative_WriteZStream_m4B066C7A2E031A2CA6EE0FE876A9611242630F18(L_7, L_8, L_9, NULL);
		V_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		return;
	}
}
// System.Threading.Tasks.ValueTask System.IO.Compression.DeflateStream::WriteAsyncMemory(System.ReadOnlyMemory`1<System.Byte>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F DeflateStream_WriteAsyncMemory_mDEFCEC8FAA595B11419D022F351AD825C01AFCE6 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___0_source, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	{
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___1_cancellationToken;
		ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F L_2;
		L_2 = Stream_WriteAsync_m31847C7A29AAFDA503991986F2BC02367F7A1C34(__this, L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void System.IO.Compression.DeflateStream::WriteCore(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_WriteCore_mC6ADF328D0A66CAFEEC9B23F89A22C223DFF3730 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_ToArray_mF805FAE3816BCFA5C63592CA173237F9B1E4566E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = ReadOnlySpan_1_ToArray_mF805FAE3816BCFA5C63592CA173237F9B1E4566E((&___0_source), ReadOnlySpan_1_ToArray_mF805FAE3816BCFA5C63592CA173237F9B1E4566E_RuntimeMethod_var);
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_source), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(32 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, __this, L_0, 0, L_1);
		return;
	}
}
// System.Void System.IO.Compression.DeflateStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Write_mA09DDD17D3B00089F808F9C7C587226666DB141A (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___disposed_7;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Write_mA09DDD17D3B00089F808F9C7C587226666DB141A_RuntimeMethod_var)));
	}

IL_0019:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_array;
		if (L_4)
		{
			goto IL_0027;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Write_mA09DDD17D3B00089F808F9C7C587226666DB141A_RuntimeMethod_var)));
	}

IL_0027:
	{
		int32_t L_6 = ___1_offset;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_7 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Write_mA09DDD17D3B00089F808F9C7C587226666DB141A_RuntimeMethod_var)));
	}

IL_0036:
	{
		int32_t L_8 = ___2_count;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0045;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Write_mA09DDD17D3B00089F808F9C7C587226666DB141A_RuntimeMethod_var)));
	}

IL_0045:
	{
		bool L_10;
		L_10 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.Stream::get_CanWrite() */, __this);
		if (L_10)
		{
			goto IL_0058;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_11 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral606F0CC71C796275607A15AAF1A3AA6B5E27B434)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Write_mA09DDD17D3B00089F808F9C7C587226666DB141A_RuntimeMethod_var)));
	}

IL_0058:
	{
		int32_t L_12 = ___1_offset;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___0_array;
		NullCheck(L_13);
		int32_t L_14 = ___2_count;
		if ((((int32_t)L_12) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)))))
		{
			goto IL_006b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4BCB8F07D7B01D0ED0445AB3038F6DE65C11CB6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Write_mA09DDD17D3B00089F808F9C7C587226666DB141A_RuntimeMethod_var)));
	}

IL_006b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___0_array;
		int32_t L_17 = ___1_offset;
		int32_t L_18 = ___2_count;
		DeflateStream_WriteInternal_m5BD64441B31FC3D10F20A273FF45380EAAB97845(__this, L_16, L_17, L_18, NULL);
		return;
	}
}
// System.Void System.IO.Compression.DeflateStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_Flush_mE12E917486F3EA41FE453945AA5B5617F80E6D0C (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___disposed_7;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Flush_mE12E917486F3EA41FE453945AA5B5617F80E6D0C_RuntimeMethod_var)));
	}

IL_0019:
	{
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.Stream::get_CanWrite() */, __this);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_5 = __this->___native_8;
		NullCheck(L_5);
		DeflateStreamNative_Flush_m60D8D1C3DEBB720E402625ECFA9A0CFCA69E8F6F(L_5, NULL);
	}

IL_002c:
	{
		return;
	}
}
// System.IAsyncResult System.IO.Compression.DeflateStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DeflateStream_BeginRead_m5FD78CDEDE42221D07255D38C4E8BBB3FFAD0235 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_asyncCallback, RuntimeObject* ___4_asyncState, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStream_ReadInternal_m4FCD4EB1534E24E85A9E5D933D6AF6EABF5F223C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___disposed_7;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginRead_m5FD78CDEDE42221D07255D38C4E8BBB3FFAD0235_RuntimeMethod_var)));
	}

IL_0019:
	{
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, __this);
		if (L_4)
		{
			goto IL_002c;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_5 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral05EB610FCC2B53833966AA8CE4B029154C502A88)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginRead_m5FD78CDEDE42221D07255D38C4E8BBB3FFAD0235_RuntimeMethod_var)));
	}

IL_002c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_array;
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_7 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginRead_m5FD78CDEDE42221D07255D38C4E8BBB3FFAD0235_RuntimeMethod_var)));
	}

IL_003a:
	{
		int32_t L_8 = ___2_count;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7C2AB991735C660B6786443AF56195932AA7F9E7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginRead_m5FD78CDEDE42221D07255D38C4E8BBB3FFAD0235_RuntimeMethod_var)));
	}

IL_004e:
	{
		int32_t L_10 = ___1_offset;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7C2AB991735C660B6786443AF56195932AA7F9E7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginRead_m5FD78CDEDE42221D07255D38C4E8BBB3FFAD0235_RuntimeMethod_var)));
	}

IL_0062:
	{
		int32_t L_12 = ___2_count;
		int32_t L_13 = ___1_offset;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___0_array;
		NullCheck(L_14);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_12, L_13))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0075;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4BCB8F07D7B01D0ED0445AB3038F6DE65C11CB6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginRead_m5FD78CDEDE42221D07255D38C4E8BBB3FFAD0235_RuntimeMethod_var)));
	}

IL_0075:
	{
		ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* L_16 = (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6*)il2cpp_codegen_object_new(ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		ReadMethod__ctor_mA65629D1C063B5E57095F952077323B5CE96C396(L_16, __this, (intptr_t)((void*)DeflateStream_ReadInternal_m4FCD4EB1534E24E85A9E5D933D6AF6EABF5F223C_RuntimeMethod_var), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___0_array;
		int32_t L_18 = ___1_offset;
		int32_t L_19 = ___2_count;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_20 = ___3_asyncCallback;
		RuntimeObject* L_21 = ___4_asyncState;
		NullCheck(L_16);
		RuntimeObject* L_22;
		L_22 = ReadMethod_BeginInvoke_mE465A26187BE3F1829ECA0C02AFAEFCA6D2F6EEF(L_16, L_17, L_18, L_19, L_20, L_21, NULL);
		return L_22;
	}
}
// System.IAsyncResult System.IO.Compression.DeflateStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DeflateStream_BeginWrite_m00FB9CAB52A95FA92911DBB50200D8AB81F4F4BA (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_asyncCallback, RuntimeObject* ___4_asyncState, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStream_WriteInternal_m5BD64441B31FC3D10F20A273FF45380EAAB97845_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___disposed_7;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_1);
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginWrite_m00FB9CAB52A95FA92911DBB50200D8AB81F4F4BA_RuntimeMethod_var)));
	}

IL_0019:
	{
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.Stream::get_CanWrite() */, __this);
		if (L_4)
		{
			goto IL_002c;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral88E3C436425EACB2A5AAA1F1DAA0E9E15389128D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginWrite_m00FB9CAB52A95FA92911DBB50200D8AB81F4F4BA_RuntimeMethod_var)));
	}

IL_002c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_array;
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_7 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginWrite_m00FB9CAB52A95FA92911DBB50200D8AB81F4F4BA_RuntimeMethod_var)));
	}

IL_003a:
	{
		int32_t L_8 = ___2_count;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7C2AB991735C660B6786443AF56195932AA7F9E7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginWrite_m00FB9CAB52A95FA92911DBB50200D8AB81F4F4BA_RuntimeMethod_var)));
	}

IL_004e:
	{
		int32_t L_10 = ___1_offset;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7C2AB991735C660B6786443AF56195932AA7F9E7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginWrite_m00FB9CAB52A95FA92911DBB50200D8AB81F4F4BA_RuntimeMethod_var)));
	}

IL_0062:
	{
		int32_t L_12 = ___2_count;
		int32_t L_13 = ___1_offset;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___0_array;
		NullCheck(L_14);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_12, L_13))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0075;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4BCB8F07D7B01D0ED0445AB3038F6DE65C11CB6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_BeginWrite_m00FB9CAB52A95FA92911DBB50200D8AB81F4F4BA_RuntimeMethod_var)));
	}

IL_0075:
	{
		WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* L_16 = (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9*)il2cpp_codegen_object_new(WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		WriteMethod__ctor_mBE4CCCE38227B2D866CB539879255AD8B0C2B51A(L_16, __this, (intptr_t)((void*)DeflateStream_WriteInternal_m5BD64441B31FC3D10F20A273FF45380EAAB97845_RuntimeMethod_var), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___0_array;
		int32_t L_18 = ___1_offset;
		int32_t L_19 = ___2_count;
		AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* L_20 = ___3_asyncCallback;
		RuntimeObject* L_21 = ___4_asyncState;
		NullCheck(L_16);
		RuntimeObject* L_22;
		L_22 = WriteMethod_BeginInvoke_m4A29F5255900687782F0A92A0A4D043AEA2C982C(L_16, L_17, L_18, L_19, L_20, L_21, NULL);
		return L_22;
	}
}
// System.Int32 System.IO.Compression.DeflateStream::EndRead(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStream_EndRead_m3A49F7660DAE5121AC48BD7409580CD46E3D8D9B (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, RuntimeObject* ___0_asyncResult, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760* G_B4_0 = NULL;
	AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760* G_B3_0 = NULL;
	ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* G_B6_0 = NULL;
	ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* G_B5_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_asyncResult;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_EndRead_m3A49F7660DAE5121AC48BD7409580CD46E3D8D9B_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_asyncResult;
		AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760* L_3 = ((AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760*)IsInstClass((RuntimeObject*)L_2, AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_il2cpp_TypeInfo_var));
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral80B8BD8C952DF4747A939211EB3E250030FF7705)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_EndRead_m3A49F7660DAE5121AC48BD7409580CD46E3D8D9B_RuntimeMethod_var)));
	}

IL_0027:
	{
		NullCheck(G_B4_0);
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(15 /* System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncDelegate() */, G_B4_0);
		ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* L_6 = ((ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6*)IsInstSealed((RuntimeObject*)L_5, ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6_il2cpp_TypeInfo_var));
		G_B5_0 = L_6;
		if (L_6)
		{
			G_B6_0 = L_6;
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral80B8BD8C952DF4747A939211EB3E250030FF7705)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_EndRead_m3A49F7660DAE5121AC48BD7409580CD46E3D8D9B_RuntimeMethod_var)));
	}

IL_0044:
	{
		RuntimeObject* L_8 = ___0_asyncResult;
		NullCheck(G_B6_0);
		int32_t L_9;
		L_9 = ReadMethod_EndInvoke_mBCA4D1483C0504BF239C2305B7201E1EC72ED6F7(G_B6_0, L_8, NULL);
		return L_9;
	}
}
// System.Void System.IO.Compression.DeflateStream::EndWrite(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_EndWrite_m304251B2932DD464A16C7306E862BF86BA516A6A (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, RuntimeObject* ___0_asyncResult, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760* G_B4_0 = NULL;
	AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760* G_B3_0 = NULL;
	WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* G_B6_0 = NULL;
	WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* G_B5_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_asyncResult;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_EndWrite_m304251B2932DD464A16C7306E862BF86BA516A6A_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_asyncResult;
		AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760* L_3 = ((AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760*)IsInstClass((RuntimeObject*)L_2, AsyncResult_t125D959CA0F9FB74EF9F7DF4E04F15BB1B265760_il2cpp_TypeInfo_var));
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral80B8BD8C952DF4747A939211EB3E250030FF7705)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_EndWrite_m304251B2932DD464A16C7306E862BF86BA516A6A_RuntimeMethod_var)));
	}

IL_0027:
	{
		NullCheck(G_B4_0);
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(15 /* System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncDelegate() */, G_B4_0);
		WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* L_6 = ((WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9*)IsInstSealed((RuntimeObject*)L_5, WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9_il2cpp_TypeInfo_var));
		G_B5_0 = L_6;
		if (L_6)
		{
			G_B6_0 = L_6;
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral80B8BD8C952DF4747A939211EB3E250030FF7705)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral453A1400C5EBA45D0DD93B54ED1EC6D42377A4B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_EndWrite_m304251B2932DD464A16C7306E862BF86BA516A6A_RuntimeMethod_var)));
	}

IL_0044:
	{
		RuntimeObject* L_8 = ___0_asyncResult;
		NullCheck(G_B6_0);
		WriteMethod_EndInvoke_mFDA332678A1FD46BAE42F3A0DF2073FD9CC6628C(G_B6_0, L_8, NULL);
		return;
	}
}
// System.Int64 System.IO.Compression.DeflateStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DeflateStream_Seek_mCABEFA32513E0858BC7A98F05AAA217A09C65B16 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, int64_t ___0_offset, int32_t ___1_origin, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_Seek_mCABEFA32513E0858BC7A98F05AAA217A09C65B16_RuntimeMethod_var)));
	}
}
// System.Void System.IO.Compression.DeflateStream::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_SetLength_mC18B3CCD1225B3C3A15EF54830C44236670F63F3 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_SetLength_mC18B3CCD1225B3C3A15EF54830C44236670F63F3_RuntimeMethod_var)));
	}
}
// System.Boolean System.IO.Compression.DeflateStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateStream_get_CanRead_mDDA3C3CEE73CFCD62DE14F5DE9F27C7A5615976E (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___disposed_7;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = __this->___mode_5;
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->___base_stream_4;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanRead() */, L_2);
		return L_3;
	}

IL_001c:
	{
		return (bool)0;
	}
}
// System.Boolean System.IO.Compression.DeflateStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateStream_get_CanSeek_m93DEADA4FB38CBBAB266F8B7DBAFE508AEC222E4 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Boolean System.IO.Compression.DeflateStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeflateStream_get_CanWrite_m95EB501342F11B287A529DE15089097EDF7C215F (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___disposed_7;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_1 = __this->___mode_5;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_001d;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->___base_stream_4;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_2);
		return L_3;
	}

IL_001d:
	{
		return (bool)0;
	}
}
// System.Int64 System.IO.Compression.DeflateStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DeflateStream_get_Length_m8C7CE98029153C5065D28496ACE3F99CB644897C (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_get_Length_m8C7CE98029153C5065D28496ACE3F99CB644897C_RuntimeMethod_var)));
	}
}
// System.Int64 System.IO.Compression.DeflateStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DeflateStream_get_Position_mA6B4FE66DBE953C5504A3561AD75FCC87718F376 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_get_Position_mA6B4FE66DBE953C5504A3561AD75FCC87718F376_RuntimeMethod_var)));
	}
}
// System.Void System.IO.Compression.DeflateStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStream_set_Position_m9BA570C4BF91C325EFE8E6BEAF40E6AB54BCC885 (DeflateStream_tF1758952E9DBAB2F9A15D42971F33A78AB4FC104* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStream_set_Position_m9BA570C4BF91C325EFE8E6BEAF40E6AB54BCC885_RuntimeMethod_var)));
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
int32_t ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_Multicast(ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* currentDelegate = reinterpret_cast<ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_array, ___1_offset, ___2_count, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_OpenInst(ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method)
{
	NullCheck(___0_array);
	typedef int32_t (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_array, ___1_offset, ___2_count, method);
}
int32_t ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_OpenStatic(ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_array, ___1_offset, ___2_count, method);
}
int32_t ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_OpenStaticInvoker(ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_array, ___1_offset, ___2_count);
}
int32_t ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_ClosedStaticInvoker(ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_array, ___1_offset, ___2_count);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6 (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(uint8_t*, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_array' to native representation
	uint8_t* ____0_array_marshaled = NULL;
	if (___0_array != NULL)
	{
		____0_array_marshaled = reinterpret_cast<uint8_t*>((___0_array)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(____0_array_marshaled, ___1_offset, ___2_count);

	return returnValue;
}
// System.Void System.IO.Compression.DeflateStream/ReadMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadMethod__ctor_mA65629D1C063B5E57095F952077323B5CE96C396 (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8_Multicast;
}
// System.Int32 System.IO.Compression.DeflateStream/ReadMethod::Invoke(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadMethod_Invoke_m0FA726BC164CDBF0ACA713BDD0EBA3187D0562F8 (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_array, ___1_offset, ___2_count, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult System.IO.Compression.DeflateStream/ReadMethod::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadMethod_BeginInvoke_mE465A26187BE3F1829ECA0C02AFAEFCA6D2F6EEF (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___0_array;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_offset);
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___2_count);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Int32 System.IO.Compression.DeflateStream/ReadMethod::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadMethod_EndInvoke_mBCA4D1483C0504BF239C2305B7201E1EC72ED6F7 (ReadMethod_t87B67872818F82B3DCC067C0DD9BB47200327CE6* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_Multicast(WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* currentDelegate = reinterpret_cast<WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_array, ___1_offset, ___2_count, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_OpenInst(WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method)
{
	NullCheck(___0_array);
	typedef void (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_array, ___1_offset, ___2_count, method);
}
void WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_OpenStatic(WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_array, ___1_offset, ___2_count, method);
}
void WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_OpenStaticInvoker(WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method)
{
	InvokerActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_array, ___1_offset, ___2_count);
}
void WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_ClosedStaticInvoker(WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_array, ___1_offset, ___2_count);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9 (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint8_t*, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_array' to native representation
	uint8_t* ____0_array_marshaled = NULL;
	if (___0_array != NULL)
	{
		____0_array_marshaled = reinterpret_cast<uint8_t*>((___0_array)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____0_array_marshaled, ___1_offset, ___2_count);

}
// System.Void System.IO.Compression.DeflateStream/WriteMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteMethod__ctor_mBE4CCCE38227B2D866CB539879255AD8B0C2B51A (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1_Multicast;
}
// System.Void System.IO.Compression.DeflateStream/WriteMethod::Invoke(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteMethod_Invoke_m8754DB7443BBDB1F7553BFA43DBBD024C0E268F1 (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_array, ___1_offset, ___2_count, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult System.IO.Compression.DeflateStream/WriteMethod::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteMethod_BeginInvoke_m4A29F5255900687782F0A92A0A4D043AEA2C982C (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___0_array;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_offset);
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___2_count);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void System.IO.Compression.DeflateStream/WriteMethod::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteMethod_EndInvoke_mFDA332678A1FD46BAE42F3A0DF2073FD9CC6628C (WriteMethod_t43391B800F1C3F6EFEEFCBADF4D3322CBFB42AB9* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
extern "C" int32_t CDECL ReversePInvokeWrapper_DeflateStreamNative_UnmanagedRead_m321A2621068F1C9509594A4D8F405F4F12C1CEB3(intptr_t ___0_buffer, int32_t ___1_length, intptr_t ___2_data)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	returnValue = DeflateStreamNative_UnmanagedRead_m321A2621068F1C9509594A4D8F405F4F12C1CEB3(___0_buffer, ___1_length, ___2_data, NULL);

	return returnValue;
}
extern "C" int32_t CDECL ReversePInvokeWrapper_DeflateStreamNative_UnmanagedWrite_mB0AD438266A9DD2813715E8BC90BF07DC7A02F52(intptr_t ___0_buffer, int32_t ___1_length, intptr_t ___2_data)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	returnValue = DeflateStreamNative_UnmanagedWrite_mB0AD438266A9DD2813715E8BC90BF07DC7A02F52(___0_buffer, ___1_length, ___2_data, NULL);

	return returnValue;
}
// System.Void System.IO.Compression.DeflateStreamNative::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative__ctor_mCDA4F9E1FF67EFCE84EBB8889DDDD30F4A12BB0E (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.IO.Compression.DeflateStreamNative System.IO.Compression.DeflateStreamNative::Create(System.IO.Stream,System.IO.Compression.CompressionMode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* DeflateStreamNative_Create_m94968BF2895D7838185DE455772F3CDDD6E6F4A6 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_compressedStream, int32_t ___1_mode, bool ___2_gzip, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamNative_UnmanagedRead_m321A2621068F1C9509594A4D8F405F4F12C1CEB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamNative_UnmanagedWrite_mB0AD438266A9DD2813715E8BC90BF07DC7A02F52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* V_0 = NULL;
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* G_B2_0 = NULL;
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* G_B1_0 = NULL;
	UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* G_B3_0 = NULL;
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* G_B3_1 = NULL;
	{
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_0 = (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD*)il2cpp_codegen_object_new(DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DeflateStreamNative__ctor_mCDA4F9E1FF67EFCE84EBB8889DDDD30F4A12BB0E(L_0, NULL);
		V_0 = L_0;
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_1 = V_0;
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_2 = V_0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_3;
		L_3 = GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D(L_2, NULL);
		NullCheck(L_1);
		L_1->___data_3 = L_3;
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_4 = V_0;
		int32_t L_5 = ___1_mode;
		G_B1_0 = L_4;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			G_B2_0 = L_4;
			goto IL_0025;
		}
	}
	{
		UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* L_6 = (UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA*)il2cpp_codegen_object_new(UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnmanagedReadOrWrite__ctor_mF122921041A4F277205DD17182C31BBE9B1DEEF6(L_6, NULL, (intptr_t)((void*)DeflateStreamNative_UnmanagedRead_m321A2621068F1C9509594A4D8F405F4F12C1CEB3_RuntimeMethod_var), NULL);
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_0031;
	}

IL_0025:
	{
		UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* L_7 = (UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA*)il2cpp_codegen_object_new(UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UnmanagedReadOrWrite__ctor_mF122921041A4F277205DD17182C31BBE9B1DEEF6(L_7, NULL, (intptr_t)((void*)DeflateStreamNative_UnmanagedWrite_mB0AD438266A9DD2813715E8BC90BF07DC7A02F52_RuntimeMethod_var), NULL);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
	}

IL_0031:
	{
		NullCheck(G_B3_1);
		G_B3_1->___feeder_0 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___feeder_0), (void*)G_B3_0);
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_8 = V_0;
		int32_t L_9 = ___1_mode;
		bool L_10 = ___2_gzip;
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_11 = V_0;
		NullCheck(L_11);
		UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* L_12 = L_11->___feeder_0;
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_13 = V_0;
		NullCheck(L_13);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_14 = L_13->___data_3;
		intptr_t L_15;
		L_15 = GCHandle_ToIntPtr_m45294AA913461A070BD555F81103A8BF2E5ED976(L_14, NULL);
		SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* L_16;
		L_16 = DeflateStreamNative_CreateZStream_m41CBCDEB95EA9C72B49374B3EFA96709C97A5F01(L_9, L_10, L_12, L_15, NULL);
		NullCheck(L_8);
		L_8->___z_stream_2 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___z_stream_2), (void*)L_16);
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_17 = V_0;
		NullCheck(L_17);
		SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* L_18 = L_17->___z_stream_2;
		NullCheck(L_18);
		bool L_19;
		L_19 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, L_18);
		if (!L_19)
		{
			goto IL_006a;
		}
	}
	{
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_20 = V_0;
		NullCheck(L_20);
		DeflateStreamNative_Dispose_m4FB7DA2D3E50360ECCE3B81A77CF25B5C6722C8E(L_20, (bool)1, NULL);
		return (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD*)NULL;
	}

IL_006a:
	{
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_21 = V_0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_22 = ___0_compressedStream;
		NullCheck(L_21);
		L_21->___base_stream_1 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&L_21->___base_stream_1), (void*)L_22);
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_23 = V_0;
		return L_23;
	}
}
// System.Void System.IO.Compression.DeflateStreamNative::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_Finalize_mE02A29EE58E329CFC439284070FF87A31B18C701 (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			DeflateStreamNative_Dispose_m4FB7DA2D3E50360ECCE3B81A77CF25B5C6722C8E(__this, (bool)0, NULL);
			goto IL_0010;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0010:
	{
		return;
	}
}
// System.Void System.IO.Compression.DeflateStreamNative::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_Dispose_m4FB7DA2D3E50360ECCE3B81A77CF25B5C6722C8E (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_disposing;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		bool L_1 = __this->___disposed_4;
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		__this->___disposed_4 = (bool)1;
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		goto IL_0025;
	}

IL_001a:
	{
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ((Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields*)il2cpp_codegen_static_fields_for(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var))->___Null_1;
		__this->___base_stream_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___base_stream_1), (void*)L_2);
	}

IL_0025:
	{
		__this->___io_buffer_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___io_buffer_5), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* L_3 = __this->___z_stream_2;
		if (!L_3)
		{
			goto IL_004c;
		}
	}
	{
		SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* L_4 = __this->___z_stream_2;
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid() */, L_4);
		if (L_5)
		{
			goto IL_004c;
		}
	}
	{
		SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* L_6 = __this->___z_stream_2;
		NullCheck(L_6);
		SafeHandle_Dispose_m4FB5B8A7ED78B90757F1B570D4025F3BA26A39F3(L_6, NULL);
	}

IL_004c:
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_7 = __this->___data_3;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_8 = (&__this->___data_3);
		bool L_9;
		L_9 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843(L_8, NULL);
		if (!L_9)
		{
			goto IL_006b;
		}
	}
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_10 = (&__this->___data_3);
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(L_10, NULL);
	}

IL_006b:
	{
		return;
	}
}
// System.Void System.IO.Compression.DeflateStreamNative::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_Flush_m60D8D1C3DEBB720E402625ECFA9A0CFCA69E8F6F (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB53E23262CA871DD51B621D069CC5E93A75BDAB6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* L_0 = __this->___z_stream_2;
		int32_t L_1;
		L_1 = DeflateStreamNative_Flush_m7E8FA114A01ED15906DC66D6086E41DF2EAB4E50(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		DeflateStreamNative_CheckResult_m9354BDD0FA5B71935FFD628698412B5380329C47(__this, L_2, _stringLiteralB53E23262CA871DD51B621D069CC5E93A75BDAB6, NULL);
		return;
	}
}
// System.Int32 System.IO.Compression.DeflateStreamNative::ReadZStream(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_ReadZStream_m64072AF17150906ED32D871778DC5EF313FADD9F (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, intptr_t ___0_buffer, int32_t ___1_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05A239D304E1CD9654D716DE8B8F8AD99E2AB53F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* L_0 = __this->___z_stream_2;
		intptr_t L_1 = ___0_buffer;
		int32_t L_2 = ___1_length;
		int32_t L_3;
		L_3 = DeflateStreamNative_ReadZStream_mF14CF4F54AE09805AA81A61FB6D04D6EA1E397FE(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		DeflateStreamNative_CheckResult_m9354BDD0FA5B71935FFD628698412B5380329C47(__this, L_4, _stringLiteral05A239D304E1CD9654D716DE8B8F8AD99E2AB53F, NULL);
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Void System.IO.Compression.DeflateStreamNative::WriteZStream(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_WriteZStream_m4B066C7A2E031A2CA6EE0FE876A9611242630F18 (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, intptr_t ___0_buffer, int32_t ___1_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DF5634099E210FAACAB500FEB3F80C226FE7C7F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* L_0 = __this->___z_stream_2;
		intptr_t L_1 = ___0_buffer;
		int32_t L_2 = ___1_length;
		int32_t L_3;
		L_3 = DeflateStreamNative_WriteZStream_m78EAA03E23C1445D652F936373061207CE50579F(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		DeflateStreamNative_CheckResult_m9354BDD0FA5B71935FFD628698412B5380329C47(__this, L_4, _stringLiteral5DF5634099E210FAACAB500FEB3F80C226FE7C7F, NULL);
		return;
	}
}
// System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedRead(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedRead_m321A2621068F1C9509594A4D8F405F4F12C1CEB3 (intptr_t ___0_buffer, int32_t ___1_length, intptr_t ___2_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* V_1 = NULL;
	{
		intptr_t L_0 = ___2_data;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_FromIntPtr_mA7848A4285D007CADC52B6272DB243C8FDFD5FAC(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		V_1 = ((DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD*)IsInstClass((RuntimeObject*)L_2, DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD_il2cpp_TypeInfo_var));
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_3 = V_1;
		if (L_3)
		{
			goto IL_0019;
		}
	}
	{
		return (-1);
	}

IL_0019:
	{
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_4 = V_1;
		intptr_t L_5 = ___0_buffer;
		int32_t L_6 = ___1_length;
		NullCheck(L_4);
		int32_t L_7;
		L_7 = DeflateStreamNative_UnmanagedRead_mC17A13844F4560E954F816037B0A5C04FFEDECB1(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedRead(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedRead_mC17A13844F4560E954F816037B0A5C04FFEDECB1 (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, intptr_t ___0_buffer, int32_t ___1_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Exception_t* V_2 = NULL;
	int32_t V_3 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___io_buffer_5;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4096));
		__this->___io_buffer_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___io_buffer_5), (void*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = ___1_length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___io_buffer_5;
		NullCheck(L_3);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_2, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		V_0 = L_4;
	}
	try
	{// begin try (depth: 1)
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = __this->___base_stream_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___io_buffer_5;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		int32_t L_8;
		L_8 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(29 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, 0, L_7);
		V_1 = L_8;
		goto IL_004a;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003d;
		}
		throw e;
	}

CATCH_003d:
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_9 = V_2;
		__this->___last_error_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___last_error_6), (void*)L_9);
		V_3 = ((int32_t)-12);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_005e;
	}// end catch (depth: 1)

IL_004a:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___io_buffer_5;
		intptr_t L_12 = ___0_buffer;
		int32_t L_13 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_m0FD7BFE70EE28FC67B67A6225AD58F95FEE7EB85(L_11, 0, L_12, L_13, NULL);
	}

IL_005c:
	{
		int32_t L_14 = V_1;
		return L_14;
	}

IL_005e:
	{
		int32_t L_15 = V_3;
		return L_15;
	}
}
// System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedWrite(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedWrite_mB0AD438266A9DD2813715E8BC90BF07DC7A02F52 (intptr_t ___0_buffer, int32_t ___1_length, intptr_t ___2_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* V_1 = NULL;
	{
		intptr_t L_0 = ___2_data;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_FromIntPtr_mA7848A4285D007CADC52B6272DB243C8FDFD5FAC(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		V_1 = ((DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD*)IsInstClass((RuntimeObject*)L_2, DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD_il2cpp_TypeInfo_var));
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_3 = V_1;
		if (L_3)
		{
			goto IL_0019;
		}
	}
	{
		return (-1);
	}

IL_0019:
	{
		DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* L_4 = V_1;
		intptr_t L_5 = ___0_buffer;
		int32_t L_6 = ___1_length;
		NullCheck(L_4);
		int32_t L_7;
		L_7 = DeflateStreamNative_UnmanagedWrite_m73ADBE62E8371FFDFFB380F568A8510E8644B1BD(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Int32 System.IO.Compression.DeflateStreamNative::UnmanagedWrite(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_UnmanagedWrite_m73ADBE62E8371FFDFFB380F568A8510E8644B1BD (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, intptr_t ___0_buffer, int32_t ___1_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Exception_t* V_2 = NULL;
	int32_t V_3 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = 0;
		goto IL_0074;
	}

IL_0004:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___io_buffer_5;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)4096));
		__this->___io_buffer_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___io_buffer_5), (void*)L_1);
	}

IL_001c:
	{
		int32_t L_2 = ___1_length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___io_buffer_5;
		NullCheck(L_3);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_2, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		V_1 = L_4;
		intptr_t L_5 = ___0_buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___io_buffer_5;
		int32_t L_7 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_5, L_6, 0, L_7, NULL);
	}
	try
	{// begin try (depth: 1)
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = __this->___base_stream_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___io_buffer_5;
		int32_t L_10 = V_1;
		NullCheck(L_8);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(32 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_8, L_9, 0, L_10);
		goto IL_005b;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_004e;
		}
		throw e;
	}

CATCH_004e:
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_11 = V_2;
		__this->___last_error_6 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___last_error_6), (void*)L_11);
		V_3 = ((int32_t)-12);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_007a;
	}// end catch (depth: 1)

IL_005b:
	{
		void* L_12;
		L_12 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___0_buffer), NULL);
		int32_t L_13 = V_1;
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&___0_buffer), ((void*)il2cpp_codegen_add((intptr_t)L_12, L_13)), NULL);
		int32_t L_14 = ___1_length;
		int32_t L_15 = V_1;
		___1_length = ((int32_t)il2cpp_codegen_subtract(L_14, L_15));
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, L_17));
	}

IL_0074:
	{
		int32_t L_18 = ___1_length;
		if ((((int32_t)L_18) > ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_19 = V_0;
		return L_19;
	}

IL_007a:
	{
		int32_t L_20 = V_3;
		return L_20;
	}
}
// System.Void System.IO.Compression.DeflateStreamNative::CheckResult(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeflateStreamNative_CheckResult_m9354BDD0FA5B71935FFD628698412B5380329C47 (DeflateStreamNative_t06B674E1D2EFD46989197EFB1E33E0B6564793CD* __this, int32_t ___0_result, String_t* ___1_where, const RuntimeMethod* method) 
{
	Exception_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		int32_t L_0 = ___0_result;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		Exception_t** L_1 = (&__this->___last_error_6);
		Exception_t* L_2;
		L_2 = InterlockedExchangeImpl<Exception_t*>(L_1, (Exception_t*)NULL);
		V_0 = L_2;
		Exception_t* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		Exception_t* L_4 = V_0;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStreamNative_CheckResult_m9354BDD0FA5B71935FFD628698412B5380329C47_RuntimeMethod_var)));
	}

IL_0017:
	{
		int32_t L_5 = ___0_result;
		switch (((int32_t)il2cpp_codegen_subtract(L_5, ((int32_t)-11))))
		{
			case 0:
			{
				goto IL_0086;
			}
			case 1:
			{
				goto IL_007e;
			}
			case 2:
			{
				goto IL_008e;
			}
			case 3:
			{
				goto IL_008e;
			}
			case 4:
			{
				goto IL_008e;
			}
			case 5:
			{
				goto IL_0076;
			}
			case 6:
			{
				goto IL_006e;
			}
			case 7:
			{
				goto IL_0066;
			}
			case 8:
			{
				goto IL_005e;
			}
			case 9:
			{
				goto IL_0056;
			}
			case 10:
			{
				goto IL_004e;
			}
		}
	}
	{
		goto IL_008e;
	}

IL_004e:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF47527D7B72D5957FA184B6B1B6A7A1A9A56BF37));
		goto IL_0094;
	}

IL_0056:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2523CBFED84EF78578D85909448E8C0C4ECDA163));
		goto IL_0094;
	}

IL_005e:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2E90A74AF10748DDAB6F42388BD10A4D42D95BB));
		goto IL_0094;
	}

IL_0066:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF678DBEEE39BA115BA762E7766D189E0CD47CD41));
		goto IL_0094;
	}

IL_006e:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE290FE00878B1C01707983AAF8A6BB8464DFAB6D));
		goto IL_0094;
	}

IL_0076:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2DA0AC110457767EB539C31A3B243D2C4C5C2D9D));
		goto IL_0094;
	}

IL_007e:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral61A2E25EECE5CA17D408DC393538F1767DE78408));
		goto IL_0094;
	}

IL_0086:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral53B6A8F4629CFB02CF5AFB3B1D3C6A5584EB8548));
		goto IL_0094;
	}

IL_008e:
	{
		V_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF47527D7B72D5957FA184B6B1B6A7A1A9A56BF37));
	}

IL_0094:
	{
		String_t* L_6 = V_1;
		String_t* L_7 = ___1_where;
		String_t* L_8;
		L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745)), L_7, NULL);
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_9 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DeflateStreamNative_CheckResult_m9354BDD0FA5B71935FFD628698412B5380329C47_RuntimeMethod_var)));
	}
}
// System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle System.IO.Compression.DeflateStreamNative::CreateZStream(System.IO.Compression.CompressionMode,System.Boolean,System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* DeflateStreamNative_CreateZStream_m41CBCDEB95EA9C72B49374B3EFA96709C97A5F01 (int32_t ___0_compress, bool ___1_gzip, UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* ___2_feeder, intptr_t ___3_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	typedef void* (CDECL *PInvokeFunc) (int32_t, int32_t, Il2CppMethodPointer, intptr_t);

	// Marshaling of parameter '___2_feeder' to native representation
	Il2CppMethodPointer ____2_feeder_marshaled = NULL;
	____2_feeder_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___2_feeder));

	// Native function invocation
	void* returnValue = reinterpret_cast<PInvokeFunc>(CreateZStream)(___0_compress, static_cast<int32_t>(___1_gzip), ____2_feeder_marshaled, ___3_data);

	// Marshaling of return value back from native representation
	SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* _returnValue_unmarshaled = (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8*)il2cpp_codegen_object_new(SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8_il2cpp_TypeInfo_var);
	SafeDeflateStreamHandle__ctor_mBDF78EC52524A938914F593AF5C198C9F7632E41(_returnValue_unmarshaled, NULL);
	intptr_t _returnValue_unmarshaled_handle_temp;
	_returnValue_unmarshaled_handle_temp = (intptr_t)returnValue;
	(_returnValue_unmarshaled)->___handle_0 = _returnValue_unmarshaled_handle_temp;

	return _returnValue_unmarshaled;
}
// System.Int32 System.IO.Compression.DeflateStreamNative::CloseZStream(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_CloseZStream_m6FB720C1050656B8E8CF3BB53856D407509D6D0A (intptr_t ___0_stream, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CloseZStream)(___0_stream);

	return returnValue;
}
// System.Int32 System.IO.Compression.DeflateStreamNative::Flush(System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_Flush_m7E8FA114A01ED15906DC66D6086E41DF2EAB4E50 (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* ___0_stream, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*);

	// Marshaling of parameter '___0_stream' to native representation
	void* ____0_stream_marshaled = NULL;
	if (___0_stream == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stream"), NULL);
	bool ___safeHandle_reference_incremented_for____0_stream = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_stream, (&___safeHandle_reference_incremented_for____0_stream), NULL);
	____0_stream_marshaled = reinterpret_cast<void*>((___0_stream)->___handle_0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Flush)(____0_stream_marshaled);

	// Marshaling cleanup of parameter '___0_stream' native representation
	if (___safeHandle_reference_incremented_for____0_stream)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_stream, NULL);
	}

	return returnValue;
}
// System.Int32 System.IO.Compression.DeflateStreamNative::ReadZStream(System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_ReadZStream_mF14CF4F54AE09805AA81A61FB6D04D6EA1E397FE (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* ___0_stream, intptr_t ___1_buffer, int32_t ___2_length, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, intptr_t, int32_t);

	// Marshaling of parameter '___0_stream' to native representation
	void* ____0_stream_marshaled = NULL;
	if (___0_stream == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stream"), NULL);
	bool ___safeHandle_reference_incremented_for____0_stream = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_stream, (&___safeHandle_reference_incremented_for____0_stream), NULL);
	____0_stream_marshaled = reinterpret_cast<void*>((___0_stream)->___handle_0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ReadZStream)(____0_stream_marshaled, ___1_buffer, ___2_length);

	// Marshaling cleanup of parameter '___0_stream' native representation
	if (___safeHandle_reference_incremented_for____0_stream)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_stream, NULL);
	}

	return returnValue;
}
// System.Int32 System.IO.Compression.DeflateStreamNative::WriteZStream(System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeflateStreamNative_WriteZStream_m78EAA03E23C1445D652F936373061207CE50579F (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* ___0_stream, intptr_t ___1_buffer, int32_t ___2_length, const RuntimeMethod* method) 
{
	typedef int32_t (CDECL *PInvokeFunc) (void*, intptr_t, int32_t);

	// Marshaling of parameter '___0_stream' to native representation
	void* ____0_stream_marshaled = NULL;
	if (___0_stream == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("stream"), NULL);
	bool ___safeHandle_reference_incremented_for____0_stream = false;
	SafeHandle_DangerousAddRef_m9FA46208A92D8B33059B8E8712F49AE45BB5E922(___0_stream, (&___safeHandle_reference_incremented_for____0_stream), NULL);
	____0_stream_marshaled = reinterpret_cast<void*>((___0_stream)->___handle_0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WriteZStream)(____0_stream_marshaled, ___1_buffer, ___2_length);

	// Marshaling cleanup of parameter '___0_stream' native representation
	if (___safeHandle_reference_incremented_for____0_stream)
	{
		SafeHandle_DangerousRelease_m30A8B4E5BEA935C8925BC2115CD0AD13B937953E(___0_stream, NULL);
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_Multicast(UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, intptr_t ___0_buffer, int32_t ___1_length, intptr_t ___2_data, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* currentDelegate = reinterpret_cast<UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_buffer, ___1_length, ___2_data, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_OpenInst(UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, intptr_t ___0_buffer, int32_t ___1_length, intptr_t ___2_data, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_buffer, ___1_length, ___2_data, method);
}
int32_t UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_OpenStatic(UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, intptr_t ___0_buffer, int32_t ___1_length, intptr_t ___2_data, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, int32_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___0_buffer, ___1_length, ___2_data, method);
}
int32_t UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_OpenStaticInvoker(UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, intptr_t ___0_buffer, int32_t ___1_length, intptr_t ___2_data, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, intptr_t, int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_buffer, ___1_length, ___2_data);
}
int32_t UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_ClosedStaticInvoker(UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, intptr_t ___0_buffer, int32_t ___1_length, intptr_t ___2_data, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, intptr_t, int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_buffer, ___1_length, ___2_data);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA (UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, intptr_t ___0_buffer, int32_t ___1_length, intptr_t ___2_data, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)(intptr_t, int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___0_buffer, ___1_length, ___2_data);

	return returnValue;
}
// System.Void System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedReadOrWrite__ctor_mF122921041A4F277205DD17182C31BBE9B1DEEF6 (UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22_Multicast;
}
// System.Int32 System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite::Invoke(System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnmanagedReadOrWrite_Invoke_m595EDC2E3BDD8B54CA699C245FAA1003994A5B22 (UnmanagedReadOrWrite_t3705731796B1AD7D7A711D794FF08961B623E9BA* __this, intptr_t ___0_buffer, int32_t ___1_length, intptr_t ___2_data, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_buffer, ___1_length, ___2_data, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle::get_IsInvalid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SafeDeflateStreamHandle_get_IsInvalid_m8220E0B23A6DE1C8171ADDD78B30FBC346F1D1D1 (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeDeflateStreamHandle__ctor_mBDF78EC52524A938914F593AF5C198C9F7632E41 (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		SafeHandle__ctor_m23E44C94503043292DCD4E87818082CFC09A7F4B(__this, L_0, (bool)1, NULL);
		return;
	}
}
// System.Boolean System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle::ReleaseHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SafeDeflateStreamHandle_ReleaseHandle_m8A0A695A4A1C2F46C8BFBE3BD1526BCDC6066704 (SafeDeflateStreamHandle_t533B0C5AB7C020BB3EF5074DA77BDFA46D4298D8* __this, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		intptr_t L_0 = ((SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7*)__this)->___handle_0;
		int32_t L_1;
		L_1 = DeflateStreamNative_CloseZStream_m6FB720C1050656B8E8CF3BB53856D407509D6D0A(L_0, NULL);
		goto IL_0011;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000e;
		}
		throw e;
	}

CATCH_000e:
	{// begin catch(System.Object)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0011;
	}// end catch (depth: 1)

IL_0011:
	{
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m171C269D828658C44041FA68B6DE8CA290ED517F (String_t* ___0_s, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_s;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___0_s;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___0_s;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
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
// System.Void System.Net.Configuration.BypassElementCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54 (BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54_RuntimeMethod_var);
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
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3 (ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3_RuntimeMethod_var);
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
// System.Void System.Net.Configuration.ConnectionManagementSection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802 (ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ConnectionManagementSection::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95 (ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
// System.Void System.Net.Configuration.DefaultProxySection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D (DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.DefaultProxySection::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418 (DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
// System.Void System.Net.Configuration.DefaultProxySection::Reset(System.Configuration.ConfigurationElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77 (DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34* __this, ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E* ___0_parentElement, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77_RuntimeMethod_var);
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
// System.Void System.Net.Configuration.ProxyElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70 (ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ProxyElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A (ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
// System.Void System.Net.Configuration.HttpWebRequestElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717 (HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.HttpWebRequestElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA (HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
// System.Void System.Net.Configuration.Ipv6Element::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1 (Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.Ipv6Element::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322 (Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
// System.Void System.Net.Configuration.NetSectionGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC (NetSectionGroup_tA83DCAF89773087D0E921B92F67441132B71D52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC_RuntimeMethod_var);
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
// System.Void System.Net.Configuration.SettingsSection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242 (SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SettingsSection::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F (SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
// System.Void System.Net.Configuration.PerformanceCountersElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F (PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.PerformanceCountersElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B (PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
// System.Void System.Net.Configuration.ServicePointManagerElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36 (ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ServicePointManagerElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58 (ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
// System.Void System.Net.Configuration.SocketElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2 (SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SocketElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3 (SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
// System.Void System.Net.Configuration.WebProxyScriptElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821 (WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebProxyScriptElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B (WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
// System.Void System.Net.Configuration.WebRequestModulesSection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E (WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebRequestModulesSection::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6 (WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
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
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E (WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E_RuntimeMethod_var);
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
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3 (DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3_RuntimeMethod_var);
		return;
	}
}
// System.Object System.Diagnostics.DiagnosticsConfigurationHandler::Create(System.Object,System.Object,System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB (DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7* __this, RuntimeObject* ___0_parent, RuntimeObject* ___1_configContext, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___2_section, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB_RuntimeMethod_var);
		return NULL;
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
// System.Void Unity.ThrowStub::ThrowNotSupportedException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowStub_ThrowNotSupportedException_m14168B43936EF78B7B8AC08BD815254DAA1D9FA2 (const RuntimeMethod* method) 
{
	{
		PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* L_0 = (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowStub_ThrowNotSupportedException_m14168B43936EF78B7B8AC08BD815254DAA1D9FA2_RuntimeMethod_var)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* AuthenticodeDeformatter_get_SigningCertificate_m5C675A2AB0464670DF6C557C4433871014EB52CC_inline (AuthenticodeDeformatter_tFD4A7B915DB17925F5BD1F9FA169DCF7C2CC81D2* __this, const RuntimeMethod* method) 
{
	{
		X509Certificate_t9ECDEAA7F2B56A899145F284A13F4D0042481356* L_0 = __this->___signingCertificate_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* X500DistinguishedName_get_Name_m57B2708AAA2B4E15AB6F6B513D88C4468898B5A9_inline (X500DistinguishedName_t53976A4567E82199856DAD47D3850F8EECABDAF6* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___name_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* CollectionBase_get_InnerList_mD37144662A9045A5CA82681C265719733934DEAB_inline (CollectionBase_t44F966CC555C87F2815D668FB4586526E1C2383F* __this, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____list_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____raw_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline (X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->____critical_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool X509Extension_get_Critical_mEF827F09D95784210C2F8D5FD7BE27BB54803E35_inline (X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____critical_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t ASN1_get_Tag_m1984CF0DDF54424E61BA3650D93CBA0DCB58F232_inline (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___m_nTag_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* PublicKey_get_EncodedKeyValue_m153EF781728D471C55002A40BBDA435F1B3A1213_inline (PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* __this, const RuntimeMethod* method) 
{
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_0 = __this->____keyValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* PublicKey_get_Oid_mB5796F569C136759CB740F747C6A3B6F8976401A_inline (PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* __this, const RuntimeMethod* method) 
{
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_0 = __this->____oid_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* PublicKey_get_EncodedParameters_mE338A4A69A15907E38A644D624A07DDD55C521E0_inline (PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* __this, const RuntimeMethod* method) 
{
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_0 = __this->____params_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t IPAddress_get_PrivateScopeId_m3C01EDB8971607BAC0398557E295B5A818191532_inline (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->____addressOrScopeId_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t IPAddress_get_PrivateAddress_mE1CD072F1E7BDF981FD71CBD984F5FD2A2EC6399_inline (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->____addressOrScopeId_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t Marvin_get_DefaultSeed_m0CD0484A0C131EF70FE2252570EBE48CE045BA26_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marvin_t0342A28B10725C354B3E96D240FF68C4D7A0D242_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Marvin_t0342A28B10725C354B3E96D240FF68C4D7A0D242_il2cpp_TypeInfo_var);
		uint64_t L_0 = ((Marvin_t0342A28B10725C354B3E96D240FF68C4D7A0D242_StaticFields*)il2cpp_codegen_static_fields_for(Marvin_t0342A28B10725C354B3E96D240FF68C4D7A0D242_il2cpp_TypeInfo_var))->___U3CDefaultSeedU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Marvin_ComputeHash32_m4A0F0FD95EDFDF78DA2E1FCD47AAC3E39A2EB5B2_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_data, uint64_t ___1_seed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marvin_t0342A28B10725C354B3E96D240FF68C4D7A0D242_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___0_data;
		uint8_t* L_1;
		L_1 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90(L_0, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		int32_t L_2;
		L_2 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_data), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		uint64_t L_3 = ___1_seed;
		il2cpp_codegen_runtime_class_init_inline(Marvin_t0342A28B10725C354B3E96D240FF68C4D7A0D242_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Marvin_ComputeHash32_mAB058ED57AEEE83EF8016C0D7C3A5CF96825C08D(L_1, L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* AuthenticatedStream_get_InnerStream_m5BDA4857898A90C696DAD90FD61C536FC3EB10C7_inline (AuthenticatedStream_t8DCF41E151F705E2494FC7836F5E2EF7C539FA39* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____InnerStream_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DescriptionAttribute_set_DescriptionValue_mE3DE3C009CBEA82A5DC0EFB299943118BF487800_inline (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CDescriptionValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDescriptionValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DescriptionAttribute_get_DescriptionValue_m1F4A0829E3BE8AF3BBB9A5F2344BA672E07DC975_inline (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CDescriptionValueU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DisplayNameAttribute_set_DisplayNameValue_m2DA6A8AA72F3969BA5639F707AB90A2D363BC49C_inline (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CDisplayNameValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayNameValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DisplayNameAttribute_get_DisplayNameValue_mD9F58F5FFF2B7C682D8470101352BEA88AE0E5AC_inline (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CDisplayNameValueU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DesignTimeVisibleAttribute_get_Visible_m0EB229B7592D784080EEFA2C7100DF58ADFF064F_inline (DesignTimeVisibleAttribute_t5A6C242E753C45DE14901B748FAA3ED0BE5F88BE* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CVisibleU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TypeConverterAttribute_get_ConverterTypeName_mBBE5335F11FC13345D2828866172BB5DDF9F3E45_inline (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CConverterTypeNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___0_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_value;
		*__this = ((intptr_t)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D));
		return;
	}

IL_000b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_array;
		NullCheck((RuntimeArray*)L_1);
		uint8_t* L_2;
		L_2 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_1, NULL);
		uint8_t* L_3;
		L_3 = il2cpp_unsafe_as_ref<uint8_t>(L_2);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_4;
		memset((&L_4), 0, sizeof(L_4));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_4), L_3);
		__this->____pointer_0 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_array;
		NullCheck(L_5);
		__this->____length_1 = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		if (!false)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 4)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_1, NULL);
	}

IL_0016:
	{
		int32_t L_2 = ___1_length;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_3 = ___0_pointer;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>((uint8_t*)L_3);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer_0 = L_5;
		int32_t L_6 = ___1_length;
		__this->____length_1 = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD4ED59BC2ABC1D881B1CFEAD85109BB38AF0BC29_gshared_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_array, const RuntimeMethod* method) 
{
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F));
		return;
	}

IL_000b:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = ___0_array;
		NullCheck((RuntimeArray*)L_1);
		uint8_t* L_2;
		L_2 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_1, NULL);
		uint16_t* L_3;
		L_3 = il2cpp_unsafe_as_ref<uint16_t>(L_2);
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_4;
		memset((&L_4), 0, sizeof(L_4));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_4), L_3);
		__this->____pointer_0 = L_4;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_5 = ___0_array;
		NullCheck(L_5);
		__this->____length_1 = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D MemoryMarshal_AsBytes_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m7E0CA4F0B8AC2C1FEAA2B6D00C2A4B1B075DB08C_gshared_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F ___0_span, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_AsBytes_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m7E0CA4F0B8AC2C1FEAA2B6D00C2A4B1B075DB08C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		if (!false)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_1, NULL);
	}

IL_0016:
	{
		ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F L_2 = ___0_span;
		uint16_t* L_3;
		L_3 = ((  uint16_t* (*) (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		int32_t L_5;
		L_5 = ReadOnlySpan_1_get_Length_m339FDCE1FC17C2B97AEA44937294504AF706F7FF_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_6;
		L_6 = il2cpp_unsafe_sizeof<uint16_t>();
		if (((int64_t)L_5 * (int64_t)L_6 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_5 * (int64_t)L_6 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), MemoryMarshal_AsBytes_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m7E0CA4F0B8AC2C1FEAA2B6D00C2A4B1B075DB08C_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_7;
		memset((&L_7), 0, sizeof(L_7));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_7), L_4, ((int32_t)il2cpp_codegen_multiply(L_5, L_6)), /*hidden argument*/ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_RuntimeMethod_var);
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = (int32_t)__this->____length_1;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = (ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC)__this->____pointer_0;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_add<uint8_t,int32_t>(L_3, L_4);
		int32_t L_6 = (int32_t)__this->____length_1;
		int32_t L_7 = ___0_start;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 MemoryMarshal_CreateReadOnlySpan_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m363F8E1E0CC75E2736384E86E770507F7483D649_gshared_inline (uint32_t* ___0_reference, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___0_reference;
		int32_t L_1 = ___1_length;
		ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 L_2;
		memset((&L_2), 0, sizeof(L_2));
		ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_inline((&L_2), L_0, L_1, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D MemoryMarshal_AsBytes_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE5D7D4C294D50AFEE7AF6B303DE7FA7BD156B83A_gshared_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 ___0_span, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_AsBytes_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE5D7D4C294D50AFEE7AF6B303DE7FA7BD156B83A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		if (!false)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_1, NULL);
	}

IL_0016:
	{
		ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 L_2 = ___0_span;
		uint32_t* L_3;
		L_3 = ((  uint32_t* (*) (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		int32_t L_5;
		L_5 = ReadOnlySpan_1_get_Length_m031225D82859BA85FEE8375AA52B4CE8DF1ACE00_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_6;
		L_6 = il2cpp_unsafe_sizeof<uint32_t>();
		if (((int64_t)L_5 * (int64_t)L_6 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_5 * (int64_t)L_6 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), MemoryMarshal_AsBytes_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE5D7D4C294D50AFEE7AF6B303DE7FA7BD156B83A_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_7;
		memset((&L_7), 0, sizeof(L_7));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_7), L_4, ((int32_t)il2cpp_codegen_multiply(L_5, L_6)), /*hidden argument*/ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_RuntimeMethod_var);
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0B70907CF5F6B4F10CB2914FEFC34CBE07112698_gshared_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_4 = ___0_array;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_5 = ___2_length;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = ___1_start;
		if ((!(((uint32_t)L_5) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_8 = ___0_array;
		NullCheck((RuntimeArray*)L_8);
		uint8_t* L_9;
		L_9 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_8, NULL);
		uint16_t* L_10;
		L_10 = il2cpp_unsafe_as_ref<uint16_t>(L_9);
		int32_t L_11 = ___1_start;
		uint16_t* L_12;
		L_12 = il2cpp_unsafe_add<uint16_t,int32_t>(L_10, L_11);
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_13;
		memset((&L_13), 0, sizeof(L_13));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_13), L_12);
		__this->____pointer_0 = L_13;
		int32_t L_14 = ___2_length;
		__this->____length_1 = L_14;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryExtensions_AsSpan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB4ED9F6A5BD665DDFD6708B6FAEE4F577A490F51_gshared_inline (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
	{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = il2cpp_unsafe_as<RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0*>(__this);
		NullCheck(L_0);
		uint8_t* L_1 = (&L_0->___Data_2);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m339FDCE1FC17C2B97AEA44937294504AF706F7FF_gshared_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_ptr;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___1_length;
		__this->____length_1 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_ptr;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___1_length;
		__this->____length_1 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_gshared_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, uint32_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___0_ptr;
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___1_length;
		__this->____length_1 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m031225D82859BA85FEE8375AA52B4CE8DF1ACE00_gshared_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0042;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_array;
		NullCheck((RuntimeObject*)L_4);
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0042:
	{
		int32_t L_9 = ___1_start;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___0_array;
		NullCheck(L_10);
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_11 = ___2_length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_array;
		NullCheck(L_12);
		int32_t L_13 = ___1_start;
		if ((!(((uint32_t)L_11) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___0_array;
		NullCheck((RuntimeArray*)L_14);
		uint8_t* L_15;
		L_15 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_14, NULL);
		uint8_t* L_16;
		L_16 = il2cpp_unsafe_as_ref<uint8_t>(L_15);
		int32_t L_17 = ___1_start;
		uint8_t* L_18;
		L_18 = il2cpp_unsafe_add<uint8_t,int32_t>(L_16, L_17);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_19;
		memset((&L_19), 0, sizeof(L_19));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_19), L_18);
		__this->____pointer_0 = L_19;
		int32_t L_20 = ___2_length;
		__this->____length_1 = L_20;
		return;
	}
}
