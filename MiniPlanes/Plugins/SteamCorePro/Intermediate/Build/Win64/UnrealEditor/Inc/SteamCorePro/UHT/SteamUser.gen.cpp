// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamUser/SteamUser.h"
#include "SteamCorePro/Public/SteamCorePro/SteamTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamUser() {}

// Begin Cross Module References
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreInterface();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamProUser();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamProUser_NoRegister();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamBeginAuthSessionResult();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamUserHasLicenseForAppResult();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamVoiceResult();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnClientGameServerDeny__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnGameWebCallback__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnGetAuthSessionTicketResponse__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnGetTicketForWebApiResponse__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnIPCFailure__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnLicensesUpdated__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnMicroTxnAuthorizationResponse__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEncryptedAppTicket__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEncryptedAppTicketResponse__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamServerConnectFailure__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamServersConnected__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamServersDisconnected__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnStoreAuthURLResponse__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnValidateAuthTicketResponse__DelegateSignature();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamNetworkingIdentity();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamTicketHandle();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Class USteamProUser Function AdvertiseGame
struct Z_Construct_UFunction_USteamProUser_AdvertiseGame_Statics
{
	struct SteamProUser_eventAdvertiseGame_Parms
	{
		FSteamID SteamIDGameServer;
		FString ServerIP;
		int32 ServerPort;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Set the rich presence data for an unsecured game server that the user is playing on. This allows friends to be able to view the game info and join your game.\n\x09*\n\x09* When you are using Steam authentication system this call is never required, the auth system automatically sets the appropriate rich presence.\n\x09*\n\x09* @param\x09SteamIDGameServer\x09This should be k_steamIDNonSteamGS if you're setting the IP/Port, otherwise it should be k_steamIDNil if you're clearing this.\n\x09* @param\x09ServerIP\x09\x09\x09The IP of the game server in host order, i.e 127.0.0.1 == 0x7f000001.\n\x09* @param\x09ServerPort\x09\x09\x09The connection port of the game server, in host order.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Set the rich presence data for an unsecured game server that the user is playing on. This allows friends to be able to view the game info and join your game.\n\nWhen you are using Steam authentication system this call is never required, the auth system automatically sets the appropriate rich presence.\n\n@param        SteamIDGameServer       This should be k_steamIDNonSteamGS if you're setting the IP/Port, otherwise it should be k_steamIDNil if you're clearing this.\n@param        ServerIP                        The IP of the game server in host order, i.e 127.0.0.1 == 0x7f000001.\n@param        ServerPort                      The connection port of the game server, in host order." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDGameServer;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerIP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ServerPort;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProUser_AdvertiseGame_Statics::NewProp_SteamIDGameServer = { "SteamIDGameServer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUser_eventAdvertiseGame_Parms, SteamIDGameServer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProUser_AdvertiseGame_Statics::NewProp_ServerIP = { "ServerIP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUser_eventAdvertiseGame_Parms, ServerIP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUser_AdvertiseGame_Statics::NewProp_ServerPort = { "ServerPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUser_eventAdvertiseGame_Parms, ServerPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUser_AdvertiseGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_AdvertiseGame_Statics::NewProp_SteamIDGameServer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_AdvertiseGame_Statics::NewProp_ServerIP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_AdvertiseGame_Statics::NewProp_ServerPort,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_AdvertiseGame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUser_AdvertiseGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUser, nullptr, "AdvertiseGame", nullptr, nullptr, Z_Construct_UFunction_USteamProUser_AdvertiseGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_AdvertiseGame_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUser_AdvertiseGame_Statics::SteamProUser_eventAdvertiseGame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_AdvertiseGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUser_AdvertiseGame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUser_AdvertiseGame_Statics::SteamProUser_eventAdvertiseGame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUser_AdvertiseGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUser_AdvertiseGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUser::execAdvertiseGame)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDGameServer);
	P_GET_PROPERTY(FStrProperty,Z_Param_ServerIP);
	P_GET_PROPERTY(FIntProperty,Z_Param_ServerPort);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProUser::AdvertiseGame(Z_Param_SteamIDGameServer,Z_Param_ServerIP,Z_Param_ServerPort);
	P_NATIVE_END;
}
// End Class USteamProUser Function AdvertiseGame

// Begin Class USteamProUser Function BeginAuthSession
struct Z_Construct_UFunction_USteamProUser_BeginAuthSession_Statics
{
	struct SteamProUser_eventBeginAuthSession_Parms
	{
		TArray<uint8> Ticket;
		FSteamID SteamID;
		ESteamBeginAuthSessionResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Authenticate the ticket from the entity Steam ID to be sure it is valid and isn't reused.\n\x09*\n\x09* The ticket is created on the entity with GetAuthSessionTicket or ISteamGameServer::GetAuthSessionTicket and then needs to be provided over the network for the other end to validate.\n\x09* This registers for ValidateAuthTicketResponse_t callbacks if the entity goes offline or cancels the ticket. See EAuthSessionResponse for more information.\n\x09* When the multiplayer session terminates you must call EndAuthSession.\n\x09*\n\x09* @param\x09Ticket\x09\x09The auth ticket to validate.\n\x09* @param\x09SteamID\x09\x09The entity's Steam ID that sent this ticket.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Authenticate the ticket from the entity Steam ID to be sure it is valid and isn't reused.\n\nThe ticket is created on the entity with GetAuthSessionTicket or ISteamGameServer::GetAuthSessionTicket and then needs to be provided over the network for the other end to validate.\nThis registers for ValidateAuthTicketResponse_t callbacks if the entity goes offline or cancels the ticket. See EAuthSessionResponse for more information.\nWhen the multiplayer session terminates you must call EndAuthSession.\n\n@param        Ticket          The auth ticket to validate.\n@param        SteamID         The entity's Steam ID that sent this ticket." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Ticket_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Ticket;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProUser_BeginAuthSession_Statics::NewProp_Ticket_Inner = { "Ticket", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProUser_BeginAuthSession_Statics::NewProp_Ticket = { "Ticket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUser_eventBeginAuthSession_Parms, Ticket), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProUser_BeginAuthSession_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUser_eventBeginAuthSession_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProUser_BeginAuthSession_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProUser_BeginAuthSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUser_eventBeginAuthSession_Parms, ReturnValue), Z_Construct_UEnum_SteamCorePro_ESteamBeginAuthSessionResult, METADATA_PARAMS(0, nullptr) }; // 1562206282
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUser_BeginAuthSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_BeginAuthSession_Statics::NewProp_Ticket_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_BeginAuthSession_Statics::NewProp_Ticket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_BeginAuthSession_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_BeginAuthSession_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_BeginAuthSession_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_BeginAuthSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUser_BeginAuthSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUser, nullptr, "BeginAuthSession", nullptr, nullptr, Z_Construct_UFunction_USteamProUser_BeginAuthSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_BeginAuthSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUser_BeginAuthSession_Statics::SteamProUser_eventBeginAuthSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_BeginAuthSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUser_BeginAuthSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUser_BeginAuthSession_Statics::SteamProUser_eventBeginAuthSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUser_BeginAuthSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUser_BeginAuthSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUser::execBeginAuthSession)
{
	P_GET_TARRAY(uint8,Z_Param_Ticket);
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamBeginAuthSessionResult*)Z_Param__Result=USteamProUser::BeginAuthSession(Z_Param_Ticket,Z_Param_SteamID);
	P_NATIVE_END;
}
// End Class USteamProUser Function BeginAuthSession

// Begin Class USteamProUser Function BIsBehindNAT
struct Z_Construct_UFunction_USteamProUser_BIsBehindNAT_Statics
{
	struct SteamProUser_eventBIsBehindNAT_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Checks if the current users looks like they are behind a NAT device.\n\x09*\n\x09* This is only valid if the user is connected to the Steam servers and may not catch all forms of NAT.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Checks if the current users looks like they are behind a NAT device.\n\nThis is only valid if the user is connected to the Steam servers and may not catch all forms of NAT." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProUser_BIsBehindNAT_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUser_eventBIsBehindNAT_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUser_BIsBehindNAT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUser_eventBIsBehindNAT_Parms), &Z_Construct_UFunction_USteamProUser_BIsBehindNAT_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUser_BIsBehindNAT_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_BIsBehindNAT_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_BIsBehindNAT_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUser_BIsBehindNAT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUser, nullptr, "BIsBehindNAT", nullptr, nullptr, Z_Construct_UFunction_USteamProUser_BIsBehindNAT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_BIsBehindNAT_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUser_BIsBehindNAT_Statics::SteamProUser_eventBIsBehindNAT_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_BIsBehindNAT_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUser_BIsBehindNAT_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUser_BIsBehindNAT_Statics::SteamProUser_eventBIsBehindNAT_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUser_BIsBehindNAT()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUser_BIsBehindNAT_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUser::execBIsBehindNAT)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUser::BIsBehindNAT();
	P_NATIVE_END;
}
// End Class USteamProUser Function BIsBehindNAT

// Begin Class USteamProUser Function BIsPhoneIdentifying
struct Z_Construct_UFunction_USteamProUser_BIsPhoneIdentifying_Statics
{
	struct SteamProUser_eventBIsPhoneIdentifying_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Checks whether the user's phone number is used to uniquely identify them.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Checks whether the user's phone number is used to uniquely identify them." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProUser_BIsPhoneIdentifying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUser_eventBIsPhoneIdentifying_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUser_BIsPhoneIdentifying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUser_eventBIsPhoneIdentifying_Parms), &Z_Construct_UFunction_USteamProUser_BIsPhoneIdentifying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUser_BIsPhoneIdentifying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_BIsPhoneIdentifying_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_BIsPhoneIdentifying_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUser_BIsPhoneIdentifying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUser, nullptr, "BIsPhoneIdentifying", nullptr, nullptr, Z_Construct_UFunction_USteamProUser_BIsPhoneIdentifying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_BIsPhoneIdentifying_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUser_BIsPhoneIdentifying_Statics::SteamProUser_eventBIsPhoneIdentifying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_BIsPhoneIdentifying_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUser_BIsPhoneIdentifying_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUser_BIsPhoneIdentifying_Statics::SteamProUser_eventBIsPhoneIdentifying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUser_BIsPhoneIdentifying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUser_BIsPhoneIdentifying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUser::execBIsPhoneIdentifying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUser::BIsPhoneIdentifying();
	P_NATIVE_END;
}
// End Class USteamProUser Function BIsPhoneIdentifying

// Begin Class USteamProUser Function BIsPhoneRequiringVerification
struct Z_Construct_UFunction_USteamProUser_BIsPhoneRequiringVerification_Statics
{
	struct SteamProUser_eventBIsPhoneRequiringVerification_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Checks whether the current user's phone number is awaiting (re)verification.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Checks whether the current user's phone number is awaiting (re)verification." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProUser_BIsPhoneRequiringVerification_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUser_eventBIsPhoneRequiringVerification_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUser_BIsPhoneRequiringVerification_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUser_eventBIsPhoneRequiringVerification_Parms), &Z_Construct_UFunction_USteamProUser_BIsPhoneRequiringVerification_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUser_BIsPhoneRequiringVerification_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_BIsPhoneRequiringVerification_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_BIsPhoneRequiringVerification_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUser_BIsPhoneRequiringVerification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUser, nullptr, "BIsPhoneRequiringVerification", nullptr, nullptr, Z_Construct_UFunction_USteamProUser_BIsPhoneRequiringVerification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_BIsPhoneRequiringVerification_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUser_BIsPhoneRequiringVerification_Statics::SteamProUser_eventBIsPhoneRequiringVerification_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_BIsPhoneRequiringVerification_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUser_BIsPhoneRequiringVerification_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUser_BIsPhoneRequiringVerification_Statics::SteamProUser_eventBIsPhoneRequiringVerification_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUser_BIsPhoneRequiringVerification()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUser_BIsPhoneRequiringVerification_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUser::execBIsPhoneRequiringVerification)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUser::BIsPhoneRequiringVerification();
	P_NATIVE_END;
}
// End Class USteamProUser Function BIsPhoneRequiringVerification

// Begin Class USteamProUser Function BIsPhoneVerified
struct Z_Construct_UFunction_USteamProUser_BIsPhoneVerified_Statics
{
	struct SteamProUser_eventBIsPhoneVerified_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Checks whether the current user has verified their phone number.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Checks whether the current user has verified their phone number." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProUser_BIsPhoneVerified_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUser_eventBIsPhoneVerified_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUser_BIsPhoneVerified_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUser_eventBIsPhoneVerified_Parms), &Z_Construct_UFunction_USteamProUser_BIsPhoneVerified_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUser_BIsPhoneVerified_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_BIsPhoneVerified_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_BIsPhoneVerified_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUser_BIsPhoneVerified_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUser, nullptr, "BIsPhoneVerified", nullptr, nullptr, Z_Construct_UFunction_USteamProUser_BIsPhoneVerified_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_BIsPhoneVerified_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUser_BIsPhoneVerified_Statics::SteamProUser_eventBIsPhoneVerified_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_BIsPhoneVerified_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUser_BIsPhoneVerified_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUser_BIsPhoneVerified_Statics::SteamProUser_eventBIsPhoneVerified_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUser_BIsPhoneVerified()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUser_BIsPhoneVerified_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUser::execBIsPhoneVerified)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUser::BIsPhoneVerified();
	P_NATIVE_END;
}
// End Class USteamProUser Function BIsPhoneVerified

// Begin Class USteamProUser Function BIsTwoFactorEnabled
struct Z_Construct_UFunction_USteamProUser_BIsTwoFactorEnabled_Statics
{
	struct SteamProUser_eventBIsTwoFactorEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Checks whether the current user has Steam Guard two factor authentication enabled on their account.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Checks whether the current user has Steam Guard two factor authentication enabled on their account." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProUser_BIsTwoFactorEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUser_eventBIsTwoFactorEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUser_BIsTwoFactorEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUser_eventBIsTwoFactorEnabled_Parms), &Z_Construct_UFunction_USteamProUser_BIsTwoFactorEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUser_BIsTwoFactorEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_BIsTwoFactorEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_BIsTwoFactorEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUser_BIsTwoFactorEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUser, nullptr, "BIsTwoFactorEnabled", nullptr, nullptr, Z_Construct_UFunction_USteamProUser_BIsTwoFactorEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_BIsTwoFactorEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUser_BIsTwoFactorEnabled_Statics::SteamProUser_eventBIsTwoFactorEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_BIsTwoFactorEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUser_BIsTwoFactorEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUser_BIsTwoFactorEnabled_Statics::SteamProUser_eventBIsTwoFactorEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUser_BIsTwoFactorEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUser_BIsTwoFactorEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUser::execBIsTwoFactorEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUser::BIsTwoFactorEnabled();
	P_NATIVE_END;
}
// End Class USteamProUser Function BIsTwoFactorEnabled

// Begin Class USteamProUser Function BLoggedOn
struct Z_Construct_UFunction_USteamProUser_BLoggedOn_Statics
{
	struct SteamProUser_eventBLoggedOn_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Checks if the current user's Steam client is connected to the Steam servers.\n\x09*\n\x09* If it's not then no real-time services provided by the Steamworks API will be enabled. \n\x09* The Steam client will automatically be trying to recreate the connection as often as possible. \n\x09* When the connection is restored a SteamServersConnected_t callback will be posted.\n\x09* You usually don't need to check for this yourself. \n\x09* All of the API calls that rely on this will check internally. Forcefully disabling \n\x09* stuff when the player loses access is usually not a very good experience for the player and you could be \n\x09* preventing them from accessing APIs that do not need a live connection to Steam.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Checks if the current user's Steam client is connected to the Steam servers.\n\nIf it's not then no real-time services provided by the Steamworks API will be enabled.\nThe Steam client will automatically be trying to recreate the connection as often as possible.\nWhen the connection is restored a SteamServersConnected_t callback will be posted.\nYou usually don't need to check for this yourself.\nAll of the API calls that rely on this will check internally. Forcefully disabling\nstuff when the player loses access is usually not a very good experience for the player and you could be\npreventing them from accessing APIs that do not need a live connection to Steam." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProUser_BLoggedOn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUser_eventBLoggedOn_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUser_BLoggedOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUser_eventBLoggedOn_Parms), &Z_Construct_UFunction_USteamProUser_BLoggedOn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUser_BLoggedOn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_BLoggedOn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_BLoggedOn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUser_BLoggedOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUser, nullptr, "BLoggedOn", nullptr, nullptr, Z_Construct_UFunction_USteamProUser_BLoggedOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_BLoggedOn_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUser_BLoggedOn_Statics::SteamProUser_eventBLoggedOn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_BLoggedOn_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUser_BLoggedOn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUser_BLoggedOn_Statics::SteamProUser_eventBLoggedOn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUser_BLoggedOn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUser_BLoggedOn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUser::execBLoggedOn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUser::BLoggedOn();
	P_NATIVE_END;
}
// End Class USteamProUser Function BLoggedOn

// Begin Class USteamProUser Function CancelAuthTicket
struct Z_Construct_UFunction_USteamProUser_CancelAuthTicket_Statics
{
	struct SteamProUser_eventCancelAuthTicket_Parms
	{
		FSteamTicketHandle TicketHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Cancels an auth ticket received from GetAuthSessionTicket. This should be called when no longer playing with the specified entity.\n\x09*\n\x09* @param\x09TicketHandle\x09The active auth ticket to cancel.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Cancels an auth ticket received from GetAuthSessionTicket. This should be called when no longer playing with the specified entity.\n\n@param        TicketHandle    The active auth ticket to cancel." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TicketHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProUser_CancelAuthTicket_Statics::NewProp_TicketHandle = { "TicketHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUser_eventCancelAuthTicket_Parms, TicketHandle), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(0, nullptr) }; // 2637768704
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUser_CancelAuthTicket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_CancelAuthTicket_Statics::NewProp_TicketHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_CancelAuthTicket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUser_CancelAuthTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUser, nullptr, "CancelAuthTicket", nullptr, nullptr, Z_Construct_UFunction_USteamProUser_CancelAuthTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_CancelAuthTicket_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUser_CancelAuthTicket_Statics::SteamProUser_eventCancelAuthTicket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_CancelAuthTicket_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUser_CancelAuthTicket_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUser_CancelAuthTicket_Statics::SteamProUser_eventCancelAuthTicket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUser_CancelAuthTicket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUser_CancelAuthTicket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUser::execCancelAuthTicket)
{
	P_GET_STRUCT(FSteamTicketHandle,Z_Param_TicketHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProUser::CancelAuthTicket(Z_Param_TicketHandle);
	P_NATIVE_END;
}
// End Class USteamProUser Function CancelAuthTicket

// Begin Class USteamProUser Function DecompressVoice
struct Z_Construct_UFunction_USteamProUser_DecompressVoice_Statics
{
	struct SteamProUser_eventDecompressVoice_Parms
	{
		TArray<uint8> CompressedBuffer;
		int32 DesiredSampleRate;
		TArray<uint8> DestBuffer;
		ESteamVoiceResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Decodes the compressed voice data returned by GetVoice.\n\x09*\n\x09* The output data is raw single-channel 16-bit PCM audio. The decoder supports any sample rate from 11025 to 48000. See GetVoiceOptimalSampleRate for more information.\n\x09* It is recommended that you start with a 20KiB buffer and then reallocate as necessary.\n\x09*\n\x09* @param\x09""CompressedBuffer\x09\x09The compressed data received from GetVoice.\n\x09* @param\x09""DesiredSampleRate\x09\x09The sample rate that will be returned. This can be from 11025 to 48000, you should either use the rate that works best for your audio playback system, which likely takes the users audio hardware into account, or you can use GetVoiceOptimalSampleRate to get the native sample rate of the Steam voice decoder.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Decodes the compressed voice data returned by GetVoice.\n\nThe output data is raw single-channel 16-bit PCM audio. The decoder supports any sample rate from 11025 to 48000. See GetVoiceOptimalSampleRate for more information.\nIt is recommended that you start with a 20KiB buffer and then reallocate as necessary.\n\n@param        CompressedBuffer                The compressed data received from GetVoice.\n@param        DesiredSampleRate               The sample rate that will be returned. This can be from 11025 to 48000, you should either use the rate that works best for your audio playback system, which likely takes the users audio hardware into account, or you can use GetVoiceOptimalSampleRate to get the native sample rate of the Steam voice decoder." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompressedBuffer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CompressedBuffer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CompressedBuffer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DesiredSampleRate;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DestBuffer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DestBuffer;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProUser_DecompressVoice_Statics::NewProp_CompressedBuffer_Inner = { "CompressedBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProUser_DecompressVoice_Statics::NewProp_CompressedBuffer = { "CompressedBuffer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUser_eventDecompressVoice_Parms, CompressedBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompressedBuffer_MetaData), NewProp_CompressedBuffer_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUser_DecompressVoice_Statics::NewProp_DesiredSampleRate = { "DesiredSampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUser_eventDecompressVoice_Parms, DesiredSampleRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProUser_DecompressVoice_Statics::NewProp_DestBuffer_Inner = { "DestBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProUser_DecompressVoice_Statics::NewProp_DestBuffer = { "DestBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUser_eventDecompressVoice_Parms, DestBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProUser_DecompressVoice_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProUser_DecompressVoice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUser_eventDecompressVoice_Parms, ReturnValue), Z_Construct_UEnum_SteamCorePro_ESteamVoiceResult, METADATA_PARAMS(0, nullptr) }; // 3577625107
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUser_DecompressVoice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_DecompressVoice_Statics::NewProp_CompressedBuffer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_DecompressVoice_Statics::NewProp_CompressedBuffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_DecompressVoice_Statics::NewProp_DesiredSampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_DecompressVoice_Statics::NewProp_DestBuffer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_DecompressVoice_Statics::NewProp_DestBuffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_DecompressVoice_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_DecompressVoice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_DecompressVoice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUser_DecompressVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUser, nullptr, "DecompressVoice", nullptr, nullptr, Z_Construct_UFunction_USteamProUser_DecompressVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_DecompressVoice_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUser_DecompressVoice_Statics::SteamProUser_eventDecompressVoice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_DecompressVoice_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUser_DecompressVoice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUser_DecompressVoice_Statics::SteamProUser_eventDecompressVoice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUser_DecompressVoice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUser_DecompressVoice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUser::execDecompressVoice)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_CompressedBuffer);
	P_GET_PROPERTY(FIntProperty,Z_Param_DesiredSampleRate);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_DestBuffer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamVoiceResult*)Z_Param__Result=USteamProUser::DecompressVoice(Z_Param_Out_CompressedBuffer,Z_Param_DesiredSampleRate,Z_Param_Out_DestBuffer);
	P_NATIVE_END;
}
// End Class USteamProUser Function DecompressVoice

// Begin Class USteamProUser Function EndAuthSession
struct Z_Construct_UFunction_USteamProUser_EndAuthSession_Statics
{
	struct SteamProUser_eventEndAuthSession_Parms
	{
		FSteamID SteamID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Ends an auth session that was started with BeginAuthSession. This should be called when no longer playing with the specified entity.\n\x09*\n\x09* @param\x09SteamID\x09\x09The entity to end the active auth session with.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Ends an auth session that was started with BeginAuthSession. This should be called when no longer playing with the specified entity.\n\n@param        SteamID         The entity to end the active auth session with." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProUser_EndAuthSession_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUser_eventEndAuthSession_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUser_EndAuthSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_EndAuthSession_Statics::NewProp_SteamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_EndAuthSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUser_EndAuthSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUser, nullptr, "EndAuthSession", nullptr, nullptr, Z_Construct_UFunction_USteamProUser_EndAuthSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_EndAuthSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUser_EndAuthSession_Statics::SteamProUser_eventEndAuthSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_EndAuthSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUser_EndAuthSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUser_EndAuthSession_Statics::SteamProUser_eventEndAuthSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUser_EndAuthSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUser_EndAuthSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUser::execEndAuthSession)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProUser::EndAuthSession(Z_Param_SteamID);
	P_NATIVE_END;
}
// End Class USteamProUser Function EndAuthSession

// Begin Class USteamProUser Function GetAuthSessionTicket
struct Z_Construct_UFunction_USteamProUser_GetAuthSessionTicket_Statics
{
	struct SteamProUser_eventGetAuthSessionTicket_Parms
	{
		TArray<uint8> Ticket;
		FSteamNetworkingIdentity SteamNetworkingIdentity;
		FSteamTicketHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Retrieve a authentication ticket to be sent to the entity who wishes to authenticate you.\n\x09*\n\x09* After calling this you can send the ticket to the entity where they can then call BeginAuthSession/ISteamGameServer::BeginAuthSession \n\x09* to verify this entities integrity.\n\x09* When creating a ticket for use by the ISteamUserAuth/AuthenticateUserTicket Web API, \n\x09* the calling application should wait for the GetAuthSessionTicketResponse_t callback generated by the \n\x09* API call before attempting to use the ticket to ensure that the ticket has been communicated to the server. \n\x09* If this callback does not come in a timely fashion (10 - 20 seconds), then your client is not connected to Steam\n\x09* and the AuthenticateUserTicket call will fail because it can not authenticate the user.\n\x09*\n\x09* @param\x09Ticket\x09\x09The buffer where the new auth ticket will be copied into if the call was successful.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Retrieve a authentication ticket to be sent to the entity who wishes to authenticate you.\n\nAfter calling this you can send the ticket to the entity where they can then call BeginAuthSession/ISteamGameServer::BeginAuthSession\nto verify this entities integrity.\nWhen creating a ticket for use by the ISteamUserAuth/AuthenticateUserTicket Web API,\nthe calling application should wait for the GetAuthSessionTicketResponse_t callback generated by the\nAPI call before attempting to use the ticket to ensure that the ticket has been communicated to the server.\nIf this callback does not come in a timely fashion (10 - 20 seconds), then your client is not connected to Steam\nand the AuthenticateUserTicket call will fail because it can not authenticate the user.\n\n@param        Ticket          The buffer where the new auth ticket will be copied into if the call was successful." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Ticket_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Ticket;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamNetworkingIdentity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProUser_GetAuthSessionTicket_Statics::NewProp_Ticket_Inner = { "Ticket", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProUser_GetAuthSessionTicket_Statics::NewProp_Ticket = { "Ticket", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUser_eventGetAuthSessionTicket_Parms, Ticket), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProUser_GetAuthSessionTicket_Statics::NewProp_SteamNetworkingIdentity = { "SteamNetworkingIdentity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUser_eventGetAuthSessionTicket_Parms, SteamNetworkingIdentity), Z_Construct_UScriptStruct_FSteamNetworkingIdentity, METADATA_PARAMS(0, nullptr) }; // 3585991723
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProUser_GetAuthSessionTicket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUser_eventGetAuthSessionTicket_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(0, nullptr) }; // 2637768704
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUser_GetAuthSessionTicket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_GetAuthSessionTicket_Statics::NewProp_Ticket_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_GetAuthSessionTicket_Statics::NewProp_Ticket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_GetAuthSessionTicket_Statics::NewProp_SteamNetworkingIdentity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_GetAuthSessionTicket_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_GetAuthSessionTicket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUser_GetAuthSessionTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUser, nullptr, "GetAuthSessionTicket", nullptr, nullptr, Z_Construct_UFunction_USteamProUser_GetAuthSessionTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_GetAuthSessionTicket_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUser_GetAuthSessionTicket_Statics::SteamProUser_eventGetAuthSessionTicket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_GetAuthSessionTicket_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUser_GetAuthSessionTicket_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUser_GetAuthSessionTicket_Statics::SteamProUser_eventGetAuthSessionTicket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUser_GetAuthSessionTicket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUser_GetAuthSessionTicket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUser::execGetAuthSessionTicket)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Ticket);
	P_GET_STRUCT(FSteamNetworkingIdentity,Z_Param_SteamNetworkingIdentity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamTicketHandle*)Z_Param__Result=USteamProUser::GetAuthSessionTicket(Z_Param_Out_Ticket,Z_Param_SteamNetworkingIdentity);
	P_NATIVE_END;
}
// End Class USteamProUser Function GetAuthSessionTicket

// Begin Class USteamProUser Function GetAuthTicketForWebApi
struct Z_Construct_UFunction_USteamProUser_GetAuthTicketForWebApi_Statics
{
	struct SteamProUser_eventGetAuthTicketForWebApi_Parms
	{
		FString Identity;
		FSteamTicketHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/** \n\x09 * Request a ticket which will be used for webapi \"ISteamUserAuth\\AuthenticateUserTicket\"\n\x09 * The ticket will be returned in callback GetTicketForWebApiResponse_t\n\x09 * \n\x09 * @param\x09Identity\x09Is an optional input parameter to identify the service the ticket will be sent to\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Request a ticket which will be used for webapi \"ISteamUserAuth\\AuthenticateUserTicket\"\nThe ticket will be returned in callback GetTicketForWebApiResponse_t\n\n@param       Identity        Is an optional input parameter to identify the service the ticket will be sent to" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Identity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProUser_GetAuthTicketForWebApi_Statics::NewProp_Identity = { "Identity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUser_eventGetAuthTicketForWebApi_Parms, Identity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProUser_GetAuthTicketForWebApi_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUser_eventGetAuthTicketForWebApi_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(0, nullptr) }; // 2637768704
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUser_GetAuthTicketForWebApi_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_GetAuthTicketForWebApi_Statics::NewProp_Identity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_GetAuthTicketForWebApi_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_GetAuthTicketForWebApi_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUser_GetAuthTicketForWebApi_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUser, nullptr, "GetAuthTicketForWebApi", nullptr, nullptr, Z_Construct_UFunction_USteamProUser_GetAuthTicketForWebApi_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_GetAuthTicketForWebApi_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUser_GetAuthTicketForWebApi_Statics::SteamProUser_eventGetAuthTicketForWebApi_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_GetAuthTicketForWebApi_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUser_GetAuthTicketForWebApi_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUser_GetAuthTicketForWebApi_Statics::SteamProUser_eventGetAuthTicketForWebApi_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUser_GetAuthTicketForWebApi()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUser_GetAuthTicketForWebApi_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUser::execGetAuthTicketForWebApi)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Identity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamTicketHandle*)Z_Param__Result=USteamProUser::GetAuthTicketForWebApi(Z_Param_Identity);
	P_NATIVE_END;
}
// End Class USteamProUser Function GetAuthTicketForWebApi

// Begin Class USteamProUser Function GetAvailableVoice
struct Z_Construct_UFunction_USteamProUser_GetAvailableVoice_Statics
{
	struct SteamProUser_eventGetAvailableVoice_Parms
	{
		int32 CompressedBytes;
		int32 UncompressedBytes;
		int32 UncompressedVoiceDesiredSampleRate;
		ESteamVoiceResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Checks to see if there is captured audio data available from GetVoice, and gets the size of the data.\n\x09*\n\x09* Most applications will only use compressed data and should ignore the other parameters, \n\x09* which exist primarily for backwards compatibility. See GetVoice for further explanation of \"uncompressed\" data.\n\x09*\n\x09* @param\x09""CompressedBytes\x09\x09\x09\x09\x09\x09\x09Returns the size of the available voice data in bytes.\n\x09* @param\x09UncompressedBytes\x09\x09\x09\x09\x09\x09""Deprecated\n\x09* @param\x09UncompressedVoiceDesiredSampleRate\x09\x09""Deprecated\n\x09*/" },
		{ "CPP_Default_UncompressedVoiceDesiredSampleRate", "0" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Checks to see if there is captured audio data available from GetVoice, and gets the size of the data.\n\nMost applications will only use compressed data and should ignore the other parameters,\nwhich exist primarily for backwards compatibility. See GetVoice for further explanation of \"uncompressed\" data.\n\n@param        CompressedBytes                                                 Returns the size of the available voice data in bytes.\n@param        UncompressedBytes                                               Deprecated\n@param        UncompressedVoiceDesiredSampleRate              Deprecated" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CompressedBytes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UncompressedBytes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UncompressedVoiceDesiredSampleRate;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUser_GetAvailableVoice_Statics::NewProp_CompressedBytes = { "CompressedBytes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUser_eventGetAvailableVoice_Parms, CompressedBytes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUser_GetAvailableVoice_Statics::NewProp_UncompressedBytes = { "UncompressedBytes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUser_eventGetAvailableVoice_Parms, UncompressedBytes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUser_GetAvailableVoice_Statics::NewProp_UncompressedVoiceDesiredSampleRate = { "UncompressedVoiceDesiredSampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUser_eventGetAvailableVoice_Parms, UncompressedVoiceDesiredSampleRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProUser_GetAvailableVoice_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProUser_GetAvailableVoice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUser_eventGetAvailableVoice_Parms, ReturnValue), Z_Construct_UEnum_SteamCorePro_ESteamVoiceResult, METADATA_PARAMS(0, nullptr) }; // 3577625107
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUser_GetAvailableVoice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_GetAvailableVoice_Statics::NewProp_CompressedBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_GetAvailableVoice_Statics::NewProp_UncompressedBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_GetAvailableVoice_Statics::NewProp_UncompressedVoiceDesiredSampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_GetAvailableVoice_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_GetAvailableVoice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_GetAvailableVoice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUser_GetAvailableVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUser, nullptr, "GetAvailableVoice", nullptr, nullptr, Z_Construct_UFunction_USteamProUser_GetAvailableVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_GetAvailableVoice_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUser_GetAvailableVoice_Statics::SteamProUser_eventGetAvailableVoice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_GetAvailableVoice_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUser_GetAvailableVoice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUser_GetAvailableVoice_Statics::SteamProUser_eventGetAvailableVoice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUser_GetAvailableVoice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUser_GetAvailableVoice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUser::execGetAvailableVoice)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_CompressedBytes);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_UncompressedBytes);
	P_GET_PROPERTY(FIntProperty,Z_Param_UncompressedVoiceDesiredSampleRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamVoiceResult*)Z_Param__Result=USteamProUser::GetAvailableVoice(Z_Param_Out_CompressedBytes,Z_Param_Out_UncompressedBytes,Z_Param_UncompressedVoiceDesiredSampleRate);
	P_NATIVE_END;
}
// End Class USteamProUser Function GetAvailableVoice

// Begin Class USteamProUser Function GetEncryptedAppTicket
struct Z_Construct_UFunction_USteamProUser_GetEncryptedAppTicket_Statics
{
	struct SteamProUser_eventGetEncryptedAppTicket_Parms
	{
		TArray<uint8> Ticket;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Retrieve an encrypted ticket.\n\x09*\n\x09* This should be called after requesting an encrypted app ticket with RequestEncryptedAppTicket and receiving the EncryptedAppTicketResponse_t call result.\n\x09* You should then pass this encrypted ticket to your secure servers to be decrypted using your secret key using SteamEncryptedAppTicket::BDecryptTicket.\n\x09* NOTE: If you call this without calling RequestEncryptedAppTicket, the call may succeed but you will likely get a stale ticket.\n\x09*\n\x09* @param\x09Ticket\x09\x09The encrypted app ticket is copied into this buffer.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Retrieve an encrypted ticket.\n\nThis should be called after requesting an encrypted app ticket with RequestEncryptedAppTicket and receiving the EncryptedAppTicketResponse_t call result.\nYou should then pass this encrypted ticket to your secure servers to be decrypted using your secret key using SteamEncryptedAppTicket::BDecryptTicket.\nNOTE: If you call this without calling RequestEncryptedAppTicket, the call may succeed but you will likely get a stale ticket.\n\n@param        Ticket          The encrypted app ticket is copied into this buffer." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Ticket_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Ticket;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProUser_GetEncryptedAppTicket_Statics::NewProp_Ticket_Inner = { "Ticket", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProUser_GetEncryptedAppTicket_Statics::NewProp_Ticket = { "Ticket", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUser_eventGetEncryptedAppTicket_Parms, Ticket), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProUser_GetEncryptedAppTicket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUser_eventGetEncryptedAppTicket_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUser_GetEncryptedAppTicket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUser_eventGetEncryptedAppTicket_Parms), &Z_Construct_UFunction_USteamProUser_GetEncryptedAppTicket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUser_GetEncryptedAppTicket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_GetEncryptedAppTicket_Statics::NewProp_Ticket_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_GetEncryptedAppTicket_Statics::NewProp_Ticket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_GetEncryptedAppTicket_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_GetEncryptedAppTicket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUser_GetEncryptedAppTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUser, nullptr, "GetEncryptedAppTicket", nullptr, nullptr, Z_Construct_UFunction_USteamProUser_GetEncryptedAppTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_GetEncryptedAppTicket_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUser_GetEncryptedAppTicket_Statics::SteamProUser_eventGetEncryptedAppTicket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_GetEncryptedAppTicket_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUser_GetEncryptedAppTicket_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUser_GetEncryptedAppTicket_Statics::SteamProUser_eventGetEncryptedAppTicket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUser_GetEncryptedAppTicket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUser_GetEncryptedAppTicket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUser::execGetEncryptedAppTicket)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Ticket);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUser::GetEncryptedAppTicket(Z_Param_Out_Ticket);
	P_NATIVE_END;
}
// End Class USteamProUser Function GetEncryptedAppTicket

// Begin Class USteamProUser Function GetGameBadgeLevel
struct Z_Construct_UFunction_USteamProUser_GetGameBadgeLevel_Statics
{
	struct SteamProUser_eventGetGameBadgeLevel_Parms
	{
		int32 Series;
		bool bFoil;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Gets the level of the users Steam badge for your game.\n\x09*\n\x09* The user can have two different badges for a series; the regular badge (max level 5) and the foil badge (max level 1).\n\x09*\n\x09* @param\x09Series\x09If you only have one set of cards, the series will be 1.\n\x09* @param\x09""bFoil\x09""Check if they have received the foil badge.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Gets the level of the users Steam badge for your game.\n\nThe user can have two different badges for a series; the regular badge (max level 5) and the foil badge (max level 1).\n\n@param        Series  If you only have one set of cards, the series will be 1.\n@param        bFoil   Check if they have received the foil badge." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Series;
	static void NewProp_bFoil_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFoil;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUser_GetGameBadgeLevel_Statics::NewProp_Series = { "Series", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUser_eventGetGameBadgeLevel_Parms, Series), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProUser_GetGameBadgeLevel_Statics::NewProp_bFoil_SetBit(void* Obj)
{
	((SteamProUser_eventGetGameBadgeLevel_Parms*)Obj)->bFoil = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUser_GetGameBadgeLevel_Statics::NewProp_bFoil = { "bFoil", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUser_eventGetGameBadgeLevel_Parms), &Z_Construct_UFunction_USteamProUser_GetGameBadgeLevel_Statics::NewProp_bFoil_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUser_GetGameBadgeLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUser_eventGetGameBadgeLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUser_GetGameBadgeLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_GetGameBadgeLevel_Statics::NewProp_Series,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_GetGameBadgeLevel_Statics::NewProp_bFoil,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_GetGameBadgeLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_GetGameBadgeLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUser_GetGameBadgeLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUser, nullptr, "GetGameBadgeLevel", nullptr, nullptr, Z_Construct_UFunction_USteamProUser_GetGameBadgeLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_GetGameBadgeLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUser_GetGameBadgeLevel_Statics::SteamProUser_eventGetGameBadgeLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_GetGameBadgeLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUser_GetGameBadgeLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUser_GetGameBadgeLevel_Statics::SteamProUser_eventGetGameBadgeLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUser_GetGameBadgeLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUser_GetGameBadgeLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUser::execGetGameBadgeLevel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Series);
	P_GET_UBOOL(Z_Param_bFoil);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProUser::GetGameBadgeLevel(Z_Param_Series,Z_Param_bFoil);
	P_NATIVE_END;
}
// End Class USteamProUser Function GetGameBadgeLevel

// Begin Class USteamProUser Function GetPlayerSteamLevel
struct Z_Construct_UFunction_USteamProUser_GetPlayerSteamLevel_Statics
{
	struct SteamProUser_eventGetPlayerSteamLevel_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Gets the Steam level of the user, as shown on their Steam community profile.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Gets the Steam level of the user, as shown on their Steam community profile." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUser_GetPlayerSteamLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUser_eventGetPlayerSteamLevel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUser_GetPlayerSteamLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_GetPlayerSteamLevel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_GetPlayerSteamLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUser_GetPlayerSteamLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUser, nullptr, "GetPlayerSteamLevel", nullptr, nullptr, Z_Construct_UFunction_USteamProUser_GetPlayerSteamLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_GetPlayerSteamLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUser_GetPlayerSteamLevel_Statics::SteamProUser_eventGetPlayerSteamLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_GetPlayerSteamLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUser_GetPlayerSteamLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUser_GetPlayerSteamLevel_Statics::SteamProUser_eventGetPlayerSteamLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUser_GetPlayerSteamLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUser_GetPlayerSteamLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUser::execGetPlayerSteamLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProUser::GetPlayerSteamLevel();
	P_NATIVE_END;
}
// End Class USteamProUser Function GetPlayerSteamLevel

// Begin Class USteamProUser Function GetSteamID
struct Z_Construct_UFunction_USteamProUser_GetSteamID_Statics
{
	struct SteamProUser_eventGetSteamID_Parms
	{
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Gets the Steam ID of the account currently logged into the Steam client. This is commonly called the 'current user', or 'local user'.\n\x09*\n\x09* A Steam ID is a unique identifier for a Steam accounts, Steam groups, Lobbies and Chat rooms, and used to differentiate users in all parts of the Steamworks API.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Gets the Steam ID of the account currently logged into the Steam client. This is commonly called the 'current user', or 'local user'.\n\nA Steam ID is a unique identifier for a Steam accounts, Steam groups, Lobbies and Chat rooms, and used to differentiate users in all parts of the Steamworks API." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProUser_GetSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUser_eventGetSteamID_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUser_GetSteamID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_GetSteamID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_GetSteamID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUser_GetSteamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUser, nullptr, "GetSteamID", nullptr, nullptr, Z_Construct_UFunction_USteamProUser_GetSteamID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_GetSteamID_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUser_GetSteamID_Statics::SteamProUser_eventGetSteamID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_GetSteamID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUser_GetSteamID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUser_GetSteamID_Statics::SteamProUser_eventGetSteamID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUser_GetSteamID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUser_GetSteamID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUser::execGetSteamID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=USteamProUser::GetSteamID();
	P_NATIVE_END;
}
// End Class USteamProUser Function GetSteamID

// Begin Class USteamProUser Function GetSteamID_Pure
struct Z_Construct_UFunction_USteamProUser_GetSteamID_Pure_Statics
{
	struct SteamProUser_eventGetSteamID_Pure_Parms
	{
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Gets the Steam ID of the account currently logged into the Steam client. This is commonly called the 'current user', or 'local user'.\n\x09*\n\x09* A Steam ID is a unique identifier for a Steam accounts, Steam groups, Lobbies and Chat rooms, and used to differentiate users in all parts of the Steamworks API.\n\x09*/" },
		{ "DisplayName", "Get Steam ID (Pure)" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Gets the Steam ID of the account currently logged into the Steam client. This is commonly called the 'current user', or 'local user'.\n\nA Steam ID is a unique identifier for a Steam accounts, Steam groups, Lobbies and Chat rooms, and used to differentiate users in all parts of the Steamworks API." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProUser_GetSteamID_Pure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUser_eventGetSteamID_Pure_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUser_GetSteamID_Pure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_GetSteamID_Pure_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_GetSteamID_Pure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUser_GetSteamID_Pure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUser, nullptr, "GetSteamID_Pure", nullptr, nullptr, Z_Construct_UFunction_USteamProUser_GetSteamID_Pure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_GetSteamID_Pure_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUser_GetSteamID_Pure_Statics::SteamProUser_eventGetSteamID_Pure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_GetSteamID_Pure_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUser_GetSteamID_Pure_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUser_GetSteamID_Pure_Statics::SteamProUser_eventGetSteamID_Pure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUser_GetSteamID_Pure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUser_GetSteamID_Pure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUser::execGetSteamID_Pure)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=USteamProUser::GetSteamID_Pure();
	P_NATIVE_END;
}
// End Class USteamProUser Function GetSteamID_Pure

// Begin Class USteamProUser Function GetSteamUser
struct Z_Construct_UFunction_USteamProUser_GetSteamUser_Statics
{
	struct SteamProUser_eventGetSteamUser_Parms
	{
		USteamProUser* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamProUser_GetSteamUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUser_eventGetSteamUser_Parms, ReturnValue), Z_Construct_UClass_USteamProUser_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUser_GetSteamUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_GetSteamUser_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_GetSteamUser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUser_GetSteamUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUser, nullptr, "GetSteamUser", nullptr, nullptr, Z_Construct_UFunction_USteamProUser_GetSteamUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_GetSteamUser_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUser_GetSteamUser_Statics::SteamProUser_eventGetSteamUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_GetSteamUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUser_GetSteamUser_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUser_GetSteamUser_Statics::SteamProUser_eventGetSteamUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUser_GetSteamUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUser_GetSteamUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUser::execGetSteamUser)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamProUser**)Z_Param__Result=USteamProUser::GetSteamUser();
	P_NATIVE_END;
}
// End Class USteamProUser Function GetSteamUser

// Begin Class USteamProUser Function GetVoice
struct Z_Construct_UFunction_USteamProUser_GetVoice_Statics
{
	struct SteamProUser_eventGetVoice_Parms
	{
		TArray<uint8> DestBuffer;
		int32 BytesWritten;
		ESteamVoiceResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Read captured audio data from the microphone buffer.\n\x09*\n\x09* The compressed data can be transmitted by your application and decoded back into raw audio data using DecompressVoice \n\x09* on the other side. The compressed data provided is in an arbitrary format and is not meant to be played directly.\n\x09*\n\x09* This should be called once per frame, and at worst no more than four times a second to keep the microphone input delay as low as possible. \n\x09* Calling this any less may result in gaps in the returned stream.\n\x09*\n\x09* It is recommended that you pass in an 8 kilobytes or larger destination buffer for compressed audio. \n\x09* Static buffers are recommended for performance reasons. However, if you would like to allocate precisely the right \n\x09* amount of space for a buffer before each call you may use GetAvailableVoice to find out how much data is available to be read.\n\x09* NOTE: \"Uncompressed\" audio is a deprecated feature and should not be used by most applications. \n\x09* It is raw single-channel 16-bit PCM wave data which may have been run through preprocessing filters and/or had silence removed, \n\x09* so the uncompressed audio could have a shorter duration than you expect. \n\x09* There may be no data at all during long periods of silence. Also, fetching uncompressed audio will cause GetVoice to discard \n\x09* any leftover compressed audio, so you must fetch both types at once. Finally, GetAvailableVoice is not precisely accurate when the \n\x09* uncompressed size is requested. So if you really need to use uncompressed audio, you should call GetVoice frequently with two \n\x09* very large (20KiB+) output buffers instead of trying to allocate perfectly-sized buffers. But most applications should ignore \n\x09* all of these details and simply leave the \"uncompressed\" parameters as NULL/0.\n\x09*\n\x09* @param\x09""DestBuffer\x09\x09\x09\x09\x09\x09\x09\x09The buffer where the audio data will be copied into.\n\x09* @param\x09""BytesWritten\x09\x09\x09\x09\x09\x09\x09Returns the number of bytes written into pDestBuffer. This should always be the size returned by ISteamUser::GetAvailableVoice.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Read captured audio data from the microphone buffer.\n\nThe compressed data can be transmitted by your application and decoded back into raw audio data using DecompressVoice\non the other side. The compressed data provided is in an arbitrary format and is not meant to be played directly.\n\nThis should be called once per frame, and at worst no more than four times a second to keep the microphone input delay as low as possible.\nCalling this any less may result in gaps in the returned stream.\n\nIt is recommended that you pass in an 8 kilobytes or larger destination buffer for compressed audio.\nStatic buffers are recommended for performance reasons. However, if you would like to allocate precisely the right\namount of space for a buffer before each call you may use GetAvailableVoice to find out how much data is available to be read.\nNOTE: \"Uncompressed\" audio is a deprecated feature and should not be used by most applications.\nIt is raw single-channel 16-bit PCM wave data which may have been run through preprocessing filters and/or had silence removed,\nso the uncompressed audio could have a shorter duration than you expect.\nThere may be no data at all during long periods of silence. Also, fetching uncompressed audio will cause GetVoice to discard\nany leftover compressed audio, so you must fetch both types at once. Finally, GetAvailableVoice is not precisely accurate when the\nuncompressed size is requested. So if you really need to use uncompressed audio, you should call GetVoice frequently with two\nvery large (20KiB+) output buffers instead of trying to allocate perfectly-sized buffers. But most applications should ignore\nall of these details and simply leave the \"uncompressed\" parameters as NULL/0.\n\n@param        DestBuffer                                                              The buffer where the audio data will be copied into.\n@param        BytesWritten                                                    Returns the number of bytes written into pDestBuffer. This should always be the size returned by ISteamUser::GetAvailableVoice." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DestBuffer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DestBuffer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BytesWritten;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProUser_GetVoice_Statics::NewProp_DestBuffer_Inner = { "DestBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProUser_GetVoice_Statics::NewProp_DestBuffer = { "DestBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUser_eventGetVoice_Parms, DestBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUser_GetVoice_Statics::NewProp_BytesWritten = { "BytesWritten", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUser_eventGetVoice_Parms, BytesWritten), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProUser_GetVoice_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProUser_GetVoice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUser_eventGetVoice_Parms, ReturnValue), Z_Construct_UEnum_SteamCorePro_ESteamVoiceResult, METADATA_PARAMS(0, nullptr) }; // 3577625107
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUser_GetVoice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_GetVoice_Statics::NewProp_DestBuffer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_GetVoice_Statics::NewProp_DestBuffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_GetVoice_Statics::NewProp_BytesWritten,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_GetVoice_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_GetVoice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_GetVoice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUser_GetVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUser, nullptr, "GetVoice", nullptr, nullptr, Z_Construct_UFunction_USteamProUser_GetVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_GetVoice_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUser_GetVoice_Statics::SteamProUser_eventGetVoice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_GetVoice_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUser_GetVoice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUser_GetVoice_Statics::SteamProUser_eventGetVoice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUser_GetVoice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUser_GetVoice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUser::execGetVoice)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_DestBuffer);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BytesWritten);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamVoiceResult*)Z_Param__Result=USteamProUser::GetVoice(Z_Param_Out_DestBuffer,Z_Param_Out_BytesWritten);
	P_NATIVE_END;
}
// End Class USteamProUser Function GetVoice

// Begin Class USteamProUser Function GetVoiceOptimalSampleRate
struct Z_Construct_UFunction_USteamProUser_GetVoiceOptimalSampleRate_Statics
{
	struct SteamProUser_eventGetVoiceOptimalSampleRate_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Gets the native sample rate of the Steam voice decoder.\n\x09*\n\x09* Using this sample rate for DecompressVoice will perform the least CPU processing.\n\x09* However, the final audio quality will depend on how well the audio device (and/or your application's audio output SDK) \n\x09* deals with lower sample rates. You may find that you get the best audio output quality when you ignore this function and \n\x09* use the native sample rate of your audio output device, which is usually 48000 or 44100.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Gets the native sample rate of the Steam voice decoder.\n\nUsing this sample rate for DecompressVoice will perform the least CPU processing.\nHowever, the final audio quality will depend on how well the audio device (and/or your application's audio output SDK)\ndeals with lower sample rates. You may find that you get the best audio output quality when you ignore this function and\nuse the native sample rate of your audio output device, which is usually 48000 or 44100." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUser_GetVoiceOptimalSampleRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUser_eventGetVoiceOptimalSampleRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUser_GetVoiceOptimalSampleRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_GetVoiceOptimalSampleRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_GetVoiceOptimalSampleRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUser_GetVoiceOptimalSampleRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUser, nullptr, "GetVoiceOptimalSampleRate", nullptr, nullptr, Z_Construct_UFunction_USteamProUser_GetVoiceOptimalSampleRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_GetVoiceOptimalSampleRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUser_GetVoiceOptimalSampleRate_Statics::SteamProUser_eventGetVoiceOptimalSampleRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_GetVoiceOptimalSampleRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUser_GetVoiceOptimalSampleRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUser_GetVoiceOptimalSampleRate_Statics::SteamProUser_eventGetVoiceOptimalSampleRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUser_GetVoiceOptimalSampleRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUser_GetVoiceOptimalSampleRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUser::execGetVoiceOptimalSampleRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProUser::GetVoiceOptimalSampleRate();
	P_NATIVE_END;
}
// End Class USteamProUser Function GetVoiceOptimalSampleRate

// Begin Class USteamProUser Function RequestEncryptedAppTicket
struct Z_Construct_UFunction_USteamProUser_RequestEncryptedAppTicket_Statics
{
	struct SteamProUser_eventRequestEncryptedAppTicket_Parms
	{
		FScriptDelegate Callback;
		TArray<uint8> DataToInclude;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Requests an application ticket encrypted with the secret \"encrypted app ticket key\".\n\x09*\n\x09* The encryption key can be obtained from the Encrypted App Ticket Key page on the App Admin for your app.\n\x09* There can only be one EncryptedAppTicketResponse_t pending, and this call is subject to a 60 second rate limit.\n\x09* After receiving the response you should call GetEncryptedAppTicket to get the ticket data, and then you need to send it to a secure server to be decrypted with the SteamEncryptedAppTicket functions.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Requests an application ticket encrypted with the secret \"encrypted app ticket key\".\n\nThe encryption key can be obtained from the Encrypted App Ticket Key page on the App Admin for your app.\nThere can only be one EncryptedAppTicketResponse_t pending, and this call is subject to a 60 second rate limit.\nAfter receiving the response you should call GetEncryptedAppTicket to get the ticket data, and then you need to send it to a secure server to be decrypted with the SteamEncryptedAppTicket functions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DataToInclude_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataToInclude;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamProUser_RequestEncryptedAppTicket_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUser_eventRequestEncryptedAppTicket_Parms, Callback), Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEncryptedAppTicket__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 3436661785
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProUser_RequestEncryptedAppTicket_Statics::NewProp_DataToInclude_Inner = { "DataToInclude", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProUser_RequestEncryptedAppTicket_Statics::NewProp_DataToInclude = { "DataToInclude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUser_eventRequestEncryptedAppTicket_Parms, DataToInclude), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUser_RequestEncryptedAppTicket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_RequestEncryptedAppTicket_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_RequestEncryptedAppTicket_Statics::NewProp_DataToInclude_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_RequestEncryptedAppTicket_Statics::NewProp_DataToInclude,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_RequestEncryptedAppTicket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUser_RequestEncryptedAppTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUser, nullptr, "RequestEncryptedAppTicket", nullptr, nullptr, Z_Construct_UFunction_USteamProUser_RequestEncryptedAppTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_RequestEncryptedAppTicket_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUser_RequestEncryptedAppTicket_Statics::SteamProUser_eventRequestEncryptedAppTicket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_RequestEncryptedAppTicket_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUser_RequestEncryptedAppTicket_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUser_RequestEncryptedAppTicket_Statics::SteamProUser_eventRequestEncryptedAppTicket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUser_RequestEncryptedAppTicket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUser_RequestEncryptedAppTicket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUser::execRequestEncryptedAppTicket)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_TARRAY(uint8,Z_Param_DataToInclude);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestEncryptedAppTicket(FOnRequestEncryptedAppTicket(Z_Param_Out_Callback),Z_Param_DataToInclude);
	P_NATIVE_END;
}
// End Class USteamProUser Function RequestEncryptedAppTicket

// Begin Class USteamProUser Function RequestStoreAuthURL
struct Z_Construct_UFunction_USteamProUser_RequestStoreAuthURL_Statics
{
	struct SteamProUser_eventRequestStoreAuthURL_Parms
	{
		FScriptDelegate Callback;
		FString RedirectURL;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Requests a URL which authenticates an in-game browser for store check-out, and then redirects to the specified URL.\n\x09*\n\x09* As long as the in-game browser accepts and handles session cookies, Steam microtransaction checkout pages will automatically recognize the user instead of presenting a login page.\n\x09* NOTE: The URL has a very short lifetime to prevent history-snooping attacks, so you should only call this API when you are about to launch the browser, or else immediately navigate to the result URL using a hidden browser window.\n\x09* NOTE: The resulting authorization cookie has an expiration time of one day, so it would be a good idea to request and visit a new auth URL every 12 hours.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Requests a URL which authenticates an in-game browser for store check-out, and then redirects to the specified URL.\n\nAs long as the in-game browser accepts and handles session cookies, Steam microtransaction checkout pages will automatically recognize the user instead of presenting a login page.\nNOTE: The URL has a very short lifetime to prevent history-snooping attacks, so you should only call this API when you are about to launch the browser, or else immediately navigate to the result URL using a hidden browser window.\nNOTE: The resulting authorization cookie has an expiration time of one day, so it would be a good idea to request and visit a new auth URL every 12 hours." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RedirectURL;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamProUser_RequestStoreAuthURL_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUser_eventRequestStoreAuthURL_Parms, Callback), Z_Construct_UDelegateFunction_SteamCorePro_OnStoreAuthURLResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2777526854
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProUser_RequestStoreAuthURL_Statics::NewProp_RedirectURL = { "RedirectURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUser_eventRequestStoreAuthURL_Parms, RedirectURL), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUser_RequestStoreAuthURL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_RequestStoreAuthURL_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_RequestStoreAuthURL_Statics::NewProp_RedirectURL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_RequestStoreAuthURL_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUser_RequestStoreAuthURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUser, nullptr, "RequestStoreAuthURL", nullptr, nullptr, Z_Construct_UFunction_USteamProUser_RequestStoreAuthURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_RequestStoreAuthURL_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUser_RequestStoreAuthURL_Statics::SteamProUser_eventRequestStoreAuthURL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_RequestStoreAuthURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUser_RequestStoreAuthURL_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUser_RequestStoreAuthURL_Statics::SteamProUser_eventRequestStoreAuthURL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUser_RequestStoreAuthURL()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUser_RequestStoreAuthURL_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUser::execRequestStoreAuthURL)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_RedirectURL);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestStoreAuthURL(FOnStoreAuthURLResponse(Z_Param_Out_Callback),Z_Param_RedirectURL);
	P_NATIVE_END;
}
// End Class USteamProUser Function RequestStoreAuthURL

// Begin Class USteamProUser Function StartVoiceRecording
struct Z_Construct_UFunction_USteamProUser_StartVoiceRecording_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Starts voice recording.\n\x09*\n\x09* Once started, use GetAvailableVoice and GetVoice to get the data, and then call StopVoiceRecording when the user has released their push-to-talk hotkey or the game session has completed.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Starts voice recording.\n\nOnce started, use GetAvailableVoice and GetVoice to get the data, and then call StopVoiceRecording when the user has released their push-to-talk hotkey or the game session has completed." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUser_StartVoiceRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUser, nullptr, "StartVoiceRecording", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_StartVoiceRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUser_StartVoiceRecording_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USteamProUser_StartVoiceRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUser_StartVoiceRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUser::execStartVoiceRecording)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProUser::StartVoiceRecording();
	P_NATIVE_END;
}
// End Class USteamProUser Function StartVoiceRecording

// Begin Class USteamProUser Function StopVoiceRecording
struct Z_Construct_UFunction_USteamProUser_StopVoiceRecording_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Stops voice recording.\n\x09*\n\x09* Because people often release push-to-talk keys early, the system will keep recording for a little bit after this function is called. As such, GetVoice should continue to be called until it returns k_EVoiceResultNotRecording, only then will voice recording be stopped.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Stops voice recording.\n\nBecause people often release push-to-talk keys early, the system will keep recording for a little bit after this function is called. As such, GetVoice should continue to be called until it returns k_EVoiceResultNotRecording, only then will voice recording be stopped." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUser_StopVoiceRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUser, nullptr, "StopVoiceRecording", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_StopVoiceRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUser_StopVoiceRecording_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USteamProUser_StopVoiceRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUser_StopVoiceRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUser::execStopVoiceRecording)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamProUser::StopVoiceRecording();
	P_NATIVE_END;
}
// End Class USteamProUser Function StopVoiceRecording

// Begin Class USteamProUser Function UserHasLicenseForApp
struct Z_Construct_UFunction_USteamProUser_UserHasLicenseForApp_Statics
{
	struct SteamProUser_eventUserHasLicenseForApp_Parms
	{
		FSteamID SteamID;
		int32 AppID;
		ESteamUserHasLicenseForAppResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Checks if the user owns a specific piece of Downloadable Content (DLC).\n\x09*\n\x09* This can only be called after sending the users auth ticket to ISteamGameServer::BeginAuthSession/\n\x09*\n\x09* @param\x09SteamID\x09\x09The Steam ID of the user that sent the auth ticket.\n\x09* @param\x09""AppID\x09\x09The DLC App ID to check if the user owns it.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
		{ "ToolTip", "Checks if the user owns a specific piece of Downloadable Content (DLC).\n\nThis can only be called after sending the users auth ticket to ISteamGameServer::BeginAuthSession/\n\n@param        SteamID         The Steam ID of the user that sent the auth ticket.\n@param        AppID           The DLC App ID to check if the user owns it." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProUser_UserHasLicenseForApp_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUser_eventUserHasLicenseForApp_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUser_UserHasLicenseForApp_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUser_eventUserHasLicenseForApp_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProUser_UserHasLicenseForApp_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProUser_UserHasLicenseForApp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUser_eventUserHasLicenseForApp_Parms, ReturnValue), Z_Construct_UEnum_SteamCorePro_ESteamUserHasLicenseForAppResult, METADATA_PARAMS(0, nullptr) }; // 2404623160
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUser_UserHasLicenseForApp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_UserHasLicenseForApp_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_UserHasLicenseForApp_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_UserHasLicenseForApp_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUser_UserHasLicenseForApp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_UserHasLicenseForApp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUser_UserHasLicenseForApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUser, nullptr, "UserHasLicenseForApp", nullptr, nullptr, Z_Construct_UFunction_USteamProUser_UserHasLicenseForApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_UserHasLicenseForApp_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUser_UserHasLicenseForApp_Statics::SteamProUser_eventUserHasLicenseForApp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUser_UserHasLicenseForApp_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUser_UserHasLicenseForApp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUser_UserHasLicenseForApp_Statics::SteamProUser_eventUserHasLicenseForApp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUser_UserHasLicenseForApp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUser_UserHasLicenseForApp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUser::execUserHasLicenseForApp)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamUserHasLicenseForAppResult*)Z_Param__Result=USteamProUser::UserHasLicenseForApp(Z_Param_SteamID,Z_Param_AppID);
	P_NATIVE_END;
}
// End Class USteamProUser Function UserHasLicenseForApp

// Begin Class USteamProUser
void USteamProUser::StaticRegisterNativesUSteamProUser()
{
	UClass* Class = USteamProUser::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AdvertiseGame", &USteamProUser::execAdvertiseGame },
		{ "BeginAuthSession", &USteamProUser::execBeginAuthSession },
		{ "BIsBehindNAT", &USteamProUser::execBIsBehindNAT },
		{ "BIsPhoneIdentifying", &USteamProUser::execBIsPhoneIdentifying },
		{ "BIsPhoneRequiringVerification", &USteamProUser::execBIsPhoneRequiringVerification },
		{ "BIsPhoneVerified", &USteamProUser::execBIsPhoneVerified },
		{ "BIsTwoFactorEnabled", &USteamProUser::execBIsTwoFactorEnabled },
		{ "BLoggedOn", &USteamProUser::execBLoggedOn },
		{ "CancelAuthTicket", &USteamProUser::execCancelAuthTicket },
		{ "DecompressVoice", &USteamProUser::execDecompressVoice },
		{ "EndAuthSession", &USteamProUser::execEndAuthSession },
		{ "GetAuthSessionTicket", &USteamProUser::execGetAuthSessionTicket },
		{ "GetAuthTicketForWebApi", &USteamProUser::execGetAuthTicketForWebApi },
		{ "GetAvailableVoice", &USteamProUser::execGetAvailableVoice },
		{ "GetEncryptedAppTicket", &USteamProUser::execGetEncryptedAppTicket },
		{ "GetGameBadgeLevel", &USteamProUser::execGetGameBadgeLevel },
		{ "GetPlayerSteamLevel", &USteamProUser::execGetPlayerSteamLevel },
		{ "GetSteamID", &USteamProUser::execGetSteamID },
		{ "GetSteamID_Pure", &USteamProUser::execGetSteamID_Pure },
		{ "GetSteamUser", &USteamProUser::execGetSteamUser },
		{ "GetVoice", &USteamProUser::execGetVoice },
		{ "GetVoiceOptimalSampleRate", &USteamProUser::execGetVoiceOptimalSampleRate },
		{ "RequestEncryptedAppTicket", &USteamProUser::execRequestEncryptedAppTicket },
		{ "RequestStoreAuthURL", &USteamProUser::execRequestStoreAuthURL },
		{ "StartVoiceRecording", &USteamProUser::execStartVoiceRecording },
		{ "StopVoiceRecording", &USteamProUser::execStopVoiceRecording },
		{ "UserHasLicenseForApp", &USteamProUser::execUserHasLicenseForApp },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamProUser);
UClass* Z_Construct_UClass_USteamProUser_NoRegister()
{
	return USteamProUser::StaticClass();
}
struct Z_Construct_UClass_USteamProUser_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamUser/SteamUser.h" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientGameServerDeny_MetaData[] = {
		{ "Category", "SteamCore|User|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameWebCallback_MetaData[] = {
		{ "Category", "SteamCore|User|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GetAuthSessionTicketResponse_MetaData[] = {
		{ "Category", "SteamCore|User|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IpcFailure_MetaData[] = {
		{ "Category", "SteamCore|User|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LicensesUpdated_MetaData[] = {
		{ "Category", "SteamCore|User|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MicroTxnAuthorizationResponse_MetaData[] = {
		{ "Category", "SteamCore|User|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamServerConnectFailure_MetaData[] = {
		{ "Category", "SteamCore|User|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamServersConnected_MetaData[] = {
		{ "Category", "SteamCore|User|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamServersDisconnected_MetaData[] = {
		{ "Category", "SteamCore|User|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidateAuthTicketResponse_MetaData[] = {
		{ "Category", "SteamCore|User|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EncryptedAppTicketResponse_MetaData[] = {
		{ "Category", "SteamCore|User|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GetTicketForWebApiResponse_MetaData[] = {
		{ "Category", "SteamCore|User|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUser/SteamUser.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ClientGameServerDeny;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameWebCallback;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GetAuthSessionTicketResponse;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_IpcFailure;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_LicensesUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_MicroTxnAuthorizationResponse;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamServerConnectFailure;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamServersConnected;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamServersDisconnected;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ValidateAuthTicketResponse;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EncryptedAppTicketResponse;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GetTicketForWebApiResponse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamProUser_AdvertiseGame, "AdvertiseGame" }, // 2625791029
		{ &Z_Construct_UFunction_USteamProUser_BeginAuthSession, "BeginAuthSession" }, // 2608791998
		{ &Z_Construct_UFunction_USteamProUser_BIsBehindNAT, "BIsBehindNAT" }, // 450336226
		{ &Z_Construct_UFunction_USteamProUser_BIsPhoneIdentifying, "BIsPhoneIdentifying" }, // 2177244300
		{ &Z_Construct_UFunction_USteamProUser_BIsPhoneRequiringVerification, "BIsPhoneRequiringVerification" }, // 1623793506
		{ &Z_Construct_UFunction_USteamProUser_BIsPhoneVerified, "BIsPhoneVerified" }, // 2793482396
		{ &Z_Construct_UFunction_USteamProUser_BIsTwoFactorEnabled, "BIsTwoFactorEnabled" }, // 741856883
		{ &Z_Construct_UFunction_USteamProUser_BLoggedOn, "BLoggedOn" }, // 2002112398
		{ &Z_Construct_UFunction_USteamProUser_CancelAuthTicket, "CancelAuthTicket" }, // 580976769
		{ &Z_Construct_UFunction_USteamProUser_DecompressVoice, "DecompressVoice" }, // 912920329
		{ &Z_Construct_UFunction_USteamProUser_EndAuthSession, "EndAuthSession" }, // 306133883
		{ &Z_Construct_UFunction_USteamProUser_GetAuthSessionTicket, "GetAuthSessionTicket" }, // 826300567
		{ &Z_Construct_UFunction_USteamProUser_GetAuthTicketForWebApi, "GetAuthTicketForWebApi" }, // 4220041733
		{ &Z_Construct_UFunction_USteamProUser_GetAvailableVoice, "GetAvailableVoice" }, // 1337546283
		{ &Z_Construct_UFunction_USteamProUser_GetEncryptedAppTicket, "GetEncryptedAppTicket" }, // 3995769071
		{ &Z_Construct_UFunction_USteamProUser_GetGameBadgeLevel, "GetGameBadgeLevel" }, // 821302984
		{ &Z_Construct_UFunction_USteamProUser_GetPlayerSteamLevel, "GetPlayerSteamLevel" }, // 1545263286
		{ &Z_Construct_UFunction_USteamProUser_GetSteamID, "GetSteamID" }, // 1759451305
		{ &Z_Construct_UFunction_USteamProUser_GetSteamID_Pure, "GetSteamID_Pure" }, // 3388045807
		{ &Z_Construct_UFunction_USteamProUser_GetSteamUser, "GetSteamUser" }, // 1892577143
		{ &Z_Construct_UFunction_USteamProUser_GetVoice, "GetVoice" }, // 1677621568
		{ &Z_Construct_UFunction_USteamProUser_GetVoiceOptimalSampleRate, "GetVoiceOptimalSampleRate" }, // 56035646
		{ &Z_Construct_UFunction_USteamProUser_RequestEncryptedAppTicket, "RequestEncryptedAppTicket" }, // 810409066
		{ &Z_Construct_UFunction_USteamProUser_RequestStoreAuthURL, "RequestStoreAuthURL" }, // 4283147026
		{ &Z_Construct_UFunction_USteamProUser_StartVoiceRecording, "StartVoiceRecording" }, // 229470794
		{ &Z_Construct_UFunction_USteamProUser_StopVoiceRecording, "StopVoiceRecording" }, // 24986663
		{ &Z_Construct_UFunction_USteamProUser_UserHasLicenseForApp, "UserHasLicenseForApp" }, // 2334504952
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamProUser>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProUser_Statics::NewProp_ClientGameServerDeny = { "ClientGameServerDeny", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProUser, ClientGameServerDeny), Z_Construct_UDelegateFunction_SteamCorePro_OnClientGameServerDeny__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientGameServerDeny_MetaData), NewProp_ClientGameServerDeny_MetaData) }; // 1725121495
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProUser_Statics::NewProp_GameWebCallback = { "GameWebCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProUser, GameWebCallback), Z_Construct_UDelegateFunction_SteamCorePro_OnGameWebCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameWebCallback_MetaData), NewProp_GameWebCallback_MetaData) }; // 465162179
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProUser_Statics::NewProp_GetAuthSessionTicketResponse = { "GetAuthSessionTicketResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProUser, GetAuthSessionTicketResponse), Z_Construct_UDelegateFunction_SteamCorePro_OnGetAuthSessionTicketResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GetAuthSessionTicketResponse_MetaData), NewProp_GetAuthSessionTicketResponse_MetaData) }; // 2265919320
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProUser_Statics::NewProp_IpcFailure = { "IpcFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProUser, IpcFailure), Z_Construct_UDelegateFunction_SteamCorePro_OnIPCFailure__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IpcFailure_MetaData), NewProp_IpcFailure_MetaData) }; // 2482894094
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProUser_Statics::NewProp_LicensesUpdated = { "LicensesUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProUser, LicensesUpdated), Z_Construct_UDelegateFunction_SteamCorePro_OnLicensesUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LicensesUpdated_MetaData), NewProp_LicensesUpdated_MetaData) }; // 101932492
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProUser_Statics::NewProp_MicroTxnAuthorizationResponse = { "MicroTxnAuthorizationResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProUser, MicroTxnAuthorizationResponse), Z_Construct_UDelegateFunction_SteamCorePro_OnMicroTxnAuthorizationResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MicroTxnAuthorizationResponse_MetaData), NewProp_MicroTxnAuthorizationResponse_MetaData) }; // 4205960649
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProUser_Statics::NewProp_SteamServerConnectFailure = { "SteamServerConnectFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProUser, SteamServerConnectFailure), Z_Construct_UDelegateFunction_SteamCorePro_OnSteamServerConnectFailure__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamServerConnectFailure_MetaData), NewProp_SteamServerConnectFailure_MetaData) }; // 2792685686
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProUser_Statics::NewProp_SteamServersConnected = { "SteamServersConnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProUser, SteamServersConnected), Z_Construct_UDelegateFunction_SteamCorePro_OnSteamServersConnected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamServersConnected_MetaData), NewProp_SteamServersConnected_MetaData) }; // 661617296
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProUser_Statics::NewProp_SteamServersDisconnected = { "SteamServersDisconnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProUser, SteamServersDisconnected), Z_Construct_UDelegateFunction_SteamCorePro_OnSteamServersDisconnected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamServersDisconnected_MetaData), NewProp_SteamServersDisconnected_MetaData) }; // 2728965693
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProUser_Statics::NewProp_ValidateAuthTicketResponse = { "ValidateAuthTicketResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProUser, ValidateAuthTicketResponse), Z_Construct_UDelegateFunction_SteamCorePro_OnValidateAuthTicketResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidateAuthTicketResponse_MetaData), NewProp_ValidateAuthTicketResponse_MetaData) }; // 1029711685
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProUser_Statics::NewProp_EncryptedAppTicketResponse = { "EncryptedAppTicketResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProUser, EncryptedAppTicketResponse), Z_Construct_UDelegateFunction_SteamCorePro_OnRequestEncryptedAppTicketResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EncryptedAppTicketResponse_MetaData), NewProp_EncryptedAppTicketResponse_MetaData) }; // 1056807890
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProUser_Statics::NewProp_GetTicketForWebApiResponse = { "GetTicketForWebApiResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProUser, GetTicketForWebApiResponse), Z_Construct_UDelegateFunction_SteamCorePro_OnGetTicketForWebApiResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GetTicketForWebApiResponse_MetaData), NewProp_GetTicketForWebApiResponse_MetaData) }; // 3187466065
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamProUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProUser_Statics::NewProp_ClientGameServerDeny,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProUser_Statics::NewProp_GameWebCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProUser_Statics::NewProp_GetAuthSessionTicketResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProUser_Statics::NewProp_IpcFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProUser_Statics::NewProp_LicensesUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProUser_Statics::NewProp_MicroTxnAuthorizationResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProUser_Statics::NewProp_SteamServerConnectFailure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProUser_Statics::NewProp_SteamServersConnected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProUser_Statics::NewProp_SteamServersDisconnected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProUser_Statics::NewProp_ValidateAuthTicketResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProUser_Statics::NewProp_EncryptedAppTicketResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProUser_Statics::NewProp_GetTicketForWebApiResponse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProUser_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamProUser_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProUser_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamProUser_Statics::ClassParams = {
	&USteamProUser::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamProUser_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamProUser_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProUser_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamProUser_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamProUser()
{
	if (!Z_Registration_Info_UClass_USteamProUser.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamProUser.OuterSingleton, Z_Construct_UClass_USteamProUser_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamProUser.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamProUser>()
{
	return USteamProUser::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamProUser);
// End Class USteamProUser

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUser_SteamUser_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamProUser, USteamProUser::StaticClass, TEXT("USteamProUser"), &Z_Registration_Info_UClass_USteamProUser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamProUser), 2425035164U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUser_SteamUser_h_2502137965(TEXT("/Script/SteamCorePro"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUser_SteamUser_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUser_SteamUser_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
