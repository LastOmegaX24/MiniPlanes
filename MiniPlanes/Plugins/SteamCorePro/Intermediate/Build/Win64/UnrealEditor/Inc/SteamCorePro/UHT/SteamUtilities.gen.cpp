// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamCorePro/SteamUtilities.h"
#include "OnlineSubsystemUtils/Classes/FindSessionsCallbackProxy.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "SteamCorePro/Public/SteamCorePro/SteamTypes.h"
#include "SteamCorePro/Public/SteamInventory/SteamInventoryTypes.h"
#include "SteamCorePro/Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h"
#include "SteamCoreShared/Public/SteamCoreSharedTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamUtilities() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_USoundWaveProcedural();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
STEAMCOREPRO_API UClass* Z_Construct_UClass_UServerFilter_NoRegister();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProAsyncAction();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProAsyncActionListenForControllerChange();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProAsyncActionListenForControllerChange_NoRegister();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProVoice();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProVoice_NoRegister();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamUtilities();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamUtilities_NoRegister();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_EFriendListType();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamAccountType();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamAttributeType();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamComparisonOp();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamCoreNetworkingIdentityType();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamCoreProIdentical();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamCoreProValid();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamMessageType();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnControllerChangedCallback__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnHTTPResponse__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSessionUserInviteAcceptedCallback__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSessionUserInviteRecievedCallback__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamMessage__DelegateSignature();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FPublishedFileID();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamGameID();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamItemInstanceID();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamNetworkingIdentity();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamServerAddr();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamSessionSearchSetting();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamSessionSetting();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamTicketHandle();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamUGCHandle();
STEAMCORESHARED_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineFriendSteamCoreBlueprint();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Enum EFriendListType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFriendListType;
static UEnum* EFriendListType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFriendListType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFriendListType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_EFriendListType, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("EFriendListType"));
	}
	return Z_Registration_Info_UEnum_EFriendListType.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<EFriendListType>()
{
	return EFriendListType_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_EFriendListType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Default.Comment", "/** default friends list */" },
		{ "Default.Name", "Default" },
		{ "Default.ToolTip", "default friends list" },
		{ "InGameAndSessionPlayers.Comment", "/** list of players running the same title/game and in a session that has started */" },
		{ "InGameAndSessionPlayers.Name", "InGameAndSessionPlayers" },
		{ "InGameAndSessionPlayers.ToolTip", "list of players running the same title/game and in a session that has started" },
		{ "InGamePlayers.Comment", "/** list of players running the same title/game */" },
		{ "InGamePlayers.Name", "InGamePlayers" },
		{ "InGamePlayers.ToolTip", "list of players running the same title/game" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
		{ "OnlinePlayers.Comment", "/** online players friends list */" },
		{ "OnlinePlayers.Name", "OnlinePlayers" },
		{ "OnlinePlayers.ToolTip", "online players friends list" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Default", (int64)Default },
		{ "OnlinePlayers", (int64)OnlinePlayers },
		{ "InGamePlayers", (int64)InGamePlayers },
		{ "InGameAndSessionPlayers", (int64)InGameAndSessionPlayers },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_EFriendListType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"EFriendListType",
	"EFriendListType",
	Z_Construct_UEnum_SteamCorePro_EFriendListType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_EFriendListType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_EFriendListType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_EFriendListType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_EFriendListType()
{
	if (!Z_Registration_Info_UEnum_EFriendListType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFriendListType.InnerSingleton, Z_Construct_UEnum_SteamCorePro_EFriendListType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFriendListType.InnerSingleton;
}
// End Enum EFriendListType

// Begin Delegate FOnSteamMessage
struct Z_Construct_UDelegateFunction_SteamCorePro_OnSteamMessage__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnSteamMessage_Parms
	{
		ESteamMessageType Type;
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnSteamMessage__DelegateSignature_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnSteamMessage__DelegateSignature_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnSteamMessage_Parms, Type), Z_Construct_UEnum_SteamCorePro_ESteamMessageType, METADATA_PARAMS(0, nullptr) }; // 104588436
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnSteamMessage__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnSteamMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnSteamMessage__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnSteamMessage__DelegateSignature_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnSteamMessage__DelegateSignature_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnSteamMessage__DelegateSignature_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamMessage__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnSteamMessage__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnSteamMessage__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnSteamMessage__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamMessage__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamMessage__DelegateSignature_Statics::_Script_SteamCorePro_eventOnSteamMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamMessage__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnSteamMessage__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnSteamMessage__DelegateSignature_Statics::_Script_SteamCorePro_eventOnSteamMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSteamMessage__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnSteamMessage__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSteamMessage_DelegateWrapper(const FScriptDelegate& OnSteamMessage, ESteamMessageType Type, const FString& Message)
{
	struct _Script_SteamCorePro_eventOnSteamMessage_Parms
	{
		ESteamMessageType Type;
		FString Message;
	};
	_Script_SteamCorePro_eventOnSteamMessage_Parms Parms;
	Parms.Type=Type;
	Parms.Message=Message;
	OnSteamMessage.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnSteamMessage

// Begin Delegate FOnHTTPResponse
struct Z_Construct_UDelegateFunction_SteamCorePro_OnHTTPResponse__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnHTTPResponse_Parms
	{
		FString Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnHTTPResponse__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnHTTPResponse_Parms, Response), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnHTTPResponse__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnHTTPResponse__DelegateSignature_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnHTTPResponse__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnHTTPResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnHTTPResponse__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnHTTPResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnHTTPResponse__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnHTTPResponse__DelegateSignature_Statics::_Script_SteamCorePro_eventOnHTTPResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnHTTPResponse__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnHTTPResponse__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnHTTPResponse__DelegateSignature_Statics::_Script_SteamCorePro_eventOnHTTPResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnHTTPResponse__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnHTTPResponse__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHTTPResponse_DelegateWrapper(const FScriptDelegate& OnHTTPResponse, const FString& Response)
{
	struct _Script_SteamCorePro_eventOnHTTPResponse_Parms
	{
		FString Response;
	};
	_Script_SteamCorePro_eventOnHTTPResponse_Parms Parms;
	Parms.Response=Response;
	OnHTTPResponse.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnHTTPResponse

// Begin Delegate FOnControllerChangedCallback
struct Z_Construct_UDelegateFunction_SteamCorePro_OnControllerChangedCallback__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnControllerChangedCallback_Parms
	{
		bool bIsConnected;
		int32 UserId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsConnected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsConnected;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_SteamCorePro_OnControllerChangedCallback__DelegateSignature_Statics::NewProp_bIsConnected_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnControllerChangedCallback_Parms*)Obj)->bIsConnected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnControllerChangedCallback__DelegateSignature_Statics::NewProp_bIsConnected = { "bIsConnected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnControllerChangedCallback_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnControllerChangedCallback__DelegateSignature_Statics::NewProp_bIsConnected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnControllerChangedCallback__DelegateSignature_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnControllerChangedCallback_Parms, UserId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnControllerChangedCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnControllerChangedCallback__DelegateSignature_Statics::NewProp_bIsConnected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnControllerChangedCallback__DelegateSignature_Statics::NewProp_UserId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnControllerChangedCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnControllerChangedCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnControllerChangedCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnControllerChangedCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnControllerChangedCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnControllerChangedCallback__DelegateSignature_Statics::_Script_SteamCorePro_eventOnControllerChangedCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnControllerChangedCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnControllerChangedCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnControllerChangedCallback__DelegateSignature_Statics::_Script_SteamCorePro_eventOnControllerChangedCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnControllerChangedCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnControllerChangedCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnControllerChangedCallback_DelegateWrapper(const FMulticastScriptDelegate& OnControllerChangedCallback, bool bIsConnected, int32 UserId)
{
	struct _Script_SteamCorePro_eventOnControllerChangedCallback_Parms
	{
		bool bIsConnected;
		int32 UserId;
	};
	_Script_SteamCorePro_eventOnControllerChangedCallback_Parms Parms;
	Parms.bIsConnected=bIsConnected ? true : false;
	Parms.UserId=UserId;
	OnControllerChangedCallback.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnControllerChangedCallback

// Begin Delegate FOnSessionUserInviteAcceptedCallback
struct Z_Construct_UDelegateFunction_SteamCorePro_OnSessionUserInviteAcceptedCallback__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnSessionUserInviteAcceptedCallback_Parms
	{
		bool bWasSuccessful;
		int32 LocalPlayerNum;
		FString InvitedBy;
		FBlueprintSessionResult Session;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Session_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocalPlayerNum;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InvitedBy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Session;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_SteamCorePro_OnSessionUserInviteAcceptedCallback__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnSessionUserInviteAcceptedCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnSessionUserInviteAcceptedCallback__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnSessionUserInviteAcceptedCallback_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnSessionUserInviteAcceptedCallback__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnSessionUserInviteAcceptedCallback__DelegateSignature_Statics::NewProp_LocalPlayerNum = { "LocalPlayerNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnSessionUserInviteAcceptedCallback_Parms, LocalPlayerNum), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnSessionUserInviteAcceptedCallback__DelegateSignature_Statics::NewProp_InvitedBy = { "InvitedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnSessionUserInviteAcceptedCallback_Parms, InvitedBy), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnSessionUserInviteAcceptedCallback__DelegateSignature_Statics::NewProp_Session = { "Session", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnSessionUserInviteAcceptedCallback_Parms, Session), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Session_MetaData), NewProp_Session_MetaData) }; // 1307808723
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnSessionUserInviteAcceptedCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnSessionUserInviteAcceptedCallback__DelegateSignature_Statics::NewProp_bWasSuccessful,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnSessionUserInviteAcceptedCallback__DelegateSignature_Statics::NewProp_LocalPlayerNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnSessionUserInviteAcceptedCallback__DelegateSignature_Statics::NewProp_InvitedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnSessionUserInviteAcceptedCallback__DelegateSignature_Statics::NewProp_Session,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSessionUserInviteAcceptedCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnSessionUserInviteAcceptedCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnSessionUserInviteAcceptedCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnSessionUserInviteAcceptedCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSessionUserInviteAcceptedCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnSessionUserInviteAcceptedCallback__DelegateSignature_Statics::_Script_SteamCorePro_eventOnSessionUserInviteAcceptedCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSessionUserInviteAcceptedCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnSessionUserInviteAcceptedCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnSessionUserInviteAcceptedCallback__DelegateSignature_Statics::_Script_SteamCorePro_eventOnSessionUserInviteAcceptedCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSessionUserInviteAcceptedCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnSessionUserInviteAcceptedCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSessionUserInviteAcceptedCallback_DelegateWrapper(const FScriptDelegate& OnSessionUserInviteAcceptedCallback, bool bWasSuccessful, int32 LocalPlayerNum, const FString& InvitedBy, FBlueprintSessionResult const& Session)
{
	struct _Script_SteamCorePro_eventOnSessionUserInviteAcceptedCallback_Parms
	{
		bool bWasSuccessful;
		int32 LocalPlayerNum;
		FString InvitedBy;
		FBlueprintSessionResult Session;
	};
	_Script_SteamCorePro_eventOnSessionUserInviteAcceptedCallback_Parms Parms;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	Parms.LocalPlayerNum=LocalPlayerNum;
	Parms.InvitedBy=InvitedBy;
	Parms.Session=Session;
	OnSessionUserInviteAcceptedCallback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnSessionUserInviteAcceptedCallback

// Begin Delegate FOnSessionUserInviteRecievedCallback
struct Z_Construct_UDelegateFunction_SteamCorePro_OnSessionUserInviteRecievedCallback__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnSessionUserInviteRecievedCallback_Parms
	{
		FBlueprintSessionResult InviteResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InviteResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InviteResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnSessionUserInviteRecievedCallback__DelegateSignature_Statics::NewProp_InviteResult = { "InviteResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnSessionUserInviteRecievedCallback_Parms, InviteResult), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InviteResult_MetaData), NewProp_InviteResult_MetaData) }; // 1307808723
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnSessionUserInviteRecievedCallback__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnSessionUserInviteRecievedCallback__DelegateSignature_Statics::NewProp_InviteResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSessionUserInviteRecievedCallback__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnSessionUserInviteRecievedCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnSessionUserInviteRecievedCallback__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnSessionUserInviteRecievedCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSessionUserInviteRecievedCallback__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnSessionUserInviteRecievedCallback__DelegateSignature_Statics::_Script_SteamCorePro_eventOnSessionUserInviteRecievedCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnSessionUserInviteRecievedCallback__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnSessionUserInviteRecievedCallback__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnSessionUserInviteRecievedCallback__DelegateSignature_Statics::_Script_SteamCorePro_eventOnSessionUserInviteRecievedCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnSessionUserInviteRecievedCallback__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnSessionUserInviteRecievedCallback__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnSessionUserInviteRecievedCallback_DelegateWrapper(const FScriptDelegate& OnSessionUserInviteRecievedCallback, FBlueprintSessionResult const& InviteResult)
{
	struct _Script_SteamCorePro_eventOnSessionUserInviteRecievedCallback_Parms
	{
		FBlueprintSessionResult InviteResult;
	};
	_Script_SteamCorePro_eventOnSessionUserInviteRecievedCallback_Parms Parms;
	Parms.InviteResult=InviteResult;
	OnSessionUserInviteRecievedCallback.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnSessionUserInviteRecievedCallback

// Begin Class USteamCoreProVoice Function AddAudioBuffer
struct Z_Construct_UFunction_USteamCoreProVoice_AddAudioBuffer_Statics
{
	struct SteamCoreProVoice_eventAddAudioBuffer_Parms
	{
		TArray<uint8> Buffer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Buffer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Buffer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamCoreProVoice_AddAudioBuffer_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreProVoice_AddAudioBuffer_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProVoice_eventAddAudioBuffer_Parms, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Buffer_MetaData), NewProp_Buffer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProVoice_AddAudioBuffer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProVoice_AddAudioBuffer_Statics::NewProp_Buffer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProVoice_AddAudioBuffer_Statics::NewProp_Buffer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProVoice_AddAudioBuffer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProVoice_AddAudioBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProVoice, nullptr, "AddAudioBuffer", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProVoice_AddAudioBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProVoice_AddAudioBuffer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProVoice_AddAudioBuffer_Statics::SteamCoreProVoice_eventAddAudioBuffer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProVoice_AddAudioBuffer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProVoice_AddAudioBuffer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProVoice_AddAudioBuffer_Statics::SteamCoreProVoice_eventAddAudioBuffer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProVoice_AddAudioBuffer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProVoice_AddAudioBuffer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProVoice::execAddAudioBuffer)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Buffer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddAudioBuffer(Z_Param_Out_Buffer);
	P_NATIVE_END;
}
// End Class USteamCoreProVoice Function AddAudioBuffer

// Begin Class USteamCoreProVoice Function ConstructSteamCoreProVoice
struct Z_Construct_UFunction_USteamCoreProVoice_ConstructSteamCoreProVoice_Statics
{
	struct SteamCoreProVoice_eventConstructSteamCoreProVoice_Parms
	{
		int32 AudioSampleRate;
		USteamCoreProVoice* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "CPP_Default_AudioSampleRate", "24000" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AudioSampleRate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreProVoice_ConstructSteamCoreProVoice_Statics::NewProp_AudioSampleRate = { "AudioSampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProVoice_eventConstructSteamCoreProVoice_Parms, AudioSampleRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProVoice_ConstructSteamCoreProVoice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProVoice_eventConstructSteamCoreProVoice_Parms, ReturnValue), Z_Construct_UClass_USteamCoreProVoice_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProVoice_ConstructSteamCoreProVoice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProVoice_ConstructSteamCoreProVoice_Statics::NewProp_AudioSampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProVoice_ConstructSteamCoreProVoice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProVoice_ConstructSteamCoreProVoice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProVoice_ConstructSteamCoreProVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProVoice, nullptr, "ConstructSteamCoreProVoice", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProVoice_ConstructSteamCoreProVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProVoice_ConstructSteamCoreProVoice_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProVoice_ConstructSteamCoreProVoice_Statics::SteamCoreProVoice_eventConstructSteamCoreProVoice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProVoice_ConstructSteamCoreProVoice_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProVoice_ConstructSteamCoreProVoice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProVoice_ConstructSteamCoreProVoice_Statics::SteamCoreProVoice_eventConstructSteamCoreProVoice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProVoice_ConstructSteamCoreProVoice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProVoice_ConstructSteamCoreProVoice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProVoice::execConstructSteamCoreProVoice)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AudioSampleRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreProVoice**)Z_Param__Result=USteamCoreProVoice::ConstructSteamCoreProVoice(Z_Param_AudioSampleRate);
	P_NATIVE_END;
}
// End Class USteamCoreProVoice Function ConstructSteamCoreProVoice

// Begin Class USteamCoreProVoice Function DestroySteamCoreProVoice
struct Z_Construct_UFunction_USteamCoreProVoice_DestroySteamCoreProVoice_Statics
{
	struct SteamCoreProVoice_eventDestroySteamCoreProVoice_Parms
	{
		USteamCoreProVoice* OBJ;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OBJ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProVoice_DestroySteamCoreProVoice_Statics::NewProp_OBJ = { "OBJ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProVoice_eventDestroySteamCoreProVoice_Parms, OBJ), Z_Construct_UClass_USteamCoreProVoice_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProVoice_DestroySteamCoreProVoice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProVoice_DestroySteamCoreProVoice_Statics::NewProp_OBJ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProVoice_DestroySteamCoreProVoice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProVoice_DestroySteamCoreProVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProVoice, nullptr, "DestroySteamCoreProVoice", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProVoice_DestroySteamCoreProVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProVoice_DestroySteamCoreProVoice_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProVoice_DestroySteamCoreProVoice_Statics::SteamCoreProVoice_eventDestroySteamCoreProVoice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProVoice_DestroySteamCoreProVoice_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProVoice_DestroySteamCoreProVoice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProVoice_DestroySteamCoreProVoice_Statics::SteamCoreProVoice_eventDestroySteamCoreProVoice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProVoice_DestroySteamCoreProVoice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProVoice_DestroySteamCoreProVoice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProVoice::execDestroySteamCoreProVoice)
{
	P_GET_OBJECT(USteamCoreProVoice,Z_Param_OBJ);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamCoreProVoice::DestroySteamCoreProVoice(Z_Param_OBJ);
	P_NATIVE_END;
}
// End Class USteamCoreProVoice Function DestroySteamCoreProVoice

// Begin Class USteamCoreProVoice
void USteamCoreProVoice::StaticRegisterNativesUSteamCoreProVoice()
{
	UClass* Class = USteamCoreProVoice::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddAudioBuffer", &USteamCoreProVoice::execAddAudioBuffer },
		{ "ConstructSteamCoreProVoice", &USteamCoreProVoice::execConstructSteamCoreProVoice },
		{ "DestroySteamCoreProVoice", &USteamCoreProVoice::execDestroySteamCoreProVoice },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreProVoice);
UClass* Z_Construct_UClass_USteamCoreProVoice_NoRegister()
{
	return USteamCoreProVoice::StaticClass();
}
struct Z_Construct_UClass_USteamCoreProVoice_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "SteamCorePro/SteamUtilities.h" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreProVoice_AddAudioBuffer, "AddAudioBuffer" }, // 2243050027
		{ &Z_Construct_UFunction_USteamCoreProVoice_ConstructSteamCoreProVoice, "ConstructSteamCoreProVoice" }, // 2147993594
		{ &Z_Construct_UFunction_USteamCoreProVoice_DestroySteamCoreProVoice, "DestroySteamCoreProVoice" }, // 2015647233
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreProVoice>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USteamCoreProVoice_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USoundWaveProcedural,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProVoice_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreProVoice_Statics::ClassParams = {
	&USteamCoreProVoice::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProVoice_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreProVoice_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCoreProVoice()
{
	if (!Z_Registration_Info_UClass_USteamCoreProVoice.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreProVoice.OuterSingleton, Z_Construct_UClass_USteamCoreProVoice_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreProVoice.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamCoreProVoice>()
{
	return USteamCoreProVoice::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreProVoice);
USteamCoreProVoice::~USteamCoreProVoice() {}
// End Class USteamCoreProVoice

// Begin Class USteamCoreProAsyncActionListenForControllerChange Function HandleCallback
struct Z_Construct_UFunction_USteamCoreProAsyncActionListenForControllerChange_HandleCallback_Statics
{
	struct SteamCoreProAsyncActionListenForControllerChange_eventHandleCallback_Parms
	{
		bool bIsConnected;
		int32 PlatformUserId;
		int32 UserId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsConnected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsConnected;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlatformUserId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamCoreProAsyncActionListenForControllerChange_HandleCallback_Statics::NewProp_bIsConnected_SetBit(void* Obj)
{
	((SteamCoreProAsyncActionListenForControllerChange_eventHandleCallback_Parms*)Obj)->bIsConnected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProAsyncActionListenForControllerChange_HandleCallback_Statics::NewProp_bIsConnected = { "bIsConnected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProAsyncActionListenForControllerChange_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreProAsyncActionListenForControllerChange_HandleCallback_Statics::NewProp_bIsConnected_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreProAsyncActionListenForControllerChange_HandleCallback_Statics::NewProp_PlatformUserId = { "PlatformUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProAsyncActionListenForControllerChange_eventHandleCallback_Parms, PlatformUserId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreProAsyncActionListenForControllerChange_HandleCallback_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProAsyncActionListenForControllerChange_eventHandleCallback_Parms, UserId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProAsyncActionListenForControllerChange_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProAsyncActionListenForControllerChange_HandleCallback_Statics::NewProp_bIsConnected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProAsyncActionListenForControllerChange_HandleCallback_Statics::NewProp_PlatformUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProAsyncActionListenForControllerChange_HandleCallback_Statics::NewProp_UserId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProAsyncActionListenForControllerChange_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProAsyncActionListenForControllerChange_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProAsyncActionListenForControllerChange, nullptr, "HandleCallback", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProAsyncActionListenForControllerChange_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProAsyncActionListenForControllerChange_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProAsyncActionListenForControllerChange_HandleCallback_Statics::SteamCoreProAsyncActionListenForControllerChange_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProAsyncActionListenForControllerChange_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProAsyncActionListenForControllerChange_HandleCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProAsyncActionListenForControllerChange_HandleCallback_Statics::SteamCoreProAsyncActionListenForControllerChange_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProAsyncActionListenForControllerChange_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProAsyncActionListenForControllerChange_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProAsyncActionListenForControllerChange::execHandleCallback)
{
	P_GET_UBOOL(Z_Param_bIsConnected);
	P_GET_PROPERTY(FIntProperty,Z_Param_PlatformUserId);
	P_GET_PROPERTY(FIntProperty,Z_Param_UserId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_bIsConnected,Z_Param_PlatformUserId,Z_Param_UserId);
	P_NATIVE_END;
}
// End Class USteamCoreProAsyncActionListenForControllerChange Function HandleCallback

// Begin Class USteamCoreProAsyncActionListenForControllerChange Function ListenForControllerChange
struct Z_Construct_UFunction_USteamCoreProAsyncActionListenForControllerChange_ListenForControllerChange_Statics
{
	struct SteamCoreProAsyncActionListenForControllerChange_eventListenForControllerChange_Parms
	{
		UObject* WorldContextObject;
		USteamCoreProAsyncActionListenForControllerChange* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProAsyncActionListenForControllerChange_ListenForControllerChange_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProAsyncActionListenForControllerChange_eventListenForControllerChange_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProAsyncActionListenForControllerChange_ListenForControllerChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProAsyncActionListenForControllerChange_eventListenForControllerChange_Parms, ReturnValue), Z_Construct_UClass_USteamCoreProAsyncActionListenForControllerChange_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProAsyncActionListenForControllerChange_ListenForControllerChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProAsyncActionListenForControllerChange_ListenForControllerChange_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProAsyncActionListenForControllerChange_ListenForControllerChange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProAsyncActionListenForControllerChange_ListenForControllerChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProAsyncActionListenForControllerChange_ListenForControllerChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProAsyncActionListenForControllerChange, nullptr, "ListenForControllerChange", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProAsyncActionListenForControllerChange_ListenForControllerChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProAsyncActionListenForControllerChange_ListenForControllerChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProAsyncActionListenForControllerChange_ListenForControllerChange_Statics::SteamCoreProAsyncActionListenForControllerChange_eventListenForControllerChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProAsyncActionListenForControllerChange_ListenForControllerChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProAsyncActionListenForControllerChange_ListenForControllerChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProAsyncActionListenForControllerChange_ListenForControllerChange_Statics::SteamCoreProAsyncActionListenForControllerChange_eventListenForControllerChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProAsyncActionListenForControllerChange_ListenForControllerChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProAsyncActionListenForControllerChange_ListenForControllerChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProAsyncActionListenForControllerChange::execListenForControllerChange)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreProAsyncActionListenForControllerChange**)Z_Param__Result=USteamCoreProAsyncActionListenForControllerChange::ListenForControllerChange(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class USteamCoreProAsyncActionListenForControllerChange Function ListenForControllerChange

// Begin Class USteamCoreProAsyncActionListenForControllerChange
void USteamCoreProAsyncActionListenForControllerChange::StaticRegisterNativesUSteamCoreProAsyncActionListenForControllerChange()
{
	UClass* Class = USteamCoreProAsyncActionListenForControllerChange::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleCallback", &USteamCoreProAsyncActionListenForControllerChange::execHandleCallback },
		{ "ListenForControllerChange", &USteamCoreProAsyncActionListenForControllerChange::execListenForControllerChange },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreProAsyncActionListenForControllerChange);
UClass* Z_Construct_UClass_USteamCoreProAsyncActionListenForControllerChange_NoRegister()
{
	return USteamCoreProAsyncActionListenForControllerChange::StaticClass();
}
struct Z_Construct_UClass_USteamCoreProAsyncActionListenForControllerChange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreProAsyncActionListenForControllerChange\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamCorePro/SteamUtilities.h" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreProAsyncActionListenForControllerChange\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnControllerChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnControllerChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreProAsyncActionListenForControllerChange_HandleCallback, "HandleCallback" }, // 2725486862
		{ &Z_Construct_UFunction_USteamCoreProAsyncActionListenForControllerChange_ListenForControllerChange, "ListenForControllerChange" }, // 3961663530
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreProAsyncActionListenForControllerChange>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreProAsyncActionListenForControllerChange_Statics::NewProp_OnControllerChanged = { "OnControllerChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreProAsyncActionListenForControllerChange, OnControllerChanged), Z_Construct_UDelegateFunction_SteamCorePro_OnControllerChangedCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnControllerChanged_MetaData), NewProp_OnControllerChanged_MetaData) }; // 841268217
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreProAsyncActionListenForControllerChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProAsyncActionListenForControllerChange_Statics::NewProp_OnControllerChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProAsyncActionListenForControllerChange_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamCoreProAsyncActionListenForControllerChange_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreProAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProAsyncActionListenForControllerChange_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreProAsyncActionListenForControllerChange_Statics::ClassParams = {
	&USteamCoreProAsyncActionListenForControllerChange::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreProAsyncActionListenForControllerChange_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProAsyncActionListenForControllerChange_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProAsyncActionListenForControllerChange_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreProAsyncActionListenForControllerChange_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCoreProAsyncActionListenForControllerChange()
{
	if (!Z_Registration_Info_UClass_USteamCoreProAsyncActionListenForControllerChange.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreProAsyncActionListenForControllerChange.OuterSingleton, Z_Construct_UClass_USteamCoreProAsyncActionListenForControllerChange_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreProAsyncActionListenForControllerChange.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamCoreProAsyncActionListenForControllerChange>()
{
	return USteamCoreProAsyncActionListenForControllerChange::StaticClass();
}
USteamCoreProAsyncActionListenForControllerChange::USteamCoreProAsyncActionListenForControllerChange(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreProAsyncActionListenForControllerChange);
USteamCoreProAsyncActionListenForControllerChange::~USteamCoreProAsyncActionListenForControllerChange() {}
// End Class USteamCoreProAsyncActionListenForControllerChange

// Begin Enum ESteamCoreProValid
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamCoreProValid;
static UEnum* ESteamCoreProValid_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreProValid.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamCoreProValid.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamCoreProValid, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamCoreProValid"));
	}
	return Z_Registration_Info_UEnum_ESteamCoreProValid.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamCoreProValid>()
{
	return ESteamCoreProValid_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamCoreProValid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
		{ "NotValid.Name", "ESteamCoreProValid::NotValid" },
		{ "Valid.Name", "ESteamCoreProValid::Valid" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamCoreProValid::Valid", (int64)ESteamCoreProValid::Valid },
		{ "ESteamCoreProValid::NotValid", (int64)ESteamCoreProValid::NotValid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamCoreProValid_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamCoreProValid",
	"ESteamCoreProValid",
	Z_Construct_UEnum_SteamCorePro_ESteamCoreProValid_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamCoreProValid_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamCoreProValid_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamCoreProValid_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamCoreProValid()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreProValid.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamCoreProValid.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamCoreProValid_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamCoreProValid.InnerSingleton;
}
// End Enum ESteamCoreProValid

// Begin Enum ESteamCoreProIdentical
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamCoreProIdentical;
static UEnum* ESteamCoreProIdentical_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreProIdentical.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamCoreProIdentical.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamCoreProIdentical, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamCoreProIdentical"));
	}
	return Z_Registration_Info_UEnum_ESteamCoreProIdentical.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamCoreProIdentical>()
{
	return ESteamCoreProIdentical_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamCoreProIdentical_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Identical.Name", "ESteamCoreProIdentical::Identical" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
		{ "NotIdentical.Name", "ESteamCoreProIdentical::NotIdentical" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamCoreProIdentical::Identical", (int64)ESteamCoreProIdentical::Identical },
		{ "ESteamCoreProIdentical::NotIdentical", (int64)ESteamCoreProIdentical::NotIdentical },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamCoreProIdentical_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamCoreProIdentical",
	"ESteamCoreProIdentical",
	Z_Construct_UEnum_SteamCorePro_ESteamCoreProIdentical_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamCoreProIdentical_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamCoreProIdentical_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamCoreProIdentical_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamCoreProIdentical()
{
	if (!Z_Registration_Info_UEnum_ESteamCoreProIdentical.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamCoreProIdentical.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamCoreProIdentical_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamCoreProIdentical.InnerSingleton;
}
// End Enum ESteamCoreProIdentical

// Begin Class USteamUtilities Function BP_BytesToString
struct Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics
{
	struct SteamUtilities_eventBP_BytesToString_Parms
	{
		TArray<uint8> Array;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Bytes to String" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Array_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Array;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventBP_BytesToString_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventBP_BytesToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::NewProp_Array_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::NewProp_Array,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "BP_BytesToString", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::SteamUtilities_eventBP_BytesToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::SteamUtilities_eventBP_BytesToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_BP_BytesToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_BP_BytesToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execBP_BytesToString)
{
	P_GET_TARRAY(uint8,Z_Param_Array);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamUtilities::BP_BytesToString(Z_Param_Array);
	P_NATIVE_END;
}
// End Class USteamUtilities Function BP_BytesToString

// Begin Class USteamUtilities Function BP_StringToBytes
struct Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics
{
	struct SteamUtilities_eventBP_StringToBytes_Parms
	{
		FString String;
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "String to Bytes" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventBP_StringToBytes_Parms, String), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventBP_StringToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::NewProp_String,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "BP_StringToBytes", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::SteamUtilities_eventBP_StringToBytes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::SteamUtilities_eventBP_StringToBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_BP_StringToBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_BP_StringToBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execBP_StringToBytes)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_String);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=USteamUtilities::BP_StringToBytes(Z_Param_String);
	P_NATIVE_END;
}
// End Class USteamUtilities Function BP_StringToBytes

// Begin Class USteamUtilities Function BreakInventoryUpdateHandle
struct Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics
{
	struct SteamUtilities_eventBreakInventoryUpdateHandle_Parms
	{
		FSteamInventoryUpdateHandle Handle;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
		{ "NativeBreakFunc", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventBreakInventoryUpdateHandle_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1389306764
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventBreakInventoryUpdateHandle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "BreakInventoryUpdateHandle", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::SteamUtilities_eventBreakInventoryUpdateHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::SteamUtilities_eventBreakInventoryUpdateHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execBreakInventoryUpdateHandle)
{
	P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamUtilities::BreakInventoryUpdateHandle(Z_Param_Handle);
	P_NATIVE_END;
}
// End Class USteamUtilities Function BreakInventoryUpdateHandle

// Begin Class USteamUtilities Function BreakPublishedFileID
struct Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics
{
	struct SteamUtilities_eventBreakPublishedFileID_Parms
	{
		FPublishedFileID FileID;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
		{ "NativeBreakFunc", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FileID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::NewProp_FileID = { "FileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventBreakPublishedFileID_Parms, FileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 3569413351
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventBreakPublishedFileID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::NewProp_FileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "BreakPublishedFileID", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::SteamUtilities_eventBreakPublishedFileID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::SteamUtilities_eventBreakPublishedFileID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execBreakPublishedFileID)
{
	P_GET_STRUCT(FPublishedFileID,Z_Param_FileID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamUtilities::BreakPublishedFileID(Z_Param_FileID);
	P_NATIVE_END;
}
// End Class USteamUtilities Function BreakPublishedFileID

// Begin Class USteamUtilities Function BreakSteamGameID
struct Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics
{
	struct SteamUtilities_eventBreakSteamGameID_Parms
	{
		FSteamGameID SteamID;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
		{ "NativeBreakFunc", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventBreakSteamGameID_Parms, SteamID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(0, nullptr) }; // 1935638068
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventBreakSteamGameID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "BreakSteamGameID", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::SteamUtilities_eventBreakSteamGameID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::SteamUtilities_eventBreakSteamGameID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_BreakSteamGameID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execBreakSteamGameID)
{
	P_GET_STRUCT(FSteamGameID,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamUtilities::BreakSteamGameID(Z_Param_SteamID);
	P_NATIVE_END;
}
// End Class USteamUtilities Function BreakSteamGameID

// Begin Class USteamUtilities Function BreakSteamID
struct Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics
{
	struct SteamUtilities_eventBreakSteamID_Parms
	{
		FSteamID SteamID;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
		{ "NativeBreakFunc", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventBreakSteamID_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 664632778
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventBreakSteamID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "BreakSteamID", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::SteamUtilities_eventBreakSteamID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::SteamUtilities_eventBreakSteamID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_BreakSteamID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execBreakSteamID)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamUtilities::BreakSteamID(Z_Param_SteamID);
	P_NATIVE_END;
}
// End Class USteamUtilities Function BreakSteamID

// Begin Class USteamUtilities Function BreakSteamItemInstanceID
struct Z_Construct_UFunction_USteamUtilities_BreakSteamItemInstanceID_Statics
{
	struct SteamUtilities_eventBreakSteamItemInstanceID_Parms
	{
		FSteamItemInstanceID SteamItemInstanceID;
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
		{ "NativeBreakFunc", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamItemInstanceID;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_BreakSteamItemInstanceID_Statics::NewProp_SteamItemInstanceID = { "SteamItemInstanceID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventBreakSteamItemInstanceID_Parms, SteamItemInstanceID), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 2322748807
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USteamUtilities_BreakSteamItemInstanceID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventBreakSteamItemInstanceID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_BreakSteamItemInstanceID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakSteamItemInstanceID_Statics::NewProp_SteamItemInstanceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakSteamItemInstanceID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakSteamItemInstanceID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_BreakSteamItemInstanceID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "BreakSteamItemInstanceID", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_BreakSteamItemInstanceID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakSteamItemInstanceID_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_BreakSteamItemInstanceID_Statics::SteamUtilities_eventBreakSteamItemInstanceID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakSteamItemInstanceID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_BreakSteamItemInstanceID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_BreakSteamItemInstanceID_Statics::SteamUtilities_eventBreakSteamItemInstanceID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_BreakSteamItemInstanceID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_BreakSteamItemInstanceID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execBreakSteamItemInstanceID)
{
	P_GET_STRUCT(FSteamItemInstanceID,Z_Param_SteamItemInstanceID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=USteamUtilities::BreakSteamItemInstanceID(Z_Param_SteamItemInstanceID);
	P_NATIVE_END;
}
// End Class USteamUtilities Function BreakSteamItemInstanceID

// Begin Class USteamUtilities Function BreakTicketHandle
struct Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics
{
	struct SteamUtilities_eventBreakTicketHandle_Parms
	{
		FSteamTicketHandle Handle;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
		{ "NativeBreakFunc", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventBreakTicketHandle_Parms, Handle), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(0, nullptr) }; // 2637768704
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventBreakTicketHandle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "BreakTicketHandle", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::SteamUtilities_eventBreakTicketHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::SteamUtilities_eventBreakTicketHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_BreakTicketHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execBreakTicketHandle)
{
	P_GET_STRUCT(FSteamTicketHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamUtilities::BreakTicketHandle(Z_Param_Handle);
	P_NATIVE_END;
}
// End Class USteamUtilities Function BreakTicketHandle

// Begin Class USteamUtilities Function BreakUGCHandle
struct Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics
{
	struct SteamUtilities_eventBreakUGCHandle_Parms
	{
		FSteamUGCHandle Handle;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
		{ "NativeBreakFunc", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventBreakUGCHandle_Parms, Handle), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(0, nullptr) }; // 3978973746
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventBreakUGCHandle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "BreakUGCHandle", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::SteamUtilities_eventBreakUGCHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::SteamUtilities_eventBreakUGCHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_BreakUGCHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execBreakUGCHandle)
{
	P_GET_STRUCT(FSteamUGCHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamUtilities::BreakUGCHandle(Z_Param_Handle);
	P_NATIVE_END;
}
// End Class USteamUtilities Function BreakUGCHandle

// Begin Class USteamUtilities Function ConstructServerFilter
struct Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics
{
	struct SteamUtilities_eventConstructServerFilter_Parms
	{
		UObject* WorldContextObject;
		UServerFilter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventConstructServerFilter_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventConstructServerFilter_Parms, ReturnValue), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "ConstructServerFilter", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::SteamUtilities_eventConstructServerFilter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::SteamUtilities_eventConstructServerFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_ConstructServerFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execConstructServerFilter)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UServerFilter**)Z_Param__Result=USteamUtilities::ConstructServerFilter(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class USteamUtilities Function ConstructServerFilter

// Begin Class USteamUtilities Function EncryptString
struct Z_Construct_UFunction_USteamUtilities_EncryptString_Statics
{
	struct SteamUtilities_eventEncryptString_Parms
	{
		FString String;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns a hashed/encrypted version of the string\n" },
#endif
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns a hashed/encrypted version of the string" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventEncryptString_Parms, String), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventEncryptString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::NewProp_String,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "EncryptString", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::SteamUtilities_eventEncryptString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::SteamUtilities_eventEncryptString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_EncryptString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_EncryptString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execEncryptString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_String);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamUtilities::EncryptString(Z_Param_String);
	P_NATIVE_END;
}
// End Class USteamUtilities Function EncryptString

// Begin Class USteamUtilities Function Equal
struct Z_Construct_UFunction_USteamUtilities_Equal_Statics
{
	struct SteamUtilities_eventEqual_Parms
	{
		FSteamID A;
		FSteamID B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "CompactNodeTitle", "==" },
		{ "Keywords", "equal == identical" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_Equal_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventEqual_Parms, A), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 664632778
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_Equal_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventEqual_Parms, B), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 664632778
void Z_Construct_UFunction_USteamUtilities_Equal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventEqual_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_Equal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventEqual_Parms), &Z_Construct_UFunction_USteamUtilities_Equal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_Equal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_Equal_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_Equal_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_Equal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_Equal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_Equal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "Equal", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_Equal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_Equal_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_Equal_Statics::SteamUtilities_eventEqual_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_Equal_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_Equal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_Equal_Statics::SteamUtilities_eventEqual_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_Equal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_Equal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execEqual)
{
	P_GET_STRUCT(FSteamID,Z_Param_A);
	P_GET_STRUCT(FSteamID,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::Equal(Z_Param_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class USteamUtilities Function Equal

// Begin Class USteamUtilities Function Equal_Exec
struct Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics
{
	struct SteamUtilities_eventEqual_Exec_Parms
	{
		FSteamID A;
		FSteamID b;
		ESteamCoreProIdentical Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "Keywords", "equal == identical" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_b_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_b;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventEqual_Exec_Parms, A), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 664632778
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_b = { "b", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventEqual_Exec_Parms, b), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_b_MetaData), NewProp_b_MetaData) }; // 664632778
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventEqual_Exec_Parms, Result), Z_Construct_UEnum_SteamCorePro_ESteamCoreProIdentical, METADATA_PARAMS(0, nullptr) }; // 1773089156
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_b,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "Equal_Exec", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::SteamUtilities_eventEqual_Exec_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::SteamUtilities_eventEqual_Exec_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_Equal_Exec()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execEqual_Exec)
{
	P_GET_STRUCT(FSteamID,Z_Param_A);
	P_GET_STRUCT(FSteamID,Z_Param_b);
	P_GET_ENUM_REF(ESteamCoreProIdentical,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamUtilities::Equal_Exec(Z_Param_A,Z_Param_b,(ESteamCoreProIdentical&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class USteamUtilities Function Equal_Exec

// Begin Class USteamUtilities Function FromUnixTimestamp
struct Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics
{
	struct SteamUtilities_eventFromUnixTimestamp_Parms
	{
		FString Timestamp;
		FDateTime ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Timestamp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventFromUnixTimestamp_Parms, Timestamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Timestamp_MetaData), NewProp_Timestamp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventFromUnixTimestamp_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::NewProp_Timestamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "FromUnixTimestamp", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::SteamUtilities_eventFromUnixTimestamp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::SteamUtilities_eventFromUnixTimestamp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execFromUnixTimestamp)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Timestamp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDateTime*)Z_Param__Result=USteamUtilities::FromUnixTimestamp(Z_Param_Timestamp);
	P_NATIVE_END;
}
// End Class USteamUtilities Function FromUnixTimestamp

// Begin Class USteamUtilities Function GetAccountType
struct Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics
{
	struct SteamUtilities_eventGetAccountType_Parms
	{
		FSteamID SteamID;
		ESteamAccountType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventGetAccountType_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 664632778
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventGetAccountType_Parms, ReturnValue), Z_Construct_UEnum_SteamCorePro_ESteamAccountType, METADATA_PARAMS(0, nullptr) }; // 2652210664
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "GetAccountType", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::SteamUtilities_eventGetAccountType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::SteamUtilities_eventGetAccountType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_GetAccountType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execGetAccountType)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamAccountType*)Z_Param__Result=USteamUtilities::GetAccountType(Z_Param_SteamID);
	P_NATIVE_END;
}
// End Class USteamUtilities Function GetAccountType

// Begin Class USteamUtilities Function GetFriendsList
struct Z_Construct_UFunction_USteamUtilities_GetFriendsList_Statics
{
	struct SteamUtilities_eventGetFriendsList_Parms
	{
		TEnumAsByte<EFriendListType> FriendListType;
		TArray<FOnlineFriendSteamCoreBlueprint> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Get Friends list\n\x09 * Copies the list of friends for the player previously retrieved from the online service\n\x09 * \n\x09 * Call ReadFriendList function before calling this to ensure you're getting an updated version of your friends.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Get Friends list\n* Copies the list of friends for the player previously retrieved from the online service\n*\n* Call ReadFriendList function before calling this to ensure you're getting an updated version of your friends." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FriendListType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_GetFriendsList_Statics::NewProp_FriendListType = { "FriendListType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventGetFriendsList_Parms, FriendListType), Z_Construct_UEnum_SteamCorePro_EFriendListType, METADATA_PARAMS(0, nullptr) }; // 3442710494
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_GetFriendsList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOnlineFriendSteamCoreBlueprint, METADATA_PARAMS(0, nullptr) }; // 2940509208
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamUtilities_GetFriendsList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventGetFriendsList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2940509208
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_GetFriendsList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetFriendsList_Statics::NewProp_FriendListType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetFriendsList_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetFriendsList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetFriendsList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_GetFriendsList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "GetFriendsList", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_GetFriendsList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetFriendsList_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_GetFriendsList_Statics::SteamUtilities_eventGetFriendsList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetFriendsList_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_GetFriendsList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_GetFriendsList_Statics::SteamUtilities_eventGetFriendsList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_GetFriendsList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_GetFriendsList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execGetFriendsList)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_FriendListType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FOnlineFriendSteamCoreBlueprint>*)Z_Param__Result=USteamUtilities::GetFriendsList(EFriendListType(Z_Param_FriendListType));
	P_NATIVE_END;
}
// End Class USteamUtilities Function GetFriendsList

// Begin Class USteamUtilities Function GetGameEngineInitialized
struct Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics
{
	struct SteamUtilities_eventGetGameEngineInitialized_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventGetGameEngineInitialized_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventGetGameEngineInitialized_Parms), &Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "GetGameEngineInitialized", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics::SteamUtilities_eventGetGameEngineInitialized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics::SteamUtilities_eventGetGameEngineInitialized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execGetGameEngineInitialized)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::GetGameEngineInitialized();
	P_NATIVE_END;
}
// End Class USteamUtilities Function GetGameEngineInitialized

// Begin Class USteamUtilities Function GetHostPingData
struct Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics
{
	struct SteamUtilities_eventGetHostPingData_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities|Ping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the P2P relay ping information for the current machine. This information can be\n\x09 * serialized over the network and used to calculate the ping data between a client and a host.\n\x09 *\n\x09 * @return relay information blob stored as a string for relaying over the network.\n\x09 *         If an error occurred, the return is an empty string.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the P2P relay ping information for the current machine. This information can be\nserialized over the network and used to calculate the ping data between a client and a host.\n\n@return relay information blob stored as a string for relaying over the network.\n        If an error occurred, the return is an empty string." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventGetHostPingData_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "GetHostPingData", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::SteamUtilities_eventGetHostPingData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::SteamUtilities_eventGetHostPingData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_GetHostPingData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execGetHostPingData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamUtilities::GetHostPingData();
	P_NATIVE_END;
}
// End Class USteamUtilities Function GetHostPingData

// Begin Class USteamUtilities Function GetInteger
struct Z_Construct_UFunction_USteamUtilities_GetInteger_Statics
{
	struct SteamUtilities_eventGetInteger_Parms
	{
		FSteamSessionSetting Settings;
		FString Key;
		int32 OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09* Function for getting a Integer attribute from session settings\n\x09* the function will return false if the string was not found or is not a integer\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Function for getting a Integer attribute from session settings\n* the function will return false if the string was not found or is not a integer" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventGetInteger_Parms, Settings), Z_Construct_UScriptStruct_FSteamSessionSetting, METADATA_PARAMS(0, nullptr) }; // 1471580263
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventGetInteger_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventGetInteger_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventGetInteger_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventGetInteger_Parms), &Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "GetInteger", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::SteamUtilities_eventGetInteger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::SteamUtilities_eventGetInteger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_GetInteger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_GetInteger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execGetInteger)
{
	P_GET_STRUCT(FSteamSessionSetting,Z_Param_Settings);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::GetInteger(Z_Param_Settings,Z_Param_Out_Key,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// End Class USteamUtilities Function GetInteger

// Begin Class USteamUtilities Function GetPingFromHostData
struct Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics
{
	struct SteamUtilities_eventGetPingFromHostData_Parms
	{
		FString Data;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities|Ping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Calculates the ping of this client using the given host's ping data obtained from GetHostPingData.\n\x09 *\n\x09 * @param HostPingStr The relay information blob we got from the host. This information\n\x09 *                    should be directly serialized over the network and not tampered with.\n\x09 *\n\x09 * @return The ping value to the given host if it can be calculated, otherwise -1 on error.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calculates the ping of this client using the given host's ping data obtained from GetHostPingData.\n\n@param HostPingStr The relay information blob we got from the host. This information\n                   should be directly serialized over the network and not tampered with.\n\n@return The ping value to the given host if it can be calculated, otherwise -1 on error." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Data;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventGetPingFromHostData_Parms, Data), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventGetPingFromHostData_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "GetPingFromHostData", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::SteamUtilities_eventGetPingFromHostData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::SteamUtilities_eventGetPingFromHostData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_GetPingFromHostData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execGetPingFromHostData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamUtilities::GetPingFromHostData(Z_Param_Data);
	P_NATIVE_END;
}
// End Class USteamUtilities Function GetPingFromHostData

// Begin Class USteamUtilities Function GetPublicIp
struct Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics
{
	struct SteamUtilities_eventGetPublicIp_Parms
	{
		FScriptDelegate Callback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Try getting our public ip\n" },
#endif
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Try getting our public ip" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventGetPublicIp_Parms, Callback), Z_Construct_UDelegateFunction_SteamCorePro_OnHTTPResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1762995450
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::NewProp_Callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "GetPublicIp", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::SteamUtilities_eventGetPublicIp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::SteamUtilities_eventGetPublicIp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_GetPublicIp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_GetPublicIp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execGetPublicIp)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamUtilities::GetPublicIp(FOnHTTPResponse(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// End Class USteamUtilities Function GetPublicIp

// Begin Class USteamUtilities Function GetSteamIdFromPlayerState
struct Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics
{
	struct SteamUtilities_eventGetSteamIdFromPlayerState_Parms
	{
		APlayerState* PlayerState;
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventGetSteamIdFromPlayerState_Parms, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventGetSteamIdFromPlayerState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 664632778
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::NewProp_PlayerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "GetSteamIdFromPlayerState", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::SteamUtilities_eventGetSteamIdFromPlayerState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::SteamUtilities_eventGetSteamIdFromPlayerState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execGetSteamIdFromPlayerState)
{
	P_GET_OBJECT(APlayerState,Z_Param_PlayerState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=USteamUtilities::GetSteamIdFromPlayerState(Z_Param_PlayerState);
	P_NATIVE_END;
}
// End Class USteamUtilities Function GetSteamIdFromPlayerState

// Begin Class USteamUtilities Function GetString
struct Z_Construct_UFunction_USteamUtilities_GetString_Statics
{
	struct SteamUtilities_eventGetString_Parms
	{
		FSteamSessionSetting Settings;
		FString Key;
		FString OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09* Function for getting a String attribute from session settings\n\x09* the function will return false if the string was not found or is not a string\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Function for getting a String attribute from session settings\n* the function will return false if the string was not found or is not a string" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_GetString_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventGetString_Parms, Settings), Z_Construct_UScriptStruct_FSteamSessionSetting, METADATA_PARAMS(0, nullptr) }; // 1471580263
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_GetString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventGetString_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_GetString_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventGetString_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamUtilities_GetString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventGetString_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_GetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventGetString_Parms), &Z_Construct_UFunction_USteamUtilities_GetString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_GetString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetString_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetString_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetString_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_GetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "GetString", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_GetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetString_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_GetString_Statics::SteamUtilities_eventGetString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_GetString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_GetString_Statics::SteamUtilities_eventGetString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_GetString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_GetString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execGetString)
{
	P_GET_STRUCT(FSteamSessionSetting,Z_Param_Settings);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Key);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::GetString(Z_Param_Settings,Z_Param_Out_Key,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// End Class USteamUtilities Function GetString

// Begin Class USteamUtilities Function GetType
struct Z_Construct_UFunction_USteamUtilities_GetType_Statics
{
	struct SteamUtilities_eventGetType_Parms
	{
		FSteamSessionSetting Settings;
		ESteamAttributeType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_GetType_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventGetType_Parms, Settings), Z_Construct_UScriptStruct_FSteamSessionSetting, METADATA_PARAMS(0, nullptr) }; // 1471580263
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_GetType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_GetType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventGetType_Parms, ReturnValue), Z_Construct_UEnum_SteamCorePro_ESteamAttributeType, METADATA_PARAMS(0, nullptr) }; // 2566330101
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_GetType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetType_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_GetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "GetType", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_GetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetType_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_GetType_Statics::SteamUtilities_eventGetType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetType_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_GetType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_GetType_Statics::SteamUtilities_eventGetType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_GetType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_GetType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execGetType)
{
	P_GET_STRUCT(FSteamSessionSetting,Z_Param_Settings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamAttributeType*)Z_Param__Result=USteamUtilities::GetType(Z_Param_Settings);
	P_NATIVE_END;
}
// End Class USteamUtilities Function GetType

// Begin Class USteamUtilities Function IsGameIDValid
struct Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics
{
	struct SteamUtilities_eventIsGameIDValid_Parms
	{
		FSteamGameID GameID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Is Valid" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsGameIDValid_Parms, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameID_MetaData), NewProp_GameID_MetaData) }; // 1935638068
void Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventIsGameIDValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventIsGameIDValid_Parms), &Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::NewProp_GameID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsGameIDValid", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::SteamUtilities_eventIsGameIDValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::SteamUtilities_eventIsGameIDValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_IsGameIDValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execIsGameIDValid)
{
	P_GET_STRUCT(FSteamGameID,Z_Param_GameID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::IsGameIDValid(Z_Param_GameID);
	P_NATIVE_END;
}
// End Class USteamUtilities Function IsGameIDValid

// Begin Class USteamUtilities Function IsGameIDValid_Exec
struct Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics
{
	struct SteamUtilities_eventIsGameIDValid_Exec_Parms
	{
		FSteamGameID GameID;
		ESteamCoreProValid Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Is Valid (Exec)" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsGameIDValid_Exec_Parms, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameID_MetaData), NewProp_GameID_MetaData) }; // 1935638068
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsGameIDValid_Exec_Parms, Result), Z_Construct_UEnum_SteamCorePro_ESteamCoreProValid, METADATA_PARAMS(0, nullptr) }; // 3638519598
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::NewProp_GameID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsGameIDValid_Exec", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::SteamUtilities_eventIsGameIDValid_Exec_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::SteamUtilities_eventIsGameIDValid_Exec_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execIsGameIDValid_Exec)
{
	P_GET_STRUCT(FSteamGameID,Z_Param_GameID);
	P_GET_ENUM_REF(ESteamCoreProValid,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamUtilities::IsGameIDValid_Exec(Z_Param_GameID,(ESteamCoreProValid&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class USteamUtilities Function IsGameIDValid_Exec

// Begin Class USteamUtilities Function IsLobby
struct Z_Construct_UFunction_USteamUtilities_IsLobby_Statics
{
	struct SteamUtilities_eventIsLobby_Parms
	{
		FSteamID SteamID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsLobby_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 664632778
void Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventIsLobby_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventIsLobby_Parms), &Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsLobby", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::SteamUtilities_eventIsLobby_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::SteamUtilities_eventIsLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_IsLobby()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execIsLobby)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::IsLobby(Z_Param_SteamID);
	P_NATIVE_END;
}
// End Class USteamUtilities Function IsLobby

// Begin Class USteamUtilities Function IsLocalPlayerTalking
struct Z_Construct_UFunction_USteamUtilities_IsLocalPlayerTalking_Statics
{
	struct SteamUtilities_eventIsLocalPlayerTalking_Parms
	{
		UObject* WorldContextObject;
		int32 LocalUserNum;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities|Voice" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Determines whether a local user index is currently talking or not\n\x09 *\n\x09 * @param UserIndex the user to check status for\n\x09 *\n\x09 * @return true if the user is talking, false otherwise\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines whether a local user index is currently talking or not\n\n@param UserIndex the user to check status for\n\n@return true if the user is talking, false otherwise" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamUtilities_IsLocalPlayerTalking_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsLocalPlayerTalking_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamUtilities_IsLocalPlayerTalking_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsLocalPlayerTalking_Parms, LocalUserNum), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamUtilities_IsLocalPlayerTalking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventIsLocalPlayerTalking_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsLocalPlayerTalking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventIsLocalPlayerTalking_Parms), &Z_Construct_UFunction_USteamUtilities_IsLocalPlayerTalking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsLocalPlayerTalking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsLocalPlayerTalking_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsLocalPlayerTalking_Statics::NewProp_LocalUserNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsLocalPlayerTalking_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsLocalPlayerTalking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsLocalPlayerTalking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsLocalPlayerTalking", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_IsLocalPlayerTalking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsLocalPlayerTalking_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_IsLocalPlayerTalking_Statics::SteamUtilities_eventIsLocalPlayerTalking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsLocalPlayerTalking_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_IsLocalPlayerTalking_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_IsLocalPlayerTalking_Statics::SteamUtilities_eventIsLocalPlayerTalking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_IsLocalPlayerTalking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsLocalPlayerTalking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execIsLocalPlayerTalking)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::IsLocalPlayerTalking(Z_Param_WorldContextObject,Z_Param_LocalUserNum);
	P_NATIVE_END;
}
// End Class USteamUtilities Function IsLocalPlayerTalking

// Begin Class USteamUtilities Function IsPlayerMuted
struct Z_Construct_UFunction_USteamUtilities_IsPlayerMuted_Statics
{
	struct SteamUtilities_eventIsPlayerMuted_Parms
	{
		UObject* WorldContextObject;
		APlayerState* Player;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities|Voice" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks that a unique player id is on the specified user's mute list\n\x09 *\n\x09 * @param Player the id of the player being checked\n\x09 *\n\x09 * @return true if the specified user is muted, false otherwise\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks that a unique player id is on the specified user's mute list\n\n@param Player the id of the player being checked\n\n@return true if the specified user is muted, false otherwise" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamUtilities_IsPlayerMuted_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsPlayerMuted_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamUtilities_IsPlayerMuted_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsPlayerMuted_Parms, Player), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamUtilities_IsPlayerMuted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventIsPlayerMuted_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsPlayerMuted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventIsPlayerMuted_Parms), &Z_Construct_UFunction_USteamUtilities_IsPlayerMuted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsPlayerMuted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsPlayerMuted_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsPlayerMuted_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsPlayerMuted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsPlayerMuted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsPlayerMuted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsPlayerMuted", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_IsPlayerMuted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsPlayerMuted_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_IsPlayerMuted_Statics::SteamUtilities_eventIsPlayerMuted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsPlayerMuted_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_IsPlayerMuted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_IsPlayerMuted_Statics::SteamUtilities_eventIsPlayerMuted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_IsPlayerMuted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsPlayerMuted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execIsPlayerMuted)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(APlayerState,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::IsPlayerMuted(Z_Param_WorldContextObject,Z_Param_Player);
	P_NATIVE_END;
}
// End Class USteamUtilities Function IsPlayerMuted

// Begin Class USteamUtilities Function IsPublishedFileIDValid
struct Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics
{
	struct SteamUtilities_eventIsPublishedFileIDValid_Parms
	{
		FPublishedFileID PublishedFileId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Is Valid" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsPublishedFileIDValid_Parms, PublishedFileId), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 3569413351
void Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventIsPublishedFileIDValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventIsPublishedFileIDValid_Parms), &Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::NewProp_PublishedFileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsPublishedFileIDValid", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::SteamUtilities_eventIsPublishedFileIDValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::SteamUtilities_eventIsPublishedFileIDValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execIsPublishedFileIDValid)
{
	P_GET_STRUCT(FPublishedFileID,Z_Param_PublishedFileId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::IsPublishedFileIDValid(Z_Param_PublishedFileId);
	P_NATIVE_END;
}
// End Class USteamUtilities Function IsPublishedFileIDValid

// Begin Class USteamUtilities Function IsPublishedFileIDValid_Exec
struct Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics
{
	struct SteamUtilities_eventIsPublishedFileIDValid_Exec_Parms
	{
		FPublishedFileID Handle;
		ESteamCoreProValid Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Is Valid (Exec)" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsPublishedFileIDValid_Exec_Parms, Handle), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 3569413351
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsPublishedFileIDValid_Exec_Parms, Result), Z_Construct_UEnum_SteamCorePro_ESteamCoreProValid, METADATA_PARAMS(0, nullptr) }; // 3638519598
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsPublishedFileIDValid_Exec", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::SteamUtilities_eventIsPublishedFileIDValid_Exec_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::SteamUtilities_eventIsPublishedFileIDValid_Exec_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execIsPublishedFileIDValid_Exec)
{
	P_GET_STRUCT(FPublishedFileID,Z_Param_Handle);
	P_GET_ENUM_REF(ESteamCoreProValid,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamUtilities::IsPublishedFileIDValid_Exec(Z_Param_Handle,(ESteamCoreProValid&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class USteamUtilities Function IsPublishedFileIDValid_Exec

// Begin Class USteamUtilities Function IsRecalculatingPing
struct Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics
{
	struct SteamUtilities_eventIsRecalculatingPing_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities|Ping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* An informative member that allows us to check if we are recalculating our ping\n\x09* information over the Valve network. Data is additively modified during recalculation\n\x09* such that we do not need to block on this function returning false before using\n\x09* ping data.\n\x09*\n\x09* @return true if we're recalculating our ping within the Valve relay network.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An informative member that allows us to check if we are recalculating our ping\ninformation over the Valve network. Data is additively modified during recalculation\nsuch that we do not need to block on this function returning false before using\nping data.\n\n@return true if we're recalculating our ping within the Valve relay network." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventIsRecalculatingPing_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventIsRecalculatingPing_Parms), &Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsRecalculatingPing", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::SteamUtilities_eventIsRecalculatingPing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::SteamUtilities_eventIsRecalculatingPing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execIsRecalculatingPing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::IsRecalculatingPing();
	P_NATIVE_END;
}
// End Class USteamUtilities Function IsRecalculatingPing

// Begin Class USteamUtilities Function IsRemotePlayerTalking
struct Z_Construct_UFunction_USteamUtilities_IsRemotePlayerTalking_Statics
{
	struct SteamUtilities_eventIsRemotePlayerTalking_Parms
	{
		UObject* WorldContextObject;
		APlayerState* Player;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities|Voice" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Determines whether a remote talker is currently talking or not\n\x09 *\n\x09 * @param Player the unique id of the talker to check status on\n\x09 *\n\x09 * @return true if the user is talking, false otherwise\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determines whether a remote talker is currently talking or not\n\n@param Player the unique id of the talker to check status on\n\n@return true if the user is talking, false otherwise" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamUtilities_IsRemotePlayerTalking_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsRemotePlayerTalking_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamUtilities_IsRemotePlayerTalking_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsRemotePlayerTalking_Parms, Player), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamUtilities_IsRemotePlayerTalking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventIsRemotePlayerTalking_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsRemotePlayerTalking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventIsRemotePlayerTalking_Parms), &Z_Construct_UFunction_USteamUtilities_IsRemotePlayerTalking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsRemotePlayerTalking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsRemotePlayerTalking_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsRemotePlayerTalking_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsRemotePlayerTalking_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsRemotePlayerTalking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsRemotePlayerTalking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsRemotePlayerTalking", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_IsRemotePlayerTalking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsRemotePlayerTalking_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_IsRemotePlayerTalking_Statics::SteamUtilities_eventIsRemotePlayerTalking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsRemotePlayerTalking_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_IsRemotePlayerTalking_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_IsRemotePlayerTalking_Statics::SteamUtilities_eventIsRemotePlayerTalking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_IsRemotePlayerTalking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsRemotePlayerTalking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execIsRemotePlayerTalking)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(APlayerState,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::IsRemotePlayerTalking(Z_Param_WorldContextObject,Z_Param_Player);
	P_NATIVE_END;
}
// End Class USteamUtilities Function IsRemotePlayerTalking

// Begin Class USteamUtilities Function IsSteamAvailable
struct Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics
{
	struct SteamUtilities_eventIsSteamAvailable_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventIsSteamAvailable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventIsSteamAvailable_Parms), &Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsSteamAvailable", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::SteamUtilities_eventIsSteamAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::SteamUtilities_eventIsSteamAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_IsSteamAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execIsSteamAvailable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::IsSteamAvailable();
	P_NATIVE_END;
}
// End Class USteamUtilities Function IsSteamAvailable

// Begin Class USteamUtilities Function IsSteamIDValid_Exec
struct Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics
{
	struct SteamUtilities_eventIsSteamIDValid_Exec_Parms
	{
		FSteamID SteamID;
		ESteamCoreProValid Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Is Valid (Exec)" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsSteamIDValid_Exec_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamID_MetaData), NewProp_SteamID_MetaData) }; // 664632778
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsSteamIDValid_Exec_Parms, Result), Z_Construct_UEnum_SteamCorePro_ESteamCoreProValid, METADATA_PARAMS(0, nullptr) }; // 3638519598
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsSteamIDValid_Exec", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::SteamUtilities_eventIsSteamIDValid_Exec_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::SteamUtilities_eventIsSteamIDValid_Exec_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execIsSteamIDValid_Exec)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_GET_ENUM_REF(ESteamCoreProValid,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamUtilities::IsSteamIDValid_Exec(Z_Param_SteamID,(ESteamCoreProValid&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class USteamUtilities Function IsSteamIDValid_Exec

// Begin Class USteamUtilities Function IsSteamInventoryUpdateHandleValid
struct Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics
{
	struct SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Parms
	{
		FSteamInventoryUpdateHandle Handle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Is Valid" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 1389306764
void Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Parms), &Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsSteamInventoryUpdateHandleValid", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execIsSteamInventoryUpdateHandleValid)
{
	P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::IsSteamInventoryUpdateHandleValid(Z_Param_Handle);
	P_NATIVE_END;
}
// End Class USteamUtilities Function IsSteamInventoryUpdateHandleValid

// Begin Class USteamUtilities Function IsSteamInventoryUpdateHandleValid_Exec
struct Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics
{
	struct SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Exec_Parms
	{
		FSteamInventoryUpdateHandle Handle;
		ESteamCoreProValid Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Is Valid (Exec)" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Exec_Parms, Handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 1389306764
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Exec_Parms, Result), Z_Construct_UEnum_SteamCorePro_ESteamCoreProValid, METADATA_PARAMS(0, nullptr) }; // 3638519598
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsSteamInventoryUpdateHandleValid_Exec", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Exec_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Exec_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execIsSteamInventoryUpdateHandleValid_Exec)
{
	P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_Handle);
	P_GET_ENUM_REF(ESteamCoreProValid,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamUtilities::IsSteamInventoryUpdateHandleValid_Exec(Z_Param_Handle,(ESteamCoreProValid&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class USteamUtilities Function IsSteamInventoryUpdateHandleValid_Exec

// Begin Class USteamUtilities Function IsSteamServerInitialized
struct Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics
{
	struct SteamUtilities_eventIsSteamServerInitialized_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventIsSteamServerInitialized_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventIsSteamServerInitialized_Parms), &Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsSteamServerInitialized", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics::SteamUtilities_eventIsSteamServerInitialized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics::SteamUtilities_eventIsSteamServerInitialized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execIsSteamServerInitialized)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::IsSteamServerInitialized();
	P_NATIVE_END;
}
// End Class USteamUtilities Function IsSteamServerInitialized

// Begin Class USteamUtilities Function IsSteamTicketHandleValid
struct Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics
{
	struct SteamUtilities_eventIsSteamTicketHandleValid_Parms
	{
		FSteamTicketHandle Handle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Is Valid" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsSteamTicketHandleValid_Parms, Handle), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 2637768704
void Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventIsSteamTicketHandleValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventIsSteamTicketHandleValid_Parms), &Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsSteamTicketHandleValid", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::SteamUtilities_eventIsSteamTicketHandleValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::SteamUtilities_eventIsSteamTicketHandleValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execIsSteamTicketHandleValid)
{
	P_GET_STRUCT(FSteamTicketHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::IsSteamTicketHandleValid(Z_Param_Handle);
	P_NATIVE_END;
}
// End Class USteamUtilities Function IsSteamTicketHandleValid

// Begin Class USteamUtilities Function IsSteamTicketHandleValid_Exec
struct Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics
{
	struct SteamUtilities_eventIsSteamTicketHandleValid_Exec_Parms
	{
		FSteamTicketHandle Handle;
		ESteamCoreProValid Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Is Valid (Exec)" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsSteamTicketHandleValid_Exec_Parms, Handle), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 2637768704
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsSteamTicketHandleValid_Exec_Parms, Result), Z_Construct_UEnum_SteamCorePro_ESteamCoreProValid, METADATA_PARAMS(0, nullptr) }; // 3638519598
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsSteamTicketHandleValid_Exec", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::SteamUtilities_eventIsSteamTicketHandleValid_Exec_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::SteamUtilities_eventIsSteamTicketHandleValid_Exec_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execIsSteamTicketHandleValid_Exec)
{
	P_GET_STRUCT(FSteamTicketHandle,Z_Param_Handle);
	P_GET_ENUM_REF(ESteamCoreProValid,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamUtilities::IsSteamTicketHandleValid_Exec(Z_Param_Handle,(ESteamCoreProValid&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class USteamUtilities Function IsSteamTicketHandleValid_Exec

// Begin Class USteamUtilities Function IsUGCHandleValid
struct Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics
{
	struct SteamUtilities_eventIsUGCHandleValid_Parms
	{
		FSteamUGCHandle Handle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Is Valid" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsUGCHandleValid_Parms, Handle), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 3978973746
void Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventIsUGCHandleValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventIsUGCHandleValid_Parms), &Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsUGCHandleValid", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::SteamUtilities_eventIsUGCHandleValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::SteamUtilities_eventIsUGCHandleValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execIsUGCHandleValid)
{
	P_GET_STRUCT(FSteamUGCHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::IsUGCHandleValid(Z_Param_Handle);
	P_NATIVE_END;
}
// End Class USteamUtilities Function IsUGCHandleValid

// Begin Class USteamUtilities Function IsUGCHandleValid_Exec
struct Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics
{
	struct SteamUtilities_eventIsUGCHandleValid_Exec_Parms
	{
		FSteamUGCHandle Handle;
		ESteamCoreProValid Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Is Valid (Exec)" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsUGCHandleValid_Exec_Parms, Handle), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 3978973746
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsUGCHandleValid_Exec_Parms, Result), Z_Construct_UEnum_SteamCorePro_ESteamCoreProValid, METADATA_PARAMS(0, nullptr) }; // 3638519598
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsUGCHandleValid_Exec", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::SteamUtilities_eventIsUGCHandleValid_Exec_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::SteamUtilities_eventIsUGCHandleValid_Exec_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execIsUGCHandleValid_Exec)
{
	P_GET_STRUCT(FSteamUGCHandle,Z_Param_Handle);
	P_GET_ENUM_REF(ESteamCoreProValid,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamUtilities::IsUGCHandleValid_Exec(Z_Param_Handle,(ESteamCoreProValid&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class USteamUtilities Function IsUGCHandleValid_Exec

// Begin Class USteamUtilities Function IsUsingP2PRelays
struct Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics
{
	struct SteamUtilities_eventIsUsingP2PRelays_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities|Ping" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns if this application is set up to use the Steam P2P Relay Network\n\x09 * for communication.\n\x09 *\n\x09 * Uses OnlineSubsystemSteamCore.bAllowP2PPacketRelay\n\x09 *\n\x09 * @return true if relays are enabled for P2P connections.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns if this application is set up to use the Steam P2P Relay Network\nfor communication.\n\nUses OnlineSubsystemSteamCore.bAllowP2PPacketRelay\n\n@return true if relays are enabled for P2P connections." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventIsUsingP2PRelays_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventIsUsingP2PRelays_Parms), &Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsUsingP2PRelays", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::SteamUtilities_eventIsUsingP2PRelays_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::SteamUtilities_eventIsUsingP2PRelays_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execIsUsingP2PRelays)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::IsUsingP2PRelays();
	P_NATIVE_END;
}
// End Class USteamUtilities Function IsUsingP2PRelays

// Begin Class USteamUtilities Function IsValid
struct Z_Construct_UFunction_USteamUtilities_IsValid_Statics
{
	struct SteamUtilities_eventIsValid_Parms
	{
		FSteamID SteamID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsValid_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventIsValid_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 664632778
void Z_Construct_UFunction_USteamUtilities_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventIsValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventIsValid_Parms), &Z_Construct_UFunction_USteamUtilities_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsValid_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsValid", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_IsValid_Statics::SteamUtilities_eventIsValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_IsValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_IsValid_Statics::SteamUtilities_eventIsValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_IsValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execIsValid)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::IsValid(Z_Param_SteamID);
	P_NATIVE_END;
}
// End Class USteamUtilities Function IsValid

// Begin Class USteamUtilities Function K2_HexToBytes
struct Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics
{
	struct SteamUtilities_eventK2_HexToBytes_Parms
	{
		FString String;
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Hex to Bytes" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventK2_HexToBytes_Parms, String), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventK2_HexToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::NewProp_String,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "K2_HexToBytes", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::SteamUtilities_eventK2_HexToBytes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::SteamUtilities_eventK2_HexToBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_K2_HexToBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_K2_HexToBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execK2_HexToBytes)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_String);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=USteamUtilities::K2_HexToBytes(Z_Param_String);
	P_NATIVE_END;
}
// End Class USteamUtilities Function K2_HexToBytes

// Begin Class USteamUtilities Function K2_HexToString
struct Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics
{
	struct SteamUtilities_eventK2_HexToString_Parms
	{
		TArray<uint8> Array;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Hex to String" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Array_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Array;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventK2_HexToString_Parms, Array), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventK2_HexToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::NewProp_Array_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::NewProp_Array,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "K2_HexToString", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::SteamUtilities_eventK2_HexToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::SteamUtilities_eventK2_HexToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_K2_HexToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_K2_HexToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execK2_HexToString)
{
	P_GET_TARRAY(uint8,Z_Param_Array);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamUtilities::K2_HexToString(Z_Param_Array);
	P_NATIVE_END;
}
// End Class USteamUtilities Function K2_HexToString

// Begin Class USteamUtilities Function K2_IsPlayerInSession
struct Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics
{
	struct SteamUtilities_eventK2_IsPlayerInSession_Parms
	{
		int32 LocalUserNum;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Determine if the player is registered in the specified session\n\x09 *\n\x09 * @return true if the player is registered in the session\n\x09 */" },
#endif
		{ "DisplayName", "Is Player In Session" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Determine if the player is registered in the specified session\n\n@return true if the player is registered in the session" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventK2_IsPlayerInSession_Parms, LocalUserNum), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventK2_IsPlayerInSession_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventK2_IsPlayerInSession_Parms), &Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::NewProp_LocalUserNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "K2_IsPlayerInSession", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::SteamUtilities_eventK2_IsPlayerInSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::SteamUtilities_eventK2_IsPlayerInSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execK2_IsPlayerInSession)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::K2_IsPlayerInSession(Z_Param_LocalUserNum);
	P_NATIVE_END;
}
// End Class USteamUtilities Function K2_IsPlayerInSession

// Begin Class USteamUtilities Function KickPlayer
struct Z_Construct_UFunction_USteamUtilities_KickPlayer_Statics
{
	struct SteamUtilities_eventKickPlayer_Parms
	{
		UObject* WorldContextObject;
		APlayerController* KickedPlayer;
		FText KickReason;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCorePro|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09 * Forcibly remove player from the server\n\x09 *\n\x09 * @param KickedPlayer player to kick\n\x09 * @param KickReason text reason to display to player\n\x09 *\n\x09 * @return true if player was able to be kicked, false otherwise\n\x09 */" },
#endif
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Forcibly remove player from the server\n\n@param KickedPlayer player to kick\n@param KickReason text reason to display to player\n\n@return true if player was able to be kicked, false otherwise" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KickReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KickedPlayer;
	static const UECodeGen_Private::FTextPropertyParams NewProp_KickReason;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamUtilities_KickPlayer_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventKickPlayer_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamUtilities_KickPlayer_Statics::NewProp_KickedPlayer = { "KickedPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventKickPlayer_Parms, KickedPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USteamUtilities_KickPlayer_Statics::NewProp_KickReason = { "KickReason", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventKickPlayer_Parms, KickReason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KickReason_MetaData), NewProp_KickReason_MetaData) };
void Z_Construct_UFunction_USteamUtilities_KickPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventKickPlayer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_KickPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventKickPlayer_Parms), &Z_Construct_UFunction_USteamUtilities_KickPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_KickPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_KickPlayer_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_KickPlayer_Statics::NewProp_KickedPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_KickPlayer_Statics::NewProp_KickReason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_KickPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_KickPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_KickPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "KickPlayer", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_KickPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_KickPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_KickPlayer_Statics::SteamUtilities_eventKickPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_KickPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_KickPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_KickPlayer_Statics::SteamUtilities_eventKickPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_KickPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_KickPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execKickPlayer)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(APlayerController,Z_Param_KickedPlayer);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_KickReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::KickPlayer(Z_Param_WorldContextObject,Z_Param_KickedPlayer,Z_Param_Out_KickReason);
	P_NATIVE_END;
}
// End Class USteamUtilities Function KickPlayer

// Begin Class USteamUtilities Function ListenForSessionInviteAccepted
struct Z_Construct_UFunction_USteamUtilities_ListenForSessionInviteAccepted_Statics
{
	struct SteamUtilities_eventListenForSessionInviteAccepted_Parms
	{
		FScriptDelegate Callback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamUtilities_ListenForSessionInviteAccepted_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventListenForSessionInviteAccepted_Parms, Callback), Z_Construct_UDelegateFunction_SteamCorePro_OnSessionUserInviteAcceptedCallback__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 3126892984
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_ListenForSessionInviteAccepted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_ListenForSessionInviteAccepted_Statics::NewProp_Callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ListenForSessionInviteAccepted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_ListenForSessionInviteAccepted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "ListenForSessionInviteAccepted", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_ListenForSessionInviteAccepted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ListenForSessionInviteAccepted_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_ListenForSessionInviteAccepted_Statics::SteamUtilities_eventListenForSessionInviteAccepted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ListenForSessionInviteAccepted_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_ListenForSessionInviteAccepted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_ListenForSessionInviteAccepted_Statics::SteamUtilities_eventListenForSessionInviteAccepted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_ListenForSessionInviteAccepted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_ListenForSessionInviteAccepted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execListenForSessionInviteAccepted)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamUtilities::ListenForSessionInviteAccepted(FOnSessionUserInviteAcceptedCallback(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// End Class USteamUtilities Function ListenForSessionInviteAccepted

// Begin Class USteamUtilities Function ListenForSteamMessages
struct Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics
{
	struct SteamUtilities_eventListenForSteamMessages_Parms
	{
		FScriptDelegate Callback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventListenForSteamMessages_Parms, Callback), Z_Construct_UDelegateFunction_SteamCorePro_OnSteamMessage__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 3485064817
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::NewProp_Callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "ListenForSteamMessages", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::SteamUtilities_eventListenForSteamMessages_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::SteamUtilities_eventListenForSteamMessages_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execListenForSteamMessages)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamUtilities::ListenForSteamMessages(FOnSteamMessage(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// End Class USteamUtilities Function ListenForSteamMessages

// Begin Class USteamUtilities Function MakeInteger
struct Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics
{
	struct SteamUtilities_eventMakeInteger_Parms
	{
		int32 Value;
		FSteamSessionSetting ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakeInteger_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakeInteger_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamSessionSetting, METADATA_PARAMS(0, nullptr) }; // 1471580263
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeInteger", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::SteamUtilities_eventMakeInteger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::SteamUtilities_eventMakeInteger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_MakeInteger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeInteger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execMakeInteger)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamSessionSetting*)Z_Param__Result=USteamUtilities::MakeInteger(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USteamUtilities Function MakeInteger

// Begin Class USteamUtilities Function MakeInventoryUpdateHandle
struct Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics
{
	struct SteamUtilities_eventMakeInventoryUpdateHandle_Parms
	{
		FString Value;
		FSteamInventoryUpdateHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakeInventoryUpdateHandle_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakeInventoryUpdateHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 1389306764
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeInventoryUpdateHandle", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::SteamUtilities_eventMakeInventoryUpdateHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::SteamUtilities_eventMakeInventoryUpdateHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execMakeInventoryUpdateHandle)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamInventoryUpdateHandle*)Z_Param__Result=USteamUtilities::MakeInventoryUpdateHandle(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USteamUtilities Function MakeInventoryUpdateHandle

// Begin Class USteamUtilities Function MakePublishedFileID
struct Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics
{
	struct SteamUtilities_eventMakePublishedFileID_Parms
	{
		FString Value;
		FPublishedFileID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakePublishedFileID_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakePublishedFileID_Parms, ReturnValue), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 3569413351
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakePublishedFileID", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::SteamUtilities_eventMakePublishedFileID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::SteamUtilities_eventMakePublishedFileID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_MakePublishedFileID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execMakePublishedFileID)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPublishedFileID*)Z_Param__Result=USteamUtilities::MakePublishedFileID(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USteamUtilities Function MakePublishedFileID

// Begin Class USteamUtilities Function MakeSearchInteger
struct Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics
{
	struct SteamUtilities_eventMakeSearchInteger_Parms
	{
		ESteamComparisonOp ComparisonOperator;
		int32 Value;
		FSteamSessionSearchSetting ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComparisonOperator_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ComparisonOperator_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ComparisonOperator;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_ComparisonOperator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_ComparisonOperator = { "ComparisonOperator", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakeSearchInteger_Parms, ComparisonOperator), Z_Construct_UEnum_SteamCorePro_ESteamComparisonOp, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComparisonOperator_MetaData), NewProp_ComparisonOperator_MetaData) }; // 191267020
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakeSearchInteger_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakeSearchInteger_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamSessionSearchSetting, METADATA_PARAMS(0, nullptr) }; // 1140942053
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_ComparisonOperator_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_ComparisonOperator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeSearchInteger", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::SteamUtilities_eventMakeSearchInteger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::SteamUtilities_eventMakeSearchInteger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_MakeSearchInteger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeSearchInteger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execMakeSearchInteger)
{
	P_GET_ENUM(ESteamComparisonOp,Z_Param_ComparisonOperator);
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamSessionSearchSetting*)Z_Param__Result=USteamUtilities::MakeSearchInteger(ESteamComparisonOp(Z_Param_ComparisonOperator),Z_Param_Value);
	P_NATIVE_END;
}
// End Class USteamUtilities Function MakeSearchInteger

// Begin Class USteamUtilities Function MakeSearchString
struct Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics
{
	struct SteamUtilities_eventMakeSearchString_Parms
	{
		FString Value;
		FSteamSessionSearchSetting ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakeSearchString_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakeSearchString_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamSessionSearchSetting, METADATA_PARAMS(0, nullptr) }; // 1140942053
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeSearchString", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::SteamUtilities_eventMakeSearchString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::SteamUtilities_eventMakeSearchString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_MakeSearchString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeSearchString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execMakeSearchString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamSessionSearchSetting*)Z_Param__Result=USteamUtilities::MakeSearchString(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USteamUtilities Function MakeSearchString

// Begin Class USteamUtilities Function MakeSteamGameID
struct Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics
{
	struct SteamUtilities_eventMakeSteamGameID_Parms
	{
		FString Value;
		FSteamGameID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakeSteamGameID_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakeSteamGameID_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(0, nullptr) }; // 1935638068
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeSteamGameID", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::SteamUtilities_eventMakeSteamGameID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::SteamUtilities_eventMakeSteamGameID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_MakeSteamGameID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execMakeSteamGameID)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamGameID*)Z_Param__Result=USteamUtilities::MakeSteamGameID(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USteamUtilities Function MakeSteamGameID

// Begin Class USteamUtilities Function MakeSteamID
struct Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics
{
	struct SteamUtilities_eventMakeSteamID_Parms
	{
		FString Value;
		FSteamID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakeSteamID_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakeSteamID_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 664632778
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeSteamID", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::SteamUtilities_eventMakeSteamID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::SteamUtilities_eventMakeSteamID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_MakeSteamID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execMakeSteamID)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamID*)Z_Param__Result=USteamUtilities::MakeSteamID(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USteamUtilities Function MakeSteamID

// Begin Class USteamUtilities Function MakeSteamItemInstanceID
struct Z_Construct_UFunction_USteamUtilities_MakeSteamItemInstanceID_Statics
{
	struct SteamUtilities_eventMakeSteamItemInstanceID_Parms
	{
		int64 Value;
		FSteamItemInstanceID ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USteamUtilities_MakeSteamItemInstanceID_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakeSteamItemInstanceID_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSteamItemInstanceID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakeSteamItemInstanceID_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 2322748807
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeSteamItemInstanceID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSteamItemInstanceID_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSteamItemInstanceID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSteamItemInstanceID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeSteamItemInstanceID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeSteamItemInstanceID", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_MakeSteamItemInstanceID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSteamItemInstanceID_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_MakeSteamItemInstanceID_Statics::SteamUtilities_eventMakeSteamItemInstanceID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSteamItemInstanceID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_MakeSteamItemInstanceID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_MakeSteamItemInstanceID_Statics::SteamUtilities_eventMakeSteamItemInstanceID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_MakeSteamItemInstanceID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeSteamItemInstanceID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execMakeSteamItemInstanceID)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamItemInstanceID*)Z_Param__Result=USteamUtilities::MakeSteamItemInstanceID(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USteamUtilities Function MakeSteamItemInstanceID

// Begin Class USteamUtilities Function MakeString
struct Z_Construct_UFunction_USteamUtilities_MakeString_Statics
{
	struct SteamUtilities_eventMakeString_Parms
	{
		FString Value;
		FSteamSessionSetting ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_MakeString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakeString_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakeString_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamSessionSetting, METADATA_PARAMS(0, nullptr) }; // 1471580263
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeString_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeString", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_MakeString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeString_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_MakeString_Statics::SteamUtilities_eventMakeString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeString_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_MakeString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_MakeString_Statics::SteamUtilities_eventMakeString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_MakeString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execMakeString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamSessionSetting*)Z_Param__Result=USteamUtilities::MakeString(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USteamUtilities Function MakeString

// Begin Class USteamUtilities Function MakeTicketHandle
struct Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics
{
	struct SteamUtilities_eventMakeTicketHandle_Parms
	{
		FString Value;
		FSteamTicketHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakeTicketHandle_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakeTicketHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(0, nullptr) }; // 2637768704
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeTicketHandle", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::SteamUtilities_eventMakeTicketHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::SteamUtilities_eventMakeTicketHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_MakeTicketHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execMakeTicketHandle)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamTicketHandle*)Z_Param__Result=USteamUtilities::MakeTicketHandle(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USteamUtilities Function MakeTicketHandle

// Begin Class USteamUtilities Function MakeUGCHandle
struct Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics
{
	struct SteamUtilities_eventMakeUGCHandle_Parms
	{
		FString Value;
		FSteamUGCHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakeUGCHandle_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMakeUGCHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(0, nullptr) }; // 3978973746
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeUGCHandle", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::SteamUtilities_eventMakeUGCHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::SteamUtilities_eventMakeUGCHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_MakeUGCHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execMakeUGCHandle)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSteamUGCHandle*)Z_Param__Result=USteamUtilities::MakeUGCHandle(Z_Param_Value);
	P_NATIVE_END;
}
// End Class USteamUtilities Function MakeUGCHandle

// Begin Class USteamUtilities Function MuteRemoteTalker
struct Z_Construct_UFunction_USteamUtilities_MuteRemoteTalker_Statics
{
	struct SteamUtilities_eventMuteRemoteTalker_Parms
	{
		UObject* WorldContextObject;
		int32 LocalUserNum;
		APlayerState* PlayerState;
		bool bIsSystemWide;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities|Voice" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Mute a remote user for a given local player\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Mute a remote user for a given local player" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
	static void NewProp_bIsSystemWide_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSystemWide;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamUtilities_MuteRemoteTalker_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMuteRemoteTalker_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamUtilities_MuteRemoteTalker_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMuteRemoteTalker_Parms, LocalUserNum), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamUtilities_MuteRemoteTalker_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventMuteRemoteTalker_Parms, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamUtilities_MuteRemoteTalker_Statics::NewProp_bIsSystemWide_SetBit(void* Obj)
{
	((SteamUtilities_eventMuteRemoteTalker_Parms*)Obj)->bIsSystemWide = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_MuteRemoteTalker_Statics::NewProp_bIsSystemWide = { "bIsSystemWide", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventMuteRemoteTalker_Parms), &Z_Construct_UFunction_USteamUtilities_MuteRemoteTalker_Statics::NewProp_bIsSystemWide_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamUtilities_MuteRemoteTalker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventMuteRemoteTalker_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_MuteRemoteTalker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventMuteRemoteTalker_Parms), &Z_Construct_UFunction_USteamUtilities_MuteRemoteTalker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MuteRemoteTalker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MuteRemoteTalker_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MuteRemoteTalker_Statics::NewProp_LocalUserNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MuteRemoteTalker_Statics::NewProp_PlayerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MuteRemoteTalker_Statics::NewProp_bIsSystemWide,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MuteRemoteTalker_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MuteRemoteTalker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MuteRemoteTalker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MuteRemoteTalker", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_MuteRemoteTalker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MuteRemoteTalker_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_MuteRemoteTalker_Statics::SteamUtilities_eventMuteRemoteTalker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MuteRemoteTalker_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_MuteRemoteTalker_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_MuteRemoteTalker_Statics::SteamUtilities_eventMuteRemoteTalker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_MuteRemoteTalker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_MuteRemoteTalker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execMuteRemoteTalker)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
	P_GET_OBJECT(APlayerState,Z_Param_PlayerState);
	P_GET_UBOOL(Z_Param_bIsSystemWide);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::MuteRemoteTalker(Z_Param_WorldContextObject,Z_Param_LocalUserNum,Z_Param_PlayerState,Z_Param_bIsSystemWide);
	P_NATIVE_END;
}
// End Class USteamUtilities Function MuteRemoteTalker

// Begin Class USteamUtilities Function NotEqual
struct Z_Construct_UFunction_USteamUtilities_NotEqual_Statics
{
	struct SteamUtilities_eventNotEqual_Parms
	{
		FSteamID A;
		FSteamID B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "CompactNodeTitle", "!=" },
		{ "Keywords", "not equal != not identical" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventNotEqual_Parms, A), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 664632778
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventNotEqual_Parms, B), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 664632778
void Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventNotEqual_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventNotEqual_Parms), &Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "NotEqual", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::SteamUtilities_eventNotEqual_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::SteamUtilities_eventNotEqual_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_NotEqual()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execNotEqual)
{
	P_GET_STRUCT(FSteamID,Z_Param_A);
	P_GET_STRUCT(FSteamID,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::NotEqual(Z_Param_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class USteamUtilities Function NotEqual

// Begin Class USteamUtilities Function PublishedFileID_Equals
struct Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics
{
	struct SteamUtilities_eventPublishedFileID_Equals_Parms
	{
		FPublishedFileID A;
		FPublishedFileID B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "CompactNodeTitle", "==" },
		{ "Keywords", "equal == identical" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventPublishedFileID_Equals_Parms, A), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 3569413351
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventPublishedFileID_Equals_Parms, B), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 3569413351
void Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventPublishedFileID_Equals_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventPublishedFileID_Equals_Parms), &Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "PublishedFileID_Equals", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::SteamUtilities_eventPublishedFileID_Equals_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::SteamUtilities_eventPublishedFileID_Equals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execPublishedFileID_Equals)
{
	P_GET_STRUCT(FPublishedFileID,Z_Param_A);
	P_GET_STRUCT(FPublishedFileID,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::PublishedFileID_Equals(Z_Param_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class USteamUtilities Function PublishedFileID_Equals

// Begin Class USteamUtilities Function PublishedFileID_Equals_Exec
struct Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics
{
	struct SteamUtilities_eventPublishedFileID_Equals_Exec_Parms
	{
		FPublishedFileID A;
		FPublishedFileID B;
		ESteamCoreProIdentical Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "Keywords", "equal == identical" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventPublishedFileID_Equals_Exec_Parms, A), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 3569413351
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventPublishedFileID_Equals_Exec_Parms, B), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 3569413351
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventPublishedFileID_Equals_Exec_Parms, Result), Z_Construct_UEnum_SteamCorePro_ESteamCoreProIdentical, METADATA_PARAMS(0, nullptr) }; // 1773089156
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "PublishedFileID_Equals_Exec", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::SteamUtilities_eventPublishedFileID_Equals_Exec_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::SteamUtilities_eventPublishedFileID_Equals_Exec_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execPublishedFileID_Equals_Exec)
{
	P_GET_STRUCT(FPublishedFileID,Z_Param_A);
	P_GET_STRUCT(FPublishedFileID,Z_Param_B);
	P_GET_ENUM_REF(ESteamCoreProIdentical,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamUtilities::PublishedFileID_Equals_Exec(Z_Param_A,Z_Param_B,(ESteamCoreProIdentical&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class USteamUtilities Function PublishedFileID_Equals_Exec

// Begin Class USteamUtilities Function PublishedFileID_NotEquals
struct Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics
{
	struct SteamUtilities_eventPublishedFileID_NotEquals_Parms
	{
		FPublishedFileID A;
		FPublishedFileID B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "CompactNodeTitle", "!=" },
		{ "Keywords", "not equal != not identical" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventPublishedFileID_NotEquals_Parms, A), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 3569413351
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventPublishedFileID_NotEquals_Parms, B), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(0, nullptr) }; // 3569413351
void Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventPublishedFileID_NotEquals_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventPublishedFileID_NotEquals_Parms), &Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "PublishedFileID_NotEquals", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::SteamUtilities_eventPublishedFileID_NotEquals_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::SteamUtilities_eventPublishedFileID_NotEquals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execPublishedFileID_NotEquals)
{
	P_GET_STRUCT(FPublishedFileID,Z_Param_A);
	P_GET_STRUCT(FPublishedFileID,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::PublishedFileID_NotEquals(Z_Param_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class USteamUtilities Function PublishedFileID_NotEquals

// Begin Class USteamUtilities Function ReadFileToBytes
struct Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics
{
	struct SteamUtilities_eventReadFileToBytes_Parms
	{
		FString AbsoluteFilePath;
		TArray<uint8> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Reads a binary file and returns an array of uint8\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Reads a binary file and returns an array of uint8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbsoluteFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AbsoluteFilePath;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::NewProp_AbsoluteFilePath = { "AbsoluteFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventReadFileToBytes_Parms, AbsoluteFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbsoluteFilePath_MetaData), NewProp_AbsoluteFilePath_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventReadFileToBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::NewProp_AbsoluteFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "ReadFileToBytes", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::SteamUtilities_eventReadFileToBytes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::SteamUtilities_eventReadFileToBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_ReadFileToBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_ReadFileToBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execReadFileToBytes)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AbsoluteFilePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<uint8>*)Z_Param__Result=USteamUtilities::ReadFileToBytes(Z_Param_AbsoluteFilePath);
	P_NATIVE_END;
}
// End Class USteamUtilities Function ReadFileToBytes

// Begin Class USteamUtilities Function ReadFriendList
struct Z_Construct_UFunction_USteamUtilities_ReadFriendList_Statics
{
	struct SteamUtilities_eventReadFriendList_Parms
	{
		UObject* WorldContextObject;
		FLatentActionInfo LatentInfo;
		TEnumAsByte<EFriendListType> FriendListType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Read Friend List\n\x09 * Cache friends list\n\x09 *\n\x09 * Call \"Get Friends List\" after calling this to get a list of your friends\n\x09 */" },
#endif
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
		{ "Name", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Read Friend List\n* Cache friends list\n*\n* Call \"Get Friends List\" after calling this to get a list of your friends" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FriendListType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamUtilities_ReadFriendList_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventReadFriendList_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_ReadFriendList_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventReadFriendList_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_ReadFriendList_Statics::NewProp_FriendListType = { "FriendListType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventReadFriendList_Parms, FriendListType), Z_Construct_UEnum_SteamCorePro_EFriendListType, METADATA_PARAMS(0, nullptr) }; // 3442710494
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_ReadFriendList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_ReadFriendList_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_ReadFriendList_Statics::NewProp_LatentInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_ReadFriendList_Statics::NewProp_FriendListType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ReadFriendList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_ReadFriendList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "ReadFriendList", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_ReadFriendList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ReadFriendList_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_ReadFriendList_Statics::SteamUtilities_eventReadFriendList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ReadFriendList_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_ReadFriendList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_ReadFriendList_Statics::SteamUtilities_eventReadFriendList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_ReadFriendList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_ReadFriendList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execReadFriendList)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_GET_PROPERTY(FByteProperty,Z_Param_FriendListType);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamUtilities::ReadFriendList(Z_Param_WorldContextObject,Z_Param_LatentInfo,EFriendListType(Z_Param_FriendListType));
	P_NATIVE_END;
}
// End Class USteamUtilities Function ReadFriendList

// Begin Class USteamUtilities Function SetLocalHost
struct Z_Construct_UFunction_USteamUtilities_SetLocalHost_Statics
{
	struct SteamUtilities_eventSetLocalHost_Parms
	{
		FSteamNetworkingIdentity SteamNetworkingIdentity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamNetworkingIdentity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_SetLocalHost_Statics::NewProp_SteamNetworkingIdentity = { "SteamNetworkingIdentity", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventSetLocalHost_Parms, SteamNetworkingIdentity), Z_Construct_UScriptStruct_FSteamNetworkingIdentity, METADATA_PARAMS(0, nullptr) }; // 3585991723
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_SetLocalHost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_SetLocalHost_Statics::NewProp_SteamNetworkingIdentity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_SetLocalHost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_SetLocalHost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "SetLocalHost", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_SetLocalHost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_SetLocalHost_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_SetLocalHost_Statics::SteamUtilities_eventSetLocalHost_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_SetLocalHost_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_SetLocalHost_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_SetLocalHost_Statics::SteamUtilities_eventSetLocalHost_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_SetLocalHost()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_SetLocalHost_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execSetLocalHost)
{
	P_GET_STRUCT_REF(FSteamNetworkingIdentity,Z_Param_Out_SteamNetworkingIdentity);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamUtilities::SetLocalHost(Z_Param_Out_SteamNetworkingIdentity);
	P_NATIVE_END;
}
// End Class USteamUtilities Function SetLocalHost

// Begin Class USteamUtilities Function SetPSNId
struct Z_Construct_UFunction_USteamUtilities_SetPSNId_Statics
{
	struct SteamUtilities_eventSetPSNId_Parms
	{
		FSteamNetworkingIdentity SteamNetworkingIdentity;
		int64 Id;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Set PSN Id" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamNetworkingIdentity;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Id;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_SetPSNId_Statics::NewProp_SteamNetworkingIdentity = { "SteamNetworkingIdentity", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventSetPSNId_Parms, SteamNetworkingIdentity), Z_Construct_UScriptStruct_FSteamNetworkingIdentity, METADATA_PARAMS(0, nullptr) }; // 3585991723
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USteamUtilities_SetPSNId_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventSetPSNId_Parms, Id), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_SetPSNId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_SetPSNId_Statics::NewProp_SteamNetworkingIdentity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_SetPSNId_Statics::NewProp_Id,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_SetPSNId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_SetPSNId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "SetPSNId", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_SetPSNId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_SetPSNId_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_SetPSNId_Statics::SteamUtilities_eventSetPSNId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_SetPSNId_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_SetPSNId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_SetPSNId_Statics::SteamUtilities_eventSetPSNId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_SetPSNId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_SetPSNId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execSetPSNId)
{
	P_GET_STRUCT_REF(FSteamNetworkingIdentity,Z_Param_Out_SteamNetworkingIdentity);
	P_GET_PROPERTY(FInt64Property,Z_Param_Id);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamUtilities::SetPSNId(Z_Param_Out_SteamNetworkingIdentity,Z_Param_Id);
	P_NATIVE_END;
}
// End Class USteamUtilities Function SetPSNId

// Begin Class USteamUtilities Function SetStadiaId
struct Z_Construct_UFunction_USteamUtilities_SetStadiaId_Statics
{
	struct SteamUtilities_eventSetStadiaId_Parms
	{
		FSteamNetworkingIdentity SteamNetworkingIdentity;
		int64 Id;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamNetworkingIdentity;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Id;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_SetStadiaId_Statics::NewProp_SteamNetworkingIdentity = { "SteamNetworkingIdentity", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventSetStadiaId_Parms, SteamNetworkingIdentity), Z_Construct_UScriptStruct_FSteamNetworkingIdentity, METADATA_PARAMS(0, nullptr) }; // 3585991723
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USteamUtilities_SetStadiaId_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventSetStadiaId_Parms, Id), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_SetStadiaId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_SetStadiaId_Statics::NewProp_SteamNetworkingIdentity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_SetStadiaId_Statics::NewProp_Id,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_SetStadiaId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_SetStadiaId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "SetStadiaId", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_SetStadiaId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_SetStadiaId_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_SetStadiaId_Statics::SteamUtilities_eventSetStadiaId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_SetStadiaId_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_SetStadiaId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_SetStadiaId_Statics::SteamUtilities_eventSetStadiaId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_SetStadiaId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_SetStadiaId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execSetStadiaId)
{
	P_GET_STRUCT_REF(FSteamNetworkingIdentity,Z_Param_Out_SteamNetworkingIdentity);
	P_GET_PROPERTY(FInt64Property,Z_Param_Id);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamUtilities::SetStadiaId(Z_Param_Out_SteamNetworkingIdentity,Z_Param_Id);
	P_NATIVE_END;
}
// End Class USteamUtilities Function SetStadiaId

// Begin Class USteamUtilities Function SetSteamId64
struct Z_Construct_UFunction_USteamUtilities_SetSteamId64_Statics
{
	struct SteamUtilities_eventSetSteamId64_Parms
	{
		FSteamNetworkingIdentity SteamNetworkingIdentity;
		FSteamID SteamId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamNetworkingIdentity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_SetSteamId64_Statics::NewProp_SteamNetworkingIdentity = { "SteamNetworkingIdentity", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventSetSteamId64_Parms, SteamNetworkingIdentity), Z_Construct_UScriptStruct_FSteamNetworkingIdentity, METADATA_PARAMS(0, nullptr) }; // 3585991723
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_SetSteamId64_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventSetSteamId64_Parms, SteamId), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 664632778
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_SetSteamId64_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_SetSteamId64_Statics::NewProp_SteamNetworkingIdentity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_SetSteamId64_Statics::NewProp_SteamId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_SetSteamId64_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_SetSteamId64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "SetSteamId64", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_SetSteamId64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_SetSteamId64_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_SetSteamId64_Statics::SteamUtilities_eventSetSteamId64_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_SetSteamId64_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_SetSteamId64_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_SetSteamId64_Statics::SteamUtilities_eventSetSteamId64_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_SetSteamId64()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_SetSteamId64_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execSetSteamId64)
{
	P_GET_STRUCT_REF(FSteamNetworkingIdentity,Z_Param_Out_SteamNetworkingIdentity);
	P_GET_STRUCT(FSteamID,Z_Param_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamUtilities::SetSteamId64(Z_Param_Out_SteamNetworkingIdentity,Z_Param_SteamId);
	P_NATIVE_END;
}
// End Class USteamUtilities Function SetSteamId64

// Begin Class USteamUtilities Function SetType
struct Z_Construct_UFunction_USteamUtilities_SetType_Statics
{
	struct SteamUtilities_eventSetType_Parms
	{
		FSteamNetworkingIdentity SteamNetworkingIdentity;
		ESteamCoreNetworkingIdentityType Type;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamNetworkingIdentity;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_SetType_Statics::NewProp_SteamNetworkingIdentity = { "SteamNetworkingIdentity", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventSetType_Parms, SteamNetworkingIdentity), Z_Construct_UScriptStruct_FSteamNetworkingIdentity, METADATA_PARAMS(0, nullptr) }; // 3585991723
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_SetType_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_SetType_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventSetType_Parms, Type), Z_Construct_UEnum_SteamCorePro_ESteamCoreNetworkingIdentityType, METADATA_PARAMS(0, nullptr) }; // 3035092562
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_SetType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_SetType_Statics::NewProp_SteamNetworkingIdentity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_SetType_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_SetType_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_SetType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_SetType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "SetType", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_SetType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_SetType_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_SetType_Statics::SteamUtilities_eventSetType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_SetType_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_SetType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_SetType_Statics::SteamUtilities_eventSetType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_SetType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_SetType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execSetType)
{
	P_GET_STRUCT_REF(FSteamNetworkingIdentity,Z_Param_Out_SteamNetworkingIdentity);
	P_GET_ENUM(ESteamCoreNetworkingIdentityType,Z_Param_Type);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamUtilities::SetType(Z_Param_Out_SteamNetworkingIdentity,ESteamCoreNetworkingIdentityType(Z_Param_Type));
	P_NATIVE_END;
}
// End Class USteamUtilities Function SetType

// Begin Class USteamUtilities Function SetXboxPairwiseId
struct Z_Construct_UFunction_USteamUtilities_SetXboxPairwiseId_Statics
{
	struct SteamUtilities_eventSetXboxPairwiseId_Parms
	{
		FSteamNetworkingIdentity SteamNetworkingIdentity;
		FString String;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamNetworkingIdentity;
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_SetXboxPairwiseId_Statics::NewProp_SteamNetworkingIdentity = { "SteamNetworkingIdentity", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventSetXboxPairwiseId_Parms, SteamNetworkingIdentity), Z_Construct_UScriptStruct_FSteamNetworkingIdentity, METADATA_PARAMS(0, nullptr) }; // 3585991723
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_SetXboxPairwiseId_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventSetXboxPairwiseId_Parms, String), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_SetXboxPairwiseId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_SetXboxPairwiseId_Statics::NewProp_SteamNetworkingIdentity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_SetXboxPairwiseId_Statics::NewProp_String,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_SetXboxPairwiseId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_SetXboxPairwiseId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "SetXboxPairwiseId", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_SetXboxPairwiseId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_SetXboxPairwiseId_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_SetXboxPairwiseId_Statics::SteamUtilities_eventSetXboxPairwiseId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_SetXboxPairwiseId_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_SetXboxPairwiseId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_SetXboxPairwiseId_Statics::SteamUtilities_eventSetXboxPairwiseId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_SetXboxPairwiseId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_SetXboxPairwiseId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execSetXboxPairwiseId)
{
	P_GET_STRUCT_REF(FSteamNetworkingIdentity,Z_Param_Out_SteamNetworkingIdentity);
	P_GET_PROPERTY(FStrProperty,Z_Param_String);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamUtilities::SetXboxPairwiseId(Z_Param_Out_SteamNetworkingIdentity,Z_Param_String);
	P_NATIVE_END;
}
// End Class USteamUtilities Function SetXboxPairwiseId

// Begin Class USteamUtilities Function SteamItemInstanceID_Equals
struct Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics
{
	struct SteamUtilities_eventSteamItemInstanceID_Equals_Parms
	{
		FSteamItemInstanceID A;
		FSteamItemInstanceID B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "CompactNodeTitle", "==" },
		{ "Keywords", "equal == identical" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventSteamItemInstanceID_Equals_Parms, A), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 2322748807
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventSteamItemInstanceID_Equals_Parms, B), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 2322748807
void Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventSteamItemInstanceID_Equals_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventSteamItemInstanceID_Equals_Parms), &Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "SteamItemInstanceID_Equals", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::SteamUtilities_eventSteamItemInstanceID_Equals_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::SteamUtilities_eventSteamItemInstanceID_Equals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execSteamItemInstanceID_Equals)
{
	P_GET_STRUCT(FSteamItemInstanceID,Z_Param_A);
	P_GET_STRUCT(FSteamItemInstanceID,Z_Param_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::SteamItemInstanceID_Equals(Z_Param_A,Z_Param_B);
	P_NATIVE_END;
}
// End Class USteamUtilities Function SteamItemInstanceID_Equals

// Begin Class USteamUtilities Function SteamItemInstanceID_Equals_Exec
struct Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics
{
	struct SteamUtilities_eventSteamItemInstanceID_Equals_Exec_Parms
	{
		FSteamItemInstanceID A;
		FSteamItemInstanceID B;
		ESteamCoreProIdentical Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "Keywords", "equal == identical" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventSteamItemInstanceID_Equals_Exec_Parms, A), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 2322748807
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventSteamItemInstanceID_Equals_Exec_Parms, B), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(0, nullptr) }; // 2322748807
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventSteamItemInstanceID_Equals_Exec_Parms, Result), Z_Construct_UEnum_SteamCorePro_ESteamCoreProIdentical, METADATA_PARAMS(0, nullptr) }; // 1773089156
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "SteamItemInstanceID_Equals_Exec", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::SteamUtilities_eventSteamItemInstanceID_Equals_Exec_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::SteamUtilities_eventSteamItemInstanceID_Equals_Exec_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execSteamItemInstanceID_Equals_Exec)
{
	P_GET_STRUCT(FSteamItemInstanceID,Z_Param_A);
	P_GET_STRUCT(FSteamItemInstanceID,Z_Param_B);
	P_GET_ENUM_REF(ESteamCoreProIdentical,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamUtilities::SteamItemInstanceID_Equals_Exec(Z_Param_A,Z_Param_B,(ESteamCoreProIdentical&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// End Class USteamUtilities Function SteamItemInstanceID_Equals_Exec

// Begin Class USteamUtilities Function StopListeningForSessionInviteAccepted
struct Z_Construct_UFunction_USteamUtilities_StopListeningForSessionInviteAccepted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_StopListeningForSessionInviteAccepted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "StopListeningForSessionInviteAccepted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_StopListeningForSessionInviteAccepted_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_StopListeningForSessionInviteAccepted_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USteamUtilities_StopListeningForSessionInviteAccepted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_StopListeningForSessionInviteAccepted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execStopListeningForSessionInviteAccepted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamUtilities::StopListeningForSessionInviteAccepted();
	P_NATIVE_END;
}
// End Class USteamUtilities Function StopListeningForSessionInviteAccepted

// Begin Class USteamUtilities Function TryJoinServer
struct Z_Construct_UFunction_USteamUtilities_TryJoinServer_Statics
{
	struct SteamUtilities_eventTryJoinServer_Parms
	{
		FString OutErrorMessage;
		const UObject* WorldContextObject;
		FSteamServerAddr ServerAddr;
		APlayerController* SpecificPlayer;
		bool bUsingSockets;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "SteamCorePro|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Try joining a specific steam server\n\x09 */" },
#endif
		{ "CPP_Default_bUsingSockets", "true" },
		{ "CPP_Default_SpecificPlayer", "None" },
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Try joining a specific steam server" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerAddr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutErrorMessage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ServerAddr;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpecificPlayer;
	static void NewProp_bUsingSockets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsingSockets;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_TryJoinServer_Statics::NewProp_OutErrorMessage = { "OutErrorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventTryJoinServer_Parms, OutErrorMessage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamUtilities_TryJoinServer_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventTryJoinServer_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_TryJoinServer_Statics::NewProp_ServerAddr = { "ServerAddr", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventTryJoinServer_Parms, ServerAddr), Z_Construct_UScriptStruct_FSteamServerAddr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerAddr_MetaData), NewProp_ServerAddr_MetaData) }; // 392743231
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamUtilities_TryJoinServer_Statics::NewProp_SpecificPlayer = { "SpecificPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventTryJoinServer_Parms, SpecificPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamUtilities_TryJoinServer_Statics::NewProp_bUsingSockets_SetBit(void* Obj)
{
	((SteamUtilities_eventTryJoinServer_Parms*)Obj)->bUsingSockets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_TryJoinServer_Statics::NewProp_bUsingSockets = { "bUsingSockets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventTryJoinServer_Parms), &Z_Construct_UFunction_USteamUtilities_TryJoinServer_Statics::NewProp_bUsingSockets_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamUtilities_TryJoinServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventTryJoinServer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_TryJoinServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventTryJoinServer_Parms), &Z_Construct_UFunction_USteamUtilities_TryJoinServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_TryJoinServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_TryJoinServer_Statics::NewProp_OutErrorMessage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_TryJoinServer_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_TryJoinServer_Statics::NewProp_ServerAddr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_TryJoinServer_Statics::NewProp_SpecificPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_TryJoinServer_Statics::NewProp_bUsingSockets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_TryJoinServer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_TryJoinServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_TryJoinServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "TryJoinServer", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_TryJoinServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_TryJoinServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_TryJoinServer_Statics::SteamUtilities_eventTryJoinServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_TryJoinServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_TryJoinServer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_TryJoinServer_Statics::SteamUtilities_eventTryJoinServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_TryJoinServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_TryJoinServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execTryJoinServer)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutErrorMessage);
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FSteamServerAddr,Z_Param_Out_ServerAddr);
	P_GET_OBJECT(APlayerController,Z_Param_SpecificPlayer);
	P_GET_UBOOL(Z_Param_bUsingSockets);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::TryJoinServer(Z_Param_Out_OutErrorMessage,Z_Param_WorldContextObject,Z_Param_Out_ServerAddr,Z_Param_SpecificPlayer,Z_Param_bUsingSockets);
	P_NATIVE_END;
}
// End Class USteamUtilities Function TryJoinServer

// Begin Class USteamUtilities Function UnmuteRemoteTalker
struct Z_Construct_UFunction_USteamUtilities_UnmuteRemoteTalker_Statics
{
	struct SteamUtilities_eventUnmuteRemoteTalker_Parms
	{
		UObject* WorldContextObject;
		int32 LocalUserNum;
		APlayerState* PlayerState;
		bool bIsSystemWide;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities|Voice" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * UnMute a remote user for a given local player\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* UnMute a remote user for a given local player" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocalUserNum;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
	static void NewProp_bIsSystemWide_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSystemWide;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamUtilities_UnmuteRemoteTalker_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventUnmuteRemoteTalker_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamUtilities_UnmuteRemoteTalker_Statics::NewProp_LocalUserNum = { "LocalUserNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventUnmuteRemoteTalker_Parms, LocalUserNum), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamUtilities_UnmuteRemoteTalker_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventUnmuteRemoteTalker_Parms, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamUtilities_UnmuteRemoteTalker_Statics::NewProp_bIsSystemWide_SetBit(void* Obj)
{
	((SteamUtilities_eventUnmuteRemoteTalker_Parms*)Obj)->bIsSystemWide = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_UnmuteRemoteTalker_Statics::NewProp_bIsSystemWide = { "bIsSystemWide", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventUnmuteRemoteTalker_Parms), &Z_Construct_UFunction_USteamUtilities_UnmuteRemoteTalker_Statics::NewProp_bIsSystemWide_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamUtilities_UnmuteRemoteTalker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventUnmuteRemoteTalker_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_UnmuteRemoteTalker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventUnmuteRemoteTalker_Parms), &Z_Construct_UFunction_USteamUtilities_UnmuteRemoteTalker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_UnmuteRemoteTalker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_UnmuteRemoteTalker_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_UnmuteRemoteTalker_Statics::NewProp_LocalUserNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_UnmuteRemoteTalker_Statics::NewProp_PlayerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_UnmuteRemoteTalker_Statics::NewProp_bIsSystemWide,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_UnmuteRemoteTalker_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_UnmuteRemoteTalker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_UnmuteRemoteTalker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "UnmuteRemoteTalker", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_UnmuteRemoteTalker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_UnmuteRemoteTalker_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_UnmuteRemoteTalker_Statics::SteamUtilities_eventUnmuteRemoteTalker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_UnmuteRemoteTalker_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_UnmuteRemoteTalker_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_UnmuteRemoteTalker_Statics::SteamUtilities_eventUnmuteRemoteTalker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_UnmuteRemoteTalker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_UnmuteRemoteTalker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execUnmuteRemoteTalker)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_LocalUserNum);
	P_GET_OBJECT(APlayerState,Z_Param_PlayerState);
	P_GET_UBOOL(Z_Param_bIsSystemWide);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::UnmuteRemoteTalker(Z_Param_WorldContextObject,Z_Param_LocalUserNum,Z_Param_PlayerState,Z_Param_bIsSystemWide);
	P_NATIVE_END;
}
// End Class USteamUtilities Function UnmuteRemoteTalker

// Begin Class USteamUtilities Function WriteBytesToFile
struct Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics
{
	struct SteamUtilities_eventWriteBytesToFile_Parms
	{
		bool bOverwriteIfExists;
		FString AbsoluteFilePath;
		TArray<uint8> DataBuffer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Writes an array of uint8 to a binary file\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Writes an array of uint8 to a binary file" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbsoluteFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataBuffer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverwriteIfExists_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverwriteIfExists;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AbsoluteFilePath;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DataBuffer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataBuffer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_bOverwriteIfExists_SetBit(void* Obj)
{
	((SteamUtilities_eventWriteBytesToFile_Parms*)Obj)->bOverwriteIfExists = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_bOverwriteIfExists = { "bOverwriteIfExists", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventWriteBytesToFile_Parms), &Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_bOverwriteIfExists_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_AbsoluteFilePath = { "AbsoluteFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventWriteBytesToFile_Parms, AbsoluteFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbsoluteFilePath_MetaData), NewProp_AbsoluteFilePath_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_DataBuffer_Inner = { "DataBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_DataBuffer = { "DataBuffer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamUtilities_eventWriteBytesToFile_Parms, DataBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataBuffer_MetaData), NewProp_DataBuffer_MetaData) };
void Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamUtilities_eventWriteBytesToFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamUtilities_eventWriteBytesToFile_Parms), &Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_bOverwriteIfExists,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_AbsoluteFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_DataBuffer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_DataBuffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "WriteBytesToFile", nullptr, nullptr, Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::SteamUtilities_eventWriteBytesToFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::SteamUtilities_eventWriteBytesToFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamUtilities_WriteBytesToFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamUtilities_WriteBytesToFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamUtilities::execWriteBytesToFile)
{
	P_GET_UBOOL(Z_Param_bOverwriteIfExists);
	P_GET_PROPERTY(FStrProperty,Z_Param_AbsoluteFilePath);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_DataBuffer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamUtilities::WriteBytesToFile(Z_Param_bOverwriteIfExists,Z_Param_AbsoluteFilePath,Z_Param_Out_DataBuffer);
	P_NATIVE_END;
}
// End Class USteamUtilities Function WriteBytesToFile

// Begin Class USteamUtilities
void USteamUtilities::StaticRegisterNativesUSteamUtilities()
{
	UClass* Class = USteamUtilities::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BP_BytesToString", &USteamUtilities::execBP_BytesToString },
		{ "BP_StringToBytes", &USteamUtilities::execBP_StringToBytes },
		{ "BreakInventoryUpdateHandle", &USteamUtilities::execBreakInventoryUpdateHandle },
		{ "BreakPublishedFileID", &USteamUtilities::execBreakPublishedFileID },
		{ "BreakSteamGameID", &USteamUtilities::execBreakSteamGameID },
		{ "BreakSteamID", &USteamUtilities::execBreakSteamID },
		{ "BreakSteamItemInstanceID", &USteamUtilities::execBreakSteamItemInstanceID },
		{ "BreakTicketHandle", &USteamUtilities::execBreakTicketHandle },
		{ "BreakUGCHandle", &USteamUtilities::execBreakUGCHandle },
		{ "ConstructServerFilter", &USteamUtilities::execConstructServerFilter },
		{ "EncryptString", &USteamUtilities::execEncryptString },
		{ "Equal", &USteamUtilities::execEqual },
		{ "Equal_Exec", &USteamUtilities::execEqual_Exec },
		{ "FromUnixTimestamp", &USteamUtilities::execFromUnixTimestamp },
		{ "GetAccountType", &USteamUtilities::execGetAccountType },
		{ "GetFriendsList", &USteamUtilities::execGetFriendsList },
		{ "GetGameEngineInitialized", &USteamUtilities::execGetGameEngineInitialized },
		{ "GetHostPingData", &USteamUtilities::execGetHostPingData },
		{ "GetInteger", &USteamUtilities::execGetInteger },
		{ "GetPingFromHostData", &USteamUtilities::execGetPingFromHostData },
		{ "GetPublicIp", &USteamUtilities::execGetPublicIp },
		{ "GetSteamIdFromPlayerState", &USteamUtilities::execGetSteamIdFromPlayerState },
		{ "GetString", &USteamUtilities::execGetString },
		{ "GetType", &USteamUtilities::execGetType },
		{ "IsGameIDValid", &USteamUtilities::execIsGameIDValid },
		{ "IsGameIDValid_Exec", &USteamUtilities::execIsGameIDValid_Exec },
		{ "IsLobby", &USteamUtilities::execIsLobby },
		{ "IsLocalPlayerTalking", &USteamUtilities::execIsLocalPlayerTalking },
		{ "IsPlayerMuted", &USteamUtilities::execIsPlayerMuted },
		{ "IsPublishedFileIDValid", &USteamUtilities::execIsPublishedFileIDValid },
		{ "IsPublishedFileIDValid_Exec", &USteamUtilities::execIsPublishedFileIDValid_Exec },
		{ "IsRecalculatingPing", &USteamUtilities::execIsRecalculatingPing },
		{ "IsRemotePlayerTalking", &USteamUtilities::execIsRemotePlayerTalking },
		{ "IsSteamAvailable", &USteamUtilities::execIsSteamAvailable },
		{ "IsSteamIDValid_Exec", &USteamUtilities::execIsSteamIDValid_Exec },
		{ "IsSteamInventoryUpdateHandleValid", &USteamUtilities::execIsSteamInventoryUpdateHandleValid },
		{ "IsSteamInventoryUpdateHandleValid_Exec", &USteamUtilities::execIsSteamInventoryUpdateHandleValid_Exec },
		{ "IsSteamServerInitialized", &USteamUtilities::execIsSteamServerInitialized },
		{ "IsSteamTicketHandleValid", &USteamUtilities::execIsSteamTicketHandleValid },
		{ "IsSteamTicketHandleValid_Exec", &USteamUtilities::execIsSteamTicketHandleValid_Exec },
		{ "IsUGCHandleValid", &USteamUtilities::execIsUGCHandleValid },
		{ "IsUGCHandleValid_Exec", &USteamUtilities::execIsUGCHandleValid_Exec },
		{ "IsUsingP2PRelays", &USteamUtilities::execIsUsingP2PRelays },
		{ "IsValid", &USteamUtilities::execIsValid },
		{ "K2_HexToBytes", &USteamUtilities::execK2_HexToBytes },
		{ "K2_HexToString", &USteamUtilities::execK2_HexToString },
		{ "K2_IsPlayerInSession", &USteamUtilities::execK2_IsPlayerInSession },
		{ "KickPlayer", &USteamUtilities::execKickPlayer },
		{ "ListenForSessionInviteAccepted", &USteamUtilities::execListenForSessionInviteAccepted },
		{ "ListenForSteamMessages", &USteamUtilities::execListenForSteamMessages },
		{ "MakeInteger", &USteamUtilities::execMakeInteger },
		{ "MakeInventoryUpdateHandle", &USteamUtilities::execMakeInventoryUpdateHandle },
		{ "MakePublishedFileID", &USteamUtilities::execMakePublishedFileID },
		{ "MakeSearchInteger", &USteamUtilities::execMakeSearchInteger },
		{ "MakeSearchString", &USteamUtilities::execMakeSearchString },
		{ "MakeSteamGameID", &USteamUtilities::execMakeSteamGameID },
		{ "MakeSteamID", &USteamUtilities::execMakeSteamID },
		{ "MakeSteamItemInstanceID", &USteamUtilities::execMakeSteamItemInstanceID },
		{ "MakeString", &USteamUtilities::execMakeString },
		{ "MakeTicketHandle", &USteamUtilities::execMakeTicketHandle },
		{ "MakeUGCHandle", &USteamUtilities::execMakeUGCHandle },
		{ "MuteRemoteTalker", &USteamUtilities::execMuteRemoteTalker },
		{ "NotEqual", &USteamUtilities::execNotEqual },
		{ "PublishedFileID_Equals", &USteamUtilities::execPublishedFileID_Equals },
		{ "PublishedFileID_Equals_Exec", &USteamUtilities::execPublishedFileID_Equals_Exec },
		{ "PublishedFileID_NotEquals", &USteamUtilities::execPublishedFileID_NotEquals },
		{ "ReadFileToBytes", &USteamUtilities::execReadFileToBytes },
		{ "ReadFriendList", &USteamUtilities::execReadFriendList },
		{ "SetLocalHost", &USteamUtilities::execSetLocalHost },
		{ "SetPSNId", &USteamUtilities::execSetPSNId },
		{ "SetStadiaId", &USteamUtilities::execSetStadiaId },
		{ "SetSteamId64", &USteamUtilities::execSetSteamId64 },
		{ "SetType", &USteamUtilities::execSetType },
		{ "SetXboxPairwiseId", &USteamUtilities::execSetXboxPairwiseId },
		{ "SteamItemInstanceID_Equals", &USteamUtilities::execSteamItemInstanceID_Equals },
		{ "SteamItemInstanceID_Equals_Exec", &USteamUtilities::execSteamItemInstanceID_Equals_Exec },
		{ "StopListeningForSessionInviteAccepted", &USteamUtilities::execStopListeningForSessionInviteAccepted },
		{ "TryJoinServer", &USteamUtilities::execTryJoinServer },
		{ "UnmuteRemoteTalker", &USteamUtilities::execUnmuteRemoteTalker },
		{ "WriteBytesToFile", &USteamUtilities::execWriteBytesToFile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamUtilities);
UClass* Z_Construct_UClass_USteamUtilities_NoRegister()
{
	return USteamUtilities::StaticClass();
}
struct Z_Construct_UClass_USteamUtilities_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamCorePro/SteamUtilities.h" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamUtilities.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamUtilities_BP_BytesToString, "BP_BytesToString" }, // 2407861763
		{ &Z_Construct_UFunction_USteamUtilities_BP_StringToBytes, "BP_StringToBytes" }, // 827863840
		{ &Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle, "BreakInventoryUpdateHandle" }, // 4288621399
		{ &Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID, "BreakPublishedFileID" }, // 222556165
		{ &Z_Construct_UFunction_USteamUtilities_BreakSteamGameID, "BreakSteamGameID" }, // 4087475098
		{ &Z_Construct_UFunction_USteamUtilities_BreakSteamID, "BreakSteamID" }, // 759989985
		{ &Z_Construct_UFunction_USteamUtilities_BreakSteamItemInstanceID, "BreakSteamItemInstanceID" }, // 1919251049
		{ &Z_Construct_UFunction_USteamUtilities_BreakTicketHandle, "BreakTicketHandle" }, // 3322263478
		{ &Z_Construct_UFunction_USteamUtilities_BreakUGCHandle, "BreakUGCHandle" }, // 1588226933
		{ &Z_Construct_UFunction_USteamUtilities_ConstructServerFilter, "ConstructServerFilter" }, // 3220160130
		{ &Z_Construct_UFunction_USteamUtilities_EncryptString, "EncryptString" }, // 3862857413
		{ &Z_Construct_UFunction_USteamUtilities_Equal, "Equal" }, // 860180433
		{ &Z_Construct_UFunction_USteamUtilities_Equal_Exec, "Equal_Exec" }, // 2324160294
		{ &Z_Construct_UFunction_USteamUtilities_FromUnixTimestamp, "FromUnixTimestamp" }, // 1925209524
		{ &Z_Construct_UFunction_USteamUtilities_GetAccountType, "GetAccountType" }, // 469133500
		{ &Z_Construct_UFunction_USteamUtilities_GetFriendsList, "GetFriendsList" }, // 3308528141
		{ &Z_Construct_UFunction_USteamUtilities_GetGameEngineInitialized, "GetGameEngineInitialized" }, // 112799683
		{ &Z_Construct_UFunction_USteamUtilities_GetHostPingData, "GetHostPingData" }, // 2543678977
		{ &Z_Construct_UFunction_USteamUtilities_GetInteger, "GetInteger" }, // 4097263900
		{ &Z_Construct_UFunction_USteamUtilities_GetPingFromHostData, "GetPingFromHostData" }, // 4269454858
		{ &Z_Construct_UFunction_USteamUtilities_GetPublicIp, "GetPublicIp" }, // 3703942819
		{ &Z_Construct_UFunction_USteamUtilities_GetSteamIdFromPlayerState, "GetSteamIdFromPlayerState" }, // 274278689
		{ &Z_Construct_UFunction_USteamUtilities_GetString, "GetString" }, // 2264524476
		{ &Z_Construct_UFunction_USteamUtilities_GetType, "GetType" }, // 1131703316
		{ &Z_Construct_UFunction_USteamUtilities_IsGameIDValid, "IsGameIDValid" }, // 2834239255
		{ &Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec, "IsGameIDValid_Exec" }, // 1966238810
		{ &Z_Construct_UFunction_USteamUtilities_IsLobby, "IsLobby" }, // 3432415354
		{ &Z_Construct_UFunction_USteamUtilities_IsLocalPlayerTalking, "IsLocalPlayerTalking" }, // 1169554638
		{ &Z_Construct_UFunction_USteamUtilities_IsPlayerMuted, "IsPlayerMuted" }, // 2080842315
		{ &Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid, "IsPublishedFileIDValid" }, // 1774867887
		{ &Z_Construct_UFunction_USteamUtilities_IsPublishedFileIDValid_Exec, "IsPublishedFileIDValid_Exec" }, // 173539256
		{ &Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing, "IsRecalculatingPing" }, // 3355327410
		{ &Z_Construct_UFunction_USteamUtilities_IsRemotePlayerTalking, "IsRemotePlayerTalking" }, // 3649610083
		{ &Z_Construct_UFunction_USteamUtilities_IsSteamAvailable, "IsSteamAvailable" }, // 3513197042
		{ &Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec, "IsSteamIDValid_Exec" }, // 2116664836
		{ &Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid, "IsSteamInventoryUpdateHandleValid" }, // 1493097665
		{ &Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec, "IsSteamInventoryUpdateHandleValid_Exec" }, // 3946134608
		{ &Z_Construct_UFunction_USteamUtilities_IsSteamServerInitialized, "IsSteamServerInitialized" }, // 879510366
		{ &Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid, "IsSteamTicketHandleValid" }, // 214244463
		{ &Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec, "IsSteamTicketHandleValid_Exec" }, // 3813929290
		{ &Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid, "IsUGCHandleValid" }, // 1441393542
		{ &Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec, "IsUGCHandleValid_Exec" }, // 320573581
		{ &Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays, "IsUsingP2PRelays" }, // 3998309510
		{ &Z_Construct_UFunction_USteamUtilities_IsValid, "IsValid" }, // 2445049325
		{ &Z_Construct_UFunction_USteamUtilities_K2_HexToBytes, "K2_HexToBytes" }, // 395939010
		{ &Z_Construct_UFunction_USteamUtilities_K2_HexToString, "K2_HexToString" }, // 3207562060
		{ &Z_Construct_UFunction_USteamUtilities_K2_IsPlayerInSession, "K2_IsPlayerInSession" }, // 513994971
		{ &Z_Construct_UFunction_USteamUtilities_KickPlayer, "KickPlayer" }, // 591847077
		{ &Z_Construct_UFunction_USteamUtilities_ListenForSessionInviteAccepted, "ListenForSessionInviteAccepted" }, // 1293541055
		{ &Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages, "ListenForSteamMessages" }, // 3022970377
		{ &Z_Construct_UFunction_USteamUtilities_MakeInteger, "MakeInteger" }, // 1147666647
		{ &Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle, "MakeInventoryUpdateHandle" }, // 18675991
		{ &Z_Construct_UFunction_USteamUtilities_MakePublishedFileID, "MakePublishedFileID" }, // 3231250216
		{ &Z_Construct_UFunction_USteamUtilities_MakeSearchInteger, "MakeSearchInteger" }, // 366742306
		{ &Z_Construct_UFunction_USteamUtilities_MakeSearchString, "MakeSearchString" }, // 3556787314
		{ &Z_Construct_UFunction_USteamUtilities_MakeSteamGameID, "MakeSteamGameID" }, // 1605847607
		{ &Z_Construct_UFunction_USteamUtilities_MakeSteamID, "MakeSteamID" }, // 1373249282
		{ &Z_Construct_UFunction_USteamUtilities_MakeSteamItemInstanceID, "MakeSteamItemInstanceID" }, // 583183400
		{ &Z_Construct_UFunction_USteamUtilities_MakeString, "MakeString" }, // 3880454374
		{ &Z_Construct_UFunction_USteamUtilities_MakeTicketHandle, "MakeTicketHandle" }, // 173465109
		{ &Z_Construct_UFunction_USteamUtilities_MakeUGCHandle, "MakeUGCHandle" }, // 1791810885
		{ &Z_Construct_UFunction_USteamUtilities_MuteRemoteTalker, "MuteRemoteTalker" }, // 1993467196
		{ &Z_Construct_UFunction_USteamUtilities_NotEqual, "NotEqual" }, // 2188849933
		{ &Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals, "PublishedFileID_Equals" }, // 1036594841
		{ &Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec, "PublishedFileID_Equals_Exec" }, // 2115327347
		{ &Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals, "PublishedFileID_NotEquals" }, // 2697616438
		{ &Z_Construct_UFunction_USteamUtilities_ReadFileToBytes, "ReadFileToBytes" }, // 34053049
		{ &Z_Construct_UFunction_USteamUtilities_ReadFriendList, "ReadFriendList" }, // 2258232406
		{ &Z_Construct_UFunction_USteamUtilities_SetLocalHost, "SetLocalHost" }, // 1087852291
		{ &Z_Construct_UFunction_USteamUtilities_SetPSNId, "SetPSNId" }, // 2797520962
		{ &Z_Construct_UFunction_USteamUtilities_SetStadiaId, "SetStadiaId" }, // 322709212
		{ &Z_Construct_UFunction_USteamUtilities_SetSteamId64, "SetSteamId64" }, // 81510108
		{ &Z_Construct_UFunction_USteamUtilities_SetType, "SetType" }, // 2108855407
		{ &Z_Construct_UFunction_USteamUtilities_SetXboxPairwiseId, "SetXboxPairwiseId" }, // 987648378
		{ &Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals, "SteamItemInstanceID_Equals" }, // 3760411068
		{ &Z_Construct_UFunction_USteamUtilities_SteamItemInstanceID_Equals_Exec, "SteamItemInstanceID_Equals_Exec" }, // 197576582
		{ &Z_Construct_UFunction_USteamUtilities_StopListeningForSessionInviteAccepted, "StopListeningForSessionInviteAccepted" }, // 3201331983
		{ &Z_Construct_UFunction_USteamUtilities_TryJoinServer, "TryJoinServer" }, // 1731852202
		{ &Z_Construct_UFunction_USteamUtilities_UnmuteRemoteTalker, "UnmuteRemoteTalker" }, // 801843899
		{ &Z_Construct_UFunction_USteamUtilities_WriteBytesToFile, "WriteBytesToFile" }, // 1468299198
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamUtilities>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USteamUtilities_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamUtilities_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamUtilities_Statics::ClassParams = {
	&USteamUtilities::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamUtilities_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamUtilities_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamUtilities()
{
	if (!Z_Registration_Info_UClass_USteamUtilities.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamUtilities.OuterSingleton, Z_Construct_UClass_USteamUtilities_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamUtilities.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamUtilities>()
{
	return USteamUtilities::StaticClass();
}
USteamUtilities::USteamUtilities(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamUtilities);
USteamUtilities::~USteamUtilities() {}
// End Class USteamUtilities

// Begin Registration
struct Z_CompiledInDeferFile_FID_MiniPlanes_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamUtilities_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFriendListType_StaticEnum, TEXT("EFriendListType"), &Z_Registration_Info_UEnum_EFriendListType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3442710494U) },
		{ ESteamCoreProValid_StaticEnum, TEXT("ESteamCoreProValid"), &Z_Registration_Info_UEnum_ESteamCoreProValid, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3638519598U) },
		{ ESteamCoreProIdentical_StaticEnum, TEXT("ESteamCoreProIdentical"), &Z_Registration_Info_UEnum_ESteamCoreProIdentical, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1773089156U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreProVoice, USteamCoreProVoice::StaticClass, TEXT("USteamCoreProVoice"), &Z_Registration_Info_UClass_USteamCoreProVoice, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreProVoice), 3984966452U) },
		{ Z_Construct_UClass_USteamCoreProAsyncActionListenForControllerChange, USteamCoreProAsyncActionListenForControllerChange::StaticClass, TEXT("USteamCoreProAsyncActionListenForControllerChange"), &Z_Registration_Info_UClass_USteamCoreProAsyncActionListenForControllerChange, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreProAsyncActionListenForControllerChange), 1631429454U) },
		{ Z_Construct_UClass_USteamUtilities, USteamUtilities::StaticClass, TEXT("USteamUtilities"), &Z_Registration_Info_UClass_USteamUtilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamUtilities), 4087996109U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniPlanes_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamUtilities_h_3860774006(TEXT("/Script/SteamCorePro"),
	Z_CompiledInDeferFile_FID_MiniPlanes_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamUtilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MiniPlanes_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamUtilities_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MiniPlanes_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamUtilities_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MiniPlanes_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamUtilities_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
