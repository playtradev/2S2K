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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// ExitGames.Client.Photon.ConnectionProtocol[]
struct ConnectionProtocolU5BU5D_t266427355;
// ExitGames.Client.Photon.EncryptorManaged.Decryptor
struct Decryptor_t2116099858;
// ExitGames.Client.Photon.EncryptorManaged.Encryptor
struct Encryptor_t200327285;
// ExitGames.Client.Photon.EventData
struct EventData_t3728223374;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t2581629031;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t423627973;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_t2956237011;
// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t1608153861;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t1302902347;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t4013908777;
// Photon.Chat.AuthenticationValues
struct AuthenticationValues_t563695058;
// Photon.Chat.ChannelCreationOptions
struct ChannelCreationOptions_t3966585929;
// Photon.Chat.ChannelWellKnownProperties
struct ChannelWellKnownProperties_t1685516945;
// Photon.Chat.ChatChannel
struct ChatChannel_t2318116909;
// Photon.Chat.ChatChannel[]
struct ChatChannelU5BU5D_t4223096960;
// Photon.Chat.ChatClient
struct ChatClient_t792052210;
// Photon.Chat.ChatEventCode
struct ChatEventCode_t2744303799;
// Photon.Chat.ChatOperationCode
struct ChatOperationCode_t2913553512;
// Photon.Chat.ChatParameterCode
struct ChatParameterCode_t3986735616;
// Photon.Chat.ChatPeer
struct ChatPeer_t3366739368;
// Photon.Chat.ErrorCode
struct ErrorCode_t424885541;
// Photon.Chat.IChatClientListener
struct IChatClientListener_t1343338770;
// Photon.Chat.ParameterCode
struct ParameterCode_t52387945;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t322220623;
// System.Collections.Generic.Dictionary`2/Transform`1<ExitGames.Client.Photon.ConnectionProtocol,System.Int32,System.Collections.DictionaryEntry>
struct Transform_1_t277438285;
// System.Collections.Generic.Dictionary`2/Transform`1<ExitGames.Client.Photon.ConnectionProtocol,System.Type,System.Collections.DictionaryEntry>
struct Transform_1_t3833072018;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t3835237792;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t4209139644;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Photon.Chat.ChatChannel,System.Collections.DictionaryEntry>
struct Transform_1_t3073508676;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_t1720840067;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>
struct Dictionary_2_t1850000478;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct Dictionary_2_t1253839074;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t1405253484;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>
struct Dictionary_2_t2103373208;
// System.Collections.Generic.HashSet`1/Link<System.String>[]
struct LinkU5BU5D_t3969674095;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t1645055638;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t412400163;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t827303578;
// System.Collections.Generic.IEqualityComparer`1<ExitGames.Client.Photon.ConnectionProtocol>
struct IEqualityComparer_1_t398968672;
// System.Collections.Generic.IEqualityComparer`1<System.Byte>
struct IEqualityComparer_1_t3241628394;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t892470886;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Diagnostics.Stopwatch
struct Stopwatch_t305734070;
// System.Func`1<System.Boolean>
struct Func_1_t3822001908;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Void
struct Void_t1185182177;

extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern RuntimeClass* AuthenticationValues_t563695058_il2cpp_TypeInfo_var;
extern RuntimeClass* BooleanU5BU5D_t2897418192_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern RuntimeClass* Byte_t1134296376_il2cpp_TypeInfo_var;
extern RuntimeClass* ChannelCreationOptions_t3966585929_il2cpp_TypeInfo_var;
extern RuntimeClass* ChatChannel_t2318116909_il2cpp_TypeInfo_var;
extern RuntimeClass* ChatPeer_t3366739368_il2cpp_TypeInfo_var;
extern RuntimeClass* ChatState_t1558912819_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t132545152_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t1405253484_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t1720840067_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t2103373208_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_1_t3822001908_il2cpp_TypeInfo_var;
extern RuntimeClass* HashSet_1_t412400163_il2cpp_TypeInfo_var;
extern RuntimeClass* IChatClientListener_t1343338770_il2cpp_TypeInfo_var;
extern RuntimeClass* IPhotonPeerListener_t2581629031_il2cpp_TypeInfo_var;
extern RuntimeClass* Int16_t2552820387_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32U5BU5D_t385246372_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t257213610_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3319525431_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* PeerStateValue_t1289417078_il2cpp_TypeInfo_var;
extern RuntimeClass* PhotonPeer_t1608153861_il2cpp_TypeInfo_var;
extern RuntimeClass* SendOptions_t967321410_il2cpp_TypeInfo_var;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* SupportClass_t2974952451_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Uri_t100236324_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1116053177;
extern String_t* _stringLiteral1127979213;
extern String_t* _stringLiteral1192492663;
extern String_t* _stringLiteral1318718822;
extern String_t* _stringLiteral1392571287;
extern String_t* _stringLiteral141983300;
extern String_t* _stringLiteral1544499546;
extern String_t* _stringLiteral1551728395;
extern String_t* _stringLiteral1568986561;
extern String_t* _stringLiteral1685286926;
extern String_t* _stringLiteral1708246641;
extern String_t* _stringLiteral1709059629;
extern String_t* _stringLiteral1730043946;
extern String_t* _stringLiteral1755514480;
extern String_t* _stringLiteral1865217350;
extern String_t* _stringLiteral2061077483;
extern String_t* _stringLiteral207309729;
extern String_t* _stringLiteral2284636894;
extern String_t* _stringLiteral2293337732;
extern String_t* _stringLiteral2335035243;
extern String_t* _stringLiteral243195407;
extern String_t* _stringLiteral24411111;
extern String_t* _stringLiteral2582846264;
extern String_t* _stringLiteral2631299121;
extern String_t* _stringLiteral2689392426;
extern String_t* _stringLiteral2710383045;
extern String_t* _stringLiteral2745384855;
extern String_t* _stringLiteral2771931429;
extern String_t* _stringLiteral2878504940;
extern String_t* _stringLiteral3105917120;
extern String_t* _stringLiteral3212874583;
extern String_t* _stringLiteral3276571959;
extern String_t* _stringLiteral3282781049;
extern String_t* _stringLiteral3310092652;
extern String_t* _stringLiteral3338127820;
extern String_t* _stringLiteral3365298896;
extern String_t* _stringLiteral3419055759;
extern String_t* _stringLiteral3452614522;
extern String_t* _stringLiteral3457529819;
extern String_t* _stringLiteral3486783854;
extern String_t* _stringLiteral3491294946;
extern String_t* _stringLiteral3564542839;
extern String_t* _stringLiteral3605301635;
extern String_t* _stringLiteral364667414;
extern String_t* _stringLiteral3673280093;
extern String_t* _stringLiteral3676277865;
extern String_t* _stringLiteral3680455401;
extern String_t* _stringLiteral3700822831;
extern String_t* _stringLiteral3709835863;
extern String_t* _stringLiteral3721724167;
extern String_t* _stringLiteral3787235530;
extern String_t* _stringLiteral3907755222;
extern String_t* _stringLiteral4158473593;
extern String_t* _stringLiteral4168669774;
extern String_t* _stringLiteral4248144891;
extern String_t* _stringLiteral4285124119;
extern String_t* _stringLiteral454993494;
extern String_t* _stringLiteral646317010;
extern String_t* _stringLiteral658479582;
extern String_t* _stringLiteral691157034;
extern String_t* _stringLiteral796070875;
extern String_t* _stringLiteral819702083;
extern String_t* _stringLiteral948577740;
extern String_t* _stringLiteral971260362;
extern const RuntimeMethod* ChatClient_SendOutgoingInBackground_m3440288828_RuntimeMethod_var;
extern const RuntimeMethod* ChatPeer_GetNameServerAddress_m3745425589_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m1883976453_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m3204002057_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m3596676840_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Clear_m3958962755_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Clear_m702791670_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m2278349286_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m2477779308_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m3977234279_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_m2545012917_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_m4038518975_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m1372101825_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m1868025697_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m3280774074_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m4209734297_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m222067789_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m4121386254_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m458397011_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m518943619_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m705142683_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Count_m3151171942_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m2866271333_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m390015880_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Keys_m1609554139_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m119570864_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m1279768534_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m1740559187_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m260444170_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1668845840_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m437256991_RuntimeMethod_var;
extern const RuntimeMethod* Func_1__ctor_m744463608_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1_Add_m2788916881_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1_Clear_m3342517819_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1_Contains_m1455301816_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1_Remove_m2792738130_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1__ctor_m3545045958_RuntimeMethod_var;
extern const RuntimeMethod* HashSet_1_get_Count_m2534887753_RuntimeMethod_var;
extern const RuntimeMethod* KeyCollection_GetEnumerator_m3395243744_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AddRange_m3709462088_RuntimeMethod_var;
extern const RuntimeMethod* List_1_AddRange_m3811851160_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1685793073_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3338814081_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m2233494194_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m3697625829_RuntimeMethod_var;
extern const RuntimeMethod* List_1_RemoveRange_m1512601996_RuntimeMethod_var;
extern const RuntimeMethod* List_1_RemoveRange_m962977191_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m2321703786_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m706204246_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2934127733_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1991961783_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m2287542950_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1__ctor_m1954627310_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_HasValue_m350283068_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_Value_m745926140_RuntimeMethod_var;
extern const uint32_t AuthenticationValues_AddAuthParameter_m2613830495_MetadataUsageId;
extern const uint32_t AuthenticationValues_SetAuthPostData_m2237037434_MetadataUsageId;
extern const uint32_t AuthenticationValues_ToString_m3100977850_MetadataUsageId;
extern const uint32_t ChannelCreationOptions__cctor_m227665183_MetadataUsageId;
extern const uint32_t ChatChannel_AddSubscribers_m4115425855_MetadataUsageId;
extern const uint32_t ChatChannel_Add_m1329789613_MetadataUsageId;
extern const uint32_t ChatChannel_Add_m3763665981_MetadataUsageId;
extern const uint32_t ChatChannel_ClearMessages_m1790333094_MetadataUsageId;
extern const uint32_t ChatChannel_ClearProperties_m937654232_MetadataUsageId;
extern const uint32_t ChatChannel_ReadProperties_m768176894_MetadataUsageId;
extern const uint32_t ChatChannel_ToStringMessages_m2079644288_MetadataUsageId;
extern const uint32_t ChatChannel_TruncateMessages_m2016570193_MetadataUsageId;
extern const uint32_t ChatChannel__ctor_m3846381778_MetadataUsageId;
extern const uint32_t ChatChannel_get_MessageCount_m1928338805_MetadataUsageId;
extern const uint32_t ChatClient_AddFriends_m2503086012_MetadataUsageId;
extern const uint32_t ChatClient_AuthenticateOnFrontEnd_m1407618497_MetadataUsageId;
extern const uint32_t ChatClient_CanChatInChannel_m1567266562_MetadataUsageId;
extern const uint32_t ChatClient_ConnectAndSetStatus_m1920248113_MetadataUsageId;
extern const uint32_t ChatClient_ConnectToFrontEnd_m3490933928_MetadataUsageId;
extern const uint32_t ChatClient_Connect_m3402282777_MetadataUsageId;
extern const uint32_t ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_DebugReturn_m2660559910_MetadataUsageId;
extern const uint32_t ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnOperationResponse_m3532846010_MetadataUsageId;
extern const uint32_t ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnStatusChanged_m1014132506_MetadataUsageId;
extern const uint32_t ChatClient_GetPrivateChannelNameByUser_m276549809_MetadataUsageId;
extern const uint32_t ChatClient_HandleAuthResponse_m3178849132_MetadataUsageId;
extern const uint32_t ChatClient_HandleChatMessagesEvent_m1377968632_MetadataUsageId;
extern const uint32_t ChatClient_HandlePrivateMessageEvent_m894082070_MetadataUsageId;
extern const uint32_t ChatClient_HandleStatusUpdate_m576156692_MetadataUsageId;
extern const uint32_t ChatClient_HandleSubscribeEvent_m3618184068_MetadataUsageId;
extern const uint32_t ChatClient_HandleUnsubscribeEvent_m2964998100_MetadataUsageId;
extern const uint32_t ChatClient_HandleUserSubscribedEvent_m3530604099_MetadataUsageId;
extern const uint32_t ChatClient_HandleUserUnsubscribedEvent_m677700852_MetadataUsageId;
extern const uint32_t ChatClient_RemoveFriends_m3846113334_MetadataUsageId;
extern const uint32_t ChatClient_SendChannelOperation_m35122363_MetadataUsageId;
extern const uint32_t ChatClient_SetOnlineStatus_m2397111474_MetadataUsageId;
extern const uint32_t ChatClient_Subscribe_m1596022505_MetadataUsageId;
extern const uint32_t ChatClient_Subscribe_m741354606_MetadataUsageId;
extern const uint32_t ChatClient_Subscribe_m781793523_MetadataUsageId;
extern const uint32_t ChatClient_TryGetChannel_m1509335266_MetadataUsageId;
extern const uint32_t ChatClient_TryGetChannel_m1863196673_MetadataUsageId;
extern const uint32_t ChatClient_Unsubscribe_m1754487189_MetadataUsageId;
extern const uint32_t ChatClient__ctor_m95262399_MetadataUsageId;
extern const uint32_t ChatClient_publishMessage_m2261581570_MetadataUsageId;
extern const uint32_t ChatClient_sendPrivateMessage_m446930096_MetadataUsageId;
extern const uint32_t ChatClient_set_TransportProtocol_m807312606_MetadataUsageId;
extern const uint32_t ChatClient_set_UserId_m2079859072_MetadataUsageId;
extern const uint32_t ChatPeer_AuthenticateOnNameServer_m4021717668_MetadataUsageId;
extern const uint32_t ChatPeer_ConfigUnitySockets_m2453888391_MetadataUsageId;
extern const uint32_t ChatPeer_Connect_m3069500609_MetadataUsageId;
extern const uint32_t ChatPeer_GetNameServerAddress_m3745425589_MetadataUsageId;
extern const uint32_t ChatPeer__cctor_m1488938936_MetadataUsageId;
extern const uint32_t ChatPeer__ctor_m3747547441_MetadataUsageId;

struct BooleanU5BU5D_t2897418192;
struct ByteU5BU5D_t4116647657;
struct Int32U5BU5D_t385246372;
struct ObjectU5BU5D_t2843939325;
struct StringU5BU5D_t1281789340;


#ifndef U3CMODULEU3E_T692745559_H
#define U3CMODULEU3E_T692745559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745559 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745559_H
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
#ifndef EVENTDATA_T3728223374_H
#define EVENTDATA_T3728223374_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.EventData
struct  EventData_t3728223374  : public RuntimeObject
{
public:
	// System.Byte ExitGames.Client.Photon.EventData::Code
	uint8_t ___Code_0;
	// System.Collections.Generic.Dictionary`2<System.Byte,System.Object> ExitGames.Client.Photon.EventData::Parameters
	Dictionary_2_t1405253484 * ___Parameters_1;
	// System.Int32 ExitGames.Client.Photon.EventData::sender
	int32_t ___sender_3;

public:
	inline static int32_t get_offset_of_Code_0() { return static_cast<int32_t>(offsetof(EventData_t3728223374, ___Code_0)); }
	inline uint8_t get_Code_0() const { return ___Code_0; }
	inline uint8_t* get_address_of_Code_0() { return &___Code_0; }
	inline void set_Code_0(uint8_t value)
	{
		___Code_0 = value;
	}

	inline static int32_t get_offset_of_Parameters_1() { return static_cast<int32_t>(offsetof(EventData_t3728223374, ___Parameters_1)); }
	inline Dictionary_2_t1405253484 * get_Parameters_1() const { return ___Parameters_1; }
	inline Dictionary_2_t1405253484 ** get_address_of_Parameters_1() { return &___Parameters_1; }
	inline void set_Parameters_1(Dictionary_2_t1405253484 * value)
	{
		___Parameters_1 = value;
		Il2CppCodeGenWriteBarrier((&___Parameters_1), value);
	}

	inline static int32_t get_offset_of_sender_3() { return static_cast<int32_t>(offsetof(EventData_t3728223374, ___sender_3)); }
	inline int32_t get_sender_3() const { return ___sender_3; }
	inline int32_t* get_address_of_sender_3() { return &___sender_3; }
	inline void set_sender_3(int32_t value)
	{
		___sender_3 = value;
	}
};

struct EventData_t3728223374_StaticFields
{
public:
	// System.Byte ExitGames.Client.Photon.EventData::SenderKey
	uint8_t ___SenderKey_2;
	// System.Byte ExitGames.Client.Photon.EventData::CustomDataKey
	uint8_t ___CustomDataKey_4;

public:
	inline static int32_t get_offset_of_SenderKey_2() { return static_cast<int32_t>(offsetof(EventData_t3728223374_StaticFields, ___SenderKey_2)); }
	inline uint8_t get_SenderKey_2() const { return ___SenderKey_2; }
	inline uint8_t* get_address_of_SenderKey_2() { return &___SenderKey_2; }
	inline void set_SenderKey_2(uint8_t value)
	{
		___SenderKey_2 = value;
	}

	inline static int32_t get_offset_of_CustomDataKey_4() { return static_cast<int32_t>(offsetof(EventData_t3728223374_StaticFields, ___CustomDataKey_4)); }
	inline uint8_t get_CustomDataKey_4() const { return ___CustomDataKey_4; }
	inline uint8_t* get_address_of_CustomDataKey_4() { return &___CustomDataKey_4; }
	inline void set_CustomDataKey_4(uint8_t value)
	{
		___CustomDataKey_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTDATA_T3728223374_H
#ifndef OPERATIONRESPONSE_T423627973_H
#define OPERATIONRESPONSE_T423627973_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.OperationResponse
struct  OperationResponse_t423627973  : public RuntimeObject
{
public:
	// System.Byte ExitGames.Client.Photon.OperationResponse::OperationCode
	uint8_t ___OperationCode_0;
	// System.Int16 ExitGames.Client.Photon.OperationResponse::ReturnCode
	int16_t ___ReturnCode_1;
	// System.String ExitGames.Client.Photon.OperationResponse::DebugMessage
	String_t* ___DebugMessage_2;
	// System.Collections.Generic.Dictionary`2<System.Byte,System.Object> ExitGames.Client.Photon.OperationResponse::Parameters
	Dictionary_2_t1405253484 * ___Parameters_3;

public:
	inline static int32_t get_offset_of_OperationCode_0() { return static_cast<int32_t>(offsetof(OperationResponse_t423627973, ___OperationCode_0)); }
	inline uint8_t get_OperationCode_0() const { return ___OperationCode_0; }
	inline uint8_t* get_address_of_OperationCode_0() { return &___OperationCode_0; }
	inline void set_OperationCode_0(uint8_t value)
	{
		___OperationCode_0 = value;
	}

	inline static int32_t get_offset_of_ReturnCode_1() { return static_cast<int32_t>(offsetof(OperationResponse_t423627973, ___ReturnCode_1)); }
	inline int16_t get_ReturnCode_1() const { return ___ReturnCode_1; }
	inline int16_t* get_address_of_ReturnCode_1() { return &___ReturnCode_1; }
	inline void set_ReturnCode_1(int16_t value)
	{
		___ReturnCode_1 = value;
	}

	inline static int32_t get_offset_of_DebugMessage_2() { return static_cast<int32_t>(offsetof(OperationResponse_t423627973, ___DebugMessage_2)); }
	inline String_t* get_DebugMessage_2() const { return ___DebugMessage_2; }
	inline String_t** get_address_of_DebugMessage_2() { return &___DebugMessage_2; }
	inline void set_DebugMessage_2(String_t* value)
	{
		___DebugMessage_2 = value;
		Il2CppCodeGenWriteBarrier((&___DebugMessage_2), value);
	}

	inline static int32_t get_offset_of_Parameters_3() { return static_cast<int32_t>(offsetof(OperationResponse_t423627973, ___Parameters_3)); }
	inline Dictionary_2_t1405253484 * get_Parameters_3() const { return ___Parameters_3; }
	inline Dictionary_2_t1405253484 ** get_address_of_Parameters_3() { return &___Parameters_3; }
	inline void set_Parameters_3(Dictionary_2_t1405253484 * value)
	{
		___Parameters_3 = value;
		Il2CppCodeGenWriteBarrier((&___Parameters_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPERATIONRESPONSE_T423627973_H
#ifndef CHANNELCREATIONOPTIONS_T3966585929_H
#define CHANNELCREATIONOPTIONS_T3966585929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.Chat.ChannelCreationOptions
struct  ChannelCreationOptions_t3966585929  : public RuntimeObject
{
public:
	// System.Boolean Photon.Chat.ChannelCreationOptions::<PublishSubscribers>k__BackingField
	bool ___U3CPublishSubscribersU3Ek__BackingField_1;
	// System.Int32 Photon.Chat.ChannelCreationOptions::<MaxSubscribers>k__BackingField
	int32_t ___U3CMaxSubscribersU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CPublishSubscribersU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ChannelCreationOptions_t3966585929, ___U3CPublishSubscribersU3Ek__BackingField_1)); }
	inline bool get_U3CPublishSubscribersU3Ek__BackingField_1() const { return ___U3CPublishSubscribersU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CPublishSubscribersU3Ek__BackingField_1() { return &___U3CPublishSubscribersU3Ek__BackingField_1; }
	inline void set_U3CPublishSubscribersU3Ek__BackingField_1(bool value)
	{
		___U3CPublishSubscribersU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CMaxSubscribersU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ChannelCreationOptions_t3966585929, ___U3CMaxSubscribersU3Ek__BackingField_2)); }
	inline int32_t get_U3CMaxSubscribersU3Ek__BackingField_2() const { return ___U3CMaxSubscribersU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CMaxSubscribersU3Ek__BackingField_2() { return &___U3CMaxSubscribersU3Ek__BackingField_2; }
	inline void set_U3CMaxSubscribersU3Ek__BackingField_2(int32_t value)
	{
		___U3CMaxSubscribersU3Ek__BackingField_2 = value;
	}
};

struct ChannelCreationOptions_t3966585929_StaticFields
{
public:
	// Photon.Chat.ChannelCreationOptions Photon.Chat.ChannelCreationOptions::Default
	ChannelCreationOptions_t3966585929 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(ChannelCreationOptions_t3966585929_StaticFields, ___Default_0)); }
	inline ChannelCreationOptions_t3966585929 * get_Default_0() const { return ___Default_0; }
	inline ChannelCreationOptions_t3966585929 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(ChannelCreationOptions_t3966585929 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELCREATIONOPTIONS_T3966585929_H
#ifndef CHANNELWELLKNOWNPROPERTIES_T1685516945_H
#define CHANNELWELLKNOWNPROPERTIES_T1685516945_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.Chat.ChannelWellKnownProperties
struct  ChannelWellKnownProperties_t1685516945  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELWELLKNOWNPROPERTIES_T1685516945_H
#ifndef CHATCHANNEL_T2318116909_H
#define CHATCHANNEL_T2318116909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.Chat.ChatChannel
struct  ChatChannel_t2318116909  : public RuntimeObject
{
public:
	// System.String Photon.Chat.ChatChannel::Name
	String_t* ___Name_0;
	// System.Collections.Generic.List`1<System.String> Photon.Chat.ChatChannel::Senders
	List_1_t3319525431 * ___Senders_1;
	// System.Collections.Generic.List`1<System.Object> Photon.Chat.ChatChannel::Messages
	List_1_t257213610 * ___Messages_2;
	// System.Int32 Photon.Chat.ChatChannel::MessageLimit
	int32_t ___MessageLimit_3;
	// System.Boolean Photon.Chat.ChatChannel::<IsPrivate>k__BackingField
	bool ___U3CIsPrivateU3Ek__BackingField_4;
	// System.Int32 Photon.Chat.ChatChannel::<LastMsgId>k__BackingField
	int32_t ___U3CLastMsgIdU3Ek__BackingField_5;
	// System.Collections.Generic.Dictionary`2<System.Object,System.Object> Photon.Chat.ChatChannel::properties
	Dictionary_2_t132545152 * ___properties_6;
	// System.Boolean Photon.Chat.ChatChannel::<PublishSubscribers>k__BackingField
	bool ___U3CPublishSubscribersU3Ek__BackingField_7;
	// System.Int32 Photon.Chat.ChatChannel::<MaxSubscribers>k__BackingField
	int32_t ___U3CMaxSubscribersU3Ek__BackingField_8;
	// System.Collections.Generic.HashSet`1<System.String> Photon.Chat.ChatChannel::Subscribers
	HashSet_1_t412400163 * ___Subscribers_9;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(ChatChannel_t2318116909, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}

	inline static int32_t get_offset_of_Senders_1() { return static_cast<int32_t>(offsetof(ChatChannel_t2318116909, ___Senders_1)); }
	inline List_1_t3319525431 * get_Senders_1() const { return ___Senders_1; }
	inline List_1_t3319525431 ** get_address_of_Senders_1() { return &___Senders_1; }
	inline void set_Senders_1(List_1_t3319525431 * value)
	{
		___Senders_1 = value;
		Il2CppCodeGenWriteBarrier((&___Senders_1), value);
	}

	inline static int32_t get_offset_of_Messages_2() { return static_cast<int32_t>(offsetof(ChatChannel_t2318116909, ___Messages_2)); }
	inline List_1_t257213610 * get_Messages_2() const { return ___Messages_2; }
	inline List_1_t257213610 ** get_address_of_Messages_2() { return &___Messages_2; }
	inline void set_Messages_2(List_1_t257213610 * value)
	{
		___Messages_2 = value;
		Il2CppCodeGenWriteBarrier((&___Messages_2), value);
	}

	inline static int32_t get_offset_of_MessageLimit_3() { return static_cast<int32_t>(offsetof(ChatChannel_t2318116909, ___MessageLimit_3)); }
	inline int32_t get_MessageLimit_3() const { return ___MessageLimit_3; }
	inline int32_t* get_address_of_MessageLimit_3() { return &___MessageLimit_3; }
	inline void set_MessageLimit_3(int32_t value)
	{
		___MessageLimit_3 = value;
	}

	inline static int32_t get_offset_of_U3CIsPrivateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ChatChannel_t2318116909, ___U3CIsPrivateU3Ek__BackingField_4)); }
	inline bool get_U3CIsPrivateU3Ek__BackingField_4() const { return ___U3CIsPrivateU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsPrivateU3Ek__BackingField_4() { return &___U3CIsPrivateU3Ek__BackingField_4; }
	inline void set_U3CIsPrivateU3Ek__BackingField_4(bool value)
	{
		___U3CIsPrivateU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CLastMsgIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ChatChannel_t2318116909, ___U3CLastMsgIdU3Ek__BackingField_5)); }
	inline int32_t get_U3CLastMsgIdU3Ek__BackingField_5() const { return ___U3CLastMsgIdU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CLastMsgIdU3Ek__BackingField_5() { return &___U3CLastMsgIdU3Ek__BackingField_5; }
	inline void set_U3CLastMsgIdU3Ek__BackingField_5(int32_t value)
	{
		___U3CLastMsgIdU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_properties_6() { return static_cast<int32_t>(offsetof(ChatChannel_t2318116909, ___properties_6)); }
	inline Dictionary_2_t132545152 * get_properties_6() const { return ___properties_6; }
	inline Dictionary_2_t132545152 ** get_address_of_properties_6() { return &___properties_6; }
	inline void set_properties_6(Dictionary_2_t132545152 * value)
	{
		___properties_6 = value;
		Il2CppCodeGenWriteBarrier((&___properties_6), value);
	}

	inline static int32_t get_offset_of_U3CPublishSubscribersU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ChatChannel_t2318116909, ___U3CPublishSubscribersU3Ek__BackingField_7)); }
	inline bool get_U3CPublishSubscribersU3Ek__BackingField_7() const { return ___U3CPublishSubscribersU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CPublishSubscribersU3Ek__BackingField_7() { return &___U3CPublishSubscribersU3Ek__BackingField_7; }
	inline void set_U3CPublishSubscribersU3Ek__BackingField_7(bool value)
	{
		___U3CPublishSubscribersU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CMaxSubscribersU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ChatChannel_t2318116909, ___U3CMaxSubscribersU3Ek__BackingField_8)); }
	inline int32_t get_U3CMaxSubscribersU3Ek__BackingField_8() const { return ___U3CMaxSubscribersU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CMaxSubscribersU3Ek__BackingField_8() { return &___U3CMaxSubscribersU3Ek__BackingField_8; }
	inline void set_U3CMaxSubscribersU3Ek__BackingField_8(int32_t value)
	{
		___U3CMaxSubscribersU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_Subscribers_9() { return static_cast<int32_t>(offsetof(ChatChannel_t2318116909, ___Subscribers_9)); }
	inline HashSet_1_t412400163 * get_Subscribers_9() const { return ___Subscribers_9; }
	inline HashSet_1_t412400163 ** get_address_of_Subscribers_9() { return &___Subscribers_9; }
	inline void set_Subscribers_9(HashSet_1_t412400163 * value)
	{
		___Subscribers_9 = value;
		Il2CppCodeGenWriteBarrier((&___Subscribers_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHATCHANNEL_T2318116909_H
#ifndef CHATEVENTCODE_T2744303799_H
#define CHATEVENTCODE_T2744303799_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.Chat.ChatEventCode
struct  ChatEventCode_t2744303799  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHATEVENTCODE_T2744303799_H
#ifndef CHATOPERATIONCODE_T2913553512_H
#define CHATOPERATIONCODE_T2913553512_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.Chat.ChatOperationCode
struct  ChatOperationCode_t2913553512  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHATOPERATIONCODE_T2913553512_H
#ifndef CHATPARAMETERCODE_T3986735616_H
#define CHATPARAMETERCODE_T3986735616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.Chat.ChatParameterCode
struct  ChatParameterCode_t3986735616  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHATPARAMETERCODE_T3986735616_H
#ifndef CHATUSERSTATUS_T4200752496_H
#define CHATUSERSTATUS_T4200752496_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.Chat.ChatUserStatus
struct  ChatUserStatus_t4200752496  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHATUSERSTATUS_T4200752496_H
#ifndef ERRORCODE_T424885541_H
#define ERRORCODE_T424885541_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.Chat.ErrorCode
struct  ErrorCode_t424885541  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERRORCODE_T424885541_H
#ifndef PARAMETERCODE_T52387945_H
#define PARAMETERCODE_T52387945_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.Chat.ParameterCode
struct  ParameterCode_t52387945  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERCODE_T52387945_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef KEYCOLLECTION_T322220623_H
#define KEYCOLLECTION_T322220623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct  KeyCollection_t322220623  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_t132545152 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t322220623, ___dictionary_0)); }
	inline Dictionary_2_t132545152 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t132545152 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t132545152 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCOLLECTION_T322220623_H
#ifndef DICTIONARY_2_T1720840067_H
#define DICTIONARY_2_T1720840067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct  Dictionary_2_t1720840067  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	ConnectionProtocolU5BU5D_t266427355* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	Int32U5BU5D_t385246372* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1720840067, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1720840067, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1720840067, ___keySlots_6)); }
	inline ConnectionProtocolU5BU5D_t266427355* get_keySlots_6() const { return ___keySlots_6; }
	inline ConnectionProtocolU5BU5D_t266427355** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(ConnectionProtocolU5BU5D_t266427355* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1720840067, ___valueSlots_7)); }
	inline Int32U5BU5D_t385246372* get_valueSlots_7() const { return ___valueSlots_7; }
	inline Int32U5BU5D_t385246372** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(Int32U5BU5D_t385246372* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1720840067, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1720840067, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1720840067, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1720840067, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1720840067, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1720840067, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1720840067, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1720840067_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t277438285 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1720840067_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t277438285 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t277438285 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t277438285 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1720840067_H
#ifndef DICTIONARY_2_T1253839074_H
#define DICTIONARY_2_T1253839074_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct  Dictionary_2_t1253839074  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	ConnectionProtocolU5BU5D_t266427355* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	TypeU5BU5D_t3940880105* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1253839074, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1253839074, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1253839074, ___keySlots_6)); }
	inline ConnectionProtocolU5BU5D_t266427355* get_keySlots_6() const { return ___keySlots_6; }
	inline ConnectionProtocolU5BU5D_t266427355** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(ConnectionProtocolU5BU5D_t266427355* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1253839074, ___valueSlots_7)); }
	inline TypeU5BU5D_t3940880105* get_valueSlots_7() const { return ___valueSlots_7; }
	inline TypeU5BU5D_t3940880105** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(TypeU5BU5D_t3940880105* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1253839074, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1253839074, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1253839074, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1253839074, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1253839074, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1253839074, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1253839074, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1253839074_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t3833072018 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1253839074_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t3833072018 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t3833072018 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t3833072018 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1253839074_H
#ifndef DICTIONARY_2_T1405253484_H
#define DICTIONARY_2_T1405253484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct  Dictionary_2_t1405253484  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	ByteU5BU5D_t4116647657* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ObjectU5BU5D_t2843939325* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1405253484, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1405253484, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1405253484, ___keySlots_6)); }
	inline ByteU5BU5D_t4116647657* get_keySlots_6() const { return ___keySlots_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(ByteU5BU5D_t4116647657* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1405253484, ___valueSlots_7)); }
	inline ObjectU5BU5D_t2843939325* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ObjectU5BU5D_t2843939325** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ObjectU5BU5D_t2843939325* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1405253484, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1405253484, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1405253484, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1405253484, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1405253484, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1405253484, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1405253484, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1405253484_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t3835237792 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1405253484_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t3835237792 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t3835237792 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t3835237792 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1405253484_H
#ifndef DICTIONARY_2_T132545152_H
#define DICTIONARY_2_T132545152_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct  Dictionary_2_t132545152  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	ObjectU5BU5D_t2843939325* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ObjectU5BU5D_t2843939325* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___keySlots_6)); }
	inline ObjectU5BU5D_t2843939325* get_keySlots_6() const { return ___keySlots_6; }
	inline ObjectU5BU5D_t2843939325** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(ObjectU5BU5D_t2843939325* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___valueSlots_7)); }
	inline ObjectU5BU5D_t2843939325* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ObjectU5BU5D_t2843939325** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ObjectU5BU5D_t2843939325* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t132545152_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t4209139644 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t132545152_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t4209139644 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t4209139644 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t4209139644 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T132545152_H
#ifndef DICTIONARY_2_T2103373208_H
#define DICTIONARY_2_T2103373208_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>
struct  Dictionary_2_t2103373208  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ChatChannelU5BU5D_t4223096960* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2103373208, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2103373208, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2103373208, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2103373208, ___valueSlots_7)); }
	inline ChatChannelU5BU5D_t4223096960* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ChatChannelU5BU5D_t4223096960** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ChatChannelU5BU5D_t4223096960* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2103373208, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2103373208, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2103373208, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2103373208, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2103373208, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2103373208, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2103373208, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2103373208_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t3073508676 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2103373208_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t3073508676 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t3073508676 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t3073508676 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2103373208_H
#ifndef HASHSET_1_T412400163_H
#define HASHSET_1_T412400163_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.HashSet`1<System.String>
struct  HashSet_1_t412400163  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1::links
	LinkU5BU5D_t3969674095* ___links_5;
	// T[] System.Collections.Generic.HashSet`1::slots
	StringU5BU5D_t1281789340* ___slots_6;
	// System.Int32 System.Collections.Generic.HashSet`1::touched
	int32_t ___touched_7;
	// System.Int32 System.Collections.Generic.HashSet`1::empty_slot
	int32_t ___empty_slot_8;
	// System.Int32 System.Collections.Generic.HashSet`1::count
	int32_t ___count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::threshold
	int32_t ___threshold_10;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::comparer
	RuntimeObject* ___comparer_11;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::si
	SerializationInfo_t950877179 * ___si_12;
	// System.Int32 System.Collections.Generic.HashSet`1::generation
	int32_t ___generation_13;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(HashSet_1_t412400163, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_links_5() { return static_cast<int32_t>(offsetof(HashSet_1_t412400163, ___links_5)); }
	inline LinkU5BU5D_t3969674095* get_links_5() const { return ___links_5; }
	inline LinkU5BU5D_t3969674095** get_address_of_links_5() { return &___links_5; }
	inline void set_links_5(LinkU5BU5D_t3969674095* value)
	{
		___links_5 = value;
		Il2CppCodeGenWriteBarrier((&___links_5), value);
	}

	inline static int32_t get_offset_of_slots_6() { return static_cast<int32_t>(offsetof(HashSet_1_t412400163, ___slots_6)); }
	inline StringU5BU5D_t1281789340* get_slots_6() const { return ___slots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_slots_6() { return &___slots_6; }
	inline void set_slots_6(StringU5BU5D_t1281789340* value)
	{
		___slots_6 = value;
		Il2CppCodeGenWriteBarrier((&___slots_6), value);
	}

	inline static int32_t get_offset_of_touched_7() { return static_cast<int32_t>(offsetof(HashSet_1_t412400163, ___touched_7)); }
	inline int32_t get_touched_7() const { return ___touched_7; }
	inline int32_t* get_address_of_touched_7() { return &___touched_7; }
	inline void set_touched_7(int32_t value)
	{
		___touched_7 = value;
	}

	inline static int32_t get_offset_of_empty_slot_8() { return static_cast<int32_t>(offsetof(HashSet_1_t412400163, ___empty_slot_8)); }
	inline int32_t get_empty_slot_8() const { return ___empty_slot_8; }
	inline int32_t* get_address_of_empty_slot_8() { return &___empty_slot_8; }
	inline void set_empty_slot_8(int32_t value)
	{
		___empty_slot_8 = value;
	}

	inline static int32_t get_offset_of_count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t412400163, ___count_9)); }
	inline int32_t get_count_9() const { return ___count_9; }
	inline int32_t* get_address_of_count_9() { return &___count_9; }
	inline void set_count_9(int32_t value)
	{
		___count_9 = value;
	}

	inline static int32_t get_offset_of_threshold_10() { return static_cast<int32_t>(offsetof(HashSet_1_t412400163, ___threshold_10)); }
	inline int32_t get_threshold_10() const { return ___threshold_10; }
	inline int32_t* get_address_of_threshold_10() { return &___threshold_10; }
	inline void set_threshold_10(int32_t value)
	{
		___threshold_10 = value;
	}

	inline static int32_t get_offset_of_comparer_11() { return static_cast<int32_t>(offsetof(HashSet_1_t412400163, ___comparer_11)); }
	inline RuntimeObject* get_comparer_11() const { return ___comparer_11; }
	inline RuntimeObject** get_address_of_comparer_11() { return &___comparer_11; }
	inline void set_comparer_11(RuntimeObject* value)
	{
		___comparer_11 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_11), value);
	}

	inline static int32_t get_offset_of_si_12() { return static_cast<int32_t>(offsetof(HashSet_1_t412400163, ___si_12)); }
	inline SerializationInfo_t950877179 * get_si_12() const { return ___si_12; }
	inline SerializationInfo_t950877179 ** get_address_of_si_12() { return &___si_12; }
	inline void set_si_12(SerializationInfo_t950877179 * value)
	{
		___si_12 = value;
		Il2CppCodeGenWriteBarrier((&___si_12), value);
	}

	inline static int32_t get_offset_of_generation_13() { return static_cast<int32_t>(offsetof(HashSet_1_t412400163, ___generation_13)); }
	inline int32_t get_generation_13() const { return ___generation_13; }
	inline int32_t* get_address_of_generation_13() { return &___generation_13; }
	inline void set_generation_13(int32_t value)
	{
		___generation_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHSET_1_T412400163_H
#ifndef LIST_1_T257213610_H
#define LIST_1_T257213610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Object>
struct  List_1_t257213610  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t2843939325* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____items_1)); }
	inline ObjectU5BU5D_t2843939325* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t2843939325** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t2843939325* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t257213610, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t257213610_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	ObjectU5BU5D_t2843939325* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t257213610_StaticFields, ___EmptyArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T257213610_H
#ifndef LIST_1_T3319525431_H
#define LIST_1_T3319525431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.String>
struct  List_1_t3319525431  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t1281789340* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____items_1)); }
	inline StringU5BU5D_t1281789340* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t1281789340** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t1281789340* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3319525431_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	StringU5BU5D_t1281789340* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3319525431_StaticFields, ___EmptyArray_4)); }
	inline StringU5BU5D_t1281789340* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline StringU5BU5D_t1281789340** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(StringU5BU5D_t1281789340* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3319525431_H
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
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
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
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef KEYVALUEPAIR_2_T2530217319_H
#define KEYVALUEPAIR_2_T2530217319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t2530217319 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2530217319_H
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
#ifndef INT16_T2552820387_H
#define INT16_T2552820387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t2552820387 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int16_t2552820387, ___m_value_2)); }
	inline int16_t get_m_value_2() const { return ___m_value_2; }
	inline int16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T2552820387_H
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
#ifndef NULLABLE_1_T378540539_H
#define NULLABLE_1_T378540539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Int32>
struct  Nullable_1_t378540539 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t378540539, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t378540539, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T378540539_H
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
#ifndef CONNECTIONPROTOCOL_T2586603950_H
#define CONNECTIONPROTOCOL_T2586603950_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.ConnectionProtocol
struct  ConnectionProtocol_t2586603950 
{
public:
	// System.Byte ExitGames.Client.Photon.ConnectionProtocol::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConnectionProtocol_t2586603950, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONPROTOCOL_T2586603950_H
#ifndef DEBUGLEVEL_T3671880145_H
#define DEBUGLEVEL_T3671880145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.DebugLevel
struct  DebugLevel_t3671880145 
{
public:
	// System.Byte ExitGames.Client.Photon.DebugLevel::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DebugLevel_t3671880145, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGLEVEL_T3671880145_H
#ifndef DELIVERYMODE_T90936453_H
#define DELIVERYMODE_T90936453_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.DeliveryMode
struct  DeliveryMode_t90936453 
{
public:
	// System.Int32 ExitGames.Client.Photon.DeliveryMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DeliveryMode_t90936453, ___value___1)); }
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
#endif // DELIVERYMODE_T90936453_H
#ifndef PEERSTATEVALUE_T1289417078_H
#define PEERSTATEVALUE_T1289417078_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.PeerStateValue
struct  PeerStateValue_t1289417078 
{
public:
	// System.Byte ExitGames.Client.Photon.PeerStateValue::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PeerStateValue_t1289417078, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PEERSTATEVALUE_T1289417078_H
#ifndef SERIALIZATIONPROTOCOL_T4091957412_H
#define SERIALIZATIONPROTOCOL_T4091957412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.SerializationProtocol
struct  SerializationProtocol_t4091957412 
{
public:
	// System.Int32 ExitGames.Client.Photon.SerializationProtocol::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SerializationProtocol_t4091957412, ___value___1)); }
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
#endif // SERIALIZATIONPROTOCOL_T4091957412_H
#ifndef STATUSCODE_T823606708_H
#define STATUSCODE_T823606708_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.StatusCode
struct  StatusCode_t823606708 
{
public:
	// System.Int32 ExitGames.Client.Photon.StatusCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StatusCode_t823606708, ___value___1)); }
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
#endif // STATUSCODE_T823606708_H
#ifndef CHATDISCONNECTCAUSE_T2280129641_H
#define CHATDISCONNECTCAUSE_T2280129641_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.Chat.ChatDisconnectCause
struct  ChatDisconnectCause_t2280129641 
{
public:
	// System.Int32 Photon.Chat.ChatDisconnectCause::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ChatDisconnectCause_t2280129641, ___value___1)); }
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
#endif // CHATDISCONNECTCAUSE_T2280129641_H
#ifndef CHATSTATE_T1558912819_H
#define CHATSTATE_T1558912819_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.Chat.ChatState
struct  ChatState_t1558912819 
{
public:
	// System.Int32 Photon.Chat.ChatState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ChatState_t1558912819, ___value___1)); }
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
#endif // CHATSTATE_T1558912819_H
#ifndef CUSTOMAUTHENTICATIONTYPE_T2653033121_H
#define CUSTOMAUTHENTICATIONTYPE_T2653033121_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.Chat.CustomAuthenticationType
struct  CustomAuthenticationType_t2653033121 
{
public:
	// System.Byte Photon.Chat.CustomAuthenticationType::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CustomAuthenticationType_t2653033121, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMAUTHENTICATIONTYPE_T2653033121_H
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
#ifndef ENUMERATOR_T2086727927_H
#define ENUMERATOR_T2086727927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct  Enumerator_t2086727927 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t132545152 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t2530217319  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___dictionary_0)); }
	inline Dictionary_2_t132545152 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t132545152 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t132545152 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___current_3)); }
	inline KeyValuePair_2_t2530217319  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t2530217319 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t2530217319  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2086727927_H
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
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
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
#endif // BINDINGFLAGS_T2721792723_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef PHOTONPEER_T1608153861_H
#define PHOTONPEER_T1608153861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.PhotonPeer
struct  PhotonPeer_t1608153861  : public RuntimeObject
{
public:
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<CommandBufferSize>k__BackingField
	int32_t ___U3CCommandBufferSizeU3Ek__BackingField_0;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<LimitOfUnreliableCommands>k__BackingField
	int32_t ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::WarningSize
	int32_t ___WarningSize_2;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ClientSdkId
	uint8_t ___ClientSdkId_6;
	// System.String ExitGames.Client.Photon.PhotonPeer::clientVersion
	String_t* ___clientVersion_7;
	// ExitGames.Client.Photon.SerializationProtocol ExitGames.Client.Photon.PhotonPeer::<SerializationProtocolType>k__BackingField
	int32_t ___U3CSerializationProtocolTypeU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type> ExitGames.Client.Photon.PhotonPeer::SocketImplementationConfig
	Dictionary_2_t1253839074 * ___SocketImplementationConfig_9;
	// System.Type ExitGames.Client.Photon.PhotonPeer::<SocketImplementation>k__BackingField
	Type_t * ___U3CSocketImplementationU3Ek__BackingField_10;
	// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PhotonPeer::DebugOut
	uint8_t ___DebugOut_11;
	// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PhotonPeer::<Listener>k__BackingField
	RuntimeObject* ___U3CListenerU3Ek__BackingField_12;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<EnableServerTracing>k__BackingField
	bool ___U3CEnableServerTracingU3Ek__BackingField_13;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::quickResendAttempts
	uint8_t ___quickResendAttempts_14;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::RhttpMinConnections
	int32_t ___RhttpMinConnections_15;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::RhttpMaxConnections
	int32_t ___RhttpMaxConnections_16;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ChannelCount
	uint8_t ___ChannelCount_17;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::crcEnabled
	bool ___crcEnabled_18;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::SentCountAllowance
	int32_t ___SentCountAllowance_19;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::TimePingInterval
	int32_t ___TimePingInterval_20;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::DisconnectTimeout
	int32_t ___DisconnectTimeout_21;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::<TransportProtocol>k__BackingField
	uint8_t ___U3CTransportProtocolU3Ek__BackingField_22;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::mtu
	int32_t ___mtu_24;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<IsSendingOnlyAcks>k__BackingField
	bool ___U3CIsSendingOnlyAcksU3Ek__BackingField_25;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::RandomizeSequenceNumbers
	bool ___RandomizeSequenceNumbers_27;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::RandomizedSequenceNumbers
	ByteU5BU5D_t4116647657* ___RandomizedSequenceNumbers_28;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsIncoming>k__BackingField
	TrafficStats_t1302902347 * ___U3CTrafficStatsIncomingU3Ek__BackingField_29;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsOutgoing>k__BackingField
	TrafficStats_t1302902347 * ___U3CTrafficStatsOutgoingU3Ek__BackingField_30;
	// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PhotonPeer::<TrafficStatsGameLevel>k__BackingField
	TrafficStatsGameLevel_t4013908777 * ___U3CTrafficStatsGameLevelU3Ek__BackingField_31;
	// System.Diagnostics.Stopwatch ExitGames.Client.Photon.PhotonPeer::trafficStatsStopwatch
	Stopwatch_t305734070 * ___trafficStatsStopwatch_32;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::trafficStatsEnabled
	bool ___trafficStatsEnabled_33;
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.PhotonPeer::peerBase
	PeerBase_t2956237011 * ___peerBase_34;
	// System.Object ExitGames.Client.Photon.PhotonPeer::SendOutgoingLockObject
	RuntimeObject * ___SendOutgoingLockObject_35;
	// System.Object ExitGames.Client.Photon.PhotonPeer::DispatchLockObject
	RuntimeObject * ___DispatchLockObject_36;
	// System.Object ExitGames.Client.Photon.PhotonPeer::EnqueueLock
	RuntimeObject * ___EnqueueLock_37;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::PayloadEncryptionSecret
	ByteU5BU5D_t4116647657* ___PayloadEncryptionSecret_38;
	// ExitGames.Client.Photon.EncryptorManaged.Encryptor ExitGames.Client.Photon.PhotonPeer::DgramEncryptor
	Encryptor_t200327285 * ___DgramEncryptor_39;
	// ExitGames.Client.Photon.EncryptorManaged.Decryptor ExitGames.Client.Photon.PhotonPeer::DgramDecryptor
	Decryptor_t2116099858 * ___DgramDecryptor_40;

public:
	inline static int32_t get_offset_of_U3CCommandBufferSizeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___U3CCommandBufferSizeU3Ek__BackingField_0)); }
	inline int32_t get_U3CCommandBufferSizeU3Ek__BackingField_0() const { return ___U3CCommandBufferSizeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CCommandBufferSizeU3Ek__BackingField_0() { return &___U3CCommandBufferSizeU3Ek__BackingField_0; }
	inline void set_U3CCommandBufferSizeU3Ek__BackingField_0(int32_t value)
	{
		___U3CCommandBufferSizeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1)); }
	inline int32_t get_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() const { return ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() { return &___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1; }
	inline void set_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1(int32_t value)
	{
		___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_WarningSize_2() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___WarningSize_2)); }
	inline int32_t get_WarningSize_2() const { return ___WarningSize_2; }
	inline int32_t* get_address_of_WarningSize_2() { return &___WarningSize_2; }
	inline void set_WarningSize_2(int32_t value)
	{
		___WarningSize_2 = value;
	}

	inline static int32_t get_offset_of_ClientSdkId_6() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___ClientSdkId_6)); }
	inline uint8_t get_ClientSdkId_6() const { return ___ClientSdkId_6; }
	inline uint8_t* get_address_of_ClientSdkId_6() { return &___ClientSdkId_6; }
	inline void set_ClientSdkId_6(uint8_t value)
	{
		___ClientSdkId_6 = value;
	}

	inline static int32_t get_offset_of_clientVersion_7() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___clientVersion_7)); }
	inline String_t* get_clientVersion_7() const { return ___clientVersion_7; }
	inline String_t** get_address_of_clientVersion_7() { return &___clientVersion_7; }
	inline void set_clientVersion_7(String_t* value)
	{
		___clientVersion_7 = value;
		Il2CppCodeGenWriteBarrier((&___clientVersion_7), value);
	}

	inline static int32_t get_offset_of_U3CSerializationProtocolTypeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___U3CSerializationProtocolTypeU3Ek__BackingField_8)); }
	inline int32_t get_U3CSerializationProtocolTypeU3Ek__BackingField_8() const { return ___U3CSerializationProtocolTypeU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CSerializationProtocolTypeU3Ek__BackingField_8() { return &___U3CSerializationProtocolTypeU3Ek__BackingField_8; }
	inline void set_U3CSerializationProtocolTypeU3Ek__BackingField_8(int32_t value)
	{
		___U3CSerializationProtocolTypeU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_SocketImplementationConfig_9() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___SocketImplementationConfig_9)); }
	inline Dictionary_2_t1253839074 * get_SocketImplementationConfig_9() const { return ___SocketImplementationConfig_9; }
	inline Dictionary_2_t1253839074 ** get_address_of_SocketImplementationConfig_9() { return &___SocketImplementationConfig_9; }
	inline void set_SocketImplementationConfig_9(Dictionary_2_t1253839074 * value)
	{
		___SocketImplementationConfig_9 = value;
		Il2CppCodeGenWriteBarrier((&___SocketImplementationConfig_9), value);
	}

	inline static int32_t get_offset_of_U3CSocketImplementationU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___U3CSocketImplementationU3Ek__BackingField_10)); }
	inline Type_t * get_U3CSocketImplementationU3Ek__BackingField_10() const { return ___U3CSocketImplementationU3Ek__BackingField_10; }
	inline Type_t ** get_address_of_U3CSocketImplementationU3Ek__BackingField_10() { return &___U3CSocketImplementationU3Ek__BackingField_10; }
	inline void set_U3CSocketImplementationU3Ek__BackingField_10(Type_t * value)
	{
		___U3CSocketImplementationU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSocketImplementationU3Ek__BackingField_10), value);
	}

	inline static int32_t get_offset_of_DebugOut_11() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___DebugOut_11)); }
	inline uint8_t get_DebugOut_11() const { return ___DebugOut_11; }
	inline uint8_t* get_address_of_DebugOut_11() { return &___DebugOut_11; }
	inline void set_DebugOut_11(uint8_t value)
	{
		___DebugOut_11 = value;
	}

	inline static int32_t get_offset_of_U3CListenerU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___U3CListenerU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CListenerU3Ek__BackingField_12() const { return ___U3CListenerU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CListenerU3Ek__BackingField_12() { return &___U3CListenerU3Ek__BackingField_12; }
	inline void set_U3CListenerU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CListenerU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CListenerU3Ek__BackingField_12), value);
	}

	inline static int32_t get_offset_of_U3CEnableServerTracingU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___U3CEnableServerTracingU3Ek__BackingField_13)); }
	inline bool get_U3CEnableServerTracingU3Ek__BackingField_13() const { return ___U3CEnableServerTracingU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CEnableServerTracingU3Ek__BackingField_13() { return &___U3CEnableServerTracingU3Ek__BackingField_13; }
	inline void set_U3CEnableServerTracingU3Ek__BackingField_13(bool value)
	{
		___U3CEnableServerTracingU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_quickResendAttempts_14() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___quickResendAttempts_14)); }
	inline uint8_t get_quickResendAttempts_14() const { return ___quickResendAttempts_14; }
	inline uint8_t* get_address_of_quickResendAttempts_14() { return &___quickResendAttempts_14; }
	inline void set_quickResendAttempts_14(uint8_t value)
	{
		___quickResendAttempts_14 = value;
	}

	inline static int32_t get_offset_of_RhttpMinConnections_15() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___RhttpMinConnections_15)); }
	inline int32_t get_RhttpMinConnections_15() const { return ___RhttpMinConnections_15; }
	inline int32_t* get_address_of_RhttpMinConnections_15() { return &___RhttpMinConnections_15; }
	inline void set_RhttpMinConnections_15(int32_t value)
	{
		___RhttpMinConnections_15 = value;
	}

	inline static int32_t get_offset_of_RhttpMaxConnections_16() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___RhttpMaxConnections_16)); }
	inline int32_t get_RhttpMaxConnections_16() const { return ___RhttpMaxConnections_16; }
	inline int32_t* get_address_of_RhttpMaxConnections_16() { return &___RhttpMaxConnections_16; }
	inline void set_RhttpMaxConnections_16(int32_t value)
	{
		___RhttpMaxConnections_16 = value;
	}

	inline static int32_t get_offset_of_ChannelCount_17() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___ChannelCount_17)); }
	inline uint8_t get_ChannelCount_17() const { return ___ChannelCount_17; }
	inline uint8_t* get_address_of_ChannelCount_17() { return &___ChannelCount_17; }
	inline void set_ChannelCount_17(uint8_t value)
	{
		___ChannelCount_17 = value;
	}

	inline static int32_t get_offset_of_crcEnabled_18() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___crcEnabled_18)); }
	inline bool get_crcEnabled_18() const { return ___crcEnabled_18; }
	inline bool* get_address_of_crcEnabled_18() { return &___crcEnabled_18; }
	inline void set_crcEnabled_18(bool value)
	{
		___crcEnabled_18 = value;
	}

	inline static int32_t get_offset_of_SentCountAllowance_19() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___SentCountAllowance_19)); }
	inline int32_t get_SentCountAllowance_19() const { return ___SentCountAllowance_19; }
	inline int32_t* get_address_of_SentCountAllowance_19() { return &___SentCountAllowance_19; }
	inline void set_SentCountAllowance_19(int32_t value)
	{
		___SentCountAllowance_19 = value;
	}

	inline static int32_t get_offset_of_TimePingInterval_20() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___TimePingInterval_20)); }
	inline int32_t get_TimePingInterval_20() const { return ___TimePingInterval_20; }
	inline int32_t* get_address_of_TimePingInterval_20() { return &___TimePingInterval_20; }
	inline void set_TimePingInterval_20(int32_t value)
	{
		___TimePingInterval_20 = value;
	}

	inline static int32_t get_offset_of_DisconnectTimeout_21() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___DisconnectTimeout_21)); }
	inline int32_t get_DisconnectTimeout_21() const { return ___DisconnectTimeout_21; }
	inline int32_t* get_address_of_DisconnectTimeout_21() { return &___DisconnectTimeout_21; }
	inline void set_DisconnectTimeout_21(int32_t value)
	{
		___DisconnectTimeout_21 = value;
	}

	inline static int32_t get_offset_of_U3CTransportProtocolU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___U3CTransportProtocolU3Ek__BackingField_22)); }
	inline uint8_t get_U3CTransportProtocolU3Ek__BackingField_22() const { return ___U3CTransportProtocolU3Ek__BackingField_22; }
	inline uint8_t* get_address_of_U3CTransportProtocolU3Ek__BackingField_22() { return &___U3CTransportProtocolU3Ek__BackingField_22; }
	inline void set_U3CTransportProtocolU3Ek__BackingField_22(uint8_t value)
	{
		___U3CTransportProtocolU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_mtu_24() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___mtu_24)); }
	inline int32_t get_mtu_24() const { return ___mtu_24; }
	inline int32_t* get_address_of_mtu_24() { return &___mtu_24; }
	inline void set_mtu_24(int32_t value)
	{
		___mtu_24 = value;
	}

	inline static int32_t get_offset_of_U3CIsSendingOnlyAcksU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___U3CIsSendingOnlyAcksU3Ek__BackingField_25)); }
	inline bool get_U3CIsSendingOnlyAcksU3Ek__BackingField_25() const { return ___U3CIsSendingOnlyAcksU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CIsSendingOnlyAcksU3Ek__BackingField_25() { return &___U3CIsSendingOnlyAcksU3Ek__BackingField_25; }
	inline void set_U3CIsSendingOnlyAcksU3Ek__BackingField_25(bool value)
	{
		___U3CIsSendingOnlyAcksU3Ek__BackingField_25 = value;
	}

	inline static int32_t get_offset_of_RandomizeSequenceNumbers_27() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___RandomizeSequenceNumbers_27)); }
	inline bool get_RandomizeSequenceNumbers_27() const { return ___RandomizeSequenceNumbers_27; }
	inline bool* get_address_of_RandomizeSequenceNumbers_27() { return &___RandomizeSequenceNumbers_27; }
	inline void set_RandomizeSequenceNumbers_27(bool value)
	{
		___RandomizeSequenceNumbers_27 = value;
	}

	inline static int32_t get_offset_of_RandomizedSequenceNumbers_28() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___RandomizedSequenceNumbers_28)); }
	inline ByteU5BU5D_t4116647657* get_RandomizedSequenceNumbers_28() const { return ___RandomizedSequenceNumbers_28; }
	inline ByteU5BU5D_t4116647657** get_address_of_RandomizedSequenceNumbers_28() { return &___RandomizedSequenceNumbers_28; }
	inline void set_RandomizedSequenceNumbers_28(ByteU5BU5D_t4116647657* value)
	{
		___RandomizedSequenceNumbers_28 = value;
		Il2CppCodeGenWriteBarrier((&___RandomizedSequenceNumbers_28), value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsIncomingU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___U3CTrafficStatsIncomingU3Ek__BackingField_29)); }
	inline TrafficStats_t1302902347 * get_U3CTrafficStatsIncomingU3Ek__BackingField_29() const { return ___U3CTrafficStatsIncomingU3Ek__BackingField_29; }
	inline TrafficStats_t1302902347 ** get_address_of_U3CTrafficStatsIncomingU3Ek__BackingField_29() { return &___U3CTrafficStatsIncomingU3Ek__BackingField_29; }
	inline void set_U3CTrafficStatsIncomingU3Ek__BackingField_29(TrafficStats_t1302902347 * value)
	{
		___U3CTrafficStatsIncomingU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTrafficStatsIncomingU3Ek__BackingField_29), value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsOutgoingU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___U3CTrafficStatsOutgoingU3Ek__BackingField_30)); }
	inline TrafficStats_t1302902347 * get_U3CTrafficStatsOutgoingU3Ek__BackingField_30() const { return ___U3CTrafficStatsOutgoingU3Ek__BackingField_30; }
	inline TrafficStats_t1302902347 ** get_address_of_U3CTrafficStatsOutgoingU3Ek__BackingField_30() { return &___U3CTrafficStatsOutgoingU3Ek__BackingField_30; }
	inline void set_U3CTrafficStatsOutgoingU3Ek__BackingField_30(TrafficStats_t1302902347 * value)
	{
		___U3CTrafficStatsOutgoingU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTrafficStatsOutgoingU3Ek__BackingField_30), value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsGameLevelU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___U3CTrafficStatsGameLevelU3Ek__BackingField_31)); }
	inline TrafficStatsGameLevel_t4013908777 * get_U3CTrafficStatsGameLevelU3Ek__BackingField_31() const { return ___U3CTrafficStatsGameLevelU3Ek__BackingField_31; }
	inline TrafficStatsGameLevel_t4013908777 ** get_address_of_U3CTrafficStatsGameLevelU3Ek__BackingField_31() { return &___U3CTrafficStatsGameLevelU3Ek__BackingField_31; }
	inline void set_U3CTrafficStatsGameLevelU3Ek__BackingField_31(TrafficStatsGameLevel_t4013908777 * value)
	{
		___U3CTrafficStatsGameLevelU3Ek__BackingField_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTrafficStatsGameLevelU3Ek__BackingField_31), value);
	}

	inline static int32_t get_offset_of_trafficStatsStopwatch_32() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___trafficStatsStopwatch_32)); }
	inline Stopwatch_t305734070 * get_trafficStatsStopwatch_32() const { return ___trafficStatsStopwatch_32; }
	inline Stopwatch_t305734070 ** get_address_of_trafficStatsStopwatch_32() { return &___trafficStatsStopwatch_32; }
	inline void set_trafficStatsStopwatch_32(Stopwatch_t305734070 * value)
	{
		___trafficStatsStopwatch_32 = value;
		Il2CppCodeGenWriteBarrier((&___trafficStatsStopwatch_32), value);
	}

	inline static int32_t get_offset_of_trafficStatsEnabled_33() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___trafficStatsEnabled_33)); }
	inline bool get_trafficStatsEnabled_33() const { return ___trafficStatsEnabled_33; }
	inline bool* get_address_of_trafficStatsEnabled_33() { return &___trafficStatsEnabled_33; }
	inline void set_trafficStatsEnabled_33(bool value)
	{
		___trafficStatsEnabled_33 = value;
	}

	inline static int32_t get_offset_of_peerBase_34() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___peerBase_34)); }
	inline PeerBase_t2956237011 * get_peerBase_34() const { return ___peerBase_34; }
	inline PeerBase_t2956237011 ** get_address_of_peerBase_34() { return &___peerBase_34; }
	inline void set_peerBase_34(PeerBase_t2956237011 * value)
	{
		___peerBase_34 = value;
		Il2CppCodeGenWriteBarrier((&___peerBase_34), value);
	}

	inline static int32_t get_offset_of_SendOutgoingLockObject_35() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___SendOutgoingLockObject_35)); }
	inline RuntimeObject * get_SendOutgoingLockObject_35() const { return ___SendOutgoingLockObject_35; }
	inline RuntimeObject ** get_address_of_SendOutgoingLockObject_35() { return &___SendOutgoingLockObject_35; }
	inline void set_SendOutgoingLockObject_35(RuntimeObject * value)
	{
		___SendOutgoingLockObject_35 = value;
		Il2CppCodeGenWriteBarrier((&___SendOutgoingLockObject_35), value);
	}

	inline static int32_t get_offset_of_DispatchLockObject_36() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___DispatchLockObject_36)); }
	inline RuntimeObject * get_DispatchLockObject_36() const { return ___DispatchLockObject_36; }
	inline RuntimeObject ** get_address_of_DispatchLockObject_36() { return &___DispatchLockObject_36; }
	inline void set_DispatchLockObject_36(RuntimeObject * value)
	{
		___DispatchLockObject_36 = value;
		Il2CppCodeGenWriteBarrier((&___DispatchLockObject_36), value);
	}

	inline static int32_t get_offset_of_EnqueueLock_37() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___EnqueueLock_37)); }
	inline RuntimeObject * get_EnqueueLock_37() const { return ___EnqueueLock_37; }
	inline RuntimeObject ** get_address_of_EnqueueLock_37() { return &___EnqueueLock_37; }
	inline void set_EnqueueLock_37(RuntimeObject * value)
	{
		___EnqueueLock_37 = value;
		Il2CppCodeGenWriteBarrier((&___EnqueueLock_37), value);
	}

	inline static int32_t get_offset_of_PayloadEncryptionSecret_38() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___PayloadEncryptionSecret_38)); }
	inline ByteU5BU5D_t4116647657* get_PayloadEncryptionSecret_38() const { return ___PayloadEncryptionSecret_38; }
	inline ByteU5BU5D_t4116647657** get_address_of_PayloadEncryptionSecret_38() { return &___PayloadEncryptionSecret_38; }
	inline void set_PayloadEncryptionSecret_38(ByteU5BU5D_t4116647657* value)
	{
		___PayloadEncryptionSecret_38 = value;
		Il2CppCodeGenWriteBarrier((&___PayloadEncryptionSecret_38), value);
	}

	inline static int32_t get_offset_of_DgramEncryptor_39() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___DgramEncryptor_39)); }
	inline Encryptor_t200327285 * get_DgramEncryptor_39() const { return ___DgramEncryptor_39; }
	inline Encryptor_t200327285 ** get_address_of_DgramEncryptor_39() { return &___DgramEncryptor_39; }
	inline void set_DgramEncryptor_39(Encryptor_t200327285 * value)
	{
		___DgramEncryptor_39 = value;
		Il2CppCodeGenWriteBarrier((&___DgramEncryptor_39), value);
	}

	inline static int32_t get_offset_of_DgramDecryptor_40() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861, ___DgramDecryptor_40)); }
	inline Decryptor_t2116099858 * get_DgramDecryptor_40() const { return ___DgramDecryptor_40; }
	inline Decryptor_t2116099858 ** get_address_of_DgramDecryptor_40() { return &___DgramDecryptor_40; }
	inline void set_DgramDecryptor_40(Decryptor_t2116099858 * value)
	{
		___DgramDecryptor_40 = value;
		Il2CppCodeGenWriteBarrier((&___DgramDecryptor_40), value);
	}
};

struct PhotonPeer_t1608153861_StaticFields
{
public:
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::OutgoingStreamBufferSize
	int32_t ___OutgoingStreamBufferSize_23;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::AsyncKeyExchange
	bool ___AsyncKeyExchange_26;

public:
	inline static int32_t get_offset_of_OutgoingStreamBufferSize_23() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861_StaticFields, ___OutgoingStreamBufferSize_23)); }
	inline int32_t get_OutgoingStreamBufferSize_23() const { return ___OutgoingStreamBufferSize_23; }
	inline int32_t* get_address_of_OutgoingStreamBufferSize_23() { return &___OutgoingStreamBufferSize_23; }
	inline void set_OutgoingStreamBufferSize_23(int32_t value)
	{
		___OutgoingStreamBufferSize_23 = value;
	}

	inline static int32_t get_offset_of_AsyncKeyExchange_26() { return static_cast<int32_t>(offsetof(PhotonPeer_t1608153861_StaticFields, ___AsyncKeyExchange_26)); }
	inline bool get_AsyncKeyExchange_26() const { return ___AsyncKeyExchange_26; }
	inline bool* get_address_of_AsyncKeyExchange_26() { return &___AsyncKeyExchange_26; }
	inline void set_AsyncKeyExchange_26(bool value)
	{
		___AsyncKeyExchange_26 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHOTONPEER_T1608153861_H
#ifndef SENDOPTIONS_T967321410_H
#define SENDOPTIONS_T967321410_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExitGames.Client.Photon.SendOptions
struct  SendOptions_t967321410 
{
public:
	// ExitGames.Client.Photon.DeliveryMode ExitGames.Client.Photon.SendOptions::DeliveryMode
	int32_t ___DeliveryMode_2;
	// System.Boolean ExitGames.Client.Photon.SendOptions::Encrypt
	bool ___Encrypt_3;
	// System.Byte ExitGames.Client.Photon.SendOptions::Channel
	uint8_t ___Channel_4;

public:
	inline static int32_t get_offset_of_DeliveryMode_2() { return static_cast<int32_t>(offsetof(SendOptions_t967321410, ___DeliveryMode_2)); }
	inline int32_t get_DeliveryMode_2() const { return ___DeliveryMode_2; }
	inline int32_t* get_address_of_DeliveryMode_2() { return &___DeliveryMode_2; }
	inline void set_DeliveryMode_2(int32_t value)
	{
		___DeliveryMode_2 = value;
	}

	inline static int32_t get_offset_of_Encrypt_3() { return static_cast<int32_t>(offsetof(SendOptions_t967321410, ___Encrypt_3)); }
	inline bool get_Encrypt_3() const { return ___Encrypt_3; }
	inline bool* get_address_of_Encrypt_3() { return &___Encrypt_3; }
	inline void set_Encrypt_3(bool value)
	{
		___Encrypt_3 = value;
	}

	inline static int32_t get_offset_of_Channel_4() { return static_cast<int32_t>(offsetof(SendOptions_t967321410, ___Channel_4)); }
	inline uint8_t get_Channel_4() const { return ___Channel_4; }
	inline uint8_t* get_address_of_Channel_4() { return &___Channel_4; }
	inline void set_Channel_4(uint8_t value)
	{
		___Channel_4 = value;
	}
};

struct SendOptions_t967321410_StaticFields
{
public:
	// ExitGames.Client.Photon.SendOptions ExitGames.Client.Photon.SendOptions::SendReliable
	SendOptions_t967321410  ___SendReliable_0;
	// ExitGames.Client.Photon.SendOptions ExitGames.Client.Photon.SendOptions::SendUnreliable
	SendOptions_t967321410  ___SendUnreliable_1;

public:
	inline static int32_t get_offset_of_SendReliable_0() { return static_cast<int32_t>(offsetof(SendOptions_t967321410_StaticFields, ___SendReliable_0)); }
	inline SendOptions_t967321410  get_SendReliable_0() const { return ___SendReliable_0; }
	inline SendOptions_t967321410 * get_address_of_SendReliable_0() { return &___SendReliable_0; }
	inline void set_SendReliable_0(SendOptions_t967321410  value)
	{
		___SendReliable_0 = value;
	}

	inline static int32_t get_offset_of_SendUnreliable_1() { return static_cast<int32_t>(offsetof(SendOptions_t967321410_StaticFields, ___SendUnreliable_1)); }
	inline SendOptions_t967321410  get_SendUnreliable_1() const { return ___SendUnreliable_1; }
	inline SendOptions_t967321410 * get_address_of_SendUnreliable_1() { return &___SendUnreliable_1; }
	inline void set_SendUnreliable_1(SendOptions_t967321410  value)
	{
		___SendUnreliable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of ExitGames.Client.Photon.SendOptions
struct SendOptions_t967321410_marshaled_pinvoke
{
	int32_t ___DeliveryMode_2;
	int32_t ___Encrypt_3;
	uint8_t ___Channel_4;
};
// Native definition for COM marshalling of ExitGames.Client.Photon.SendOptions
struct SendOptions_t967321410_marshaled_com
{
	int32_t ___DeliveryMode_2;
	int32_t ___Encrypt_3;
	uint8_t ___Channel_4;
};
#endif // SENDOPTIONS_T967321410_H
#ifndef AUTHENTICATIONVALUES_T563695058_H
#define AUTHENTICATIONVALUES_T563695058_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.Chat.AuthenticationValues
struct  AuthenticationValues_t563695058  : public RuntimeObject
{
public:
	// Photon.Chat.CustomAuthenticationType Photon.Chat.AuthenticationValues::authType
	uint8_t ___authType_0;
	// System.String Photon.Chat.AuthenticationValues::<AuthGetParameters>k__BackingField
	String_t* ___U3CAuthGetParametersU3Ek__BackingField_1;
	// System.Object Photon.Chat.AuthenticationValues::<AuthPostData>k__BackingField
	RuntimeObject * ___U3CAuthPostDataU3Ek__BackingField_2;
	// System.String Photon.Chat.AuthenticationValues::<Token>k__BackingField
	String_t* ___U3CTokenU3Ek__BackingField_3;
	// System.String Photon.Chat.AuthenticationValues::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_authType_0() { return static_cast<int32_t>(offsetof(AuthenticationValues_t563695058, ___authType_0)); }
	inline uint8_t get_authType_0() const { return ___authType_0; }
	inline uint8_t* get_address_of_authType_0() { return &___authType_0; }
	inline void set_authType_0(uint8_t value)
	{
		___authType_0 = value;
	}

	inline static int32_t get_offset_of_U3CAuthGetParametersU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AuthenticationValues_t563695058, ___U3CAuthGetParametersU3Ek__BackingField_1)); }
	inline String_t* get_U3CAuthGetParametersU3Ek__BackingField_1() const { return ___U3CAuthGetParametersU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CAuthGetParametersU3Ek__BackingField_1() { return &___U3CAuthGetParametersU3Ek__BackingField_1; }
	inline void set_U3CAuthGetParametersU3Ek__BackingField_1(String_t* value)
	{
		___U3CAuthGetParametersU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAuthGetParametersU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CAuthPostDataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AuthenticationValues_t563695058, ___U3CAuthPostDataU3Ek__BackingField_2)); }
	inline RuntimeObject * get_U3CAuthPostDataU3Ek__BackingField_2() const { return ___U3CAuthPostDataU3Ek__BackingField_2; }
	inline RuntimeObject ** get_address_of_U3CAuthPostDataU3Ek__BackingField_2() { return &___U3CAuthPostDataU3Ek__BackingField_2; }
	inline void set_U3CAuthPostDataU3Ek__BackingField_2(RuntimeObject * value)
	{
		___U3CAuthPostDataU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAuthPostDataU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CTokenU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AuthenticationValues_t563695058, ___U3CTokenU3Ek__BackingField_3)); }
	inline String_t* get_U3CTokenU3Ek__BackingField_3() const { return ___U3CTokenU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CTokenU3Ek__BackingField_3() { return &___U3CTokenU3Ek__BackingField_3; }
	inline void set_U3CTokenU3Ek__BackingField_3(String_t* value)
	{
		___U3CTokenU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTokenU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CUserIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AuthenticationValues_t563695058, ___U3CUserIdU3Ek__BackingField_4)); }
	inline String_t* get_U3CUserIdU3Ek__BackingField_4() const { return ___U3CUserIdU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CUserIdU3Ek__BackingField_4() { return &___U3CUserIdU3Ek__BackingField_4; }
	inline void set_U3CUserIdU3Ek__BackingField_4(String_t* value)
	{
		___U3CUserIdU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CUserIdU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICATIONVALUES_T563695058_H
#ifndef CHATCLIENT_T792052210_H
#define CHATCLIENT_T792052210_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.Chat.ChatClient
struct  ChatClient_t792052210  : public RuntimeObject
{
public:
	// System.String Photon.Chat.ChatClient::<NameServerAddress>k__BackingField
	String_t* ___U3CNameServerAddressU3Ek__BackingField_2;
	// System.String Photon.Chat.ChatClient::<FrontendAddress>k__BackingField
	String_t* ___U3CFrontendAddressU3Ek__BackingField_3;
	// System.String Photon.Chat.ChatClient::chatRegion
	String_t* ___chatRegion_4;
	// Photon.Chat.ChatState Photon.Chat.ChatClient::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_5;
	// Photon.Chat.ChatDisconnectCause Photon.Chat.ChatClient::<DisconnectedCause>k__BackingField
	int32_t ___U3CDisconnectedCauseU3Ek__BackingField_6;
	// System.String Photon.Chat.ChatClient::<AppVersion>k__BackingField
	String_t* ___U3CAppVersionU3Ek__BackingField_7;
	// System.String Photon.Chat.ChatClient::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_8;
	// Photon.Chat.AuthenticationValues Photon.Chat.ChatClient::<AuthValues>k__BackingField
	AuthenticationValues_t563695058 * ___U3CAuthValuesU3Ek__BackingField_9;
	// System.Int32 Photon.Chat.ChatClient::MessageLimit
	int32_t ___MessageLimit_10;
	// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel> Photon.Chat.ChatClient::PublicChannels
	Dictionary_2_t2103373208 * ___PublicChannels_11;
	// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel> Photon.Chat.ChatClient::PrivateChannels
	Dictionary_2_t2103373208 * ___PrivateChannels_12;
	// System.Collections.Generic.HashSet`1<System.String> Photon.Chat.ChatClient::PublicChannelsUnsubscribing
	HashSet_1_t412400163 * ___PublicChannelsUnsubscribing_13;
	// Photon.Chat.IChatClientListener Photon.Chat.ChatClient::listener
	RuntimeObject* ___listener_14;
	// Photon.Chat.ChatPeer Photon.Chat.ChatClient::chatPeer
	ChatPeer_t3366739368 * ___chatPeer_15;
	// System.Boolean Photon.Chat.ChatClient::didAuthenticate
	bool ___didAuthenticate_17;
	// System.Nullable`1<System.Int32> Photon.Chat.ChatClient::statusToSetWhenConnected
	Nullable_1_t378540539  ___statusToSetWhenConnected_18;
	// System.Object Photon.Chat.ChatClient::messageToSetWhenConnected
	RuntimeObject * ___messageToSetWhenConnected_19;
	// System.Int32 Photon.Chat.ChatClient::msDeltaForServiceCalls
	int32_t ___msDeltaForServiceCalls_20;
	// System.Int32 Photon.Chat.ChatClient::msTimestampOfLastServiceCall
	int32_t ___msTimestampOfLastServiceCall_21;
	// System.Boolean Photon.Chat.ChatClient::<UseBackgroundWorkerForSending>k__BackingField
	bool ___U3CUseBackgroundWorkerForSendingU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3CNameServerAddressU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ChatClient_t792052210, ___U3CNameServerAddressU3Ek__BackingField_2)); }
	inline String_t* get_U3CNameServerAddressU3Ek__BackingField_2() const { return ___U3CNameServerAddressU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CNameServerAddressU3Ek__BackingField_2() { return &___U3CNameServerAddressU3Ek__BackingField_2; }
	inline void set_U3CNameServerAddressU3Ek__BackingField_2(String_t* value)
	{
		___U3CNameServerAddressU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameServerAddressU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CFrontendAddressU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ChatClient_t792052210, ___U3CFrontendAddressU3Ek__BackingField_3)); }
	inline String_t* get_U3CFrontendAddressU3Ek__BackingField_3() const { return ___U3CFrontendAddressU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CFrontendAddressU3Ek__BackingField_3() { return &___U3CFrontendAddressU3Ek__BackingField_3; }
	inline void set_U3CFrontendAddressU3Ek__BackingField_3(String_t* value)
	{
		___U3CFrontendAddressU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CFrontendAddressU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_chatRegion_4() { return static_cast<int32_t>(offsetof(ChatClient_t792052210, ___chatRegion_4)); }
	inline String_t* get_chatRegion_4() const { return ___chatRegion_4; }
	inline String_t** get_address_of_chatRegion_4() { return &___chatRegion_4; }
	inline void set_chatRegion_4(String_t* value)
	{
		___chatRegion_4 = value;
		Il2CppCodeGenWriteBarrier((&___chatRegion_4), value);
	}

	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ChatClient_t792052210, ___U3CStateU3Ek__BackingField_5)); }
	inline int32_t get_U3CStateU3Ek__BackingField_5() const { return ___U3CStateU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CStateU3Ek__BackingField_5() { return &___U3CStateU3Ek__BackingField_5; }
	inline void set_U3CStateU3Ek__BackingField_5(int32_t value)
	{
		___U3CStateU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CDisconnectedCauseU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ChatClient_t792052210, ___U3CDisconnectedCauseU3Ek__BackingField_6)); }
	inline int32_t get_U3CDisconnectedCauseU3Ek__BackingField_6() const { return ___U3CDisconnectedCauseU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CDisconnectedCauseU3Ek__BackingField_6() { return &___U3CDisconnectedCauseU3Ek__BackingField_6; }
	inline void set_U3CDisconnectedCauseU3Ek__BackingField_6(int32_t value)
	{
		___U3CDisconnectedCauseU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CAppVersionU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ChatClient_t792052210, ___U3CAppVersionU3Ek__BackingField_7)); }
	inline String_t* get_U3CAppVersionU3Ek__BackingField_7() const { return ___U3CAppVersionU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CAppVersionU3Ek__BackingField_7() { return &___U3CAppVersionU3Ek__BackingField_7; }
	inline void set_U3CAppVersionU3Ek__BackingField_7(String_t* value)
	{
		___U3CAppVersionU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAppVersionU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CAppIdU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ChatClient_t792052210, ___U3CAppIdU3Ek__BackingField_8)); }
	inline String_t* get_U3CAppIdU3Ek__BackingField_8() const { return ___U3CAppIdU3Ek__BackingField_8; }
	inline String_t** get_address_of_U3CAppIdU3Ek__BackingField_8() { return &___U3CAppIdU3Ek__BackingField_8; }
	inline void set_U3CAppIdU3Ek__BackingField_8(String_t* value)
	{
		___U3CAppIdU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAppIdU3Ek__BackingField_8), value);
	}

	inline static int32_t get_offset_of_U3CAuthValuesU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(ChatClient_t792052210, ___U3CAuthValuesU3Ek__BackingField_9)); }
	inline AuthenticationValues_t563695058 * get_U3CAuthValuesU3Ek__BackingField_9() const { return ___U3CAuthValuesU3Ek__BackingField_9; }
	inline AuthenticationValues_t563695058 ** get_address_of_U3CAuthValuesU3Ek__BackingField_9() { return &___U3CAuthValuesU3Ek__BackingField_9; }
	inline void set_U3CAuthValuesU3Ek__BackingField_9(AuthenticationValues_t563695058 * value)
	{
		___U3CAuthValuesU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAuthValuesU3Ek__BackingField_9), value);
	}

	inline static int32_t get_offset_of_MessageLimit_10() { return static_cast<int32_t>(offsetof(ChatClient_t792052210, ___MessageLimit_10)); }
	inline int32_t get_MessageLimit_10() const { return ___MessageLimit_10; }
	inline int32_t* get_address_of_MessageLimit_10() { return &___MessageLimit_10; }
	inline void set_MessageLimit_10(int32_t value)
	{
		___MessageLimit_10 = value;
	}

	inline static int32_t get_offset_of_PublicChannels_11() { return static_cast<int32_t>(offsetof(ChatClient_t792052210, ___PublicChannels_11)); }
	inline Dictionary_2_t2103373208 * get_PublicChannels_11() const { return ___PublicChannels_11; }
	inline Dictionary_2_t2103373208 ** get_address_of_PublicChannels_11() { return &___PublicChannels_11; }
	inline void set_PublicChannels_11(Dictionary_2_t2103373208 * value)
	{
		___PublicChannels_11 = value;
		Il2CppCodeGenWriteBarrier((&___PublicChannels_11), value);
	}

	inline static int32_t get_offset_of_PrivateChannels_12() { return static_cast<int32_t>(offsetof(ChatClient_t792052210, ___PrivateChannels_12)); }
	inline Dictionary_2_t2103373208 * get_PrivateChannels_12() const { return ___PrivateChannels_12; }
	inline Dictionary_2_t2103373208 ** get_address_of_PrivateChannels_12() { return &___PrivateChannels_12; }
	inline void set_PrivateChannels_12(Dictionary_2_t2103373208 * value)
	{
		___PrivateChannels_12 = value;
		Il2CppCodeGenWriteBarrier((&___PrivateChannels_12), value);
	}

	inline static int32_t get_offset_of_PublicChannelsUnsubscribing_13() { return static_cast<int32_t>(offsetof(ChatClient_t792052210, ___PublicChannelsUnsubscribing_13)); }
	inline HashSet_1_t412400163 * get_PublicChannelsUnsubscribing_13() const { return ___PublicChannelsUnsubscribing_13; }
	inline HashSet_1_t412400163 ** get_address_of_PublicChannelsUnsubscribing_13() { return &___PublicChannelsUnsubscribing_13; }
	inline void set_PublicChannelsUnsubscribing_13(HashSet_1_t412400163 * value)
	{
		___PublicChannelsUnsubscribing_13 = value;
		Il2CppCodeGenWriteBarrier((&___PublicChannelsUnsubscribing_13), value);
	}

	inline static int32_t get_offset_of_listener_14() { return static_cast<int32_t>(offsetof(ChatClient_t792052210, ___listener_14)); }
	inline RuntimeObject* get_listener_14() const { return ___listener_14; }
	inline RuntimeObject** get_address_of_listener_14() { return &___listener_14; }
	inline void set_listener_14(RuntimeObject* value)
	{
		___listener_14 = value;
		Il2CppCodeGenWriteBarrier((&___listener_14), value);
	}

	inline static int32_t get_offset_of_chatPeer_15() { return static_cast<int32_t>(offsetof(ChatClient_t792052210, ___chatPeer_15)); }
	inline ChatPeer_t3366739368 * get_chatPeer_15() const { return ___chatPeer_15; }
	inline ChatPeer_t3366739368 ** get_address_of_chatPeer_15() { return &___chatPeer_15; }
	inline void set_chatPeer_15(ChatPeer_t3366739368 * value)
	{
		___chatPeer_15 = value;
		Il2CppCodeGenWriteBarrier((&___chatPeer_15), value);
	}

	inline static int32_t get_offset_of_didAuthenticate_17() { return static_cast<int32_t>(offsetof(ChatClient_t792052210, ___didAuthenticate_17)); }
	inline bool get_didAuthenticate_17() const { return ___didAuthenticate_17; }
	inline bool* get_address_of_didAuthenticate_17() { return &___didAuthenticate_17; }
	inline void set_didAuthenticate_17(bool value)
	{
		___didAuthenticate_17 = value;
	}

	inline static int32_t get_offset_of_statusToSetWhenConnected_18() { return static_cast<int32_t>(offsetof(ChatClient_t792052210, ___statusToSetWhenConnected_18)); }
	inline Nullable_1_t378540539  get_statusToSetWhenConnected_18() const { return ___statusToSetWhenConnected_18; }
	inline Nullable_1_t378540539 * get_address_of_statusToSetWhenConnected_18() { return &___statusToSetWhenConnected_18; }
	inline void set_statusToSetWhenConnected_18(Nullable_1_t378540539  value)
	{
		___statusToSetWhenConnected_18 = value;
	}

	inline static int32_t get_offset_of_messageToSetWhenConnected_19() { return static_cast<int32_t>(offsetof(ChatClient_t792052210, ___messageToSetWhenConnected_19)); }
	inline RuntimeObject * get_messageToSetWhenConnected_19() const { return ___messageToSetWhenConnected_19; }
	inline RuntimeObject ** get_address_of_messageToSetWhenConnected_19() { return &___messageToSetWhenConnected_19; }
	inline void set_messageToSetWhenConnected_19(RuntimeObject * value)
	{
		___messageToSetWhenConnected_19 = value;
		Il2CppCodeGenWriteBarrier((&___messageToSetWhenConnected_19), value);
	}

	inline static int32_t get_offset_of_msDeltaForServiceCalls_20() { return static_cast<int32_t>(offsetof(ChatClient_t792052210, ___msDeltaForServiceCalls_20)); }
	inline int32_t get_msDeltaForServiceCalls_20() const { return ___msDeltaForServiceCalls_20; }
	inline int32_t* get_address_of_msDeltaForServiceCalls_20() { return &___msDeltaForServiceCalls_20; }
	inline void set_msDeltaForServiceCalls_20(int32_t value)
	{
		___msDeltaForServiceCalls_20 = value;
	}

	inline static int32_t get_offset_of_msTimestampOfLastServiceCall_21() { return static_cast<int32_t>(offsetof(ChatClient_t792052210, ___msTimestampOfLastServiceCall_21)); }
	inline int32_t get_msTimestampOfLastServiceCall_21() const { return ___msTimestampOfLastServiceCall_21; }
	inline int32_t* get_address_of_msTimestampOfLastServiceCall_21() { return &___msTimestampOfLastServiceCall_21; }
	inline void set_msTimestampOfLastServiceCall_21(int32_t value)
	{
		___msTimestampOfLastServiceCall_21 = value;
	}

	inline static int32_t get_offset_of_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(ChatClient_t792052210, ___U3CUseBackgroundWorkerForSendingU3Ek__BackingField_22)); }
	inline bool get_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_22() const { return ___U3CUseBackgroundWorkerForSendingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_22() { return &___U3CUseBackgroundWorkerForSendingU3Ek__BackingField_22; }
	inline void set_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_22(bool value)
	{
		___U3CUseBackgroundWorkerForSendingU3Ek__BackingField_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHATCLIENT_T792052210_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t777629997  : public ArgumentException_t132251570
{
public:
	// System.Object System.ArgumentOutOfRangeException::actual_value
	RuntimeObject * ___actual_value_13;

public:
	inline static int32_t get_offset_of_actual_value_13() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t777629997, ___actual_value_13)); }
	inline RuntimeObject * get_actual_value_13() const { return ___actual_value_13; }
	inline RuntimeObject ** get_address_of_actual_value_13() { return &___actual_value_13; }
	inline void set_actual_value_13(RuntimeObject * value)
	{
		___actual_value_13 = value;
		Il2CppCodeGenWriteBarrier((&___actual_value_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifndef ENUMERATOR_T314722136_H
#define ENUMERATOR_T314722136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>
struct  Enumerator_t314722136 
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::host_enumerator
	Enumerator_t2086727927  ___host_enumerator_0;

public:
	inline static int32_t get_offset_of_host_enumerator_0() { return static_cast<int32_t>(offsetof(Enumerator_t314722136, ___host_enumerator_0)); }
	inline Enumerator_t2086727927  get_host_enumerator_0() const { return ___host_enumerator_0; }
	inline Enumerator_t2086727927 * get_address_of_host_enumerator_0() { return &___host_enumerator_0; }
	inline void set_host_enumerator_0(Enumerator_t2086727927  value)
	{
		___host_enumerator_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T314722136_H
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
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef CHATPEER_T3366739368_H
#define CHATPEER_T3366739368_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Photon.Chat.ChatPeer
struct  ChatPeer_t3366739368  : public PhotonPeer_t1608153861
{
public:

public:
};

struct ChatPeer_t3366739368_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32> Photon.Chat.ChatPeer::ProtocolToNameServerPort
	Dictionary_2_t1720840067 * ___ProtocolToNameServerPort_43;

public:
	inline static int32_t get_offset_of_ProtocolToNameServerPort_43() { return static_cast<int32_t>(offsetof(ChatPeer_t3366739368_StaticFields, ___ProtocolToNameServerPort_43)); }
	inline Dictionary_2_t1720840067 * get_ProtocolToNameServerPort_43() const { return ___ProtocolToNameServerPort_43; }
	inline Dictionary_2_t1720840067 ** get_address_of_ProtocolToNameServerPort_43() { return &___ProtocolToNameServerPort_43; }
	inline void set_ProtocolToNameServerPort_43(Dictionary_2_t1720840067 * value)
	{
		___ProtocolToNameServerPort_43 = value;
		Il2CppCodeGenWriteBarrier((&___ProtocolToNameServerPort_43), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHATPEER_T3366739368_H
#ifndef FUNC_1_T3822001908_H
#define FUNC_1_T3822001908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`1<System.Boolean>
struct  Func_1_t3822001908  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_1_T3822001908_H
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
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
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_t2897418192  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void HashSet_1__ctor_m4231804131_gshared (HashSet_1_t1645055638 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
extern "C" IL2CPP_METHOD_ATTR void List_1_AddRange_m3709462088_gshared (List_1_t257213610 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveRange(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1_RemoveRange_m962977191_gshared (List_1_t257213610 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void List_1_Clear_m3697625829_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m3151171942_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m458397011_gshared (Dictionary_2_t132545152 * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" IL2CPP_METHOD_ATTR KeyCollection_t322220623 * Dictionary_2_get_Keys_m1609554139_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t314722136  KeyCollection_GetEnumerator_m3395243744_gshared (KeyCollection_t322220623 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m437256991_gshared (Enumerator_t314722136 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m2866271333_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m2278349286_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m4038518975_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m119570864_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m1668845840_gshared (Enumerator_t314722136 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m260444170_gshared (Enumerator_t314722136 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3280774074_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR bool HashSet_1_Add_m1971460364_gshared (HashSet_1_t1645055638 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m3958962755_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(!0)
extern "C" IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m3173358704_gshared (HashSet_1_t1645055638 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void HashSet_1_Clear_m507835370_gshared (HashSet_1_t1645055638 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_1__ctor_m744463608_gshared (Func_1_t3822001908 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
extern "C" IL2CPP_METHOD_ATTR void Nullable_1__ctor_m1954627310_gshared (Nullable_1_t378540539 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m705142683_gshared (Dictionary_2_t1405253484 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m1883976453_gshared (Dictionary_2_t1405253484 * __this, uint8_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1279768534_gshared (Dictionary_2_t1405253484 * __this, uint8_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m390015880_gshared (Dictionary_2_t1405253484 * __this, uint8_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m2387223709_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m1372101825_gshared (Dictionary_2_t1405253484 * __this, uint8_t p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m709044238_gshared (HashSet_1_t1645055638 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::ContainsKey(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m2477779308_gshared (Dictionary_2_t1405253484 * __this, uint8_t p0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m350283068_gshared (Nullable_1_t378540539 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m745926140_gshared (Nullable_1_t378540539 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m542532379_gshared (HashSet_1_t1645055638 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Object>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2689672840_gshared (Dictionary_2_t1850000478 * __this, uint8_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m1868025697_gshared (Dictionary_2_t1720840067 * __this, uint8_t p0, int32_t* p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m4121386254_gshared (Dictionary_2_t1720840067 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m3596676840_gshared (Dictionary_2_t1720840067 * __this, uint8_t p0, int32_t p1, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.AuthenticationValues::set_UserId(System.String)
extern "C" IL2CPP_METHOD_ATTR void AuthenticationValues_set_UserId_m3714069592 (AuthenticationValues_t563695058 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void Photon.Chat.AuthenticationValues::set_AuthPostData(System.Object)
extern "C" IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthPostData_m3305014939 (AuthenticationValues_t563695058 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.String Photon.Chat.AuthenticationValues::get_AuthGetParameters()
extern "C" IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_AuthGetParameters_m295365972 (AuthenticationValues_t563695058 * __this, const RuntimeMethod* method);
// System.String System.Uri::EscapeDataString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_EscapeDataString_m2743853427 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m630303134 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// System.Void Photon.Chat.AuthenticationValues::set_AuthGetParameters(System.String)
extern "C" IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthGetParameters_m1387510306 (AuthenticationValues_t563695058 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String Photon.Chat.AuthenticationValues::get_UserId()
extern "C" IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_UserId_m2010043280 (AuthenticationValues_t563695058 * __this, const RuntimeMethod* method);
// System.String Photon.Chat.AuthenticationValues::get_Token()
extern "C" IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_Token_m4283956602 (AuthenticationValues_t563695058 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m3339413201 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, RuntimeObject * p3, const RuntimeMethod* method);
// System.Void Photon.Chat.ChannelCreationOptions::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ChannelCreationOptions__ctor_m3524302159 (ChannelCreationOptions_t3966585929 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m706204246 (List_1_t3319525431 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_m2321703786 (List_1_t257213610 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t257213610 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.String>::.ctor()
inline void HashSet_1__ctor_m3545045958 (HashSet_1_t412400163 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t412400163 *, const RuntimeMethod*))HashSet_1__ctor_m4231804131_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
inline int32_t List_1_get_Count_m2934127733 (List_1_t257213610 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t257213610 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m1685793073 (List_1_t3319525431 * __this, String_t* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3319525431 *, String_t*, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
inline void List_1_Add_m3338814081 (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t257213610 *, RuntimeObject *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void Photon.Chat.ChatChannel::set_LastMsgId(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ChatChannel_set_LastMsgId_m1760046399 (ChatChannel_t2318116909 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatChannel::TruncateMessages()
extern "C" IL2CPP_METHOD_ATTR void ChatChannel_TruncateMessages_m2016570193 (ChatChannel_t2318116909 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m3811851160 (List_1_t3319525431 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3319525431 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m3709462088_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m3709462088 (List_1_t257213610 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t257213610 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m3709462088_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_m1512601996 (List_1_t3319525431 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3319525431 *, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_m962977191_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_m962977191 (List_1_t257213610 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t257213610 *, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_m962977191_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
inline void List_1_Clear_m2233494194 (List_1_t3319525431 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1_Clear_m3697625829_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
inline void List_1_Clear_m3697625829 (List_1_t257213610 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t257213610 *, const RuntimeMethod*))List_1_Clear_m3697625829_gshared)(__this, method);
}
// System.Void System.Text.StringBuilder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_m3121283359 (StringBuilder_t * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m1991961783 (List_1_t3319525431 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_t3319525431 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
inline RuntimeObject * List_1_get_Item_m2287542950 (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (List_1_t257213610 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2556382932 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendLine_m1438862993 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
inline int32_t Dictionary_2_get_Count_m3151171942 (Dictionary_2_t132545152 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t132545152 *, const RuntimeMethod*))Dictionary_2_get_Count_m3151171942_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
inline void Dictionary_2__ctor_m458397011 (Dictionary_2_t132545152 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t132545152 *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_m458397011_gshared)(__this, p0, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
inline KeyCollection_t322220623 * Dictionary_2_get_Keys_m1609554139 (Dictionary_2_t132545152 * __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t322220623 * (*) (Dictionary_2_t132545152 *, const RuntimeMethod*))Dictionary_2_get_Keys_m1609554139_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
inline Enumerator_t314722136  KeyCollection_GetEnumerator_m3395243744 (KeyCollection_t322220623 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t314722136  (*) (KeyCollection_t322220623 *, const RuntimeMethod*))KeyCollection_GetEnumerator_m3395243744_gshared)(__this, method);
}
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
inline RuntimeObject * Enumerator_get_Current_m437256991 (Enumerator_t314722136 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Enumerator_t314722136 *, const RuntimeMethod*))Enumerator_get_Current_m437256991_gshared)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
inline RuntimeObject * Dictionary_2_get_Item_m2866271333 (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Dictionary_2_t132545152 *, RuntimeObject *, const RuntimeMethod*))Dictionary_2_get_Item_m2866271333_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m2278349286 (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t132545152 *, RuntimeObject *, const RuntimeMethod*))Dictionary_2_ContainsKey_m2278349286_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
inline bool Dictionary_2_Remove_m4038518975 (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t132545152 *, RuntimeObject *, const RuntimeMethod*))Dictionary_2_Remove_m4038518975_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m119570864 (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t132545152 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_m119570864_gshared)(__this, p0, p1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m1668845840 (Enumerator_t314722136 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t314722136 *, const RuntimeMethod*))Enumerator_MoveNext_m1668845840_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::Dispose()
inline void Enumerator_Dispose_m260444170 (Enumerator_t314722136 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t314722136 *, const RuntimeMethod*))Enumerator_Dispose_m260444170_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m3280774074 (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t132545152 *, RuntimeObject *, RuntimeObject **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3280774074_gshared)(__this, p0, p1, method);
}
// System.Void Photon.Chat.ChatChannel::set_PublishSubscribers(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ChatChannel_set_PublishSubscribers_m404676658 (ChatChannel_t2318116909 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatChannel::set_MaxSubscribers(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ChatChannel_set_MaxSubscribers_m1105929256 (ChatChannel_t2318116909 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Add(!0)
inline bool HashSet_1_Add_m2788916881 (HashSet_1_t412400163 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t412400163 *, String_t*, const RuntimeMethod*))HashSet_1_Add_m1971460364_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
inline void Dictionary_2_Clear_m3958962755 (Dictionary_2_t132545152 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t132545152 *, const RuntimeMethod*))Dictionary_2_Clear_m3958962755_gshared)(__this, method);
}
// System.Void Photon.Chat.ChatClient::set_State(Photon.Chat.ChatState)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_set_State_m3825103917 (ChatClient_t792052210 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatPeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener,ExitGames.Client.Photon.ConnectionProtocol)
extern "C" IL2CPP_METHOD_ATTR void ChatPeer__ctor_m3747547441 (ChatPeer_t3366739368 * __this, RuntimeObject* ___listener0, uint8_t ___protocol1, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PhotonPeer::set_SerializationProtocolType(ExitGames.Client.Photon.SerializationProtocol)
extern "C" IL2CPP_METHOD_ATTR void PhotonPeer_set_SerializationProtocolType_m713649605 (PhotonPeer_t1608153861 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>::.ctor()
inline void Dictionary_2__ctor_m222067789 (Dictionary_2_t2103373208 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2103373208 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method);
}
// Photon.Chat.ChatState Photon.Chat.ChatClient::get_State()
extern "C" IL2CPP_METHOD_ATTR int32_t ChatClient_get_State_m779190608 (ChatClient_t792052210 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::get_HasPeer()
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_get_HasPeer_m3489806430 (ChatClient_t792052210 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::get_CanChat()
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_get_CanChat_m2766175627 (ChatClient_t792052210 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m3977234279 (Dictionary_2_t2103373208 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2103373208 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m2278349286_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Contains(!0)
inline bool HashSet_1_Contains_m1455301816 (HashSet_1_t412400163 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t412400163 *, String_t*, const RuntimeMethod*))HashSet_1_Contains_m3173358704_gshared)(__this, p0, method);
}
// Photon.Chat.AuthenticationValues Photon.Chat.ChatClient::get_AuthValues()
extern "C" IL2CPP_METHOD_ATTR AuthenticationValues_t563695058 * ChatClient_get_AuthValues_m1343650260 (ChatClient_t792052210 * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.AuthenticationValues::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AuthenticationValues__ctor_m2748796689 (AuthenticationValues_t563695058 * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_AuthValues(Photon.Chat.AuthenticationValues)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_set_AuthValues_m2891279403 (ChatClient_t792052210 * __this, AuthenticationValues_t563695058 * ___value0, const RuntimeMethod* method);
// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::get_TransportProtocol()
extern "C" IL2CPP_METHOD_ATTR uint8_t PhotonPeer_get_TransportProtocol_m4264093347 (PhotonPeer_t1608153861 * __this, const RuntimeMethod* method);
// ExitGames.Client.Photon.PeerStateValue ExitGames.Client.Photon.PhotonPeer::get_PeerState()
extern "C" IL2CPP_METHOD_ATTR uint8_t PhotonPeer_get_PeerState_m582006767 (PhotonPeer_t1608153861 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PhotonPeer::set_TransportProtocol(ExitGames.Client.Photon.ConnectionProtocol)
extern "C" IL2CPP_METHOD_ATTR void PhotonPeer_set_TransportProtocol_m2426276397 (PhotonPeer_t1608153861 * __this, uint8_t p0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_DisconnectedCause(Photon.Chat.ChatDisconnectCause)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_set_DisconnectedCause_m1169307040 (ChatClient_t792052210 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_AppId(System.String)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_set_AppId_m3473508305 (ChatClient_t792052210 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_AppVersion(System.String)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_set_AppVersion_m2570860372 (ChatClient_t792052210 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PhotonPeer::set_QuickResendAttempts(System.Byte)
extern "C" IL2CPP_METHOD_ATTR void PhotonPeer_set_QuickResendAttempts_m3595969805 (PhotonPeer_t1608153861 * __this, uint8_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>::Clear()
inline void Dictionary_2_Clear_m702791670 (Dictionary_2_t2103373208 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2103373208 *, const RuntimeMethod*))Dictionary_2_Clear_m3958962755_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.String>::Clear()
inline void HashSet_1_Clear_m3342517819 (HashSet_1_t412400163 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t412400163 *, const RuntimeMethod*))HashSet_1_Clear_m507835370_gshared)(__this, method);
}
// System.String Photon.Chat.ChatPeer::get_NameServerAddress()
extern "C" IL2CPP_METHOD_ATTR String_t* ChatPeer_get_NameServerAddress_m2456527619 (ChatPeer_t3366739368 * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_NameServerAddress(System.String)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_set_NameServerAddress_m2434354289 (ChatClient_t792052210 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatPeer::Connect()
extern "C" IL2CPP_METHOD_ATTR bool ChatPeer_Connect_m3069500609 (ChatPeer_t3366739368 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::get_UseBackgroundWorkerForSending()
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_get_UseBackgroundWorkerForSending_m636120350 (ChatClient_t792052210 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m744463608 (Func_1_t3822001908 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t3822001908 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m744463608_gshared)(__this, p0, p1, method);
}
// System.Byte ExitGames.Client.Photon.SupportClass::StartBackgroundCalls(System.Func`1<System.Boolean>,System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR uint8_t SupportClass_StartBackgroundCalls_m2029470730 (RuntimeObject * __this /* static, unused */, Func_1_t3822001908 * p0, int32_t p1, String_t* p2, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
inline void Nullable_1__ctor_m1954627310 (Nullable_1_t378540539 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t378540539 *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m1954627310_gshared)(__this, p0, method);
}
// System.Boolean Photon.Chat.ChatClient::Connect(System.String,System.String,Photon.Chat.AuthenticationValues)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_Connect_m3402282777 (ChatClient_t792052210 * __this, String_t* ___appId0, String_t* ___appVersion1, AuthenticationValues_t563695058 * ___authValues2, const RuntimeMethod* method);
// System.Int32 System.Environment::get_TickCount()
extern "C" IL2CPP_METHOD_ATTR int32_t Environment_get_TickCount_m2088073110 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::Subscribe(System.String[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_Subscribe_m741354606 (ChatClient_t792052210 * __this, StringU5BU5D_t1281789340* ___channels0, int32_t ___messagesFromHistory1, const RuntimeMethod* method);
// ExitGames.Client.Photon.DebugLevel Photon.Chat.ChatClient::get_DebugOut()
extern "C" IL2CPP_METHOD_ATTR uint8_t ChatClient_get_DebugOut_m2575811291 (ChatClient_t792052210 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor()
inline void Dictionary_2__ctor_m705142683 (Dictionary_2_t1405253484 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1405253484 *, const RuntimeMethod*))Dictionary_2__ctor_m705142683_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(!0,!1)
inline void Dictionary_2_Add_m1883976453 (Dictionary_2_t1405253484 * __this, uint8_t p0, RuntimeObject * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1405253484 *, uint8_t, RuntimeObject *, const RuntimeMethod*))Dictionary_2_Add_m1883976453_gshared)(__this, p0, p1, method);
}
// System.Boolean Photon.Chat.ChatClient::SendChannelOperation(System.String[],System.Byte,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_SendChannelOperation_m35122363 (ChatClient_t792052210 * __this, StringU5BU5D_t1281789340* ___channels0, uint8_t ___operation1, int32_t ___historyLength2, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::publishMessage(System.String,System.Object,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_publishMessage_m2261581570 (ChatClient_t792052210 * __this, String_t* ___channelName0, RuntimeObject * ___message1, bool ___reliable2, bool ___forwardAsWebhook3, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.SendOptions::set_Reliability(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void SendOptions_set_Reliability_m237473686 (SendOptions_t967321410 * __this, bool p0, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::SendPrivateMessage(System.String,System.Object,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_SendPrivateMessage_m1122275178 (ChatClient_t792052210 * __this, String_t* ___target0, RuntimeObject * ___message1, bool ___encrypt2, bool ___forwardAsWebhook3, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::sendPrivateMessage(System.String,System.Object,System.Boolean,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_sendPrivateMessage_m446930096 (ChatClient_t792052210 * __this, String_t* ___target0, RuntimeObject * ___message1, bool ___encrypt2, bool ___reliable3, bool ___forwardAsWebhook4, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m1279768534 (Dictionary_2_t1405253484 * __this, uint8_t p0, RuntimeObject * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1405253484 *, uint8_t, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_m1279768534_gshared)(__this, p0, p1, method);
}
// System.Boolean Photon.Chat.ChatClient::SetOnlineStatus(System.Int32,System.Object,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_SetOnlineStatus_m2397111474 (ChatClient_t792052210 * __this, int32_t ___status0, RuntimeObject * ___message1, bool ___skipMessage2, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method);
// System.String Photon.Chat.ChatClient::get_UserId()
extern "C" IL2CPP_METHOD_ATTR String_t* ChatClient_get_UserId_m1614431305 (ChatClient_t792052210 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m4209734297 (Dictionary_2_t2103373208 * __this, String_t* p0, ChatChannel_t2318116909 ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2103373208 *, String_t*, ChatChannel_t2318116909 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3280774074_gshared)(__this, p0, p1, method);
}
// System.Void Photon.Chat.ChatClient::HandleChatMessagesEvent(ExitGames.Client.Photon.EventData)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_HandleChatMessagesEvent_m1377968632 (ChatClient_t792052210 * __this, EventData_t3728223374 * ___eventData0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandlePrivateMessageEvent(ExitGames.Client.Photon.EventData)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_HandlePrivateMessageEvent_m894082070 (ChatClient_t792052210 * __this, EventData_t3728223374 * ___eventData0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandleStatusUpdate(ExitGames.Client.Photon.EventData)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_HandleStatusUpdate_m576156692 (ChatClient_t792052210 * __this, EventData_t3728223374 * ___eventData0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandleSubscribeEvent(ExitGames.Client.Photon.EventData)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_HandleSubscribeEvent_m3618184068 (ChatClient_t792052210 * __this, EventData_t3728223374 * ___eventData0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandleUnsubscribeEvent(ExitGames.Client.Photon.EventData)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_HandleUnsubscribeEvent_m2964998100 (ChatClient_t792052210 * __this, EventData_t3728223374 * ___eventData0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandleUserSubscribedEvent(ExitGames.Client.Photon.EventData)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_HandleUserSubscribedEvent_m3530604099 (ChatClient_t792052210 * __this, EventData_t3728223374 * ___eventData0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandleUserUnsubscribedEvent(ExitGames.Client.Photon.EventData)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_HandleUserUnsubscribedEvent_m677700852 (ChatClient_t792052210 * __this, EventData_t3728223374 * ___eventData0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::HandleAuthResponse(ExitGames.Client.Photon.OperationResponse)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_HandleAuthResponse_m3178849132 (ChatClient_t792052210 * __this, OperationResponse_t423627973 * ___operationResponse0, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.PhotonPeer::EstablishEncryption()
extern "C" IL2CPP_METHOD_ATTR bool PhotonPeer_EstablishEncryption_m2045801801 (PhotonPeer_t1608153861 * __this, const RuntimeMethod* method);
// System.String Photon.Chat.ChatClient::get_AppId()
extern "C" IL2CPP_METHOD_ATTR String_t* ChatClient_get_AppId_m2045180326 (ChatClient_t792052210 * __this, const RuntimeMethod* method);
// System.String Photon.Chat.ChatClient::get_AppVersion()
extern "C" IL2CPP_METHOD_ATTR String_t* ChatClient_get_AppVersion_m855597901 (ChatClient_t792052210 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatPeer::AuthenticateOnNameServer(System.String,System.String,System.String,Photon.Chat.AuthenticationValues)
extern "C" IL2CPP_METHOD_ATTR bool ChatPeer_AuthenticateOnNameServer_m4021717668 (ChatPeer_t3366739368 * __this, String_t* ___appId0, String_t* ___appVersion1, String_t* ___region2, AuthenticationValues_t563695058 * ___authValues3, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatClient::AuthenticateOnFrontEnd()
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_AuthenticateOnFrontEnd_m1407618497 (ChatClient_t792052210 * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::ConnectToFrontEnd()
extern "C" IL2CPP_METHOD_ATTR void ChatClient_ConnectToFrontEnd_m3490933928 (ChatClient_t792052210 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(!0)
inline RuntimeObject * Dictionary_2_get_Item_m390015880 (Dictionary_2_t1405253484 * __this, uint8_t p0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Dictionary_2_t1405253484 *, uint8_t, const RuntimeMethod*))Dictionary_2_get_Item_m390015880_gshared)(__this, p0, method);
}
// System.Boolean System.String::Equals(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_Equals_m2270643605 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.String Photon.Chat.ChatClient::GetPrivateChannelNameByUser(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* ChatClient_GetPrivateChannelNameByUser_m276549809 (ChatClient_t792052210 * __this, String_t* ___userName0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatChannel::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ChatChannel__ctor_m3846381778 (ChatChannel_t2318116909 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatChannel::set_IsPrivate(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ChatChannel_set_IsPrivate_m1369826006 (ChatChannel_t2318116909 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>::Add(!0,!1)
inline void Dictionary_2_Add_m3204002057 (Dictionary_2_t2103373208 * __this, String_t* p0, ChatChannel_t2318116909 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2103373208 *, String_t*, ChatChannel_t2318116909 *, const RuntimeMethod*))Dictionary_2_Add_m2387223709_gshared)(__this, p0, p1, method);
}
// System.Void Photon.Chat.ChatChannel::Add(System.String,System.Object,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ChatChannel_Add_m3763665981 (ChatChannel_t2318116909 * __this, String_t* ___sender0, RuntimeObject * ___message1, int32_t ___msgId2, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatChannel::Add(System.String[],System.Object[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ChatChannel_Add_m1329789613 (ChatChannel_t2318116909 * __this, StringU5BU5D_t1281789340* ___senders0, ObjectU5BU5D_t2843939325* ___messages1, int32_t ___lastMsgId2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m1372101825 (Dictionary_2_t1405253484 * __this, uint8_t p0, RuntimeObject ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1405253484 *, uint8_t, RuntimeObject **, const RuntimeMethod*))Dictionary_2_TryGetValue_m1372101825_gshared)(__this, p0, p1, method);
}
// System.Void Photon.Chat.ChatChannel::ClearProperties()
extern "C" IL2CPP_METHOD_ATTR void ChatChannel_ClearProperties_m937654232 (ChatChannel_t2318116909 * __this, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatChannel::ReadProperties(System.Collections.Generic.Dictionary`2<System.Object,System.Object>)
extern "C" IL2CPP_METHOD_ATTR void ChatChannel_ReadProperties_m768176894 (ChatChannel_t2318116909 * __this, Dictionary_2_t132545152 * ___newProperties0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatChannel::AddSubscribers(System.String[])
extern "C" IL2CPP_METHOD_ATTR void ChatChannel_AddSubscribers_m4115425855 (ChatChannel_t2318116909 * __this, StringU5BU5D_t1281789340* ___users0, const RuntimeMethod* method);
// System.Object ExitGames.Client.Photon.EventData::get_Item(System.Byte)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * EventData_get_Item_m933827050 (EventData_t3728223374 * __this, uint8_t p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>::Remove(!0)
inline bool Dictionary_2_Remove_m2545012917 (Dictionary_2_t2103373208 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t2103373208 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m4038518975_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.String>::Remove(!0)
inline bool HashSet_1_Remove_m2792738130 (HashSet_1_t412400163 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t412400163 *, String_t*, const RuntimeMethod*))HashSet_1_Remove_m709044238_gshared)(__this, p0, method);
}
// System.String ExitGames.Client.Photon.OperationResponse::ToStringFull()
extern "C" IL2CPP_METHOD_ATTR String_t* OperationResponse_ToStringFull_m250125288 (OperationResponse_t423627973 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m2477779308 (Dictionary_2_t1405253484 * __this, uint8_t p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1405253484 *, uint8_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m2477779308_gshared)(__this, p0, method);
}
// System.Object ExitGames.Client.Photon.OperationResponse::get_Item(System.Byte)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * OperationResponse_get_Item_m3136215957 (OperationResponse_t423627973 * __this, uint8_t p0, const RuntimeMethod* method);
// System.Void Photon.Chat.AuthenticationValues::set_Token(System.String)
extern "C" IL2CPP_METHOD_ATTR void AuthenticationValues_set_Token_m1158506906 (AuthenticationValues_t563695058 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_FrontendAddress(System.String)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_set_FrontendAddress_m2203636551 (ChatClient_t792052210 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatClient::set_UserId(System.String)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_set_UserId_m2079859072 (ChatClient_t792052210 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_m350283068 (Nullable_1_t378540539 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t378540539 *, const RuntimeMethod*))Nullable_1_get_HasValue_m350283068_gshared)(__this, method);
}
// !0 System.Nullable`1<System.Int32>::get_Value()
inline int32_t Nullable_1_get_Value_m745926140 (Nullable_1_t378540539 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t378540539 *, const RuntimeMethod*))Nullable_1_get_Value_m745926140_gshared)(__this, method);
}
// System.Boolean Photon.Chat.ChatClient::SetOnlineStatus(System.Int32,System.Object)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_SetOnlineStatus_m1331156303 (ChatClient_t792052210 * __this, int32_t ___status0, RuntimeObject * ___message1, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m1715369213 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.String Photon.Chat.ChatClient::get_FrontendAddress()
extern "C" IL2CPP_METHOD_ATTR String_t* ChatClient_get_FrontendAddress_m1428612293 (ChatClient_t792052210 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChatChannel::get_PublishSubscribers()
extern "C" IL2CPP_METHOD_ATTR bool ChatChannel_get_PublishSubscribers_m807584822 (ChatChannel_t2318116909 * __this, const RuntimeMethod* method);
// System.Int32 Photon.Chat.ChatChannel::get_MaxSubscribers()
extern "C" IL2CPP_METHOD_ATTR int32_t ChatChannel_get_MaxSubscribers_m1081428401 (ChatChannel_t2318116909 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.HashSet`1<System.String>::get_Count()
inline int32_t HashSet_1_get_Count_m2534887753 (HashSet_1_t412400163 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t412400163 *, const RuntimeMethod*))HashSet_1_get_Count_m542532379_gshared)(__this, method);
}
// System.Int32 Photon.Chat.ChannelCreationOptions::get_MaxSubscribers()
extern "C" IL2CPP_METHOD_ATTR int32_t ChannelCreationOptions_get_MaxSubscribers_m1309351586 (ChannelCreationOptions_t3966585929 * __this, const RuntimeMethod* method);
// System.Boolean Photon.Chat.ChannelCreationOptions::get_PublishSubscribers()
extern "C" IL2CPP_METHOD_ATTR bool ChannelCreationOptions_get_PublishSubscribers_m1984572140 (ChannelCreationOptions_t3966585929 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
inline void Dictionary_2__ctor_m518943619 (Dictionary_2_t132545152 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t132545152 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method);
}
// System.Void ExitGames.Client.Photon.PhotonPeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener,ExitGames.Client.Photon.ConnectionProtocol)
extern "C" IL2CPP_METHOD_ATTR void PhotonPeer__ctor_m2655503375 (PhotonPeer_t1608153861 * __this, RuntimeObject* p0, uint8_t p1, const RuntimeMethod* method);
// System.Void Photon.Chat.ChatPeer::ConfigUnitySockets()
extern "C" IL2CPP_METHOD_ATTR void ChatPeer_ConfigUnitySockets_m2453888391 (ChatPeer_t3366739368 * __this, const RuntimeMethod* method);
// System.String Photon.Chat.ChatPeer::GetNameServerAddress()
extern "C" IL2CPP_METHOD_ATTR String_t* ChatPeer_GetNameServerAddress_m3745425589 (ChatPeer_t3366739368 * __this, const RuntimeMethod* method);
// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::get_UsedProtocol()
extern "C" IL2CPP_METHOD_ATTR uint8_t PhotonPeer_get_UsedProtocol_m1797930742 (PhotonPeer_t1608153861 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetType(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetType_m3605423543 (RuntimeObject * __this /* static, unused */, String_t* p0, bool p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m1740559187 (Dictionary_2_t1253839074 * __this, uint8_t p0, Type_t * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1253839074 *, uint8_t, Type_t *, const RuntimeMethod*))Dictionary_2_set_Item_m2689672840_gshared)(__this, p0, p1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m1868025697 (Dictionary_2_t1720840067 * __this, uint8_t p0, int32_t* p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1720840067 *, uint8_t, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m1868025697_gshared)(__this, p0, p1, method);
}
// System.Void System.ArgumentOutOfRangeException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m2047740448 (ArgumentOutOfRangeException_t777629997 * __this, const RuntimeMethod* method);
// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PhotonPeer::get_Listener()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* PhotonPeer_get_Listener_m959611216 (PhotonPeer_t1608153861 * __this, const RuntimeMethod* method);
// Photon.Chat.CustomAuthenticationType Photon.Chat.AuthenticationValues::get_AuthType()
extern "C" IL2CPP_METHOD_ATTR uint8_t AuthenticationValues_get_AuthType_m861350032 (AuthenticationValues_t563695058 * __this, const RuntimeMethod* method);
// System.Object Photon.Chat.AuthenticationValues::get_AuthPostData()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * AuthenticationValues_get_AuthPostData_m2639848445 (AuthenticationValues_t563695058 * __this, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.PhotonPeer::get_IsEncryptionAvailable()
extern "C" IL2CPP_METHOD_ATTR bool PhotonPeer_get_IsEncryptionAvailable_m3866547401 (PhotonPeer_t1608153861 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::.ctor()
inline void Dictionary_2__ctor_m4121386254 (Dictionary_2_t1720840067 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1720840067 *, const RuntimeMethod*))Dictionary_2__ctor_m4121386254_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::Add(!0,!1)
inline void Dictionary_2_Add_m3596676840 (Dictionary_2_t1720840067 * __this, uint8_t p0, int32_t p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1720840067 *, uint8_t, int32_t, const RuntimeMethod*))Dictionary_2_Add_m3596676840_gshared)(__this, p0, p1, method);
}
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
// System.Void Photon.Chat.AuthenticationValues::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AuthenticationValues__ctor_m2748796689 (AuthenticationValues_t563695058 * __this, const RuntimeMethod* method)
{
	{
		__this->set_authType_0(((int32_t)255));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.Chat.AuthenticationValues::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void AuthenticationValues__ctor_m1943414358 (AuthenticationValues_t563695058 * __this, String_t* ___userId0, const RuntimeMethod* method)
{
	{
		__this->set_authType_0(((int32_t)255));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___userId0;
		AuthenticationValues_set_UserId_m3714069592(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// Photon.Chat.CustomAuthenticationType Photon.Chat.AuthenticationValues::get_AuthType()
extern "C" IL2CPP_METHOD_ATTR uint8_t AuthenticationValues_get_AuthType_m861350032 (AuthenticationValues_t563695058 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_authType_0();
		return L_0;
	}
}
// System.Void Photon.Chat.AuthenticationValues::set_AuthType(Photon.Chat.CustomAuthenticationType)
extern "C" IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthType_m3303852870 (AuthenticationValues_t563695058 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___value0;
		__this->set_authType_0(L_0);
		return;
	}
}
// System.String Photon.Chat.AuthenticationValues::get_AuthGetParameters()
extern "C" IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_AuthGetParameters_m295365972 (AuthenticationValues_t563695058 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CAuthGetParametersU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Photon.Chat.AuthenticationValues::set_AuthGetParameters(System.String)
extern "C" IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthGetParameters_m1387510306 (AuthenticationValues_t563695058 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CAuthGetParametersU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Object Photon.Chat.AuthenticationValues::get_AuthPostData()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * AuthenticationValues_get_AuthPostData_m2639848445 (AuthenticationValues_t563695058 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CAuthPostDataU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Photon.Chat.AuthenticationValues::set_AuthPostData(System.Object)
extern "C" IL2CPP_METHOD_ATTR void AuthenticationValues_set_AuthPostData_m3305014939 (AuthenticationValues_t563695058 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CAuthPostDataU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String Photon.Chat.AuthenticationValues::get_Token()
extern "C" IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_Token_m4283956602 (AuthenticationValues_t563695058 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CTokenU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Photon.Chat.AuthenticationValues::set_Token(System.String)
extern "C" IL2CPP_METHOD_ATTR void AuthenticationValues_set_Token_m1158506906 (AuthenticationValues_t563695058 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CTokenU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.String Photon.Chat.AuthenticationValues::get_UserId()
extern "C" IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_UserId_m2010043280 (AuthenticationValues_t563695058 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CUserIdU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Photon.Chat.AuthenticationValues::set_UserId(System.String)
extern "C" IL2CPP_METHOD_ATTR void AuthenticationValues_set_UserId_m3714069592 (AuthenticationValues_t563695058 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CUserIdU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void Photon.Chat.AuthenticationValues::SetAuthPostData(System.String)
extern "C" IL2CPP_METHOD_ATTR void AuthenticationValues_SetAuthPostData_m2237037434 (AuthenticationValues_t563695058 * __this, String_t* ___stringData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AuthenticationValues_SetAuthPostData_m2237037434_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AuthenticationValues_t563695058 * G_B2_0 = NULL;
	AuthenticationValues_t563695058 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	AuthenticationValues_t563695058 * G_B3_1 = NULL;
	{
		String_t* L_0 = ___stringData0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (!L_1)
		{
			G_B2_0 = __this;
			goto IL_0012;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_0;
		goto IL_0013;
	}

IL_0012:
	{
		String_t* L_2 = ___stringData0;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0013:
	{
		NullCheck(G_B3_1);
		AuthenticationValues_set_AuthPostData_m3305014939(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.Chat.AuthenticationValues::SetAuthPostData(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void AuthenticationValues_SetAuthPostData_m1751663458 (AuthenticationValues_t563695058 * __this, ByteU5BU5D_t4116647657* ___byteData0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ___byteData0;
		AuthenticationValues_set_AuthPostData_m3305014939(__this, (RuntimeObject *)(RuntimeObject *)L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.Chat.AuthenticationValues::AddAuthParameter(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void AuthenticationValues_AddAuthParameter_m2613830495 (AuthenticationValues_t563695058 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AuthenticationValues_AddAuthParameter_m2613830495_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		String_t* L_0 = AuthenticationValues_get_AuthGetParameters_m295365972(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_2;
		goto IL_001f;
	}

IL_001a:
	{
		G_B3_0 = _stringLiteral3452614522;
	}

IL_001f:
	{
		V_0 = G_B3_0;
		ObjectU5BU5D_t2843939325* L_3 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t2843939325* L_4 = L_3;
		String_t* L_5 = AuthenticationValues_get_AuthGetParameters_m295365972(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_5);
		ObjectU5BU5D_t2843939325* L_6 = L_4;
		String_t* L_7 = V_0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_t2843939325* L_8 = L_6;
		String_t* L_9 = ___key0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t100236324_il2cpp_TypeInfo_var);
		String_t* L_10 = Uri_EscapeDataString_m2743853427(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_10);
		ObjectU5BU5D_t2843939325* L_11 = L_8;
		String_t* L_12 = ___value1;
		String_t* L_13 = Uri_EscapeDataString_m2743853427(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_13);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Format_m630303134(NULL /*static, unused*/, _stringLiteral2689392426, L_11, /*hidden argument*/NULL);
		AuthenticationValues_set_AuthGetParameters_m1387510306(__this, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.String Photon.Chat.AuthenticationValues::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* AuthenticationValues_ToString_m3100977850 (AuthenticationValues_t563695058 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AuthenticationValues_ToString_m3100977850_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = AuthenticationValues_get_UserId_m2010043280(__this, /*hidden argument*/NULL);
		String_t* L_1 = AuthenticationValues_get_AuthGetParameters_m295365972(__this, /*hidden argument*/NULL);
		String_t* L_2 = AuthenticationValues_get_Token_m4283956602(__this, /*hidden argument*/NULL);
		bool L_3 = ((bool)((((int32_t)((((RuntimeObject*)(String_t*)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0));
		RuntimeObject * L_4 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Format_m3339413201(NULL /*static, unused*/, _stringLiteral2284636894, L_0, L_1, L_4, /*hidden argument*/NULL);
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
// System.Void Photon.Chat.ChannelCreationOptions::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ChannelCreationOptions__ctor_m3524302159 (ChannelCreationOptions_t3966585929 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Photon.Chat.ChannelCreationOptions::get_PublishSubscribers()
extern "C" IL2CPP_METHOD_ATTR bool ChannelCreationOptions_get_PublishSubscribers_m1984572140 (ChannelCreationOptions_t3966585929 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CPublishSubscribersU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Photon.Chat.ChannelCreationOptions::set_PublishSubscribers(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ChannelCreationOptions_set_PublishSubscribers_m3764896007 (ChannelCreationOptions_t3966585929 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CPublishSubscribersU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Int32 Photon.Chat.ChannelCreationOptions::get_MaxSubscribers()
extern "C" IL2CPP_METHOD_ATTR int32_t ChannelCreationOptions_get_MaxSubscribers_m1309351586 (ChannelCreationOptions_t3966585929 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CMaxSubscribersU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Photon.Chat.ChannelCreationOptions::set_MaxSubscribers(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ChannelCreationOptions_set_MaxSubscribers_m3364423482 (ChannelCreationOptions_t3966585929 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CMaxSubscribersU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void Photon.Chat.ChannelCreationOptions::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ChannelCreationOptions__cctor_m227665183 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChannelCreationOptions__cctor_m227665183_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ChannelCreationOptions_t3966585929 * L_0 = (ChannelCreationOptions_t3966585929 *)il2cpp_codegen_object_new(ChannelCreationOptions_t3966585929_il2cpp_TypeInfo_var);
		ChannelCreationOptions__ctor_m3524302159(L_0, /*hidden argument*/NULL);
		((ChannelCreationOptions_t3966585929_StaticFields*)il2cpp_codegen_static_fields_for(ChannelCreationOptions_t3966585929_il2cpp_TypeInfo_var))->set_Default_0(L_0);
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
// System.Void Photon.Chat.ChannelWellKnownProperties::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ChannelWellKnownProperties__ctor_m2074130690 (ChannelWellKnownProperties_t1685516945 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void Photon.Chat.ChatChannel::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ChatChannel__ctor_m3846381778 (ChatChannel_t2318116909 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatChannel__ctor_m3846381778_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3319525431 * L_0 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_0, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		__this->set_Senders_1(L_0);
		List_1_t257213610 * L_1 = (List_1_t257213610 *)il2cpp_codegen_object_new(List_1_t257213610_il2cpp_TypeInfo_var);
		List_1__ctor_m2321703786(L_1, /*hidden argument*/List_1__ctor_m2321703786_RuntimeMethod_var);
		__this->set_Messages_2(L_1);
		HashSet_1_t412400163 * L_2 = (HashSet_1_t412400163 *)il2cpp_codegen_object_new(HashSet_1_t412400163_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m3545045958(L_2, /*hidden argument*/HashSet_1__ctor_m3545045958_RuntimeMethod_var);
		__this->set_Subscribers_9(L_2);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_3 = ___name0;
		__this->set_Name_0(L_3);
		return;
	}
}
// System.Boolean Photon.Chat.ChatChannel::get_IsPrivate()
extern "C" IL2CPP_METHOD_ATTR bool ChatChannel_get_IsPrivate_m2713845955 (ChatChannel_t2318116909 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIsPrivateU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatChannel::set_IsPrivate(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ChatChannel_set_IsPrivate_m1369826006 (ChatChannel_t2318116909 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CIsPrivateU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Int32 Photon.Chat.ChatChannel::get_MessageCount()
extern "C" IL2CPP_METHOD_ATTR int32_t ChatChannel_get_MessageCount_m1928338805 (ChatChannel_t2318116909 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatChannel_get_MessageCount_m1928338805_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t257213610 * L_0 = __this->get_Messages_2();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m2934127733(L_0, /*hidden argument*/List_1_get_Count_m2934127733_RuntimeMethod_var);
		return L_1;
	}
}
// System.Int32 Photon.Chat.ChatChannel::get_LastMsgId()
extern "C" IL2CPP_METHOD_ATTR int32_t ChatChannel_get_LastMsgId_m1664243507 (ChatChannel_t2318116909 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CLastMsgIdU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatChannel::set_LastMsgId(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ChatChannel_set_LastMsgId_m1760046399 (ChatChannel_t2318116909 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CLastMsgIdU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Boolean Photon.Chat.ChatChannel::get_PublishSubscribers()
extern "C" IL2CPP_METHOD_ATTR bool ChatChannel_get_PublishSubscribers_m807584822 (ChatChannel_t2318116909 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CPublishSubscribersU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatChannel::set_PublishSubscribers(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ChatChannel_set_PublishSubscribers_m404676658 (ChatChannel_t2318116909 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CPublishSubscribersU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Int32 Photon.Chat.ChatChannel::get_MaxSubscribers()
extern "C" IL2CPP_METHOD_ATTR int32_t ChatChannel_get_MaxSubscribers_m1081428401 (ChatChannel_t2318116909 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CMaxSubscribersU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatChannel::set_MaxSubscribers(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ChatChannel_set_MaxSubscribers_m1105929256 (ChatChannel_t2318116909 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CMaxSubscribersU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void Photon.Chat.ChatChannel::Add(System.String,System.Object,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ChatChannel_Add_m3763665981 (ChatChannel_t2318116909 * __this, String_t* ___sender0, RuntimeObject * ___message1, int32_t ___msgId2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatChannel_Add_m3763665981_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3319525431 * L_0 = __this->get_Senders_1();
		String_t* L_1 = ___sender0;
		NullCheck(L_0);
		List_1_Add_m1685793073(L_0, L_1, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
		List_1_t257213610 * L_2 = __this->get_Messages_2();
		RuntimeObject * L_3 = ___message1;
		NullCheck(L_2);
		List_1_Add_m3338814081(L_2, L_3, /*hidden argument*/List_1_Add_m3338814081_RuntimeMethod_var);
		int32_t L_4 = ___msgId2;
		ChatChannel_set_LastMsgId_m1760046399(__this, L_4, /*hidden argument*/NULL);
		ChatChannel_TruncateMessages_m2016570193(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.Chat.ChatChannel::Add(System.String[],System.Object[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ChatChannel_Add_m1329789613 (ChatChannel_t2318116909 * __this, StringU5BU5D_t1281789340* ___senders0, ObjectU5BU5D_t2843939325* ___messages1, int32_t ___lastMsgId2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatChannel_Add_m1329789613_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3319525431 * L_0 = __this->get_Senders_1();
		StringU5BU5D_t1281789340* L_1 = ___senders0;
		NullCheck(L_0);
		List_1_AddRange_m3811851160(L_0, (RuntimeObject*)(RuntimeObject*)L_1, /*hidden argument*/List_1_AddRange_m3811851160_RuntimeMethod_var);
		List_1_t257213610 * L_2 = __this->get_Messages_2();
		ObjectU5BU5D_t2843939325* L_3 = ___messages1;
		NullCheck(L_2);
		List_1_AddRange_m3709462088(L_2, (RuntimeObject*)(RuntimeObject*)L_3, /*hidden argument*/List_1_AddRange_m3709462088_RuntimeMethod_var);
		int32_t L_4 = ___lastMsgId2;
		ChatChannel_set_LastMsgId_m1760046399(__this, L_4, /*hidden argument*/NULL);
		ChatChannel_TruncateMessages_m2016570193(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Photon.Chat.ChatChannel::TruncateMessages()
extern "C" IL2CPP_METHOD_ATTR void ChatChannel_TruncateMessages_m2016570193 (ChatChannel_t2318116909 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatChannel_TruncateMessages_m2016570193_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_MessageLimit_3();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		List_1_t257213610 * L_1 = __this->get_Messages_2();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m2934127733(L_1, /*hidden argument*/List_1_get_Count_m2934127733_RuntimeMethod_var);
		int32_t L_3 = __this->get_MessageLimit_3();
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0023;
		}
	}

IL_0022:
	{
		return;
	}

IL_0023:
	{
		List_1_t257213610 * L_4 = __this->get_Messages_2();
		NullCheck(L_4);
		int32_t L_5 = List_1_get_Count_m2934127733(L_4, /*hidden argument*/List_1_get_Count_m2934127733_RuntimeMethod_var);
		int32_t L_6 = __this->get_MessageLimit_3();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_6));
		List_1_t3319525431 * L_7 = __this->get_Senders_1();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		List_1_RemoveRange_m1512601996(L_7, 0, L_8, /*hidden argument*/List_1_RemoveRange_m1512601996_RuntimeMethod_var);
		List_1_t257213610 * L_9 = __this->get_Messages_2();
		int32_t L_10 = V_0;
		NullCheck(L_9);
		List_1_RemoveRange_m962977191(L_9, 0, L_10, /*hidden argument*/List_1_RemoveRange_m962977191_RuntimeMethod_var);
		return;
	}
}
// System.Void Photon.Chat.ChatChannel::ClearMessages()
extern "C" IL2CPP_METHOD_ATTR void ChatChannel_ClearMessages_m1790333094 (ChatChannel_t2318116909 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatChannel_ClearMessages_m1790333094_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3319525431 * L_0 = __this->get_Senders_1();
		NullCheck(L_0);
		List_1_Clear_m2233494194(L_0, /*hidden argument*/List_1_Clear_m2233494194_RuntimeMethod_var);
		List_1_t257213610 * L_1 = __this->get_Messages_2();
		NullCheck(L_1);
		List_1_Clear_m3697625829(L_1, /*hidden argument*/List_1_Clear_m3697625829_RuntimeMethod_var);
		return;
	}
}
// System.String Photon.Chat.ChatChannel::ToStringMessages()
extern "C" IL2CPP_METHOD_ATTR String_t* ChatChannel_ToStringMessages_m2079644288 (ChatChannel_t2318116909 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatChannel_ToStringMessages_m2079644288_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_003a;
	}

IL_000d:
	{
		StringBuilder_t * L_1 = V_0;
		List_1_t3319525431 * L_2 = __this->get_Senders_1();
		int32_t L_3 = V_1;
		NullCheck(L_2);
		String_t* L_4 = List_1_get_Item_m1991961783(L_2, L_3, /*hidden argument*/List_1_get_Item_m1991961783_RuntimeMethod_var);
		List_1_t257213610 * L_5 = __this->get_Messages_2();
		int32_t L_6 = V_1;
		NullCheck(L_5);
		RuntimeObject * L_7 = List_1_get_Item_m2287542950(L_5, L_6, /*hidden argument*/List_1_get_Item_m2287542950_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral1192492663, L_4, L_7, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_AppendLine_m1438862993(L_1, L_8, /*hidden argument*/NULL);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_003a:
	{
		int32_t L_10 = V_1;
		List_1_t257213610 * L_11 = __this->get_Messages_2();
		NullCheck(L_11);
		int32_t L_12 = List_1_get_Count_m2934127733(L_11, /*hidden argument*/List_1_get_Count_m2934127733_RuntimeMethod_var);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_000d;
		}
	}
	{
		StringBuilder_t * L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		return L_14;
	}
}
// System.Void Photon.Chat.ChatChannel::ReadProperties(System.Collections.Generic.Dictionary`2<System.Object,System.Object>)
extern "C" IL2CPP_METHOD_ATTR void ChatChannel_ReadProperties_m768176894 (ChatChannel_t2318116909 * __this, Dictionary_2_t132545152 * ___newProperties0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatChannel_ReadProperties_m768176894_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Enumerator_t314722136  V_1;
	memset(&V_1, 0, sizeof(V_1));
	RuntimeObject * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t132545152 * L_0 = ___newProperties0;
		if (!L_0)
		{
			goto IL_00f8;
		}
	}
	{
		Dictionary_2_t132545152 * L_1 = ___newProperties0;
		NullCheck(L_1);
		int32_t L_2 = Dictionary_2_get_Count_m3151171942(L_1, /*hidden argument*/Dictionary_2_get_Count_m3151171942_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_00f8;
		}
	}
	{
		Dictionary_2_t132545152 * L_3 = __this->get_properties_6();
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		Dictionary_2_t132545152 * L_4 = ___newProperties0;
		NullCheck(L_4);
		int32_t L_5 = Dictionary_2_get_Count_m3151171942(L_4, /*hidden argument*/Dictionary_2_get_Count_m3151171942_RuntimeMethod_var);
		Dictionary_2_t132545152 * L_6 = (Dictionary_2_t132545152 *)il2cpp_codegen_object_new(Dictionary_2_t132545152_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m458397011(L_6, L_5, /*hidden argument*/Dictionary_2__ctor_m458397011_RuntimeMethod_var);
		__this->set_properties_6(L_6);
	}

IL_002e:
	{
		Dictionary_2_t132545152 * L_7 = ___newProperties0;
		NullCheck(L_7);
		KeyCollection_t322220623 * L_8 = Dictionary_2_get_Keys_m1609554139(L_7, /*hidden argument*/Dictionary_2_get_Keys_m1609554139_RuntimeMethod_var);
		NullCheck(L_8);
		Enumerator_t314722136  L_9 = KeyCollection_GetEnumerator_m3395243744(L_8, /*hidden argument*/KeyCollection_GetEnumerator_m3395243744_RuntimeMethod_var);
		V_1 = L_9;
	}

IL_003a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0089;
		}

IL_003f:
		{
			RuntimeObject * L_10 = Enumerator_get_Current_m437256991((Enumerator_t314722136 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m437256991_RuntimeMethod_var);
			V_0 = L_10;
			Dictionary_2_t132545152 * L_11 = ___newProperties0;
			RuntimeObject * L_12 = V_0;
			NullCheck(L_11);
			RuntimeObject * L_13 = Dictionary_2_get_Item_m2866271333(L_11, L_12, /*hidden argument*/Dictionary_2_get_Item_m2866271333_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_0076;
			}
		}

IL_0053:
		{
			Dictionary_2_t132545152 * L_14 = __this->get_properties_6();
			RuntimeObject * L_15 = V_0;
			NullCheck(L_14);
			bool L_16 = Dictionary_2_ContainsKey_m2278349286(L_14, L_15, /*hidden argument*/Dictionary_2_ContainsKey_m2278349286_RuntimeMethod_var);
			if (!L_16)
			{
				goto IL_0071;
			}
		}

IL_0064:
		{
			Dictionary_2_t132545152 * L_17 = __this->get_properties_6();
			RuntimeObject * L_18 = V_0;
			NullCheck(L_17);
			Dictionary_2_Remove_m4038518975(L_17, L_18, /*hidden argument*/Dictionary_2_Remove_m4038518975_RuntimeMethod_var);
		}

IL_0071:
		{
			goto IL_0089;
		}

IL_0076:
		{
			Dictionary_2_t132545152 * L_19 = __this->get_properties_6();
			RuntimeObject * L_20 = V_0;
			Dictionary_2_t132545152 * L_21 = ___newProperties0;
			RuntimeObject * L_22 = V_0;
			NullCheck(L_21);
			RuntimeObject * L_23 = Dictionary_2_get_Item_m2866271333(L_21, L_22, /*hidden argument*/Dictionary_2_get_Item_m2866271333_RuntimeMethod_var);
			NullCheck(L_19);
			Dictionary_2_set_Item_m119570864(L_19, L_20, L_23, /*hidden argument*/Dictionary_2_set_Item_m119570864_RuntimeMethod_var);
		}

IL_0089:
		{
			bool L_24 = Enumerator_MoveNext_m1668845840((Enumerator_t314722136 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m1668845840_RuntimeMethod_var);
			if (L_24)
			{
				goto IL_003f;
			}
		}

IL_0095:
		{
			IL2CPP_LEAVE(0xA8, FINALLY_009a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009a;
	}

FINALLY_009a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m260444170((Enumerator_t314722136 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m260444170_RuntimeMethod_var);
		IL2CPP_END_FINALLY(154)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(154)
	{
		IL2CPP_JUMP_TBL(0xA8, IL_00a8)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00a8:
	{
		Dictionary_2_t132545152 * L_25 = __this->get_properties_6();
		uint8_t L_26 = ((uint8_t)((int32_t)254));
		RuntimeObject * L_27 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_25);
		bool L_28 = Dictionary_2_TryGetValue_m3280774074(L_25, L_27, (RuntimeObject **)(&V_2), /*hidden argument*/Dictionary_2_TryGetValue_m3280774074_RuntimeMethod_var);
		if (!L_28)
		{
			goto IL_00d0;
		}
	}
	{
		RuntimeObject * L_29 = V_2;
		ChatChannel_set_PublishSubscribers_m404676658(__this, ((*(bool*)((bool*)UnBox(L_29, Boolean_t97287965_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
	}

IL_00d0:
	{
		Dictionary_2_t132545152 * L_30 = __this->get_properties_6();
		uint8_t L_31 = ((uint8_t)((int32_t)255));
		RuntimeObject * L_32 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_31);
		NullCheck(L_30);
		bool L_33 = Dictionary_2_TryGetValue_m3280774074(L_30, L_32, (RuntimeObject **)(&V_2), /*hidden argument*/Dictionary_2_TryGetValue_m3280774074_RuntimeMethod_var);
		if (!L_33)
		{
			goto IL_00f8;
		}
	}
	{
		RuntimeObject * L_34 = V_2;
		ChatChannel_set_MaxSubscribers_m1105929256(__this, ((*(int32_t*)((int32_t*)UnBox(L_34, Int32_t2950945753_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
	}

IL_00f8:
	{
		return;
	}
}
// System.Void Photon.Chat.ChatChannel::AddSubscribers(System.String[])
extern "C" IL2CPP_METHOD_ATTR void ChatChannel_AddSubscribers_m4115425855 (ChatChannel_t2318116909 * __this, StringU5BU5D_t1281789340* ___users0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatChannel_AddSubscribers_m4115425855_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		StringU5BU5D_t1281789340* L_0 = ___users0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		V_0 = 0;
		goto IL_0021;
	}

IL_000e:
	{
		HashSet_1_t412400163 * L_1 = __this->get_Subscribers_9();
		StringU5BU5D_t1281789340* L_2 = ___users0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_1);
		HashSet_1_Add_m2788916881(L_1, L_5, /*hidden argument*/HashSet_1_Add_m2788916881_RuntimeMethod_var);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		StringU5BU5D_t1281789340* L_8 = ___users0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
// System.Void Photon.Chat.ChatChannel::ClearProperties()
extern "C" IL2CPP_METHOD_ATTR void ChatChannel_ClearProperties_m937654232 (ChatChannel_t2318116909 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatChannel_ClearProperties_m937654232_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t132545152 * L_0 = __this->get_properties_6();
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		Dictionary_2_t132545152 * L_1 = __this->get_properties_6();
		NullCheck(L_1);
		int32_t L_2 = Dictionary_2_get_Count_m3151171942(L_1, /*hidden argument*/Dictionary_2_get_Count_m3151171942_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		Dictionary_2_t132545152 * L_3 = __this->get_properties_6();
		NullCheck(L_3);
		Dictionary_2_Clear_m3958962755(L_3, /*hidden argument*/Dictionary_2_Clear_m3958962755_RuntimeMethod_var);
	}

IL_0027:
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
// System.Void Photon.Chat.ChatClient::.ctor(Photon.Chat.IChatClientListener,ExitGames.Client.Photon.ConnectionProtocol)
extern "C" IL2CPP_METHOD_ATTR void ChatClient__ctor_m95262399 (ChatClient_t792052210 * __this, RuntimeObject* ___listener0, uint8_t ___protocol1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient__ctor_m95262399_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_chatRegion_4(_stringLiteral3457529819);
		__this->set_msDeltaForServiceCalls_20(((int32_t)50));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___listener0;
		__this->set_listener_14(L_0);
		ChatClient_set_State_m3825103917(__this, 0, /*hidden argument*/NULL);
		uint8_t L_1 = ___protocol1;
		ChatPeer_t3366739368 * L_2 = (ChatPeer_t3366739368 *)il2cpp_codegen_object_new(ChatPeer_t3366739368_il2cpp_TypeInfo_var);
		ChatPeer__ctor_m3747547441(L_2, __this, L_1, /*hidden argument*/NULL);
		__this->set_chatPeer_15(L_2);
		ChatPeer_t3366739368 * L_3 = __this->get_chatPeer_15();
		NullCheck(L_3);
		PhotonPeer_set_SerializationProtocolType_m713649605(L_3, 1, /*hidden argument*/NULL);
		Dictionary_2_t2103373208 * L_4 = (Dictionary_2_t2103373208 *)il2cpp_codegen_object_new(Dictionary_2_t2103373208_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m222067789(L_4, /*hidden argument*/Dictionary_2__ctor_m222067789_RuntimeMethod_var);
		__this->set_PublicChannels_11(L_4);
		Dictionary_2_t2103373208 * L_5 = (Dictionary_2_t2103373208 *)il2cpp_codegen_object_new(Dictionary_2_t2103373208_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m222067789(L_5, /*hidden argument*/Dictionary_2__ctor_m222067789_RuntimeMethod_var);
		__this->set_PrivateChannels_12(L_5);
		HashSet_1_t412400163 * L_6 = (HashSet_1_t412400163 *)il2cpp_codegen_object_new(HashSet_1_t412400163_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m3545045958(L_6, /*hidden argument*/HashSet_1__ctor_m3545045958_RuntimeMethod_var);
		__this->set_PublicChannelsUnsubscribing_13(L_6);
		return;
	}
}
// System.String Photon.Chat.ChatClient::get_NameServerAddress()
extern "C" IL2CPP_METHOD_ATTR String_t* ChatClient_get_NameServerAddress_m3634087201 (ChatClient_t792052210 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CNameServerAddressU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_NameServerAddress(System.String)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_set_NameServerAddress_m2434354289 (ChatClient_t792052210 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CNameServerAddressU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String Photon.Chat.ChatClient::get_FrontendAddress()
extern "C" IL2CPP_METHOD_ATTR String_t* ChatClient_get_FrontendAddress_m1428612293 (ChatClient_t792052210 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CFrontendAddressU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_FrontendAddress(System.String)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_set_FrontendAddress_m2203636551 (ChatClient_t792052210 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CFrontendAddressU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.String Photon.Chat.ChatClient::get_ChatRegion()
extern "C" IL2CPP_METHOD_ATTR String_t* ChatClient_get_ChatRegion_m1287176371 (ChatClient_t792052210 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_chatRegion_4();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_ChatRegion(System.String)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_set_ChatRegion_m679067799 (ChatClient_t792052210 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_chatRegion_4(L_0);
		return;
	}
}
// Photon.Chat.ChatState Photon.Chat.ChatClient::get_State()
extern "C" IL2CPP_METHOD_ATTR int32_t ChatClient_get_State_m779190608 (ChatClient_t792052210 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CStateU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_State(Photon.Chat.ChatState)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_set_State_m3825103917 (ChatClient_t792052210 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_5(L_0);
		return;
	}
}
// Photon.Chat.ChatDisconnectCause Photon.Chat.ChatClient::get_DisconnectedCause()
extern "C" IL2CPP_METHOD_ATTR int32_t ChatClient_get_DisconnectedCause_m3544731633 (ChatClient_t792052210 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CDisconnectedCauseU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_DisconnectedCause(Photon.Chat.ChatDisconnectCause)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_set_DisconnectedCause_m1169307040 (ChatClient_t792052210 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CDisconnectedCauseU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::get_CanChat()
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_get_CanChat_m2766175627 (ChatClient_t792052210 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ChatClient_get_State_m779190608(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)7))))
		{
			goto IL_0014;
		}
	}
	{
		bool L_1 = ChatClient_get_HasPeer_m3489806430(__this, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean Photon.Chat.ChatClient::CanChatInChannel(System.String)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_CanChatInChannel_m1567266562 (ChatClient_t792052210 * __this, String_t* ___channelName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_CanChatInChannel_m1567266562_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B4_0 = 0;
	{
		bool L_0 = ChatClient_get_CanChat_m2766175627(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		Dictionary_2_t2103373208 * L_1 = __this->get_PublicChannels_11();
		String_t* L_2 = ___channelName0;
		NullCheck(L_1);
		bool L_3 = Dictionary_2_ContainsKey_m3977234279(L_1, L_2, /*hidden argument*/Dictionary_2_ContainsKey_m3977234279_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		HashSet_1_t412400163 * L_4 = __this->get_PublicChannelsUnsubscribing_13();
		String_t* L_5 = ___channelName0;
		NullCheck(L_4);
		bool L_6 = HashSet_1_Contains_m1455301816(L_4, L_5, /*hidden argument*/HashSet_1_Contains_m1455301816_RuntimeMethod_var);
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B4_0 = 0;
	}

IL_002e:
	{
		return (bool)G_B4_0;
	}
}
// System.Boolean Photon.Chat.ChatClient::get_HasPeer()
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_get_HasPeer_m3489806430 (ChatClient_t792052210 * __this, const RuntimeMethod* method)
{
	{
		ChatPeer_t3366739368 * L_0 = __this->get_chatPeer_15();
		return (bool)((((int32_t)((((RuntimeObject*)(ChatPeer_t3366739368 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.String Photon.Chat.ChatClient::get_AppVersion()
extern "C" IL2CPP_METHOD_ATTR String_t* ChatClient_get_AppVersion_m855597901 (ChatClient_t792052210 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CAppVersionU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_AppVersion(System.String)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_set_AppVersion_m2570860372 (ChatClient_t792052210 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CAppVersionU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.String Photon.Chat.ChatClient::get_AppId()
extern "C" IL2CPP_METHOD_ATTR String_t* ChatClient_get_AppId_m2045180326 (ChatClient_t792052210 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CAppIdU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_AppId(System.String)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_set_AppId_m3473508305 (ChatClient_t792052210 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CAppIdU3Ek__BackingField_8(L_0);
		return;
	}
}
// Photon.Chat.AuthenticationValues Photon.Chat.ChatClient::get_AuthValues()
extern "C" IL2CPP_METHOD_ATTR AuthenticationValues_t563695058 * ChatClient_get_AuthValues_m1343650260 (ChatClient_t792052210 * __this, const RuntimeMethod* method)
{
	{
		AuthenticationValues_t563695058 * L_0 = __this->get_U3CAuthValuesU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_AuthValues(Photon.Chat.AuthenticationValues)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_set_AuthValues_m2891279403 (ChatClient_t792052210 * __this, AuthenticationValues_t563695058 * ___value0, const RuntimeMethod* method)
{
	{
		AuthenticationValues_t563695058 * L_0 = ___value0;
		__this->set_U3CAuthValuesU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.String Photon.Chat.ChatClient::get_UserId()
extern "C" IL2CPP_METHOD_ATTR String_t* ChatClient_get_UserId_m1614431305 (ChatClient_t792052210 * __this, const RuntimeMethod* method)
{
	String_t* G_B3_0 = NULL;
	{
		AuthenticationValues_t563695058 * L_0 = ChatClient_get_AuthValues_m1343650260(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		AuthenticationValues_t563695058 * L_1 = ChatClient_get_AuthValues_m1343650260(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = AuthenticationValues_get_UserId_m2010043280(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = ((String_t*)(NULL));
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_UserId(System.String)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_set_UserId_m2079859072 (ChatClient_t792052210 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_set_UserId_m2079859072_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AuthenticationValues_t563695058 * L_0 = ChatClient_get_AuthValues_m1343650260(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		AuthenticationValues_t563695058 * L_1 = (AuthenticationValues_t563695058 *)il2cpp_codegen_object_new(AuthenticationValues_t563695058_il2cpp_TypeInfo_var);
		AuthenticationValues__ctor_m2748796689(L_1, /*hidden argument*/NULL);
		ChatClient_set_AuthValues_m2891279403(__this, L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		AuthenticationValues_t563695058 * L_2 = ChatClient_get_AuthValues_m1343650260(__this, /*hidden argument*/NULL);
		String_t* L_3 = ___value0;
		NullCheck(L_2);
		AuthenticationValues_set_UserId_m3714069592(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::get_UseBackgroundWorkerForSending()
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_get_UseBackgroundWorkerForSending_m636120350 (ChatClient_t792052210 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_22();
		return L_0;
	}
}
// System.Void Photon.Chat.ChatClient::set_UseBackgroundWorkerForSending(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_set_UseBackgroundWorkerForSending_m4151500014 (ChatClient_t792052210 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CUseBackgroundWorkerForSendingU3Ek__BackingField_22(L_0);
		return;
	}
}
// ExitGames.Client.Photon.ConnectionProtocol Photon.Chat.ChatClient::get_TransportProtocol()
extern "C" IL2CPP_METHOD_ATTR uint8_t ChatClient_get_TransportProtocol_m3587369237 (ChatClient_t792052210 * __this, const RuntimeMethod* method)
{
	{
		ChatPeer_t3366739368 * L_0 = __this->get_chatPeer_15();
		NullCheck(L_0);
		uint8_t L_1 = PhotonPeer_get_TransportProtocol_m4264093347(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Photon.Chat.ChatClient::set_TransportProtocol(ExitGames.Client.Photon.ConnectionProtocol)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_set_TransportProtocol_m807312606 (ChatClient_t792052210 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_set_TransportProtocol_m807312606_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	RuntimeObject* G_B4_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	RuntimeObject* G_B3_2 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	int32_t G_B5_2 = 0;
	RuntimeObject* G_B5_3 = NULL;
	{
		ChatPeer_t3366739368 * L_0 = __this->get_chatPeer_15();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		ChatPeer_t3366739368 * L_1 = __this->get_chatPeer_15();
		NullCheck(L_1);
		uint8_t L_2 = PhotonPeer_get_PeerState_m582006767(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0061;
		}
	}

IL_001b:
	{
		RuntimeObject* L_3 = __this->get_listener_14();
		ChatPeer_t3366739368 * L_4 = __this->get_chatPeer_15();
		G_B3_0 = _stringLiteral691157034;
		G_B3_1 = 2;
		G_B3_2 = L_3;
		if (!L_4)
		{
			G_B4_0 = _stringLiteral691157034;
			G_B4_1 = 2;
			G_B4_2 = L_3;
			goto IL_0051;
		}
	}
	{
		ChatPeer_t3366739368 * L_5 = __this->get_chatPeer_15();
		NullCheck(L_5);
		uint8_t L_6 = PhotonPeer_get_PeerState_m582006767(L_5, /*hidden argument*/NULL);
		uint8_t L_7 = L_6;
		RuntimeObject * L_8 = Box(PeerStateValue_t1289417078_il2cpp_TypeInfo_var, &L_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2631299121, L_8, /*hidden argument*/NULL);
		G_B5_0 = L_9;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		G_B5_3 = G_B3_2;
		goto IL_0056;
	}

IL_0051:
	{
		G_B5_0 = _stringLiteral1116053177;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		G_B5_3 = G_B4_2;
	}

IL_0056:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m3937257545(NULL /*static, unused*/, G_B5_1, G_B5_0, /*hidden argument*/NULL);
		NullCheck(G_B5_3);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, G_B5_3, G_B5_2, L_10);
		return;
	}

IL_0061:
	{
		ChatPeer_t3366739368 * L_11 = __this->get_chatPeer_15();
		uint8_t L_12 = ___value0;
		NullCheck(L_11);
		PhotonPeer_set_TransportProtocol_m2426276397(L_11, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type> Photon.Chat.ChatClient::get_SocketImplementationConfig()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t1253839074 * ChatClient_get_SocketImplementationConfig_m2149662816 (ChatClient_t792052210 * __this, const RuntimeMethod* method)
{
	{
		ChatPeer_t3366739368 * L_0 = __this->get_chatPeer_15();
		NullCheck(L_0);
		Dictionary_2_t1253839074 * L_1 = ((PhotonPeer_t1608153861 *)L_0)->get_SocketImplementationConfig_9();
		return L_1;
	}
}
// System.Boolean Photon.Chat.ChatClient::Connect(System.String,System.String,Photon.Chat.AuthenticationValues)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_Connect_m3402282777 (ChatClient_t792052210 * __this, String_t* ___appId0, String_t* ___appVersion1, AuthenticationValues_t563695058 * ___authValues2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_Connect_m3402282777_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		ChatPeer_t3366739368 * L_0 = __this->get_chatPeer_15();
		NullCheck(L_0);
		((PhotonPeer_t1608153861 *)L_0)->set_TimePingInterval_20(((int32_t)3000));
		ChatClient_set_DisconnectedCause_m1169307040(__this, 0, /*hidden argument*/NULL);
		AuthenticationValues_t563695058 * L_1 = ___authValues2;
		ChatClient_set_AuthValues_m2891279403(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___appId0;
		ChatClient_set_AppId_m3473508305(__this, L_2, /*hidden argument*/NULL);
		String_t* L_3 = ___appVersion1;
		ChatClient_set_AppVersion_m2570860372(__this, L_3, /*hidden argument*/NULL);
		__this->set_didAuthenticate_17((bool)0);
		ChatPeer_t3366739368 * L_4 = __this->get_chatPeer_15();
		NullCheck(L_4);
		PhotonPeer_set_QuickResendAttempts_m3595969805(L_4, (uint8_t)2, /*hidden argument*/NULL);
		ChatPeer_t3366739368 * L_5 = __this->get_chatPeer_15();
		NullCheck(L_5);
		((PhotonPeer_t1608153861 *)L_5)->set_SentCountAllowance_19(7);
		Dictionary_2_t2103373208 * L_6 = __this->get_PublicChannels_11();
		NullCheck(L_6);
		Dictionary_2_Clear_m702791670(L_6, /*hidden argument*/Dictionary_2_Clear_m702791670_RuntimeMethod_var);
		Dictionary_2_t2103373208 * L_7 = __this->get_PrivateChannels_12();
		NullCheck(L_7);
		Dictionary_2_Clear_m702791670(L_7, /*hidden argument*/Dictionary_2_Clear_m702791670_RuntimeMethod_var);
		HashSet_1_t412400163 * L_8 = __this->get_PublicChannelsUnsubscribing_13();
		NullCheck(L_8);
		HashSet_1_Clear_m3342517819(L_8, /*hidden argument*/HashSet_1_Clear_m3342517819_RuntimeMethod_var);
		ChatPeer_t3366739368 * L_9 = __this->get_chatPeer_15();
		NullCheck(L_9);
		String_t* L_10 = ChatPeer_get_NameServerAddress_m2456527619(L_9, /*hidden argument*/NULL);
		ChatClient_set_NameServerAddress_m2434354289(__this, L_10, /*hidden argument*/NULL);
		ChatPeer_t3366739368 * L_11 = __this->get_chatPeer_15();
		NullCheck(L_11);
		bool L_12 = ChatPeer_Connect_m3069500609(L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		bool L_13 = V_0;
		if (!L_13)
		{
			goto IL_0096;
		}
	}
	{
		ChatClient_set_State_m3825103917(__this, 1, /*hidden argument*/NULL);
	}

IL_0096:
	{
		bool L_14 = ChatClient_get_UseBackgroundWorkerForSending_m636120350(__this, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00be;
		}
	}
	{
		intptr_t L_15 = (intptr_t)ChatClient_SendOutgoingInBackground_m3440288828_RuntimeMethod_var;
		Func_1_t3822001908 * L_16 = (Func_1_t3822001908 *)il2cpp_codegen_object_new(Func_1_t3822001908_il2cpp_TypeInfo_var);
		Func_1__ctor_m744463608(L_16, __this, (intptr_t)L_15, /*hidden argument*/Func_1__ctor_m744463608_RuntimeMethod_var);
		int32_t L_17 = __this->get_msDeltaForServiceCalls_20();
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_t2974952451_il2cpp_TypeInfo_var);
		SupportClass_StartBackgroundCalls_m2029470730(NULL /*static, unused*/, L_16, L_17, _stringLiteral2878504940, /*hidden argument*/NULL);
	}

IL_00be:
	{
		bool L_18 = V_0;
		return L_18;
	}
}
// System.Boolean Photon.Chat.ChatClient::ConnectAndSetStatus(System.String,System.String,Photon.Chat.AuthenticationValues,System.Int32,System.Object)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_ConnectAndSetStatus_m1920248113 (ChatClient_t792052210 * __this, String_t* ___appId0, String_t* ___appVersion1, AuthenticationValues_t563695058 * ___authValues2, int32_t ___status3, RuntimeObject * ___message4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_ConnectAndSetStatus_m1920248113_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___status3;
		Nullable_1_t378540539  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Nullable_1__ctor_m1954627310((&L_1), L_0, /*hidden argument*/Nullable_1__ctor_m1954627310_RuntimeMethod_var);
		__this->set_statusToSetWhenConnected_18(L_1);
		RuntimeObject * L_2 = ___message4;
		__this->set_messageToSetWhenConnected_19(L_2);
		String_t* L_3 = ___appId0;
		String_t* L_4 = ___appVersion1;
		AuthenticationValues_t563695058 * L_5 = ___authValues2;
		bool L_6 = ChatClient_Connect_m3402282777(__this, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void Photon.Chat.ChatClient::Service()
extern "C" IL2CPP_METHOD_ATTR void ChatClient_Service_m3612400903 (ChatClient_t792052210 * __this, const RuntimeMethod* method)
{
	{
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = ChatClient_get_HasPeer_m3489806430(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		ChatPeer_t3366739368 * L_1 = __this->get_chatPeer_15();
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(14 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::DispatchIncomingCommands() */, L_1);
		if (L_2)
		{
			goto IL_0005;
		}
	}

IL_0020:
	{
		bool L_3 = ChatClient_get_UseBackgroundWorkerForSending_m636120350(__this, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_4 = Environment_get_TickCount_m2088073110(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_msTimestampOfLastServiceCall_21();
		int32_t L_6 = __this->get_msDeltaForServiceCalls_20();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5))) > ((int32_t)L_6)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_7 = __this->get_msTimestampOfLastServiceCall_21();
		if (L_7)
		{
			goto IL_0078;
		}
	}

IL_004d:
	{
		int32_t L_8 = Environment_get_TickCount_m2088073110(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_msTimestampOfLastServiceCall_21(L_8);
		goto IL_005d;
	}

IL_005d:
	{
		bool L_9 = ChatClient_get_HasPeer_m3489806430(__this, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0078;
		}
	}
	{
		ChatPeer_t3366739368 * L_10 = __this->get_chatPeer_15();
		NullCheck(L_10);
		bool L_11 = VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOutgoingCommands() */, L_10);
		if (L_11)
		{
			goto IL_005d;
		}
	}

IL_0078:
	{
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::SendOutgoingInBackground()
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_SendOutgoingInBackground_m3440288828 (ChatClient_t792052210 * __this, const RuntimeMethod* method)
{
	{
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = ChatClient_get_HasPeer_m3489806430(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		ChatPeer_t3366739368 * L_1 = __this->get_chatPeer_15();
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOutgoingCommands() */, L_1);
		if (L_2)
		{
			goto IL_0005;
		}
	}

IL_0020:
	{
		int32_t L_3 = ChatClient_get_State_m779190608(__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)((int32_t)11)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Photon.Chat.ChatClient::SendAcksOnly()
extern "C" IL2CPP_METHOD_ATTR void ChatClient_SendAcksOnly_m1824470161 (ChatClient_t792052210 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = ChatClient_get_HasPeer_m3489806430(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		ChatPeer_t3366739368 * L_1 = __this->get_chatPeer_15();
		NullCheck(L_1);
		VirtFuncInvoker0< bool >::Invoke(13 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendAcksOnly() */, L_1);
	}

IL_0017:
	{
		return;
	}
}
// System.Void Photon.Chat.ChatClient::Disconnect()
extern "C" IL2CPP_METHOD_ATTR void ChatClient_Disconnect_m1433106660 (ChatClient_t792052210 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = ChatClient_get_HasPeer_m3489806430(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		ChatPeer_t3366739368 * L_1 = __this->get_chatPeer_15();
		NullCheck(L_1);
		uint8_t L_2 = PhotonPeer_get_PeerState_m582006767(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		ChatPeer_t3366739368 * L_3 = __this->get_chatPeer_15();
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(8 /* System.Void ExitGames.Client.Photon.PhotonPeer::Disconnect() */, L_3);
	}

IL_0026:
	{
		return;
	}
}
// System.Void Photon.Chat.ChatClient::StopThread()
extern "C" IL2CPP_METHOD_ATTR void ChatClient_StopThread_m3603296399 (ChatClient_t792052210 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = ChatClient_get_HasPeer_m3489806430(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ChatPeer_t3366739368 * L_1 = __this->get_chatPeer_15();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(9 /* System.Void ExitGames.Client.Photon.PhotonPeer::StopThread() */, L_1);
	}

IL_0016:
	{
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::Subscribe(System.String[])
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_Subscribe_m3284225384 (ChatClient_t792052210 * __this, StringU5BU5D_t1281789340* ___channels0, const RuntimeMethod* method)
{
	{
		StringU5BU5D_t1281789340* L_0 = ___channels0;
		bool L_1 = ChatClient_Subscribe_m741354606(__this, L_0, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Photon.Chat.ChatClient::Subscribe(System.String[],System.Int32[])
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_Subscribe_m781793523 (ChatClient_t792052210 * __this, StringU5BU5D_t1281789340* ___channels0, Int32U5BU5D_t385246372* ___lastMsgIds1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_Subscribe_m781793523_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Dictionary_2_t1405253484 * V_1 = NULL;
	Dictionary_2_t1405253484 * V_2 = NULL;
	{
		bool L_0 = ChatClient_get_CanChat_m2766175627(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_002a;
		}
	}
	{
		uint8_t L_1 = ChatClient_get_DebugOut_m2575811291(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) < ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_2 = __this->get_listener_14();
		NullCheck(L_2);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_2, 1, _stringLiteral3907755222);
	}

IL_0028:
	{
		return (bool)0;
	}

IL_002a:
	{
		StringU5BU5D_t1281789340* L_3 = ___channels0;
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		StringU5BU5D_t1281789340* L_4 = ___channels0;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))))
		{
			goto IL_0057;
		}
	}

IL_0038:
	{
		uint8_t L_5 = ChatClient_get_DebugOut_m2575811291(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)2)))
		{
			goto IL_0055;
		}
	}
	{
		RuntimeObject* L_6 = __this->get_listener_14();
		NullCheck(L_6);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_6, 2, _stringLiteral2582846264);
	}

IL_0055:
	{
		return (bool)0;
	}

IL_0057:
	{
		V_0 = 0;
		goto IL_0099;
	}

IL_005e:
	{
		StringU5BU5D_t1281789340* L_7 = ___channels0;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_11 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0095;
		}
	}
	{
		uint8_t L_12 = ChatClient_get_DebugOut_m2575811291(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_12) < ((int32_t)1)))
		{
			goto IL_0093;
		}
	}
	{
		RuntimeObject* L_13 = __this->get_listener_14();
		int32_t L_14 = V_0;
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_15);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3721724167, L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_13, 1, L_17);
	}

IL_0093:
	{
		return (bool)0;
	}

IL_0095:
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0099:
	{
		int32_t L_19 = V_0;
		StringU5BU5D_t1281789340* L_20 = ___channels0;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))))))
		{
			goto IL_005e;
		}
	}
	{
		Int32U5BU5D_t385246372* L_21 = ___lastMsgIds1;
		if (!L_21)
		{
			goto IL_00b3;
		}
	}
	{
		Int32U5BU5D_t385246372* L_22 = ___lastMsgIds1;
		NullCheck(L_22);
		StringU5BU5D_t1281789340* L_23 = ___channels0;
		NullCheck(L_23);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length))))) == ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_23)->max_length)))))))
		{
			goto IL_00d2;
		}
	}

IL_00b3:
	{
		uint8_t L_24 = ChatClient_get_DebugOut_m2575811291(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_24) < ((int32_t)1)))
		{
			goto IL_00d0;
		}
	}
	{
		RuntimeObject* L_25 = __this->get_listener_14();
		NullCheck(L_25);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_25, 1, _stringLiteral3680455401);
	}

IL_00d0:
	{
		return (bool)0;
	}

IL_00d2:
	{
		Dictionary_2_t1405253484 * L_26 = (Dictionary_2_t1405253484 *)il2cpp_codegen_object_new(Dictionary_2_t1405253484_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m705142683(L_26, /*hidden argument*/Dictionary_2__ctor_m705142683_RuntimeMethod_var);
		V_2 = L_26;
		Dictionary_2_t1405253484 * L_27 = V_2;
		StringU5BU5D_t1281789340* L_28 = ___channels0;
		NullCheck(L_27);
		Dictionary_2_Add_m1883976453(L_27, (uint8_t)0, (RuntimeObject *)(RuntimeObject *)L_28, /*hidden argument*/Dictionary_2_Add_m1883976453_RuntimeMethod_var);
		Dictionary_2_t1405253484 * L_29 = V_2;
		Int32U5BU5D_t385246372* L_30 = ___lastMsgIds1;
		NullCheck(L_29);
		Dictionary_2_Add_m1883976453(L_29, (uint8_t)((int32_t)9), (RuntimeObject *)(RuntimeObject *)L_30, /*hidden argument*/Dictionary_2_Add_m1883976453_RuntimeMethod_var);
		Dictionary_2_t1405253484 * L_31 = V_2;
		int32_t L_32 = (-1);
		RuntimeObject * L_33 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_32);
		NullCheck(L_31);
		Dictionary_2_Add_m1883976453(L_31, (uint8_t)((int32_t)14), L_33, /*hidden argument*/Dictionary_2_Add_m1883976453_RuntimeMethod_var);
		Dictionary_2_t1405253484 * L_34 = V_2;
		V_1 = L_34;
		ChatPeer_t3366739368 * L_35 = __this->get_chatPeer_15();
		Dictionary_2_t1405253484 * L_36 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(SendOptions_t967321410_il2cpp_TypeInfo_var);
		SendOptions_t967321410  L_37 = ((SendOptions_t967321410_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_t967321410_il2cpp_TypeInfo_var))->get_SendReliable_0();
		NullCheck(L_35);
		bool L_38 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t1405253484 *, SendOptions_t967321410  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_35, (uint8_t)0, L_36, L_37);
		return L_38;
	}
}
// System.Boolean Photon.Chat.ChatClient::Subscribe(System.String[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_Subscribe_m741354606 (ChatClient_t792052210 * __this, StringU5BU5D_t1281789340* ___channels0, int32_t ___messagesFromHistory1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_Subscribe_m741354606_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ChatClient_get_CanChat_m2766175627(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_002a;
		}
	}
	{
		uint8_t L_1 = ChatClient_get_DebugOut_m2575811291(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) < ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_2 = __this->get_listener_14();
		NullCheck(L_2);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_2, 1, _stringLiteral3907755222);
	}

IL_0028:
	{
		return (bool)0;
	}

IL_002a:
	{
		StringU5BU5D_t1281789340* L_3 = ___channels0;
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		StringU5BU5D_t1281789340* L_4 = ___channels0;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))))
		{
			goto IL_0057;
		}
	}

IL_0038:
	{
		uint8_t L_5 = ChatClient_get_DebugOut_m2575811291(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)2)))
		{
			goto IL_0055;
		}
	}
	{
		RuntimeObject* L_6 = __this->get_listener_14();
		NullCheck(L_6);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_6, 2, _stringLiteral2582846264);
	}

IL_0055:
	{
		return (bool)0;
	}

IL_0057:
	{
		StringU5BU5D_t1281789340* L_7 = ___channels0;
		int32_t L_8 = ___messagesFromHistory1;
		bool L_9 = ChatClient_SendChannelOperation_m35122363(__this, L_7, (uint8_t)0, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Boolean Photon.Chat.ChatClient::Unsubscribe(System.String[])
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_Unsubscribe_m1754487189 (ChatClient_t792052210 * __this, StringU5BU5D_t1281789340* ___channels0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_Unsubscribe_m1754487189_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringU5BU5D_t1281789340* V_1 = NULL;
	int32_t V_2 = 0;
	{
		bool L_0 = ChatClient_get_CanChat_m2766175627(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_002a;
		}
	}
	{
		uint8_t L_1 = ChatClient_get_DebugOut_m2575811291(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) < ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_2 = __this->get_listener_14();
		NullCheck(L_2);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_2, 1, _stringLiteral1318718822);
	}

IL_0028:
	{
		return (bool)0;
	}

IL_002a:
	{
		StringU5BU5D_t1281789340* L_3 = ___channels0;
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		StringU5BU5D_t1281789340* L_4 = ___channels0;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))))
		{
			goto IL_0057;
		}
	}

IL_0038:
	{
		uint8_t L_5 = ChatClient_get_DebugOut_m2575811291(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)2)))
		{
			goto IL_0055;
		}
	}
	{
		RuntimeObject* L_6 = __this->get_listener_14();
		NullCheck(L_6);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_6, 2, _stringLiteral948577740);
	}

IL_0055:
	{
		return (bool)0;
	}

IL_0057:
	{
		StringU5BU5D_t1281789340* L_7 = ___channels0;
		V_1 = L_7;
		V_2 = 0;
		goto IL_0075;
	}

IL_0060:
	{
		StringU5BU5D_t1281789340* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		String_t* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = L_11;
		HashSet_1_t412400163 * L_12 = __this->get_PublicChannelsUnsubscribing_13();
		String_t* L_13 = V_0;
		NullCheck(L_12);
		HashSet_1_Add_m2788916881(L_12, L_13, /*hidden argument*/HashSet_1_Add_m2788916881_RuntimeMethod_var);
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0075:
	{
		int32_t L_15 = V_2;
		StringU5BU5D_t1281789340* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))))))
		{
			goto IL_0060;
		}
	}
	{
		StringU5BU5D_t1281789340* L_17 = ___channels0;
		bool L_18 = ChatClient_SendChannelOperation_m35122363(__this, L_17, (uint8_t)1, 0, /*hidden argument*/NULL);
		return L_18;
	}
}
// System.Boolean Photon.Chat.ChatClient::PublishMessage(System.String,System.Object,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_PublishMessage_m2581916908 (ChatClient_t792052210 * __this, String_t* ___channelName0, RuntimeObject * ___message1, bool ___forwardAsWebhook2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___channelName0;
		RuntimeObject * L_1 = ___message1;
		bool L_2 = ___forwardAsWebhook2;
		bool L_3 = ChatClient_publishMessage_m2261581570(__this, L_0, L_1, (bool)1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean Photon.Chat.ChatClient::PublishMessageUnreliable(System.String,System.Object,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_PublishMessageUnreliable_m1448146911 (ChatClient_t792052210 * __this, String_t* ___channelName0, RuntimeObject * ___message1, bool ___forwardAsWebhook2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___channelName0;
		RuntimeObject * L_1 = ___message1;
		bool L_2 = ___forwardAsWebhook2;
		bool L_3 = ChatClient_publishMessage_m2261581570(__this, L_0, L_1, (bool)0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean Photon.Chat.ChatClient::publishMessage(System.String,System.Object,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_publishMessage_m2261581570 (ChatClient_t792052210 * __this, String_t* ___channelName0, RuntimeObject * ___message1, bool ___reliable2, bool ___forwardAsWebhook3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_publishMessage_m2261581570_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t1405253484 * V_0 = NULL;
	Dictionary_2_t1405253484 * V_1 = NULL;
	SendOptions_t967321410  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		bool L_0 = ChatClient_get_CanChat_m2766175627(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_002a;
		}
	}
	{
		uint8_t L_1 = ChatClient_get_DebugOut_m2575811291(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) < ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_2 = __this->get_listener_14();
		NullCheck(L_2);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_2, 1, _stringLiteral4285124119);
	}

IL_0028:
	{
		return (bool)0;
	}

IL_002a:
	{
		String_t* L_3 = ___channelName0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_003b;
		}
	}
	{
		RuntimeObject * L_5 = ___message1;
		if (L_5)
		{
			goto IL_005a;
		}
	}

IL_003b:
	{
		uint8_t L_6 = ChatClient_get_DebugOut_m2575811291(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_6) < ((int32_t)2)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject* L_7 = __this->get_listener_14();
		NullCheck(L_7);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_7, 2, _stringLiteral24411111);
	}

IL_0058:
	{
		return (bool)0;
	}

IL_005a:
	{
		Dictionary_2_t1405253484 * L_8 = (Dictionary_2_t1405253484 *)il2cpp_codegen_object_new(Dictionary_2_t1405253484_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m705142683(L_8, /*hidden argument*/Dictionary_2__ctor_m705142683_RuntimeMethod_var);
		V_1 = L_8;
		Dictionary_2_t1405253484 * L_9 = V_1;
		String_t* L_10 = ___channelName0;
		NullCheck(L_9);
		Dictionary_2_Add_m1883976453(L_9, (uint8_t)1, L_10, /*hidden argument*/Dictionary_2_Add_m1883976453_RuntimeMethod_var);
		Dictionary_2_t1405253484 * L_11 = V_1;
		RuntimeObject * L_12 = ___message1;
		NullCheck(L_11);
		Dictionary_2_Add_m1883976453(L_11, (uint8_t)3, L_12, /*hidden argument*/Dictionary_2_Add_m1883976453_RuntimeMethod_var);
		Dictionary_2_t1405253484 * L_13 = V_1;
		V_0 = L_13;
		bool L_14 = ___forwardAsWebhook3;
		if (!L_14)
		{
			goto IL_0087;
		}
	}
	{
		Dictionary_2_t1405253484 * L_15 = V_0;
		uint8_t L_16 = ((uint8_t)1);
		RuntimeObject * L_17 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_15);
		Dictionary_2_Add_m1883976453(L_15, (uint8_t)((int32_t)21), L_17, /*hidden argument*/Dictionary_2_Add_m1883976453_RuntimeMethod_var);
	}

IL_0087:
	{
		ChatPeer_t3366739368 * L_18 = __this->get_chatPeer_15();
		Dictionary_2_t1405253484 * L_19 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(SendOptions_t967321410 ));
		bool L_20 = ___reliable2;
		SendOptions_set_Reliability_m237473686((SendOptions_t967321410 *)(&V_2), L_20, /*hidden argument*/NULL);
		SendOptions_t967321410  L_21 = V_2;
		NullCheck(L_18);
		bool L_22 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t1405253484 *, SendOptions_t967321410  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_18, (uint8_t)2, L_19, L_21);
		return L_22;
	}
}
// System.Boolean Photon.Chat.ChatClient::SendPrivateMessage(System.String,System.Object,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_SendPrivateMessage_m39835390 (ChatClient_t792052210 * __this, String_t* ___target0, RuntimeObject * ___message1, bool ___forwardAsWebhook2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___target0;
		RuntimeObject * L_1 = ___message1;
		bool L_2 = ___forwardAsWebhook2;
		bool L_3 = ChatClient_SendPrivateMessage_m1122275178(__this, L_0, L_1, (bool)0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean Photon.Chat.ChatClient::SendPrivateMessage(System.String,System.Object,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_SendPrivateMessage_m1122275178 (ChatClient_t792052210 * __this, String_t* ___target0, RuntimeObject * ___message1, bool ___encrypt2, bool ___forwardAsWebhook3, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___target0;
		RuntimeObject * L_1 = ___message1;
		bool L_2 = ___encrypt2;
		bool L_3 = ___forwardAsWebhook3;
		bool L_4 = ChatClient_sendPrivateMessage_m446930096(__this, L_0, L_1, L_2, (bool)1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean Photon.Chat.ChatClient::SendPrivateMessageUnreliable(System.String,System.Object,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_SendPrivateMessageUnreliable_m2594893897 (ChatClient_t792052210 * __this, String_t* ___target0, RuntimeObject * ___message1, bool ___encrypt2, bool ___forwardAsWebhook3, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___target0;
		RuntimeObject * L_1 = ___message1;
		bool L_2 = ___encrypt2;
		bool L_3 = ___forwardAsWebhook3;
		bool L_4 = ChatClient_sendPrivateMessage_m446930096(__this, L_0, L_1, L_2, (bool)0, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean Photon.Chat.ChatClient::sendPrivateMessage(System.String,System.Object,System.Boolean,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_sendPrivateMessage_m446930096 (ChatClient_t792052210 * __this, String_t* ___target0, RuntimeObject * ___message1, bool ___encrypt2, bool ___reliable3, bool ___forwardAsWebhook4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_sendPrivateMessage_m446930096_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t1405253484 * V_0 = NULL;
	Dictionary_2_t1405253484 * V_1 = NULL;
	SendOptions_t967321410  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		bool L_0 = ChatClient_get_CanChat_m2766175627(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_002a;
		}
	}
	{
		uint8_t L_1 = ChatClient_get_DebugOut_m2575811291(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) < ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_2 = __this->get_listener_14();
		NullCheck(L_2);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_2, 1, _stringLiteral1551728395);
	}

IL_0028:
	{
		return (bool)0;
	}

IL_002a:
	{
		String_t* L_3 = ___target0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_003b;
		}
	}
	{
		RuntimeObject * L_5 = ___message1;
		if (L_5)
		{
			goto IL_005a;
		}
	}

IL_003b:
	{
		uint8_t L_6 = ChatClient_get_DebugOut_m2575811291(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_6) < ((int32_t)2)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject* L_7 = __this->get_listener_14();
		NullCheck(L_7);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_7, 2, _stringLiteral1127979213);
	}

IL_0058:
	{
		return (bool)0;
	}

IL_005a:
	{
		Dictionary_2_t1405253484 * L_8 = (Dictionary_2_t1405253484 *)il2cpp_codegen_object_new(Dictionary_2_t1405253484_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m705142683(L_8, /*hidden argument*/Dictionary_2__ctor_m705142683_RuntimeMethod_var);
		V_1 = L_8;
		Dictionary_2_t1405253484 * L_9 = V_1;
		String_t* L_10 = ___target0;
		NullCheck(L_9);
		Dictionary_2_Add_m1883976453(L_9, (uint8_t)((int32_t)225), L_10, /*hidden argument*/Dictionary_2_Add_m1883976453_RuntimeMethod_var);
		Dictionary_2_t1405253484 * L_11 = V_1;
		RuntimeObject * L_12 = ___message1;
		NullCheck(L_11);
		Dictionary_2_Add_m1883976453(L_11, (uint8_t)3, L_12, /*hidden argument*/Dictionary_2_Add_m1883976453_RuntimeMethod_var);
		Dictionary_2_t1405253484 * L_13 = V_1;
		V_0 = L_13;
		bool L_14 = ___forwardAsWebhook4;
		if (!L_14)
		{
			goto IL_008b;
		}
	}
	{
		Dictionary_2_t1405253484 * L_15 = V_0;
		uint8_t L_16 = ((uint8_t)1);
		RuntimeObject * L_17 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_15);
		Dictionary_2_Add_m1883976453(L_15, (uint8_t)((int32_t)21), L_17, /*hidden argument*/Dictionary_2_Add_m1883976453_RuntimeMethod_var);
	}

IL_008b:
	{
		ChatPeer_t3366739368 * L_18 = __this->get_chatPeer_15();
		Dictionary_2_t1405253484 * L_19 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(SendOptions_t967321410 ));
		bool L_20 = ___reliable3;
		SendOptions_set_Reliability_m237473686((SendOptions_t967321410 *)(&V_2), L_20, /*hidden argument*/NULL);
		bool L_21 = ___encrypt2;
		(&V_2)->set_Encrypt_3(L_21);
		SendOptions_t967321410  L_22 = V_2;
		NullCheck(L_18);
		bool L_23 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t1405253484 *, SendOptions_t967321410  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_18, (uint8_t)3, L_19, L_22);
		return L_23;
	}
}
// System.Boolean Photon.Chat.ChatClient::SetOnlineStatus(System.Int32,System.Object,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_SetOnlineStatus_m2397111474 (ChatClient_t792052210 * __this, int32_t ___status0, RuntimeObject * ___message1, bool ___skipMessage2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_SetOnlineStatus_m2397111474_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t1405253484 * V_0 = NULL;
	Dictionary_2_t1405253484 * V_1 = NULL;
	{
		bool L_0 = ChatClient_get_CanChat_m2766175627(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_002a;
		}
	}
	{
		uint8_t L_1 = ChatClient_get_DebugOut_m2575811291(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) < ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_2 = __this->get_listener_14();
		NullCheck(L_2);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_2, 1, _stringLiteral3276571959);
	}

IL_0028:
	{
		return (bool)0;
	}

IL_002a:
	{
		Dictionary_2_t1405253484 * L_3 = (Dictionary_2_t1405253484 *)il2cpp_codegen_object_new(Dictionary_2_t1405253484_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m705142683(L_3, /*hidden argument*/Dictionary_2__ctor_m705142683_RuntimeMethod_var);
		V_1 = L_3;
		Dictionary_2_t1405253484 * L_4 = V_1;
		int32_t L_5 = ___status0;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		Dictionary_2_Add_m1883976453(L_4, (uint8_t)((int32_t)10), L_7, /*hidden argument*/Dictionary_2_Add_m1883976453_RuntimeMethod_var);
		Dictionary_2_t1405253484 * L_8 = V_1;
		V_0 = L_8;
		bool L_9 = ___skipMessage2;
		if (!L_9)
		{
			goto IL_0059;
		}
	}
	{
		Dictionary_2_t1405253484 * L_10 = V_0;
		bool L_11 = ((bool)1);
		RuntimeObject * L_12 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_10);
		Dictionary_2_set_Item_m1279768534(L_10, (uint8_t)((int32_t)12), L_12, /*hidden argument*/Dictionary_2_set_Item_m1279768534_RuntimeMethod_var);
		goto IL_0061;
	}

IL_0059:
	{
		Dictionary_2_t1405253484 * L_13 = V_0;
		RuntimeObject * L_14 = ___message1;
		NullCheck(L_13);
		Dictionary_2_set_Item_m1279768534(L_13, (uint8_t)3, L_14, /*hidden argument*/Dictionary_2_set_Item_m1279768534_RuntimeMethod_var);
	}

IL_0061:
	{
		ChatPeer_t3366739368 * L_15 = __this->get_chatPeer_15();
		Dictionary_2_t1405253484 * L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SendOptions_t967321410_il2cpp_TypeInfo_var);
		SendOptions_t967321410  L_17 = ((SendOptions_t967321410_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_t967321410_il2cpp_TypeInfo_var))->get_SendReliable_0();
		NullCheck(L_15);
		bool L_18 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t1405253484 *, SendOptions_t967321410  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_15, (uint8_t)5, L_16, L_17);
		return L_18;
	}
}
// System.Boolean Photon.Chat.ChatClient::SetOnlineStatus(System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_SetOnlineStatus_m4038898338 (ChatClient_t792052210 * __this, int32_t ___status0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___status0;
		bool L_1 = ChatClient_SetOnlineStatus_m2397111474(__this, L_0, NULL, (bool)1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Photon.Chat.ChatClient::SetOnlineStatus(System.Int32,System.Object)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_SetOnlineStatus_m1331156303 (ChatClient_t792052210 * __this, int32_t ___status0, RuntimeObject * ___message1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___status0;
		RuntimeObject * L_1 = ___message1;
		bool L_2 = ChatClient_SetOnlineStatus_m2397111474(__this, L_0, L_1, (bool)0, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Photon.Chat.ChatClient::AddFriends(System.String[])
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_AddFriends_m2503086012 (ChatClient_t792052210 * __this, StringU5BU5D_t1281789340* ___friends0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_AddFriends_m2503086012_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t1405253484 * V_0 = NULL;
	Dictionary_2_t1405253484 * V_1 = NULL;
	{
		bool L_0 = ChatClient_get_CanChat_m2766175627(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_002a;
		}
	}
	{
		uint8_t L_1 = ChatClient_get_DebugOut_m2575811291(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) < ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_2 = __this->get_listener_14();
		NullCheck(L_2);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_2, 1, _stringLiteral3486783854);
	}

IL_0028:
	{
		return (bool)0;
	}

IL_002a:
	{
		StringU5BU5D_t1281789340* L_3 = ___friends0;
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		StringU5BU5D_t1281789340* L_4 = ___friends0;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))))
		{
			goto IL_0057;
		}
	}

IL_0038:
	{
		uint8_t L_5 = ChatClient_get_DebugOut_m2575811291(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)2)))
		{
			goto IL_0055;
		}
	}
	{
		RuntimeObject* L_6 = __this->get_listener_14();
		NullCheck(L_6);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_6, 2, _stringLiteral4168669774);
	}

IL_0055:
	{
		return (bool)0;
	}

IL_0057:
	{
		StringU5BU5D_t1281789340* L_7 = ___friends0;
		NullCheck(L_7);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length))))) <= ((int32_t)((int32_t)1024))))
		{
			goto IL_00b1;
		}
	}
	{
		uint8_t L_8 = ChatClient_get_DebugOut_m2575811291(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_8) < ((int32_t)2)))
		{
			goto IL_00af;
		}
	}
	{
		RuntimeObject* L_9 = __this->get_listener_14();
		ObjectU5BU5D_t2843939325* L_10 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t2843939325* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral3105917120);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3105917120);
		ObjectU5BU5D_t2843939325* L_12 = L_11;
		StringU5BU5D_t1281789340* L_13 = ___friends0;
		NullCheck(L_13);
		int32_t L_14 = (((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length))));
		RuntimeObject * L_15 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_15);
		ObjectU5BU5D_t2843939325* L_16 = L_12;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral3787235530);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3787235530);
		ObjectU5BU5D_t2843939325* L_17 = L_16;
		int32_t L_18 = ((int32_t)1024);
		RuntimeObject * L_19 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_19);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_20 = String_Concat_m2971454694(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		NullCheck(L_9);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_9, 2, L_20);
	}

IL_00af:
	{
		return (bool)0;
	}

IL_00b1:
	{
		Dictionary_2_t1405253484 * L_21 = (Dictionary_2_t1405253484 *)il2cpp_codegen_object_new(Dictionary_2_t1405253484_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m705142683(L_21, /*hidden argument*/Dictionary_2__ctor_m705142683_RuntimeMethod_var);
		V_1 = L_21;
		Dictionary_2_t1405253484 * L_22 = V_1;
		StringU5BU5D_t1281789340* L_23 = ___friends0;
		NullCheck(L_22);
		Dictionary_2_Add_m1883976453(L_22, (uint8_t)((int32_t)11), (RuntimeObject *)(RuntimeObject *)L_23, /*hidden argument*/Dictionary_2_Add_m1883976453_RuntimeMethod_var);
		Dictionary_2_t1405253484 * L_24 = V_1;
		V_0 = L_24;
		ChatPeer_t3366739368 * L_25 = __this->get_chatPeer_15();
		Dictionary_2_t1405253484 * L_26 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SendOptions_t967321410_il2cpp_TypeInfo_var);
		SendOptions_t967321410  L_27 = ((SendOptions_t967321410_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_t967321410_il2cpp_TypeInfo_var))->get_SendReliable_0();
		NullCheck(L_25);
		bool L_28 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t1405253484 *, SendOptions_t967321410  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_25, (uint8_t)6, L_26, L_27);
		return L_28;
	}
}
// System.Boolean Photon.Chat.ChatClient::RemoveFriends(System.String[])
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_RemoveFriends_m3846113334 (ChatClient_t792052210 * __this, StringU5BU5D_t1281789340* ___friends0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_RemoveFriends_m3846113334_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t1405253484 * V_0 = NULL;
	Dictionary_2_t1405253484 * V_1 = NULL;
	{
		bool L_0 = ChatClient_get_CanChat_m2766175627(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_002a;
		}
	}
	{
		uint8_t L_1 = ChatClient_get_DebugOut_m2575811291(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_1) < ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_2 = __this->get_listener_14();
		NullCheck(L_2);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_2, 1, _stringLiteral1865217350);
	}

IL_0028:
	{
		return (bool)0;
	}

IL_002a:
	{
		StringU5BU5D_t1281789340* L_3 = ___friends0;
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		StringU5BU5D_t1281789340* L_4 = ___friends0;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))))
		{
			goto IL_0057;
		}
	}

IL_0038:
	{
		uint8_t L_5 = ChatClient_get_DebugOut_m2575811291(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)2)))
		{
			goto IL_0055;
		}
	}
	{
		RuntimeObject* L_6 = __this->get_listener_14();
		NullCheck(L_6);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_6, 2, _stringLiteral364667414);
	}

IL_0055:
	{
		return (bool)0;
	}

IL_0057:
	{
		StringU5BU5D_t1281789340* L_7 = ___friends0;
		NullCheck(L_7);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length))))) <= ((int32_t)((int32_t)1024))))
		{
			goto IL_00b1;
		}
	}
	{
		uint8_t L_8 = ChatClient_get_DebugOut_m2575811291(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_8) < ((int32_t)2)))
		{
			goto IL_00af;
		}
	}
	{
		RuntimeObject* L_9 = __this->get_listener_14();
		ObjectU5BU5D_t2843939325* L_10 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t2843939325* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral1755514480);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral1755514480);
		ObjectU5BU5D_t2843939325* L_12 = L_11;
		StringU5BU5D_t1281789340* L_13 = ___friends0;
		NullCheck(L_13);
		int32_t L_14 = (((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length))));
		RuntimeObject * L_15 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_15);
		ObjectU5BU5D_t2843939325* L_16 = L_12;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral3787235530);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3787235530);
		ObjectU5BU5D_t2843939325* L_17 = L_16;
		int32_t L_18 = ((int32_t)1024);
		RuntimeObject * L_19 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_19);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_20 = String_Concat_m2971454694(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		NullCheck(L_9);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_9, 2, L_20);
	}

IL_00af:
	{
		return (bool)0;
	}

IL_00b1:
	{
		Dictionary_2_t1405253484 * L_21 = (Dictionary_2_t1405253484 *)il2cpp_codegen_object_new(Dictionary_2_t1405253484_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m705142683(L_21, /*hidden argument*/Dictionary_2__ctor_m705142683_RuntimeMethod_var);
		V_1 = L_21;
		Dictionary_2_t1405253484 * L_22 = V_1;
		StringU5BU5D_t1281789340* L_23 = ___friends0;
		NullCheck(L_22);
		Dictionary_2_Add_m1883976453(L_22, (uint8_t)((int32_t)11), (RuntimeObject *)(RuntimeObject *)L_23, /*hidden argument*/Dictionary_2_Add_m1883976453_RuntimeMethod_var);
		Dictionary_2_t1405253484 * L_24 = V_1;
		V_0 = L_24;
		ChatPeer_t3366739368 * L_25 = __this->get_chatPeer_15();
		Dictionary_2_t1405253484 * L_26 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SendOptions_t967321410_il2cpp_TypeInfo_var);
		SendOptions_t967321410  L_27 = ((SendOptions_t967321410_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_t967321410_il2cpp_TypeInfo_var))->get_SendReliable_0();
		NullCheck(L_25);
		bool L_28 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t1405253484 *, SendOptions_t967321410  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_25, (uint8_t)7, L_26, L_27);
		return L_28;
	}
}
// System.String Photon.Chat.ChatClient::GetPrivateChannelNameByUser(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* ChatClient_GetPrivateChannelNameByUser_m276549809 (ChatClient_t792052210 * __this, String_t* ___userName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_GetPrivateChannelNameByUser_m276549809_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ChatClient_get_UserId_m1614431305(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___userName0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral1730043946, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Photon.Chat.ChatClient::TryGetChannel(System.String,System.Boolean,Photon.Chat.ChatChannel&)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_TryGetChannel_m1863196673 (ChatClient_t792052210 * __this, String_t* ___channelName0, bool ___isPrivate1, ChatChannel_t2318116909 ** ___channel2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_TryGetChannel_m1863196673_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___isPrivate1;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Dictionary_2_t2103373208 * L_1 = __this->get_PublicChannels_11();
		String_t* L_2 = ___channelName0;
		ChatChannel_t2318116909 ** L_3 = ___channel2;
		NullCheck(L_1);
		bool L_4 = Dictionary_2_TryGetValue_m4209734297(L_1, L_2, (ChatChannel_t2318116909 **)L_3, /*hidden argument*/Dictionary_2_TryGetValue_m4209734297_RuntimeMethod_var);
		return L_4;
	}

IL_0014:
	{
		Dictionary_2_t2103373208 * L_5 = __this->get_PrivateChannels_12();
		String_t* L_6 = ___channelName0;
		ChatChannel_t2318116909 ** L_7 = ___channel2;
		NullCheck(L_5);
		bool L_8 = Dictionary_2_TryGetValue_m4209734297(L_5, L_6, (ChatChannel_t2318116909 **)L_7, /*hidden argument*/Dictionary_2_TryGetValue_m4209734297_RuntimeMethod_var);
		return L_8;
	}
}
// System.Boolean Photon.Chat.ChatClient::TryGetChannel(System.String,Photon.Chat.ChatChannel&)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_TryGetChannel_m1509335266 (ChatClient_t792052210 * __this, String_t* ___channelName0, ChatChannel_t2318116909 ** ___channel1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_TryGetChannel_m1509335266_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		V_0 = (bool)0;
		Dictionary_2_t2103373208 * L_0 = __this->get_PublicChannels_11();
		String_t* L_1 = ___channelName0;
		ChatChannel_t2318116909 ** L_2 = ___channel1;
		NullCheck(L_0);
		bool L_3 = Dictionary_2_TryGetValue_m4209734297(L_0, L_1, (ChatChannel_t2318116909 **)L_2, /*hidden argument*/Dictionary_2_TryGetValue_m4209734297_RuntimeMethod_var);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)1;
	}

IL_0018:
	{
		Dictionary_2_t2103373208 * L_5 = __this->get_PrivateChannels_12();
		String_t* L_6 = ___channelName0;
		ChatChannel_t2318116909 ** L_7 = ___channel1;
		NullCheck(L_5);
		bool L_8 = Dictionary_2_TryGetValue_m4209734297(L_5, L_6, (ChatChannel_t2318116909 **)L_7, /*hidden argument*/Dictionary_2_TryGetValue_m4209734297_RuntimeMethod_var);
		V_0 = L_8;
		bool L_9 = V_0;
		return L_9;
	}
}
// System.Void Photon.Chat.ChatClient::set_DebugOut(ExitGames.Client.Photon.DebugLevel)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_set_DebugOut_m2339874564 (ChatClient_t792052210 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		ChatPeer_t3366739368 * L_0 = __this->get_chatPeer_15();
		uint8_t L_1 = ___value0;
		NullCheck(L_0);
		((PhotonPeer_t1608153861 *)L_0)->set_DebugOut_11(L_1);
		return;
	}
}
// ExitGames.Client.Photon.DebugLevel Photon.Chat.ChatClient::get_DebugOut()
extern "C" IL2CPP_METHOD_ATTR uint8_t ChatClient_get_DebugOut_m2575811291 (ChatClient_t792052210 * __this, const RuntimeMethod* method)
{
	{
		ChatPeer_t3366739368 * L_0 = __this->get_chatPeer_15();
		NullCheck(L_0);
		uint8_t L_1 = ((PhotonPeer_t1608153861 *)L_0)->get_DebugOut_11();
		return L_1;
	}
}
// System.Void Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_DebugReturn_m2660559910 (ChatClient_t792052210 * __this, uint8_t ___level0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_DebugReturn_m2660559910_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_listener_14();
		uint8_t L_1 = ___level0;
		String_t* L_2 = ___message1;
		NullCheck(L_0);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Void Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.OnEvent(ExitGames.Client.Photon.EventData)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnEvent_m2070566938 (ChatClient_t792052210 * __this, EventData_t3728223374 * ___eventData0, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		EventData_t3728223374 * L_0 = ___eventData0;
		NullCheck(L_0);
		uint8_t L_1 = L_0->get_Code_0();
		V_0 = L_1;
		uint8_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_003a;
			}
			case 1:
			{
				goto IL_008e;
			}
			case 2:
			{
				goto IL_0046;
			}
			case 3:
			{
				goto IL_008e;
			}
			case 4:
			{
				goto IL_0052;
			}
			case 5:
			{
				goto IL_005e;
			}
			case 6:
			{
				goto IL_006a;
			}
			case 7:
			{
				goto IL_008e;
			}
			case 8:
			{
				goto IL_0076;
			}
			case 9:
			{
				goto IL_0082;
			}
		}
	}
	{
		goto IL_008e;
	}

IL_003a:
	{
		EventData_t3728223374 * L_3 = ___eventData0;
		ChatClient_HandleChatMessagesEvent_m1377968632(__this, L_3, /*hidden argument*/NULL);
		goto IL_008e;
	}

IL_0046:
	{
		EventData_t3728223374 * L_4 = ___eventData0;
		ChatClient_HandlePrivateMessageEvent_m894082070(__this, L_4, /*hidden argument*/NULL);
		goto IL_008e;
	}

IL_0052:
	{
		EventData_t3728223374 * L_5 = ___eventData0;
		ChatClient_HandleStatusUpdate_m576156692(__this, L_5, /*hidden argument*/NULL);
		goto IL_008e;
	}

IL_005e:
	{
		EventData_t3728223374 * L_6 = ___eventData0;
		ChatClient_HandleSubscribeEvent_m3618184068(__this, L_6, /*hidden argument*/NULL);
		goto IL_008e;
	}

IL_006a:
	{
		EventData_t3728223374 * L_7 = ___eventData0;
		ChatClient_HandleUnsubscribeEvent_m2964998100(__this, L_7, /*hidden argument*/NULL);
		goto IL_008e;
	}

IL_0076:
	{
		EventData_t3728223374 * L_8 = ___eventData0;
		ChatClient_HandleUserSubscribedEvent_m3530604099(__this, L_8, /*hidden argument*/NULL);
		goto IL_008e;
	}

IL_0082:
	{
		EventData_t3728223374 * L_9 = ___eventData0;
		ChatClient_HandleUserUnsubscribedEvent_m677700852(__this, L_9, /*hidden argument*/NULL);
		goto IL_008e;
	}

IL_008e:
	{
		return;
	}
}
// System.Void Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.OnOperationResponse(ExitGames.Client.Photon.OperationResponse)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnOperationResponse_m3532846010 (ChatClient_t792052210 * __this, OperationResponse_t423627973 * ___operationResponse0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnOperationResponse_m3532846010_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		OperationResponse_t423627973 * L_0 = ___operationResponse0;
		NullCheck(L_0);
		uint8_t L_1 = L_0->get_OperationCode_0();
		V_0 = L_1;
		uint8_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0039;
			}
			case 1:
			{
				goto IL_0039;
			}
			case 2:
			{
				goto IL_0039;
			}
			case 3:
			{
				goto IL_0039;
			}
		}
	}
	{
		uint8_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)230))))
		{
			goto IL_002d;
		}
	}
	{
		goto IL_0039;
	}

IL_002d:
	{
		OperationResponse_t423627973 * L_4 = ___operationResponse0;
		ChatClient_HandleAuthResponse_m3178849132(__this, L_4, /*hidden argument*/NULL);
		goto IL_00ba;
	}

IL_0039:
	{
		OperationResponse_t423627973 * L_5 = ___operationResponse0;
		NullCheck(L_5);
		int16_t L_6 = L_5->get_ReturnCode_1();
		if (!L_6)
		{
			goto IL_00b5;
		}
	}
	{
		uint8_t L_7 = ChatClient_get_DebugOut_m2575811291(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_7) < ((int32_t)1)))
		{
			goto IL_00b5;
		}
	}
	{
		OperationResponse_t423627973 * L_8 = ___operationResponse0;
		NullCheck(L_8);
		int16_t L_9 = L_8->get_ReturnCode_1();
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0083;
		}
	}
	{
		RuntimeObject* L_10 = __this->get_listener_14();
		OperationResponse_t423627973 * L_11 = ___operationResponse0;
		NullCheck(L_11);
		uint8_t L_12 = L_11->get_OperationCode_0();
		uint8_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_13);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral4158473593, L_14, /*hidden argument*/NULL);
		NullCheck(L_10);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_10, 1, L_15);
		goto IL_00b5;
	}

IL_0083:
	{
		RuntimeObject* L_16 = __this->get_listener_14();
		OperationResponse_t423627973 * L_17 = ___operationResponse0;
		NullCheck(L_17);
		uint8_t L_18 = L_17->get_OperationCode_0();
		uint8_t L_19 = L_18;
		RuntimeObject * L_20 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_19);
		OperationResponse_t423627973 * L_21 = ___operationResponse0;
		NullCheck(L_21);
		int16_t L_22 = L_21->get_ReturnCode_1();
		int16_t L_23 = L_22;
		RuntimeObject * L_24 = Box(Int16_t2552820387_il2cpp_TypeInfo_var, &L_23);
		OperationResponse_t423627973 * L_25 = ___operationResponse0;
		NullCheck(L_25);
		String_t* L_26 = L_25->get_DebugMessage_2();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_27 = String_Format_m3339413201(NULL /*static, unused*/, _stringLiteral207309729, L_20, L_24, L_26, /*hidden argument*/NULL);
		NullCheck(L_16);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_16, 1, L_27);
	}

IL_00b5:
	{
		goto IL_00ba;
	}

IL_00ba:
	{
		return;
	}
}
// System.Void Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.OnStatusChanged(ExitGames.Client.Photon.StatusCode)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnStatusChanged_m1014132506 (ChatClient_t792052210 * __this, int32_t ___statusCode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnStatusChanged_m1014132506_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___statusCode0;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)1024))))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_1 = ___statusCode0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)1025))))
		{
			goto IL_017e;
		}
	}
	{
		int32_t L_2 = ___statusCode0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)1048))))
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_3 = ___statusCode0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1049))))
		{
			goto IL_0166;
		}
	}
	{
		goto IL_01ba;
	}

IL_0031:
	{
		ChatPeer_t3366739368 * L_4 = __this->get_chatPeer_15();
		NullCheck(L_4);
		bool L_5 = VirtFuncInvoker0< bool >::Invoke(16 /* System.Boolean Photon.Chat.ChatPeer::get_IsProtocolSecure() */, L_4);
		if (L_5)
		{
			goto IL_0052;
		}
	}
	{
		ChatPeer_t3366739368 * L_6 = __this->get_chatPeer_15();
		NullCheck(L_6);
		PhotonPeer_EstablishEncryption_m2045801801(L_6, /*hidden argument*/NULL);
		goto IL_00b9;
	}

IL_0052:
	{
		bool L_7 = __this->get_didAuthenticate_17();
		if (L_7)
		{
			goto IL_00b9;
		}
	}
	{
		ChatPeer_t3366739368 * L_8 = __this->get_chatPeer_15();
		String_t* L_9 = ChatClient_get_AppId_m2045180326(__this, /*hidden argument*/NULL);
		String_t* L_10 = ChatClient_get_AppVersion_m855597901(__this, /*hidden argument*/NULL);
		String_t* L_11 = __this->get_chatRegion_4();
		AuthenticationValues_t563695058 * L_12 = ChatClient_get_AuthValues_m1343650260(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		bool L_13 = ChatPeer_AuthenticateOnNameServer_m4021717668(L_8, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		__this->set_didAuthenticate_17(L_13);
		bool L_14 = __this->get_didAuthenticate_17();
		if (L_14)
		{
			goto IL_00b9;
		}
	}
	{
		uint8_t L_15 = ChatClient_get_DebugOut_m2575811291(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_15) < ((int32_t)1)))
		{
			goto IL_00b9;
		}
	}
	{
		int32_t L_16 = ChatClient_get_State_m779190608(__this, /*hidden argument*/NULL);
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = Box(ChatState_t1558912819_il2cpp_TypeInfo_var, &L_17);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral243195407, L_18, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t2581629031_il2cpp_TypeInfo_var, __this, 1, L_19);
	}

IL_00b9:
	{
		int32_t L_20 = ChatClient_get_State_m779190608(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)1))))
		{
			goto IL_00e2;
		}
	}
	{
		ChatClient_set_State_m3825103917(__this, 2, /*hidden argument*/NULL);
		RuntimeObject* L_21 = __this->get_listener_14();
		int32_t L_22 = ChatClient_get_State_m779190608(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void Photon.Chat.IChatClientListener::OnChatStateChange(Photon.Chat.ChatState) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_21, L_22);
		goto IL_00f5;
	}

IL_00e2:
	{
		int32_t L_23 = ChatClient_get_State_m779190608(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)6))))
		{
			goto IL_00f5;
		}
	}
	{
		ChatClient_AuthenticateOnFrontEnd_m1407618497(__this, /*hidden argument*/NULL);
	}

IL_00f5:
	{
		goto IL_01ba;
	}

IL_00fa:
	{
		bool L_24 = __this->get_didAuthenticate_17();
		if (L_24)
		{
			goto IL_0161;
		}
	}
	{
		ChatPeer_t3366739368 * L_25 = __this->get_chatPeer_15();
		String_t* L_26 = ChatClient_get_AppId_m2045180326(__this, /*hidden argument*/NULL);
		String_t* L_27 = ChatClient_get_AppVersion_m855597901(__this, /*hidden argument*/NULL);
		String_t* L_28 = __this->get_chatRegion_4();
		AuthenticationValues_t563695058 * L_29 = ChatClient_get_AuthValues_m1343650260(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		bool L_30 = ChatPeer_AuthenticateOnNameServer_m4021717668(L_25, L_26, L_27, L_28, L_29, /*hidden argument*/NULL);
		__this->set_didAuthenticate_17(L_30);
		bool L_31 = __this->get_didAuthenticate_17();
		if (L_31)
		{
			goto IL_0161;
		}
	}
	{
		uint8_t L_32 = ChatClient_get_DebugOut_m2575811291(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_32) < ((int32_t)1)))
		{
			goto IL_0161;
		}
	}
	{
		int32_t L_33 = ChatClient_get_State_m779190608(__this, /*hidden argument*/NULL);
		int32_t L_34 = L_33;
		RuntimeObject * L_35 = Box(ChatState_t1558912819_il2cpp_TypeInfo_var, &L_34);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_36 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral243195407, L_35, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t2581629031_il2cpp_TypeInfo_var, __this, 1, L_36);
	}

IL_0161:
	{
		goto IL_01ba;
	}

IL_0166:
	{
		ChatClient_set_State_m3825103917(__this, ((int32_t)10), /*hidden argument*/NULL);
		ChatPeer_t3366739368 * L_37 = __this->get_chatPeer_15();
		NullCheck(L_37);
		VirtActionInvoker0::Invoke(8 /* System.Void ExitGames.Client.Photon.PhotonPeer::Disconnect() */, L_37);
		goto IL_01ba;
	}

IL_017e:
	{
		int32_t L_38 = ChatClient_get_State_m779190608(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_38) == ((uint32_t)4))))
		{
			goto IL_0195;
		}
	}
	{
		ChatClient_ConnectToFrontEnd_m3490933928(__this, /*hidden argument*/NULL);
		goto IL_01b5;
	}

IL_0195:
	{
		ChatClient_set_State_m3825103917(__this, ((int32_t)11), /*hidden argument*/NULL);
		RuntimeObject* L_39 = __this->get_listener_14();
		NullCheck(L_39);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void Photon.Chat.IChatClientListener::OnChatStateChange(Photon.Chat.ChatState) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_39, ((int32_t)11));
		RuntimeObject* L_40 = __this->get_listener_14();
		NullCheck(L_40);
		InterfaceActionInvoker0::Invoke(1 /* System.Void Photon.Chat.IChatClientListener::OnDisconnected() */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_40);
	}

IL_01b5:
	{
		goto IL_01ba;
	}

IL_01ba:
	{
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::SendChannelOperation(System.String[],System.Byte,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_SendChannelOperation_m35122363 (ChatClient_t792052210 * __this, StringU5BU5D_t1281789340* ___channels0, uint8_t ___operation1, int32_t ___historyLength2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_SendChannelOperation_m35122363_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t1405253484 * V_0 = NULL;
	Dictionary_2_t1405253484 * V_1 = NULL;
	{
		Dictionary_2_t1405253484 * L_0 = (Dictionary_2_t1405253484 *)il2cpp_codegen_object_new(Dictionary_2_t1405253484_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m705142683(L_0, /*hidden argument*/Dictionary_2__ctor_m705142683_RuntimeMethod_var);
		V_1 = L_0;
		Dictionary_2_t1405253484 * L_1 = V_1;
		StringU5BU5D_t1281789340* L_2 = ___channels0;
		NullCheck(L_1);
		Dictionary_2_Add_m1883976453(L_1, (uint8_t)0, (RuntimeObject *)(RuntimeObject *)L_2, /*hidden argument*/Dictionary_2_Add_m1883976453_RuntimeMethod_var);
		Dictionary_2_t1405253484 * L_3 = V_1;
		V_0 = L_3;
		int32_t L_4 = ___historyLength2;
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		Dictionary_2_t1405253484 * L_5 = V_0;
		int32_t L_6 = ___historyLength2;
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		Dictionary_2_Add_m1883976453(L_5, (uint8_t)((int32_t)14), L_8, /*hidden argument*/Dictionary_2_Add_m1883976453_RuntimeMethod_var);
	}

IL_0024:
	{
		ChatPeer_t3366739368 * L_9 = __this->get_chatPeer_15();
		uint8_t L_10 = ___operation1;
		Dictionary_2_t1405253484 * L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SendOptions_t967321410_il2cpp_TypeInfo_var);
		SendOptions_t967321410  L_12 = ((SendOptions_t967321410_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_t967321410_il2cpp_TypeInfo_var))->get_SendReliable_0();
		NullCheck(L_9);
		bool L_13 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t1405253484 *, SendOptions_t967321410  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_9, L_10, L_11, L_12);
		return L_13;
	}
}
// System.Void Photon.Chat.ChatClient::HandlePrivateMessageEvent(ExitGames.Client.Photon.EventData)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_HandlePrivateMessageEvent_m894082070 (ChatClient_t792052210 * __this, EventData_t3728223374 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_HandlePrivateMessageEvent_m894082070_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	ChatChannel_t2318116909 * V_5 = NULL;
	{
		EventData_t3728223374 * L_0 = ___eventData0;
		NullCheck(L_0);
		Dictionary_2_t1405253484 * L_1 = L_0->get_Parameters_1();
		NullCheck(L_1);
		RuntimeObject * L_2 = Dictionary_2_get_Item_m390015880(L_1, (uint8_t)3, /*hidden argument*/Dictionary_2_get_Item_m390015880_RuntimeMethod_var);
		V_0 = L_2;
		EventData_t3728223374 * L_3 = ___eventData0;
		NullCheck(L_3);
		Dictionary_2_t1405253484 * L_4 = L_3->get_Parameters_1();
		NullCheck(L_4);
		RuntimeObject * L_5 = Dictionary_2_get_Item_m390015880(L_4, (uint8_t)5, /*hidden argument*/Dictionary_2_get_Item_m390015880_RuntimeMethod_var);
		V_1 = ((String_t*)CastclassSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
		EventData_t3728223374 * L_6 = ___eventData0;
		NullCheck(L_6);
		Dictionary_2_t1405253484 * L_7 = L_6->get_Parameters_1();
		NullCheck(L_7);
		RuntimeObject * L_8 = Dictionary_2_get_Item_m390015880(L_7, (uint8_t)8, /*hidden argument*/Dictionary_2_get_Item_m390015880_RuntimeMethod_var);
		V_2 = ((*(int32_t*)((int32_t*)UnBox(L_8, Int32_t2950945753_il2cpp_TypeInfo_var))));
		String_t* L_9 = ChatClient_get_UserId_m1614431305(__this, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0072;
		}
	}
	{
		String_t* L_10 = ChatClient_get_UserId_m1614431305(__this, /*hidden argument*/NULL);
		String_t* L_11 = V_1;
		NullCheck(L_10);
		bool L_12 = String_Equals_m2270643605(L_10, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0072;
		}
	}
	{
		EventData_t3728223374 * L_13 = ___eventData0;
		NullCheck(L_13);
		Dictionary_2_t1405253484 * L_14 = L_13->get_Parameters_1();
		NullCheck(L_14);
		RuntimeObject * L_15 = Dictionary_2_get_Item_m390015880(L_14, (uint8_t)((int32_t)225), /*hidden argument*/Dictionary_2_get_Item_m390015880_RuntimeMethod_var);
		V_4 = ((String_t*)CastclassSealed((RuntimeObject*)L_15, String_t_il2cpp_TypeInfo_var));
		String_t* L_16 = V_4;
		String_t* L_17 = ChatClient_GetPrivateChannelNameByUser_m276549809(__this, L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		goto IL_007a;
	}

IL_0072:
	{
		String_t* L_18 = V_1;
		String_t* L_19 = ChatClient_GetPrivateChannelNameByUser_m276549809(__this, L_18, /*hidden argument*/NULL);
		V_3 = L_19;
	}

IL_007a:
	{
		Dictionary_2_t2103373208 * L_20 = __this->get_PrivateChannels_12();
		String_t* L_21 = V_3;
		NullCheck(L_20);
		bool L_22 = Dictionary_2_TryGetValue_m4209734297(L_20, L_21, (ChatChannel_t2318116909 **)(&V_5), /*hidden argument*/Dictionary_2_TryGetValue_m4209734297_RuntimeMethod_var);
		if (L_22)
		{
			goto IL_00be;
		}
	}
	{
		String_t* L_23 = V_3;
		ChatChannel_t2318116909 * L_24 = (ChatChannel_t2318116909 *)il2cpp_codegen_object_new(ChatChannel_t2318116909_il2cpp_TypeInfo_var);
		ChatChannel__ctor_m3846381778(L_24, L_23, /*hidden argument*/NULL);
		V_5 = L_24;
		ChatChannel_t2318116909 * L_25 = V_5;
		NullCheck(L_25);
		ChatChannel_set_IsPrivate_m1369826006(L_25, (bool)1, /*hidden argument*/NULL);
		ChatChannel_t2318116909 * L_26 = V_5;
		int32_t L_27 = __this->get_MessageLimit_10();
		NullCheck(L_26);
		L_26->set_MessageLimit_3(L_27);
		Dictionary_2_t2103373208 * L_28 = __this->get_PrivateChannels_12();
		ChatChannel_t2318116909 * L_29 = V_5;
		NullCheck(L_29);
		String_t* L_30 = L_29->get_Name_0();
		ChatChannel_t2318116909 * L_31 = V_5;
		NullCheck(L_28);
		Dictionary_2_Add_m3204002057(L_28, L_30, L_31, /*hidden argument*/Dictionary_2_Add_m3204002057_RuntimeMethod_var);
	}

IL_00be:
	{
		ChatChannel_t2318116909 * L_32 = V_5;
		String_t* L_33 = V_1;
		RuntimeObject * L_34 = V_0;
		int32_t L_35 = V_2;
		NullCheck(L_32);
		ChatChannel_Add_m3763665981(L_32, L_33, L_34, L_35, /*hidden argument*/NULL);
		RuntimeObject* L_36 = __this->get_listener_14();
		String_t* L_37 = V_1;
		RuntimeObject * L_38 = V_0;
		String_t* L_39 = V_3;
		NullCheck(L_36);
		InterfaceActionInvoker3< String_t*, RuntimeObject *, String_t* >::Invoke(5 /* System.Void Photon.Chat.IChatClientListener::OnPrivateMessage(System.String,System.Object,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_36, L_37, L_38, L_39);
		return;
	}
}
// System.Void Photon.Chat.ChatClient::HandleChatMessagesEvent(ExitGames.Client.Photon.EventData)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_HandleChatMessagesEvent_m1377968632 (ChatClient_t792052210 * __this, EventData_t3728223374 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_HandleChatMessagesEvent_m1377968632_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	StringU5BU5D_t1281789340* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	ChatChannel_t2318116909 * V_4 = NULL;
	{
		EventData_t3728223374 * L_0 = ___eventData0;
		NullCheck(L_0);
		Dictionary_2_t1405253484 * L_1 = L_0->get_Parameters_1();
		NullCheck(L_1);
		RuntimeObject * L_2 = Dictionary_2_get_Item_m390015880(L_1, (uint8_t)2, /*hidden argument*/Dictionary_2_get_Item_m390015880_RuntimeMethod_var);
		V_0 = ((ObjectU5BU5D_t2843939325*)Castclass((RuntimeObject*)L_2, ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var));
		EventData_t3728223374 * L_3 = ___eventData0;
		NullCheck(L_3);
		Dictionary_2_t1405253484 * L_4 = L_3->get_Parameters_1();
		NullCheck(L_4);
		RuntimeObject * L_5 = Dictionary_2_get_Item_m390015880(L_4, (uint8_t)4, /*hidden argument*/Dictionary_2_get_Item_m390015880_RuntimeMethod_var);
		V_1 = ((StringU5BU5D_t1281789340*)Castclass((RuntimeObject*)L_5, StringU5BU5D_t1281789340_il2cpp_TypeInfo_var));
		EventData_t3728223374 * L_6 = ___eventData0;
		NullCheck(L_6);
		Dictionary_2_t1405253484 * L_7 = L_6->get_Parameters_1();
		NullCheck(L_7);
		RuntimeObject * L_8 = Dictionary_2_get_Item_m390015880(L_7, (uint8_t)1, /*hidden argument*/Dictionary_2_get_Item_m390015880_RuntimeMethod_var);
		V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
		EventData_t3728223374 * L_9 = ___eventData0;
		NullCheck(L_9);
		Dictionary_2_t1405253484 * L_10 = L_9->get_Parameters_1();
		NullCheck(L_10);
		RuntimeObject * L_11 = Dictionary_2_get_Item_m390015880(L_10, (uint8_t)8, /*hidden argument*/Dictionary_2_get_Item_m390015880_RuntimeMethod_var);
		V_3 = ((*(int32_t*)((int32_t*)UnBox(L_11, Int32_t2950945753_il2cpp_TypeInfo_var))));
		Dictionary_2_t2103373208 * L_12 = __this->get_PublicChannels_11();
		String_t* L_13 = V_2;
		NullCheck(L_12);
		bool L_14 = Dictionary_2_TryGetValue_m4209734297(L_12, L_13, (ChatChannel_t2318116909 **)(&V_4), /*hidden argument*/Dictionary_2_TryGetValue_m4209734297_RuntimeMethod_var);
		if (L_14)
		{
			goto IL_0084;
		}
	}
	{
		uint8_t L_15 = ChatClient_get_DebugOut_m2575811291(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_15) < ((int32_t)2)))
		{
			goto IL_0083;
		}
	}
	{
		RuntimeObject* L_16 = __this->get_listener_14();
		String_t* L_17 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_18 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral2293337732, L_17, _stringLiteral2710383045, /*hidden argument*/NULL);
		NullCheck(L_16);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_16, 2, L_18);
	}

IL_0083:
	{
		return;
	}

IL_0084:
	{
		ChatChannel_t2318116909 * L_19 = V_4;
		StringU5BU5D_t1281789340* L_20 = V_1;
		ObjectU5BU5D_t2843939325* L_21 = V_0;
		int32_t L_22 = V_3;
		NullCheck(L_19);
		ChatChannel_Add_m1329789613(L_19, L_20, L_21, L_22, /*hidden argument*/NULL);
		RuntimeObject* L_23 = __this->get_listener_14();
		String_t* L_24 = V_2;
		StringU5BU5D_t1281789340* L_25 = V_1;
		ObjectU5BU5D_t2843939325* L_26 = V_0;
		NullCheck(L_23);
		InterfaceActionInvoker3< String_t*, StringU5BU5D_t1281789340*, ObjectU5BU5D_t2843939325* >::Invoke(4 /* System.Void Photon.Chat.IChatClientListener::OnGetMessages(System.String,System.String[],System.Object[]) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_23, L_24, L_25, L_26);
		return;
	}
}
// System.Void Photon.Chat.ChatClient::HandleSubscribeEvent(ExitGames.Client.Photon.EventData)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_HandleSubscribeEvent_m3618184068 (ChatClient_t792052210 * __this, EventData_t3728223374 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_HandleSubscribeEvent_m3618184068_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t1281789340* V_0 = NULL;
	BooleanU5BU5D_t2897418192* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	Dictionary_2_t132545152 * V_3 = NULL;
	String_t* V_4 = NULL;
	ChatChannel_t2318116909 * V_5 = NULL;
	StringU5BU5D_t1281789340* V_6 = NULL;
	int32_t V_7 = 0;
	String_t* V_8 = NULL;
	ChatChannel_t2318116909 * V_9 = NULL;
	{
		EventData_t3728223374 * L_0 = ___eventData0;
		NullCheck(L_0);
		Dictionary_2_t1405253484 * L_1 = L_0->get_Parameters_1();
		NullCheck(L_1);
		RuntimeObject * L_2 = Dictionary_2_get_Item_m390015880(L_1, (uint8_t)0, /*hidden argument*/Dictionary_2_get_Item_m390015880_RuntimeMethod_var);
		V_0 = ((StringU5BU5D_t1281789340*)Castclass((RuntimeObject*)L_2, StringU5BU5D_t1281789340_il2cpp_TypeInfo_var));
		EventData_t3728223374 * L_3 = ___eventData0;
		NullCheck(L_3);
		Dictionary_2_t1405253484 * L_4 = L_3->get_Parameters_1();
		NullCheck(L_4);
		RuntimeObject * L_5 = Dictionary_2_get_Item_m390015880(L_4, (uint8_t)((int32_t)15), /*hidden argument*/Dictionary_2_get_Item_m390015880_RuntimeMethod_var);
		V_1 = ((BooleanU5BU5D_t2897418192*)Castclass((RuntimeObject*)L_5, BooleanU5BU5D_t2897418192_il2cpp_TypeInfo_var));
		EventData_t3728223374 * L_6 = ___eventData0;
		NullCheck(L_6);
		Dictionary_2_t1405253484 * L_7 = L_6->get_Parameters_1();
		NullCheck(L_7);
		bool L_8 = Dictionary_2_TryGetValue_m1372101825(L_7, (uint8_t)((int32_t)22), (RuntimeObject **)(&V_2), /*hidden argument*/Dictionary_2_TryGetValue_m1372101825_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_010b;
		}
	}
	{
		RuntimeObject * L_9 = V_2;
		V_3 = ((Dictionary_2_t132545152 *)IsInstClass((RuntimeObject*)L_9, Dictionary_2_t132545152_il2cpp_TypeInfo_var));
		StringU5BU5D_t1281789340* L_10 = V_0;
		NullCheck(L_10);
		if ((!(((uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length))))) == ((uint32_t)1))))
		{
			goto IL_00fa;
		}
	}
	{
		BooleanU5BU5D_t2897418192* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = 0;
		uint8_t L_13 = (uint8_t)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		if (!L_13)
		{
			goto IL_00ec;
		}
	}
	{
		StringU5BU5D_t1281789340* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = 0;
		String_t* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_4 = L_16;
		Dictionary_2_t2103373208 * L_17 = __this->get_PublicChannels_11();
		String_t* L_18 = V_4;
		NullCheck(L_17);
		bool L_19 = Dictionary_2_TryGetValue_m4209734297(L_17, L_18, (ChatChannel_t2318116909 **)(&V_5), /*hidden argument*/Dictionary_2_TryGetValue_m4209734297_RuntimeMethod_var);
		if (!L_19)
		{
			goto IL_0082;
		}
	}
	{
		ChatChannel_t2318116909 * L_20 = V_5;
		NullCheck(L_20);
		HashSet_1_t412400163 * L_21 = L_20->get_Subscribers_9();
		NullCheck(L_21);
		HashSet_1_Clear_m3342517819(L_21, /*hidden argument*/HashSet_1_Clear_m3342517819_RuntimeMethod_var);
		ChatChannel_t2318116909 * L_22 = V_5;
		NullCheck(L_22);
		ChatChannel_ClearProperties_m937654232(L_22, /*hidden argument*/NULL);
		goto IL_00ac;
	}

IL_0082:
	{
		String_t* L_23 = V_4;
		ChatChannel_t2318116909 * L_24 = (ChatChannel_t2318116909 *)il2cpp_codegen_object_new(ChatChannel_t2318116909_il2cpp_TypeInfo_var);
		ChatChannel__ctor_m3846381778(L_24, L_23, /*hidden argument*/NULL);
		V_5 = L_24;
		ChatChannel_t2318116909 * L_25 = V_5;
		int32_t L_26 = __this->get_MessageLimit_10();
		NullCheck(L_25);
		L_25->set_MessageLimit_3(L_26);
		Dictionary_2_t2103373208 * L_27 = __this->get_PublicChannels_11();
		ChatChannel_t2318116909 * L_28 = V_5;
		NullCheck(L_28);
		String_t* L_29 = L_28->get_Name_0();
		ChatChannel_t2318116909 * L_30 = V_5;
		NullCheck(L_27);
		Dictionary_2_Add_m3204002057(L_27, L_29, L_30, /*hidden argument*/Dictionary_2_Add_m3204002057_RuntimeMethod_var);
	}

IL_00ac:
	{
		ChatChannel_t2318116909 * L_31 = V_5;
		Dictionary_2_t132545152 * L_32 = V_3;
		NullCheck(L_31);
		ChatChannel_ReadProperties_m768176894(L_31, L_32, /*hidden argument*/NULL);
		EventData_t3728223374 * L_33 = ___eventData0;
		NullCheck(L_33);
		Dictionary_2_t1405253484 * L_34 = L_33->get_Parameters_1();
		NullCheck(L_34);
		bool L_35 = Dictionary_2_TryGetValue_m1372101825(L_34, (uint8_t)((int32_t)23), (RuntimeObject **)(&V_2), /*hidden argument*/Dictionary_2_TryGetValue_m1372101825_RuntimeMethod_var);
		if (!L_35)
		{
			goto IL_00ec;
		}
	}
	{
		RuntimeObject * L_36 = V_2;
		V_6 = ((StringU5BU5D_t1281789340*)IsInst((RuntimeObject*)L_36, StringU5BU5D_t1281789340_il2cpp_TypeInfo_var));
		ChatChannel_t2318116909 * L_37 = V_5;
		NullCheck(L_37);
		HashSet_1_t412400163 * L_38 = L_37->get_Subscribers_9();
		String_t* L_39 = ChatClient_get_UserId_m1614431305(__this, /*hidden argument*/NULL);
		NullCheck(L_38);
		HashSet_1_Add_m2788916881(L_38, L_39, /*hidden argument*/HashSet_1_Add_m2788916881_RuntimeMethod_var);
		ChatChannel_t2318116909 * L_40 = V_5;
		StringU5BU5D_t1281789340* L_41 = V_6;
		NullCheck(L_40);
		ChatChannel_AddSubscribers_m4115425855(L_40, L_41, /*hidden argument*/NULL);
	}

IL_00ec:
	{
		RuntimeObject* L_42 = __this->get_listener_14();
		StringU5BU5D_t1281789340* L_43 = V_0;
		BooleanU5BU5D_t2897418192* L_44 = V_1;
		NullCheck(L_42);
		InterfaceActionInvoker2< StringU5BU5D_t1281789340*, BooleanU5BU5D_t2897418192* >::Invoke(6 /* System.Void Photon.Chat.IChatClientListener::OnSubscribed(System.String[],System.Boolean[]) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_42, L_43, L_44);
		return;
	}

IL_00fa:
	{
		RuntimeObject* L_45 = __this->get_listener_14();
		NullCheck(L_45);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_45, 1, _stringLiteral3564542839);
	}

IL_010b:
	{
		V_7 = 0;
		goto IL_0166;
	}

IL_0113:
	{
		BooleanU5BU5D_t2897418192* L_46 = V_1;
		int32_t L_47 = V_7;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		uint8_t L_49 = (uint8_t)(L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		if (!L_49)
		{
			goto IL_0160;
		}
	}
	{
		StringU5BU5D_t1281789340* L_50 = V_0;
		int32_t L_51 = V_7;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		String_t* L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		V_8 = L_53;
		Dictionary_2_t2103373208 * L_54 = __this->get_PublicChannels_11();
		String_t* L_55 = V_8;
		NullCheck(L_54);
		bool L_56 = Dictionary_2_TryGetValue_m4209734297(L_54, L_55, (ChatChannel_t2318116909 **)(&V_9), /*hidden argument*/Dictionary_2_TryGetValue_m4209734297_RuntimeMethod_var);
		if (L_56)
		{
			goto IL_0160;
		}
	}
	{
		String_t* L_57 = V_8;
		ChatChannel_t2318116909 * L_58 = (ChatChannel_t2318116909 *)il2cpp_codegen_object_new(ChatChannel_t2318116909_il2cpp_TypeInfo_var);
		ChatChannel__ctor_m3846381778(L_58, L_57, /*hidden argument*/NULL);
		V_9 = L_58;
		ChatChannel_t2318116909 * L_59 = V_9;
		int32_t L_60 = __this->get_MessageLimit_10();
		NullCheck(L_59);
		L_59->set_MessageLimit_3(L_60);
		Dictionary_2_t2103373208 * L_61 = __this->get_PublicChannels_11();
		ChatChannel_t2318116909 * L_62 = V_9;
		NullCheck(L_62);
		String_t* L_63 = L_62->get_Name_0();
		ChatChannel_t2318116909 * L_64 = V_9;
		NullCheck(L_61);
		Dictionary_2_Add_m3204002057(L_61, L_63, L_64, /*hidden argument*/Dictionary_2_Add_m3204002057_RuntimeMethod_var);
	}

IL_0160:
	{
		int32_t L_65 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)1));
	}

IL_0166:
	{
		int32_t L_66 = V_7;
		StringU5BU5D_t1281789340* L_67 = V_0;
		NullCheck(L_67);
		if ((((int32_t)L_66) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_67)->max_length)))))))
		{
			goto IL_0113;
		}
	}
	{
		RuntimeObject* L_68 = __this->get_listener_14();
		StringU5BU5D_t1281789340* L_69 = V_0;
		BooleanU5BU5D_t2897418192* L_70 = V_1;
		NullCheck(L_68);
		InterfaceActionInvoker2< StringU5BU5D_t1281789340*, BooleanU5BU5D_t2897418192* >::Invoke(6 /* System.Void Photon.Chat.IChatClientListener::OnSubscribed(System.String[],System.Boolean[]) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_68, L_69, L_70);
		return;
	}
}
// System.Void Photon.Chat.ChatClient::HandleUnsubscribeEvent(ExitGames.Client.Photon.EventData)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_HandleUnsubscribeEvent_m2964998100 (ChatClient_t792052210 * __this, EventData_t3728223374 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_HandleUnsubscribeEvent_m2964998100_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t1281789340* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		EventData_t3728223374 * L_0 = ___eventData0;
		NullCheck(L_0);
		RuntimeObject * L_1 = EventData_get_Item_m933827050(L_0, (uint8_t)0, /*hidden argument*/NULL);
		V_0 = ((StringU5BU5D_t1281789340*)Castclass((RuntimeObject*)L_1, StringU5BU5D_t1281789340_il2cpp_TypeInfo_var));
		V_1 = 0;
		goto IL_0036;
	}

IL_0014:
	{
		StringU5BU5D_t1281789340* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		Dictionary_2_t2103373208 * L_6 = __this->get_PublicChannels_11();
		String_t* L_7 = V_2;
		NullCheck(L_6);
		Dictionary_2_Remove_m2545012917(L_6, L_7, /*hidden argument*/Dictionary_2_Remove_m2545012917_RuntimeMethod_var);
		HashSet_1_t412400163 * L_8 = __this->get_PublicChannelsUnsubscribing_13();
		String_t* L_9 = V_2;
		NullCheck(L_8);
		HashSet_1_Remove_m2792738130(L_8, L_9, /*hidden argument*/HashSet_1_Remove_m2792738130_RuntimeMethod_var);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0036:
	{
		int32_t L_11 = V_1;
		StringU5BU5D_t1281789340* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_13 = __this->get_listener_14();
		StringU5BU5D_t1281789340* L_14 = V_0;
		NullCheck(L_13);
		InterfaceActionInvoker1< StringU5BU5D_t1281789340* >::Invoke(7 /* System.Void Photon.Chat.IChatClientListener::OnUnsubscribed(System.String[]) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_13, L_14);
		return;
	}
}
// System.Void Photon.Chat.ChatClient::HandleAuthResponse(ExitGames.Client.Photon.OperationResponse)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_HandleAuthResponse_m3178849132 (ChatClient_t792052210 * __this, OperationResponse_t423627973 * ___operationResponse0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_HandleAuthResponse_m3178849132_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Nullable_1_t378540539  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int16_t V_2 = 0;
	{
		uint8_t L_0 = ChatClient_get_DebugOut_m2575811291(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) < ((int32_t)3)))
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_listener_14();
		OperationResponse_t423627973 * L_2 = ___operationResponse0;
		NullCheck(L_2);
		String_t* L_3 = OperationResponse_ToStringFull_m250125288(L_2, /*hidden argument*/NULL);
		ChatPeer_t3366739368 * L_4 = __this->get_chatPeer_15();
		NullCheck(L_4);
		String_t* L_5 = ChatPeer_get_NameServerAddress_m2456527619(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m3755062657(NULL /*static, unused*/, L_3, _stringLiteral971260362, L_5, /*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_1, 3, L_6);
	}

IL_0033:
	{
		OperationResponse_t423627973 * L_7 = ___operationResponse0;
		NullCheck(L_7);
		int16_t L_8 = L_7->get_ReturnCode_1();
		if (L_8)
		{
			goto IL_01b4;
		}
	}
	{
		int32_t L_9 = ChatClient_get_State_m779190608(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_0149;
		}
	}
	{
		ChatClient_set_State_m3825103917(__this, 4, /*hidden argument*/NULL);
		RuntimeObject* L_10 = __this->get_listener_14();
		int32_t L_11 = ChatClient_get_State_m779190608(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void Photon.Chat.IChatClientListener::OnChatStateChange(Photon.Chat.ChatState) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_10, L_11);
		OperationResponse_t423627973 * L_12 = ___operationResponse0;
		NullCheck(L_12);
		Dictionary_2_t1405253484 * L_13 = L_12->get_Parameters_3();
		NullCheck(L_13);
		bool L_14 = Dictionary_2_ContainsKey_m2477779308(L_13, (uint8_t)((int32_t)221), /*hidden argument*/Dictionary_2_ContainsKey_m2477779308_RuntimeMethod_var);
		if (!L_14)
		{
			goto IL_00ce;
		}
	}
	{
		AuthenticationValues_t563695058 * L_15 = ChatClient_get_AuthValues_m1343650260(__this, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_008d;
		}
	}
	{
		AuthenticationValues_t563695058 * L_16 = (AuthenticationValues_t563695058 *)il2cpp_codegen_object_new(AuthenticationValues_t563695058_il2cpp_TypeInfo_var);
		AuthenticationValues__ctor_m2748796689(L_16, /*hidden argument*/NULL);
		ChatClient_set_AuthValues_m2891279403(__this, L_16, /*hidden argument*/NULL);
	}

IL_008d:
	{
		AuthenticationValues_t563695058 * L_17 = ChatClient_get_AuthValues_m1343650260(__this, /*hidden argument*/NULL);
		OperationResponse_t423627973 * L_18 = ___operationResponse0;
		NullCheck(L_18);
		RuntimeObject * L_19 = OperationResponse_get_Item_m3136215957(L_18, (uint8_t)((int32_t)221), /*hidden argument*/NULL);
		NullCheck(L_17);
		AuthenticationValues_set_Token_m1158506906(L_17, ((String_t*)IsInstSealed((RuntimeObject*)L_19, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		OperationResponse_t423627973 * L_20 = ___operationResponse0;
		NullCheck(L_20);
		RuntimeObject * L_21 = OperationResponse_get_Item_m3136215957(L_20, (uint8_t)((int32_t)230), /*hidden argument*/NULL);
		ChatClient_set_FrontendAddress_m2203636551(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_21, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		ChatPeer_t3366739368 * L_22 = __this->get_chatPeer_15();
		NullCheck(L_22);
		VirtActionInvoker0::Invoke(8 /* System.Void ExitGames.Client.Photon.PhotonPeer::Disconnect() */, L_22);
		goto IL_00eb;
	}

IL_00ce:
	{
		uint8_t L_23 = ChatClient_get_DebugOut_m2575811291(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_23) < ((int32_t)1)))
		{
			goto IL_00eb;
		}
	}
	{
		RuntimeObject* L_24 = __this->get_listener_14();
		NullCheck(L_24);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_24, 1, _stringLiteral3310092652);
	}

IL_00eb:
	{
		OperationResponse_t423627973 * L_25 = ___operationResponse0;
		NullCheck(L_25);
		Dictionary_2_t1405253484 * L_26 = L_25->get_Parameters_3();
		NullCheck(L_26);
		bool L_27 = Dictionary_2_ContainsKey_m2477779308(L_26, (uint8_t)((int32_t)225), /*hidden argument*/Dictionary_2_ContainsKey_m2477779308_RuntimeMethod_var);
		if (!L_27)
		{
			goto IL_0144;
		}
	}
	{
		OperationResponse_t423627973 * L_28 = ___operationResponse0;
		NullCheck(L_28);
		Dictionary_2_t1405253484 * L_29 = L_28->get_Parameters_3();
		NullCheck(L_29);
		RuntimeObject * L_30 = Dictionary_2_get_Item_m390015880(L_29, (uint8_t)((int32_t)225), /*hidden argument*/Dictionary_2_get_Item_m390015880_RuntimeMethod_var);
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_30, String_t_il2cpp_TypeInfo_var));
		String_t* L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_32 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_0144;
		}
	}
	{
		String_t* L_33 = V_0;
		ChatClient_set_UserId_m2079859072(__this, L_33, /*hidden argument*/NULL);
		RuntimeObject* L_34 = __this->get_listener_14();
		String_t* L_35 = ChatClient_get_UserId_m1614431305(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_36 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3282781049, L_35, /*hidden argument*/NULL);
		NullCheck(L_34);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_34, 3, L_36);
	}

IL_0144:
	{
		goto IL_01af;
	}

IL_0149:
	{
		int32_t L_37 = ChatClient_get_State_m779190608(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_37) == ((uint32_t)6))))
		{
			goto IL_01af;
		}
	}
	{
		ChatClient_set_State_m3825103917(__this, 7, /*hidden argument*/NULL);
		RuntimeObject* L_38 = __this->get_listener_14();
		int32_t L_39 = ChatClient_get_State_m779190608(__this, /*hidden argument*/NULL);
		NullCheck(L_38);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void Photon.Chat.IChatClientListener::OnChatStateChange(Photon.Chat.ChatState) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_38, L_39);
		RuntimeObject* L_40 = __this->get_listener_14();
		NullCheck(L_40);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Photon.Chat.IChatClientListener::OnConnected() */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_40);
		Nullable_1_t378540539 * L_41 = __this->get_address_of_statusToSetWhenConnected_18();
		bool L_42 = Nullable_1_get_HasValue_m350283068((Nullable_1_t378540539 *)L_41, /*hidden argument*/Nullable_1_get_HasValue_m350283068_RuntimeMethod_var);
		if (!L_42)
		{
			goto IL_01af;
		}
	}
	{
		Nullable_1_t378540539 * L_43 = __this->get_address_of_statusToSetWhenConnected_18();
		int32_t L_44 = Nullable_1_get_Value_m745926140((Nullable_1_t378540539 *)L_43, /*hidden argument*/Nullable_1_get_Value_m745926140_RuntimeMethod_var);
		RuntimeObject * L_45 = __this->get_messageToSetWhenConnected_19();
		ChatClient_SetOnlineStatus_m1331156303(__this, L_44, L_45, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t378540539 ));
		Nullable_1_t378540539  L_46 = V_1;
		__this->set_statusToSetWhenConnected_18(L_46);
	}

IL_01af:
	{
		goto IL_026e;
	}

IL_01b4:
	{
		OperationResponse_t423627973 * L_47 = ___operationResponse0;
		NullCheck(L_47);
		int16_t L_48 = L_47->get_ReturnCode_1();
		V_2 = L_48;
		int16_t L_49 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_49, (int32_t)((int32_t)32755))))
		{
			case 0:
			{
				goto IL_01f7;
			}
			case 1:
			{
				goto IL_0204;
			}
			case 2:
			{
				goto IL_0210;
			}
		}
	}
	{
		int16_t L_50 = V_2;
		if ((((int32_t)L_50) == ((int32_t)((int32_t)-3))))
		{
			goto IL_021c;
		}
	}
	{
		int16_t L_51 = V_2;
		if ((((int32_t)L_51) == ((int32_t)((int32_t)32767))))
		{
			goto IL_01eb;
		}
	}
	{
		goto IL_0229;
	}

IL_01eb:
	{
		ChatClient_set_DisconnectedCause_m1169307040(__this, 6, /*hidden argument*/NULL);
		goto IL_0229;
	}

IL_01f7:
	{
		ChatClient_set_DisconnectedCause_m1169307040(__this, ((int32_t)10), /*hidden argument*/NULL);
		goto IL_0229;
	}

IL_0204:
	{
		ChatClient_set_DisconnectedCause_m1169307040(__this, 8, /*hidden argument*/NULL);
		goto IL_0229;
	}

IL_0210:
	{
		ChatClient_set_DisconnectedCause_m1169307040(__this, 7, /*hidden argument*/NULL);
		goto IL_0229;
	}

IL_021c:
	{
		ChatClient_set_DisconnectedCause_m1169307040(__this, ((int32_t)9), /*hidden argument*/NULL);
		goto IL_0229;
	}

IL_0229:
	{
		uint8_t L_52 = ChatClient_get_DebugOut_m2575811291(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_52) < ((int32_t)1)))
		{
			goto IL_025b;
		}
	}
	{
		RuntimeObject* L_53 = __this->get_listener_14();
		OperationResponse_t423627973 * L_54 = ___operationResponse0;
		NullCheck(L_54);
		int16_t L_55 = L_54->get_ReturnCode_1();
		int16_t L_56 = L_55;
		RuntimeObject * L_57 = Box(Int16_t2552820387_il2cpp_TypeInfo_var, &L_56);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_58 = String_Concat_m1715369213(NULL /*static, unused*/, _stringLiteral2745384855, L_57, _stringLiteral141983300, /*hidden argument*/NULL);
		NullCheck(L_53);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_53, 1, L_58);
	}

IL_025b:
	{
		ChatClient_set_State_m3825103917(__this, ((int32_t)10), /*hidden argument*/NULL);
		ChatPeer_t3366739368 * L_59 = __this->get_chatPeer_15();
		NullCheck(L_59);
		VirtActionInvoker0::Invoke(8 /* System.Void ExitGames.Client.Photon.PhotonPeer::Disconnect() */, L_59);
	}

IL_026e:
	{
		return;
	}
}
// System.Void Photon.Chat.ChatClient::HandleStatusUpdate(ExitGames.Client.Photon.EventData)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_HandleStatusUpdate_m576156692 (ChatClient_t792052210 * __this, EventData_t3728223374 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_HandleStatusUpdate_m576156692_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject * V_2 = NULL;
	bool V_3 = false;
	{
		EventData_t3728223374 * L_0 = ___eventData0;
		NullCheck(L_0);
		Dictionary_2_t1405253484 * L_1 = L_0->get_Parameters_1();
		NullCheck(L_1);
		RuntimeObject * L_2 = Dictionary_2_get_Item_m390015880(L_1, (uint8_t)5, /*hidden argument*/Dictionary_2_get_Item_m390015880_RuntimeMethod_var);
		V_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		EventData_t3728223374 * L_3 = ___eventData0;
		NullCheck(L_3);
		Dictionary_2_t1405253484 * L_4 = L_3->get_Parameters_1();
		NullCheck(L_4);
		RuntimeObject * L_5 = Dictionary_2_get_Item_m390015880(L_4, (uint8_t)((int32_t)10), /*hidden argument*/Dictionary_2_get_Item_m390015880_RuntimeMethod_var);
		V_1 = ((*(int32_t*)((int32_t*)UnBox(L_5, Int32_t2950945753_il2cpp_TypeInfo_var))));
		V_2 = NULL;
		EventData_t3728223374 * L_6 = ___eventData0;
		NullCheck(L_6);
		Dictionary_2_t1405253484 * L_7 = L_6->get_Parameters_1();
		NullCheck(L_7);
		bool L_8 = Dictionary_2_ContainsKey_m2477779308(L_7, (uint8_t)3, /*hidden argument*/Dictionary_2_ContainsKey_m2477779308_RuntimeMethod_var);
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0047;
		}
	}
	{
		EventData_t3728223374 * L_10 = ___eventData0;
		NullCheck(L_10);
		Dictionary_2_t1405253484 * L_11 = L_10->get_Parameters_1();
		NullCheck(L_11);
		RuntimeObject * L_12 = Dictionary_2_get_Item_m390015880(L_11, (uint8_t)3, /*hidden argument*/Dictionary_2_get_Item_m390015880_RuntimeMethod_var);
		V_2 = L_12;
	}

IL_0047:
	{
		RuntimeObject* L_13 = __this->get_listener_14();
		String_t* L_14 = V_0;
		int32_t L_15 = V_1;
		bool L_16 = V_3;
		RuntimeObject * L_17 = V_2;
		NullCheck(L_13);
		InterfaceActionInvoker4< String_t*, int32_t, bool, RuntimeObject * >::Invoke(8 /* System.Void Photon.Chat.IChatClientListener::OnStatusUpdate(System.String,System.Int32,System.Boolean,System.Object) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_13, L_14, L_15, L_16, L_17);
		return;
	}
}
// System.Void Photon.Chat.ChatClient::ConnectToFrontEnd()
extern "C" IL2CPP_METHOD_ATTR void ChatClient_ConnectToFrontEnd_m3490933928 (ChatClient_t792052210 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_ConnectToFrontEnd_m3490933928_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ChatClient_set_State_m3825103917(__this, 6, /*hidden argument*/NULL);
		uint8_t L_0 = ChatClient_get_DebugOut_m2575811291(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) < ((int32_t)3)))
		{
			goto IL_002f;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_listener_14();
		String_t* L_2 = ChatClient_get_FrontendAddress_m1428612293(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral4248144891, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_1, 3, L_3);
	}

IL_002f:
	{
		ChatPeer_t3366739368 * L_4 = __this->get_chatPeer_15();
		String_t* L_5 = ChatClient_get_FrontendAddress_m1428612293(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtFuncInvoker2< bool, String_t*, String_t* >::Invoke(6 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::Connect(System.String,System.String) */, L_4, L_5, _stringLiteral3491294946);
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::AuthenticateOnFrontEnd()
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_AuthenticateOnFrontEnd_m1407618497 (ChatClient_t792052210 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_AuthenticateOnFrontEnd_m1407618497_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t1405253484 * V_0 = NULL;
	Dictionary_2_t1405253484 * V_1 = NULL;
	{
		AuthenticationValues_t563695058 * L_0 = ChatClient_get_AuthValues_m1343650260(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0074;
		}
	}
	{
		AuthenticationValues_t563695058 * L_1 = ChatClient_get_AuthValues_m1343650260(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = AuthenticationValues_get_Token_m4283956602(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		uint8_t L_4 = ChatClient_get_DebugOut_m2575811291(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_4) < ((int32_t)1)))
		{
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_5 = __this->get_listener_14();
		NullCheck(L_5);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_5, 1, _stringLiteral658479582);
	}

IL_003d:
	{
		return (bool)0;
	}

IL_003f:
	{
		Dictionary_2_t1405253484 * L_6 = (Dictionary_2_t1405253484 *)il2cpp_codegen_object_new(Dictionary_2_t1405253484_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m705142683(L_6, /*hidden argument*/Dictionary_2__ctor_m705142683_RuntimeMethod_var);
		V_1 = L_6;
		Dictionary_2_t1405253484 * L_7 = V_1;
		AuthenticationValues_t563695058 * L_8 = ChatClient_get_AuthValues_m1343650260(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		String_t* L_9 = AuthenticationValues_get_Token_m4283956602(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		Dictionary_2_Add_m1883976453(L_7, (uint8_t)((int32_t)221), L_9, /*hidden argument*/Dictionary_2_Add_m1883976453_RuntimeMethod_var);
		Dictionary_2_t1405253484 * L_10 = V_1;
		V_0 = L_10;
		ChatPeer_t3366739368 * L_11 = __this->get_chatPeer_15();
		Dictionary_2_t1405253484 * L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SendOptions_t967321410_il2cpp_TypeInfo_var);
		SendOptions_t967321410  L_13 = ((SendOptions_t967321410_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_t967321410_il2cpp_TypeInfo_var))->get_SendReliable_0();
		NullCheck(L_11);
		bool L_14 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t1405253484 *, SendOptions_t967321410  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_11, (uint8_t)((int32_t)230), L_12, L_13);
		return L_14;
	}

IL_0074:
	{
		uint8_t L_15 = ChatClient_get_DebugOut_m2575811291(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_15) < ((int32_t)1)))
		{
			goto IL_0091;
		}
	}
	{
		RuntimeObject* L_16 = __this->get_listener_14();
		NullCheck(L_16);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_16, 1, _stringLiteral3365298896);
	}

IL_0091:
	{
		return (bool)0;
	}
}
// System.Void Photon.Chat.ChatClient::HandleUserUnsubscribedEvent(ExitGames.Client.Photon.EventData)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_HandleUserUnsubscribedEvent_m677700852 (ChatClient_t792052210 * __this, EventData_t3728223374 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_HandleUserUnsubscribedEvent_m677700852_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	ChatChannel_t2318116909 * V_2 = NULL;
	{
		EventData_t3728223374 * L_0 = ___eventData0;
		NullCheck(L_0);
		Dictionary_2_t1405253484 * L_1 = L_0->get_Parameters_1();
		NullCheck(L_1);
		RuntimeObject * L_2 = Dictionary_2_get_Item_m390015880(L_1, (uint8_t)1, /*hidden argument*/Dictionary_2_get_Item_m390015880_RuntimeMethod_var);
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		EventData_t3728223374 * L_3 = ___eventData0;
		NullCheck(L_3);
		Dictionary_2_t1405253484 * L_4 = L_3->get_Parameters_1();
		NullCheck(L_4);
		RuntimeObject * L_5 = Dictionary_2_get_Item_m390015880(L_4, (uint8_t)((int32_t)225), /*hidden argument*/Dictionary_2_get_Item_m390015880_RuntimeMethod_var);
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
		Dictionary_2_t2103373208 * L_6 = __this->get_PublicChannels_11();
		String_t* L_7 = V_0;
		NullCheck(L_6);
		bool L_8 = Dictionary_2_TryGetValue_m4209734297(L_6, L_7, (ChatChannel_t2318116909 **)(&V_2), /*hidden argument*/Dictionary_2_TryGetValue_m4209734297_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_00a4;
		}
	}
	{
		ChatChannel_t2318116909 * L_9 = V_2;
		NullCheck(L_9);
		bool L_10 = ChatChannel_get_PublishSubscribers_m807584822(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_006a;
		}
	}
	{
		uint8_t L_11 = ChatClient_get_DebugOut_m2575811291(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_11) < ((int32_t)2)))
		{
			goto IL_006a;
		}
	}
	{
		RuntimeObject* L_12 = __this->get_listener_14();
		String_t* L_13 = V_0;
		String_t* L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral2771931429, L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_12, 2, L_15);
	}

IL_006a:
	{
		ChatChannel_t2318116909 * L_16 = V_2;
		NullCheck(L_16);
		HashSet_1_t412400163 * L_17 = L_16->get_Subscribers_9();
		String_t* L_18 = V_1;
		NullCheck(L_17);
		bool L_19 = HashSet_1_Remove_m2792738130(L_17, L_18, /*hidden argument*/HashSet_1_Remove_m2792738130_RuntimeMethod_var);
		if (L_19)
		{
			goto IL_009f;
		}
	}
	{
		uint8_t L_20 = ChatClient_get_DebugOut_m2575811291(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_20) < ((int32_t)2)))
		{
			goto IL_009f;
		}
	}
	{
		RuntimeObject* L_21 = __this->get_listener_14();
		String_t* L_22 = V_0;
		String_t* L_23 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_24 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral2061077483, L_22, L_23, /*hidden argument*/NULL);
		NullCheck(L_21);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_21, 2, L_24);
	}

IL_009f:
	{
		goto IL_00c8;
	}

IL_00a4:
	{
		uint8_t L_25 = ChatClient_get_DebugOut_m2575811291(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_25) < ((int32_t)2)))
		{
			goto IL_00c8;
		}
	}
	{
		RuntimeObject* L_26 = __this->get_listener_14();
		String_t* L_27 = V_0;
		String_t* L_28 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_29 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral1392571287, L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_26, 2, L_29);
	}

IL_00c8:
	{
		RuntimeObject* L_30 = __this->get_listener_14();
		String_t* L_31 = V_0;
		String_t* L_32 = V_1;
		NullCheck(L_30);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(10 /* System.Void Photon.Chat.IChatClientListener::OnUserUnsubscribed(System.String,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_30, L_31, L_32);
		return;
	}
}
// System.Void Photon.Chat.ChatClient::HandleUserSubscribedEvent(ExitGames.Client.Photon.EventData)
extern "C" IL2CPP_METHOD_ATTR void ChatClient_HandleUserSubscribedEvent_m3530604099 (ChatClient_t792052210 * __this, EventData_t3728223374 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_HandleUserSubscribedEvent_m3530604099_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	ChatChannel_t2318116909 * V_2 = NULL;
	{
		EventData_t3728223374 * L_0 = ___eventData0;
		NullCheck(L_0);
		Dictionary_2_t1405253484 * L_1 = L_0->get_Parameters_1();
		NullCheck(L_1);
		RuntimeObject * L_2 = Dictionary_2_get_Item_m390015880(L_1, (uint8_t)1, /*hidden argument*/Dictionary_2_get_Item_m390015880_RuntimeMethod_var);
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		EventData_t3728223374 * L_3 = ___eventData0;
		NullCheck(L_3);
		Dictionary_2_t1405253484 * L_4 = L_3->get_Parameters_1();
		NullCheck(L_4);
		RuntimeObject * L_5 = Dictionary_2_get_Item_m390015880(L_4, (uint8_t)((int32_t)225), /*hidden argument*/Dictionary_2_get_Item_m390015880_RuntimeMethod_var);
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
		Dictionary_2_t2103373208 * L_6 = __this->get_PublicChannels_11();
		String_t* L_7 = V_0;
		NullCheck(L_6);
		bool L_8 = Dictionary_2_TryGetValue_m4209734297(L_6, L_7, (ChatChannel_t2318116909 **)(&V_2), /*hidden argument*/Dictionary_2_TryGetValue_m4209734297_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_0109;
		}
	}
	{
		ChatChannel_t2318116909 * L_9 = V_2;
		NullCheck(L_9);
		bool L_10 = ChatChannel_get_PublishSubscribers_m807584822(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_006a;
		}
	}
	{
		uint8_t L_11 = ChatClient_get_DebugOut_m2575811291(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_11) < ((int32_t)2)))
		{
			goto IL_006a;
		}
	}
	{
		RuntimeObject* L_12 = __this->get_listener_14();
		String_t* L_13 = V_0;
		String_t* L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral2335035243, L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_12, 2, L_15);
	}

IL_006a:
	{
		ChatChannel_t2318116909 * L_16 = V_2;
		NullCheck(L_16);
		HashSet_1_t412400163 * L_17 = L_16->get_Subscribers_9();
		String_t* L_18 = V_1;
		NullCheck(L_17);
		bool L_19 = HashSet_1_Add_m2788916881(L_17, L_18, /*hidden argument*/HashSet_1_Add_m2788916881_RuntimeMethod_var);
		if (L_19)
		{
			goto IL_00a4;
		}
	}
	{
		uint8_t L_20 = ChatClient_get_DebugOut_m2575811291(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_20) < ((int32_t)2)))
		{
			goto IL_009f;
		}
	}
	{
		RuntimeObject* L_21 = __this->get_listener_14();
		String_t* L_22 = V_0;
		String_t* L_23 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_24 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral3700822831, L_22, L_23, /*hidden argument*/NULL);
		NullCheck(L_21);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_21, 2, L_24);
	}

IL_009f:
	{
		goto IL_0104;
	}

IL_00a4:
	{
		ChatChannel_t2318116909 * L_25 = V_2;
		NullCheck(L_25);
		int32_t L_26 = ChatChannel_get_MaxSubscribers_m1081428401(L_25, /*hidden argument*/NULL);
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_0104;
		}
	}
	{
		ChatChannel_t2318116909 * L_27 = V_2;
		NullCheck(L_27);
		HashSet_1_t412400163 * L_28 = L_27->get_Subscribers_9();
		NullCheck(L_28);
		int32_t L_29 = HashSet_1_get_Count_m2534887753(L_28, /*hidden argument*/HashSet_1_get_Count_m2534887753_RuntimeMethod_var);
		ChatChannel_t2318116909 * L_30 = V_2;
		NullCheck(L_30);
		int32_t L_31 = ChatChannel_get_MaxSubscribers_m1081428401(L_30, /*hidden argument*/NULL);
		if ((((int32_t)L_29) <= ((int32_t)L_31)))
		{
			goto IL_0104;
		}
	}
	{
		uint8_t L_32 = ChatClient_get_DebugOut_m2575811291(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_32) < ((int32_t)2)))
		{
			goto IL_0104;
		}
	}
	{
		RuntimeObject* L_33 = __this->get_listener_14();
		String_t* L_34 = V_0;
		ChatChannel_t2318116909 * L_35 = V_2;
		NullCheck(L_35);
		HashSet_1_t412400163 * L_36 = L_35->get_Subscribers_9();
		NullCheck(L_36);
		int32_t L_37 = HashSet_1_get_Count_m2534887753(L_36, /*hidden argument*/HashSet_1_get_Count_m2534887753_RuntimeMethod_var);
		int32_t L_38 = L_37;
		RuntimeObject * L_39 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_38);
		ChatChannel_t2318116909 * L_40 = V_2;
		NullCheck(L_40);
		int32_t L_41 = ChatChannel_get_MaxSubscribers_m1081428401(L_40, /*hidden argument*/NULL);
		int32_t L_42 = L_41;
		RuntimeObject * L_43 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_42);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_44 = String_Format_m3339413201(NULL /*static, unused*/, _stringLiteral1568986561, L_34, L_39, L_43, /*hidden argument*/NULL);
		NullCheck(L_33);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_33, 2, L_44);
	}

IL_0104:
	{
		goto IL_012d;
	}

IL_0109:
	{
		uint8_t L_45 = ChatClient_get_DebugOut_m2575811291(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_45) < ((int32_t)2)))
		{
			goto IL_012d;
		}
	}
	{
		RuntimeObject* L_46 = __this->get_listener_14();
		String_t* L_47 = V_0;
		String_t* L_48 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_49 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral646317010, L_47, L_48, /*hidden argument*/NULL);
		NullCheck(L_46);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_46, 2, L_49);
	}

IL_012d:
	{
		RuntimeObject* L_50 = __this->get_listener_14();
		String_t* L_51 = V_0;
		String_t* L_52 = V_1;
		NullCheck(L_50);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(9 /* System.Void Photon.Chat.IChatClientListener::OnUserSubscribed(System.String,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_50, L_51, L_52);
		return;
	}
}
// System.Boolean Photon.Chat.ChatClient::Subscribe(System.String,System.Int32,System.Int32,Photon.Chat.ChannelCreationOptions)
extern "C" IL2CPP_METHOD_ATTR bool ChatClient_Subscribe_m1596022505 (ChatClient_t792052210 * __this, String_t* ___channel0, int32_t ___lastMsgId1, int32_t ___messagesFromHistory2, ChannelCreationOptions_t3966585929 * ___creationOptions3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatClient_Subscribe_m1596022505_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	Dictionary_2_t132545152 * V_2 = NULL;
	Dictionary_2_t1405253484 * V_3 = NULL;
	Dictionary_2_t1405253484 * V_4 = NULL;
	{
		ChannelCreationOptions_t3966585929 * L_0 = ___creationOptions3;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ChannelCreationOptions_t3966585929_il2cpp_TypeInfo_var);
		ChannelCreationOptions_t3966585929 * L_1 = ((ChannelCreationOptions_t3966585929_StaticFields*)il2cpp_codegen_static_fields_for(ChannelCreationOptions_t3966585929_il2cpp_TypeInfo_var))->get_Default_0();
		___creationOptions3 = L_1;
	}

IL_000e:
	{
		ChannelCreationOptions_t3966585929 * L_2 = ___creationOptions3;
		NullCheck(L_2);
		int32_t L_3 = ChannelCreationOptions_get_MaxSubscribers_m1309351586(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		ChannelCreationOptions_t3966585929 * L_4 = ___creationOptions3;
		NullCheck(L_4);
		bool L_5 = ChannelCreationOptions_get_PublishSubscribers_m1984572140(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		uint8_t L_7 = ChatClient_get_DebugOut_m2575811291(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_7) < ((int32_t)1)))
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_8 = __this->get_listener_14();
		NullCheck(L_8);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_8, 1, _stringLiteral3212874583);
	}

IL_0042:
	{
		return (bool)0;
	}

IL_0044:
	{
		int32_t L_9 = ___lastMsgId1;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_006a;
		}
	}
	{
		uint8_t L_10 = ChatClient_get_DebugOut_m2575811291(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_10) < ((int32_t)1)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_11 = __this->get_listener_14();
		NullCheck(L_11);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_11, 1, _stringLiteral1544499546);
	}

IL_0068:
	{
		return (bool)0;
	}

IL_006a:
	{
		int32_t L_12 = ___messagesFromHistory2;
		if ((((int32_t)L_12) >= ((int32_t)(-1))))
		{
			goto IL_0091;
		}
	}
	{
		uint8_t L_13 = ChatClient_get_DebugOut_m2575811291(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_13) < ((int32_t)2)))
		{
			goto IL_008e;
		}
	}
	{
		RuntimeObject* L_14 = __this->get_listener_14();
		NullCheck(L_14);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_14, 2, _stringLiteral1708246641);
	}

IL_008e:
	{
		___messagesFromHistory2 = (-1);
	}

IL_0091:
	{
		int32_t L_15 = ___lastMsgId1;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		int32_t L_16 = ___messagesFromHistory2;
		if (L_16)
		{
			goto IL_00be;
		}
	}
	{
		uint8_t L_17 = ChatClient_get_DebugOut_m2575811291(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_17) < ((int32_t)2)))
		{
			goto IL_00bb;
		}
	}
	{
		RuntimeObject* L_18 = __this->get_listener_14();
		NullCheck(L_18);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_18, 2, _stringLiteral796070875);
	}

IL_00bb:
	{
		___lastMsgId1 = 0;
	}

IL_00be:
	{
		V_2 = (Dictionary_2_t132545152 *)NULL;
		bool L_19 = V_1;
		if (!L_19)
		{
			goto IL_0115;
		}
	}
	{
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) <= ((int32_t)((int32_t)100))))
		{
			goto IL_00f9;
		}
	}
	{
		uint8_t L_21 = ChatClient_get_DebugOut_m2575811291(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_21) < ((int32_t)1)))
		{
			goto IL_00f7;
		}
	}
	{
		RuntimeObject* L_22 = __this->get_listener_14();
		int32_t L_23 = ((int32_t)100);
		RuntimeObject * L_24 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_23);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3676277865, L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t1343338770_il2cpp_TypeInfo_var, L_22, 1, L_25);
	}

IL_00f7:
	{
		return (bool)0;
	}

IL_00f9:
	{
		Dictionary_2_t132545152 * L_26 = (Dictionary_2_t132545152 *)il2cpp_codegen_object_new(Dictionary_2_t132545152_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m518943619(L_26, /*hidden argument*/Dictionary_2__ctor_m518943619_RuntimeMethod_var);
		V_2 = L_26;
		Dictionary_2_t132545152 * L_27 = V_2;
		uint8_t L_28 = ((uint8_t)((int32_t)254));
		RuntimeObject * L_29 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_28);
		bool L_30 = ((bool)1);
		RuntimeObject * L_31 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_27);
		Dictionary_2_set_Item_m119570864(L_27, L_29, L_31, /*hidden argument*/Dictionary_2_set_Item_m119570864_RuntimeMethod_var);
	}

IL_0115:
	{
		int32_t L_32 = V_0;
		if ((((int32_t)L_32) <= ((int32_t)0)))
		{
			goto IL_013e;
		}
	}
	{
		Dictionary_2_t132545152 * L_33 = V_2;
		if (L_33)
		{
			goto IL_0128;
		}
	}
	{
		Dictionary_2_t132545152 * L_34 = (Dictionary_2_t132545152 *)il2cpp_codegen_object_new(Dictionary_2_t132545152_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m518943619(L_34, /*hidden argument*/Dictionary_2__ctor_m518943619_RuntimeMethod_var);
		V_2 = L_34;
	}

IL_0128:
	{
		Dictionary_2_t132545152 * L_35 = V_2;
		uint8_t L_36 = ((uint8_t)((int32_t)255));
		RuntimeObject * L_37 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_36);
		int32_t L_38 = V_0;
		int32_t L_39 = L_38;
		RuntimeObject * L_40 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_39);
		NullCheck(L_35);
		Dictionary_2_set_Item_m119570864(L_35, L_37, L_40, /*hidden argument*/Dictionary_2_set_Item_m119570864_RuntimeMethod_var);
	}

IL_013e:
	{
		Dictionary_2_t1405253484 * L_41 = (Dictionary_2_t1405253484 *)il2cpp_codegen_object_new(Dictionary_2_t1405253484_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m705142683(L_41, /*hidden argument*/Dictionary_2__ctor_m705142683_RuntimeMethod_var);
		V_4 = L_41;
		Dictionary_2_t1405253484 * L_42 = V_4;
		StringU5BU5D_t1281789340* L_43 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t1281789340* L_44 = L_43;
		String_t* L_45 = ___channel0;
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_45);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_45);
		NullCheck(L_42);
		Dictionary_2_Add_m1883976453(L_42, (uint8_t)0, (RuntimeObject *)(RuntimeObject *)L_44, /*hidden argument*/Dictionary_2_Add_m1883976453_RuntimeMethod_var);
		Dictionary_2_t1405253484 * L_46 = V_4;
		V_3 = L_46;
		int32_t L_47 = ___messagesFromHistory2;
		if (!L_47)
		{
			goto IL_016e;
		}
	}
	{
		Dictionary_2_t1405253484 * L_48 = V_3;
		int32_t L_49 = ___messagesFromHistory2;
		int32_t L_50 = L_49;
		RuntimeObject * L_51 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_50);
		NullCheck(L_48);
		Dictionary_2_Add_m1883976453(L_48, (uint8_t)((int32_t)14), L_51, /*hidden argument*/Dictionary_2_Add_m1883976453_RuntimeMethod_var);
	}

IL_016e:
	{
		int32_t L_52 = ___lastMsgId1;
		if ((((int32_t)L_52) <= ((int32_t)0)))
		{
			goto IL_0187;
		}
	}
	{
		Dictionary_2_t1405253484 * L_53 = V_3;
		Int32U5BU5D_t385246372* L_54 = (Int32U5BU5D_t385246372*)SZArrayNew(Int32U5BU5D_t385246372_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t385246372* L_55 = L_54;
		int32_t L_56 = ___lastMsgId1;
		NullCheck(L_55);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_56);
		NullCheck(L_53);
		Dictionary_2_Add_m1883976453(L_53, (uint8_t)((int32_t)9), (RuntimeObject *)(RuntimeObject *)L_55, /*hidden argument*/Dictionary_2_Add_m1883976453_RuntimeMethod_var);
	}

IL_0187:
	{
		Dictionary_2_t132545152 * L_57 = V_2;
		if (!L_57)
		{
			goto IL_01a2;
		}
	}
	{
		Dictionary_2_t132545152 * L_58 = V_2;
		NullCheck(L_58);
		int32_t L_59 = Dictionary_2_get_Count_m3151171942(L_58, /*hidden argument*/Dictionary_2_get_Count_m3151171942_RuntimeMethod_var);
		if ((((int32_t)L_59) <= ((int32_t)0)))
		{
			goto IL_01a2;
		}
	}
	{
		Dictionary_2_t1405253484 * L_60 = V_3;
		Dictionary_2_t132545152 * L_61 = V_2;
		NullCheck(L_60);
		Dictionary_2_Add_m1883976453(L_60, (uint8_t)((int32_t)22), L_61, /*hidden argument*/Dictionary_2_Add_m1883976453_RuntimeMethod_var);
	}

IL_01a2:
	{
		ChatPeer_t3366739368 * L_62 = __this->get_chatPeer_15();
		Dictionary_2_t1405253484 * L_63 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(SendOptions_t967321410_il2cpp_TypeInfo_var);
		SendOptions_t967321410  L_64 = ((SendOptions_t967321410_StaticFields*)il2cpp_codegen_static_fields_for(SendOptions_t967321410_il2cpp_TypeInfo_var))->get_SendReliable_0();
		NullCheck(L_62);
		bool L_65 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t1405253484 *, SendOptions_t967321410  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, L_62, (uint8_t)0, L_63, L_64);
		return L_65;
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
// System.Void Photon.Chat.ChatEventCode::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ChatEventCode__ctor_m1003522691 (ChatEventCode_t2744303799 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void Photon.Chat.ChatOperationCode::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ChatOperationCode__ctor_m1747610176 (ChatOperationCode_t2913553512 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void Photon.Chat.ChatParameterCode::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ChatParameterCode__ctor_m4157289602 (ChatParameterCode_t3986735616 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void Photon.Chat.ChatPeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener,ExitGames.Client.Photon.ConnectionProtocol)
extern "C" IL2CPP_METHOD_ATTR void ChatPeer__ctor_m3747547441 (ChatPeer_t3366739368 * __this, RuntimeObject* ___listener0, uint8_t ___protocol1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatPeer__ctor_m3747547441_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___listener0;
		uint8_t L_1 = ___protocol1;
		IL2CPP_RUNTIME_CLASS_INIT(PhotonPeer_t1608153861_il2cpp_TypeInfo_var);
		PhotonPeer__ctor_m2655503375(__this, L_0, L_1, /*hidden argument*/NULL);
		ChatPeer_ConfigUnitySockets_m2453888391(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Photon.Chat.ChatPeer::get_NameServerAddress()
extern "C" IL2CPP_METHOD_ATTR String_t* ChatPeer_get_NameServerAddress_m2456527619 (ChatPeer_t3366739368 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ChatPeer_GetNameServerAddress_m3745425589(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean Photon.Chat.ChatPeer::get_IsProtocolSecure()
extern "C" IL2CPP_METHOD_ATTR bool ChatPeer_get_IsProtocolSecure_m2411858656 (ChatPeer_t3366739368 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = PhotonPeer_get_UsedProtocol_m1797930742(__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)5))? 1 : 0);
	}
}
// System.Void Photon.Chat.ChatPeer::ConfigUnitySockets()
extern "C" IL2CPP_METHOD_ATTR void ChatPeer_ConfigUnitySockets_m2453888391 (ChatPeer_t3366739368 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatPeer_ConfigUnitySockets_m2453888391_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	{
		V_0 = (Type_t *)NULL;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_m3605423543, _stringLiteral1709059629, (bool)0, "PhotonChat, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null");
		V_0 = L_0;
		Type_t * L_1 = V_0;
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_m3605423543, _stringLiteral3709835863, (bool)0, "PhotonChat, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null");
		V_0 = L_2;
	}

IL_0020:
	{
		Type_t * L_3 = V_0;
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_m3605423543, _stringLiteral1685286926, (bool)0, "PhotonChat, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null");
		V_0 = L_4;
	}

IL_0032:
	{
		Type_t * L_5 = V_0;
		if (!L_5)
		{
			goto IL_0052;
		}
	}
	{
		Dictionary_2_t1253839074 * L_6 = ((PhotonPeer_t1608153861 *)__this)->get_SocketImplementationConfig_9();
		Type_t * L_7 = V_0;
		NullCheck(L_6);
		Dictionary_2_set_Item_m1740559187(L_6, 4, L_7, /*hidden argument*/Dictionary_2_set_Item_m1740559187_RuntimeMethod_var);
		Dictionary_2_t1253839074 * L_8 = ((PhotonPeer_t1608153861 *)__this)->get_SocketImplementationConfig_9();
		Type_t * L_9 = V_0;
		NullCheck(L_8);
		Dictionary_2_set_Item_m1740559187(L_8, 5, L_9, /*hidden argument*/Dictionary_2_set_Item_m1740559187_RuntimeMethod_var);
	}

IL_0052:
	{
		return;
	}
}
// System.String Photon.Chat.ChatPeer::GetNameServerAddress()
extern "C" IL2CPP_METHOD_ATTR String_t* ChatPeer_GetNameServerAddress_m3745425589 (ChatPeer_t3366739368 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatPeer_GetNameServerAddress_m3745425589_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t V_1 = 0;
	{
		V_0 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(ChatPeer_t3366739368_il2cpp_TypeInfo_var);
		Dictionary_2_t1720840067 * L_0 = ((ChatPeer_t3366739368_StaticFields*)il2cpp_codegen_static_fields_for(ChatPeer_t3366739368_il2cpp_TypeInfo_var))->get_ProtocolToNameServerPort_43();
		uint8_t L_1 = PhotonPeer_get_TransportProtocol_m4264093347(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Dictionary_2_TryGetValue_m1868025697(L_0, L_1, (int32_t*)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m1868025697_RuntimeMethod_var);
		uint8_t L_2 = PhotonPeer_get_TransportProtocol_m4264093347(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		uint8_t L_3 = V_1;
		switch (L_3)
		{
			case 0:
			{
				goto IL_003f;
			}
			case 1:
			{
				goto IL_003f;
			}
			case 2:
			{
				goto IL_0081;
			}
			case 3:
			{
				goto IL_0081;
			}
			case 4:
			{
				goto IL_0055;
			}
			case 5:
			{
				goto IL_006b;
			}
		}
	}
	{
		goto IL_0081;
	}

IL_003f:
	{
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral1730043946, _stringLiteral3605301635, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0055:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral819702083, _stringLiteral3605301635, L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_006b:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_13);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral3673280093, _stringLiteral3605301635, L_14, /*hidden argument*/NULL);
		return L_15;
	}

IL_0081:
	{
		ArgumentOutOfRangeException_t777629997 * L_16 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m2047740448(L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, NULL, ChatPeer_GetNameServerAddress_m3745425589_RuntimeMethod_var);
	}
}
// System.Boolean Photon.Chat.ChatPeer::Connect()
extern "C" IL2CPP_METHOD_ATTR bool ChatPeer_Connect_m3069500609 (ChatPeer_t3366739368 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatPeer_Connect_m3069500609_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0 = ((PhotonPeer_t1608153861 *)__this)->get_DebugOut_11();
		if ((((int32_t)L_0) < ((int32_t)3)))
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_1 = PhotonPeer_get_Listener_m959611216(__this, /*hidden argument*/NULL);
		String_t* L_2 = ChatPeer_get_NameServerAddress_m2456527619(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3338127820, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t2581629031_il2cpp_TypeInfo_var, L_1, 3, L_3);
	}

IL_0028:
	{
		String_t* L_4 = ChatPeer_get_NameServerAddress_m2456527619(__this, /*hidden argument*/NULL);
		bool L_5 = VirtFuncInvoker2< bool, String_t*, String_t* >::Invoke(6 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::Connect(System.String,System.String) */, __this, L_4, _stringLiteral454993494);
		return L_5;
	}
}
// System.Boolean Photon.Chat.ChatPeer::AuthenticateOnNameServer(System.String,System.String,System.String,Photon.Chat.AuthenticationValues)
extern "C" IL2CPP_METHOD_ATTR bool ChatPeer_AuthenticateOnNameServer_m4021717668 (ChatPeer_t3366739368 * __this, String_t* ___appId0, String_t* ___appVersion1, String_t* ___region2, AuthenticationValues_t563695058 * ___authValues3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatPeer_AuthenticateOnNameServer_m4021717668_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t1405253484 * V_0 = NULL;
	SendOptions_t967321410  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		uint8_t L_0 = ((PhotonPeer_t1608153861 *)__this)->get_DebugOut_11();
		if ((((int32_t)L_0) < ((int32_t)3)))
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_1 = PhotonPeer_get_Listener_m959611216(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t2581629031_il2cpp_TypeInfo_var, L_1, 3, _stringLiteral3419055759);
	}

IL_001d:
	{
		Dictionary_2_t1405253484 * L_2 = (Dictionary_2_t1405253484 *)il2cpp_codegen_object_new(Dictionary_2_t1405253484_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m705142683(L_2, /*hidden argument*/Dictionary_2__ctor_m705142683_RuntimeMethod_var);
		V_0 = L_2;
		Dictionary_2_t1405253484 * L_3 = V_0;
		String_t* L_4 = ___appVersion1;
		NullCheck(L_3);
		Dictionary_2_set_Item_m1279768534(L_3, (uint8_t)((int32_t)220), L_4, /*hidden argument*/Dictionary_2_set_Item_m1279768534_RuntimeMethod_var);
		Dictionary_2_t1405253484 * L_5 = V_0;
		String_t* L_6 = ___appId0;
		NullCheck(L_5);
		Dictionary_2_set_Item_m1279768534(L_5, (uint8_t)((int32_t)224), L_6, /*hidden argument*/Dictionary_2_set_Item_m1279768534_RuntimeMethod_var);
		Dictionary_2_t1405253484 * L_7 = V_0;
		String_t* L_8 = ___region2;
		NullCheck(L_7);
		Dictionary_2_set_Item_m1279768534(L_7, (uint8_t)((int32_t)210), L_8, /*hidden argument*/Dictionary_2_set_Item_m1279768534_RuntimeMethod_var);
		AuthenticationValues_t563695058 * L_9 = ___authValues3;
		if (!L_9)
		{
			goto IL_0109;
		}
	}
	{
		AuthenticationValues_t563695058 * L_10 = ___authValues3;
		NullCheck(L_10);
		String_t* L_11 = AuthenticationValues_get_UserId_m2010043280(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0071;
		}
	}
	{
		Dictionary_2_t1405253484 * L_13 = V_0;
		AuthenticationValues_t563695058 * L_14 = ___authValues3;
		NullCheck(L_14);
		String_t* L_15 = AuthenticationValues_get_UserId_m2010043280(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		Dictionary_2_set_Item_m1279768534(L_13, (uint8_t)((int32_t)225), L_15, /*hidden argument*/Dictionary_2_set_Item_m1279768534_RuntimeMethod_var);
	}

IL_0071:
	{
		AuthenticationValues_t563695058 * L_16 = ___authValues3;
		if (!L_16)
		{
			goto IL_0109;
		}
	}
	{
		AuthenticationValues_t563695058 * L_17 = ___authValues3;
		NullCheck(L_17);
		uint8_t L_18 = AuthenticationValues_get_AuthType_m861350032(L_17, /*hidden argument*/NULL);
		if ((((int32_t)L_18) == ((int32_t)((int32_t)255))))
		{
			goto IL_0109;
		}
	}
	{
		Dictionary_2_t1405253484 * L_19 = V_0;
		AuthenticationValues_t563695058 * L_20 = ___authValues3;
		NullCheck(L_20);
		uint8_t L_21 = AuthenticationValues_get_AuthType_m861350032(L_20, /*hidden argument*/NULL);
		uint8_t L_22 = ((uint8_t)L_21);
		RuntimeObject * L_23 = Box(Byte_t1134296376_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_19);
		Dictionary_2_set_Item_m1279768534(L_19, (uint8_t)((int32_t)217), L_23, /*hidden argument*/Dictionary_2_set_Item_m1279768534_RuntimeMethod_var);
		AuthenticationValues_t563695058 * L_24 = ___authValues3;
		NullCheck(L_24);
		String_t* L_25 = AuthenticationValues_get_Token_m4283956602(L_24, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_26 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_00c8;
		}
	}
	{
		Dictionary_2_t1405253484 * L_27 = V_0;
		AuthenticationValues_t563695058 * L_28 = ___authValues3;
		NullCheck(L_28);
		String_t* L_29 = AuthenticationValues_get_Token_m4283956602(L_28, /*hidden argument*/NULL);
		NullCheck(L_27);
		Dictionary_2_set_Item_m1279768534(L_27, (uint8_t)((int32_t)221), L_29, /*hidden argument*/Dictionary_2_set_Item_m1279768534_RuntimeMethod_var);
		goto IL_0109;
	}

IL_00c8:
	{
		AuthenticationValues_t563695058 * L_30 = ___authValues3;
		NullCheck(L_30);
		String_t* L_31 = AuthenticationValues_get_AuthGetParameters_m295365972(L_30, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_32 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_00eb;
		}
	}
	{
		Dictionary_2_t1405253484 * L_33 = V_0;
		AuthenticationValues_t563695058 * L_34 = ___authValues3;
		NullCheck(L_34);
		String_t* L_35 = AuthenticationValues_get_AuthGetParameters_m295365972(L_34, /*hidden argument*/NULL);
		NullCheck(L_33);
		Dictionary_2_set_Item_m1279768534(L_33, (uint8_t)((int32_t)216), L_35, /*hidden argument*/Dictionary_2_set_Item_m1279768534_RuntimeMethod_var);
	}

IL_00eb:
	{
		AuthenticationValues_t563695058 * L_36 = ___authValues3;
		NullCheck(L_36);
		RuntimeObject * L_37 = AuthenticationValues_get_AuthPostData_m2639848445(L_36, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0109;
		}
	}
	{
		Dictionary_2_t1405253484 * L_38 = V_0;
		AuthenticationValues_t563695058 * L_39 = ___authValues3;
		NullCheck(L_39);
		RuntimeObject * L_40 = AuthenticationValues_get_AuthPostData_m2639848445(L_39, /*hidden argument*/NULL);
		NullCheck(L_38);
		Dictionary_2_set_Item_m1279768534(L_38, (uint8_t)((int32_t)214), L_40, /*hidden argument*/Dictionary_2_set_Item_m1279768534_RuntimeMethod_var);
	}

IL_0109:
	{
		Dictionary_2_t1405253484 * L_41 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(SendOptions_t967321410 ));
		SendOptions_set_Reliability_m237473686((SendOptions_t967321410 *)(&V_1), (bool)1, /*hidden argument*/NULL);
		bool L_42 = PhotonPeer_get_IsEncryptionAvailable_m3866547401(__this, /*hidden argument*/NULL);
		(&V_1)->set_Encrypt_3(L_42);
		SendOptions_t967321410  L_43 = V_1;
		bool L_44 = VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t1405253484 *, SendOptions_t967321410  >::Invoke(15 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOperation(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.SendOptions) */, __this, (uint8_t)((int32_t)230), L_41, L_43);
		return L_44;
	}
}
// System.Void Photon.Chat.ChatPeer::.cctor()
extern "C" IL2CPP_METHOD_ATTR void ChatPeer__cctor_m1488938936 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChatPeer__cctor_m1488938936_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t1720840067 * V_0 = NULL;
	{
		Dictionary_2_t1720840067 * L_0 = (Dictionary_2_t1720840067 *)il2cpp_codegen_object_new(Dictionary_2_t1720840067_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4121386254(L_0, /*hidden argument*/Dictionary_2__ctor_m4121386254_RuntimeMethod_var);
		V_0 = L_0;
		Dictionary_2_t1720840067 * L_1 = V_0;
		NullCheck(L_1);
		Dictionary_2_Add_m3596676840(L_1, 0, ((int32_t)5058), /*hidden argument*/Dictionary_2_Add_m3596676840_RuntimeMethod_var);
		Dictionary_2_t1720840067 * L_2 = V_0;
		NullCheck(L_2);
		Dictionary_2_Add_m3596676840(L_2, 1, ((int32_t)4533), /*hidden argument*/Dictionary_2_Add_m3596676840_RuntimeMethod_var);
		Dictionary_2_t1720840067 * L_3 = V_0;
		NullCheck(L_3);
		Dictionary_2_Add_m3596676840(L_3, 4, ((int32_t)9093), /*hidden argument*/Dictionary_2_Add_m3596676840_RuntimeMethod_var);
		Dictionary_2_t1720840067 * L_4 = V_0;
		NullCheck(L_4);
		Dictionary_2_Add_m3596676840(L_4, 5, ((int32_t)19093), /*hidden argument*/Dictionary_2_Add_m3596676840_RuntimeMethod_var);
		Dictionary_2_t1720840067 * L_5 = V_0;
		((ChatPeer_t3366739368_StaticFields*)il2cpp_codegen_static_fields_for(ChatPeer_t3366739368_il2cpp_TypeInfo_var))->set_ProtocolToNameServerPort_43(L_5);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Chat.ErrorCode::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ErrorCode__ctor_m2315018671 (ErrorCode_t424885541 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void Photon.Chat.ParameterCode::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ParameterCode__ctor_m632359678 (ParameterCode_t52387945 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
