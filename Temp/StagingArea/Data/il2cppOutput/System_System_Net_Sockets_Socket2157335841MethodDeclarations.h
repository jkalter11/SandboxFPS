﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Net.Sockets.Socket
struct Socket_t2157335841;
// System.Net.IPAddress
struct IPAddress_t3525271463;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t1215594974;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Net.SocketAddress
struct SocketAddress_t4232434619;
// System.Net.EndPoint
struct EndPoint_t1026786191;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_AddressFamily3770679850.h"
#include "System_System_Net_Sockets_SocketType1204660219.h"
#include "System_System_Net_Sockets_ProtocolType3327388960.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "System_System_Net_IPAddress3525271463.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_Net_Sockets_SelectMode3812195181.h"
#include "System_System_Net_Sockets_SocketFlags4205073670.h"
#include "System_System_Net_SocketAddress4232434619.h"
#include "System_System_Net_EndPoint1026786191.h"
#include "System_System_Net_Sockets_SocketError4204345479.h"
#include "System_System_Net_Sockets_SocketOptionLevel2476940110.h"
#include "System_System_Net_Sockets_SocketOptionName1841276065.h"
#include "mscorlib_System_Object4170816371.h"
#include "System_System_Net_Sockets_SocketShutdown1229168279.h"

// System.Void System.Net.Sockets.Socket::.ctor(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType)
extern "C"  void Socket__ctor_m3306971388 (Socket_t2157335841 * __this, int32_t ___family0, int32_t ___type1, int32_t ___proto2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::.cctor()
extern "C"  void Socket__cctor_m3717010356 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Available_internal(System.IntPtr,System.Int32&)
extern "C"  int32_t Socket_Available_internal_m3973465179 (Il2CppObject * __this /* static, unused */, IntPtr_t ___socket0, int32_t* ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::get_Available()
extern "C"  int32_t Socket_get_Available_m137334663 (Socket_t2157335841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_SendTimeout(System.Int32)
extern "C"  void Socket_set_SendTimeout_m3821834980 (Socket_t2157335841 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_ReceiveTimeout(System.Int32)
extern "C"  void Socket_set_ReceiveTimeout_m3463473559 (Socket_t2157335841 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect(System.Net.IPAddress,System.Int32)
extern "C"  void Socket_Connect_m3621754579 (Socket_t2157335841 * __this, IPAddress_t3525271463 * ___address0, int32_t ___port1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect(System.Net.IPAddress[],System.Int32)
extern "C"  void Socket_Connect_m2053194101 (Socket_t2157335841 * __this, IPAddressU5BU5D_t1215594974* ___addresses0, int32_t ___port1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect(System.String,System.Int32)
extern "C"  void Socket_Connect_m3578055414 (Socket_t2157335841 * __this, String_t* ___host0, int32_t ___port1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::Poll(System.Int32,System.Net.Sockets.SelectMode)
extern "C"  bool Socket_Poll_m3896260468 (Socket_t2157335841 * __this, int32_t ___time_us0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[])
extern "C"  int32_t Socket_Receive_m2251599615 (Socket_t2157335841 * __this, ByteU5BU5D_t4260760469* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[],System.Net.Sockets.SocketFlags)
extern "C"  int32_t Socket_Receive_m3988825905 (Socket_t2157335841 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___flags1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags)
extern "C"  int32_t Socket_Receive_m1175719569 (Socket_t2157335841 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___size2, int32_t ___flags3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::RecvFrom_internal(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.SocketAddress&,System.Int32&)
extern "C"  int32_t Socket_RecvFrom_internal_m548074296 (Il2CppObject * __this /* static, unused */, IntPtr_t ___sock0, ByteU5BU5D_t4260760469* ___buffer1, int32_t ___offset2, int32_t ___count3, int32_t ___flags4, SocketAddress_t4232434619 ** ___sockaddr5, int32_t* ___error6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::ReceiveFrom_nochecks_exc(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.EndPoint&,System.Boolean,System.Int32&)
extern "C"  int32_t Socket_ReceiveFrom_nochecks_exc_m1710579486 (Socket_t2157335841 * __this, ByteU5BU5D_t4260760469* ___buf0, int32_t ___offset1, int32_t ___size2, int32_t ___flags3, EndPoint_t1026786191 ** ___remote_end4, bool ___throwOnError5, int32_t* ___error6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send(System.Byte[])
extern "C"  int32_t Socket_Send_m3037196870 (Socket_t2157335841 * __this, ByteU5BU5D_t4260760469* ___buf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags)
extern "C"  int32_t Socket_Send_m158307626 (Socket_t2157335841 * __this, ByteU5BU5D_t4260760469* ___buf0, int32_t ___offset1, int32_t ___size2, int32_t ___flags3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::CheckProtocolSupport()
extern "C"  void Socket_CheckProtocolSupport_m1469859642 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_SupportsIPv4()
extern "C"  bool Socket_get_SupportsIPv4_m1110590311 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_SupportsIPv6()
extern "C"  bool Socket_get_SupportsIPv6_m1110592233 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Net.Sockets.Socket::Socket_internal(System.Net.Sockets.AddressFamily,System.Net.Sockets.SocketType,System.Net.Sockets.ProtocolType,System.Int32&)
extern "C"  IntPtr_t Socket_Socket_internal_m2439457133 (Socket_t2157335841 * __this, int32_t ___family0, int32_t ___type1, int32_t ___proto2, int32_t* ___error3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Finalize()
extern "C"  void Socket_Finalize_m2469626537 (Socket_t2157335841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::get_AddressFamily()
extern "C"  int32_t Socket_get_AddressFamily_m794897675 (Socket_t2157335841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::get_Connected()
extern "C"  bool Socket_get_Connected_m32348333 (Socket_t2157335841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::set_NoDelay(System.Boolean)
extern "C"  void Socket_set_NoDelay_m320978003 (Socket_t2157335841 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Linger(System.IntPtr)
extern "C"  void Socket_Linger_m3971058726 (Socket_t2157335841 * __this, IntPtr_t ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Dispose(System.Boolean)
extern "C"  void Socket_Dispose_m1498201101 (Socket_t2157335841 * __this, bool ___explicitDisposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Dispose()
extern "C"  void Socket_Dispose_m1221567766 (Socket_t2157335841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Close_internal(System.IntPtr,System.Int32&)
extern "C"  void Socket_Close_internal_m712534810 (Il2CppObject * __this /* static, unused */, IntPtr_t ___socket0, int32_t* ___error1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Close()
extern "C"  void Socket_Close_m183746607 (Socket_t2157335841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect_internal_real(System.IntPtr,System.Net.SocketAddress,System.Int32&)
extern "C"  void Socket_Connect_internal_real_m2238725464 (Il2CppObject * __this /* static, unused */, IntPtr_t ___sock0, SocketAddress_t4232434619 * ___sa1, int32_t* ___error2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect_internal(System.IntPtr,System.Net.SocketAddress,System.Int32&)
extern "C"  void Socket_Connect_internal_m3048485651 (Il2CppObject * __this /* static, unused */, IntPtr_t ___sock0, SocketAddress_t4232434619 * ___sa1, int32_t* ___error2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect_internal(System.IntPtr,System.Net.SocketAddress,System.Int32&,System.Boolean)
extern "C"  void Socket_Connect_internal_m2215852042 (Il2CppObject * __this /* static, unused */, IntPtr_t ___sock0, SocketAddress_t4232434619 * ___sa1, int32_t* ___error2, bool ___requireSocketPolicyFile3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::CheckEndPoint(System.Net.SocketAddress)
extern "C"  bool Socket_CheckEndPoint_m44041593 (Il2CppObject * __this /* static, unused */, SocketAddress_t4232434619 * ___sa0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Net.Sockets.Socket::GetUnityCrossDomainHelperMethod(System.String)
extern "C"  MethodInfo_t * Socket_GetUnityCrossDomainHelperMethod_m4288049067 (Il2CppObject * __this /* static, unused */, String_t* ___methodname0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect(System.Net.EndPoint)
extern "C"  void Socket_Connect_m3443149996 (Socket_t2157335841 * __this, EndPoint_t1026786191 * ___remoteEP0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Connect(System.Net.EndPoint,System.Boolean)
extern "C"  void Socket_Connect_m3198523729 (Socket_t2157335841 * __this, EndPoint_t1026786191 * ___remoteEP0, bool ___requireSocketPolicy1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket::Poll_internal(System.IntPtr,System.Net.Sockets.SelectMode,System.Int32,System.Int32&)
extern "C"  bool Socket_Poll_internal_m1151471955 (Il2CppObject * __this /* static, unused */, IntPtr_t ___socket0, int32_t ___mode1, int32_t ___timeout2, int32_t* ___error3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive_internal(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&)
extern "C"  int32_t Socket_Receive_internal_m2102825858 (Il2CppObject * __this /* static, unused */, IntPtr_t ___sock0, ByteU5BU5D_t4260760469* ___buffer1, int32_t ___offset2, int32_t ___count3, int32_t ___flags4, int32_t* ___error5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Receive_nochecks(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
extern "C"  int32_t Socket_Receive_nochecks_m2765323495 (Socket_t2157335841 * __this, ByteU5BU5D_t4260760469* ___buf0, int32_t ___offset1, int32_t ___size2, int32_t ___flags3, int32_t* ___error4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::GetSocketOption_obj_internal(System.IntPtr,System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Object&,System.Int32&)
extern "C"  void Socket_GetSocketOption_obj_internal_m3360460275 (Il2CppObject * __this /* static, unused */, IntPtr_t ___socket0, int32_t ___level1, int32_t ___name2, Il2CppObject ** ___obj_val3, int32_t* ___error4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send_internal(System.IntPtr,System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Int32&)
extern "C"  int32_t Socket_Send_internal_m2939578505 (Il2CppObject * __this /* static, unused */, IntPtr_t ___sock0, ByteU5BU5D_t4260760469* ___buf1, int32_t ___offset2, int32_t ___count3, int32_t ___flags4, int32_t* ___error5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket::Send_nochecks(System.Byte[],System.Int32,System.Int32,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
extern "C"  int32_t Socket_Send_nochecks_m2300802670 (Socket_t2157335841 * __this, ByteU5BU5D_t4260760469* ___buf0, int32_t ___offset1, int32_t ___size2, int32_t ___flags3, int32_t* ___error4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Sockets.Socket::GetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName)
extern "C"  Il2CppObject * Socket_GetSocketOption_m3158663719 (Socket_t2157335841 * __this, int32_t ___optionLevel0, int32_t ___optionName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::Shutdown_internal(System.IntPtr,System.Net.Sockets.SocketShutdown,System.Int32&)
extern "C"  void Socket_Shutdown_internal_m2019310737 (Il2CppObject * __this /* static, unused */, IntPtr_t ___socket0, int32_t ___how1, int32_t* ___error2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::SetSocketOption_internal(System.IntPtr,System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Object,System.Byte[],System.Int32,System.Int32&)
extern "C"  void Socket_SetSocketOption_internal_m111805231 (Il2CppObject * __this /* static, unused */, IntPtr_t ___socket0, int32_t ___level1, int32_t ___name2, Il2CppObject * ___obj_val3, ByteU5BU5D_t4260760469* ___byte_val4, int32_t ___int_val5, int32_t* ___error6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::SetSocketOption(System.Net.Sockets.SocketOptionLevel,System.Net.Sockets.SocketOptionName,System.Int32)
extern "C"  void Socket_SetSocketOption_m225156057 (Socket_t2157335841 * __this, int32_t ___optionLevel0, int32_t ___optionName1, int32_t ___optionValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket::ThrowIfUpd()
extern "C"  void Socket_ThrowIfUpd_m253258129 (Socket_t2157335841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
