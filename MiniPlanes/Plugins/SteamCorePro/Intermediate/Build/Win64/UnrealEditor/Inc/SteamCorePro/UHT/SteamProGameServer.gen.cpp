// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamGameServer/SteamProGameServer.h"
#include "SteamCorePro/Public/SteamCorePro/SteamTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamProGameServer() {}

// Begin Cross Module References
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreInterface();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamProGameServer();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamProGameServer_NoRegister();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamBeginAuthSessionResult();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamUserHasLicenseForAppResult();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnAssociateWithClan__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnComputeNewPlayerCompatibility__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnGSClientApprove__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnGSClientDeny__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnGSClientGroupStatus__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnGSPolicyResponse__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnGSValidateAuthTicketResponse__DelegateSignature();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamNetworkingIdentity();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamTicketHandle();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Class USteamProGameServer Function AssociateWithClan
struct Z_Construct_UFunction_USteamProGameServer_AssociateWithClan_Statics
{
	struct SteamProGameServer_eventAssociateWithClan_Parms
	{
		FScriptDelegate Callback;
		FSteamID SteamIDClan;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|GameServer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Associate this game server with this clan for the purposes of computing player compatibility.\n\x09*\n\x09* @param\x09SteamIDClan\x09\x09The Steam ID of the group you want to be associated with.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Associate this game server with this clan for the purposes of computing player compatibility.\n\n@param        SteamIDClan             The Steam ID of the group you want to be associated with." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDClan;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamProGameServer_AssociateWithClan_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventAssociateWithClan_Parms, Callback), Z_Construct_UDelegateFunction_SteamCorePro_OnAssociateWithClan__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2018222192
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProGameServer_AssociateWithClan_Statics::NewProp_SteamIDClan = { "SteamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventAssociateWithClan_Parms, SteamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 664632778
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServer_AssociateWithClan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_AssociateWithClan_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_AssociateWithClan_Statics::NewProp_SteamIDClan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_AssociateWithClan_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServer_AssociateWithClan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServer, nullptr, "AssociateWithClan", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServer_AssociateWithClan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_AssociateWithClan_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServer_AssociateWithClan_Statics::SteamProGameServer_eventAssociateWithClan_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_AssociateWithClan_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServer_AssociateWithClan_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServer_AssociateWithClan_Statics::SteamProGameServer_eventAssociateWithClan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServer_AssociateWithClan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServer_AssociateWithClan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServer::execAssociateWithClan)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDClan);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AssociateWithClan(FOnAssociateWithClan(Z_Param_Out_Callback),Z_Param_SteamIDClan);
	P_NATIVE_END;
}
// End Class USteamProGameServer Function AssociateWithClan

// Begin Class USteamProGameServer Function BeginAuthSession
struct Z_Construct_UFunction_USteamProGameServer_BeginAuthSession_Statics
{
	struct SteamProGameServer_eventBeginAuthSession_Parms
	{
		TArray<uint8> Ticket;
		FSteamID SteamID;
		ESteamBeginAuthSessionResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Authenticate the ticket from the entity Steam ID to be sure it is valid and isn't reused.\n\x09*\n\x09* The ticket is created on the entity with ISteamUser::GetAuthSessionTicket or GetAuthSessionTicket and then needs to be provided over the network for the other end to validate.\n\x09* This registers for ValidateAuthTicketResponse_t Callbacks if the entity goes offline or cancels the ticket. See EAuthSessionResponse for more information.\n\x09* When the multiplayer session terminates you must call EndAuthSession.\n\x09*\n\x09* @param\x09Ticket\x09\x09The auth ticket to validate.\n\x09* @param\x09SteamID\x09\x09The entity's Steam ID that sent this ticket.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Authenticate the ticket from the entity Steam ID to be sure it is valid and isn't reused.\n\nThe ticket is created on the entity with ISteamUser::GetAuthSessionTicket or GetAuthSessionTicket and then needs to be provided over the network for the other end to validate.\nThis registers for ValidateAuthTicketResponse_t Callbacks if the entity goes offline or cancels the ticket. See EAuthSessionResponse for more information.\nWhen the multiplayer session terminates you must call EndAuthSession.\n\n@param        Ticket          The auth ticket to validate.\n@param        SteamID         The entity's Steam ID that sent this ticket." },
#endif
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProGameServer_BeginAuthSession_Statics::NewProp_Ticket_Inner = { "Ticket", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProGameServer_BeginAuthSession_Statics::NewProp_Ticket = { "Ticket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventBeginAuthSession_Parms, Ticket), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProGameServer_BeginAuthSession_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventBeginAuthSession_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 664632778
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProGameServer_BeginAuthSession_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProGameServer_BeginAuthSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventBeginAuthSession_Parms, ReturnValue), Z_Construct_UEnum_SteamCorePro_ESteamBeginAuthSessionResult, METADATA_PARAMS(0, nullptr) }; // 1562206282
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServer_BeginAuthSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_BeginAuthSession_Statics::NewProp_Ticket_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_BeginAuthSession_Statics::NewProp_Ticket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_BeginAuthSession_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_BeginAuthSession_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_BeginAuthSession_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_BeginAuthSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServer_BeginAuthSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServer, nullptr, "BeginAuthSession", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServer_BeginAuthSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_BeginAuthSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServer_BeginAuthSession_Statics::SteamProGameServer_eventBeginAuthSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_BeginAuthSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServer_BeginAuthSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServer_BeginAuthSession_Statics::SteamProGameServer_eventBeginAuthSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServer_BeginAuthSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServer_BeginAuthSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServer::execBeginAuthSession)
{
	P_GET_TARRAY(uint8,Z_Param_Ticket);
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamBeginAuthSessionResult*)Z_Param__Result=P_THIS->BeginAuthSession(Z_Param_Ticket,Z_Param_SteamID);
	P_NATIVE_END;
}
// End Class USteamProGameServer Function BeginAuthSession

// Begin Class USteamProGameServer Function BLoggedOn
struct Z_Construct_UFunction_USteamProGameServer_BLoggedOn_Statics
{
	struct SteamProGameServer_eventBLoggedOn_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Checks if the game server is logged on.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the game server is logged on." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProGameServer_BLoggedOn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProGameServer_eventBLoggedOn_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProGameServer_BLoggedOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProGameServer_eventBLoggedOn_Parms), &Z_Construct_UFunction_USteamProGameServer_BLoggedOn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServer_BLoggedOn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_BLoggedOn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_BLoggedOn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServer_BLoggedOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServer, nullptr, "BLoggedOn", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServer_BLoggedOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_BLoggedOn_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServer_BLoggedOn_Statics::SteamProGameServer_eventBLoggedOn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_BLoggedOn_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServer_BLoggedOn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServer_BLoggedOn_Statics::SteamProGameServer_eventBLoggedOn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServer_BLoggedOn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServer_BLoggedOn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServer::execBLoggedOn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BLoggedOn();
	P_NATIVE_END;
}
// End Class USteamProGameServer Function BLoggedOn

// Begin Class USteamProGameServer Function BSecure
struct Z_Construct_UFunction_USteamProGameServer_BSecure_Statics
{
	struct SteamProGameServer_eventBSecure_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Checks whether the game server is in \"Secure\" mode.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks whether the game server is in \"Secure\" mode." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProGameServer_BSecure_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProGameServer_eventBSecure_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProGameServer_BSecure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProGameServer_eventBSecure_Parms), &Z_Construct_UFunction_USteamProGameServer_BSecure_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServer_BSecure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_BSecure_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_BSecure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServer_BSecure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServer, nullptr, "BSecure", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServer_BSecure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_BSecure_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServer_BSecure_Statics::SteamProGameServer_eventBSecure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_BSecure_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServer_BSecure_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServer_BSecure_Statics::SteamProGameServer_eventBSecure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServer_BSecure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServer_BSecure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServer::execBSecure)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BSecure();
	P_NATIVE_END;
}
// End Class USteamProGameServer Function BSecure

// Begin Class USteamProGameServer Function BUpdateUserData
struct Z_Construct_UFunction_USteamProGameServer_BUpdateUserData_Statics
{
	struct SteamProGameServer_eventBUpdateUserData_Parms
	{
		FSteamID SteamIDUser;
		FString PlayerName;
		int32 Score;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Checks whether the game server is in \"Secure\" mode.\n\x09*\n\x09* @param\x09SteamIDUser\x09\x09The Steam ID of the user.\n\x09* @param\x09PlayerName\x09\x09The name of the user.\n\x09* @param\x09Score\x09\x09\x09The current score of the user.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks whether the game server is in \"Secure\" mode.\n\n@param        SteamIDUser             The Steam ID of the user.\n@param        PlayerName              The name of the user.\n@param        Score                   The current score of the user." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProGameServer_BUpdateUserData_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventBUpdateUserData_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 664632778
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProGameServer_BUpdateUserData_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventBUpdateUserData_Parms, PlayerName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProGameServer_BUpdateUserData_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventBUpdateUserData_Parms, Score), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProGameServer_BUpdateUserData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProGameServer_eventBUpdateUserData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProGameServer_BUpdateUserData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProGameServer_eventBUpdateUserData_Parms), &Z_Construct_UFunction_USteamProGameServer_BUpdateUserData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServer_BUpdateUserData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_BUpdateUserData_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_BUpdateUserData_Statics::NewProp_PlayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_BUpdateUserData_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_BUpdateUserData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_BUpdateUserData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServer_BUpdateUserData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServer, nullptr, "BUpdateUserData", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServer_BUpdateUserData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_BUpdateUserData_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServer_BUpdateUserData_Statics::SteamProGameServer_eventBUpdateUserData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_BUpdateUserData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServer_BUpdateUserData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServer_BUpdateUserData_Statics::SteamProGameServer_eventBUpdateUserData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServer_BUpdateUserData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServer_BUpdateUserData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServer::execBUpdateUserData)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_PROPERTY(FStrProperty,Z_Param_PlayerName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Score);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BUpdateUserData(Z_Param_SteamIDUser,Z_Param_PlayerName,Z_Param_Score);
	P_NATIVE_END;
}
// End Class USteamProGameServer Function BUpdateUserData

// Begin Class USteamProGameServer Function CancelAuthTicket
struct Z_Construct_UFunction_USteamProGameServer_CancelAuthTicket_Statics
{
	struct SteamProGameServer_eventCancelAuthTicket_Parms
	{
		FSteamTicketHandle TicketHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Cancels an auth ticket received from ISteamUser::GetAuthSessionTicket. This should be called when no longer playing with the specified entity.\n\x09*\n\x09* @param\x09TicketHandle\x09The active auth ticket to cancel.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cancels an auth ticket received from ISteamUser::GetAuthSessionTicket. This should be called when no longer playing with the specified entity.\n\n@param        TicketHandle    The active auth ticket to cancel." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TicketHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProGameServer_CancelAuthTicket_Statics::NewProp_TicketHandle = { "TicketHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventCancelAuthTicket_Parms, TicketHandle), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(0, nullptr) }; // 2637768704
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServer_CancelAuthTicket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_CancelAuthTicket_Statics::NewProp_TicketHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_CancelAuthTicket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServer_CancelAuthTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServer, nullptr, "CancelAuthTicket", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServer_CancelAuthTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_CancelAuthTicket_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServer_CancelAuthTicket_Statics::SteamProGameServer_eventCancelAuthTicket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_CancelAuthTicket_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServer_CancelAuthTicket_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServer_CancelAuthTicket_Statics::SteamProGameServer_eventCancelAuthTicket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServer_CancelAuthTicket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServer_CancelAuthTicket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServer::execCancelAuthTicket)
{
	P_GET_STRUCT(FSteamTicketHandle,Z_Param_TicketHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CancelAuthTicket(Z_Param_TicketHandle);
	P_NATIVE_END;
}
// End Class USteamProGameServer Function CancelAuthTicket

// Begin Class USteamProGameServer Function ClearAllKeyValues
struct Z_Construct_UFunction_USteamProGameServer_ClearAllKeyValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Clears the whole list of key/values that are sent in rules queries.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears the whole list of key/values that are sent in rules queries." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServer_ClearAllKeyValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServer, nullptr, "ClearAllKeyValues", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_ClearAllKeyValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServer_ClearAllKeyValues_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USteamProGameServer_ClearAllKeyValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServer_ClearAllKeyValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServer::execClearAllKeyValues)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAllKeyValues();
	P_NATIVE_END;
}
// End Class USteamProGameServer Function ClearAllKeyValues

// Begin Class USteamProGameServer Function ComputeNewPlayerCompatibility
struct Z_Construct_UFunction_USteamProGameServer_ComputeNewPlayerCompatibility_Statics
{
	struct SteamProGameServer_eventComputeNewPlayerCompatibility_Parms
	{
		FScriptDelegate Callback;
		FSteamID SteamIDNewPlayer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|GameServer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Checks if any of the current players don't want to play with this new player that is attempting to join - or vice versa; based on the frenemy system.\n\x09*\n\x09* @param\x09SteamIDNewPlayer\x09The Steam ID of the player that is attempting to join.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if any of the current players don't want to play with this new player that is attempting to join - or vice versa; based on the frenemy system.\n\n@param        SteamIDNewPlayer        The Steam ID of the player that is attempting to join." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDNewPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamProGameServer_ComputeNewPlayerCompatibility_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventComputeNewPlayerCompatibility_Parms, Callback), Z_Construct_UDelegateFunction_SteamCorePro_OnComputeNewPlayerCompatibility__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2213234293
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProGameServer_ComputeNewPlayerCompatibility_Statics::NewProp_SteamIDNewPlayer = { "SteamIDNewPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventComputeNewPlayerCompatibility_Parms, SteamIDNewPlayer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 664632778
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServer_ComputeNewPlayerCompatibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_ComputeNewPlayerCompatibility_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_ComputeNewPlayerCompatibility_Statics::NewProp_SteamIDNewPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_ComputeNewPlayerCompatibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServer_ComputeNewPlayerCompatibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServer, nullptr, "ComputeNewPlayerCompatibility", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServer_ComputeNewPlayerCompatibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_ComputeNewPlayerCompatibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServer_ComputeNewPlayerCompatibility_Statics::SteamProGameServer_eventComputeNewPlayerCompatibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_ComputeNewPlayerCompatibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServer_ComputeNewPlayerCompatibility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServer_ComputeNewPlayerCompatibility_Statics::SteamProGameServer_eventComputeNewPlayerCompatibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServer_ComputeNewPlayerCompatibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServer_ComputeNewPlayerCompatibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServer::execComputeNewPlayerCompatibility)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDNewPlayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ComputeNewPlayerCompatibility(FOnComputeNewPlayerCompatibility(Z_Param_Out_Callback),Z_Param_SteamIDNewPlayer);
	P_NATIVE_END;
}
// End Class USteamProGameServer Function ComputeNewPlayerCompatibility

// Begin Class USteamProGameServer Function CreateUnauthenticatedUserConnection
struct Z_Construct_UFunction_USteamProGameServer_CreateUnauthenticatedUserConnection_Statics
{
	struct SteamProGameServer_eventCreateUnauthenticatedUserConnection_Parms
	{
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Creates a fake user (ie, a bot) which will be listed as playing on the server, but skips validation.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a fake user (ie, a bot) which will be listed as playing on the server, but skips validation." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProGameServer_CreateUnauthenticatedUserConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventCreateUnauthenticatedUserConnection_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 664632778
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServer_CreateUnauthenticatedUserConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_CreateUnauthenticatedUserConnection_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_CreateUnauthenticatedUserConnection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServer_CreateUnauthenticatedUserConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServer, nullptr, "CreateUnauthenticatedUserConnection", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServer_CreateUnauthenticatedUserConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_CreateUnauthenticatedUserConnection_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServer_CreateUnauthenticatedUserConnection_Statics::SteamProGameServer_eventCreateUnauthenticatedUserConnection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_CreateUnauthenticatedUserConnection_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServer_CreateUnauthenticatedUserConnection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServer_CreateUnauthenticatedUserConnection_Statics::SteamProGameServer_eventCreateUnauthenticatedUserConnection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServer_CreateUnauthenticatedUserConnection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServer_CreateUnauthenticatedUserConnection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServer::execCreateUnauthenticatedUserConnection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=P_THIS->CreateUnauthenticatedUserConnection();
	P_NATIVE_END;
}
// End Class USteamProGameServer Function CreateUnauthenticatedUserConnection

// Begin Class USteamProGameServer Function EndAuthSession
struct Z_Construct_UFunction_USteamProGameServer_EndAuthSession_Statics
{
	struct SteamProGameServer_eventEndAuthSession_Parms
	{
		FSteamID SteamID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Ends an auth session that was started with BeginAuthSession. This should be called when no longer playing with the specified entity.\n\x09*\n\x09* @param\x09SteamID\x09\x09The entity to end the active auth session with.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ends an auth session that was started with BeginAuthSession. This should be called when no longer playing with the specified entity.\n\n@param        SteamID         The entity to end the active auth session with." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProGameServer_EndAuthSession_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventEndAuthSession_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 664632778
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServer_EndAuthSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_EndAuthSession_Statics::NewProp_SteamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_EndAuthSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServer_EndAuthSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServer, nullptr, "EndAuthSession", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServer_EndAuthSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_EndAuthSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServer_EndAuthSession_Statics::SteamProGameServer_eventEndAuthSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_EndAuthSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServer_EndAuthSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServer_EndAuthSession_Statics::SteamProGameServer_eventEndAuthSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServer_EndAuthSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServer_EndAuthSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServer::execEndAuthSession)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndAuthSession(Z_Param_SteamID);
	P_NATIVE_END;
}
// End Class USteamProGameServer Function EndAuthSession

// Begin Class USteamProGameServer Function GetAuthSessionTicket
struct Z_Construct_UFunction_USteamProGameServer_GetAuthSessionTicket_Statics
{
	struct SteamProGameServer_eventGetAuthSessionTicket_Parms
	{
		TArray<uint8> Ticket;
		FSteamNetworkingIdentity SteamNetworkingIdentity;
		FSteamTicketHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Retrieve a authentication ticket to be sent to the entity who wishes to authenticate you.\n\x09*\n\x09* After calling this you can send the ticket to the entity where they can then call ISteamUser::BeginAuthSession to verify this entities integrity.\n\x09* When creating a ticket for use by the ISteamUserAuth/AuthenticateUserTicket Web API, the calling application should wait for the GetAuthSessionTicketResponse_t Callback \n\x09* generated by the API call before attempting to use the ticket to ensure that the ticket has been communicated to the server. \n\x09* If this Callback does not come in a timely fashion (10 - 20 seconds), then your client is not connected to Steam, and the AuthenticateUserTicket call will fail because it can not authenticate the user.\n\x09*\n\x09* @param\x09Ticket\x09\x09The buffer where the new auth ticket will be copied into if the call was successful.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieve a authentication ticket to be sent to the entity who wishes to authenticate you.\n\nAfter calling this you can send the ticket to the entity where they can then call ISteamUser::BeginAuthSession to verify this entities integrity.\nWhen creating a ticket for use by the ISteamUserAuth/AuthenticateUserTicket Web API, the calling application should wait for the GetAuthSessionTicketResponse_t Callback\ngenerated by the API call before attempting to use the ticket to ensure that the ticket has been communicated to the server.\nIf this Callback does not come in a timely fashion (10 - 20 seconds), then your client is not connected to Steam, and the AuthenticateUserTicket call will fail because it can not authenticate the user.\n\n@param        Ticket          The buffer where the new auth ticket will be copied into if the call was successful." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Ticket_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Ticket;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamNetworkingIdentity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProGameServer_GetAuthSessionTicket_Statics::NewProp_Ticket_Inner = { "Ticket", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProGameServer_GetAuthSessionTicket_Statics::NewProp_Ticket = { "Ticket", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventGetAuthSessionTicket_Parms, Ticket), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProGameServer_GetAuthSessionTicket_Statics::NewProp_SteamNetworkingIdentity = { "SteamNetworkingIdentity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventGetAuthSessionTicket_Parms, SteamNetworkingIdentity), Z_Construct_UScriptStruct_FSteamNetworkingIdentity, METADATA_PARAMS(0, nullptr) }; // 3585991723
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProGameServer_GetAuthSessionTicket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventGetAuthSessionTicket_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(0, nullptr) }; // 2637768704
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServer_GetAuthSessionTicket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_GetAuthSessionTicket_Statics::NewProp_Ticket_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_GetAuthSessionTicket_Statics::NewProp_Ticket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_GetAuthSessionTicket_Statics::NewProp_SteamNetworkingIdentity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_GetAuthSessionTicket_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_GetAuthSessionTicket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServer_GetAuthSessionTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServer, nullptr, "GetAuthSessionTicket", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServer_GetAuthSessionTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_GetAuthSessionTicket_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServer_GetAuthSessionTicket_Statics::SteamProGameServer_eventGetAuthSessionTicket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_GetAuthSessionTicket_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServer_GetAuthSessionTicket_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServer_GetAuthSessionTicket_Statics::SteamProGameServer_eventGetAuthSessionTicket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServer_GetAuthSessionTicket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServer_GetAuthSessionTicket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServer::execGetAuthSessionTicket)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Ticket);
	P_GET_STRUCT(FSteamNetworkingIdentity,Z_Param_SteamNetworkingIdentity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamTicketHandle*)Z_Param__Result=P_THIS->GetAuthSessionTicket(Z_Param_Out_Ticket,Z_Param_SteamNetworkingIdentity);
	P_NATIVE_END;
}
// End Class USteamProGameServer Function GetAuthSessionTicket

// Begin Class USteamProGameServer Function GetServerPublicIP
struct Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_Statics
{
	struct SteamProGameServer_eventGetServerPublicIP_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets the Steam ID of the game server.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the Steam ID of the game server." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventGetServerPublicIP_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServer, nullptr, "GetServerPublicIP", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_Statics::SteamProGameServer_eventGetServerPublicIP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_Statics::SteamProGameServer_eventGetServerPublicIP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServer::execGetServerPublicIP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetServerPublicIP();
	P_NATIVE_END;
}
// End Class USteamProGameServer Function GetServerPublicIP

// Begin Class USteamProGameServer Function GetServerPublicIP_Pure
struct Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_Pure_Statics
{
	struct SteamProGameServer_eventGetServerPublicIP_Pure_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets the Steam ID of the game server.\n\x09*/" },
#endif
		{ "DisplayName", "Get Server Public Ip (Pure)" },
		{ "Keywords", "Get Ip" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the Steam ID of the game server." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_Pure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventGetServerPublicIP_Pure_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_Pure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_Pure_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_Pure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_Pure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServer, nullptr, "GetServerPublicIP_Pure", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_Pure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_Pure_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_Pure_Statics::SteamProGameServer_eventGetServerPublicIP_Pure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_Pure_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_Pure_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_Pure_Statics::SteamProGameServer_eventGetServerPublicIP_Pure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_Pure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_Pure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServer::execGetServerPublicIP_Pure)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetServerPublicIP_Pure();
	P_NATIVE_END;
}
// End Class USteamProGameServer Function GetServerPublicIP_Pure

// Begin Class USteamProGameServer Function GetServerPublicIP_PureCompact
struct Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_PureCompact_Statics
{
	struct SteamProGameServer_eventGetServerPublicIP_PureCompact_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets the Steam ID of the game server.\n\x09*/" },
#endif
		{ "CompactNodeTitle", "Server Ip" },
		{ "DisplayName", "Get Server Public Ip (Compact)" },
		{ "Keywords", "Get Ip" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the Steam ID of the game server." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_PureCompact_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventGetServerPublicIP_PureCompact_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_PureCompact_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_PureCompact_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_PureCompact_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_PureCompact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServer, nullptr, "GetServerPublicIP_PureCompact", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_PureCompact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_PureCompact_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_PureCompact_Statics::SteamProGameServer_eventGetServerPublicIP_PureCompact_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_PureCompact_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_PureCompact_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_PureCompact_Statics::SteamProGameServer_eventGetServerPublicIP_PureCompact_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_PureCompact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_PureCompact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServer::execGetServerPublicIP_PureCompact)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetServerPublicIP_PureCompact();
	P_NATIVE_END;
}
// End Class USteamProGameServer Function GetServerPublicIP_PureCompact

// Begin Class USteamProGameServer Function GetServerSteamID
struct Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_Statics
{
	struct SteamProGameServer_eventGetServerSteamID_Parms
	{
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets the Steam ID of the game server.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the Steam ID of the game server." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventGetServerSteamID_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 664632778
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServer, nullptr, "GetServerSteamID", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_Statics::SteamProGameServer_eventGetServerSteamID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_Statics::SteamProGameServer_eventGetServerSteamID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServer_GetServerSteamID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServer::execGetServerSteamID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=P_THIS->GetServerSteamID();
	P_NATIVE_END;
}
// End Class USteamProGameServer Function GetServerSteamID

// Begin Class USteamProGameServer Function GetServerSteamID_Pure
struct Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_Pure_Statics
{
	struct SteamProGameServer_eventGetServerSteamID_Pure_Parms
	{
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets the Steam ID of the game server.\n\x09*/" },
#endif
		{ "DisplayName", "Get Server Steam Id (Pure)" },
		{ "Keywords", "Get Steam Id" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the Steam ID of the game server." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_Pure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventGetServerSteamID_Pure_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 664632778
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_Pure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_Pure_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_Pure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_Pure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServer, nullptr, "GetServerSteamID_Pure", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_Pure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_Pure_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_Pure_Statics::SteamProGameServer_eventGetServerSteamID_Pure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_Pure_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_Pure_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_Pure_Statics::SteamProGameServer_eventGetServerSteamID_Pure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_Pure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_Pure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServer::execGetServerSteamID_Pure)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=P_THIS->GetServerSteamID_Pure();
	P_NATIVE_END;
}
// End Class USteamProGameServer Function GetServerSteamID_Pure

// Begin Class USteamProGameServer Function GetServerSteamID_PureCompact
struct Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_PureCompact_Statics
{
	struct SteamProGameServer_eventGetServerSteamID_PureCompact_Parms
	{
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets the Steam ID of the game server.\n\x09*/" },
#endif
		{ "CompactNodeTitle", "Server Id" },
		{ "DisplayName", "Get Server Steam Id (Compact)" },
		{ "Keywords", "Get Steam Id" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the Steam ID of the game server." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_PureCompact_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventGetServerSteamID_PureCompact_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 664632778
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_PureCompact_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_PureCompact_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_PureCompact_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_PureCompact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServer, nullptr, "GetServerSteamID_PureCompact", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_PureCompact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_PureCompact_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_PureCompact_Statics::SteamProGameServer_eventGetServerSteamID_PureCompact_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_PureCompact_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_PureCompact_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_PureCompact_Statics::SteamProGameServer_eventGetServerSteamID_PureCompact_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_PureCompact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_PureCompact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServer::execGetServerSteamID_PureCompact)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=P_THIS->GetServerSteamID_PureCompact();
	P_NATIVE_END;
}
// End Class USteamProGameServer Function GetServerSteamID_PureCompact

// Begin Class USteamProGameServer Function GetSteamGameServer
struct Z_Construct_UFunction_USteamProGameServer_GetSteamGameServer_Statics
{
	struct SteamProGameServer_eventGetSteamGameServer_Parms
	{
		USteamProGameServer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamProGameServer_GetSteamGameServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventGetSteamGameServer_Parms, ReturnValue), Z_Construct_UClass_USteamProGameServer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServer_GetSteamGameServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_GetSteamGameServer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_GetSteamGameServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServer_GetSteamGameServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServer, nullptr, "GetSteamGameServer", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServer_GetSteamGameServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_GetSteamGameServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServer_GetSteamGameServer_Statics::SteamProGameServer_eventGetSteamGameServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_GetSteamGameServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServer_GetSteamGameServer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServer_GetSteamGameServer_Statics::SteamProGameServer_eventGetSteamGameServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServer_GetSteamGameServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServer_GetSteamGameServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServer::execGetSteamGameServer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamProGameServer**)Z_Param__Result=USteamProGameServer::GetSteamGameServer();
	P_NATIVE_END;
}
// End Class USteamProGameServer Function GetSteamGameServer

// Begin Class USteamProGameServer Function LogOff
struct Z_Construct_UFunction_USteamProGameServer_LogOff_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Begin process of logging the game server out of steam.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Begin process of logging the game server out of steam." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServer_LogOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServer, nullptr, "LogOff", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_LogOff_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServer_LogOff_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USteamProGameServer_LogOff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServer_LogOff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServer::execLogOff)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LogOff();
	P_NATIVE_END;
}
// End Class USteamProGameServer Function LogOff

// Begin Class USteamProGameServer Function LogOn
struct Z_Construct_UFunction_USteamProGameServer_LogOn_Statics
{
	struct SteamProGameServer_eventLogOn_Parms
	{
		FString Token;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Begin process to login to a persistent game server account.\n\x09* \n\x09* @param\x09Token\x09\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Begin process to login to a persistent game server account.\n\n@param        Token" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Token;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProGameServer_LogOn_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventLogOn_Parms, Token), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServer_LogOn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_LogOn_Statics::NewProp_Token,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_LogOn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServer_LogOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServer, nullptr, "LogOn", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServer_LogOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_LogOn_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServer_LogOn_Statics::SteamProGameServer_eventLogOn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_LogOn_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServer_LogOn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServer_LogOn_Statics::SteamProGameServer_eventLogOn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServer_LogOn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServer_LogOn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServer::execLogOn)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Token);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LogOn(Z_Param_Token);
	P_NATIVE_END;
}
// End Class USteamProGameServer Function LogOn

// Begin Class USteamProGameServer Function LogOnAnonymous
struct Z_Construct_UFunction_USteamProGameServer_LogOnAnonymous_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Login to a generic, anonymous account.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Login to a generic, anonymous account." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServer_LogOnAnonymous_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServer, nullptr, "LogOnAnonymous", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_LogOnAnonymous_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServer_LogOnAnonymous_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USteamProGameServer_LogOnAnonymous()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServer_LogOnAnonymous_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServer::execLogOnAnonymous)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LogOnAnonymous();
	P_NATIVE_END;
}
// End Class USteamProGameServer Function LogOnAnonymous

// Begin Class USteamProGameServer Function RequestUserGroupStatus
struct Z_Construct_UFunction_USteamProGameServer_RequestUserGroupStatus_Statics
{
	struct SteamProGameServer_eventRequestUserGroupStatus_Parms
	{
		FSteamID SteamIDUser;
		FSteamID SteamIDGroup;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Checks if a user is in the specified Steam group.\n\x09*\n\x09* @param\x09SteamIDUser\x09\x09The user to check the group status of.\n\x09* @param\x09SteamIDGroup\x09The group to check.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if a user is in the specified Steam group.\n\n@param        SteamIDUser             The user to check the group status of.\n@param        SteamIDGroup    The group to check." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDGroup;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProGameServer_RequestUserGroupStatus_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventRequestUserGroupStatus_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 664632778
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProGameServer_RequestUserGroupStatus_Statics::NewProp_SteamIDGroup = { "SteamIDGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventRequestUserGroupStatus_Parms, SteamIDGroup), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 664632778
void Z_Construct_UFunction_USteamProGameServer_RequestUserGroupStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProGameServer_eventRequestUserGroupStatus_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProGameServer_RequestUserGroupStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProGameServer_eventRequestUserGroupStatus_Parms), &Z_Construct_UFunction_USteamProGameServer_RequestUserGroupStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServer_RequestUserGroupStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_RequestUserGroupStatus_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_RequestUserGroupStatus_Statics::NewProp_SteamIDGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_RequestUserGroupStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_RequestUserGroupStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServer_RequestUserGroupStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServer, nullptr, "RequestUserGroupStatus", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServer_RequestUserGroupStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_RequestUserGroupStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServer_RequestUserGroupStatus_Statics::SteamProGameServer_eventRequestUserGroupStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_RequestUserGroupStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServer_RequestUserGroupStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServer_RequestUserGroupStatus_Statics::SteamProGameServer_eventRequestUserGroupStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServer_RequestUserGroupStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServer_RequestUserGroupStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServer::execRequestUserGroupStatus)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDGroup);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RequestUserGroupStatus(Z_Param_SteamIDUser,Z_Param_SteamIDGroup);
	P_NATIVE_END;
}
// End Class USteamProGameServer Function RequestUserGroupStatus

// Begin Class USteamProGameServer Function SetAdvertiseServerActive
struct Z_Construct_UFunction_USteamProGameServer_SetAdvertiseServerActive_Statics
{
	struct SteamProGameServer_eventSetAdvertiseServerActive_Parms
	{
		bool bActive;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Indicate whether you wish to be listed on the master server list\n\x09* and/or respond to server browser / LAN discovery packets.\n\x09* The server starts with this value set to false.  You should set all\n\x09* relevant server parameters before enabling advertisement on the server.\n\x09*\n\x09* (This function used to be named EnableHeartbeats, so if you are wondering\n\x09* where that function went, it's right here.  It does the same thing as before,\n\x09* the old name was just confusing.)\n\x09*\n\x09* @param\x09""bActive\x09\x09""Enable (true) or disable (false) the master server updater.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicate whether you wish to be listed on the master server list\nand/or respond to server browser / LAN discovery packets.\nThe server starts with this value set to false.  You should set all\nrelevant server parameters before enabling advertisement on the server.\n\n(This function used to be named EnableHeartbeats, so if you are wondering\nwhere that function went, it's right here.  It does the same thing as before,\nthe old name was just confusing.)\n\n@param        bActive         Enable (true) or disable (false) the master server updater." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProGameServer_SetAdvertiseServerActive_Statics::NewProp_bActive_SetBit(void* Obj)
{
	((SteamProGameServer_eventSetAdvertiseServerActive_Parms*)Obj)->bActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProGameServer_SetAdvertiseServerActive_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProGameServer_eventSetAdvertiseServerActive_Parms), &Z_Construct_UFunction_USteamProGameServer_SetAdvertiseServerActive_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServer_SetAdvertiseServerActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_SetAdvertiseServerActive_Statics::NewProp_bActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetAdvertiseServerActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServer_SetAdvertiseServerActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServer, nullptr, "SetAdvertiseServerActive", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServer_SetAdvertiseServerActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetAdvertiseServerActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServer_SetAdvertiseServerActive_Statics::SteamProGameServer_eventSetAdvertiseServerActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetAdvertiseServerActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServer_SetAdvertiseServerActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServer_SetAdvertiseServerActive_Statics::SteamProGameServer_eventSetAdvertiseServerActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServer_SetAdvertiseServerActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServer_SetAdvertiseServerActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServer::execSetAdvertiseServerActive)
{
	P_GET_UBOOL(Z_Param_bActive);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAdvertiseServerActive(Z_Param_bActive);
	P_NATIVE_END;
}
// End Class USteamProGameServer Function SetAdvertiseServerActive

// Begin Class USteamProGameServer Function SetBotPlayerCount
struct Z_Construct_UFunction_USteamProGameServer_SetBotPlayerCount_Statics
{
	struct SteamProGameServer_eventSetBotPlayerCount_Parms
	{
		int32 Botplayers;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets the number of bot/AI players on the game server. The default value is 0.\n\x09*\n\x09* @param\x09""Botplayers\x09The number of bot/AI players currently playing on the server.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the number of bot/AI players on the game server. The default value is 0.\n\n@param        Botplayers      The number of bot/AI players currently playing on the server." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Botplayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProGameServer_SetBotPlayerCount_Statics::NewProp_Botplayers = { "Botplayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventSetBotPlayerCount_Parms, Botplayers), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServer_SetBotPlayerCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_SetBotPlayerCount_Statics::NewProp_Botplayers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetBotPlayerCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServer_SetBotPlayerCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServer, nullptr, "SetBotPlayerCount", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServer_SetBotPlayerCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetBotPlayerCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServer_SetBotPlayerCount_Statics::SteamProGameServer_eventSetBotPlayerCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetBotPlayerCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServer_SetBotPlayerCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServer_SetBotPlayerCount_Statics::SteamProGameServer_eventSetBotPlayerCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServer_SetBotPlayerCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServer_SetBotPlayerCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServer::execSetBotPlayerCount)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Botplayers);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBotPlayerCount(Z_Param_Botplayers);
	P_NATIVE_END;
}
// End Class USteamProGameServer Function SetBotPlayerCount

// Begin Class USteamProGameServer Function SetDedicatedServer
struct Z_Construct_UFunction_USteamProGameServer_SetDedicatedServer_Statics
{
	struct SteamProGameServer_eventSetDedicatedServer_Parms
	{
		bool bDedicated;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets the whether this is a dedicated server or a listen server. The default is listen server.\n\x09*\n\x09* @param\x09""bDedicated\x09\x09Is this a dedicated server (true) or a listen server (false)?\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the whether this is a dedicated server or a listen server. The default is listen server.\n\n@param        bDedicated              Is this a dedicated server (true) or a listen server (false)?" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bDedicated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDedicated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProGameServer_SetDedicatedServer_Statics::NewProp_bDedicated_SetBit(void* Obj)
{
	((SteamProGameServer_eventSetDedicatedServer_Parms*)Obj)->bDedicated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProGameServer_SetDedicatedServer_Statics::NewProp_bDedicated = { "bDedicated", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProGameServer_eventSetDedicatedServer_Parms), &Z_Construct_UFunction_USteamProGameServer_SetDedicatedServer_Statics::NewProp_bDedicated_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServer_SetDedicatedServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_SetDedicatedServer_Statics::NewProp_bDedicated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetDedicatedServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServer_SetDedicatedServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServer, nullptr, "SetDedicatedServer", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServer_SetDedicatedServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetDedicatedServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServer_SetDedicatedServer_Statics::SteamProGameServer_eventSetDedicatedServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetDedicatedServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServer_SetDedicatedServer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServer_SetDedicatedServer_Statics::SteamProGameServer_eventSetDedicatedServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServer_SetDedicatedServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServer_SetDedicatedServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServer::execSetDedicatedServer)
{
	P_GET_UBOOL(Z_Param_bDedicated);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDedicatedServer(Z_Param_bDedicated);
	P_NATIVE_END;
}
// End Class USteamProGameServer Function SetDedicatedServer

// Begin Class USteamProGameServer Function SetGameData
struct Z_Construct_UFunction_USteamProGameServer_SetGameData_Statics
{
	struct SteamProGameServer_eventSetGameData_Parms
	{
		FString GameData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets a string defining the \"gamedata\" for this server.\n\x09*\n\x09* This is optional, but if set it allows users to filter in the matchmaking/server-browser interfaces based on the value.\n\x09* This is usually formatted as a comma or semicolon separated list.\n\x09* Don't set this unless it actually changes, its only uploaded to the master once; when acknowledged.\n\x09*\n\x09* @param\x09GameData\x09The new \"gamedata\" value to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerGameData.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets a string defining the \"gamedata\" for this server.\n\nThis is optional, but if set it allows users to filter in the matchmaking/server-browser interfaces based on the value.\nThis is usually formatted as a comma or semicolon separated list.\nDon't set this unless it actually changes, its only uploaded to the master once; when acknowledged.\n\n@param        GameData        The new \"gamedata\" value to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerGameData." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProGameServer_SetGameData_Statics::NewProp_GameData = { "GameData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventSetGameData_Parms, GameData), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServer_SetGameData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_SetGameData_Statics::NewProp_GameData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetGameData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServer_SetGameData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServer, nullptr, "SetGameData", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServer_SetGameData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetGameData_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServer_SetGameData_Statics::SteamProGameServer_eventSetGameData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetGameData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServer_SetGameData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServer_SetGameData_Statics::SteamProGameServer_eventSetGameData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServer_SetGameData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServer_SetGameData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServer::execSetGameData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GameData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGameData(Z_Param_GameData);
	P_NATIVE_END;
}
// End Class USteamProGameServer Function SetGameData

// Begin Class USteamProGameServer Function SetGameDescription
struct Z_Construct_UFunction_USteamProGameServer_SetGameDescription_Statics
{
	struct SteamProGameServer_eventSetGameDescription_Parms
	{
		FString GameDescription;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets the game description. Setting this to the full name of your game is recommended.\n\x09*\n\x09* This is required for all game servers and can only be set before calling LogOn or LogOnAnonymous.\n\x09*\n\x09* @param\x09GameDescription\x09\x09The description of your game. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerGameDescription.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the game description. Setting this to the full name of your game is recommended.\n\nThis is required for all game servers and can only be set before calling LogOn or LogOnAnonymous.\n\n@param        GameDescription         The description of your game. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerGameDescription." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameDescription;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProGameServer_SetGameDescription_Statics::NewProp_GameDescription = { "GameDescription", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventSetGameDescription_Parms, GameDescription), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServer_SetGameDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_SetGameDescription_Statics::NewProp_GameDescription,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetGameDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServer_SetGameDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServer, nullptr, "SetGameDescription", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServer_SetGameDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetGameDescription_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServer_SetGameDescription_Statics::SteamProGameServer_eventSetGameDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetGameDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServer_SetGameDescription_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServer_SetGameDescription_Statics::SteamProGameServer_eventSetGameDescription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServer_SetGameDescription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServer_SetGameDescription_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServer::execSetGameDescription)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GameDescription);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGameDescription(Z_Param_GameDescription);
	P_NATIVE_END;
}
// End Class USteamProGameServer Function SetGameDescription

// Begin Class USteamProGameServer Function SetGameTags
struct Z_Construct_UFunction_USteamProGameServer_SetGameTags_Statics
{
	struct SteamProGameServer_eventSetGameTags_Parms
	{
		FString GameTags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets a string defining the \"gametags\" for this server, this is optional, but if set it allows users to filter in the matchmaking/server-browser interfaces based on the value.\n\x09*\n\x09* This is usually formatted as a comma or semicolon separated list.\n\x09* Don't set this unless it actually changes, its only uploaded to the master once; when acknowledged.\n\x09*\n\x09* @param\x09GameTags\x09The new \"gametags\" value to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerTags.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets a string defining the \"gametags\" for this server, this is optional, but if set it allows users to filter in the matchmaking/server-browser interfaces based on the value.\n\nThis is usually formatted as a comma or semicolon separated list.\nDon't set this unless it actually changes, its only uploaded to the master once; when acknowledged.\n\n@param        GameTags        The new \"gametags\" value to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerTags." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProGameServer_SetGameTags_Statics::NewProp_GameTags = { "GameTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventSetGameTags_Parms, GameTags), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServer_SetGameTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_SetGameTags_Statics::NewProp_GameTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetGameTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServer_SetGameTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServer, nullptr, "SetGameTags", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServer_SetGameTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetGameTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServer_SetGameTags_Statics::SteamProGameServer_eventSetGameTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetGameTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServer_SetGameTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServer_SetGameTags_Statics::SteamProGameServer_eventSetGameTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServer_SetGameTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServer_SetGameTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServer::execSetGameTags)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_GameTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGameTags(Z_Param_GameTags);
	P_NATIVE_END;
}
// End Class USteamProGameServer Function SetGameTags

// Begin Class USteamProGameServer Function SetKeyValue
struct Z_Construct_UFunction_USteamProGameServer_SetKeyValue_Statics
{
	struct SteamProGameServer_eventSetKeyValue_Parms
	{
		FString Key;
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09* Add/update a rules key/value pair.\n\x09*\n\x09* @param\x09Key\x09\x09\x09key to update\n\x09* @param\x09Value\x09\x09value to set\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add/update a rules key/value pair.\n\n@param        Key                     key to update\n@param        Value           value to set" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProGameServer_SetKeyValue_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventSetKeyValue_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProGameServer_SetKeyValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventSetKeyValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServer_SetKeyValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_SetKeyValue_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_SetKeyValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetKeyValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServer_SetKeyValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServer, nullptr, "SetKeyValue", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServer_SetKeyValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetKeyValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServer_SetKeyValue_Statics::SteamProGameServer_eventSetKeyValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetKeyValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServer_SetKeyValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServer_SetKeyValue_Statics::SteamProGameServer_eventSetKeyValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServer_SetKeyValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServer_SetKeyValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServer::execSetKeyValue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetKeyValue(Z_Param_Key,Z_Param_Value);
	P_NATIVE_END;
}
// End Class USteamProGameServer Function SetKeyValue

// Begin Class USteamProGameServer Function SetMapName
struct Z_Construct_UFunction_USteamProGameServer_SetMapName_Statics
{
	struct SteamProGameServer_eventSetMapName_Parms
	{
		FString MapName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets the name of map to report in the server browser.\n\x09*\n\x09* @param\x09MapName\x09\x09The new map name to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerMapName.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the name of map to report in the server browser.\n\n@param        MapName         The new map name to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerMapName." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MapName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProGameServer_SetMapName_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventSetMapName_Parms, MapName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServer_SetMapName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_SetMapName_Statics::NewProp_MapName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetMapName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServer_SetMapName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServer, nullptr, "SetMapName", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServer_SetMapName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetMapName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServer_SetMapName_Statics::SteamProGameServer_eventSetMapName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetMapName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServer_SetMapName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServer_SetMapName_Statics::SteamProGameServer_eventSetMapName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServer_SetMapName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServer_SetMapName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServer::execSetMapName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MapName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMapName(Z_Param_MapName);
	P_NATIVE_END;
}
// End Class USteamProGameServer Function SetMapName

// Begin Class USteamProGameServer Function SetMaxPlayerCount
struct Z_Construct_UFunction_USteamProGameServer_SetMaxPlayerCount_Statics
{
	struct SteamProGameServer_eventSetMaxPlayerCount_Parms
	{
		int32 PlayersMax;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets the maximum number of players allowed on the server at once.\n\x09*\n\x09* This value may be changed at any time.\n\x09*\n\x09* @param\x09PlayersMax\x09\x09The new maximum number of players allowed on this server.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the maximum number of players allowed on the server at once.\n\nThis value may be changed at any time.\n\n@param        PlayersMax              The new maximum number of players allowed on this server." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayersMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProGameServer_SetMaxPlayerCount_Statics::NewProp_PlayersMax = { "PlayersMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventSetMaxPlayerCount_Parms, PlayersMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServer_SetMaxPlayerCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_SetMaxPlayerCount_Statics::NewProp_PlayersMax,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetMaxPlayerCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServer_SetMaxPlayerCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServer, nullptr, "SetMaxPlayerCount", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServer_SetMaxPlayerCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetMaxPlayerCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServer_SetMaxPlayerCount_Statics::SteamProGameServer_eventSetMaxPlayerCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetMaxPlayerCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServer_SetMaxPlayerCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServer_SetMaxPlayerCount_Statics::SteamProGameServer_eventSetMaxPlayerCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServer_SetMaxPlayerCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServer_SetMaxPlayerCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServer::execSetMaxPlayerCount)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayersMax);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMaxPlayerCount(Z_Param_PlayersMax);
	P_NATIVE_END;
}
// End Class USteamProGameServer Function SetMaxPlayerCount

// Begin Class USteamProGameServer Function SetModDir
struct Z_Construct_UFunction_USteamProGameServer_SetModDir_Statics
{
	struct SteamProGameServer_eventSetModDir_Parms
	{
		FString ModDir;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets the game directory.\n\x09*\n\x09* This should be the same directory game where gets installed into. Just the folder name, not the whole path. I.e. \"Spacewar\".\n\x09*\n\x09* @param\x09ModDir\x09\x09The game directory to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerGameDir.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the game directory.\n\nThis should be the same directory game where gets installed into. Just the folder name, not the whole path. I.e. \"Spacewar\".\n\n@param        ModDir          The game directory to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerGameDir." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ModDir;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProGameServer_SetModDir_Statics::NewProp_ModDir = { "ModDir", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventSetModDir_Parms, ModDir), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServer_SetModDir_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_SetModDir_Statics::NewProp_ModDir,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetModDir_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServer_SetModDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServer, nullptr, "SetModDir", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServer_SetModDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetModDir_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServer_SetModDir_Statics::SteamProGameServer_eventSetModDir_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetModDir_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServer_SetModDir_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServer_SetModDir_Statics::SteamProGameServer_eventSetModDir_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServer_SetModDir()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServer_SetModDir_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServer::execSetModDir)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ModDir);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetModDir(Z_Param_ModDir);
	P_NATIVE_END;
}
// End Class USteamProGameServer Function SetModDir

// Begin Class USteamProGameServer Function SetPasswordProtected
struct Z_Construct_UFunction_USteamProGameServer_SetPasswordProtected_Statics
{
	struct SteamProGameServer_eventSetPasswordProtected_Parms
	{
		bool bPasswordProtected;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Set whether the game server will require a password once when the user tries to join.\n\x09*\n\x09* @param\x09""bPasswordProtected\x09\x09""Enable (true) or disable (false) password protection.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set whether the game server will require a password once when the user tries to join.\n\n@param        bPasswordProtected              Enable (true) or disable (false) password protection." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bPasswordProtected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPasswordProtected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProGameServer_SetPasswordProtected_Statics::NewProp_bPasswordProtected_SetBit(void* Obj)
{
	((SteamProGameServer_eventSetPasswordProtected_Parms*)Obj)->bPasswordProtected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProGameServer_SetPasswordProtected_Statics::NewProp_bPasswordProtected = { "bPasswordProtected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProGameServer_eventSetPasswordProtected_Parms), &Z_Construct_UFunction_USteamProGameServer_SetPasswordProtected_Statics::NewProp_bPasswordProtected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServer_SetPasswordProtected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_SetPasswordProtected_Statics::NewProp_bPasswordProtected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetPasswordProtected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServer_SetPasswordProtected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServer, nullptr, "SetPasswordProtected", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServer_SetPasswordProtected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetPasswordProtected_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServer_SetPasswordProtected_Statics::SteamProGameServer_eventSetPasswordProtected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetPasswordProtected_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServer_SetPasswordProtected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServer_SetPasswordProtected_Statics::SteamProGameServer_eventSetPasswordProtected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServer_SetPasswordProtected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServer_SetPasswordProtected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServer::execSetPasswordProtected)
{
	P_GET_UBOOL(Z_Param_bPasswordProtected);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPasswordProtected(Z_Param_bPasswordProtected);
	P_NATIVE_END;
}
// End Class USteamProGameServer Function SetPasswordProtected

// Begin Class USteamProGameServer Function SetProduct
struct Z_Construct_UFunction_USteamProGameServer_SetProduct_Statics
{
	struct SteamProGameServer_eventSetProduct_Parms
	{
		FString Product;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets the game product identifier. This is currently used by the master server for version checking purposes.\n\x09*\n\x09* Converting the games app ID to a string for this is recommended.\n\x09*\n\x09* @param\x09Product\x09\x09The unique identifier for your game. Must not be NULL or an empty string (\"\").\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the game product identifier. This is currently used by the master server for version checking purposes.\n\nConverting the games app ID to a string for this is recommended.\n\n@param        Product         The unique identifier for your game. Must not be NULL or an empty string (\"\")." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Product;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProGameServer_SetProduct_Statics::NewProp_Product = { "Product", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventSetProduct_Parms, Product), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServer_SetProduct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_SetProduct_Statics::NewProp_Product,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetProduct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServer_SetProduct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServer, nullptr, "SetProduct", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServer_SetProduct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetProduct_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServer_SetProduct_Statics::SteamProGameServer_eventSetProduct_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetProduct_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServer_SetProduct_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServer_SetProduct_Statics::SteamProGameServer_eventSetProduct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServer_SetProduct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServer_SetProduct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServer::execSetProduct)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Product);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetProduct(Z_Param_Product);
	P_NATIVE_END;
}
// End Class USteamProGameServer Function SetProduct

// Begin Class USteamProGameServer Function SetRegion
struct Z_Construct_UFunction_USteamProGameServer_SetRegion_Statics
{
	struct SteamProGameServer_eventSetRegion_Parms
	{
		FString Region;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Region identifier. This is an optional field, the default value is an empty string, meaning the \"world\" region.\n\x09*\n\x09* @param\x09Region\x09\x09region\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Region identifier. This is an optional field, the default value is an empty string, meaning the \"world\" region.\n\n@param        Region          region" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Region;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProGameServer_SetRegion_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventSetRegion_Parms, Region), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServer_SetRegion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_SetRegion_Statics::NewProp_Region,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetRegion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServer_SetRegion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServer, nullptr, "SetRegion", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServer_SetRegion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetRegion_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServer_SetRegion_Statics::SteamProGameServer_eventSetRegion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetRegion_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServer_SetRegion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServer_SetRegion_Statics::SteamProGameServer_eventSetRegion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServer_SetRegion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServer_SetRegion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServer::execSetRegion)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Region);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRegion(Z_Param_Region);
	P_NATIVE_END;
}
// End Class USteamProGameServer Function SetRegion

// Begin Class USteamProGameServer Function SetServerName
struct Z_Construct_UFunction_USteamProGameServer_SetServerName_Statics
{
	struct SteamProGameServer_eventSetServerName_Parms
	{
		FString ServerName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets the name of server as it will appear in the server browser.\n\x09*\n\x09* @param\x09ServerName\x09\x09The new server name to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerName.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the name of server as it will appear in the server browser.\n\n@param        ServerName              The new server name to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerName." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProGameServer_SetServerName_Statics::NewProp_ServerName = { "ServerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventSetServerName_Parms, ServerName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServer_SetServerName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_SetServerName_Statics::NewProp_ServerName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetServerName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServer_SetServerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServer, nullptr, "SetServerName", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServer_SetServerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetServerName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServer_SetServerName_Statics::SteamProGameServer_eventSetServerName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetServerName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServer_SetServerName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServer_SetServerName_Statics::SteamProGameServer_eventSetServerName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServer_SetServerName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServer_SetServerName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServer::execSetServerName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ServerName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetServerName(Z_Param_ServerName);
	P_NATIVE_END;
}
// End Class USteamProGameServer Function SetServerName

// Begin Class USteamProGameServer Function SetSpectatorPort
struct Z_Construct_UFunction_USteamProGameServer_SetSpectatorPort_Statics
{
	struct SteamProGameServer_eventSetSpectatorPort_Parms
	{
		int32 SpectatorPort;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Set whether the game server allows spectators, and what port they should connect on. The default value is 0, meaning the service is not used.\n\x09*\n\x09* @param\x09SpectatorPort\x09\x09The port for spectators to join.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set whether the game server allows spectators, and what port they should connect on. The default value is 0, meaning the service is not used.\n\n@param        SpectatorPort           The port for spectators to join." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpectatorPort;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProGameServer_SetSpectatorPort_Statics::NewProp_SpectatorPort = { "SpectatorPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventSetSpectatorPort_Parms, SpectatorPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServer_SetSpectatorPort_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_SetSpectatorPort_Statics::NewProp_SpectatorPort,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetSpectatorPort_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServer_SetSpectatorPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServer, nullptr, "SetSpectatorPort", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServer_SetSpectatorPort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetSpectatorPort_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServer_SetSpectatorPort_Statics::SteamProGameServer_eventSetSpectatorPort_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetSpectatorPort_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServer_SetSpectatorPort_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServer_SetSpectatorPort_Statics::SteamProGameServer_eventSetSpectatorPort_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServer_SetSpectatorPort()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServer_SetSpectatorPort_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServer::execSetSpectatorPort)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SpectatorPort);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSpectatorPort(Z_Param_SpectatorPort);
	P_NATIVE_END;
}
// End Class USteamProGameServer Function SetSpectatorPort

// Begin Class USteamProGameServer Function SetSpectatorServerName
struct Z_Construct_UFunction_USteamProGameServer_SetSpectatorServerName_Statics
{
	struct SteamProGameServer_eventSetSpectatorServerName_Parms
	{
		FString SpectatorServerName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Sets the name of the spectator server. This is only used if spectator port is nonzero.\n\x09*\n\x09* @param\x09SpectatorServerName\x09\x09The spectator server name to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerMapName.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the name of the spectator server. This is only used if spectator port is nonzero.\n\n@param        SpectatorServerName             The spectator server name to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerMapName." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SpectatorServerName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProGameServer_SetSpectatorServerName_Statics::NewProp_SpectatorServerName = { "SpectatorServerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventSetSpectatorServerName_Parms, SpectatorServerName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServer_SetSpectatorServerName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_SetSpectatorServerName_Statics::NewProp_SpectatorServerName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetSpectatorServerName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServer_SetSpectatorServerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServer, nullptr, "SetSpectatorServerName", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServer_SetSpectatorServerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetSpectatorServerName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServer_SetSpectatorServerName_Statics::SteamProGameServer_eventSetSpectatorServerName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_SetSpectatorServerName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServer_SetSpectatorServerName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServer_SetSpectatorServerName_Statics::SteamProGameServer_eventSetSpectatorServerName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServer_SetSpectatorServerName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServer_SetSpectatorServerName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServer::execSetSpectatorServerName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SpectatorServerName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSpectatorServerName(Z_Param_SpectatorServerName);
	P_NATIVE_END;
}
// End Class USteamProGameServer Function SetSpectatorServerName

// Begin Class USteamProGameServer Function UserHasLicenseForApp
struct Z_Construct_UFunction_USteamProGameServer_UserHasLicenseForApp_Statics
{
	struct SteamProGameServer_eventUserHasLicenseForApp_Parms
	{
		FSteamID SteamID;
		int32 AppID;
		ESteamUserHasLicenseForAppResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Checks if the user owns a specific piece of Downloadable Content (DLC).\n\x09*\n\x09* This can only be called after sending the users auth ticket to BeginAuthSession/\n\x09*\n\x09* @param\x09SteamID\x09\x09The Steam ID of the user that sent the auth ticket.\n\x09* @param\x09""AppID\x09\x09The DLC App ID to check if the user owns it.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the user owns a specific piece of Downloadable Content (DLC).\n\nThis can only be called after sending the users auth ticket to BeginAuthSession/\n\n@param        SteamID         The Steam ID of the user that sent the auth ticket.\n@param        AppID           The DLC App ID to check if the user owns it." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProGameServer_UserHasLicenseForApp_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventUserHasLicenseForApp_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 664632778
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProGameServer_UserHasLicenseForApp_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventUserHasLicenseForApp_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProGameServer_UserHasLicenseForApp_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProGameServer_UserHasLicenseForApp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProGameServer_eventUserHasLicenseForApp_Parms, ReturnValue), Z_Construct_UEnum_SteamCorePro_ESteamUserHasLicenseForAppResult, METADATA_PARAMS(0, nullptr) }; // 2404623160
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServer_UserHasLicenseForApp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_UserHasLicenseForApp_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_UserHasLicenseForApp_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_UserHasLicenseForApp_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_UserHasLicenseForApp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_UserHasLicenseForApp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServer_UserHasLicenseForApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServer, nullptr, "UserHasLicenseForApp", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServer_UserHasLicenseForApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_UserHasLicenseForApp_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServer_UserHasLicenseForApp_Statics::SteamProGameServer_eventUserHasLicenseForApp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_UserHasLicenseForApp_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServer_UserHasLicenseForApp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServer_UserHasLicenseForApp_Statics::SteamProGameServer_eventUserHasLicenseForApp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServer_UserHasLicenseForApp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServer_UserHasLicenseForApp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServer::execUserHasLicenseForApp)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamUserHasLicenseForAppResult*)Z_Param__Result=P_THIS->UserHasLicenseForApp(Z_Param_SteamID,Z_Param_AppID);
	P_NATIVE_END;
}
// End Class USteamProGameServer Function UserHasLicenseForApp

// Begin Class USteamProGameServer Function WasRestartRequested
struct Z_Construct_UFunction_USteamProGameServer_WasRestartRequested_Statics
{
	struct SteamProGameServer_eventWasRestartRequested_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Checks if the master server has alerted us that we are out of date.\n\x09*\n\x09* This reverts back to false after calling this function.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the master server has alerted us that we are out of date.\n\nThis reverts back to false after calling this function." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProGameServer_WasRestartRequested_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProGameServer_eventWasRestartRequested_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProGameServer_WasRestartRequested_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProGameServer_eventWasRestartRequested_Parms), &Z_Construct_UFunction_USteamProGameServer_WasRestartRequested_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProGameServer_WasRestartRequested_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProGameServer_WasRestartRequested_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_WasRestartRequested_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProGameServer_WasRestartRequested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProGameServer, nullptr, "WasRestartRequested", nullptr, nullptr, Z_Construct_UFunction_USteamProGameServer_WasRestartRequested_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_WasRestartRequested_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProGameServer_WasRestartRequested_Statics::SteamProGameServer_eventWasRestartRequested_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProGameServer_WasRestartRequested_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProGameServer_WasRestartRequested_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProGameServer_WasRestartRequested_Statics::SteamProGameServer_eventWasRestartRequested_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProGameServer_WasRestartRequested()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProGameServer_WasRestartRequested_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProGameServer::execWasRestartRequested)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->WasRestartRequested();
	P_NATIVE_END;
}
// End Class USteamProGameServer Function WasRestartRequested

// Begin Class USteamProGameServer
void USteamProGameServer::StaticRegisterNativesUSteamProGameServer()
{
	UClass* Class = USteamProGameServer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AssociateWithClan", &USteamProGameServer::execAssociateWithClan },
		{ "BeginAuthSession", &USteamProGameServer::execBeginAuthSession },
		{ "BLoggedOn", &USteamProGameServer::execBLoggedOn },
		{ "BSecure", &USteamProGameServer::execBSecure },
		{ "BUpdateUserData", &USteamProGameServer::execBUpdateUserData },
		{ "CancelAuthTicket", &USteamProGameServer::execCancelAuthTicket },
		{ "ClearAllKeyValues", &USteamProGameServer::execClearAllKeyValues },
		{ "ComputeNewPlayerCompatibility", &USteamProGameServer::execComputeNewPlayerCompatibility },
		{ "CreateUnauthenticatedUserConnection", &USteamProGameServer::execCreateUnauthenticatedUserConnection },
		{ "EndAuthSession", &USteamProGameServer::execEndAuthSession },
		{ "GetAuthSessionTicket", &USteamProGameServer::execGetAuthSessionTicket },
		{ "GetServerPublicIP", &USteamProGameServer::execGetServerPublicIP },
		{ "GetServerPublicIP_Pure", &USteamProGameServer::execGetServerPublicIP_Pure },
		{ "GetServerPublicIP_PureCompact", &USteamProGameServer::execGetServerPublicIP_PureCompact },
		{ "GetServerSteamID", &USteamProGameServer::execGetServerSteamID },
		{ "GetServerSteamID_Pure", &USteamProGameServer::execGetServerSteamID_Pure },
		{ "GetServerSteamID_PureCompact", &USteamProGameServer::execGetServerSteamID_PureCompact },
		{ "GetSteamGameServer", &USteamProGameServer::execGetSteamGameServer },
		{ "LogOff", &USteamProGameServer::execLogOff },
		{ "LogOn", &USteamProGameServer::execLogOn },
		{ "LogOnAnonymous", &USteamProGameServer::execLogOnAnonymous },
		{ "RequestUserGroupStatus", &USteamProGameServer::execRequestUserGroupStatus },
		{ "SetAdvertiseServerActive", &USteamProGameServer::execSetAdvertiseServerActive },
		{ "SetBotPlayerCount", &USteamProGameServer::execSetBotPlayerCount },
		{ "SetDedicatedServer", &USteamProGameServer::execSetDedicatedServer },
		{ "SetGameData", &USteamProGameServer::execSetGameData },
		{ "SetGameDescription", &USteamProGameServer::execSetGameDescription },
		{ "SetGameTags", &USteamProGameServer::execSetGameTags },
		{ "SetKeyValue", &USteamProGameServer::execSetKeyValue },
		{ "SetMapName", &USteamProGameServer::execSetMapName },
		{ "SetMaxPlayerCount", &USteamProGameServer::execSetMaxPlayerCount },
		{ "SetModDir", &USteamProGameServer::execSetModDir },
		{ "SetPasswordProtected", &USteamProGameServer::execSetPasswordProtected },
		{ "SetProduct", &USteamProGameServer::execSetProduct },
		{ "SetRegion", &USteamProGameServer::execSetRegion },
		{ "SetServerName", &USteamProGameServer::execSetServerName },
		{ "SetSpectatorPort", &USteamProGameServer::execSetSpectatorPort },
		{ "SetSpectatorServerName", &USteamProGameServer::execSetSpectatorServerName },
		{ "UserHasLicenseForApp", &USteamProGameServer::execUserHasLicenseForApp },
		{ "WasRestartRequested", &USteamProGameServer::execWasRestartRequested },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamProGameServer);
UClass* Z_Construct_UClass_USteamProGameServer_NoRegister()
{
	return USteamProGameServer::StaticClass();
}
struct Z_Construct_UClass_USteamProGameServer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamGameServer/SteamProGameServer.h" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GSPolicyResponse_MetaData[] = {
		{ "Category", "SteamCore|GameServer|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GSClientGroupStatus_MetaData[] = {
		{ "Category", "SteamCore|GameServer|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GSValidateAuthTicketResponse_MetaData[] = {
		{ "Category", "SteamCore|GameServer|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GSClientApprove_MetaData[] = {
		{ "Category", "SteamCore|GameServer|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GSClientDeny_MetaData[] = {
		{ "Category", "SteamCore|GameServer|Delegates" },
		{ "ModuleRelativePath", "Public/SteamGameServer/SteamProGameServer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GSPolicyResponse;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GSClientGroupStatus;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GSValidateAuthTicketResponse;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GSClientApprove;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GSClientDeny;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamProGameServer_AssociateWithClan, "AssociateWithClan" }, // 3280660938
		{ &Z_Construct_UFunction_USteamProGameServer_BeginAuthSession, "BeginAuthSession" }, // 2085003850
		{ &Z_Construct_UFunction_USteamProGameServer_BLoggedOn, "BLoggedOn" }, // 1497805775
		{ &Z_Construct_UFunction_USteamProGameServer_BSecure, "BSecure" }, // 2234013219
		{ &Z_Construct_UFunction_USteamProGameServer_BUpdateUserData, "BUpdateUserData" }, // 2306300504
		{ &Z_Construct_UFunction_USteamProGameServer_CancelAuthTicket, "CancelAuthTicket" }, // 1732854106
		{ &Z_Construct_UFunction_USteamProGameServer_ClearAllKeyValues, "ClearAllKeyValues" }, // 3756120921
		{ &Z_Construct_UFunction_USteamProGameServer_ComputeNewPlayerCompatibility, "ComputeNewPlayerCompatibility" }, // 2219642266
		{ &Z_Construct_UFunction_USteamProGameServer_CreateUnauthenticatedUserConnection, "CreateUnauthenticatedUserConnection" }, // 2432082339
		{ &Z_Construct_UFunction_USteamProGameServer_EndAuthSession, "EndAuthSession" }, // 1808779613
		{ &Z_Construct_UFunction_USteamProGameServer_GetAuthSessionTicket, "GetAuthSessionTicket" }, // 983748323
		{ &Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP, "GetServerPublicIP" }, // 1320662575
		{ &Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_Pure, "GetServerPublicIP_Pure" }, // 558730249
		{ &Z_Construct_UFunction_USteamProGameServer_GetServerPublicIP_PureCompact, "GetServerPublicIP_PureCompact" }, // 1297847098
		{ &Z_Construct_UFunction_USteamProGameServer_GetServerSteamID, "GetServerSteamID" }, // 802829382
		{ &Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_Pure, "GetServerSteamID_Pure" }, // 2526468572
		{ &Z_Construct_UFunction_USteamProGameServer_GetServerSteamID_PureCompact, "GetServerSteamID_PureCompact" }, // 4018150186
		{ &Z_Construct_UFunction_USteamProGameServer_GetSteamGameServer, "GetSteamGameServer" }, // 3260054611
		{ &Z_Construct_UFunction_USteamProGameServer_LogOff, "LogOff" }, // 2681064824
		{ &Z_Construct_UFunction_USteamProGameServer_LogOn, "LogOn" }, // 326407707
		{ &Z_Construct_UFunction_USteamProGameServer_LogOnAnonymous, "LogOnAnonymous" }, // 404627341
		{ &Z_Construct_UFunction_USteamProGameServer_RequestUserGroupStatus, "RequestUserGroupStatus" }, // 2255199901
		{ &Z_Construct_UFunction_USteamProGameServer_SetAdvertiseServerActive, "SetAdvertiseServerActive" }, // 3595155536
		{ &Z_Construct_UFunction_USteamProGameServer_SetBotPlayerCount, "SetBotPlayerCount" }, // 1508772090
		{ &Z_Construct_UFunction_USteamProGameServer_SetDedicatedServer, "SetDedicatedServer" }, // 1237955091
		{ &Z_Construct_UFunction_USteamProGameServer_SetGameData, "SetGameData" }, // 1572389112
		{ &Z_Construct_UFunction_USteamProGameServer_SetGameDescription, "SetGameDescription" }, // 1139791868
		{ &Z_Construct_UFunction_USteamProGameServer_SetGameTags, "SetGameTags" }, // 2789020840
		{ &Z_Construct_UFunction_USteamProGameServer_SetKeyValue, "SetKeyValue" }, // 4273782981
		{ &Z_Construct_UFunction_USteamProGameServer_SetMapName, "SetMapName" }, // 2857036015
		{ &Z_Construct_UFunction_USteamProGameServer_SetMaxPlayerCount, "SetMaxPlayerCount" }, // 3578613196
		{ &Z_Construct_UFunction_USteamProGameServer_SetModDir, "SetModDir" }, // 209319048
		{ &Z_Construct_UFunction_USteamProGameServer_SetPasswordProtected, "SetPasswordProtected" }, // 3265512803
		{ &Z_Construct_UFunction_USteamProGameServer_SetProduct, "SetProduct" }, // 679556244
		{ &Z_Construct_UFunction_USteamProGameServer_SetRegion, "SetRegion" }, // 3238147358
		{ &Z_Construct_UFunction_USteamProGameServer_SetServerName, "SetServerName" }, // 1058327108
		{ &Z_Construct_UFunction_USteamProGameServer_SetSpectatorPort, "SetSpectatorPort" }, // 1112333086
		{ &Z_Construct_UFunction_USteamProGameServer_SetSpectatorServerName, "SetSpectatorServerName" }, // 2399838267
		{ &Z_Construct_UFunction_USteamProGameServer_UserHasLicenseForApp, "UserHasLicenseForApp" }, // 3180882565
		{ &Z_Construct_UFunction_USteamProGameServer_WasRestartRequested, "WasRestartRequested" }, // 3973488126
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamProGameServer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProGameServer_Statics::NewProp_GSPolicyResponse = { "GSPolicyResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProGameServer, GSPolicyResponse), Z_Construct_UDelegateFunction_SteamCorePro_OnGSPolicyResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GSPolicyResponse_MetaData), NewProp_GSPolicyResponse_MetaData) }; // 1139280893
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProGameServer_Statics::NewProp_GSClientGroupStatus = { "GSClientGroupStatus", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProGameServer, GSClientGroupStatus), Z_Construct_UDelegateFunction_SteamCorePro_OnGSClientGroupStatus__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GSClientGroupStatus_MetaData), NewProp_GSClientGroupStatus_MetaData) }; // 1968349124
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProGameServer_Statics::NewProp_GSValidateAuthTicketResponse = { "GSValidateAuthTicketResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProGameServer, GSValidateAuthTicketResponse), Z_Construct_UDelegateFunction_SteamCorePro_OnGSValidateAuthTicketResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GSValidateAuthTicketResponse_MetaData), NewProp_GSValidateAuthTicketResponse_MetaData) }; // 877182910
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProGameServer_Statics::NewProp_GSClientApprove = { "GSClientApprove", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProGameServer, GSClientApprove), Z_Construct_UDelegateFunction_SteamCorePro_OnGSClientApprove__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GSClientApprove_MetaData), NewProp_GSClientApprove_MetaData) }; // 4020672440
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProGameServer_Statics::NewProp_GSClientDeny = { "GSClientDeny", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProGameServer, GSClientDeny), Z_Construct_UDelegateFunction_SteamCorePro_OnGSClientDeny__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GSClientDeny_MetaData), NewProp_GSClientDeny_MetaData) }; // 821400722
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamProGameServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProGameServer_Statics::NewProp_GSPolicyResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProGameServer_Statics::NewProp_GSClientGroupStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProGameServer_Statics::NewProp_GSValidateAuthTicketResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProGameServer_Statics::NewProp_GSClientApprove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProGameServer_Statics::NewProp_GSClientDeny,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProGameServer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamProGameServer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProGameServer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamProGameServer_Statics::ClassParams = {
	&USteamProGameServer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamProGameServer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamProGameServer_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProGameServer_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamProGameServer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamProGameServer()
{
	if (!Z_Registration_Info_UClass_USteamProGameServer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamProGameServer.OuterSingleton, Z_Construct_UClass_USteamProGameServer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamProGameServer.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamProGameServer>()
{
	return USteamProGameServer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamProGameServer);
// End Class USteamProGameServer

// Begin Registration
struct Z_CompiledInDeferFile_FID_MiniPlanes_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServer_SteamProGameServer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamProGameServer, USteamProGameServer::StaticClass, TEXT("USteamProGameServer"), &Z_Registration_Info_UClass_USteamProGameServer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamProGameServer), 1200862669U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniPlanes_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServer_SteamProGameServer_h_1810382296(TEXT("/Script/SteamCorePro"),
	Z_CompiledInDeferFile_FID_MiniPlanes_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServer_SteamProGameServer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MiniPlanes_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServer_SteamProGameServer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
