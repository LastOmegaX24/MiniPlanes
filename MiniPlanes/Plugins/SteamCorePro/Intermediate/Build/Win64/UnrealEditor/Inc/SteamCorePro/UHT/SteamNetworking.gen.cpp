// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamNetworking/SteamNetworking.h"
#include "SteamCorePro/Public/SteamCorePro/SteamTypes.h"
#include "SteamCorePro/Public/SteamNetworking/SteamNetworkingTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamNetworking() {}

// Begin Cross Module References
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreInterface();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamProNetworking();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamProNetworking_NoRegister();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamP2PSend();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnP2PSessionConnectFail__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnP2PSessionRequest__DelegateSignature();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamP2PSessionState();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Class USteamProNetworking Function AcceptP2PSessionWithUser
struct Z_Construct_UFunction_USteamProNetworking_AcceptP2PSessionWithUser_Statics
{
	struct SteamProNetworking_eventAcceptP2PSessionWithUser_Parms
	{
		FSteamID SteamIDRemote;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Networking" },
		{ "Comment", "/**\n\x09* This allows the game to specify accept an incoming packet. This needs to be called before a real connection is established to a remote host, the game will get a chance to say whether or not the remote user is allowed to talk to them.\n\x09*\n\x09* When a remote user that you haven't sent a packet to recently, tries to first send you a packet, your game will receive a callback P2PSessionRequest_t. This callback contains the Steam ID of the user who wants to send you a packet. \n\x09* In response to this callback, you'll want to see if it's someone you want to talk to (for example, if they're in a lobby with you), and if so, accept the connection; otherwise if you don't want to talk to the user, just ignore the request. \n\x09* If the user continues to send you packets, another P2PSessionRequest_t will be posted periodically. If you've called SendP2PPacket on the other user, this implicitly accepts the session request.\n\x09* Note that this call should only be made in response to a P2PSessionRequest_t callback!\n\x09*\n\x09* @param\x09SteamIDRemote\x09\x09The Steam ID of the user that sent the initial packet to us.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworking.h" },
		{ "ToolTip", "This allows the game to specify accept an incoming packet. This needs to be called before a real connection is established to a remote host, the game will get a chance to say whether or not the remote user is allowed to talk to them.\n\nWhen a remote user that you haven't sent a packet to recently, tries to first send you a packet, your game will receive a callback P2PSessionRequest_t. This callback contains the Steam ID of the user who wants to send you a packet.\nIn response to this callback, you'll want to see if it's someone you want to talk to (for example, if they're in a lobby with you), and if so, accept the connection; otherwise if you don't want to talk to the user, just ignore the request.\nIf the user continues to send you packets, another P2PSessionRequest_t will be posted periodically. If you've called SendP2PPacket on the other user, this implicitly accepts the session request.\nNote that this call should only be made in response to a P2PSessionRequest_t callback!\n\n@param        SteamIDRemote           The Steam ID of the user that sent the initial packet to us." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDRemote;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProNetworking_AcceptP2PSessionWithUser_Statics::NewProp_SteamIDRemote = { "SteamIDRemote", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProNetworking_eventAcceptP2PSessionWithUser_Parms, SteamIDRemote), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
void Z_Construct_UFunction_USteamProNetworking_AcceptP2PSessionWithUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProNetworking_eventAcceptP2PSessionWithUser_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProNetworking_AcceptP2PSessionWithUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProNetworking_eventAcceptP2PSessionWithUser_Parms), &Z_Construct_UFunction_USteamProNetworking_AcceptP2PSessionWithUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProNetworking_AcceptP2PSessionWithUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProNetworking_AcceptP2PSessionWithUser_Statics::NewProp_SteamIDRemote,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProNetworking_AcceptP2PSessionWithUser_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProNetworking_AcceptP2PSessionWithUser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProNetworking_AcceptP2PSessionWithUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProNetworking, nullptr, "AcceptP2PSessionWithUser", nullptr, nullptr, Z_Construct_UFunction_USteamProNetworking_AcceptP2PSessionWithUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProNetworking_AcceptP2PSessionWithUser_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProNetworking_AcceptP2PSessionWithUser_Statics::SteamProNetworking_eventAcceptP2PSessionWithUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProNetworking_AcceptP2PSessionWithUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProNetworking_AcceptP2PSessionWithUser_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProNetworking_AcceptP2PSessionWithUser_Statics::SteamProNetworking_eventAcceptP2PSessionWithUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProNetworking_AcceptP2PSessionWithUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProNetworking_AcceptP2PSessionWithUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProNetworking::execAcceptP2PSessionWithUser)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDRemote);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AcceptP2PSessionWithUser(Z_Param_SteamIDRemote);
	P_NATIVE_END;
}
// End Class USteamProNetworking Function AcceptP2PSessionWithUser

// Begin Class USteamProNetworking Function AllowP2PPacketRelay
struct Z_Construct_UFunction_USteamProNetworking_AllowP2PPacketRelay_Statics
{
	struct SteamProNetworking_eventAllowP2PPacketRelay_Parms
	{
		bool bAllow;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Networking" },
		{ "Comment", "/**\n\x09* Allow or disallow P2P connections to fall back to being relayed through the Steam servers if a direct connection or NAT-traversal cannot be established.\n\x09*\n\x09* This only applies to connections created after setting this value, or to existing connections that need to automatically reconnect after this value is set.\n\x09* P2P packet relay is allowed by default.\n\x09*\n\x09* @param\x09""bAllow\x09\x09\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworking.h" },
		{ "ToolTip", "Allow or disallow P2P connections to fall back to being relayed through the Steam servers if a direct connection or NAT-traversal cannot be established.\n\nThis only applies to connections created after setting this value, or to existing connections that need to automatically reconnect after this value is set.\nP2P packet relay is allowed by default.\n\n@param        bAllow" },
	};
#endif // WITH_METADATA
	static void NewProp_bAllow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllow;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProNetworking_AllowP2PPacketRelay_Statics::NewProp_bAllow_SetBit(void* Obj)
{
	((SteamProNetworking_eventAllowP2PPacketRelay_Parms*)Obj)->bAllow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProNetworking_AllowP2PPacketRelay_Statics::NewProp_bAllow = { "bAllow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProNetworking_eventAllowP2PPacketRelay_Parms), &Z_Construct_UFunction_USteamProNetworking_AllowP2PPacketRelay_Statics::NewProp_bAllow_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProNetworking_AllowP2PPacketRelay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProNetworking_eventAllowP2PPacketRelay_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProNetworking_AllowP2PPacketRelay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProNetworking_eventAllowP2PPacketRelay_Parms), &Z_Construct_UFunction_USteamProNetworking_AllowP2PPacketRelay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProNetworking_AllowP2PPacketRelay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProNetworking_AllowP2PPacketRelay_Statics::NewProp_bAllow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProNetworking_AllowP2PPacketRelay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProNetworking_AllowP2PPacketRelay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProNetworking_AllowP2PPacketRelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProNetworking, nullptr, "AllowP2PPacketRelay", nullptr, nullptr, Z_Construct_UFunction_USteamProNetworking_AllowP2PPacketRelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProNetworking_AllowP2PPacketRelay_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProNetworking_AllowP2PPacketRelay_Statics::SteamProNetworking_eventAllowP2PPacketRelay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProNetworking_AllowP2PPacketRelay_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProNetworking_AllowP2PPacketRelay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProNetworking_AllowP2PPacketRelay_Statics::SteamProNetworking_eventAllowP2PPacketRelay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProNetworking_AllowP2PPacketRelay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProNetworking_AllowP2PPacketRelay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProNetworking::execAllowP2PPacketRelay)
{
	P_GET_UBOOL(Z_Param_bAllow);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AllowP2PPacketRelay(Z_Param_bAllow);
	P_NATIVE_END;
}
// End Class USteamProNetworking Function AllowP2PPacketRelay

// Begin Class USteamProNetworking Function CloseP2PChannelWithUser
struct Z_Construct_UFunction_USteamProNetworking_CloseP2PChannelWithUser_Statics
{
	struct SteamProNetworking_eventCloseP2PChannelWithUser_Parms
	{
		FSteamID SteamIDRemote;
		int32 Channel;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Networking" },
		{ "Comment", "/**\n\x09* Closes a P2P channel when you're done talking to a user on the specific channel.\n\x09*\n\x09* Once all channels to a user have been closed, the open session to the user will be closed and new data from this user will trigger a new P2PSessionRequest_t callback.\n\x09*\n\x09* @param\x09SteamIDRemote\x09\x09The Steam ID of the user to close the connection with.\n\x09* @param\x09""Channel\x09\x09\x09\x09The channel to close.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworking.h" },
		{ "ToolTip", "Closes a P2P channel when you're done talking to a user on the specific channel.\n\nOnce all channels to a user have been closed, the open session to the user will be closed and new data from this user will trigger a new P2PSessionRequest_t callback.\n\n@param        SteamIDRemote           The Steam ID of the user to close the connection with.\n@param        Channel                         The channel to close." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDRemote;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProNetworking_CloseP2PChannelWithUser_Statics::NewProp_SteamIDRemote = { "SteamIDRemote", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProNetworking_eventCloseP2PChannelWithUser_Parms, SteamIDRemote), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProNetworking_CloseP2PChannelWithUser_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProNetworking_eventCloseP2PChannelWithUser_Parms, Channel), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProNetworking_CloseP2PChannelWithUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProNetworking_eventCloseP2PChannelWithUser_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProNetworking_CloseP2PChannelWithUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProNetworking_eventCloseP2PChannelWithUser_Parms), &Z_Construct_UFunction_USteamProNetworking_CloseP2PChannelWithUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProNetworking_CloseP2PChannelWithUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProNetworking_CloseP2PChannelWithUser_Statics::NewProp_SteamIDRemote,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProNetworking_CloseP2PChannelWithUser_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProNetworking_CloseP2PChannelWithUser_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProNetworking_CloseP2PChannelWithUser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProNetworking_CloseP2PChannelWithUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProNetworking, nullptr, "CloseP2PChannelWithUser", nullptr, nullptr, Z_Construct_UFunction_USteamProNetworking_CloseP2PChannelWithUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProNetworking_CloseP2PChannelWithUser_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProNetworking_CloseP2PChannelWithUser_Statics::SteamProNetworking_eventCloseP2PChannelWithUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProNetworking_CloseP2PChannelWithUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProNetworking_CloseP2PChannelWithUser_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProNetworking_CloseP2PChannelWithUser_Statics::SteamProNetworking_eventCloseP2PChannelWithUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProNetworking_CloseP2PChannelWithUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProNetworking_CloseP2PChannelWithUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProNetworking::execCloseP2PChannelWithUser)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDRemote);
	P_GET_PROPERTY(FIntProperty,Z_Param_Channel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CloseP2PChannelWithUser(Z_Param_SteamIDRemote,Z_Param_Channel);
	P_NATIVE_END;
}
// End Class USteamProNetworking Function CloseP2PChannelWithUser

// Begin Class USteamProNetworking Function CloseP2PSessionWithUser
struct Z_Construct_UFunction_USteamProNetworking_CloseP2PSessionWithUser_Statics
{
	struct SteamProNetworking_eventCloseP2PSessionWithUser_Parms
	{
		FSteamID SteamIDRemote;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Networking" },
		{ "Comment", "/**\n\x09* This should be called when you're done communicating with a user, as this will free up all of the resources allocated for the connection under-the-hood.\n\x09*\n\x09* If the remote user tries to send data to you again, a new P2PSessionRequest_t callback will be posted.\n\x09*\n\x09* @param\x09SteamIDRemote\x09The Steam ID of the user to close the connection with.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworking.h" },
		{ "ToolTip", "This should be called when you're done communicating with a user, as this will free up all of the resources allocated for the connection under-the-hood.\n\nIf the remote user tries to send data to you again, a new P2PSessionRequest_t callback will be posted.\n\n@param        SteamIDRemote   The Steam ID of the user to close the connection with." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDRemote;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProNetworking_CloseP2PSessionWithUser_Statics::NewProp_SteamIDRemote = { "SteamIDRemote", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProNetworking_eventCloseP2PSessionWithUser_Parms, SteamIDRemote), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
void Z_Construct_UFunction_USteamProNetworking_CloseP2PSessionWithUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProNetworking_eventCloseP2PSessionWithUser_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProNetworking_CloseP2PSessionWithUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProNetworking_eventCloseP2PSessionWithUser_Parms), &Z_Construct_UFunction_USteamProNetworking_CloseP2PSessionWithUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProNetworking_CloseP2PSessionWithUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProNetworking_CloseP2PSessionWithUser_Statics::NewProp_SteamIDRemote,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProNetworking_CloseP2PSessionWithUser_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProNetworking_CloseP2PSessionWithUser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProNetworking_CloseP2PSessionWithUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProNetworking, nullptr, "CloseP2PSessionWithUser", nullptr, nullptr, Z_Construct_UFunction_USteamProNetworking_CloseP2PSessionWithUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProNetworking_CloseP2PSessionWithUser_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProNetworking_CloseP2PSessionWithUser_Statics::SteamProNetworking_eventCloseP2PSessionWithUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProNetworking_CloseP2PSessionWithUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProNetworking_CloseP2PSessionWithUser_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProNetworking_CloseP2PSessionWithUser_Statics::SteamProNetworking_eventCloseP2PSessionWithUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProNetworking_CloseP2PSessionWithUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProNetworking_CloseP2PSessionWithUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProNetworking::execCloseP2PSessionWithUser)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDRemote);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CloseP2PSessionWithUser(Z_Param_SteamIDRemote);
	P_NATIVE_END;
}
// End Class USteamProNetworking Function CloseP2PSessionWithUser

// Begin Class USteamProNetworking Function GetP2PSessionState
struct Z_Construct_UFunction_USteamProNetworking_GetP2PSessionState_Statics
{
	struct SteamProNetworking_eventGetP2PSessionState_Parms
	{
		FSteamID SteamIDRemote;
		FSteamP2PSessionState ConnectionState;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Networking" },
		{ "Comment", "/**\n\x09* Fills out a P2PSessionState_t structure with details about the connection like whether or not there is an active connection; number of bytes queued on the connection; the last error code, \n\x09*\n\x09* if any; whether or not a relay server is being used; and the IP and Port of the remote user, if known\n\x09* This should only needed for debugging purposes.\n\x09*\n\x09* @param\x09SteamIDRemote\x09\x09The user to get the active session state information of.\n\x09* @param\x09""ConnectionState\x09\x09Returns the state.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworking.h" },
		{ "ToolTip", "Fills out a P2PSessionState_t structure with details about the connection like whether or not there is an active connection; number of bytes queued on the connection; the last error code,\n\nif any; whether or not a relay server is being used; and the IP and Port of the remote user, if known\nThis should only needed for debugging purposes.\n\n@param        SteamIDRemote           The user to get the active session state information of.\n@param        ConnectionState         Returns the state." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDRemote;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConnectionState;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProNetworking_GetP2PSessionState_Statics::NewProp_SteamIDRemote = { "SteamIDRemote", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProNetworking_eventGetP2PSessionState_Parms, SteamIDRemote), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProNetworking_GetP2PSessionState_Statics::NewProp_ConnectionState = { "ConnectionState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProNetworking_eventGetP2PSessionState_Parms, ConnectionState), Z_Construct_UScriptStruct_FSteamP2PSessionState, METADATA_PARAMS(0, nullptr) }; // 2678768600
void Z_Construct_UFunction_USteamProNetworking_GetP2PSessionState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProNetworking_eventGetP2PSessionState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProNetworking_GetP2PSessionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProNetworking_eventGetP2PSessionState_Parms), &Z_Construct_UFunction_USteamProNetworking_GetP2PSessionState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProNetworking_GetP2PSessionState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProNetworking_GetP2PSessionState_Statics::NewProp_SteamIDRemote,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProNetworking_GetP2PSessionState_Statics::NewProp_ConnectionState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProNetworking_GetP2PSessionState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProNetworking_GetP2PSessionState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProNetworking_GetP2PSessionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProNetworking, nullptr, "GetP2PSessionState", nullptr, nullptr, Z_Construct_UFunction_USteamProNetworking_GetP2PSessionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProNetworking_GetP2PSessionState_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProNetworking_GetP2PSessionState_Statics::SteamProNetworking_eventGetP2PSessionState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProNetworking_GetP2PSessionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProNetworking_GetP2PSessionState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProNetworking_GetP2PSessionState_Statics::SteamProNetworking_eventGetP2PSessionState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProNetworking_GetP2PSessionState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProNetworking_GetP2PSessionState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProNetworking::execGetP2PSessionState)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDRemote);
	P_GET_STRUCT_REF(FSteamP2PSessionState,Z_Param_Out_ConnectionState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetP2PSessionState(Z_Param_SteamIDRemote,Z_Param_Out_ConnectionState);
	P_NATIVE_END;
}
// End Class USteamProNetworking Function GetP2PSessionState

// Begin Class USteamProNetworking Function GetSteamNetworking
struct Z_Construct_UFunction_USteamProNetworking_GetSteamNetworking_Statics
{
	struct SteamProNetworking_eventGetSteamNetworking_Parms
	{
		USteamProNetworking* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworking.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamProNetworking_GetSteamNetworking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProNetworking_eventGetSteamNetworking_Parms, ReturnValue), Z_Construct_UClass_USteamProNetworking_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProNetworking_GetSteamNetworking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProNetworking_GetSteamNetworking_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProNetworking_GetSteamNetworking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProNetworking_GetSteamNetworking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProNetworking, nullptr, "GetSteamNetworking", nullptr, nullptr, Z_Construct_UFunction_USteamProNetworking_GetSteamNetworking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProNetworking_GetSteamNetworking_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProNetworking_GetSteamNetworking_Statics::SteamProNetworking_eventGetSteamNetworking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProNetworking_GetSteamNetworking_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProNetworking_GetSteamNetworking_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProNetworking_GetSteamNetworking_Statics::SteamProNetworking_eventGetSteamNetworking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProNetworking_GetSteamNetworking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProNetworking_GetSteamNetworking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProNetworking::execGetSteamNetworking)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamProNetworking**)Z_Param__Result=USteamProNetworking::GetSteamNetworking();
	P_NATIVE_END;
}
// End Class USteamProNetworking Function GetSteamNetworking

// Begin Class USteamProNetworking Function IsP2PPacketAvailable
struct Z_Construct_UFunction_USteamProNetworking_IsP2PPacketAvailable_Statics
{
	struct SteamProNetworking_eventIsP2PPacketAvailable_Parms
	{
		int32 MessageSize;
		int32 Channel;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Networking" },
		{ "Comment", "/**\n\x09* Checks if a P2P packet is available to read, and gets the size of the message if there is one.\n\x09*\n\x09* This should be called in a loop for each channel that you use. If there is a packet available you should call ReadP2PPacket to get the packet data.\n\x09*\n\x09* @param\x09MessageSize\x09\x09Returns the size of the packet.\n\x09* @param\x09""Channel\x09\x09The channel to check if a packet is available in.\n\x09*/" },
		{ "CPP_Default_Channel", "0" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworking.h" },
		{ "ToolTip", "Checks if a P2P packet is available to read, and gets the size of the message if there is one.\n\nThis should be called in a loop for each channel that you use. If there is a packet available you should call ReadP2PPacket to get the packet data.\n\n@param        MessageSize             Returns the size of the packet.\n@param        Channel         The channel to check if a packet is available in." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MessageSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProNetworking_IsP2PPacketAvailable_Statics::NewProp_MessageSize = { "MessageSize", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProNetworking_eventIsP2PPacketAvailable_Parms, MessageSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProNetworking_IsP2PPacketAvailable_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProNetworking_eventIsP2PPacketAvailable_Parms, Channel), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProNetworking_IsP2PPacketAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProNetworking_eventIsP2PPacketAvailable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProNetworking_IsP2PPacketAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProNetworking_eventIsP2PPacketAvailable_Parms), &Z_Construct_UFunction_USteamProNetworking_IsP2PPacketAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProNetworking_IsP2PPacketAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProNetworking_IsP2PPacketAvailable_Statics::NewProp_MessageSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProNetworking_IsP2PPacketAvailable_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProNetworking_IsP2PPacketAvailable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProNetworking_IsP2PPacketAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProNetworking_IsP2PPacketAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProNetworking, nullptr, "IsP2PPacketAvailable", nullptr, nullptr, Z_Construct_UFunction_USteamProNetworking_IsP2PPacketAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProNetworking_IsP2PPacketAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProNetworking_IsP2PPacketAvailable_Statics::SteamProNetworking_eventIsP2PPacketAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProNetworking_IsP2PPacketAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProNetworking_IsP2PPacketAvailable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProNetworking_IsP2PPacketAvailable_Statics::SteamProNetworking_eventIsP2PPacketAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProNetworking_IsP2PPacketAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProNetworking_IsP2PPacketAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProNetworking::execIsP2PPacketAvailable)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MessageSize);
	P_GET_PROPERTY(FIntProperty,Z_Param_Channel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsP2PPacketAvailable(Z_Param_Out_MessageSize,Z_Param_Channel);
	P_NATIVE_END;
}
// End Class USteamProNetworking Function IsP2PPacketAvailable

// Begin Class USteamProNetworking Function ReadP2PPacket
struct Z_Construct_UFunction_USteamProNetworking_ReadP2PPacket_Statics
{
	struct SteamProNetworking_eventReadP2PPacket_Parms
	{
		TArray<uint8> Data;
		FSteamID OutSteamIdRemote;
		int32 MessageSize;
		int32 Channel;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Networking" },
		{ "Comment", "/**\n\x09* Reads in a packet that has been sent from another user via SendP2PPacket.\n\x09*\n\x09* If the cubDest buffer is too small for the packet, then the message will be truncated.\n\x09* This call is not blocking, and will return false if no data is available.\n\x09* Before calling this you should have called IsP2PPacketAvailable.\n\x09* \n\x09* @param\x09""Data\x09\x09\x09Returns the packet data by copying it into this buffer.\n\x09* @param\x09OutSteamIdRemote\x09Returns the Steam ID of the user that sent this packet.\n\x09* @param\x09""Channel\x09\x09\x09The channel the packet was sent over.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworking.h" },
		{ "ToolTip", "Reads in a packet that has been sent from another user via SendP2PPacket.\n\nIf the cubDest buffer is too small for the packet, then the message will be truncated.\nThis call is not blocking, and will return false if no data is available.\nBefore calling this you should have called IsP2PPacketAvailable.\n\n@param        Data                    Returns the packet data by copying it into this buffer.\n@param        OutSteamIdRemote        Returns the Steam ID of the user that sent this packet.\n@param        Channel                 The channel the packet was sent over." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSteamIdRemote;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MessageSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProNetworking_ReadP2PPacket_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProNetworking_ReadP2PPacket_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProNetworking_eventReadP2PPacket_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProNetworking_ReadP2PPacket_Statics::NewProp_OutSteamIdRemote = { "OutSteamIdRemote", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProNetworking_eventReadP2PPacket_Parms, OutSteamIdRemote), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProNetworking_ReadP2PPacket_Statics::NewProp_MessageSize = { "MessageSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProNetworking_eventReadP2PPacket_Parms, MessageSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProNetworking_ReadP2PPacket_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProNetworking_eventReadP2PPacket_Parms, Channel), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProNetworking_ReadP2PPacket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProNetworking_eventReadP2PPacket_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProNetworking_ReadP2PPacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProNetworking_eventReadP2PPacket_Parms), &Z_Construct_UFunction_USteamProNetworking_ReadP2PPacket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProNetworking_ReadP2PPacket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProNetworking_ReadP2PPacket_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProNetworking_ReadP2PPacket_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProNetworking_ReadP2PPacket_Statics::NewProp_OutSteamIdRemote,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProNetworking_ReadP2PPacket_Statics::NewProp_MessageSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProNetworking_ReadP2PPacket_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProNetworking_ReadP2PPacket_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProNetworking_ReadP2PPacket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProNetworking_ReadP2PPacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProNetworking, nullptr, "ReadP2PPacket", nullptr, nullptr, Z_Construct_UFunction_USteamProNetworking_ReadP2PPacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProNetworking_ReadP2PPacket_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProNetworking_ReadP2PPacket_Statics::SteamProNetworking_eventReadP2PPacket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProNetworking_ReadP2PPacket_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProNetworking_ReadP2PPacket_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProNetworking_ReadP2PPacket_Statics::SteamProNetworking_eventReadP2PPacket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProNetworking_ReadP2PPacket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProNetworking_ReadP2PPacket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProNetworking::execReadP2PPacket)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
	P_GET_STRUCT_REF(FSteamID,Z_Param_Out_OutSteamIdRemote);
	P_GET_PROPERTY(FIntProperty,Z_Param_MessageSize);
	P_GET_PROPERTY(FIntProperty,Z_Param_Channel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ReadP2PPacket(Z_Param_Out_Data,Z_Param_Out_OutSteamIdRemote,Z_Param_MessageSize,Z_Param_Channel);
	P_NATIVE_END;
}
// End Class USteamProNetworking Function ReadP2PPacket

// Begin Class USteamProNetworking Function SendP2PPacket
struct Z_Construct_UFunction_USteamProNetworking_SendP2PPacket_Statics
{
	struct SteamProNetworking_eventSendP2PPacket_Parms
	{
		FSteamID SteamIDRemote;
		TArray<uint8> Data;
		ESteamP2PSend P2PSendType;
		int32 Channel;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Networking" },
		{ "Comment", "/**\n\x09* Sends a P2P packet to the specified user.\n\x09*\n\x09* This is a session-less API which automatically establishes NAT-traversing or Steam relay server connections.\n\x09* NOTE: The first packet send may be delayed as the NAT-traversal code runs.\n\x09* See EP2PSend for descriptions of the different ways of sending packets.\n\x09* The type of data you send is arbitrary, you can use an off the shelf system like Protocol Buffers or Cap'n Proto to encode your packets in an efficient way, or you can create your own messaging system.\n\x09*\n\x09* @param\x09SteamIDRemote\x09\x09The target user to send the packet to.\n\x09* @param\x09""Data\x09\x09\x09\x09The raw byte array for the packet data to send. The maximum size of this packet is defined by eP2PSendType.\n\x09* @param\x09P2PSendType\x09\x09\x09Specifies how you want the data to be transmitted, such as reliably, unreliable, buffered, etc.\n\x09* @param\x09""Channel\x09\x09\x09\x09The channel which acts as a virtual port to send this packet on and allows you help route message to different systems. You'll have to call ReadP2PPacket on the other end with the same channel number in order to retrieve the data on the other end. Using different channels to talk to the same user will still use the same underlying P2P connection, saving on resources. Use 0 for the primary channel, or if you do not use this feature.\n\x09*/" },
		{ "CPP_Default_Channel", "0" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworking.h" },
		{ "ToolTip", "Sends a P2P packet to the specified user.\n\nThis is a session-less API which automatically establishes NAT-traversing or Steam relay server connections.\nNOTE: The first packet send may be delayed as the NAT-traversal code runs.\nSee EP2PSend for descriptions of the different ways of sending packets.\nThe type of data you send is arbitrary, you can use an off the shelf system like Protocol Buffers or Cap'n Proto to encode your packets in an efficient way, or you can create your own messaging system.\n\n@param        SteamIDRemote           The target user to send the packet to.\n@param        Data                            The raw byte array for the packet data to send. The maximum size of this packet is defined by eP2PSendType.\n@param        P2PSendType                     Specifies how you want the data to be transmitted, such as reliably, unreliable, buffered, etc.\n@param        Channel                         The channel which acts as a virtual port to send this packet on and allows you help route message to different systems. You'll have to call ReadP2PPacket on the other end with the same channel number in order to retrieve the data on the other end. Using different channels to talk to the same user will still use the same underlying P2P connection, saving on resources. Use 0 for the primary channel, or if you do not use this feature." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDRemote;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FBytePropertyParams NewProp_P2PSendType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_P2PSendType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProNetworking_SendP2PPacket_Statics::NewProp_SteamIDRemote = { "SteamIDRemote", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProNetworking_eventSendP2PPacket_Parms, SteamIDRemote), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProNetworking_SendP2PPacket_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProNetworking_SendP2PPacket_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProNetworking_eventSendP2PPacket_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProNetworking_SendP2PPacket_Statics::NewProp_P2PSendType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProNetworking_SendP2PPacket_Statics::NewProp_P2PSendType = { "P2PSendType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProNetworking_eventSendP2PPacket_Parms, P2PSendType), Z_Construct_UEnum_SteamCorePro_ESteamP2PSend, METADATA_PARAMS(0, nullptr) }; // 2057104178
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProNetworking_SendP2PPacket_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProNetworking_eventSendP2PPacket_Parms, Channel), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProNetworking_SendP2PPacket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProNetworking_eventSendP2PPacket_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProNetworking_SendP2PPacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProNetworking_eventSendP2PPacket_Parms), &Z_Construct_UFunction_USteamProNetworking_SendP2PPacket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProNetworking_SendP2PPacket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProNetworking_SendP2PPacket_Statics::NewProp_SteamIDRemote,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProNetworking_SendP2PPacket_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProNetworking_SendP2PPacket_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProNetworking_SendP2PPacket_Statics::NewProp_P2PSendType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProNetworking_SendP2PPacket_Statics::NewProp_P2PSendType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProNetworking_SendP2PPacket_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProNetworking_SendP2PPacket_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProNetworking_SendP2PPacket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProNetworking_SendP2PPacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProNetworking, nullptr, "SendP2PPacket", nullptr, nullptr, Z_Construct_UFunction_USteamProNetworking_SendP2PPacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProNetworking_SendP2PPacket_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProNetworking_SendP2PPacket_Statics::SteamProNetworking_eventSendP2PPacket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProNetworking_SendP2PPacket_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProNetworking_SendP2PPacket_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProNetworking_SendP2PPacket_Statics::SteamProNetworking_eventSendP2PPacket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProNetworking_SendP2PPacket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProNetworking_SendP2PPacket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProNetworking::execSendP2PPacket)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDRemote);
	P_GET_TARRAY(uint8,Z_Param_Data);
	P_GET_ENUM(ESteamP2PSend,Z_Param_P2PSendType);
	P_GET_PROPERTY(FIntProperty,Z_Param_Channel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SendP2PPacket(Z_Param_SteamIDRemote,Z_Param_Data,ESteamP2PSend(Z_Param_P2PSendType),Z_Param_Channel);
	P_NATIVE_END;
}
// End Class USteamProNetworking Function SendP2PPacket

// Begin Class USteamProNetworking
void USteamProNetworking::StaticRegisterNativesUSteamProNetworking()
{
	UClass* Class = USteamProNetworking::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AcceptP2PSessionWithUser", &USteamProNetworking::execAcceptP2PSessionWithUser },
		{ "AllowP2PPacketRelay", &USteamProNetworking::execAllowP2PPacketRelay },
		{ "CloseP2PChannelWithUser", &USteamProNetworking::execCloseP2PChannelWithUser },
		{ "CloseP2PSessionWithUser", &USteamProNetworking::execCloseP2PSessionWithUser },
		{ "GetP2PSessionState", &USteamProNetworking::execGetP2PSessionState },
		{ "GetSteamNetworking", &USteamProNetworking::execGetSteamNetworking },
		{ "IsP2PPacketAvailable", &USteamProNetworking::execIsP2PPacketAvailable },
		{ "ReadP2PPacket", &USteamProNetworking::execReadP2PPacket },
		{ "SendP2PPacket", &USteamProNetworking::execSendP2PPacket },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamProNetworking);
UClass* Z_Construct_UClass_USteamProNetworking_NoRegister()
{
	return USteamProNetworking::StaticClass();
}
struct Z_Construct_UClass_USteamProNetworking_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamNetworking/SteamNetworking.h" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnP2PSessionRequestDelegate_MetaData[] = {
		{ "Category", "SteamCore|Networking|Delegates" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworking.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnP2PSessionConnectFailDelegate_MetaData[] = {
		{ "Category", "SteamCore|Networking|Delegates" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworking.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnP2PSessionRequestDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnP2PSessionConnectFailDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamProNetworking_AcceptP2PSessionWithUser, "AcceptP2PSessionWithUser" }, // 2540286786
		{ &Z_Construct_UFunction_USteamProNetworking_AllowP2PPacketRelay, "AllowP2PPacketRelay" }, // 1194912339
		{ &Z_Construct_UFunction_USteamProNetworking_CloseP2PChannelWithUser, "CloseP2PChannelWithUser" }, // 1696700471
		{ &Z_Construct_UFunction_USteamProNetworking_CloseP2PSessionWithUser, "CloseP2PSessionWithUser" }, // 1562419409
		{ &Z_Construct_UFunction_USteamProNetworking_GetP2PSessionState, "GetP2PSessionState" }, // 3252221637
		{ &Z_Construct_UFunction_USteamProNetworking_GetSteamNetworking, "GetSteamNetworking" }, // 1225389109
		{ &Z_Construct_UFunction_USteamProNetworking_IsP2PPacketAvailable, "IsP2PPacketAvailable" }, // 1595805847
		{ &Z_Construct_UFunction_USteamProNetworking_ReadP2PPacket, "ReadP2PPacket" }, // 4106415662
		{ &Z_Construct_UFunction_USteamProNetworking_SendP2PPacket, "SendP2PPacket" }, // 2285213647
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamProNetworking>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProNetworking_Statics::NewProp_OnP2PSessionRequestDelegate = { "OnP2PSessionRequestDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProNetworking, OnP2PSessionRequestDelegate), Z_Construct_UDelegateFunction_SteamCorePro_OnP2PSessionRequest__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnP2PSessionRequestDelegate_MetaData), NewProp_OnP2PSessionRequestDelegate_MetaData) }; // 614129137
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProNetworking_Statics::NewProp_OnP2PSessionConnectFailDelegate = { "OnP2PSessionConnectFailDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProNetworking, OnP2PSessionConnectFailDelegate), Z_Construct_UDelegateFunction_SteamCorePro_OnP2PSessionConnectFail__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnP2PSessionConnectFailDelegate_MetaData), NewProp_OnP2PSessionConnectFailDelegate_MetaData) }; // 1590157434
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamProNetworking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProNetworking_Statics::NewProp_OnP2PSessionRequestDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProNetworking_Statics::NewProp_OnP2PSessionConnectFailDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProNetworking_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamProNetworking_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProNetworking_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamProNetworking_Statics::ClassParams = {
	&USteamProNetworking::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamProNetworking_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamProNetworking_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProNetworking_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamProNetworking_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamProNetworking()
{
	if (!Z_Registration_Info_UClass_USteamProNetworking.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamProNetworking.OuterSingleton, Z_Construct_UClass_USteamProNetworking_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamProNetworking.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamProNetworking>()
{
	return USteamProNetworking::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamProNetworking);
// End Class USteamProNetworking

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamNetworking_SteamNetworking_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamProNetworking, USteamProNetworking::StaticClass, TEXT("USteamProNetworking"), &Z_Registration_Info_UClass_USteamProNetworking, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamProNetworking), 2337906062U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamNetworking_SteamNetworking_h_2127529261(TEXT("/Script/SteamCorePro"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamNetworking_SteamNetworking_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamNetworking_SteamNetworking_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
