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

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t1972936122;
// Mono.Math.BigInteger
struct BigInteger_t2902905089;
// System.AssemblyLoadEventArgs
struct AssemblyLoadEventArgs_t2792010465;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.SortedList
struct SortedList_t2427694641;
// System.ConsoleCancelEventArgs
struct ConsoleCancelEventArgs_t3423053037;
// System.DelegateData
struct DelegateData_t1677132599;
// System.EventArgs
struct EventArgs_t3591816995;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.ResolveEventArgs
struct ResolveEventArgs_t1779456501;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t204812840;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.SByte[]
struct SByteU5BU5D_t2651576203;
// System.Security.Principal.IPrincipal
struct IPrincipal_t2343618843;
// System.Security.SecurityContext
struct SecurityContext_t2435442044;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Text.DecoderFallback
struct DecoderFallback_t3123823036;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t2402303981;
// System.Text.EncoderFallback
struct EncoderFallback_t1188251036;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Threading.ExecutionContext
struct ExecutionContext_t1748372627;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t451242010;
// System.Threading.Timer/Scheduler
struct Scheduler_t3215764947;
// System.Threading.TimerCallback
struct TimerCallback_t1438585625;
// System.Threading.WaitHandle
struct WaitHandle_t1743403487;
// System.Threading.WaitOrTimerCallback
struct WaitOrTimerCallback_t1973723282;
// System.Type
struct Type_t;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t2886101344;
// System.Void
struct Void_t1185182177;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef MARSHALBYREFOBJECT_T2760389100_H
#define MARSHALBYREFOBJECT_T2760389100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2760389100  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2342208608 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2760389100, ____identity_0)); }
	inline ServerIdentity_t2342208608 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2342208608 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2342208608 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T2760389100_H
#ifndef CRITICALFINALIZEROBJECT_T701527852_H
#define CRITICALFINALIZEROBJECT_T701527852_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t701527852  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T701527852_H
#ifndef DECODER_T2204182725_H
#define DECODER_T2204182725_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Decoder
struct  Decoder_t2204182725  : public RuntimeObject
{
public:
	// System.Text.DecoderFallback System.Text.Decoder::fallback
	DecoderFallback_t3123823036 * ___fallback_0;
	// System.Text.DecoderFallbackBuffer System.Text.Decoder::fallback_buffer
	DecoderFallbackBuffer_t2402303981 * ___fallback_buffer_1;

public:
	inline static int32_t get_offset_of_fallback_0() { return static_cast<int32_t>(offsetof(Decoder_t2204182725, ___fallback_0)); }
	inline DecoderFallback_t3123823036 * get_fallback_0() const { return ___fallback_0; }
	inline DecoderFallback_t3123823036 ** get_address_of_fallback_0() { return &___fallback_0; }
	inline void set_fallback_0(DecoderFallback_t3123823036 * value)
	{
		___fallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___fallback_0), value);
	}

	inline static int32_t get_offset_of_fallback_buffer_1() { return static_cast<int32_t>(offsetof(Decoder_t2204182725, ___fallback_buffer_1)); }
	inline DecoderFallbackBuffer_t2402303981 * get_fallback_buffer_1() const { return ___fallback_buffer_1; }
	inline DecoderFallbackBuffer_t2402303981 ** get_address_of_fallback_buffer_1() { return &___fallback_buffer_1; }
	inline void set_fallback_buffer_1(DecoderFallbackBuffer_t2402303981 * value)
	{
		___fallback_buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___fallback_buffer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODER_T2204182725_H
#ifndef DECODERFALLBACK_T3123823036_H
#define DECODERFALLBACK_T3123823036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderFallback
struct  DecoderFallback_t3123823036  : public RuntimeObject
{
public:

public:
};

struct DecoderFallback_t3123823036_StaticFields
{
public:
	// System.Text.DecoderFallback System.Text.DecoderFallback::exception_fallback
	DecoderFallback_t3123823036 * ___exception_fallback_0;
	// System.Text.DecoderFallback System.Text.DecoderFallback::replacement_fallback
	DecoderFallback_t3123823036 * ___replacement_fallback_1;
	// System.Text.DecoderFallback System.Text.DecoderFallback::standard_safe_fallback
	DecoderFallback_t3123823036 * ___standard_safe_fallback_2;

public:
	inline static int32_t get_offset_of_exception_fallback_0() { return static_cast<int32_t>(offsetof(DecoderFallback_t3123823036_StaticFields, ___exception_fallback_0)); }
	inline DecoderFallback_t3123823036 * get_exception_fallback_0() const { return ___exception_fallback_0; }
	inline DecoderFallback_t3123823036 ** get_address_of_exception_fallback_0() { return &___exception_fallback_0; }
	inline void set_exception_fallback_0(DecoderFallback_t3123823036 * value)
	{
		___exception_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___exception_fallback_0), value);
	}

	inline static int32_t get_offset_of_replacement_fallback_1() { return static_cast<int32_t>(offsetof(DecoderFallback_t3123823036_StaticFields, ___replacement_fallback_1)); }
	inline DecoderFallback_t3123823036 * get_replacement_fallback_1() const { return ___replacement_fallback_1; }
	inline DecoderFallback_t3123823036 ** get_address_of_replacement_fallback_1() { return &___replacement_fallback_1; }
	inline void set_replacement_fallback_1(DecoderFallback_t3123823036 * value)
	{
		___replacement_fallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_fallback_1), value);
	}

	inline static int32_t get_offset_of_standard_safe_fallback_2() { return static_cast<int32_t>(offsetof(DecoderFallback_t3123823036_StaticFields, ___standard_safe_fallback_2)); }
	inline DecoderFallback_t3123823036 * get_standard_safe_fallback_2() const { return ___standard_safe_fallback_2; }
	inline DecoderFallback_t3123823036 ** get_address_of_standard_safe_fallback_2() { return &___standard_safe_fallback_2; }
	inline void set_standard_safe_fallback_2(DecoderFallback_t3123823036 * value)
	{
		___standard_safe_fallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___standard_safe_fallback_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERFALLBACK_T3123823036_H
#ifndef DECODERFALLBACKBUFFER_T2402303981_H
#define DECODERFALLBACKBUFFER_T2402303981_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderFallbackBuffer
struct  DecoderFallbackBuffer_t2402303981  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERFALLBACKBUFFER_T2402303981_H
#ifndef ENCODERFALLBACK_T1188251036_H
#define ENCODERFALLBACK_T1188251036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallback
struct  EncoderFallback_t1188251036  : public RuntimeObject
{
public:

public:
};

struct EncoderFallback_t1188251036_StaticFields
{
public:
	// System.Text.EncoderFallback System.Text.EncoderFallback::exception_fallback
	EncoderFallback_t1188251036 * ___exception_fallback_0;
	// System.Text.EncoderFallback System.Text.EncoderFallback::replacement_fallback
	EncoderFallback_t1188251036 * ___replacement_fallback_1;
	// System.Text.EncoderFallback System.Text.EncoderFallback::standard_safe_fallback
	EncoderFallback_t1188251036 * ___standard_safe_fallback_2;

public:
	inline static int32_t get_offset_of_exception_fallback_0() { return static_cast<int32_t>(offsetof(EncoderFallback_t1188251036_StaticFields, ___exception_fallback_0)); }
	inline EncoderFallback_t1188251036 * get_exception_fallback_0() const { return ___exception_fallback_0; }
	inline EncoderFallback_t1188251036 ** get_address_of_exception_fallback_0() { return &___exception_fallback_0; }
	inline void set_exception_fallback_0(EncoderFallback_t1188251036 * value)
	{
		___exception_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___exception_fallback_0), value);
	}

	inline static int32_t get_offset_of_replacement_fallback_1() { return static_cast<int32_t>(offsetof(EncoderFallback_t1188251036_StaticFields, ___replacement_fallback_1)); }
	inline EncoderFallback_t1188251036 * get_replacement_fallback_1() const { return ___replacement_fallback_1; }
	inline EncoderFallback_t1188251036 ** get_address_of_replacement_fallback_1() { return &___replacement_fallback_1; }
	inline void set_replacement_fallback_1(EncoderFallback_t1188251036 * value)
	{
		___replacement_fallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_fallback_1), value);
	}

	inline static int32_t get_offset_of_standard_safe_fallback_2() { return static_cast<int32_t>(offsetof(EncoderFallback_t1188251036_StaticFields, ___standard_safe_fallback_2)); }
	inline EncoderFallback_t1188251036 * get_standard_safe_fallback_2() const { return ___standard_safe_fallback_2; }
	inline EncoderFallback_t1188251036 ** get_address_of_standard_safe_fallback_2() { return &___standard_safe_fallback_2; }
	inline void set_standard_safe_fallback_2(EncoderFallback_t1188251036 * value)
	{
		___standard_safe_fallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___standard_safe_fallback_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERFALLBACK_T1188251036_H
#ifndef ENCODERFALLBACKBUFFER_T3523102303_H
#define ENCODERFALLBACKBUFFER_T3523102303_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallbackBuffer
struct  EncoderFallbackBuffer_t3523102303  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERFALLBACKBUFFER_T3523102303_H
#ifndef ENCODING_T1523322056_H
#define ENCODING_T1523322056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t1523322056  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::codePage
	int32_t ___codePage_0;
	// System.Int32 System.Text.Encoding::windows_code_page
	int32_t ___windows_code_page_1;
	// System.Boolean System.Text.Encoding::is_readonly
	bool ___is_readonly_2;
	// System.Text.DecoderFallback System.Text.Encoding::decoder_fallback
	DecoderFallback_t3123823036 * ___decoder_fallback_3;
	// System.Text.EncoderFallback System.Text.Encoding::encoder_fallback
	EncoderFallback_t1188251036 * ___encoder_fallback_4;
	// System.String System.Text.Encoding::body_name
	String_t* ___body_name_8;
	// System.String System.Text.Encoding::encoding_name
	String_t* ___encoding_name_9;
	// System.String System.Text.Encoding::header_name
	String_t* ___header_name_10;
	// System.Boolean System.Text.Encoding::is_mail_news_display
	bool ___is_mail_news_display_11;
	// System.Boolean System.Text.Encoding::is_mail_news_save
	bool ___is_mail_news_save_12;
	// System.Boolean System.Text.Encoding::is_browser_save
	bool ___is_browser_save_13;
	// System.Boolean System.Text.Encoding::is_browser_display
	bool ___is_browser_display_14;
	// System.String System.Text.Encoding::web_name
	String_t* ___web_name_15;

public:
	inline static int32_t get_offset_of_codePage_0() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___codePage_0)); }
	inline int32_t get_codePage_0() const { return ___codePage_0; }
	inline int32_t* get_address_of_codePage_0() { return &___codePage_0; }
	inline void set_codePage_0(int32_t value)
	{
		___codePage_0 = value;
	}

	inline static int32_t get_offset_of_windows_code_page_1() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___windows_code_page_1)); }
	inline int32_t get_windows_code_page_1() const { return ___windows_code_page_1; }
	inline int32_t* get_address_of_windows_code_page_1() { return &___windows_code_page_1; }
	inline void set_windows_code_page_1(int32_t value)
	{
		___windows_code_page_1 = value;
	}

	inline static int32_t get_offset_of_is_readonly_2() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_readonly_2)); }
	inline bool get_is_readonly_2() const { return ___is_readonly_2; }
	inline bool* get_address_of_is_readonly_2() { return &___is_readonly_2; }
	inline void set_is_readonly_2(bool value)
	{
		___is_readonly_2 = value;
	}

	inline static int32_t get_offset_of_decoder_fallback_3() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___decoder_fallback_3)); }
	inline DecoderFallback_t3123823036 * get_decoder_fallback_3() const { return ___decoder_fallback_3; }
	inline DecoderFallback_t3123823036 ** get_address_of_decoder_fallback_3() { return &___decoder_fallback_3; }
	inline void set_decoder_fallback_3(DecoderFallback_t3123823036 * value)
	{
		___decoder_fallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_fallback_3), value);
	}

	inline static int32_t get_offset_of_encoder_fallback_4() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoder_fallback_4)); }
	inline EncoderFallback_t1188251036 * get_encoder_fallback_4() const { return ___encoder_fallback_4; }
	inline EncoderFallback_t1188251036 ** get_address_of_encoder_fallback_4() { return &___encoder_fallback_4; }
	inline void set_encoder_fallback_4(EncoderFallback_t1188251036 * value)
	{
		___encoder_fallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_fallback_4), value);
	}

	inline static int32_t get_offset_of_body_name_8() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___body_name_8)); }
	inline String_t* get_body_name_8() const { return ___body_name_8; }
	inline String_t** get_address_of_body_name_8() { return &___body_name_8; }
	inline void set_body_name_8(String_t* value)
	{
		___body_name_8 = value;
		Il2CppCodeGenWriteBarrier((&___body_name_8), value);
	}

	inline static int32_t get_offset_of_encoding_name_9() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoding_name_9)); }
	inline String_t* get_encoding_name_9() const { return ___encoding_name_9; }
	inline String_t** get_address_of_encoding_name_9() { return &___encoding_name_9; }
	inline void set_encoding_name_9(String_t* value)
	{
		___encoding_name_9 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_name_9), value);
	}

	inline static int32_t get_offset_of_header_name_10() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___header_name_10)); }
	inline String_t* get_header_name_10() const { return ___header_name_10; }
	inline String_t** get_address_of_header_name_10() { return &___header_name_10; }
	inline void set_header_name_10(String_t* value)
	{
		___header_name_10 = value;
		Il2CppCodeGenWriteBarrier((&___header_name_10), value);
	}

	inline static int32_t get_offset_of_is_mail_news_display_11() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_display_11)); }
	inline bool get_is_mail_news_display_11() const { return ___is_mail_news_display_11; }
	inline bool* get_address_of_is_mail_news_display_11() { return &___is_mail_news_display_11; }
	inline void set_is_mail_news_display_11(bool value)
	{
		___is_mail_news_display_11 = value;
	}

	inline static int32_t get_offset_of_is_mail_news_save_12() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_save_12)); }
	inline bool get_is_mail_news_save_12() const { return ___is_mail_news_save_12; }
	inline bool* get_address_of_is_mail_news_save_12() { return &___is_mail_news_save_12; }
	inline void set_is_mail_news_save_12(bool value)
	{
		___is_mail_news_save_12 = value;
	}

	inline static int32_t get_offset_of_is_browser_save_13() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_save_13)); }
	inline bool get_is_browser_save_13() const { return ___is_browser_save_13; }
	inline bool* get_address_of_is_browser_save_13() { return &___is_browser_save_13; }
	inline void set_is_browser_save_13(bool value)
	{
		___is_browser_save_13 = value;
	}

	inline static int32_t get_offset_of_is_browser_display_14() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_display_14)); }
	inline bool get_is_browser_display_14() const { return ___is_browser_display_14; }
	inline bool* get_address_of_is_browser_display_14() { return &___is_browser_display_14; }
	inline void set_is_browser_display_14(bool value)
	{
		___is_browser_display_14 = value;
	}

	inline static int32_t get_offset_of_web_name_15() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___web_name_15)); }
	inline String_t* get_web_name_15() const { return ___web_name_15; }
	inline String_t** get_address_of_web_name_15() { return &___web_name_15; }
	inline void set_web_name_15(String_t* value)
	{
		___web_name_15 = value;
		Il2CppCodeGenWriteBarrier((&___web_name_15), value);
	}
};

struct Encoding_t1523322056_StaticFields
{
public:
	// System.Reflection.Assembly System.Text.Encoding::i18nAssembly
	Assembly_t * ___i18nAssembly_5;
	// System.Boolean System.Text.Encoding::i18nDisabled
	bool ___i18nDisabled_6;
	// System.Object[] System.Text.Encoding::encodings
	ObjectU5BU5D_t2843939325* ___encodings_7;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t1523322056 * ___asciiEncoding_16;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianEncoding
	Encoding_t1523322056 * ___bigEndianEncoding_17;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t1523322056 * ___defaultEncoding_18;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t1523322056 * ___utf7Encoding_19;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithMarkers
	Encoding_t1523322056 * ___utf8EncodingWithMarkers_20;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithoutMarkers
	Encoding_t1523322056 * ___utf8EncodingWithoutMarkers_21;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t1523322056 * ___unicodeEncoding_22;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::isoLatin1Encoding
	Encoding_t1523322056 * ___isoLatin1Encoding_23;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingUnsafe
	Encoding_t1523322056 * ___utf8EncodingUnsafe_24;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t1523322056 * ___utf32Encoding_25;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUTF32Encoding
	Encoding_t1523322056 * ___bigEndianUTF32Encoding_26;
	// System.Object System.Text.Encoding::lockobj
	RuntimeObject * ___lockobj_27;

public:
	inline static int32_t get_offset_of_i18nAssembly_5() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nAssembly_5)); }
	inline Assembly_t * get_i18nAssembly_5() const { return ___i18nAssembly_5; }
	inline Assembly_t ** get_address_of_i18nAssembly_5() { return &___i18nAssembly_5; }
	inline void set_i18nAssembly_5(Assembly_t * value)
	{
		___i18nAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___i18nAssembly_5), value);
	}

	inline static int32_t get_offset_of_i18nDisabled_6() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nDisabled_6)); }
	inline bool get_i18nDisabled_6() const { return ___i18nDisabled_6; }
	inline bool* get_address_of_i18nDisabled_6() { return &___i18nDisabled_6; }
	inline void set_i18nDisabled_6(bool value)
	{
		___i18nDisabled_6 = value;
	}

	inline static int32_t get_offset_of_encodings_7() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___encodings_7)); }
	inline ObjectU5BU5D_t2843939325* get_encodings_7() const { return ___encodings_7; }
	inline ObjectU5BU5D_t2843939325** get_address_of_encodings_7() { return &___encodings_7; }
	inline void set_encodings_7(ObjectU5BU5D_t2843939325* value)
	{
		___encodings_7 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_7), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_16() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___asciiEncoding_16)); }
	inline Encoding_t1523322056 * get_asciiEncoding_16() const { return ___asciiEncoding_16; }
	inline Encoding_t1523322056 ** get_address_of_asciiEncoding_16() { return &___asciiEncoding_16; }
	inline void set_asciiEncoding_16(Encoding_t1523322056 * value)
	{
		___asciiEncoding_16 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_16), value);
	}

	inline static int32_t get_offset_of_bigEndianEncoding_17() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianEncoding_17)); }
	inline Encoding_t1523322056 * get_bigEndianEncoding_17() const { return ___bigEndianEncoding_17; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianEncoding_17() { return &___bigEndianEncoding_17; }
	inline void set_bigEndianEncoding_17(Encoding_t1523322056 * value)
	{
		___bigEndianEncoding_17 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianEncoding_17), value);
	}

	inline static int32_t get_offset_of_defaultEncoding_18() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___defaultEncoding_18)); }
	inline Encoding_t1523322056 * get_defaultEncoding_18() const { return ___defaultEncoding_18; }
	inline Encoding_t1523322056 ** get_address_of_defaultEncoding_18() { return &___defaultEncoding_18; }
	inline void set_defaultEncoding_18(Encoding_t1523322056 * value)
	{
		___defaultEncoding_18 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_18), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_19() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf7Encoding_19)); }
	inline Encoding_t1523322056 * get_utf7Encoding_19() const { return ___utf7Encoding_19; }
	inline Encoding_t1523322056 ** get_address_of_utf7Encoding_19() { return &___utf7Encoding_19; }
	inline void set_utf7Encoding_19(Encoding_t1523322056 * value)
	{
		___utf7Encoding_19 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_19), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithMarkers_20() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithMarkers_20)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithMarkers_20() const { return ___utf8EncodingWithMarkers_20; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithMarkers_20() { return &___utf8EncodingWithMarkers_20; }
	inline void set_utf8EncodingWithMarkers_20(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithMarkers_20 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithMarkers_20), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithoutMarkers_21() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithoutMarkers_21)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithoutMarkers_21() const { return ___utf8EncodingWithoutMarkers_21; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithoutMarkers_21() { return &___utf8EncodingWithoutMarkers_21; }
	inline void set_utf8EncodingWithoutMarkers_21(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithoutMarkers_21 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithoutMarkers_21), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_22() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___unicodeEncoding_22)); }
	inline Encoding_t1523322056 * get_unicodeEncoding_22() const { return ___unicodeEncoding_22; }
	inline Encoding_t1523322056 ** get_address_of_unicodeEncoding_22() { return &___unicodeEncoding_22; }
	inline void set_unicodeEncoding_22(Encoding_t1523322056 * value)
	{
		___unicodeEncoding_22 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_22), value);
	}

	inline static int32_t get_offset_of_isoLatin1Encoding_23() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___isoLatin1Encoding_23)); }
	inline Encoding_t1523322056 * get_isoLatin1Encoding_23() const { return ___isoLatin1Encoding_23; }
	inline Encoding_t1523322056 ** get_address_of_isoLatin1Encoding_23() { return &___isoLatin1Encoding_23; }
	inline void set_isoLatin1Encoding_23(Encoding_t1523322056 * value)
	{
		___isoLatin1Encoding_23 = value;
		Il2CppCodeGenWriteBarrier((&___isoLatin1Encoding_23), value);
	}

	inline static int32_t get_offset_of_utf8EncodingUnsafe_24() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingUnsafe_24)); }
	inline Encoding_t1523322056 * get_utf8EncodingUnsafe_24() const { return ___utf8EncodingUnsafe_24; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingUnsafe_24() { return &___utf8EncodingUnsafe_24; }
	inline void set_utf8EncodingUnsafe_24(Encoding_t1523322056 * value)
	{
		___utf8EncodingUnsafe_24 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingUnsafe_24), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_25() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf32Encoding_25)); }
	inline Encoding_t1523322056 * get_utf32Encoding_25() const { return ___utf32Encoding_25; }
	inline Encoding_t1523322056 ** get_address_of_utf32Encoding_25() { return &___utf32Encoding_25; }
	inline void set_utf32Encoding_25(Encoding_t1523322056 * value)
	{
		___utf32Encoding_25 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_25), value);
	}

	inline static int32_t get_offset_of_bigEndianUTF32Encoding_26() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianUTF32Encoding_26)); }
	inline Encoding_t1523322056 * get_bigEndianUTF32Encoding_26() const { return ___bigEndianUTF32Encoding_26; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianUTF32Encoding_26() { return &___bigEndianUTF32Encoding_26; }
	inline void set_bigEndianUTF32Encoding_26(Encoding_t1523322056 * value)
	{
		___bigEndianUTF32Encoding_26 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUTF32Encoding_26), value);
	}

	inline static int32_t get_offset_of_lockobj_27() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___lockobj_27)); }
	inline RuntimeObject * get_lockobj_27() const { return ___lockobj_27; }
	inline RuntimeObject ** get_address_of_lockobj_27() { return &___lockobj_27; }
	inline void set_lockobj_27(RuntimeObject * value)
	{
		___lockobj_27 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T1523322056_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef COMPRESSEDSTACK_T1202932761_H
#define COMPRESSEDSTACK_T1202932761_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.CompressedStack
struct  CompressedStack_t1202932761  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Threading.CompressedStack::_list
	ArrayList_t2718874744 * ____list_0;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(CompressedStack_t1202932761, ____list_0)); }
	inline ArrayList_t2718874744 * get__list_0() const { return ____list_0; }
	inline ArrayList_t2718874744 ** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(ArrayList_t2718874744 * value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier((&____list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPRESSEDSTACK_T1202932761_H
#ifndef EXECUTIONCONTEXT_T1748372627_H
#define EXECUTIONCONTEXT_T1748372627_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ExecutionContext
struct  ExecutionContext_t1748372627  : public RuntimeObject
{
public:
	// System.Security.SecurityContext System.Threading.ExecutionContext::_sc
	SecurityContext_t2435442044 * ____sc_0;
	// System.Boolean System.Threading.ExecutionContext::_suppressFlow
	bool ____suppressFlow_1;
	// System.Boolean System.Threading.ExecutionContext::_capture
	bool ____capture_2;

public:
	inline static int32_t get_offset_of__sc_0() { return static_cast<int32_t>(offsetof(ExecutionContext_t1748372627, ____sc_0)); }
	inline SecurityContext_t2435442044 * get__sc_0() const { return ____sc_0; }
	inline SecurityContext_t2435442044 ** get_address_of__sc_0() { return &____sc_0; }
	inline void set__sc_0(SecurityContext_t2435442044 * value)
	{
		____sc_0 = value;
		Il2CppCodeGenWriteBarrier((&____sc_0), value);
	}

	inline static int32_t get_offset_of__suppressFlow_1() { return static_cast<int32_t>(offsetof(ExecutionContext_t1748372627, ____suppressFlow_1)); }
	inline bool get__suppressFlow_1() const { return ____suppressFlow_1; }
	inline bool* get_address_of__suppressFlow_1() { return &____suppressFlow_1; }
	inline void set__suppressFlow_1(bool value)
	{
		____suppressFlow_1 = value;
	}

	inline static int32_t get_offset_of__capture_2() { return static_cast<int32_t>(offsetof(ExecutionContext_t1748372627, ____capture_2)); }
	inline bool get__capture_2() const { return ____capture_2; }
	inline bool* get_address_of__capture_2() { return &____capture_2; }
	inline void set__capture_2(bool value)
	{
		____capture_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTIONCONTEXT_T1748372627_H
#ifndef INTERLOCKED_T2273387594_H
#define INTERLOCKED_T2273387594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Interlocked
struct  Interlocked_t2273387594  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERLOCKED_T2273387594_H
#ifndef MONITOR_T2197244473_H
#define MONITOR_T2197244473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Monitor
struct  Monitor_t2197244473  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONITOR_T2197244473_H
#ifndef NATIVEEVENTCALLS_T570794723_H
#define NATIVEEVENTCALLS_T570794723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.NativeEventCalls
struct  NativeEventCalls_t570794723  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEEVENTCALLS_T570794723_H
#ifndef SYNCHRONIZATIONCONTEXT_T2326897723_H
#define SYNCHRONIZATIONCONTEXT_T2326897723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SynchronizationContext
struct  SynchronizationContext_t2326897723  : public RuntimeObject
{
public:

public:
};

struct SynchronizationContext_t2326897723_ThreadStaticFields
{
public:
	// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::currentContext
	SynchronizationContext_t2326897723 * ___currentContext_0;

public:
	inline static int32_t get_offset_of_currentContext_0() { return static_cast<int32_t>(offsetof(SynchronizationContext_t2326897723_ThreadStaticFields, ___currentContext_0)); }
	inline SynchronizationContext_t2326897723 * get_currentContext_0() const { return ___currentContext_0; }
	inline SynchronizationContext_t2326897723 ** get_address_of_currentContext_0() { return &___currentContext_0; }
	inline void set_currentContext_0(SynchronizationContext_t2326897723 * value)
	{
		___currentContext_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentContext_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZATIONCONTEXT_T2326897723_H
#ifndef THREADPOOL_T2177989550_H
#define THREADPOOL_T2177989550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadPool
struct  ThreadPool_t2177989550  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADPOOL_T2177989550_H
#ifndef SCHEDULER_T3215764947_H
#define SCHEDULER_T3215764947_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Timer/Scheduler
struct  Scheduler_t3215764947  : public RuntimeObject
{
public:
	// System.Collections.SortedList System.Threading.Timer/Scheduler::list
	SortedList_t2427694641 * ___list_1;

public:
	inline static int32_t get_offset_of_list_1() { return static_cast<int32_t>(offsetof(Scheduler_t3215764947, ___list_1)); }
	inline SortedList_t2427694641 * get_list_1() const { return ___list_1; }
	inline SortedList_t2427694641 ** get_address_of_list_1() { return &___list_1; }
	inline void set_list_1(SortedList_t2427694641 * value)
	{
		___list_1 = value;
		Il2CppCodeGenWriteBarrier((&___list_1), value);
	}
};

struct Scheduler_t3215764947_StaticFields
{
public:
	// System.Threading.Timer/Scheduler System.Threading.Timer/Scheduler::instance
	Scheduler_t3215764947 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(Scheduler_t3215764947_StaticFields, ___instance_0)); }
	inline Scheduler_t3215764947 * get_instance_0() const { return ___instance_0; }
	inline Scheduler_t3215764947 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(Scheduler_t3215764947 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCHEDULER_T3215764947_H
#ifndef TIMERCOMPARER_T2774265395_H
#define TIMERCOMPARER_T2774265395_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Timer/TimerComparer
struct  TimerComparer_t2774265395  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMERCOMPARER_T2774265395_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef U24ARRAYTYPEU241024_T3907531057_H
#define U24ARRAYTYPEU241024_T3907531057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$1024
struct  U24ArrayTypeU241024_t3907531057 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU241024_t3907531057__padding[1024];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU241024_T3907531057_H
#ifndef U24ARRAYTYPEU2412_T2490092596_H
#define U24ARRAYTYPEU2412_T2490092596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$12
struct  U24ArrayTypeU2412_t2490092596 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2412_t2490092596__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2412_T2490092596_H
#ifndef U24ARRAYTYPEU24120_T4289081651_H
#define U24ARRAYTYPEU24120_T4289081651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$120
struct  U24ArrayTypeU24120_t4289081651 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24120_t4289081651__padding[120];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24120_T4289081651_H
#ifndef U24ARRAYTYPEU24124_T4289081647_H
#define U24ARRAYTYPEU24124_T4289081647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$124
struct  U24ArrayTypeU24124_t4289081647 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24124_t4289081647__padding[124];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24124_T4289081647_H
#ifndef U24ARRAYTYPEU24128_T4289081659_H
#define U24ARRAYTYPEU24128_T4289081659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$128
struct  U24ArrayTypeU24128_t4289081659 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24128_t4289081659__padding[128];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24128_T4289081659_H
#ifndef U24ARRAYTYPEU24136_T1950429485_H
#define U24ARRAYTYPEU24136_T1950429485_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$136
struct  U24ArrayTypeU24136_t1950429485 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24136_t1950429485__padding[136];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24136_T1950429485_H
#ifndef U24ARRAYTYPEU241452_T377631024_H
#define U24ARRAYTYPEU241452_T377631024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$1452
struct  U24ArrayTypeU241452_t377631024 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU241452_t377631024__padding[1452];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU241452_T377631024_H
#ifndef U24ARRAYTYPEU2416_T3254766644_H
#define U24ARRAYTYPEU2416_T3254766644_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$16
struct  U24ArrayTypeU2416_t3254766644 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2416_t3254766644__padding[16];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2416_T3254766644_H
#ifndef U24ARRAYTYPEU24160_T758788403_H
#define U24ARRAYTYPEU24160_T758788403_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$160
struct  U24ArrayTypeU24160_t758788403 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24160_t758788403__padding[160];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24160_T758788403_H
#ifndef U24ARRAYTYPEU241668_T760361261_H
#define U24ARRAYTYPEU241668_T760361261_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$1668
struct  U24ArrayTypeU241668_t760361261 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU241668_t760361261__padding[1668];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU241668_T760361261_H
#ifndef U24ARRAYTYPEU2420_T1704471045_H
#define U24ARRAYTYPEU2420_T1704471045_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$20
struct  U24ArrayTypeU2420_t1704471045 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2420_t1704471045__padding[20];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2420_T1704471045_H
#ifndef U24ARRAYTYPEU242048_T3505032960_H
#define U24ARRAYTYPEU242048_T3505032960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$2048
struct  U24ArrayTypeU242048_t3505032960 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU242048_t3505032960__padding[2048];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU242048_T3505032960_H
#ifndef U24ARRAYTYPEU242100_T1165856516_H
#define U24ARRAYTYPEU242100_T1165856516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$2100
struct  U24ArrayTypeU242100_t1165856516 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU242100_t1165856516__padding[2100];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU242100_T1165856516_H
#ifndef U24ARRAYTYPEU2424_T2469145093_H
#define U24ARRAYTYPEU2424_T2469145093_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$24
struct  U24ArrayTypeU2424_t2469145093 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2424_t2469145093__padding[24];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2424_T2469145093_H
#ifndef U24ARRAYTYPEU24256_T1929481982_H
#define U24ARRAYTYPEU24256_T1929481982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$256
struct  U24ArrayTypeU24256_t1929481982 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24256_t1929481982__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24256_T1929481982_H
#ifndef U24ARRAYTYPEU243132_T2732071528_H
#define U24ARRAYTYPEU243132_T2732071528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$3132
struct  U24ArrayTypeU243132_t2732071528 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU243132_t2732071528__padding[3132];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU243132_T2732071528_H
#ifndef U24ARRAYTYPEU2432_T3652892010_H
#define U24ARRAYTYPEU2432_T3652892010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$32
struct  U24ArrayTypeU2432_t3652892010 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2432_t3652892010__padding[32];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2432_T3652892010_H
#ifndef U24ARRAYTYPEU2448_T1337922363_H
#define U24ARRAYTYPEU2448_T1337922363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$48
struct  U24ArrayTypeU2448_t1337922363 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2448_t1337922363__padding[48];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2448_T1337922363_H
#ifndef U24ARRAYTYPEU2452_T520724128_H
#define U24ARRAYTYPEU2452_T520724128_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$52
struct  U24ArrayTypeU2452_t520724128 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2452_t520724128__padding[52];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2452_T520724128_H
#ifndef U24ARRAYTYPEU2456_T1285398176_H
#define U24ARRAYTYPEU2456_T1285398176_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$56
struct  U24ArrayTypeU2456_t1285398176 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2456_t1285398176__padding[56];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2456_T1285398176_H
#ifndef U24ARRAYTYPEU2464_T499776625_H
#define U24ARRAYTYPEU2464_T499776625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$64
struct  U24ArrayTypeU2464_t499776625 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2464_t499776625__padding[64];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2464_T499776625_H
#ifndef U24ARRAYTYPEU24640_T2298765680_H
#define U24ARRAYTYPEU24640_T2298765680_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$640
struct  U24ArrayTypeU24640_t2298765680 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24640_t2298765680__padding[640];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24640_T2298765680_H
#ifndef U24ARRAYTYPEU2472_T1683523542_H
#define U24ARRAYTYPEU2472_T1683523542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$72
struct  U24ArrayTypeU2472_t1683523542 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2472_t1683523542__padding[72];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2472_T1683523542_H
#ifndef U24ARRAYTYPEU248_T3244137463_H
#define U24ARRAYTYPEU248_T3244137463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$8
struct  U24ArrayTypeU248_t3244137463 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU248_t3244137463__padding[8];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU248_T3244137463_H
#ifndef U24ARRAYTYPEU2484_T950115319_H
#define U24ARRAYTYPEU2484_T950115319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$84
struct  U24ArrayTypeU2484_t950115319 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2484_t950115319__padding[84];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2484_T950115319_H
#ifndef U24ARRAYTYPEU2496_T2898536284_H
#define U24ARRAYTYPEU2496_T2898536284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$96
struct  U24ArrayTypeU2496_t2898536284 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2496_t2898536284__padding[96];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2496_T2898536284_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef LINK_T544317964_H
#define LINK_T544317964_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Link
struct  Link_t544317964 
{
public:
	// System.Int32 System.Collections.Generic.Link::HashCode
	int32_t ___HashCode_0;
	// System.Int32 System.Collections.Generic.Link::Next
	int32_t ___Next_1;

public:
	inline static int32_t get_offset_of_HashCode_0() { return static_cast<int32_t>(offsetof(Link_t544317964, ___HashCode_0)); }
	inline int32_t get_HashCode_0() const { return ___HashCode_0; }
	inline int32_t* get_address_of_HashCode_0() { return &___HashCode_0; }
	inline void set_HashCode_0(int32_t value)
	{
		___HashCode_0 = value;
	}

	inline static int32_t get_offset_of_Next_1() { return static_cast<int32_t>(offsetof(Link_t544317964, ___Next_1)); }
	inline int32_t get_Next_1() const { return ___Next_1; }
	inline int32_t* get_address_of_Next_1() { return &___Next_1; }
	inline void set_Next_1(int32_t value)
	{
		___Next_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINK_T544317964_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef ASCIIENCODING_T3446586211_H
#define ASCIIENCODING_T3446586211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.ASCIIEncoding
struct  ASCIIEncoding_t3446586211  : public Encoding_t1523322056
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASCIIENCODING_T3446586211_H
#ifndef DECODEREXCEPTIONFALLBACK_T3981484394_H
#define DECODEREXCEPTIONFALLBACK_T3981484394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderExceptionFallback
struct  DecoderExceptionFallback_t3981484394  : public DecoderFallback_t3123823036
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODEREXCEPTIONFALLBACK_T3981484394_H
#ifndef DECODEREXCEPTIONFALLBACKBUFFER_T90938522_H
#define DECODEREXCEPTIONFALLBACKBUFFER_T90938522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderExceptionFallbackBuffer
struct  DecoderExceptionFallbackBuffer_t90938522  : public DecoderFallbackBuffer_t2402303981
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODEREXCEPTIONFALLBACKBUFFER_T90938522_H
#ifndef DECODERREPLACEMENTFALLBACK_T1462101135_H
#define DECODERREPLACEMENTFALLBACK_T1462101135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderReplacementFallback
struct  DecoderReplacementFallback_t1462101135  : public DecoderFallback_t3123823036
{
public:
	// System.String System.Text.DecoderReplacementFallback::replacement
	String_t* ___replacement_3;

public:
	inline static int32_t get_offset_of_replacement_3() { return static_cast<int32_t>(offsetof(DecoderReplacementFallback_t1462101135, ___replacement_3)); }
	inline String_t* get_replacement_3() const { return ___replacement_3; }
	inline String_t** get_address_of_replacement_3() { return &___replacement_3; }
	inline void set_replacement_3(String_t* value)
	{
		___replacement_3 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERREPLACEMENTFALLBACK_T1462101135_H
#ifndef DECODERREPLACEMENTFALLBACKBUFFER_T841144779_H
#define DECODERREPLACEMENTFALLBACKBUFFER_T841144779_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderReplacementFallbackBuffer
struct  DecoderReplacementFallbackBuffer_t841144779  : public DecoderFallbackBuffer_t2402303981
{
public:
	// System.Boolean System.Text.DecoderReplacementFallbackBuffer::fallback_assigned
	bool ___fallback_assigned_0;
	// System.Int32 System.Text.DecoderReplacementFallbackBuffer::current
	int32_t ___current_1;
	// System.String System.Text.DecoderReplacementFallbackBuffer::replacement
	String_t* ___replacement_2;

public:
	inline static int32_t get_offset_of_fallback_assigned_0() { return static_cast<int32_t>(offsetof(DecoderReplacementFallbackBuffer_t841144779, ___fallback_assigned_0)); }
	inline bool get_fallback_assigned_0() const { return ___fallback_assigned_0; }
	inline bool* get_address_of_fallback_assigned_0() { return &___fallback_assigned_0; }
	inline void set_fallback_assigned_0(bool value)
	{
		___fallback_assigned_0 = value;
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(DecoderReplacementFallbackBuffer_t841144779, ___current_1)); }
	inline int32_t get_current_1() const { return ___current_1; }
	inline int32_t* get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(int32_t value)
	{
		___current_1 = value;
	}

	inline static int32_t get_offset_of_replacement_2() { return static_cast<int32_t>(offsetof(DecoderReplacementFallbackBuffer_t841144779, ___replacement_2)); }
	inline String_t* get_replacement_2() const { return ___replacement_2; }
	inline String_t** get_address_of_replacement_2() { return &___replacement_2; }
	inline void set_replacement_2(String_t* value)
	{
		___replacement_2 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERREPLACEMENTFALLBACKBUFFER_T841144779_H
#ifndef ENCODEREXCEPTIONFALLBACK_T1243849599_H
#define ENCODEREXCEPTIONFALLBACK_T1243849599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderExceptionFallback
struct  EncoderExceptionFallback_t1243849599  : public EncoderFallback_t1188251036
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODEREXCEPTIONFALLBACK_T1243849599_H
#ifndef ENCODEREXCEPTIONFALLBACKBUFFER_T3597232471_H
#define ENCODEREXCEPTIONFALLBACKBUFFER_T3597232471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderExceptionFallbackBuffer
struct  EncoderExceptionFallbackBuffer_t3597232471  : public EncoderFallbackBuffer_t3523102303
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODEREXCEPTIONFALLBACKBUFFER_T3597232471_H
#ifndef ENCODERREPLACEMENTFALLBACK_T1623206753_H
#define ENCODERREPLACEMENTFALLBACK_T1623206753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderReplacementFallback
struct  EncoderReplacementFallback_t1623206753  : public EncoderFallback_t1188251036
{
public:
	// System.String System.Text.EncoderReplacementFallback::replacement
	String_t* ___replacement_3;

public:
	inline static int32_t get_offset_of_replacement_3() { return static_cast<int32_t>(offsetof(EncoderReplacementFallback_t1623206753, ___replacement_3)); }
	inline String_t* get_replacement_3() const { return ___replacement_3; }
	inline String_t** get_address_of_replacement_3() { return &___replacement_3; }
	inline void set_replacement_3(String_t* value)
	{
		___replacement_3 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERREPLACEMENTFALLBACK_T1623206753_H
#ifndef ENCODERREPLACEMENTFALLBACKBUFFER_T1863187162_H
#define ENCODERREPLACEMENTFALLBACKBUFFER_T1863187162_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderReplacementFallbackBuffer
struct  EncoderReplacementFallbackBuffer_t1863187162  : public EncoderFallbackBuffer_t3523102303
{
public:
	// System.String System.Text.EncoderReplacementFallbackBuffer::replacement
	String_t* ___replacement_0;
	// System.Int32 System.Text.EncoderReplacementFallbackBuffer::current
	int32_t ___current_1;
	// System.Boolean System.Text.EncoderReplacementFallbackBuffer::fallback_assigned
	bool ___fallback_assigned_2;

public:
	inline static int32_t get_offset_of_replacement_0() { return static_cast<int32_t>(offsetof(EncoderReplacementFallbackBuffer_t1863187162, ___replacement_0)); }
	inline String_t* get_replacement_0() const { return ___replacement_0; }
	inline String_t** get_address_of_replacement_0() { return &___replacement_0; }
	inline void set_replacement_0(String_t* value)
	{
		___replacement_0 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_0), value);
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(EncoderReplacementFallbackBuffer_t1863187162, ___current_1)); }
	inline int32_t get_current_1() const { return ___current_1; }
	inline int32_t* get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(int32_t value)
	{
		___current_1 = value;
	}

	inline static int32_t get_offset_of_fallback_assigned_2() { return static_cast<int32_t>(offsetof(EncoderReplacementFallbackBuffer_t1863187162, ___fallback_assigned_2)); }
	inline bool get_fallback_assigned_2() const { return ___fallback_assigned_2; }
	inline bool* get_address_of_fallback_assigned_2() { return &___fallback_assigned_2; }
	inline void set_fallback_assigned_2(bool value)
	{
		___fallback_assigned_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERREPLACEMENTFALLBACKBUFFER_T1863187162_H
#ifndef FORWARDINGDECODER_T3503728819_H
#define FORWARDINGDECODER_T3503728819_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding/ForwardingDecoder
struct  ForwardingDecoder_t3503728819  : public Decoder_t2204182725
{
public:
	// System.Text.Encoding System.Text.Encoding/ForwardingDecoder::encoding
	Encoding_t1523322056 * ___encoding_2;

public:
	inline static int32_t get_offset_of_encoding_2() { return static_cast<int32_t>(offsetof(ForwardingDecoder_t3503728819, ___encoding_2)); }
	inline Encoding_t1523322056 * get_encoding_2() const { return ___encoding_2; }
	inline Encoding_t1523322056 ** get_address_of_encoding_2() { return &___encoding_2; }
	inline void set_encoding_2(Encoding_t1523322056 * value)
	{
		___encoding_2 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORWARDINGDECODER_T3503728819_H
#ifndef LATIN1ENCODING_T950549005_H
#define LATIN1ENCODING_T950549005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Latin1Encoding
struct  Latin1Encoding_t950549005  : public Encoding_t1523322056
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LATIN1ENCODING_T950549005_H
#ifndef UTF32ENCODING_T312252005_H
#define UTF32ENCODING_T312252005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF32Encoding
struct  UTF32Encoding_t312252005  : public Encoding_t1523322056
{
public:
	// System.Boolean System.Text.UTF32Encoding::bigEndian
	bool ___bigEndian_28;
	// System.Boolean System.Text.UTF32Encoding::byteOrderMark
	bool ___byteOrderMark_29;

public:
	inline static int32_t get_offset_of_bigEndian_28() { return static_cast<int32_t>(offsetof(UTF32Encoding_t312252005, ___bigEndian_28)); }
	inline bool get_bigEndian_28() const { return ___bigEndian_28; }
	inline bool* get_address_of_bigEndian_28() { return &___bigEndian_28; }
	inline void set_bigEndian_28(bool value)
	{
		___bigEndian_28 = value;
	}

	inline static int32_t get_offset_of_byteOrderMark_29() { return static_cast<int32_t>(offsetof(UTF32Encoding_t312252005, ___byteOrderMark_29)); }
	inline bool get_byteOrderMark_29() const { return ___byteOrderMark_29; }
	inline bool* get_address_of_byteOrderMark_29() { return &___byteOrderMark_29; }
	inline void set_byteOrderMark_29(bool value)
	{
		___byteOrderMark_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF32ENCODING_T312252005_H
#ifndef UTF32DECODER_T635925672_H
#define UTF32DECODER_T635925672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF32Encoding/UTF32Decoder
struct  UTF32Decoder_t635925672  : public Decoder_t2204182725
{
public:
	// System.Boolean System.Text.UTF32Encoding/UTF32Decoder::bigEndian
	bool ___bigEndian_2;
	// System.Int32 System.Text.UTF32Encoding/UTF32Decoder::leftOverByte
	int32_t ___leftOverByte_3;
	// System.Int32 System.Text.UTF32Encoding/UTF32Decoder::leftOverLength
	int32_t ___leftOverLength_4;

public:
	inline static int32_t get_offset_of_bigEndian_2() { return static_cast<int32_t>(offsetof(UTF32Decoder_t635925672, ___bigEndian_2)); }
	inline bool get_bigEndian_2() const { return ___bigEndian_2; }
	inline bool* get_address_of_bigEndian_2() { return &___bigEndian_2; }
	inline void set_bigEndian_2(bool value)
	{
		___bigEndian_2 = value;
	}

	inline static int32_t get_offset_of_leftOverByte_3() { return static_cast<int32_t>(offsetof(UTF32Decoder_t635925672, ___leftOverByte_3)); }
	inline int32_t get_leftOverByte_3() const { return ___leftOverByte_3; }
	inline int32_t* get_address_of_leftOverByte_3() { return &___leftOverByte_3; }
	inline void set_leftOverByte_3(int32_t value)
	{
		___leftOverByte_3 = value;
	}

	inline static int32_t get_offset_of_leftOverLength_4() { return static_cast<int32_t>(offsetof(UTF32Decoder_t635925672, ___leftOverLength_4)); }
	inline int32_t get_leftOverLength_4() const { return ___leftOverLength_4; }
	inline int32_t* get_address_of_leftOverLength_4() { return &___leftOverLength_4; }
	inline void set_leftOverLength_4(int32_t value)
	{
		___leftOverLength_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF32DECODER_T635925672_H
#ifndef UTF7ENCODING_T2644108479_H
#define UTF7ENCODING_T2644108479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF7Encoding
struct  UTF7Encoding_t2644108479  : public Encoding_t1523322056
{
public:
	// System.Boolean System.Text.UTF7Encoding::allowOptionals
	bool ___allowOptionals_28;

public:
	inline static int32_t get_offset_of_allowOptionals_28() { return static_cast<int32_t>(offsetof(UTF7Encoding_t2644108479, ___allowOptionals_28)); }
	inline bool get_allowOptionals_28() const { return ___allowOptionals_28; }
	inline bool* get_address_of_allowOptionals_28() { return &___allowOptionals_28; }
	inline void set_allowOptionals_28(bool value)
	{
		___allowOptionals_28 = value;
	}
};

struct UTF7Encoding_t2644108479_StaticFields
{
public:
	// System.Byte[] System.Text.UTF7Encoding::encodingRules
	ByteU5BU5D_t4116647657* ___encodingRules_29;
	// System.SByte[] System.Text.UTF7Encoding::base64Values
	SByteU5BU5D_t2651576203* ___base64Values_30;

public:
	inline static int32_t get_offset_of_encodingRules_29() { return static_cast<int32_t>(offsetof(UTF7Encoding_t2644108479_StaticFields, ___encodingRules_29)); }
	inline ByteU5BU5D_t4116647657* get_encodingRules_29() const { return ___encodingRules_29; }
	inline ByteU5BU5D_t4116647657** get_address_of_encodingRules_29() { return &___encodingRules_29; }
	inline void set_encodingRules_29(ByteU5BU5D_t4116647657* value)
	{
		___encodingRules_29 = value;
		Il2CppCodeGenWriteBarrier((&___encodingRules_29), value);
	}

	inline static int32_t get_offset_of_base64Values_30() { return static_cast<int32_t>(offsetof(UTF7Encoding_t2644108479_StaticFields, ___base64Values_30)); }
	inline SByteU5BU5D_t2651576203* get_base64Values_30() const { return ___base64Values_30; }
	inline SByteU5BU5D_t2651576203** get_address_of_base64Values_30() { return &___base64Values_30; }
	inline void set_base64Values_30(SByteU5BU5D_t2651576203* value)
	{
		___base64Values_30 = value;
		Il2CppCodeGenWriteBarrier((&___base64Values_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF7ENCODING_T2644108479_H
#ifndef UTF7DECODER_T2247208115_H
#define UTF7DECODER_T2247208115_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF7Encoding/UTF7Decoder
struct  UTF7Decoder_t2247208115  : public Decoder_t2204182725
{
public:
	// System.Int32 System.Text.UTF7Encoding/UTF7Decoder::leftOver
	int32_t ___leftOver_2;

public:
	inline static int32_t get_offset_of_leftOver_2() { return static_cast<int32_t>(offsetof(UTF7Decoder_t2247208115, ___leftOver_2)); }
	inline int32_t get_leftOver_2() const { return ___leftOver_2; }
	inline int32_t* get_address_of_leftOver_2() { return &___leftOver_2; }
	inline void set_leftOver_2(int32_t value)
	{
		___leftOver_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF7DECODER_T2247208115_H
#ifndef UTF8ENCODING_T3956466879_H
#define UTF8ENCODING_T3956466879_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF8Encoding
struct  UTF8Encoding_t3956466879  : public Encoding_t1523322056
{
public:
	// System.Boolean System.Text.UTF8Encoding::emitIdentifier
	bool ___emitIdentifier_28;

public:
	inline static int32_t get_offset_of_emitIdentifier_28() { return static_cast<int32_t>(offsetof(UTF8Encoding_t3956466879, ___emitIdentifier_28)); }
	inline bool get_emitIdentifier_28() const { return ___emitIdentifier_28; }
	inline bool* get_address_of_emitIdentifier_28() { return &___emitIdentifier_28; }
	inline void set_emitIdentifier_28(bool value)
	{
		___emitIdentifier_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF8ENCODING_T3956466879_H
#ifndef UTF8DECODER_T2159214862_H
#define UTF8DECODER_T2159214862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF8Encoding/UTF8Decoder
struct  UTF8Decoder_t2159214862  : public Decoder_t2204182725
{
public:
	// System.UInt32 System.Text.UTF8Encoding/UTF8Decoder::leftOverBits
	uint32_t ___leftOverBits_2;
	// System.UInt32 System.Text.UTF8Encoding/UTF8Decoder::leftOverCount
	uint32_t ___leftOverCount_3;

public:
	inline static int32_t get_offset_of_leftOverBits_2() { return static_cast<int32_t>(offsetof(UTF8Decoder_t2159214862, ___leftOverBits_2)); }
	inline uint32_t get_leftOverBits_2() const { return ___leftOverBits_2; }
	inline uint32_t* get_address_of_leftOverBits_2() { return &___leftOverBits_2; }
	inline void set_leftOverBits_2(uint32_t value)
	{
		___leftOverBits_2 = value;
	}

	inline static int32_t get_offset_of_leftOverCount_3() { return static_cast<int32_t>(offsetof(UTF8Decoder_t2159214862, ___leftOverCount_3)); }
	inline uint32_t get_leftOverCount_3() const { return ___leftOverCount_3; }
	inline uint32_t* get_address_of_leftOverCount_3() { return &___leftOverCount_3; }
	inline void set_leftOverCount_3(uint32_t value)
	{
		___leftOverCount_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF8DECODER_T2159214862_H
#ifndef UNICODEENCODING_T1959134050_H
#define UNICODEENCODING_T1959134050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UnicodeEncoding
struct  UnicodeEncoding_t1959134050  : public Encoding_t1523322056
{
public:
	// System.Boolean System.Text.UnicodeEncoding::bigEndian
	bool ___bigEndian_28;
	// System.Boolean System.Text.UnicodeEncoding::byteOrderMark
	bool ___byteOrderMark_29;

public:
	inline static int32_t get_offset_of_bigEndian_28() { return static_cast<int32_t>(offsetof(UnicodeEncoding_t1959134050, ___bigEndian_28)); }
	inline bool get_bigEndian_28() const { return ___bigEndian_28; }
	inline bool* get_address_of_bigEndian_28() { return &___bigEndian_28; }
	inline void set_bigEndian_28(bool value)
	{
		___bigEndian_28 = value;
	}

	inline static int32_t get_offset_of_byteOrderMark_29() { return static_cast<int32_t>(offsetof(UnicodeEncoding_t1959134050, ___byteOrderMark_29)); }
	inline bool get_byteOrderMark_29() const { return ___byteOrderMark_29; }
	inline bool* get_address_of_byteOrderMark_29() { return &___byteOrderMark_29; }
	inline void set_byteOrderMark_29(bool value)
	{
		___byteOrderMark_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNICODEENCODING_T1959134050_H
#ifndef UNICODEDECODER_T872550992_H
#define UNICODEDECODER_T872550992_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UnicodeEncoding/UnicodeDecoder
struct  UnicodeDecoder_t872550992  : public Decoder_t2204182725
{
public:
	// System.Boolean System.Text.UnicodeEncoding/UnicodeDecoder::bigEndian
	bool ___bigEndian_2;
	// System.Int32 System.Text.UnicodeEncoding/UnicodeDecoder::leftOverByte
	int32_t ___leftOverByte_3;

public:
	inline static int32_t get_offset_of_bigEndian_2() { return static_cast<int32_t>(offsetof(UnicodeDecoder_t872550992, ___bigEndian_2)); }
	inline bool get_bigEndian_2() const { return ___bigEndian_2; }
	inline bool* get_address_of_bigEndian_2() { return &___bigEndian_2; }
	inline void set_bigEndian_2(bool value)
	{
		___bigEndian_2 = value;
	}

	inline static int32_t get_offset_of_leftOverByte_3() { return static_cast<int32_t>(offsetof(UnicodeDecoder_t872550992, ___leftOverByte_3)); }
	inline int32_t get_leftOverByte_3() const { return ___leftOverByte_3; }
	inline int32_t* get_address_of_leftOverByte_3() { return &___leftOverByte_3; }
	inline void set_leftOverByte_3(int32_t value)
	{
		___leftOverByte_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNICODEDECODER_T872550992_H
#ifndef TIMER_T716671026_H
#define TIMER_T716671026_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Timer
struct  Timer_t716671026  : public MarshalByRefObject_t2760389100
{
public:
	// System.Threading.TimerCallback System.Threading.Timer::callback
	TimerCallback_t1438585625 * ___callback_2;
	// System.Object System.Threading.Timer::state
	RuntimeObject * ___state_3;
	// System.Int64 System.Threading.Timer::due_time_ms
	int64_t ___due_time_ms_4;
	// System.Int64 System.Threading.Timer::period_ms
	int64_t ___period_ms_5;
	// System.Int64 System.Threading.Timer::next_run
	int64_t ___next_run_6;
	// System.Boolean System.Threading.Timer::disposed
	bool ___disposed_7;

public:
	inline static int32_t get_offset_of_callback_2() { return static_cast<int32_t>(offsetof(Timer_t716671026, ___callback_2)); }
	inline TimerCallback_t1438585625 * get_callback_2() const { return ___callback_2; }
	inline TimerCallback_t1438585625 ** get_address_of_callback_2() { return &___callback_2; }
	inline void set_callback_2(TimerCallback_t1438585625 * value)
	{
		___callback_2 = value;
		Il2CppCodeGenWriteBarrier((&___callback_2), value);
	}

	inline static int32_t get_offset_of_state_3() { return static_cast<int32_t>(offsetof(Timer_t716671026, ___state_3)); }
	inline RuntimeObject * get_state_3() const { return ___state_3; }
	inline RuntimeObject ** get_address_of_state_3() { return &___state_3; }
	inline void set_state_3(RuntimeObject * value)
	{
		___state_3 = value;
		Il2CppCodeGenWriteBarrier((&___state_3), value);
	}

	inline static int32_t get_offset_of_due_time_ms_4() { return static_cast<int32_t>(offsetof(Timer_t716671026, ___due_time_ms_4)); }
	inline int64_t get_due_time_ms_4() const { return ___due_time_ms_4; }
	inline int64_t* get_address_of_due_time_ms_4() { return &___due_time_ms_4; }
	inline void set_due_time_ms_4(int64_t value)
	{
		___due_time_ms_4 = value;
	}

	inline static int32_t get_offset_of_period_ms_5() { return static_cast<int32_t>(offsetof(Timer_t716671026, ___period_ms_5)); }
	inline int64_t get_period_ms_5() const { return ___period_ms_5; }
	inline int64_t* get_address_of_period_ms_5() { return &___period_ms_5; }
	inline void set_period_ms_5(int64_t value)
	{
		___period_ms_5 = value;
	}

	inline static int32_t get_offset_of_next_run_6() { return static_cast<int32_t>(offsetof(Timer_t716671026, ___next_run_6)); }
	inline int64_t get_next_run_6() const { return ___next_run_6; }
	inline int64_t* get_address_of_next_run_6() { return &___next_run_6; }
	inline void set_next_run_6(int64_t value)
	{
		___next_run_6 = value;
	}

	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(Timer_t716671026, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}
};

struct Timer_t716671026_StaticFields
{
public:
	// System.Threading.Timer/Scheduler System.Threading.Timer::scheduler
	Scheduler_t3215764947 * ___scheduler_1;

public:
	inline static int32_t get_offset_of_scheduler_1() { return static_cast<int32_t>(offsetof(Timer_t716671026_StaticFields, ___scheduler_1)); }
	inline Scheduler_t3215764947 * get_scheduler_1() const { return ___scheduler_1; }
	inline Scheduler_t3215764947 ** get_address_of_scheduler_1() { return &___scheduler_1; }
	inline void set_scheduler_1(Scheduler_t3215764947 * value)
	{
		___scheduler_1 = value;
		Il2CppCodeGenWriteBarrier((&___scheduler_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMER_T716671026_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_8;

public:
	inline static int32_t get_offset_of__ticks_8() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_8)); }
	inline int64_t get__ticks_8() const { return ____ticks_8; }
	inline int64_t* get_address_of__ticks_8() { return &____ticks_8; }
	inline void set__ticks_8(int64_t value)
	{
		____ticks_8 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_5;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_6;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_7;

public:
	inline static int32_t get_offset_of_MaxValue_5() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_5)); }
	inline TimeSpan_t881159249  get_MaxValue_5() const { return ___MaxValue_5; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_5() { return &___MaxValue_5; }
	inline void set_MaxValue_5(TimeSpan_t881159249  value)
	{
		___MaxValue_5 = value;
	}

	inline static int32_t get_offset_of_MinValue_6() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_6)); }
	inline TimeSpan_t881159249  get_MinValue_6() const { return ___MinValue_6; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_6() { return &___MinValue_6; }
	inline void set_MinValue_6(TimeSpan_t881159249  value)
	{
		___MinValue_6 = value;
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_7)); }
	inline TimeSpan_t881159249  get_Zero_7() const { return ___Zero_7; }
	inline TimeSpan_t881159249 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(TimeSpan_t881159249  value)
	{
		___Zero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef UINTPTR_T_H
#define UINTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UIntPtr
struct  UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINTPTR_T_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255361_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255361  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType$52 <PrivateImplementationDetails>::$$field-0
	U24ArrayTypeU2452_t520724128  ___U24U24fieldU2D0_0;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-1
	U24ArrayTypeU2424_t2469145093  ___U24U24fieldU2D1_1;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-2
	U24ArrayTypeU2424_t2469145093  ___U24U24fieldU2D2_2;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-3
	U24ArrayTypeU2424_t2469145093  ___U24U24fieldU2D3_3;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-4
	U24ArrayTypeU2424_t2469145093  ___U24U24fieldU2D4_4;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-5
	U24ArrayTypeU2416_t3254766644  ___U24U24fieldU2D5_5;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-6
	U24ArrayTypeU2416_t3254766644  ___U24U24fieldU2D6_6;
	// <PrivateImplementationDetails>/$ArrayType$3132 <PrivateImplementationDetails>::$$field-15
	U24ArrayTypeU243132_t2732071528  ___U24U24fieldU2D15_7;
	// <PrivateImplementationDetails>/$ArrayType$20 <PrivateImplementationDetails>::$$field-16
	U24ArrayTypeU2420_t1704471045  ___U24U24fieldU2D16_8;
	// <PrivateImplementationDetails>/$ArrayType$32 <PrivateImplementationDetails>::$$field-17
	U24ArrayTypeU2432_t3652892010  ___U24U24fieldU2D17_9;
	// <PrivateImplementationDetails>/$ArrayType$48 <PrivateImplementationDetails>::$$field-18
	U24ArrayTypeU2448_t1337922363  ___U24U24fieldU2D18_10;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-19
	U24ArrayTypeU2464_t499776625  ___U24U24fieldU2D19_11;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-20
	U24ArrayTypeU2464_t499776625  ___U24U24fieldU2D20_12;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-21
	U24ArrayTypeU2464_t499776625  ___U24U24fieldU2D21_13;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-22
	U24ArrayTypeU2464_t499776625  ___U24U24fieldU2D22_14;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-23
	U24ArrayTypeU2412_t2490092596  ___U24U24fieldU2D23_15;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-24
	U24ArrayTypeU2412_t2490092596  ___U24U24fieldU2D24_16;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-25
	U24ArrayTypeU2412_t2490092596  ___U24U24fieldU2D25_17;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-26
	U24ArrayTypeU2416_t3254766644  ___U24U24fieldU2D26_18;
	// <PrivateImplementationDetails>/$ArrayType$52 <PrivateImplementationDetails>::$$field-27
	U24ArrayTypeU2452_t520724128  ___U24U24fieldU2D27_19;
	// <PrivateImplementationDetails>/$ArrayType$52 <PrivateImplementationDetails>::$$field-28
	U24ArrayTypeU2452_t520724128  ___U24U24fieldU2D28_20;
	// <PrivateImplementationDetails>/$ArrayType$1668 <PrivateImplementationDetails>::$$field-29
	U24ArrayTypeU241668_t760361261  ___U24U24fieldU2D29_21;
	// <PrivateImplementationDetails>/$ArrayType$2100 <PrivateImplementationDetails>::$$field-30
	U24ArrayTypeU242100_t1165856516  ___U24U24fieldU2D30_22;
	// <PrivateImplementationDetails>/$ArrayType$1452 <PrivateImplementationDetails>::$$field-31
	U24ArrayTypeU241452_t377631024  ___U24U24fieldU2D31_23;
	// <PrivateImplementationDetails>/$ArrayType$136 <PrivateImplementationDetails>::$$field-32
	U24ArrayTypeU24136_t1950429485  ___U24U24fieldU2D32_24;
	// <PrivateImplementationDetails>/$ArrayType$84 <PrivateImplementationDetails>::$$field-34
	U24ArrayTypeU2484_t950115319  ___U24U24fieldU2D34_25;
	// <PrivateImplementationDetails>/$ArrayType$72 <PrivateImplementationDetails>::$$field-35
	U24ArrayTypeU2472_t1683523542  ___U24U24fieldU2D35_26;
	// <PrivateImplementationDetails>/$ArrayType$8 <PrivateImplementationDetails>::$$field-36
	U24ArrayTypeU248_t3244137463  ___U24U24fieldU2D36_27;
	// <PrivateImplementationDetails>/$ArrayType$20 <PrivateImplementationDetails>::$$field-37
	U24ArrayTypeU2420_t1704471045  ___U24U24fieldU2D37_28;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-38
	U24ArrayTypeU2412_t2490092596  ___U24U24fieldU2D38_29;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-39
	U24ArrayTypeU2464_t499776625  ___U24U24fieldU2D39_30;
	// <PrivateImplementationDetails>/$ArrayType$124 <PrivateImplementationDetails>::$$field-40
	U24ArrayTypeU24124_t4289081647  ___U24U24fieldU2D40_31;
	// <PrivateImplementationDetails>/$ArrayType$32 <PrivateImplementationDetails>::$$field-41
	U24ArrayTypeU2432_t3652892010  ___U24U24fieldU2D41_32;
	// <PrivateImplementationDetails>/$ArrayType$96 <PrivateImplementationDetails>::$$field-42
	U24ArrayTypeU2496_t2898536284  ___U24U24fieldU2D42_33;
	// <PrivateImplementationDetails>/$ArrayType$2048 <PrivateImplementationDetails>::$$field-43
	U24ArrayTypeU242048_t3505032960  ___U24U24fieldU2D43_34;
	// <PrivateImplementationDetails>/$ArrayType$56 <PrivateImplementationDetails>::$$field-44
	U24ArrayTypeU2456_t1285398176  ___U24U24fieldU2D44_35;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-45
	U24ArrayTypeU2416_t3254766644  ___U24U24fieldU2D45_36;
	// <PrivateImplementationDetails>/$ArrayType$48 <PrivateImplementationDetails>::$$field-46
	U24ArrayTypeU2448_t1337922363  ___U24U24fieldU2D46_37;
	// <PrivateImplementationDetails>/$ArrayType$2048 <PrivateImplementationDetails>::$$field-47
	U24ArrayTypeU242048_t3505032960  ___U24U24fieldU2D47_38;
	// <PrivateImplementationDetails>/$ArrayType$2048 <PrivateImplementationDetails>::$$field-48
	U24ArrayTypeU242048_t3505032960  ___U24U24fieldU2D48_39;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-49
	U24ArrayTypeU24256_t1929481982  ___U24U24fieldU2D49_40;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-50
	U24ArrayTypeU24256_t1929481982  ___U24U24fieldU2D50_41;
	// <PrivateImplementationDetails>/$ArrayType$120 <PrivateImplementationDetails>::$$field-51
	U24ArrayTypeU24120_t4289081651  ___U24U24fieldU2D51_42;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-52
	U24ArrayTypeU24256_t1929481982  ___U24U24fieldU2D52_43;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-53
	U24ArrayTypeU24256_t1929481982  ___U24U24fieldU2D53_44;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-54
	U24ArrayTypeU241024_t3907531057  ___U24U24fieldU2D54_45;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-55
	U24ArrayTypeU241024_t3907531057  ___U24U24fieldU2D55_46;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-56
	U24ArrayTypeU241024_t3907531057  ___U24U24fieldU2D56_47;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-57
	U24ArrayTypeU241024_t3907531057  ___U24U24fieldU2D57_48;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-58
	U24ArrayTypeU241024_t3907531057  ___U24U24fieldU2D58_49;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-59
	U24ArrayTypeU241024_t3907531057  ___U24U24fieldU2D59_50;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-60
	U24ArrayTypeU241024_t3907531057  ___U24U24fieldU2D60_51;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-61
	U24ArrayTypeU241024_t3907531057  ___U24U24fieldU2D61_52;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-62
	U24ArrayTypeU24256_t1929481982  ___U24U24fieldU2D62_53;
	// <PrivateImplementationDetails>/$ArrayType$640 <PrivateImplementationDetails>::$$field-63
	U24ArrayTypeU24640_t2298765680  ___U24U24fieldU2D63_54;
	// <PrivateImplementationDetails>/$ArrayType$96 <PrivateImplementationDetails>::$$field-64
	U24ArrayTypeU2496_t2898536284  ___U24U24fieldU2D64_55;
	// <PrivateImplementationDetails>/$ArrayType$160 <PrivateImplementationDetails>::$$field-65
	U24ArrayTypeU24160_t758788403  ___U24U24fieldU2D65_56;
	// <PrivateImplementationDetails>/$ArrayType$128 <PrivateImplementationDetails>::$$field-67
	U24ArrayTypeU24128_t4289081659  ___U24U24fieldU2D67_57;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-68
	U24ArrayTypeU24256_t1929481982  ___U24U24fieldU2D68_58;

public:
	inline static int32_t get_offset_of_U24U24fieldU2D0_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D0_0)); }
	inline U24ArrayTypeU2452_t520724128  get_U24U24fieldU2D0_0() const { return ___U24U24fieldU2D0_0; }
	inline U24ArrayTypeU2452_t520724128 * get_address_of_U24U24fieldU2D0_0() { return &___U24U24fieldU2D0_0; }
	inline void set_U24U24fieldU2D0_0(U24ArrayTypeU2452_t520724128  value)
	{
		___U24U24fieldU2D0_0 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D1_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D1_1)); }
	inline U24ArrayTypeU2424_t2469145093  get_U24U24fieldU2D1_1() const { return ___U24U24fieldU2D1_1; }
	inline U24ArrayTypeU2424_t2469145093 * get_address_of_U24U24fieldU2D1_1() { return &___U24U24fieldU2D1_1; }
	inline void set_U24U24fieldU2D1_1(U24ArrayTypeU2424_t2469145093  value)
	{
		___U24U24fieldU2D1_1 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D2_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D2_2)); }
	inline U24ArrayTypeU2424_t2469145093  get_U24U24fieldU2D2_2() const { return ___U24U24fieldU2D2_2; }
	inline U24ArrayTypeU2424_t2469145093 * get_address_of_U24U24fieldU2D2_2() { return &___U24U24fieldU2D2_2; }
	inline void set_U24U24fieldU2D2_2(U24ArrayTypeU2424_t2469145093  value)
	{
		___U24U24fieldU2D2_2 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D3_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D3_3)); }
	inline U24ArrayTypeU2424_t2469145093  get_U24U24fieldU2D3_3() const { return ___U24U24fieldU2D3_3; }
	inline U24ArrayTypeU2424_t2469145093 * get_address_of_U24U24fieldU2D3_3() { return &___U24U24fieldU2D3_3; }
	inline void set_U24U24fieldU2D3_3(U24ArrayTypeU2424_t2469145093  value)
	{
		___U24U24fieldU2D3_3 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D4_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D4_4)); }
	inline U24ArrayTypeU2424_t2469145093  get_U24U24fieldU2D4_4() const { return ___U24U24fieldU2D4_4; }
	inline U24ArrayTypeU2424_t2469145093 * get_address_of_U24U24fieldU2D4_4() { return &___U24U24fieldU2D4_4; }
	inline void set_U24U24fieldU2D4_4(U24ArrayTypeU2424_t2469145093  value)
	{
		___U24U24fieldU2D4_4 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D5_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D5_5)); }
	inline U24ArrayTypeU2416_t3254766644  get_U24U24fieldU2D5_5() const { return ___U24U24fieldU2D5_5; }
	inline U24ArrayTypeU2416_t3254766644 * get_address_of_U24U24fieldU2D5_5() { return &___U24U24fieldU2D5_5; }
	inline void set_U24U24fieldU2D5_5(U24ArrayTypeU2416_t3254766644  value)
	{
		___U24U24fieldU2D5_5 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D6_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D6_6)); }
	inline U24ArrayTypeU2416_t3254766644  get_U24U24fieldU2D6_6() const { return ___U24U24fieldU2D6_6; }
	inline U24ArrayTypeU2416_t3254766644 * get_address_of_U24U24fieldU2D6_6() { return &___U24U24fieldU2D6_6; }
	inline void set_U24U24fieldU2D6_6(U24ArrayTypeU2416_t3254766644  value)
	{
		___U24U24fieldU2D6_6 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D15_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D15_7)); }
	inline U24ArrayTypeU243132_t2732071528  get_U24U24fieldU2D15_7() const { return ___U24U24fieldU2D15_7; }
	inline U24ArrayTypeU243132_t2732071528 * get_address_of_U24U24fieldU2D15_7() { return &___U24U24fieldU2D15_7; }
	inline void set_U24U24fieldU2D15_7(U24ArrayTypeU243132_t2732071528  value)
	{
		___U24U24fieldU2D15_7 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D16_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D16_8)); }
	inline U24ArrayTypeU2420_t1704471045  get_U24U24fieldU2D16_8() const { return ___U24U24fieldU2D16_8; }
	inline U24ArrayTypeU2420_t1704471045 * get_address_of_U24U24fieldU2D16_8() { return &___U24U24fieldU2D16_8; }
	inline void set_U24U24fieldU2D16_8(U24ArrayTypeU2420_t1704471045  value)
	{
		___U24U24fieldU2D16_8 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D17_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D17_9)); }
	inline U24ArrayTypeU2432_t3652892010  get_U24U24fieldU2D17_9() const { return ___U24U24fieldU2D17_9; }
	inline U24ArrayTypeU2432_t3652892010 * get_address_of_U24U24fieldU2D17_9() { return &___U24U24fieldU2D17_9; }
	inline void set_U24U24fieldU2D17_9(U24ArrayTypeU2432_t3652892010  value)
	{
		___U24U24fieldU2D17_9 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D18_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D18_10)); }
	inline U24ArrayTypeU2448_t1337922363  get_U24U24fieldU2D18_10() const { return ___U24U24fieldU2D18_10; }
	inline U24ArrayTypeU2448_t1337922363 * get_address_of_U24U24fieldU2D18_10() { return &___U24U24fieldU2D18_10; }
	inline void set_U24U24fieldU2D18_10(U24ArrayTypeU2448_t1337922363  value)
	{
		___U24U24fieldU2D18_10 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D19_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D19_11)); }
	inline U24ArrayTypeU2464_t499776625  get_U24U24fieldU2D19_11() const { return ___U24U24fieldU2D19_11; }
	inline U24ArrayTypeU2464_t499776625 * get_address_of_U24U24fieldU2D19_11() { return &___U24U24fieldU2D19_11; }
	inline void set_U24U24fieldU2D19_11(U24ArrayTypeU2464_t499776625  value)
	{
		___U24U24fieldU2D19_11 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D20_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D20_12)); }
	inline U24ArrayTypeU2464_t499776625  get_U24U24fieldU2D20_12() const { return ___U24U24fieldU2D20_12; }
	inline U24ArrayTypeU2464_t499776625 * get_address_of_U24U24fieldU2D20_12() { return &___U24U24fieldU2D20_12; }
	inline void set_U24U24fieldU2D20_12(U24ArrayTypeU2464_t499776625  value)
	{
		___U24U24fieldU2D20_12 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D21_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D21_13)); }
	inline U24ArrayTypeU2464_t499776625  get_U24U24fieldU2D21_13() const { return ___U24U24fieldU2D21_13; }
	inline U24ArrayTypeU2464_t499776625 * get_address_of_U24U24fieldU2D21_13() { return &___U24U24fieldU2D21_13; }
	inline void set_U24U24fieldU2D21_13(U24ArrayTypeU2464_t499776625  value)
	{
		___U24U24fieldU2D21_13 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D22_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D22_14)); }
	inline U24ArrayTypeU2464_t499776625  get_U24U24fieldU2D22_14() const { return ___U24U24fieldU2D22_14; }
	inline U24ArrayTypeU2464_t499776625 * get_address_of_U24U24fieldU2D22_14() { return &___U24U24fieldU2D22_14; }
	inline void set_U24U24fieldU2D22_14(U24ArrayTypeU2464_t499776625  value)
	{
		___U24U24fieldU2D22_14 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D23_15() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D23_15)); }
	inline U24ArrayTypeU2412_t2490092596  get_U24U24fieldU2D23_15() const { return ___U24U24fieldU2D23_15; }
	inline U24ArrayTypeU2412_t2490092596 * get_address_of_U24U24fieldU2D23_15() { return &___U24U24fieldU2D23_15; }
	inline void set_U24U24fieldU2D23_15(U24ArrayTypeU2412_t2490092596  value)
	{
		___U24U24fieldU2D23_15 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D24_16() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D24_16)); }
	inline U24ArrayTypeU2412_t2490092596  get_U24U24fieldU2D24_16() const { return ___U24U24fieldU2D24_16; }
	inline U24ArrayTypeU2412_t2490092596 * get_address_of_U24U24fieldU2D24_16() { return &___U24U24fieldU2D24_16; }
	inline void set_U24U24fieldU2D24_16(U24ArrayTypeU2412_t2490092596  value)
	{
		___U24U24fieldU2D24_16 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D25_17() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D25_17)); }
	inline U24ArrayTypeU2412_t2490092596  get_U24U24fieldU2D25_17() const { return ___U24U24fieldU2D25_17; }
	inline U24ArrayTypeU2412_t2490092596 * get_address_of_U24U24fieldU2D25_17() { return &___U24U24fieldU2D25_17; }
	inline void set_U24U24fieldU2D25_17(U24ArrayTypeU2412_t2490092596  value)
	{
		___U24U24fieldU2D25_17 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D26_18() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D26_18)); }
	inline U24ArrayTypeU2416_t3254766644  get_U24U24fieldU2D26_18() const { return ___U24U24fieldU2D26_18; }
	inline U24ArrayTypeU2416_t3254766644 * get_address_of_U24U24fieldU2D26_18() { return &___U24U24fieldU2D26_18; }
	inline void set_U24U24fieldU2D26_18(U24ArrayTypeU2416_t3254766644  value)
	{
		___U24U24fieldU2D26_18 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D27_19() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D27_19)); }
	inline U24ArrayTypeU2452_t520724128  get_U24U24fieldU2D27_19() const { return ___U24U24fieldU2D27_19; }
	inline U24ArrayTypeU2452_t520724128 * get_address_of_U24U24fieldU2D27_19() { return &___U24U24fieldU2D27_19; }
	inline void set_U24U24fieldU2D27_19(U24ArrayTypeU2452_t520724128  value)
	{
		___U24U24fieldU2D27_19 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D28_20() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D28_20)); }
	inline U24ArrayTypeU2452_t520724128  get_U24U24fieldU2D28_20() const { return ___U24U24fieldU2D28_20; }
	inline U24ArrayTypeU2452_t520724128 * get_address_of_U24U24fieldU2D28_20() { return &___U24U24fieldU2D28_20; }
	inline void set_U24U24fieldU2D28_20(U24ArrayTypeU2452_t520724128  value)
	{
		___U24U24fieldU2D28_20 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D29_21() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D29_21)); }
	inline U24ArrayTypeU241668_t760361261  get_U24U24fieldU2D29_21() const { return ___U24U24fieldU2D29_21; }
	inline U24ArrayTypeU241668_t760361261 * get_address_of_U24U24fieldU2D29_21() { return &___U24U24fieldU2D29_21; }
	inline void set_U24U24fieldU2D29_21(U24ArrayTypeU241668_t760361261  value)
	{
		___U24U24fieldU2D29_21 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D30_22() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D30_22)); }
	inline U24ArrayTypeU242100_t1165856516  get_U24U24fieldU2D30_22() const { return ___U24U24fieldU2D30_22; }
	inline U24ArrayTypeU242100_t1165856516 * get_address_of_U24U24fieldU2D30_22() { return &___U24U24fieldU2D30_22; }
	inline void set_U24U24fieldU2D30_22(U24ArrayTypeU242100_t1165856516  value)
	{
		___U24U24fieldU2D30_22 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D31_23() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D31_23)); }
	inline U24ArrayTypeU241452_t377631024  get_U24U24fieldU2D31_23() const { return ___U24U24fieldU2D31_23; }
	inline U24ArrayTypeU241452_t377631024 * get_address_of_U24U24fieldU2D31_23() { return &___U24U24fieldU2D31_23; }
	inline void set_U24U24fieldU2D31_23(U24ArrayTypeU241452_t377631024  value)
	{
		___U24U24fieldU2D31_23 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D32_24() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D32_24)); }
	inline U24ArrayTypeU24136_t1950429485  get_U24U24fieldU2D32_24() const { return ___U24U24fieldU2D32_24; }
	inline U24ArrayTypeU24136_t1950429485 * get_address_of_U24U24fieldU2D32_24() { return &___U24U24fieldU2D32_24; }
	inline void set_U24U24fieldU2D32_24(U24ArrayTypeU24136_t1950429485  value)
	{
		___U24U24fieldU2D32_24 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D34_25() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D34_25)); }
	inline U24ArrayTypeU2484_t950115319  get_U24U24fieldU2D34_25() const { return ___U24U24fieldU2D34_25; }
	inline U24ArrayTypeU2484_t950115319 * get_address_of_U24U24fieldU2D34_25() { return &___U24U24fieldU2D34_25; }
	inline void set_U24U24fieldU2D34_25(U24ArrayTypeU2484_t950115319  value)
	{
		___U24U24fieldU2D34_25 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D35_26() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D35_26)); }
	inline U24ArrayTypeU2472_t1683523542  get_U24U24fieldU2D35_26() const { return ___U24U24fieldU2D35_26; }
	inline U24ArrayTypeU2472_t1683523542 * get_address_of_U24U24fieldU2D35_26() { return &___U24U24fieldU2D35_26; }
	inline void set_U24U24fieldU2D35_26(U24ArrayTypeU2472_t1683523542  value)
	{
		___U24U24fieldU2D35_26 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D36_27() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D36_27)); }
	inline U24ArrayTypeU248_t3244137463  get_U24U24fieldU2D36_27() const { return ___U24U24fieldU2D36_27; }
	inline U24ArrayTypeU248_t3244137463 * get_address_of_U24U24fieldU2D36_27() { return &___U24U24fieldU2D36_27; }
	inline void set_U24U24fieldU2D36_27(U24ArrayTypeU248_t3244137463  value)
	{
		___U24U24fieldU2D36_27 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D37_28() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D37_28)); }
	inline U24ArrayTypeU2420_t1704471045  get_U24U24fieldU2D37_28() const { return ___U24U24fieldU2D37_28; }
	inline U24ArrayTypeU2420_t1704471045 * get_address_of_U24U24fieldU2D37_28() { return &___U24U24fieldU2D37_28; }
	inline void set_U24U24fieldU2D37_28(U24ArrayTypeU2420_t1704471045  value)
	{
		___U24U24fieldU2D37_28 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D38_29() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D38_29)); }
	inline U24ArrayTypeU2412_t2490092596  get_U24U24fieldU2D38_29() const { return ___U24U24fieldU2D38_29; }
	inline U24ArrayTypeU2412_t2490092596 * get_address_of_U24U24fieldU2D38_29() { return &___U24U24fieldU2D38_29; }
	inline void set_U24U24fieldU2D38_29(U24ArrayTypeU2412_t2490092596  value)
	{
		___U24U24fieldU2D38_29 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D39_30() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D39_30)); }
	inline U24ArrayTypeU2464_t499776625  get_U24U24fieldU2D39_30() const { return ___U24U24fieldU2D39_30; }
	inline U24ArrayTypeU2464_t499776625 * get_address_of_U24U24fieldU2D39_30() { return &___U24U24fieldU2D39_30; }
	inline void set_U24U24fieldU2D39_30(U24ArrayTypeU2464_t499776625  value)
	{
		___U24U24fieldU2D39_30 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D40_31() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D40_31)); }
	inline U24ArrayTypeU24124_t4289081647  get_U24U24fieldU2D40_31() const { return ___U24U24fieldU2D40_31; }
	inline U24ArrayTypeU24124_t4289081647 * get_address_of_U24U24fieldU2D40_31() { return &___U24U24fieldU2D40_31; }
	inline void set_U24U24fieldU2D40_31(U24ArrayTypeU24124_t4289081647  value)
	{
		___U24U24fieldU2D40_31 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D41_32() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D41_32)); }
	inline U24ArrayTypeU2432_t3652892010  get_U24U24fieldU2D41_32() const { return ___U24U24fieldU2D41_32; }
	inline U24ArrayTypeU2432_t3652892010 * get_address_of_U24U24fieldU2D41_32() { return &___U24U24fieldU2D41_32; }
	inline void set_U24U24fieldU2D41_32(U24ArrayTypeU2432_t3652892010  value)
	{
		___U24U24fieldU2D41_32 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D42_33() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D42_33)); }
	inline U24ArrayTypeU2496_t2898536284  get_U24U24fieldU2D42_33() const { return ___U24U24fieldU2D42_33; }
	inline U24ArrayTypeU2496_t2898536284 * get_address_of_U24U24fieldU2D42_33() { return &___U24U24fieldU2D42_33; }
	inline void set_U24U24fieldU2D42_33(U24ArrayTypeU2496_t2898536284  value)
	{
		___U24U24fieldU2D42_33 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D43_34() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D43_34)); }
	inline U24ArrayTypeU242048_t3505032960  get_U24U24fieldU2D43_34() const { return ___U24U24fieldU2D43_34; }
	inline U24ArrayTypeU242048_t3505032960 * get_address_of_U24U24fieldU2D43_34() { return &___U24U24fieldU2D43_34; }
	inline void set_U24U24fieldU2D43_34(U24ArrayTypeU242048_t3505032960  value)
	{
		___U24U24fieldU2D43_34 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D44_35() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D44_35)); }
	inline U24ArrayTypeU2456_t1285398176  get_U24U24fieldU2D44_35() const { return ___U24U24fieldU2D44_35; }
	inline U24ArrayTypeU2456_t1285398176 * get_address_of_U24U24fieldU2D44_35() { return &___U24U24fieldU2D44_35; }
	inline void set_U24U24fieldU2D44_35(U24ArrayTypeU2456_t1285398176  value)
	{
		___U24U24fieldU2D44_35 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D45_36() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D45_36)); }
	inline U24ArrayTypeU2416_t3254766644  get_U24U24fieldU2D45_36() const { return ___U24U24fieldU2D45_36; }
	inline U24ArrayTypeU2416_t3254766644 * get_address_of_U24U24fieldU2D45_36() { return &___U24U24fieldU2D45_36; }
	inline void set_U24U24fieldU2D45_36(U24ArrayTypeU2416_t3254766644  value)
	{
		___U24U24fieldU2D45_36 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D46_37() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D46_37)); }
	inline U24ArrayTypeU2448_t1337922363  get_U24U24fieldU2D46_37() const { return ___U24U24fieldU2D46_37; }
	inline U24ArrayTypeU2448_t1337922363 * get_address_of_U24U24fieldU2D46_37() { return &___U24U24fieldU2D46_37; }
	inline void set_U24U24fieldU2D46_37(U24ArrayTypeU2448_t1337922363  value)
	{
		___U24U24fieldU2D46_37 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D47_38() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D47_38)); }
	inline U24ArrayTypeU242048_t3505032960  get_U24U24fieldU2D47_38() const { return ___U24U24fieldU2D47_38; }
	inline U24ArrayTypeU242048_t3505032960 * get_address_of_U24U24fieldU2D47_38() { return &___U24U24fieldU2D47_38; }
	inline void set_U24U24fieldU2D47_38(U24ArrayTypeU242048_t3505032960  value)
	{
		___U24U24fieldU2D47_38 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D48_39() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D48_39)); }
	inline U24ArrayTypeU242048_t3505032960  get_U24U24fieldU2D48_39() const { return ___U24U24fieldU2D48_39; }
	inline U24ArrayTypeU242048_t3505032960 * get_address_of_U24U24fieldU2D48_39() { return &___U24U24fieldU2D48_39; }
	inline void set_U24U24fieldU2D48_39(U24ArrayTypeU242048_t3505032960  value)
	{
		___U24U24fieldU2D48_39 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D49_40() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D49_40)); }
	inline U24ArrayTypeU24256_t1929481982  get_U24U24fieldU2D49_40() const { return ___U24U24fieldU2D49_40; }
	inline U24ArrayTypeU24256_t1929481982 * get_address_of_U24U24fieldU2D49_40() { return &___U24U24fieldU2D49_40; }
	inline void set_U24U24fieldU2D49_40(U24ArrayTypeU24256_t1929481982  value)
	{
		___U24U24fieldU2D49_40 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D50_41() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D50_41)); }
	inline U24ArrayTypeU24256_t1929481982  get_U24U24fieldU2D50_41() const { return ___U24U24fieldU2D50_41; }
	inline U24ArrayTypeU24256_t1929481982 * get_address_of_U24U24fieldU2D50_41() { return &___U24U24fieldU2D50_41; }
	inline void set_U24U24fieldU2D50_41(U24ArrayTypeU24256_t1929481982  value)
	{
		___U24U24fieldU2D50_41 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D51_42() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D51_42)); }
	inline U24ArrayTypeU24120_t4289081651  get_U24U24fieldU2D51_42() const { return ___U24U24fieldU2D51_42; }
	inline U24ArrayTypeU24120_t4289081651 * get_address_of_U24U24fieldU2D51_42() { return &___U24U24fieldU2D51_42; }
	inline void set_U24U24fieldU2D51_42(U24ArrayTypeU24120_t4289081651  value)
	{
		___U24U24fieldU2D51_42 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D52_43() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D52_43)); }
	inline U24ArrayTypeU24256_t1929481982  get_U24U24fieldU2D52_43() const { return ___U24U24fieldU2D52_43; }
	inline U24ArrayTypeU24256_t1929481982 * get_address_of_U24U24fieldU2D52_43() { return &___U24U24fieldU2D52_43; }
	inline void set_U24U24fieldU2D52_43(U24ArrayTypeU24256_t1929481982  value)
	{
		___U24U24fieldU2D52_43 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D53_44() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D53_44)); }
	inline U24ArrayTypeU24256_t1929481982  get_U24U24fieldU2D53_44() const { return ___U24U24fieldU2D53_44; }
	inline U24ArrayTypeU24256_t1929481982 * get_address_of_U24U24fieldU2D53_44() { return &___U24U24fieldU2D53_44; }
	inline void set_U24U24fieldU2D53_44(U24ArrayTypeU24256_t1929481982  value)
	{
		___U24U24fieldU2D53_44 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D54_45() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D54_45)); }
	inline U24ArrayTypeU241024_t3907531057  get_U24U24fieldU2D54_45() const { return ___U24U24fieldU2D54_45; }
	inline U24ArrayTypeU241024_t3907531057 * get_address_of_U24U24fieldU2D54_45() { return &___U24U24fieldU2D54_45; }
	inline void set_U24U24fieldU2D54_45(U24ArrayTypeU241024_t3907531057  value)
	{
		___U24U24fieldU2D54_45 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D55_46() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D55_46)); }
	inline U24ArrayTypeU241024_t3907531057  get_U24U24fieldU2D55_46() const { return ___U24U24fieldU2D55_46; }
	inline U24ArrayTypeU241024_t3907531057 * get_address_of_U24U24fieldU2D55_46() { return &___U24U24fieldU2D55_46; }
	inline void set_U24U24fieldU2D55_46(U24ArrayTypeU241024_t3907531057  value)
	{
		___U24U24fieldU2D55_46 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D56_47() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D56_47)); }
	inline U24ArrayTypeU241024_t3907531057  get_U24U24fieldU2D56_47() const { return ___U24U24fieldU2D56_47; }
	inline U24ArrayTypeU241024_t3907531057 * get_address_of_U24U24fieldU2D56_47() { return &___U24U24fieldU2D56_47; }
	inline void set_U24U24fieldU2D56_47(U24ArrayTypeU241024_t3907531057  value)
	{
		___U24U24fieldU2D56_47 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D57_48() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D57_48)); }
	inline U24ArrayTypeU241024_t3907531057  get_U24U24fieldU2D57_48() const { return ___U24U24fieldU2D57_48; }
	inline U24ArrayTypeU241024_t3907531057 * get_address_of_U24U24fieldU2D57_48() { return &___U24U24fieldU2D57_48; }
	inline void set_U24U24fieldU2D57_48(U24ArrayTypeU241024_t3907531057  value)
	{
		___U24U24fieldU2D57_48 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D58_49() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D58_49)); }
	inline U24ArrayTypeU241024_t3907531057  get_U24U24fieldU2D58_49() const { return ___U24U24fieldU2D58_49; }
	inline U24ArrayTypeU241024_t3907531057 * get_address_of_U24U24fieldU2D58_49() { return &___U24U24fieldU2D58_49; }
	inline void set_U24U24fieldU2D58_49(U24ArrayTypeU241024_t3907531057  value)
	{
		___U24U24fieldU2D58_49 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D59_50() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D59_50)); }
	inline U24ArrayTypeU241024_t3907531057  get_U24U24fieldU2D59_50() const { return ___U24U24fieldU2D59_50; }
	inline U24ArrayTypeU241024_t3907531057 * get_address_of_U24U24fieldU2D59_50() { return &___U24U24fieldU2D59_50; }
	inline void set_U24U24fieldU2D59_50(U24ArrayTypeU241024_t3907531057  value)
	{
		___U24U24fieldU2D59_50 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D60_51() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D60_51)); }
	inline U24ArrayTypeU241024_t3907531057  get_U24U24fieldU2D60_51() const { return ___U24U24fieldU2D60_51; }
	inline U24ArrayTypeU241024_t3907531057 * get_address_of_U24U24fieldU2D60_51() { return &___U24U24fieldU2D60_51; }
	inline void set_U24U24fieldU2D60_51(U24ArrayTypeU241024_t3907531057  value)
	{
		___U24U24fieldU2D60_51 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D61_52() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D61_52)); }
	inline U24ArrayTypeU241024_t3907531057  get_U24U24fieldU2D61_52() const { return ___U24U24fieldU2D61_52; }
	inline U24ArrayTypeU241024_t3907531057 * get_address_of_U24U24fieldU2D61_52() { return &___U24U24fieldU2D61_52; }
	inline void set_U24U24fieldU2D61_52(U24ArrayTypeU241024_t3907531057  value)
	{
		___U24U24fieldU2D61_52 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D62_53() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D62_53)); }
	inline U24ArrayTypeU24256_t1929481982  get_U24U24fieldU2D62_53() const { return ___U24U24fieldU2D62_53; }
	inline U24ArrayTypeU24256_t1929481982 * get_address_of_U24U24fieldU2D62_53() { return &___U24U24fieldU2D62_53; }
	inline void set_U24U24fieldU2D62_53(U24ArrayTypeU24256_t1929481982  value)
	{
		___U24U24fieldU2D62_53 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D63_54() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D63_54)); }
	inline U24ArrayTypeU24640_t2298765680  get_U24U24fieldU2D63_54() const { return ___U24U24fieldU2D63_54; }
	inline U24ArrayTypeU24640_t2298765680 * get_address_of_U24U24fieldU2D63_54() { return &___U24U24fieldU2D63_54; }
	inline void set_U24U24fieldU2D63_54(U24ArrayTypeU24640_t2298765680  value)
	{
		___U24U24fieldU2D63_54 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D64_55() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D64_55)); }
	inline U24ArrayTypeU2496_t2898536284  get_U24U24fieldU2D64_55() const { return ___U24U24fieldU2D64_55; }
	inline U24ArrayTypeU2496_t2898536284 * get_address_of_U24U24fieldU2D64_55() { return &___U24U24fieldU2D64_55; }
	inline void set_U24U24fieldU2D64_55(U24ArrayTypeU2496_t2898536284  value)
	{
		___U24U24fieldU2D64_55 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D65_56() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D65_56)); }
	inline U24ArrayTypeU24160_t758788403  get_U24U24fieldU2D65_56() const { return ___U24U24fieldU2D65_56; }
	inline U24ArrayTypeU24160_t758788403 * get_address_of_U24U24fieldU2D65_56() { return &___U24U24fieldU2D65_56; }
	inline void set_U24U24fieldU2D65_56(U24ArrayTypeU24160_t758788403  value)
	{
		___U24U24fieldU2D65_56 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D67_57() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D67_57)); }
	inline U24ArrayTypeU24128_t4289081659  get_U24U24fieldU2D67_57() const { return ___U24U24fieldU2D67_57; }
	inline U24ArrayTypeU24128_t4289081659 * get_address_of_U24U24fieldU2D67_57() { return &___U24U24fieldU2D67_57; }
	inline void set_U24U24fieldU2D67_57(U24ArrayTypeU24128_t4289081659  value)
	{
		___U24U24fieldU2D67_57 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D68_58() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields, ___U24U24fieldU2D68_58)); }
	inline U24ArrayTypeU24256_t1929481982  get_U24U24fieldU2D68_58() const { return ___U24U24fieldU2D68_58; }
	inline U24ArrayTypeU24256_t1929481982 * get_address_of_U24U24fieldU2D68_58() { return &___U24U24fieldU2D68_58; }
	inline void set_U24U24fieldU2D68_58(U24ArrayTypeU24256_t1929481982  value)
	{
		___U24U24fieldU2D68_58 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255361_H
#ifndef CONFIDENCEFACTOR_T2516000285_H
#define CONFIDENCEFACTOR_T2516000285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.ConfidenceFactor
struct  ConfidenceFactor_t2516000285 
{
public:
	// System.Int32 Mono.Math.Prime.ConfidenceFactor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConfidenceFactor_t2516000285, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIDENCEFACTOR_T2516000285_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef KEYNOTFOUNDEXCEPTION_T2292407383_H
#define KEYNOTFOUNDEXCEPTION_T2292407383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyNotFoundException
struct  KeyNotFoundException_t2292407383  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYNOTFOUNDEXCEPTION_T2292407383_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef EVENTRESETMODE_T3817241503_H
#define EVENTRESETMODE_T3817241503_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.EventResetMode
struct  EventResetMode_t3817241503 
{
public:
	// System.Int32 System.Threading.EventResetMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EventResetMode_t3817241503, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTRESETMODE_T3817241503_H
#ifndef REGISTEREDWAITHANDLE_T1529538454_H
#define REGISTEREDWAITHANDLE_T1529538454_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.RegisteredWaitHandle
struct  RegisteredWaitHandle_t1529538454  : public MarshalByRefObject_t2760389100
{
public:
	// System.Threading.WaitHandle System.Threading.RegisteredWaitHandle::_waitObject
	WaitHandle_t1743403487 * ____waitObject_1;
	// System.Threading.WaitOrTimerCallback System.Threading.RegisteredWaitHandle::_callback
	WaitOrTimerCallback_t1973723282 * ____callback_2;
	// System.TimeSpan System.Threading.RegisteredWaitHandle::_timeout
	TimeSpan_t881159249  ____timeout_3;
	// System.Object System.Threading.RegisteredWaitHandle::_state
	RuntimeObject * ____state_4;
	// System.Boolean System.Threading.RegisteredWaitHandle::_executeOnlyOnce
	bool ____executeOnlyOnce_5;
	// System.Threading.WaitHandle System.Threading.RegisteredWaitHandle::_finalEvent
	WaitHandle_t1743403487 * ____finalEvent_6;
	// System.Threading.ManualResetEvent System.Threading.RegisteredWaitHandle::_cancelEvent
	ManualResetEvent_t451242010 * ____cancelEvent_7;
	// System.Int32 System.Threading.RegisteredWaitHandle::_callsInProcess
	int32_t ____callsInProcess_8;
	// System.Boolean System.Threading.RegisteredWaitHandle::_unregistered
	bool ____unregistered_9;

public:
	inline static int32_t get_offset_of__waitObject_1() { return static_cast<int32_t>(offsetof(RegisteredWaitHandle_t1529538454, ____waitObject_1)); }
	inline WaitHandle_t1743403487 * get__waitObject_1() const { return ____waitObject_1; }
	inline WaitHandle_t1743403487 ** get_address_of__waitObject_1() { return &____waitObject_1; }
	inline void set__waitObject_1(WaitHandle_t1743403487 * value)
	{
		____waitObject_1 = value;
		Il2CppCodeGenWriteBarrier((&____waitObject_1), value);
	}

	inline static int32_t get_offset_of__callback_2() { return static_cast<int32_t>(offsetof(RegisteredWaitHandle_t1529538454, ____callback_2)); }
	inline WaitOrTimerCallback_t1973723282 * get__callback_2() const { return ____callback_2; }
	inline WaitOrTimerCallback_t1973723282 ** get_address_of__callback_2() { return &____callback_2; }
	inline void set__callback_2(WaitOrTimerCallback_t1973723282 * value)
	{
		____callback_2 = value;
		Il2CppCodeGenWriteBarrier((&____callback_2), value);
	}

	inline static int32_t get_offset_of__timeout_3() { return static_cast<int32_t>(offsetof(RegisteredWaitHandle_t1529538454, ____timeout_3)); }
	inline TimeSpan_t881159249  get__timeout_3() const { return ____timeout_3; }
	inline TimeSpan_t881159249 * get_address_of__timeout_3() { return &____timeout_3; }
	inline void set__timeout_3(TimeSpan_t881159249  value)
	{
		____timeout_3 = value;
	}

	inline static int32_t get_offset_of__state_4() { return static_cast<int32_t>(offsetof(RegisteredWaitHandle_t1529538454, ____state_4)); }
	inline RuntimeObject * get__state_4() const { return ____state_4; }
	inline RuntimeObject ** get_address_of__state_4() { return &____state_4; }
	inline void set__state_4(RuntimeObject * value)
	{
		____state_4 = value;
		Il2CppCodeGenWriteBarrier((&____state_4), value);
	}

	inline static int32_t get_offset_of__executeOnlyOnce_5() { return static_cast<int32_t>(offsetof(RegisteredWaitHandle_t1529538454, ____executeOnlyOnce_5)); }
	inline bool get__executeOnlyOnce_5() const { return ____executeOnlyOnce_5; }
	inline bool* get_address_of__executeOnlyOnce_5() { return &____executeOnlyOnce_5; }
	inline void set__executeOnlyOnce_5(bool value)
	{
		____executeOnlyOnce_5 = value;
	}

	inline static int32_t get_offset_of__finalEvent_6() { return static_cast<int32_t>(offsetof(RegisteredWaitHandle_t1529538454, ____finalEvent_6)); }
	inline WaitHandle_t1743403487 * get__finalEvent_6() const { return ____finalEvent_6; }
	inline WaitHandle_t1743403487 ** get_address_of__finalEvent_6() { return &____finalEvent_6; }
	inline void set__finalEvent_6(WaitHandle_t1743403487 * value)
	{
		____finalEvent_6 = value;
		Il2CppCodeGenWriteBarrier((&____finalEvent_6), value);
	}

	inline static int32_t get_offset_of__cancelEvent_7() { return static_cast<int32_t>(offsetof(RegisteredWaitHandle_t1529538454, ____cancelEvent_7)); }
	inline ManualResetEvent_t451242010 * get__cancelEvent_7() const { return ____cancelEvent_7; }
	inline ManualResetEvent_t451242010 ** get_address_of__cancelEvent_7() { return &____cancelEvent_7; }
	inline void set__cancelEvent_7(ManualResetEvent_t451242010 * value)
	{
		____cancelEvent_7 = value;
		Il2CppCodeGenWriteBarrier((&____cancelEvent_7), value);
	}

	inline static int32_t get_offset_of__callsInProcess_8() { return static_cast<int32_t>(offsetof(RegisteredWaitHandle_t1529538454, ____callsInProcess_8)); }
	inline int32_t get__callsInProcess_8() const { return ____callsInProcess_8; }
	inline int32_t* get_address_of__callsInProcess_8() { return &____callsInProcess_8; }
	inline void set__callsInProcess_8(int32_t value)
	{
		____callsInProcess_8 = value;
	}

	inline static int32_t get_offset_of__unregistered_9() { return static_cast<int32_t>(offsetof(RegisteredWaitHandle_t1529538454, ____unregistered_9)); }
	inline bool get__unregistered_9() const { return ____unregistered_9; }
	inline bool* get_address_of__unregistered_9() { return &____unregistered_9; }
	inline void set__unregistered_9(bool value)
	{
		____unregistered_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTEREDWAITHANDLE_T1529538454_H
#ifndef SYNCHRONIZATIONLOCKEXCEPTION_T841761767_H
#define SYNCHRONIZATIONLOCKEXCEPTION_T841761767_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SynchronizationLockException
struct  SynchronizationLockException_t841761767  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZATIONLOCKEXCEPTION_T841761767_H
#ifndef THREADABORTEXCEPTION_T4074510458_H
#define THREADABORTEXCEPTION_T4074510458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadAbortException
struct  ThreadAbortException_t4074510458  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADABORTEXCEPTION_T4074510458_H
#ifndef THREADINTERRUPTEDEXCEPTION_T3240955163_H
#define THREADINTERRUPTEDEXCEPTION_T3240955163_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadInterruptedException
struct  ThreadInterruptedException_t3240955163  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADINTERRUPTEDEXCEPTION_T3240955163_H
#ifndef THREADSTATE_T2533302383_H
#define THREADSTATE_T2533302383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadState
struct  ThreadState_t2533302383 
{
public:
	// System.Int32 System.Threading.ThreadState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ThreadState_t2533302383, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTATE_T2533302383_H
#ifndef THREADSTATEEXCEPTION_T3003788475_H
#define THREADSTATEEXCEPTION_T3003788475_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadStateException
struct  ThreadStateException_t3003788475  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTATEEXCEPTION_T3003788475_H
#ifndef WAITHANDLE_T1743403487_H
#define WAITHANDLE_T1743403487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitHandle
struct  WaitHandle_t1743403487  : public MarshalByRefObject_t2760389100
{
public:
	// Microsoft.Win32.SafeHandles.SafeWaitHandle System.Threading.WaitHandle::safe_wait_handle
	SafeWaitHandle_t1972936122 * ___safe_wait_handle_2;
	// System.Boolean System.Threading.WaitHandle::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_safe_wait_handle_2() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487, ___safe_wait_handle_2)); }
	inline SafeWaitHandle_t1972936122 * get_safe_wait_handle_2() const { return ___safe_wait_handle_2; }
	inline SafeWaitHandle_t1972936122 ** get_address_of_safe_wait_handle_2() { return &___safe_wait_handle_2; }
	inline void set_safe_wait_handle_2(SafeWaitHandle_t1972936122 * value)
	{
		___safe_wait_handle_2 = value;
		Il2CppCodeGenWriteBarrier((&___safe_wait_handle_2), value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};

struct WaitHandle_t1743403487_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_3;

public:
	inline static int32_t get_offset_of_InvalidHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1743403487_StaticFields, ___InvalidHandle_3)); }
	inline intptr_t get_InvalidHandle_3() const { return ___InvalidHandle_3; }
	inline intptr_t* get_address_of_InvalidHandle_3() { return &___InvalidHandle_3; }
	inline void set_InvalidHandle_3(intptr_t value)
	{
		___InvalidHandle_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITHANDLE_T1743403487_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef DECODERFALLBACKEXCEPTION_T1661362184_H
#define DECODERFALLBACKEXCEPTION_T1661362184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderFallbackException
struct  DecoderFallbackException_t1661362184  : public ArgumentException_t132251570
{
public:
	// System.Byte[] System.Text.DecoderFallbackException::bytes_unknown
	ByteU5BU5D_t4116647657* ___bytes_unknown_13;
	// System.Int32 System.Text.DecoderFallbackException::index
	int32_t ___index_14;

public:
	inline static int32_t get_offset_of_bytes_unknown_13() { return static_cast<int32_t>(offsetof(DecoderFallbackException_t1661362184, ___bytes_unknown_13)); }
	inline ByteU5BU5D_t4116647657* get_bytes_unknown_13() const { return ___bytes_unknown_13; }
	inline ByteU5BU5D_t4116647657** get_address_of_bytes_unknown_13() { return &___bytes_unknown_13; }
	inline void set_bytes_unknown_13(ByteU5BU5D_t4116647657* value)
	{
		___bytes_unknown_13 = value;
		Il2CppCodeGenWriteBarrier((&___bytes_unknown_13), value);
	}

	inline static int32_t get_offset_of_index_14() { return static_cast<int32_t>(offsetof(DecoderFallbackException_t1661362184, ___index_14)); }
	inline int32_t get_index_14() const { return ___index_14; }
	inline int32_t* get_address_of_index_14() { return &___index_14; }
	inline void set_index_14(int32_t value)
	{
		___index_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERFALLBACKEXCEPTION_T1661362184_H
#ifndef ENCODERFALLBACKEXCEPTION_T2773771926_H
#define ENCODERFALLBACKEXCEPTION_T2773771926_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallbackException
struct  EncoderFallbackException_t2773771926  : public ArgumentException_t132251570
{
public:
	// System.Char System.Text.EncoderFallbackException::char_unknown
	Il2CppChar ___char_unknown_13;
	// System.Char System.Text.EncoderFallbackException::char_unknown_high
	Il2CppChar ___char_unknown_high_14;
	// System.Char System.Text.EncoderFallbackException::char_unknown_low
	Il2CppChar ___char_unknown_low_15;
	// System.Int32 System.Text.EncoderFallbackException::index
	int32_t ___index_16;

public:
	inline static int32_t get_offset_of_char_unknown_13() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t2773771926, ___char_unknown_13)); }
	inline Il2CppChar get_char_unknown_13() const { return ___char_unknown_13; }
	inline Il2CppChar* get_address_of_char_unknown_13() { return &___char_unknown_13; }
	inline void set_char_unknown_13(Il2CppChar value)
	{
		___char_unknown_13 = value;
	}

	inline static int32_t get_offset_of_char_unknown_high_14() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t2773771926, ___char_unknown_high_14)); }
	inline Il2CppChar get_char_unknown_high_14() const { return ___char_unknown_high_14; }
	inline Il2CppChar* get_address_of_char_unknown_high_14() { return &___char_unknown_high_14; }
	inline void set_char_unknown_high_14(Il2CppChar value)
	{
		___char_unknown_high_14 = value;
	}

	inline static int32_t get_offset_of_char_unknown_low_15() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t2773771926, ___char_unknown_low_15)); }
	inline Il2CppChar get_char_unknown_low_15() const { return ___char_unknown_low_15; }
	inline Il2CppChar* get_address_of_char_unknown_low_15() { return &___char_unknown_low_15; }
	inline void set_char_unknown_low_15(Il2CppChar value)
	{
		___char_unknown_low_15 = value;
	}

	inline static int32_t get_offset_of_index_16() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t2773771926, ___index_16)); }
	inline int32_t get_index_16() const { return ___index_16; }
	inline int32_t* get_address_of_index_16() { return &___index_16; }
	inline void set_index_16(int32_t value)
	{
		___index_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERFALLBACKEXCEPTION_T2773771926_H
#ifndef EVENTWAITHANDLE_T777845177_H
#define EVENTWAITHANDLE_T777845177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.EventWaitHandle
struct  EventWaitHandle_t777845177  : public WaitHandle_t1743403487
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTWAITHANDLE_T777845177_H
#ifndef MUTEX_T3066672582_H
#define MUTEX_T3066672582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Mutex
struct  Mutex_t3066672582  : public WaitHandle_t1743403487
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MUTEX_T3066672582_H
#ifndef THREAD_T2300836069_H
#define THREAD_T2300836069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Thread
struct  Thread_t2300836069  : public CriticalFinalizerObject_t701527852
{
public:
	// System.Int32 System.Threading.Thread::lock_thread_id
	int32_t ___lock_thread_id_0;
	// System.IntPtr System.Threading.Thread::system_thread_handle
	intptr_t ___system_thread_handle_1;
	// System.Object System.Threading.Thread::cached_culture_info
	RuntimeObject * ___cached_culture_info_2;
	// System.IntPtr System.Threading.Thread::unused0
	intptr_t ___unused0_3;
	// System.Boolean System.Threading.Thread::threadpool_thread
	bool ___threadpool_thread_4;
	// System.IntPtr System.Threading.Thread::name
	intptr_t ___name_5;
	// System.Int32 System.Threading.Thread::name_len
	int32_t ___name_len_6;
	// System.Threading.ThreadState System.Threading.Thread::state
	int32_t ___state_7;
	// System.Object System.Threading.Thread::abort_exc
	RuntimeObject * ___abort_exc_8;
	// System.Int32 System.Threading.Thread::abort_state_handle
	int32_t ___abort_state_handle_9;
	// System.Int64 System.Threading.Thread::thread_id
	int64_t ___thread_id_10;
	// System.IntPtr System.Threading.Thread::start_notify
	intptr_t ___start_notify_11;
	// System.IntPtr System.Threading.Thread::stack_ptr
	intptr_t ___stack_ptr_12;
	// System.UIntPtr System.Threading.Thread::static_data
	uintptr_t ___static_data_13;
	// System.IntPtr System.Threading.Thread::jit_data
	intptr_t ___jit_data_14;
	// System.IntPtr System.Threading.Thread::lock_data
	intptr_t ___lock_data_15;
	// System.Object System.Threading.Thread::current_appcontext
	RuntimeObject * ___current_appcontext_16;
	// System.Int32 System.Threading.Thread::stack_size
	int32_t ___stack_size_17;
	// System.Object System.Threading.Thread::start_obj
	RuntimeObject * ___start_obj_18;
	// System.IntPtr System.Threading.Thread::appdomain_refs
	intptr_t ___appdomain_refs_19;
	// System.Int32 System.Threading.Thread::interruption_requested
	int32_t ___interruption_requested_20;
	// System.IntPtr System.Threading.Thread::suspend_event
	intptr_t ___suspend_event_21;
	// System.IntPtr System.Threading.Thread::suspended_event
	intptr_t ___suspended_event_22;
	// System.IntPtr System.Threading.Thread::resume_event
	intptr_t ___resume_event_23;
	// System.IntPtr System.Threading.Thread::synch_cs
	intptr_t ___synch_cs_24;
	// System.IntPtr System.Threading.Thread::serialized_culture_info
	intptr_t ___serialized_culture_info_25;
	// System.Int32 System.Threading.Thread::serialized_culture_info_len
	int32_t ___serialized_culture_info_len_26;
	// System.IntPtr System.Threading.Thread::serialized_ui_culture_info
	intptr_t ___serialized_ui_culture_info_27;
	// System.Int32 System.Threading.Thread::serialized_ui_culture_info_len
	int32_t ___serialized_ui_culture_info_len_28;
	// System.Boolean System.Threading.Thread::thread_dump_requested
	bool ___thread_dump_requested_29;
	// System.IntPtr System.Threading.Thread::end_stack
	intptr_t ___end_stack_30;
	// System.Boolean System.Threading.Thread::thread_interrupt_requested
	bool ___thread_interrupt_requested_31;
	// System.Byte System.Threading.Thread::apartment_state
	uint8_t ___apartment_state_32;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Thread::critical_region_level
	int32_t ___critical_region_level_33;
	// System.Int32 System.Threading.Thread::small_id
	int32_t ___small_id_34;
	// System.IntPtr System.Threading.Thread::manage_callback
	intptr_t ___manage_callback_35;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_36;
	// System.Threading.ExecutionContext System.Threading.Thread::ec_to_set
	ExecutionContext_t1748372627 * ___ec_to_set_37;
	// System.IntPtr System.Threading.Thread::interrupt_on_stop
	intptr_t ___interrupt_on_stop_38;
	// System.IntPtr System.Threading.Thread::unused3
	intptr_t ___unused3_39;
	// System.IntPtr System.Threading.Thread::unused4
	intptr_t ___unused4_40;
	// System.IntPtr System.Threading.Thread::unused5
	intptr_t ___unused5_41;
	// System.IntPtr System.Threading.Thread::unused6
	intptr_t ___unused6_42;
	// System.MulticastDelegate System.Threading.Thread::threadstart
	MulticastDelegate_t * ___threadstart_45;
	// System.Int32 System.Threading.Thread::managed_id
	int32_t ___managed_id_46;
	// System.Security.Principal.IPrincipal System.Threading.Thread::_principal
	RuntimeObject* ____principal_47;
	// System.Boolean System.Threading.Thread::in_currentculture
	bool ___in_currentculture_50;

public:
	inline static int32_t get_offset_of_lock_thread_id_0() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___lock_thread_id_0)); }
	inline int32_t get_lock_thread_id_0() const { return ___lock_thread_id_0; }
	inline int32_t* get_address_of_lock_thread_id_0() { return &___lock_thread_id_0; }
	inline void set_lock_thread_id_0(int32_t value)
	{
		___lock_thread_id_0 = value;
	}

	inline static int32_t get_offset_of_system_thread_handle_1() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___system_thread_handle_1)); }
	inline intptr_t get_system_thread_handle_1() const { return ___system_thread_handle_1; }
	inline intptr_t* get_address_of_system_thread_handle_1() { return &___system_thread_handle_1; }
	inline void set_system_thread_handle_1(intptr_t value)
	{
		___system_thread_handle_1 = value;
	}

	inline static int32_t get_offset_of_cached_culture_info_2() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___cached_culture_info_2)); }
	inline RuntimeObject * get_cached_culture_info_2() const { return ___cached_culture_info_2; }
	inline RuntimeObject ** get_address_of_cached_culture_info_2() { return &___cached_culture_info_2; }
	inline void set_cached_culture_info_2(RuntimeObject * value)
	{
		___cached_culture_info_2 = value;
		Il2CppCodeGenWriteBarrier((&___cached_culture_info_2), value);
	}

	inline static int32_t get_offset_of_unused0_3() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused0_3)); }
	inline intptr_t get_unused0_3() const { return ___unused0_3; }
	inline intptr_t* get_address_of_unused0_3() { return &___unused0_3; }
	inline void set_unused0_3(intptr_t value)
	{
		___unused0_3 = value;
	}

	inline static int32_t get_offset_of_threadpool_thread_4() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___threadpool_thread_4)); }
	inline bool get_threadpool_thread_4() const { return ___threadpool_thread_4; }
	inline bool* get_address_of_threadpool_thread_4() { return &___threadpool_thread_4; }
	inline void set_threadpool_thread_4(bool value)
	{
		___threadpool_thread_4 = value;
	}

	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___name_5)); }
	inline intptr_t get_name_5() const { return ___name_5; }
	inline intptr_t* get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(intptr_t value)
	{
		___name_5 = value;
	}

	inline static int32_t get_offset_of_name_len_6() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___name_len_6)); }
	inline int32_t get_name_len_6() const { return ___name_len_6; }
	inline int32_t* get_address_of_name_len_6() { return &___name_len_6; }
	inline void set_name_len_6(int32_t value)
	{
		___name_len_6 = value;
	}

	inline static int32_t get_offset_of_state_7() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___state_7)); }
	inline int32_t get_state_7() const { return ___state_7; }
	inline int32_t* get_address_of_state_7() { return &___state_7; }
	inline void set_state_7(int32_t value)
	{
		___state_7 = value;
	}

	inline static int32_t get_offset_of_abort_exc_8() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___abort_exc_8)); }
	inline RuntimeObject * get_abort_exc_8() const { return ___abort_exc_8; }
	inline RuntimeObject ** get_address_of_abort_exc_8() { return &___abort_exc_8; }
	inline void set_abort_exc_8(RuntimeObject * value)
	{
		___abort_exc_8 = value;
		Il2CppCodeGenWriteBarrier((&___abort_exc_8), value);
	}

	inline static int32_t get_offset_of_abort_state_handle_9() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___abort_state_handle_9)); }
	inline int32_t get_abort_state_handle_9() const { return ___abort_state_handle_9; }
	inline int32_t* get_address_of_abort_state_handle_9() { return &___abort_state_handle_9; }
	inline void set_abort_state_handle_9(int32_t value)
	{
		___abort_state_handle_9 = value;
	}

	inline static int32_t get_offset_of_thread_id_10() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___thread_id_10)); }
	inline int64_t get_thread_id_10() const { return ___thread_id_10; }
	inline int64_t* get_address_of_thread_id_10() { return &___thread_id_10; }
	inline void set_thread_id_10(int64_t value)
	{
		___thread_id_10 = value;
	}

	inline static int32_t get_offset_of_start_notify_11() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___start_notify_11)); }
	inline intptr_t get_start_notify_11() const { return ___start_notify_11; }
	inline intptr_t* get_address_of_start_notify_11() { return &___start_notify_11; }
	inline void set_start_notify_11(intptr_t value)
	{
		___start_notify_11 = value;
	}

	inline static int32_t get_offset_of_stack_ptr_12() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___stack_ptr_12)); }
	inline intptr_t get_stack_ptr_12() const { return ___stack_ptr_12; }
	inline intptr_t* get_address_of_stack_ptr_12() { return &___stack_ptr_12; }
	inline void set_stack_ptr_12(intptr_t value)
	{
		___stack_ptr_12 = value;
	}

	inline static int32_t get_offset_of_static_data_13() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___static_data_13)); }
	inline uintptr_t get_static_data_13() const { return ___static_data_13; }
	inline uintptr_t* get_address_of_static_data_13() { return &___static_data_13; }
	inline void set_static_data_13(uintptr_t value)
	{
		___static_data_13 = value;
	}

	inline static int32_t get_offset_of_jit_data_14() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___jit_data_14)); }
	inline intptr_t get_jit_data_14() const { return ___jit_data_14; }
	inline intptr_t* get_address_of_jit_data_14() { return &___jit_data_14; }
	inline void set_jit_data_14(intptr_t value)
	{
		___jit_data_14 = value;
	}

	inline static int32_t get_offset_of_lock_data_15() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___lock_data_15)); }
	inline intptr_t get_lock_data_15() const { return ___lock_data_15; }
	inline intptr_t* get_address_of_lock_data_15() { return &___lock_data_15; }
	inline void set_lock_data_15(intptr_t value)
	{
		___lock_data_15 = value;
	}

	inline static int32_t get_offset_of_current_appcontext_16() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___current_appcontext_16)); }
	inline RuntimeObject * get_current_appcontext_16() const { return ___current_appcontext_16; }
	inline RuntimeObject ** get_address_of_current_appcontext_16() { return &___current_appcontext_16; }
	inline void set_current_appcontext_16(RuntimeObject * value)
	{
		___current_appcontext_16 = value;
		Il2CppCodeGenWriteBarrier((&___current_appcontext_16), value);
	}

	inline static int32_t get_offset_of_stack_size_17() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___stack_size_17)); }
	inline int32_t get_stack_size_17() const { return ___stack_size_17; }
	inline int32_t* get_address_of_stack_size_17() { return &___stack_size_17; }
	inline void set_stack_size_17(int32_t value)
	{
		___stack_size_17 = value;
	}

	inline static int32_t get_offset_of_start_obj_18() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___start_obj_18)); }
	inline RuntimeObject * get_start_obj_18() const { return ___start_obj_18; }
	inline RuntimeObject ** get_address_of_start_obj_18() { return &___start_obj_18; }
	inline void set_start_obj_18(RuntimeObject * value)
	{
		___start_obj_18 = value;
		Il2CppCodeGenWriteBarrier((&___start_obj_18), value);
	}

	inline static int32_t get_offset_of_appdomain_refs_19() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___appdomain_refs_19)); }
	inline intptr_t get_appdomain_refs_19() const { return ___appdomain_refs_19; }
	inline intptr_t* get_address_of_appdomain_refs_19() { return &___appdomain_refs_19; }
	inline void set_appdomain_refs_19(intptr_t value)
	{
		___appdomain_refs_19 = value;
	}

	inline static int32_t get_offset_of_interruption_requested_20() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___interruption_requested_20)); }
	inline int32_t get_interruption_requested_20() const { return ___interruption_requested_20; }
	inline int32_t* get_address_of_interruption_requested_20() { return &___interruption_requested_20; }
	inline void set_interruption_requested_20(int32_t value)
	{
		___interruption_requested_20 = value;
	}

	inline static int32_t get_offset_of_suspend_event_21() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___suspend_event_21)); }
	inline intptr_t get_suspend_event_21() const { return ___suspend_event_21; }
	inline intptr_t* get_address_of_suspend_event_21() { return &___suspend_event_21; }
	inline void set_suspend_event_21(intptr_t value)
	{
		___suspend_event_21 = value;
	}

	inline static int32_t get_offset_of_suspended_event_22() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___suspended_event_22)); }
	inline intptr_t get_suspended_event_22() const { return ___suspended_event_22; }
	inline intptr_t* get_address_of_suspended_event_22() { return &___suspended_event_22; }
	inline void set_suspended_event_22(intptr_t value)
	{
		___suspended_event_22 = value;
	}

	inline static int32_t get_offset_of_resume_event_23() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___resume_event_23)); }
	inline intptr_t get_resume_event_23() const { return ___resume_event_23; }
	inline intptr_t* get_address_of_resume_event_23() { return &___resume_event_23; }
	inline void set_resume_event_23(intptr_t value)
	{
		___resume_event_23 = value;
	}

	inline static int32_t get_offset_of_synch_cs_24() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___synch_cs_24)); }
	inline intptr_t get_synch_cs_24() const { return ___synch_cs_24; }
	inline intptr_t* get_address_of_synch_cs_24() { return &___synch_cs_24; }
	inline void set_synch_cs_24(intptr_t value)
	{
		___synch_cs_24 = value;
	}

	inline static int32_t get_offset_of_serialized_culture_info_25() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___serialized_culture_info_25)); }
	inline intptr_t get_serialized_culture_info_25() const { return ___serialized_culture_info_25; }
	inline intptr_t* get_address_of_serialized_culture_info_25() { return &___serialized_culture_info_25; }
	inline void set_serialized_culture_info_25(intptr_t value)
	{
		___serialized_culture_info_25 = value;
	}

	inline static int32_t get_offset_of_serialized_culture_info_len_26() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___serialized_culture_info_len_26)); }
	inline int32_t get_serialized_culture_info_len_26() const { return ___serialized_culture_info_len_26; }
	inline int32_t* get_address_of_serialized_culture_info_len_26() { return &___serialized_culture_info_len_26; }
	inline void set_serialized_culture_info_len_26(int32_t value)
	{
		___serialized_culture_info_len_26 = value;
	}

	inline static int32_t get_offset_of_serialized_ui_culture_info_27() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___serialized_ui_culture_info_27)); }
	inline intptr_t get_serialized_ui_culture_info_27() const { return ___serialized_ui_culture_info_27; }
	inline intptr_t* get_address_of_serialized_ui_culture_info_27() { return &___serialized_ui_culture_info_27; }
	inline void set_serialized_ui_culture_info_27(intptr_t value)
	{
		___serialized_ui_culture_info_27 = value;
	}

	inline static int32_t get_offset_of_serialized_ui_culture_info_len_28() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___serialized_ui_culture_info_len_28)); }
	inline int32_t get_serialized_ui_culture_info_len_28() const { return ___serialized_ui_culture_info_len_28; }
	inline int32_t* get_address_of_serialized_ui_culture_info_len_28() { return &___serialized_ui_culture_info_len_28; }
	inline void set_serialized_ui_culture_info_len_28(int32_t value)
	{
		___serialized_ui_culture_info_len_28 = value;
	}

	inline static int32_t get_offset_of_thread_dump_requested_29() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___thread_dump_requested_29)); }
	inline bool get_thread_dump_requested_29() const { return ___thread_dump_requested_29; }
	inline bool* get_address_of_thread_dump_requested_29() { return &___thread_dump_requested_29; }
	inline void set_thread_dump_requested_29(bool value)
	{
		___thread_dump_requested_29 = value;
	}

	inline static int32_t get_offset_of_end_stack_30() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___end_stack_30)); }
	inline intptr_t get_end_stack_30() const { return ___end_stack_30; }
	inline intptr_t* get_address_of_end_stack_30() { return &___end_stack_30; }
	inline void set_end_stack_30(intptr_t value)
	{
		___end_stack_30 = value;
	}

	inline static int32_t get_offset_of_thread_interrupt_requested_31() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___thread_interrupt_requested_31)); }
	inline bool get_thread_interrupt_requested_31() const { return ___thread_interrupt_requested_31; }
	inline bool* get_address_of_thread_interrupt_requested_31() { return &___thread_interrupt_requested_31; }
	inline void set_thread_interrupt_requested_31(bool value)
	{
		___thread_interrupt_requested_31 = value;
	}

	inline static int32_t get_offset_of_apartment_state_32() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___apartment_state_32)); }
	inline uint8_t get_apartment_state_32() const { return ___apartment_state_32; }
	inline uint8_t* get_address_of_apartment_state_32() { return &___apartment_state_32; }
	inline void set_apartment_state_32(uint8_t value)
	{
		___apartment_state_32 = value;
	}

	inline static int32_t get_offset_of_critical_region_level_33() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___critical_region_level_33)); }
	inline int32_t get_critical_region_level_33() const { return ___critical_region_level_33; }
	inline int32_t* get_address_of_critical_region_level_33() { return &___critical_region_level_33; }
	inline void set_critical_region_level_33(int32_t value)
	{
		___critical_region_level_33 = value;
	}

	inline static int32_t get_offset_of_small_id_34() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___small_id_34)); }
	inline int32_t get_small_id_34() const { return ___small_id_34; }
	inline int32_t* get_address_of_small_id_34() { return &___small_id_34; }
	inline void set_small_id_34(int32_t value)
	{
		___small_id_34 = value;
	}

	inline static int32_t get_offset_of_manage_callback_35() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___manage_callback_35)); }
	inline intptr_t get_manage_callback_35() const { return ___manage_callback_35; }
	inline intptr_t* get_address_of_manage_callback_35() { return &___manage_callback_35; }
	inline void set_manage_callback_35(intptr_t value)
	{
		___manage_callback_35 = value;
	}

	inline static int32_t get_offset_of_pending_exception_36() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___pending_exception_36)); }
	inline RuntimeObject * get_pending_exception_36() const { return ___pending_exception_36; }
	inline RuntimeObject ** get_address_of_pending_exception_36() { return &___pending_exception_36; }
	inline void set_pending_exception_36(RuntimeObject * value)
	{
		___pending_exception_36 = value;
		Il2CppCodeGenWriteBarrier((&___pending_exception_36), value);
	}

	inline static int32_t get_offset_of_ec_to_set_37() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___ec_to_set_37)); }
	inline ExecutionContext_t1748372627 * get_ec_to_set_37() const { return ___ec_to_set_37; }
	inline ExecutionContext_t1748372627 ** get_address_of_ec_to_set_37() { return &___ec_to_set_37; }
	inline void set_ec_to_set_37(ExecutionContext_t1748372627 * value)
	{
		___ec_to_set_37 = value;
		Il2CppCodeGenWriteBarrier((&___ec_to_set_37), value);
	}

	inline static int32_t get_offset_of_interrupt_on_stop_38() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___interrupt_on_stop_38)); }
	inline intptr_t get_interrupt_on_stop_38() const { return ___interrupt_on_stop_38; }
	inline intptr_t* get_address_of_interrupt_on_stop_38() { return &___interrupt_on_stop_38; }
	inline void set_interrupt_on_stop_38(intptr_t value)
	{
		___interrupt_on_stop_38 = value;
	}

	inline static int32_t get_offset_of_unused3_39() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused3_39)); }
	inline intptr_t get_unused3_39() const { return ___unused3_39; }
	inline intptr_t* get_address_of_unused3_39() { return &___unused3_39; }
	inline void set_unused3_39(intptr_t value)
	{
		___unused3_39 = value;
	}

	inline static int32_t get_offset_of_unused4_40() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused4_40)); }
	inline intptr_t get_unused4_40() const { return ___unused4_40; }
	inline intptr_t* get_address_of_unused4_40() { return &___unused4_40; }
	inline void set_unused4_40(intptr_t value)
	{
		___unused4_40 = value;
	}

	inline static int32_t get_offset_of_unused5_41() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused5_41)); }
	inline intptr_t get_unused5_41() const { return ___unused5_41; }
	inline intptr_t* get_address_of_unused5_41() { return &___unused5_41; }
	inline void set_unused5_41(intptr_t value)
	{
		___unused5_41 = value;
	}

	inline static int32_t get_offset_of_unused6_42() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused6_42)); }
	inline intptr_t get_unused6_42() const { return ___unused6_42; }
	inline intptr_t* get_address_of_unused6_42() { return &___unused6_42; }
	inline void set_unused6_42(intptr_t value)
	{
		___unused6_42 = value;
	}

	inline static int32_t get_offset_of_threadstart_45() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___threadstart_45)); }
	inline MulticastDelegate_t * get_threadstart_45() const { return ___threadstart_45; }
	inline MulticastDelegate_t ** get_address_of_threadstart_45() { return &___threadstart_45; }
	inline void set_threadstart_45(MulticastDelegate_t * value)
	{
		___threadstart_45 = value;
		Il2CppCodeGenWriteBarrier((&___threadstart_45), value);
	}

	inline static int32_t get_offset_of_managed_id_46() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___managed_id_46)); }
	inline int32_t get_managed_id_46() const { return ___managed_id_46; }
	inline int32_t* get_address_of_managed_id_46() { return &___managed_id_46; }
	inline void set_managed_id_46(int32_t value)
	{
		___managed_id_46 = value;
	}

	inline static int32_t get_offset_of__principal_47() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ____principal_47)); }
	inline RuntimeObject* get__principal_47() const { return ____principal_47; }
	inline RuntimeObject** get_address_of__principal_47() { return &____principal_47; }
	inline void set__principal_47(RuntimeObject* value)
	{
		____principal_47 = value;
		Il2CppCodeGenWriteBarrier((&____principal_47), value);
	}

	inline static int32_t get_offset_of_in_currentculture_50() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___in_currentculture_50)); }
	inline bool get_in_currentculture_50() const { return ___in_currentculture_50; }
	inline bool* get_address_of_in_currentculture_50() { return &___in_currentculture_50; }
	inline void set_in_currentculture_50(bool value)
	{
		___in_currentculture_50 = value;
	}
};

struct Thread_t2300836069_StaticFields
{
public:
	// System.Collections.Hashtable System.Threading.Thread::datastorehash
	Hashtable_t1853889766 * ___datastorehash_48;
	// System.Object System.Threading.Thread::datastore_lock
	RuntimeObject * ___datastore_lock_49;
	// System.Object System.Threading.Thread::culture_lock
	RuntimeObject * ___culture_lock_51;

public:
	inline static int32_t get_offset_of_datastorehash_48() { return static_cast<int32_t>(offsetof(Thread_t2300836069_StaticFields, ___datastorehash_48)); }
	inline Hashtable_t1853889766 * get_datastorehash_48() const { return ___datastorehash_48; }
	inline Hashtable_t1853889766 ** get_address_of_datastorehash_48() { return &___datastorehash_48; }
	inline void set_datastorehash_48(Hashtable_t1853889766 * value)
	{
		___datastorehash_48 = value;
		Il2CppCodeGenWriteBarrier((&___datastorehash_48), value);
	}

	inline static int32_t get_offset_of_datastore_lock_49() { return static_cast<int32_t>(offsetof(Thread_t2300836069_StaticFields, ___datastore_lock_49)); }
	inline RuntimeObject * get_datastore_lock_49() const { return ___datastore_lock_49; }
	inline RuntimeObject ** get_address_of_datastore_lock_49() { return &___datastore_lock_49; }
	inline void set_datastore_lock_49(RuntimeObject * value)
	{
		___datastore_lock_49 = value;
		Il2CppCodeGenWriteBarrier((&___datastore_lock_49), value);
	}

	inline static int32_t get_offset_of_culture_lock_51() { return static_cast<int32_t>(offsetof(Thread_t2300836069_StaticFields, ___culture_lock_51)); }
	inline RuntimeObject * get_culture_lock_51() const { return ___culture_lock_51; }
	inline RuntimeObject ** get_address_of_culture_lock_51() { return &___culture_lock_51; }
	inline void set_culture_lock_51(RuntimeObject * value)
	{
		___culture_lock_51 = value;
		Il2CppCodeGenWriteBarrier((&___culture_lock_51), value);
	}
};

struct Thread_t2300836069_ThreadStaticFields
{
public:
	// System.Object[] System.Threading.Thread::local_slots
	ObjectU5BU5D_t2843939325* ___local_slots_43;
	// System.Threading.ExecutionContext System.Threading.Thread::_ec
	ExecutionContext_t1748372627 * ____ec_44;

public:
	inline static int32_t get_offset_of_local_slots_43() { return static_cast<int32_t>(offsetof(Thread_t2300836069_ThreadStaticFields, ___local_slots_43)); }
	inline ObjectU5BU5D_t2843939325* get_local_slots_43() const { return ___local_slots_43; }
	inline ObjectU5BU5D_t2843939325** get_address_of_local_slots_43() { return &___local_slots_43; }
	inline void set_local_slots_43(ObjectU5BU5D_t2843939325* value)
	{
		___local_slots_43 = value;
		Il2CppCodeGenWriteBarrier((&___local_slots_43), value);
	}

	inline static int32_t get_offset_of__ec_44() { return static_cast<int32_t>(offsetof(Thread_t2300836069_ThreadStaticFields, ____ec_44)); }
	inline ExecutionContext_t1748372627 * get__ec_44() const { return ____ec_44; }
	inline ExecutionContext_t1748372627 ** get_address_of__ec_44() { return &____ec_44; }
	inline void set__ec_44(ExecutionContext_t1748372627 * value)
	{
		____ec_44 = value;
		Il2CppCodeGenWriteBarrier((&____ec_44), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREAD_T2300836069_H
#ifndef PRIMALITYTEST_T1539325943_H
#define PRIMALITYTEST_T1539325943_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.PrimalityTest
struct  PrimalityTest_t1539325943  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMALITYTEST_T1539325943_H
#ifndef APPDOMAININITIALIZER_T682969308_H
#define APPDOMAININITIALIZER_T682969308_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppDomainInitializer
struct  AppDomainInitializer_t682969308  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPDOMAININITIALIZER_T682969308_H
#ifndef ASSEMBLYLOADEVENTHANDLER_T107971893_H
#define ASSEMBLYLOADEVENTHANDLER_T107971893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AssemblyLoadEventHandler
struct  AssemblyLoadEventHandler_t107971893  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYLOADEVENTHANDLER_T107971893_H
#ifndef CONSOLECANCELEVENTHANDLER_T3919940372_H
#define CONSOLECANCELEVENTHANDLER_T3919940372_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleCancelEventHandler
struct  ConsoleCancelEventHandler_t3919940372  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSOLECANCELEVENTHANDLER_T3919940372_H
#ifndef EVENTHANDLER_T1348719766_H
#define EVENTHANDLER_T1348719766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler
struct  EventHandler_t1348719766  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_T1348719766_H
#ifndef MEMBERFILTER_T426314064_H
#define MEMBERFILTER_T426314064_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberFilter
struct  MemberFilter_t426314064  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERFILTER_T426314064_H
#ifndef TYPEFILTER_T2356120900_H
#define TYPEFILTER_T2356120900_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeFilter
struct  TypeFilter_t2356120900  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEFILTER_T2356120900_H
#ifndef RESOLVEEVENTHANDLER_T2775508208_H
#define RESOLVEEVENTHANDLER_T2775508208_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ResolveEventHandler
struct  ResolveEventHandler_t2775508208  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLVEEVENTHANDLER_T2775508208_H
#ifndef CROSSCONTEXTDELEGATE_T387175271_H
#define CROSSCONTEXTDELEGATE_T387175271_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.CrossContextDelegate
struct  CrossContextDelegate_t387175271  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSCONTEXTDELEGATE_T387175271_H
#ifndef HEADERHANDLER_T2878040134_H
#define HEADERHANDLER_T2878040134_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.HeaderHandler
struct  HeaderHandler_t2878040134  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEADERHANDLER_T2878040134_H
#ifndef AUTORESETEVENT_T1333520283_H
#define AUTORESETEVENT_T1333520283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.AutoResetEvent
struct  AutoResetEvent_t1333520283  : public EventWaitHandle_t777845177
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTORESETEVENT_T1333520283_H
#ifndef MANUALRESETEVENT_T451242010_H
#define MANUALRESETEVENT_T451242010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ManualResetEvent
struct  ManualResetEvent_t451242010  : public EventWaitHandle_t777845177
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MANUALRESETEVENT_T451242010_H
#ifndef SENDORPOSTCALLBACK_T2750080073_H
#define SENDORPOSTCALLBACK_T2750080073_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SendOrPostCallback
struct  SendOrPostCallback_t2750080073  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDORPOSTCALLBACK_T2750080073_H
#ifndef THREADSTART_T1006689297_H
#define THREADSTART_T1006689297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadStart
struct  ThreadStart_t1006689297  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTART_T1006689297_H
#ifndef TIMERCALLBACK_T1438585625_H
#define TIMERCALLBACK_T1438585625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.TimerCallback
struct  TimerCallback_t1438585625  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMERCALLBACK_T1438585625_H
#ifndef WAITCALLBACK_T2448485498_H
#define WAITCALLBACK_T2448485498_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitCallback
struct  WaitCallback_t2448485498  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITCALLBACK_T2448485498_H
#ifndef WAITORTIMERCALLBACK_T1973723282_H
#define WAITORTIMERCALLBACK_T1973723282_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitOrTimerCallback
struct  WaitOrTimerCallback_t1973723282  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITORTIMERCALLBACK_T1973723282_H
#ifndef UNHANDLEDEXCEPTIONEVENTHANDLER_T3101989324_H
#define UNHANDLEDEXCEPTIONEVENTHANDLER_T3101989324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventHandler
struct  UnhandledExceptionEventHandler_t3101989324  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTHANDLER_T3101989324_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1000 = { sizeof (ASCIIEncoding_t3446586211), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1001 = { sizeof (Decoder_t2204182725), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1001[2] = 
{
	Decoder_t2204182725::get_offset_of_fallback_0(),
	Decoder_t2204182725::get_offset_of_fallback_buffer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1002 = { sizeof (DecoderExceptionFallback_t3981484394), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1003 = { sizeof (DecoderExceptionFallbackBuffer_t90938522), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1004 = { sizeof (DecoderFallback_t3123823036), -1, sizeof(DecoderFallback_t3123823036_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1004[3] = 
{
	DecoderFallback_t3123823036_StaticFields::get_offset_of_exception_fallback_0(),
	DecoderFallback_t3123823036_StaticFields::get_offset_of_replacement_fallback_1(),
	DecoderFallback_t3123823036_StaticFields::get_offset_of_standard_safe_fallback_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1005 = { sizeof (DecoderFallbackBuffer_t2402303981), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1006 = { sizeof (DecoderFallbackException_t1661362184), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1006[2] = 
{
	DecoderFallbackException_t1661362184::get_offset_of_bytes_unknown_13(),
	DecoderFallbackException_t1661362184::get_offset_of_index_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1007 = { sizeof (DecoderReplacementFallback_t1462101135), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1007[1] = 
{
	DecoderReplacementFallback_t1462101135::get_offset_of_replacement_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1008 = { sizeof (DecoderReplacementFallbackBuffer_t841144779), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1008[3] = 
{
	DecoderReplacementFallbackBuffer_t841144779::get_offset_of_fallback_assigned_0(),
	DecoderReplacementFallbackBuffer_t841144779::get_offset_of_current_1(),
	DecoderReplacementFallbackBuffer_t841144779::get_offset_of_replacement_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1009 = { sizeof (EncoderExceptionFallback_t1243849599), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1010 = { sizeof (EncoderExceptionFallbackBuffer_t3597232471), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1011 = { sizeof (EncoderFallback_t1188251036), -1, sizeof(EncoderFallback_t1188251036_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1011[3] = 
{
	EncoderFallback_t1188251036_StaticFields::get_offset_of_exception_fallback_0(),
	EncoderFallback_t1188251036_StaticFields::get_offset_of_replacement_fallback_1(),
	EncoderFallback_t1188251036_StaticFields::get_offset_of_standard_safe_fallback_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1012 = { sizeof (EncoderFallbackBuffer_t3523102303), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1013 = { sizeof (EncoderFallbackException_t2773771926), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1013[4] = 
{
	EncoderFallbackException_t2773771926::get_offset_of_char_unknown_13(),
	EncoderFallbackException_t2773771926::get_offset_of_char_unknown_high_14(),
	EncoderFallbackException_t2773771926::get_offset_of_char_unknown_low_15(),
	EncoderFallbackException_t2773771926::get_offset_of_index_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1014 = { sizeof (EncoderReplacementFallback_t1623206753), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1014[1] = 
{
	EncoderReplacementFallback_t1623206753::get_offset_of_replacement_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1015 = { sizeof (EncoderReplacementFallbackBuffer_t1863187162), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1015[3] = 
{
	EncoderReplacementFallbackBuffer_t1863187162::get_offset_of_replacement_0(),
	EncoderReplacementFallbackBuffer_t1863187162::get_offset_of_current_1(),
	EncoderReplacementFallbackBuffer_t1863187162::get_offset_of_fallback_assigned_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1016 = { sizeof (Encoding_t1523322056), -1, sizeof(Encoding_t1523322056_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1016[28] = 
{
	Encoding_t1523322056::get_offset_of_codePage_0(),
	Encoding_t1523322056::get_offset_of_windows_code_page_1(),
	Encoding_t1523322056::get_offset_of_is_readonly_2(),
	Encoding_t1523322056::get_offset_of_decoder_fallback_3(),
	Encoding_t1523322056::get_offset_of_encoder_fallback_4(),
	Encoding_t1523322056_StaticFields::get_offset_of_i18nAssembly_5(),
	Encoding_t1523322056_StaticFields::get_offset_of_i18nDisabled_6(),
	Encoding_t1523322056_StaticFields::get_offset_of_encodings_7(),
	Encoding_t1523322056::get_offset_of_body_name_8(),
	Encoding_t1523322056::get_offset_of_encoding_name_9(),
	Encoding_t1523322056::get_offset_of_header_name_10(),
	Encoding_t1523322056::get_offset_of_is_mail_news_display_11(),
	Encoding_t1523322056::get_offset_of_is_mail_news_save_12(),
	Encoding_t1523322056::get_offset_of_is_browser_save_13(),
	Encoding_t1523322056::get_offset_of_is_browser_display_14(),
	Encoding_t1523322056::get_offset_of_web_name_15(),
	Encoding_t1523322056_StaticFields::get_offset_of_asciiEncoding_16(),
	Encoding_t1523322056_StaticFields::get_offset_of_bigEndianEncoding_17(),
	Encoding_t1523322056_StaticFields::get_offset_of_defaultEncoding_18(),
	Encoding_t1523322056_StaticFields::get_offset_of_utf7Encoding_19(),
	Encoding_t1523322056_StaticFields::get_offset_of_utf8EncodingWithMarkers_20(),
	Encoding_t1523322056_StaticFields::get_offset_of_utf8EncodingWithoutMarkers_21(),
	Encoding_t1523322056_StaticFields::get_offset_of_unicodeEncoding_22(),
	Encoding_t1523322056_StaticFields::get_offset_of_isoLatin1Encoding_23(),
	Encoding_t1523322056_StaticFields::get_offset_of_utf8EncodingUnsafe_24(),
	Encoding_t1523322056_StaticFields::get_offset_of_utf32Encoding_25(),
	Encoding_t1523322056_StaticFields::get_offset_of_bigEndianUTF32Encoding_26(),
	Encoding_t1523322056_StaticFields::get_offset_of_lockobj_27(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1017 = { sizeof (ForwardingDecoder_t3503728819), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1017[1] = 
{
	ForwardingDecoder_t3503728819::get_offset_of_encoding_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1018 = { sizeof (Latin1Encoding_t950549005), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1019 = { sizeof (StringBuilder_t), sizeof(char*), 0, 0 };
extern const int32_t g_FieldOffsetTable1019[5] = 
{
	0,
	StringBuilder_t::get_offset_of__length_1(),
	StringBuilder_t::get_offset_of__str_2(),
	StringBuilder_t::get_offset_of__cached_str_3(),
	StringBuilder_t::get_offset_of__maxCapacity_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1020 = { sizeof (UnicodeEncoding_t1959134050), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1020[2] = 
{
	UnicodeEncoding_t1959134050::get_offset_of_bigEndian_28(),
	UnicodeEncoding_t1959134050::get_offset_of_byteOrderMark_29(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1021 = { sizeof (UnicodeDecoder_t872550992), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1021[2] = 
{
	UnicodeDecoder_t872550992::get_offset_of_bigEndian_2(),
	UnicodeDecoder_t872550992::get_offset_of_leftOverByte_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1022 = { sizeof (UTF7Encoding_t2644108479), -1, sizeof(UTF7Encoding_t2644108479_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1022[3] = 
{
	UTF7Encoding_t2644108479::get_offset_of_allowOptionals_28(),
	UTF7Encoding_t2644108479_StaticFields::get_offset_of_encodingRules_29(),
	UTF7Encoding_t2644108479_StaticFields::get_offset_of_base64Values_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1023 = { sizeof (UTF7Decoder_t2247208115), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1023[1] = 
{
	UTF7Decoder_t2247208115::get_offset_of_leftOver_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1024 = { sizeof (UTF8Encoding_t3956466879), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1024[1] = 
{
	UTF8Encoding_t3956466879::get_offset_of_emitIdentifier_28(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1025 = { sizeof (UTF8Decoder_t2159214862), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1025[2] = 
{
	UTF8Decoder_t2159214862::get_offset_of_leftOverBits_2(),
	UTF8Decoder_t2159214862::get_offset_of_leftOverCount_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1026 = { sizeof (UTF32Encoding_t312252005), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1026[2] = 
{
	UTF32Encoding_t312252005::get_offset_of_bigEndian_28(),
	UTF32Encoding_t312252005::get_offset_of_byteOrderMark_29(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1027 = { sizeof (UTF32Decoder_t635925672), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1027[3] = 
{
	UTF32Decoder_t635925672::get_offset_of_bigEndian_2(),
	UTF32Decoder_t635925672::get_offset_of_leftOverByte_3(),
	UTF32Decoder_t635925672::get_offset_of_leftOverLength_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1028 = { sizeof (AutoResetEvent_t1333520283), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1029 = { sizeof (CompressedStack_t1202932761), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1029[1] = 
{
	CompressedStack_t1202932761::get_offset_of__list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1030 = { sizeof (EventResetMode_t3817241503)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1030[3] = 
{
	EventResetMode_t3817241503::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1031 = { sizeof (EventWaitHandle_t777845177), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1032 = { sizeof (ExecutionContext_t1748372627), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1032[3] = 
{
	ExecutionContext_t1748372627::get_offset_of__sc_0(),
	ExecutionContext_t1748372627::get_offset_of__suppressFlow_1(),
	ExecutionContext_t1748372627::get_offset_of__capture_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1033 = { sizeof (Interlocked_t2273387594), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1034 = { sizeof (ManualResetEvent_t451242010), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1035 = { sizeof (Monitor_t2197244473), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1036 = { sizeof (Mutex_t3066672582), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1037 = { sizeof (NativeEventCalls_t570794723), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1038 = { sizeof (RegisteredWaitHandle_t1529538454), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1038[9] = 
{
	RegisteredWaitHandle_t1529538454::get_offset_of__waitObject_1(),
	RegisteredWaitHandle_t1529538454::get_offset_of__callback_2(),
	RegisteredWaitHandle_t1529538454::get_offset_of__timeout_3(),
	RegisteredWaitHandle_t1529538454::get_offset_of__state_4(),
	RegisteredWaitHandle_t1529538454::get_offset_of__executeOnlyOnce_5(),
	RegisteredWaitHandle_t1529538454::get_offset_of__finalEvent_6(),
	RegisteredWaitHandle_t1529538454::get_offset_of__cancelEvent_7(),
	RegisteredWaitHandle_t1529538454::get_offset_of__callsInProcess_8(),
	RegisteredWaitHandle_t1529538454::get_offset_of__unregistered_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1039 = { sizeof (SynchronizationContext_t2326897723), -1, 0, sizeof(SynchronizationContext_t2326897723_ThreadStaticFields) };
extern const int32_t g_FieldOffsetTable1039[1] = 
{
	SynchronizationContext_t2326897723_ThreadStaticFields::get_offset_of_currentContext_0() | THREAD_LOCAL_STATIC_MASK,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1040 = { sizeof (SynchronizationLockException_t841761767), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1041 = { sizeof (Thread_t2300836069), -1, sizeof(Thread_t2300836069_StaticFields), sizeof(Thread_t2300836069_ThreadStaticFields) };
extern const int32_t g_FieldOffsetTable1041[52] = 
{
	Thread_t2300836069::get_offset_of_lock_thread_id_0(),
	Thread_t2300836069::get_offset_of_system_thread_handle_1(),
	Thread_t2300836069::get_offset_of_cached_culture_info_2(),
	Thread_t2300836069::get_offset_of_unused0_3(),
	Thread_t2300836069::get_offset_of_threadpool_thread_4(),
	Thread_t2300836069::get_offset_of_name_5(),
	Thread_t2300836069::get_offset_of_name_len_6(),
	Thread_t2300836069::get_offset_of_state_7(),
	Thread_t2300836069::get_offset_of_abort_exc_8(),
	Thread_t2300836069::get_offset_of_abort_state_handle_9(),
	Thread_t2300836069::get_offset_of_thread_id_10(),
	Thread_t2300836069::get_offset_of_start_notify_11(),
	Thread_t2300836069::get_offset_of_stack_ptr_12(),
	Thread_t2300836069::get_offset_of_static_data_13(),
	Thread_t2300836069::get_offset_of_jit_data_14(),
	Thread_t2300836069::get_offset_of_lock_data_15(),
	Thread_t2300836069::get_offset_of_current_appcontext_16(),
	Thread_t2300836069::get_offset_of_stack_size_17(),
	Thread_t2300836069::get_offset_of_start_obj_18(),
	Thread_t2300836069::get_offset_of_appdomain_refs_19(),
	Thread_t2300836069::get_offset_of_interruption_requested_20(),
	Thread_t2300836069::get_offset_of_suspend_event_21(),
	Thread_t2300836069::get_offset_of_suspended_event_22(),
	Thread_t2300836069::get_offset_of_resume_event_23(),
	Thread_t2300836069::get_offset_of_synch_cs_24(),
	Thread_t2300836069::get_offset_of_serialized_culture_info_25(),
	Thread_t2300836069::get_offset_of_serialized_culture_info_len_26(),
	Thread_t2300836069::get_offset_of_serialized_ui_culture_info_27(),
	Thread_t2300836069::get_offset_of_serialized_ui_culture_info_len_28(),
	Thread_t2300836069::get_offset_of_thread_dump_requested_29(),
	Thread_t2300836069::get_offset_of_end_stack_30(),
	Thread_t2300836069::get_offset_of_thread_interrupt_requested_31(),
	Thread_t2300836069::get_offset_of_apartment_state_32(),
	Thread_t2300836069::get_offset_of_critical_region_level_33(),
	Thread_t2300836069::get_offset_of_small_id_34(),
	Thread_t2300836069::get_offset_of_manage_callback_35(),
	Thread_t2300836069::get_offset_of_pending_exception_36(),
	Thread_t2300836069::get_offset_of_ec_to_set_37(),
	Thread_t2300836069::get_offset_of_interrupt_on_stop_38(),
	Thread_t2300836069::get_offset_of_unused3_39(),
	Thread_t2300836069::get_offset_of_unused4_40(),
	Thread_t2300836069::get_offset_of_unused5_41(),
	Thread_t2300836069::get_offset_of_unused6_42(),
	Thread_t2300836069_ThreadStaticFields::get_offset_of_local_slots_43() | THREAD_LOCAL_STATIC_MASK,
	Thread_t2300836069_ThreadStaticFields::get_offset_of__ec_44() | THREAD_LOCAL_STATIC_MASK,
	Thread_t2300836069::get_offset_of_threadstart_45(),
	Thread_t2300836069::get_offset_of_managed_id_46(),
	Thread_t2300836069::get_offset_of__principal_47(),
	Thread_t2300836069_StaticFields::get_offset_of_datastorehash_48(),
	Thread_t2300836069_StaticFields::get_offset_of_datastore_lock_49(),
	Thread_t2300836069::get_offset_of_in_currentculture_50(),
	Thread_t2300836069_StaticFields::get_offset_of_culture_lock_51(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1042 = { sizeof (ThreadAbortException_t4074510458), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1043 = { sizeof (ThreadInterruptedException_t3240955163), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1044 = { sizeof (ThreadPool_t2177989550), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1045 = { sizeof (ThreadState_t2533302383)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1045[11] = 
{
	ThreadState_t2533302383::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1046 = { sizeof (ThreadStateException_t3003788475), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1047 = { sizeof (Timer_t716671026), -1, sizeof(Timer_t716671026_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1047[7] = 
{
	Timer_t716671026_StaticFields::get_offset_of_scheduler_1(),
	Timer_t716671026::get_offset_of_callback_2(),
	Timer_t716671026::get_offset_of_state_3(),
	Timer_t716671026::get_offset_of_due_time_ms_4(),
	Timer_t716671026::get_offset_of_period_ms_5(),
	Timer_t716671026::get_offset_of_next_run_6(),
	Timer_t716671026::get_offset_of_disposed_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1048 = { sizeof (TimerComparer_t2774265395), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1049 = { sizeof (Scheduler_t3215764947), -1, sizeof(Scheduler_t3215764947_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1049[2] = 
{
	Scheduler_t3215764947_StaticFields::get_offset_of_instance_0(),
	Scheduler_t3215764947::get_offset_of_list_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1050 = { sizeof (WaitHandle_t1743403487), -1, sizeof(WaitHandle_t1743403487_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1050[4] = 
{
	0,
	WaitHandle_t1743403487::get_offset_of_safe_wait_handle_2(),
	WaitHandle_t1743403487_StaticFields::get_offset_of_InvalidHandle_3(),
	WaitHandle_t1743403487::get_offset_of_disposed_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1051 = { sizeof (Link_t544317964)+ sizeof (RuntimeObject), sizeof(Link_t544317964 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1051[2] = 
{
	Link_t544317964::get_offset_of_HashCode_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Link_t544317964::get_offset_of_Next_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1052 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1052[16] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1053 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1053[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1054 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1054[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1055 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1055[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1056 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1056[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1057 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1057[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1058 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1058[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1059 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1060 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1061 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1062 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1063 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1063[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1064 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1064[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1065 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1066 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1067 = { sizeof (KeyNotFoundException_t2292407383), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1068 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1068[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1069 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1069[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1070 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1071 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1072 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1072[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1073 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1073[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1074 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1074[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1075 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1075[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1076 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1077 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1078 = { sizeof (PrimalityTest_t1539325943), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1079 = { sizeof (AppDomainInitializer_t682969308), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1080 = { sizeof (AssemblyLoadEventHandler_t107971893), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1081 = { sizeof (ConsoleCancelEventHandler_t3919940372), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1082 = { sizeof (EventHandler_t1348719766), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1083 = { sizeof (ResolveEventHandler_t2775508208), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1084 = { sizeof (UnhandledExceptionEventHandler_t3101989324), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1085 = { sizeof (MemberFilter_t426314064), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1086 = { sizeof (TypeFilter_t2356120900), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1087 = { sizeof (CrossContextDelegate_t387175271), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1088 = { sizeof (HeaderHandler_t2878040134), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1089 = { sizeof (SendOrPostCallback_t2750080073), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1090 = { sizeof (ThreadStart_t1006689297), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1091 = { sizeof (TimerCallback_t1438585625), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1092 = { sizeof (WaitCallback_t2448485498), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1093 = { sizeof (WaitOrTimerCallback_t1973723282), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1094 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1095 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1096 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1097 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1098 = { sizeof (U3CPrivateImplementationDetailsU3E_t3057255361), -1, sizeof(U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1098[59] = 
{
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D0_0(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D1_1(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D2_2(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D3_3(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D4_4(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D5_5(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D6_6(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D15_7(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D16_8(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D17_9(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D18_10(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D19_11(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D20_12(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D21_13(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D22_14(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D23_15(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D24_16(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D25_17(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D26_18(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D27_19(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D28_20(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D29_21(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D30_22(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D31_23(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D32_24(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D34_25(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D35_26(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D36_27(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D37_28(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D38_29(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D39_30(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D40_31(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D41_32(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D42_33(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D43_34(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D44_35(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D45_36(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D46_37(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D47_38(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D48_39(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D49_40(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D50_41(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D51_42(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D52_43(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D53_44(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D54_45(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D55_46(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D56_47(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D57_48(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D58_49(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D59_50(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D60_51(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D61_52(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D62_53(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D63_54(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D64_55(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D65_56(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D67_57(),
	U3CPrivateImplementationDetailsU3E_t3057255361_StaticFields::get_offset_of_U24U24fieldU2D68_58(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1099 = { sizeof (U24ArrayTypeU2452_t520724128)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2452_t520724128 ), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
