// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h"
#include "SteamCorePro/Public/SteamCorePro/SteamTypes.h"
#include "SteamCorePro/Public/SteamMatchmaking/SteamMatchmakingTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamMatchmakingAsyncActions() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProAsyncAction();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProCreateSession();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProCreateSession_NoRegister();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProDestroySession();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProDestroySession_NoRegister();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProFindSession();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProFindSession_NoRegister();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionCreateLobby();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionCreateLobby_NoRegister();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionJoinLobby();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionJoinLobby_NoRegister();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionRequestLobbyList();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionRequestLobbyList_NoRegister();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProUpdateSession();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProUpdateSession_NoRegister();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamLobbyType();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamSessionFindType();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_FindSteamSessionsResultDelegate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnCreateLobbyAsyncDelegate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnJoinLobbyAsyncDelegate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnRequestLobbyListAsyncDelegate__DelegateSignature();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FCreateLobbyData();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FJoinLobbyData();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyMatchList();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamSessionResult();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamSessionSearchSetting();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamSessionSetting();
STEAMCORESHARED_API UEnum* Z_Construct_UEnum_SteamCoreShared_ESteamLobbyDistanceFilter();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Delegate FOnRequestLobbyListAsyncDelegate
struct Z_Construct_UDelegateFunction_SteamCorePro_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnRequestLobbyListAsyncDelegate_Parms
	{
		FLobbyMatchList Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnRequestLobbyListAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FLobbyMatchList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3498988421
void Z_Construct_UDelegateFunction_SteamCorePro_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnRequestLobbyListAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnRequestLobbyListAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnRequestLobbyListAsyncDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnRequestLobbyListAsyncDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnRequestLobbyListAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnRequestLobbyListAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnRequestLobbyListAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestLobbyListAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnRequestLobbyListAsyncDelegate, FLobbyMatchList const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnRequestLobbyListAsyncDelegate_Parms
	{
		FLobbyMatchList Data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnRequestLobbyListAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnRequestLobbyListAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnRequestLobbyListAsyncDelegate

// Begin Delegate FOnCreateLobbyAsyncDelegate
struct Z_Construct_UDelegateFunction_SteamCorePro_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnCreateLobbyAsyncDelegate_Parms
	{
		FCreateLobbyData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnCreateLobbyAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FCreateLobbyData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1972013807
void Z_Construct_UDelegateFunction_SteamCorePro_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnCreateLobbyAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnCreateLobbyAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnCreateLobbyAsyncDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnCreateLobbyAsyncDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnCreateLobbyAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnCreateLobbyAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnCreateLobbyAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCreateLobbyAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnCreateLobbyAsyncDelegate, FCreateLobbyData const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnCreateLobbyAsyncDelegate_Parms
	{
		FCreateLobbyData Data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnCreateLobbyAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnCreateLobbyAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnCreateLobbyAsyncDelegate

// Begin Delegate FOnJoinLobbyAsyncDelegate
struct Z_Construct_UDelegateFunction_SteamCorePro_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnJoinLobbyAsyncDelegate_Parms
	{
		FJoinLobbyData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnJoinLobbyAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FJoinLobbyData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 6361406
void Z_Construct_UDelegateFunction_SteamCorePro_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnJoinLobbyAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnJoinLobbyAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnJoinLobbyAsyncDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnJoinLobbyAsyncDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnJoinLobbyAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnJoinLobbyAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnJoinLobbyAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnJoinLobbyAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnJoinLobbyAsyncDelegate, FJoinLobbyData const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnJoinLobbyAsyncDelegate_Parms
	{
		FJoinLobbyData Data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnJoinLobbyAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnJoinLobbyAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnJoinLobbyAsyncDelegate

// Begin Class USteamCoreProMatchmakingAsyncActionCreateLobby Function CreateLobbyAsync
struct Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics
{
	struct SteamCoreProMatchmakingAsyncActionCreateLobby_eventCreateLobbyAsync_Parms
	{
		UObject* WorldContextObject;
		ESteamLobbyType LobbyType;
		int32 MaxMembers;
		float Timeout;
		USteamCoreProMatchmakingAsyncActionCreateLobby* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Matchmaking|Async" },
		{ "Comment", "/**\n\x09* Create a new matchmaking lobby.\n\x09*\n\x09* @param\x09LobbyType\x09\x09The type and visibility of this lobby. This can be changed later via SetLobbyType.\n\x09* @param\x09MaxMembers\x09\x09\x09The maximum number of players that can join this lobby. This can not be above 250.\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Create Lobby" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ToolTip", "Create a new matchmaking lobby.\n\n@param        LobbyType               The type and visibility of this lobby. This can be changed later via SetLobbyType.\n@param        MaxMembers                      The maximum number of players that can join this lobby. This can not be above 250.\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LobbyType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LobbyType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMembers;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingAsyncActionCreateLobby_eventCreateLobbyAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_LobbyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_LobbyType = { "LobbyType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingAsyncActionCreateLobby_eventCreateLobbyAsync_Parms, LobbyType), Z_Construct_UEnum_SteamCorePro_ESteamLobbyType, METADATA_PARAMS(0, nullptr) }; // 3095676667
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_MaxMembers = { "MaxMembers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingAsyncActionCreateLobby_eventCreateLobbyAsync_Parms, MaxMembers), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingAsyncActionCreateLobby_eventCreateLobbyAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingAsyncActionCreateLobby_eventCreateLobbyAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionCreateLobby_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_LobbyType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_LobbyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_MaxMembers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionCreateLobby, nullptr, "CreateLobbyAsync", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::SteamCoreProMatchmakingAsyncActionCreateLobby_eventCreateLobbyAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::SteamCoreProMatchmakingAsyncActionCreateLobby_eventCreateLobbyAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_CreateLobbyAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_CreateLobbyAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProMatchmakingAsyncActionCreateLobby::execCreateLobbyAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM(ESteamLobbyType,Z_Param_LobbyType);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxMembers);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreProMatchmakingAsyncActionCreateLobby**)Z_Param__Result=USteamCoreProMatchmakingAsyncActionCreateLobby::CreateLobbyAsync(Z_Param_WorldContextObject,ESteamLobbyType(Z_Param_LobbyType),Z_Param_MaxMembers,Z_Param_Timeout);
	P_NATIVE_END;
}
// End Class USteamCoreProMatchmakingAsyncActionCreateLobby Function CreateLobbyAsync

// Begin Class USteamCoreProMatchmakingAsyncActionCreateLobby Function HandleCallback
struct Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_HandleCallback_Statics
{
	struct SteamCoreProMatchmakingAsyncActionCreateLobby_eventHandleCallback_Parms
	{
		FCreateLobbyData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingAsyncActionCreateLobby_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FCreateLobbyData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1972013807
void Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreProMatchmakingAsyncActionCreateLobby_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProMatchmakingAsyncActionCreateLobby_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionCreateLobby, nullptr, "HandleCallback", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::SteamCoreProMatchmakingAsyncActionCreateLobby_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::SteamCoreProMatchmakingAsyncActionCreateLobby_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProMatchmakingAsyncActionCreateLobby::execHandleCallback)
{
	P_GET_STRUCT_REF(FCreateLobbyData,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// End Class USteamCoreProMatchmakingAsyncActionCreateLobby Function HandleCallback

// Begin Class USteamCoreProMatchmakingAsyncActionCreateLobby
void USteamCoreProMatchmakingAsyncActionCreateLobby::StaticRegisterNativesUSteamCoreProMatchmakingAsyncActionCreateLobby()
{
	UClass* Class = USteamCoreProMatchmakingAsyncActionCreateLobby::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateLobbyAsync", &USteamCoreProMatchmakingAsyncActionCreateLobby::execCreateLobbyAsync },
		{ "HandleCallback", &USteamCoreProMatchmakingAsyncActionCreateLobby::execHandleCallback },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreProMatchmakingAsyncActionCreateLobby);
UClass* Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionCreateLobby_NoRegister()
{
	return USteamCoreProMatchmakingAsyncActionCreateLobby::StaticClass();
}
struct Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionCreateLobby_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreProMatchmakingAsyncActionCreateLobby\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreProMatchmakingAsyncActionCreateLobby\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_CreateLobbyAsync, "CreateLobbyAsync" }, // 2261710984
		{ &Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionCreateLobby_HandleCallback, "HandleCallback" }, // 3214096949
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreProMatchmakingAsyncActionCreateLobby>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionCreateLobby_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreProMatchmakingAsyncActionCreateLobby, OnCallback), Z_Construct_UDelegateFunction_SteamCorePro_OnCreateLobbyAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 1564049930
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionCreateLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionCreateLobby_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionCreateLobby_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionCreateLobby_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreProAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionCreateLobby_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionCreateLobby_Statics::ClassParams = {
	&USteamCoreProMatchmakingAsyncActionCreateLobby::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionCreateLobby_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionCreateLobby_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionCreateLobby_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionCreateLobby_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionCreateLobby()
{
	if (!Z_Registration_Info_UClass_USteamCoreProMatchmakingAsyncActionCreateLobby.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreProMatchmakingAsyncActionCreateLobby.OuterSingleton, Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionCreateLobby_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreProMatchmakingAsyncActionCreateLobby.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamCoreProMatchmakingAsyncActionCreateLobby>()
{
	return USteamCoreProMatchmakingAsyncActionCreateLobby::StaticClass();
}
USteamCoreProMatchmakingAsyncActionCreateLobby::USteamCoreProMatchmakingAsyncActionCreateLobby(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreProMatchmakingAsyncActionCreateLobby);
USteamCoreProMatchmakingAsyncActionCreateLobby::~USteamCoreProMatchmakingAsyncActionCreateLobby() {}
// End Class USteamCoreProMatchmakingAsyncActionCreateLobby

// Begin Class USteamCoreProMatchmakingAsyncActionRequestLobbyList Function HandleCallback
struct Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics
{
	struct SteamCoreProMatchmakingAsyncActionRequestLobbyList_eventHandleCallback_Parms
	{
		FLobbyMatchList Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingAsyncActionRequestLobbyList_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FLobbyMatchList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3498988421
void Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreProMatchmakingAsyncActionRequestLobbyList_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProMatchmakingAsyncActionRequestLobbyList_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionRequestLobbyList, nullptr, "HandleCallback", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::SteamCoreProMatchmakingAsyncActionRequestLobbyList_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::SteamCoreProMatchmakingAsyncActionRequestLobbyList_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionRequestLobbyList_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionRequestLobbyList_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProMatchmakingAsyncActionRequestLobbyList::execHandleCallback)
{
	P_GET_STRUCT_REF(FLobbyMatchList,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// End Class USteamCoreProMatchmakingAsyncActionRequestLobbyList Function HandleCallback

// Begin Class USteamCoreProMatchmakingAsyncActionRequestLobbyList Function RequestLobbyListAsync
struct Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics
{
	struct SteamCoreProMatchmakingAsyncActionRequestLobbyList_eventRequestLobbyListAsync_Parms
	{
		UObject* WorldContextObject;
		float Timeout;
		USteamCoreProMatchmakingAsyncActionRequestLobbyList* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Matchmaking|Async" },
		{ "Comment", "/**\n\x09* Get a filtered list of relevant lobbies.\n\x09* There can only be one active lobby search at a time. The old request will be canceled if a new one is started. Depending on the users connection to the Steam back-end, this call can take from 300ms to 5 seconds to complete, and has a timeout of 20 seconds.\n\x09* To filter the results you MUST call the AddRequestLobbyList* functions before calling this. The filters are cleared on each call to this function.\n\x09* If AddRequestLobbyListDistanceFilter is not called, k_ELobbyDistanceFilterDefault will be used, which will only find matches in the same or nearby regions.\n\x09* This will only return lobbies that are not full, and only lobbies that are k_ELobbyTypePublic or k_ELobbyTypeInvisible, and are set to joinable with SetLobbyJoinable.\n\x09*\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09* \n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request Lobby List" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ToolTip", "Get a filtered list of relevant lobbies.\nThere can only be one active lobby search at a time. The old request will be canceled if a new one is started. Depending on the users connection to the Steam back-end, this call can take from 300ms to 5 seconds to complete, and has a timeout of 20 seconds.\nTo filter the results you MUST call the AddRequestLobbyList* functions before calling this. The filters are cleared on each call to this function.\nIf AddRequestLobbyListDistanceFilter is not called, k_ELobbyDistanceFilterDefault will be used, which will only find matches in the same or nearby regions.\nThis will only return lobbies that are not full, and only lobbies that are k_ELobbyTypePublic or k_ELobbyTypeInvisible, and are set to joinable with SetLobbyJoinable.\n\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingAsyncActionRequestLobbyList_eventRequestLobbyListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingAsyncActionRequestLobbyList_eventRequestLobbyListAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingAsyncActionRequestLobbyList_eventRequestLobbyListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionRequestLobbyList_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionRequestLobbyList, nullptr, "RequestLobbyListAsync", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::SteamCoreProMatchmakingAsyncActionRequestLobbyList_eventRequestLobbyListAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::SteamCoreProMatchmakingAsyncActionRequestLobbyList_eventRequestLobbyListAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProMatchmakingAsyncActionRequestLobbyList::execRequestLobbyListAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreProMatchmakingAsyncActionRequestLobbyList**)Z_Param__Result=USteamCoreProMatchmakingAsyncActionRequestLobbyList::RequestLobbyListAsync(Z_Param_WorldContextObject,Z_Param_Timeout);
	P_NATIVE_END;
}
// End Class USteamCoreProMatchmakingAsyncActionRequestLobbyList Function RequestLobbyListAsync

// Begin Class USteamCoreProMatchmakingAsyncActionRequestLobbyList
void USteamCoreProMatchmakingAsyncActionRequestLobbyList::StaticRegisterNativesUSteamCoreProMatchmakingAsyncActionRequestLobbyList()
{
	UClass* Class = USteamCoreProMatchmakingAsyncActionRequestLobbyList::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleCallback", &USteamCoreProMatchmakingAsyncActionRequestLobbyList::execHandleCallback },
		{ "RequestLobbyListAsync", &USteamCoreProMatchmakingAsyncActionRequestLobbyList::execRequestLobbyListAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreProMatchmakingAsyncActionRequestLobbyList);
UClass* Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionRequestLobbyList_NoRegister()
{
	return USteamCoreProMatchmakingAsyncActionRequestLobbyList::StaticClass();
}
struct Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionRequestLobbyList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreProMatchmakingAsyncActionRequestLobbyList\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreProMatchmakingAsyncActionRequestLobbyList\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionRequestLobbyList_HandleCallback, "HandleCallback" }, // 1026493939
		{ &Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionRequestLobbyList_RequestLobbyListAsync, "RequestLobbyListAsync" }, // 71838228
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreProMatchmakingAsyncActionRequestLobbyList>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionRequestLobbyList_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreProMatchmakingAsyncActionRequestLobbyList, OnCallback), Z_Construct_UDelegateFunction_SteamCorePro_OnRequestLobbyListAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 1093053811
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionRequestLobbyList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionRequestLobbyList_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionRequestLobbyList_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionRequestLobbyList_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreProAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionRequestLobbyList_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionRequestLobbyList_Statics::ClassParams = {
	&USteamCoreProMatchmakingAsyncActionRequestLobbyList::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionRequestLobbyList_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionRequestLobbyList_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionRequestLobbyList_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionRequestLobbyList_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionRequestLobbyList()
{
	if (!Z_Registration_Info_UClass_USteamCoreProMatchmakingAsyncActionRequestLobbyList.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreProMatchmakingAsyncActionRequestLobbyList.OuterSingleton, Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionRequestLobbyList_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreProMatchmakingAsyncActionRequestLobbyList.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamCoreProMatchmakingAsyncActionRequestLobbyList>()
{
	return USteamCoreProMatchmakingAsyncActionRequestLobbyList::StaticClass();
}
USteamCoreProMatchmakingAsyncActionRequestLobbyList::USteamCoreProMatchmakingAsyncActionRequestLobbyList(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreProMatchmakingAsyncActionRequestLobbyList);
USteamCoreProMatchmakingAsyncActionRequestLobbyList::~USteamCoreProMatchmakingAsyncActionRequestLobbyList() {}
// End Class USteamCoreProMatchmakingAsyncActionRequestLobbyList

// Begin Class USteamCoreProMatchmakingAsyncActionJoinLobby Function HandleCallback
struct Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionJoinLobby_HandleCallback_Statics
{
	struct SteamCoreProMatchmakingAsyncActionJoinLobby_eventHandleCallback_Parms
	{
		FJoinLobbyData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingAsyncActionJoinLobby_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FJoinLobbyData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 6361406
void Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreProMatchmakingAsyncActionJoinLobby_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProMatchmakingAsyncActionJoinLobby_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionJoinLobby, nullptr, "HandleCallback", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::SteamCoreProMatchmakingAsyncActionJoinLobby_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::SteamCoreProMatchmakingAsyncActionJoinLobby_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionJoinLobby_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionJoinLobby_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProMatchmakingAsyncActionJoinLobby::execHandleCallback)
{
	P_GET_STRUCT_REF(FJoinLobbyData,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// End Class USteamCoreProMatchmakingAsyncActionJoinLobby Function HandleCallback

// Begin Class USteamCoreProMatchmakingAsyncActionJoinLobby Function JoinLobbyAsync
struct Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics
{
	struct SteamCoreProMatchmakingAsyncActionJoinLobby_eventJoinLobbyAsync_Parms
	{
		UObject* WorldContextObject;
		FSteamID SteamIDLobby;
		float Timeout;
		USteamCoreProMatchmakingAsyncActionJoinLobby* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Matchmaking|Async" },
		{ "Comment", "/**\n\x09* Joins an existing lobby.\n\x09* The lobby Steam ID can be obtained either from a search with RequestLobbyList, joining on a friend, or from an invite.\n\x09*\n\x09* @param\x09SteamIDLobby\x09The Steam ID of the lobby to join.\n\x09* @param\x09Timeout\x09\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Join Lobby" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ToolTip", "Joins an existing lobby.\nThe lobby Steam ID can be obtained either from a search with RequestLobbyList, joining on a friend, or from an invite.\n\n@param        SteamIDLobby    The Steam ID of the lobby to join.\n@param        Timeout                 How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDLobby;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingAsyncActionJoinLobby_eventJoinLobbyAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::NewProp_SteamIDLobby = { "SteamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingAsyncActionJoinLobby_eventJoinLobbyAsync_Parms, SteamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingAsyncActionJoinLobby_eventJoinLobbyAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingAsyncActionJoinLobby_eventJoinLobbyAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionJoinLobby_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::NewProp_SteamIDLobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionJoinLobby, nullptr, "JoinLobbyAsync", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::SteamCoreProMatchmakingAsyncActionJoinLobby_eventJoinLobbyAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::SteamCoreProMatchmakingAsyncActionJoinLobby_eventJoinLobbyAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionJoinLobby_JoinLobbyAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionJoinLobby_JoinLobbyAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProMatchmakingAsyncActionJoinLobby::execJoinLobbyAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDLobby);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreProMatchmakingAsyncActionJoinLobby**)Z_Param__Result=USteamCoreProMatchmakingAsyncActionJoinLobby::JoinLobbyAsync(Z_Param_WorldContextObject,Z_Param_SteamIDLobby,Z_Param_Timeout);
	P_NATIVE_END;
}
// End Class USteamCoreProMatchmakingAsyncActionJoinLobby Function JoinLobbyAsync

// Begin Class USteamCoreProMatchmakingAsyncActionJoinLobby
void USteamCoreProMatchmakingAsyncActionJoinLobby::StaticRegisterNativesUSteamCoreProMatchmakingAsyncActionJoinLobby()
{
	UClass* Class = USteamCoreProMatchmakingAsyncActionJoinLobby::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleCallback", &USteamCoreProMatchmakingAsyncActionJoinLobby::execHandleCallback },
		{ "JoinLobbyAsync", &USteamCoreProMatchmakingAsyncActionJoinLobby::execJoinLobbyAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreProMatchmakingAsyncActionJoinLobby);
UClass* Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionJoinLobby_NoRegister()
{
	return USteamCoreProMatchmakingAsyncActionJoinLobby::StaticClass();
}
struct Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionJoinLobby_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreProMatchmakingAsyncActionJoinLobby\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreProMatchmakingAsyncActionJoinLobby\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionJoinLobby_HandleCallback, "HandleCallback" }, // 3490274093
		{ &Z_Construct_UFunction_USteamCoreProMatchmakingAsyncActionJoinLobby_JoinLobbyAsync, "JoinLobbyAsync" }, // 2609867313
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreProMatchmakingAsyncActionJoinLobby>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionJoinLobby_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreProMatchmakingAsyncActionJoinLobby, OnCallback), Z_Construct_UDelegateFunction_SteamCorePro_OnJoinLobbyAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2031203532
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionJoinLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionJoinLobby_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionJoinLobby_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionJoinLobby_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreProAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionJoinLobby_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionJoinLobby_Statics::ClassParams = {
	&USteamCoreProMatchmakingAsyncActionJoinLobby::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionJoinLobby_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionJoinLobby_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionJoinLobby_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionJoinLobby_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionJoinLobby()
{
	if (!Z_Registration_Info_UClass_USteamCoreProMatchmakingAsyncActionJoinLobby.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreProMatchmakingAsyncActionJoinLobby.OuterSingleton, Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionJoinLobby_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreProMatchmakingAsyncActionJoinLobby.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamCoreProMatchmakingAsyncActionJoinLobby>()
{
	return USteamCoreProMatchmakingAsyncActionJoinLobby::StaticClass();
}
USteamCoreProMatchmakingAsyncActionJoinLobby::USteamCoreProMatchmakingAsyncActionJoinLobby(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreProMatchmakingAsyncActionJoinLobby);
USteamCoreProMatchmakingAsyncActionJoinLobby::~USteamCoreProMatchmakingAsyncActionJoinLobby() {}
// End Class USteamCoreProMatchmakingAsyncActionJoinLobby

// Begin Class USteamCoreProCreateSession Function CreateSteamCoreProSession
struct Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics
{
	struct SteamCoreProCreateSession_eventCreateSteamCoreProSession_Parms
	{
		UObject* WorldContextObject;
		TMap<FString,FSteamSessionSetting> SessionSettings;
		FString SessionName;
		int32 MaxPlayers;
		bool bUseLAN;
		bool bAllowInvites;
		bool bUsesPresence;
		bool bAllowJoinViaPresence;
		bool bAllowJoinViaPresenceFriendsOnly;
		bool bAntiCheatProtected;
		bool bUsesStats;
		bool bShouldAdvertise;
		bool bUseLobbiesVoiceChatIfAvailable;
		float Timeout;
		USteamCoreProCreateSession* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "sessionSettings" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Matchmaking|Async" },
		{ "Comment", "/**\n\x09* Creates an online session\n\x09* \n\x09* Automatically detects if we're running a dedicated or listen server\n\x09*\n\x09* Listen servers will create a Lobby Session, use \"FindSteamCoreProSession\" to find Listen Servers\n\x09*\n\x09*    @param SessionName\x09\x09\x09\x09\x09\x09\x09Name of our session\n\x09*    @param MaxPlayers\x09\x09\x09\x09\x09\x09\x09Number of public connections\n\x09*    @param bUsesPresence\x09\x09\x09\x09\x09\x09""Create a lobby for the session (disabled for dedicated servers)\n\x09*    @param bUseLAN\x09\x09\x09\x09\x09\x09\x09\x09Used for LAN server\n\x09*    @param bUseLobbiesVoiceChatIfAvailable\x09\x09(4.27+ only, Whether to create (and auto join) a voice chat room for the lobby, if the platform supports it)\n\x09*    @param\x09Timeout\x09\x09\x09\x09\x09\x09\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_bAllowInvites", "true" },
		{ "CPP_Default_bAllowJoinViaPresence", "true" },
		{ "CPP_Default_bAllowJoinViaPresenceFriendsOnly", "false" },
		{ "CPP_Default_bAntiCheatProtected", "false" },
		{ "CPP_Default_bShouldAdvertise", "true" },
		{ "CPP_Default_bUseLAN", "false" },
		{ "CPP_Default_bUseLobbiesVoiceChatIfAvailable", "true" },
		{ "CPP_Default_bUsesPresence", "true" },
		{ "CPP_Default_bUsesStats", "false" },
		{ "CPP_Default_MaxPlayers", "5" },
		{ "CPP_Default_SessionName", "SteamCoreProSession" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ToolTip", "Creates an online session\n\nAutomatically detects if we're running a dedicated or listen server\n\nListen servers will create a Lobby Session, use \"FindSteamCoreProSession\" to find Listen Servers\n\n   @param SessionName                                                 Name of our session\n   @param MaxPlayers                                                  Number of public connections\n   @param bUsesPresence                                               Create a lobby for the session (disabled for dedicated servers)\n   @param bUseLAN                                                             Used for LAN server\n   @param bUseLobbiesVoiceChatIfAvailable             (4.27+ only, Whether to create (and auto join) a voice chat room for the lobby, if the platform supports it)\n   @param     Timeout                                                         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SessionSettings_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionSettings_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SessionSettings;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayers;
	static void NewProp_bUseLAN_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLAN;
	static void NewProp_bAllowInvites_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInvites;
	static void NewProp_bUsesPresence_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsesPresence;
	static void NewProp_bAllowJoinViaPresence_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinViaPresence;
	static void NewProp_bAllowJoinViaPresenceFriendsOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinViaPresenceFriendsOnly;
	static void NewProp_bAntiCheatProtected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAntiCheatProtected;
	static void NewProp_bUsesStats_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsesStats;
	static void NewProp_bShouldAdvertise_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAdvertise;
	static void NewProp_bUseLobbiesVoiceChatIfAvailable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLobbiesVoiceChatIfAvailable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProCreateSession_eventCreateSteamCoreProSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_SessionSettings_ValueProp = { "SessionSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSteamSessionSetting, METADATA_PARAMS(0, nullptr) }; // 1471580263
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_SessionSettings_Key_KeyProp = { "SessionSettings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_SessionSettings = { "SessionSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProCreateSession_eventCreateSteamCoreProSession_Parms, SessionSettings), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1471580263
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProCreateSession_eventCreateSteamCoreProSession_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_MaxPlayers = { "MaxPlayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProCreateSession_eventCreateSteamCoreProSession_Parms, MaxPlayers), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_bUseLAN_SetBit(void* Obj)
{
	((SteamCoreProCreateSession_eventCreateSteamCoreProSession_Parms*)Obj)->bUseLAN = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_bUseLAN = { "bUseLAN", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProCreateSession_eventCreateSteamCoreProSession_Parms), &Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_bUseLAN_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_bAllowInvites_SetBit(void* Obj)
{
	((SteamCoreProCreateSession_eventCreateSteamCoreProSession_Parms*)Obj)->bAllowInvites = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_bAllowInvites = { "bAllowInvites", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProCreateSession_eventCreateSteamCoreProSession_Parms), &Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_bAllowInvites_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_bUsesPresence_SetBit(void* Obj)
{
	((SteamCoreProCreateSession_eventCreateSteamCoreProSession_Parms*)Obj)->bUsesPresence = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_bUsesPresence = { "bUsesPresence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProCreateSession_eventCreateSteamCoreProSession_Parms), &Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_bUsesPresence_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_bAllowJoinViaPresence_SetBit(void* Obj)
{
	((SteamCoreProCreateSession_eventCreateSteamCoreProSession_Parms*)Obj)->bAllowJoinViaPresence = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_bAllowJoinViaPresence = { "bAllowJoinViaPresence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProCreateSession_eventCreateSteamCoreProSession_Parms), &Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_bAllowJoinViaPresence_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly_SetBit(void* Obj)
{
	((SteamCoreProCreateSession_eventCreateSteamCoreProSession_Parms*)Obj)->bAllowJoinViaPresenceFriendsOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly = { "bAllowJoinViaPresenceFriendsOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProCreateSession_eventCreateSteamCoreProSession_Parms), &Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_bAntiCheatProtected_SetBit(void* Obj)
{
	((SteamCoreProCreateSession_eventCreateSteamCoreProSession_Parms*)Obj)->bAntiCheatProtected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_bAntiCheatProtected = { "bAntiCheatProtected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProCreateSession_eventCreateSteamCoreProSession_Parms), &Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_bAntiCheatProtected_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_bUsesStats_SetBit(void* Obj)
{
	((SteamCoreProCreateSession_eventCreateSteamCoreProSession_Parms*)Obj)->bUsesStats = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_bUsesStats = { "bUsesStats", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProCreateSession_eventCreateSteamCoreProSession_Parms), &Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_bUsesStats_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_bShouldAdvertise_SetBit(void* Obj)
{
	((SteamCoreProCreateSession_eventCreateSteamCoreProSession_Parms*)Obj)->bShouldAdvertise = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_bShouldAdvertise = { "bShouldAdvertise", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProCreateSession_eventCreateSteamCoreProSession_Parms), &Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_bShouldAdvertise_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_bUseLobbiesVoiceChatIfAvailable_SetBit(void* Obj)
{
	((SteamCoreProCreateSession_eventCreateSteamCoreProSession_Parms*)Obj)->bUseLobbiesVoiceChatIfAvailable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_bUseLobbiesVoiceChatIfAvailable = { "bUseLobbiesVoiceChatIfAvailable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProCreateSession_eventCreateSteamCoreProSession_Parms), &Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_bUseLobbiesVoiceChatIfAvailable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProCreateSession_eventCreateSteamCoreProSession_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProCreateSession_eventCreateSteamCoreProSession_Parms, ReturnValue), Z_Construct_UClass_USteamCoreProCreateSession_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_SessionSettings_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_SessionSettings_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_SessionSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_MaxPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_bUseLAN,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_bAllowInvites,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_bUsesPresence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_bAllowJoinViaPresence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_bAllowJoinViaPresenceFriendsOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_bAntiCheatProtected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_bUsesStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_bShouldAdvertise,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_bUseLobbiesVoiceChatIfAvailable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProCreateSession, nullptr, "CreateSteamCoreProSession", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::SteamCoreProCreateSession_eventCreateSteamCoreProSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::SteamCoreProCreateSession_eventCreateSteamCoreProSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProCreateSession::execCreateSteamCoreProSession)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TMAP(FString,FSteamSessionSetting,Z_Param_SessionSettings);
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionName);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxPlayers);
	P_GET_UBOOL(Z_Param_bUseLAN);
	P_GET_UBOOL(Z_Param_bAllowInvites);
	P_GET_UBOOL(Z_Param_bUsesPresence);
	P_GET_UBOOL(Z_Param_bAllowJoinViaPresence);
	P_GET_UBOOL(Z_Param_bAllowJoinViaPresenceFriendsOnly);
	P_GET_UBOOL(Z_Param_bAntiCheatProtected);
	P_GET_UBOOL(Z_Param_bUsesStats);
	P_GET_UBOOL(Z_Param_bShouldAdvertise);
	P_GET_UBOOL(Z_Param_bUseLobbiesVoiceChatIfAvailable);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreProCreateSession**)Z_Param__Result=USteamCoreProCreateSession::CreateSteamCoreProSession(Z_Param_WorldContextObject,Z_Param_SessionSettings,Z_Param_SessionName,Z_Param_MaxPlayers,Z_Param_bUseLAN,Z_Param_bAllowInvites,Z_Param_bUsesPresence,Z_Param_bAllowJoinViaPresence,Z_Param_bAllowJoinViaPresenceFriendsOnly,Z_Param_bAntiCheatProtected,Z_Param_bUsesStats,Z_Param_bShouldAdvertise,Z_Param_bUseLobbiesVoiceChatIfAvailable,Z_Param_Timeout);
	P_NATIVE_END;
}
// End Class USteamCoreProCreateSession Function CreateSteamCoreProSession

// Begin Class USteamCoreProCreateSession
void USteamCoreProCreateSession::StaticRegisterNativesUSteamCoreProCreateSession()
{
	UClass* Class = USteamCoreProCreateSession::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateSteamCoreProSession", &USteamCoreProCreateSession::execCreateSteamCoreProSession },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreProCreateSession);
UClass* Z_Construct_UClass_USteamCoreProCreateSession_NoRegister()
{
	return USteamCoreProCreateSession::StaticClass();
}
struct Z_Construct_UClass_USteamCoreProCreateSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreProCreateSession\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreProCreateSession\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreProCreateSession_CreateSteamCoreProSession, "CreateSteamCoreProSession" }, // 3324191986
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreProCreateSession>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreProCreateSession_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreProCreateSession, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2328757345
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreProCreateSession_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreProCreateSession, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 2328757345
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreProCreateSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProCreateSession_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProCreateSession_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProCreateSession_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamCoreProCreateSession_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreProAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProCreateSession_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreProCreateSession_Statics::ClassParams = {
	&USteamCoreProCreateSession::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreProCreateSession_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProCreateSession_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProCreateSession_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreProCreateSession_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCoreProCreateSession()
{
	if (!Z_Registration_Info_UClass_USteamCoreProCreateSession.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreProCreateSession.OuterSingleton, Z_Construct_UClass_USteamCoreProCreateSession_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreProCreateSession.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamCoreProCreateSession>()
{
	return USteamCoreProCreateSession::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreProCreateSession);
USteamCoreProCreateSession::~USteamCoreProCreateSession() {}
// End Class USteamCoreProCreateSession

// Begin Delegate FFindSteamSessionsResultDelegate
struct Z_Construct_UDelegateFunction_SteamCorePro_FindSteamSessionsResultDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventFindSteamSessionsResultDelegate_Parms
	{
		TArray<FSteamSessionResult> Results;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Results_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Results_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Results;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_FindSteamSessionsResultDelegate__DelegateSignature_Statics::NewProp_Results_Inner = { "Results", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamSessionResult, METADATA_PARAMS(0, nullptr) }; // 2500376783
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_FindSteamSessionsResultDelegate__DelegateSignature_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventFindSteamSessionsResultDelegate_Parms, Results), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Results_MetaData), NewProp_Results_MetaData) }; // 2500376783
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_FindSteamSessionsResultDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_FindSteamSessionsResultDelegate__DelegateSignature_Statics::NewProp_Results_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_FindSteamSessionsResultDelegate__DelegateSignature_Statics::NewProp_Results,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_FindSteamSessionsResultDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_FindSteamSessionsResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "FindSteamSessionsResultDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_FindSteamSessionsResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_FindSteamSessionsResultDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_FindSteamSessionsResultDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventFindSteamSessionsResultDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_FindSteamSessionsResultDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_FindSteamSessionsResultDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_FindSteamSessionsResultDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventFindSteamSessionsResultDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_FindSteamSessionsResultDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_FindSteamSessionsResultDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FFindSteamSessionsResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& FindSteamSessionsResultDelegate, TArray<FSteamSessionResult> const& Results)
{
	struct _Script_SteamCorePro_eventFindSteamSessionsResultDelegate_Parms
	{
		TArray<FSteamSessionResult> Results;
	};
	_Script_SteamCorePro_eventFindSteamSessionsResultDelegate_Parms Parms;
	Parms.Results=Results;
	FindSteamSessionsResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FFindSteamSessionsResultDelegate

// Begin Class USteamCoreProFindSession Function FindSteamCoreProSessions
struct Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics
{
	struct SteamCoreProFindSession_eventFindSteamCoreProSessions_Parms
	{
		UObject* WorldContextObject;
		TMap<FString,FSteamSessionSearchSetting> SearchSettings;
		int32 MaxResults;
		bool bUseLAN;
		ESteamSessionFindType ServerType;
		ESteamLobbyDistanceFilter DistanceFilter;
		bool bEmptyServersOnly;
		bool bSecureServersOnly;
		float Timeout;
		USteamCoreProFindSession* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "searchSettings" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Matchmaking|Async" },
		{ "Comment", "/**\n\x09* Find Online Sessions\n\x09*\n\x09* This is primarily used to find Listen Servers (lobbies), can be used to find dedicated servers but will give less server info\n\x09*\n\x09* @param\x09MaxResults\x09\x09\x09\x09Max Number of Servers\n\x09* @param\x09ServerType\x09\x09\x09\x09Search for Listen or Dedicated servers\n\x09* @param\x09""DistanceFilter\x09\x09\x09""Distance Filter for Listen servers (does not work for dedicated servers)\n\x09* @param\x09""bUseLAN\x09\x09\x09\x09\x09Search for LAN servers only\n\x09* @param\x09""bEmptyServersOnly\x09\x09Only empty servers\n\x09* @param\x09""bSecureServersOnly\x09\x09Only secure servers\n\x09* @param\x09Timeout\x09\x09\x09\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_bEmptyServersOnly", "false" },
		{ "CPP_Default_bSecureServersOnly", "false" },
		{ "CPP_Default_bUseLAN", "false" },
		{ "CPP_Default_DistanceFilter", "k_ELobbyDistanceFilterWorldwide" },
		{ "CPP_Default_MaxResults", "50" },
		{ "CPP_Default_ServerType", "Listen" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ToolTip", "Find Online Sessions\n\nThis is primarily used to find Listen Servers (lobbies), can be used to find dedicated servers but will give less server info\n\n@param        MaxResults                              Max Number of Servers\n@param        ServerType                              Search for Listen or Dedicated servers\n@param        DistanceFilter                  Distance Filter for Listen servers (does not work for dedicated servers)\n@param        bUseLAN                                 Search for LAN servers only\n@param        bEmptyServersOnly               Only empty servers\n@param        bSecureServersOnly              Only secure servers\n@param        Timeout                                 How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SearchSettings_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SearchSettings_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SearchSettings;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
	static void NewProp_bUseLAN_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLAN;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ServerType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ServerType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DistanceFilter_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DistanceFilter;
	static void NewProp_bEmptyServersOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEmptyServersOnly;
	static void NewProp_bSecureServersOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSecureServersOnly;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFindSession_eventFindSteamCoreProSessions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::NewProp_SearchSettings_ValueProp = { "SearchSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSteamSessionSearchSetting, METADATA_PARAMS(0, nullptr) }; // 1140942053
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::NewProp_SearchSettings_Key_KeyProp = { "SearchSettings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::NewProp_SearchSettings = { "SearchSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFindSession_eventFindSteamCoreProSessions_Parms, SearchSettings), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1140942053
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFindSession_eventFindSteamCoreProSessions_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::NewProp_bUseLAN_SetBit(void* Obj)
{
	((SteamCoreProFindSession_eventFindSteamCoreProSessions_Parms*)Obj)->bUseLAN = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::NewProp_bUseLAN = { "bUseLAN", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProFindSession_eventFindSteamCoreProSessions_Parms), &Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::NewProp_bUseLAN_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::NewProp_ServerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::NewProp_ServerType = { "ServerType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFindSession_eventFindSteamCoreProSessions_Parms, ServerType), Z_Construct_UEnum_SteamCorePro_ESteamSessionFindType, METADATA_PARAMS(0, nullptr) }; // 2422448065
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::NewProp_DistanceFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::NewProp_DistanceFilter = { "DistanceFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFindSession_eventFindSteamCoreProSessions_Parms, DistanceFilter), Z_Construct_UEnum_SteamCoreShared_ESteamLobbyDistanceFilter, METADATA_PARAMS(0, nullptr) }; // 2147738176
void Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::NewProp_bEmptyServersOnly_SetBit(void* Obj)
{
	((SteamCoreProFindSession_eventFindSteamCoreProSessions_Parms*)Obj)->bEmptyServersOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::NewProp_bEmptyServersOnly = { "bEmptyServersOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProFindSession_eventFindSteamCoreProSessions_Parms), &Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::NewProp_bEmptyServersOnly_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::NewProp_bSecureServersOnly_SetBit(void* Obj)
{
	((SteamCoreProFindSession_eventFindSteamCoreProSessions_Parms*)Obj)->bSecureServersOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::NewProp_bSecureServersOnly = { "bSecureServersOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProFindSession_eventFindSteamCoreProSessions_Parms), &Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::NewProp_bSecureServersOnly_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFindSession_eventFindSteamCoreProSessions_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProFindSession_eventFindSteamCoreProSessions_Parms, ReturnValue), Z_Construct_UClass_USteamCoreProFindSession_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::NewProp_SearchSettings_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::NewProp_SearchSettings_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::NewProp_SearchSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::NewProp_MaxResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::NewProp_bUseLAN,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::NewProp_ServerType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::NewProp_ServerType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::NewProp_DistanceFilter_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::NewProp_DistanceFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::NewProp_bEmptyServersOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::NewProp_bSecureServersOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProFindSession, nullptr, "FindSteamCoreProSessions", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::SteamCoreProFindSession_eventFindSteamCoreProSessions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::SteamCoreProFindSession_eventFindSteamCoreProSessions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProFindSession::execFindSteamCoreProSessions)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TMAP(FString,FSteamSessionSearchSetting,Z_Param_SearchSettings);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
	P_GET_UBOOL(Z_Param_bUseLAN);
	P_GET_ENUM(ESteamSessionFindType,Z_Param_ServerType);
	P_GET_ENUM(ESteamLobbyDistanceFilter,Z_Param_DistanceFilter);
	P_GET_UBOOL(Z_Param_bEmptyServersOnly);
	P_GET_UBOOL(Z_Param_bSecureServersOnly);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreProFindSession**)Z_Param__Result=USteamCoreProFindSession::FindSteamCoreProSessions(Z_Param_WorldContextObject,Z_Param_SearchSettings,Z_Param_MaxResults,Z_Param_bUseLAN,ESteamSessionFindType(Z_Param_ServerType),ESteamLobbyDistanceFilter(Z_Param_DistanceFilter),Z_Param_bEmptyServersOnly,Z_Param_bSecureServersOnly,Z_Param_Timeout);
	P_NATIVE_END;
}
// End Class USteamCoreProFindSession Function FindSteamCoreProSessions

// Begin Class USteamCoreProFindSession Function OnCompleted
struct Z_Construct_UFunction_USteamCoreProFindSession_OnCompleted_Statics
{
	struct SteamCoreProFindSession_eventOnCompleted_Parms
	{
		bool bSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamCoreProFindSession_OnCompleted_Statics::NewProp_bSuccessful_SetBit(void* Obj)
{
	((SteamCoreProFindSession_eventOnCompleted_Parms*)Obj)->bSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProFindSession_OnCompleted_Statics::NewProp_bSuccessful = { "bSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProFindSession_eventOnCompleted_Parms), &Z_Construct_UFunction_USteamCoreProFindSession_OnCompleted_Statics::NewProp_bSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProFindSession_OnCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProFindSession_OnCompleted_Statics::NewProp_bSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFindSession_OnCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProFindSession_OnCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProFindSession, nullptr, "OnCompleted", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProFindSession_OnCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFindSession_OnCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProFindSession_OnCompleted_Statics::SteamCoreProFindSession_eventOnCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProFindSession_OnCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProFindSession_OnCompleted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProFindSession_OnCompleted_Statics::SteamCoreProFindSession_eventOnCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProFindSession_OnCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProFindSession_OnCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProFindSession::execOnCompleted)
{
	P_GET_UBOOL(Z_Param_bSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCompleted(Z_Param_bSuccessful);
	P_NATIVE_END;
}
// End Class USteamCoreProFindSession Function OnCompleted

// Begin Class USteamCoreProFindSession
void USteamCoreProFindSession::StaticRegisterNativesUSteamCoreProFindSession()
{
	UClass* Class = USteamCoreProFindSession::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindSteamCoreProSessions", &USteamCoreProFindSession::execFindSteamCoreProSessions },
		{ "OnCompleted", &USteamCoreProFindSession::execOnCompleted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreProFindSession);
UClass* Z_Construct_UClass_USteamCoreProFindSession_NoRegister()
{
	return USteamCoreProFindSession::StaticClass();
}
struct Z_Construct_UClass_USteamCoreProFindSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreProFindSession\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreProFindSession\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreProFindSession_FindSteamCoreProSessions, "FindSteamCoreProSessions" }, // 4034538046
		{ &Z_Construct_UFunction_USteamCoreProFindSession_OnCompleted, "OnCompleted" }, // 1564691532
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreProFindSession>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreProFindSession_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreProFindSession, OnCallback), Z_Construct_UDelegateFunction_SteamCorePro_FindSteamSessionsResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2013861570
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreProFindSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProFindSession_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProFindSession_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamCoreProFindSession_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreProAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProFindSession_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreProFindSession_Statics::ClassParams = {
	&USteamCoreProFindSession::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreProFindSession_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProFindSession_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProFindSession_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreProFindSession_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCoreProFindSession()
{
	if (!Z_Registration_Info_UClass_USteamCoreProFindSession.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreProFindSession.OuterSingleton, Z_Construct_UClass_USteamCoreProFindSession_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreProFindSession.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamCoreProFindSession>()
{
	return USteamCoreProFindSession::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreProFindSession);
USteamCoreProFindSession::~USteamCoreProFindSession() {}
// End Class USteamCoreProFindSession

// Begin Class USteamCoreProDestroySession Function DestroySteamCoreProSession
struct Z_Construct_UFunction_USteamCoreProDestroySession_DestroySteamCoreProSession_Statics
{
	struct SteamCoreProDestroySession_eventDestroySteamCoreProSession_Parms
	{
		UObject* WorldContextObject;
		float Timeout;
		USteamCoreProDestroySession* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Matchmaking|Async" },
		{ "Comment", "/**\n\x09* Destroy an Online Session\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ToolTip", "Destroy an Online Session\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProDestroySession_DestroySteamCoreProSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProDestroySession_eventDestroySteamCoreProSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreProDestroySession_DestroySteamCoreProSession_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProDestroySession_eventDestroySteamCoreProSession_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProDestroySession_DestroySteamCoreProSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProDestroySession_eventDestroySteamCoreProSession_Parms, ReturnValue), Z_Construct_UClass_USteamCoreProDestroySession_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProDestroySession_DestroySteamCoreProSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProDestroySession_DestroySteamCoreProSession_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProDestroySession_DestroySteamCoreProSession_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProDestroySession_DestroySteamCoreProSession_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProDestroySession_DestroySteamCoreProSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProDestroySession_DestroySteamCoreProSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProDestroySession, nullptr, "DestroySteamCoreProSession", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProDestroySession_DestroySteamCoreProSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProDestroySession_DestroySteamCoreProSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProDestroySession_DestroySteamCoreProSession_Statics::SteamCoreProDestroySession_eventDestroySteamCoreProSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProDestroySession_DestroySteamCoreProSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProDestroySession_DestroySteamCoreProSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProDestroySession_DestroySteamCoreProSession_Statics::SteamCoreProDestroySession_eventDestroySteamCoreProSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProDestroySession_DestroySteamCoreProSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProDestroySession_DestroySteamCoreProSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProDestroySession::execDestroySteamCoreProSession)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreProDestroySession**)Z_Param__Result=USteamCoreProDestroySession::DestroySteamCoreProSession(Z_Param_WorldContextObject,Z_Param_Timeout);
	P_NATIVE_END;
}
// End Class USteamCoreProDestroySession Function DestroySteamCoreProSession

// Begin Class USteamCoreProDestroySession Function OnCompleted
struct Z_Construct_UFunction_USteamCoreProDestroySession_OnCompleted_Statics
{
	struct SteamCoreProDestroySession_eventOnCompleted_Parms
	{
		FName sessionName;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_sessionName;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USteamCoreProDestroySession_OnCompleted_Statics::NewProp_sessionName = { "sessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProDestroySession_eventOnCompleted_Parms, sessionName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreProDestroySession_OnCompleted_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreProDestroySession_eventOnCompleted_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProDestroySession_OnCompleted_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProDestroySession_eventOnCompleted_Parms), &Z_Construct_UFunction_USteamCoreProDestroySession_OnCompleted_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProDestroySession_OnCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProDestroySession_OnCompleted_Statics::NewProp_sessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProDestroySession_OnCompleted_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProDestroySession_OnCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProDestroySession_OnCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProDestroySession, nullptr, "OnCompleted", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProDestroySession_OnCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProDestroySession_OnCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProDestroySession_OnCompleted_Statics::SteamCoreProDestroySession_eventOnCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProDestroySession_OnCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProDestroySession_OnCompleted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProDestroySession_OnCompleted_Statics::SteamCoreProDestroySession_eventOnCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProDestroySession_OnCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProDestroySession_OnCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProDestroySession::execOnCompleted)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_sessionName);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCompleted(Z_Param_sessionName,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// End Class USteamCoreProDestroySession Function OnCompleted

// Begin Class USteamCoreProDestroySession
void USteamCoreProDestroySession::StaticRegisterNativesUSteamCoreProDestroySession()
{
	UClass* Class = USteamCoreProDestroySession::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DestroySteamCoreProSession", &USteamCoreProDestroySession::execDestroySteamCoreProSession },
		{ "OnCompleted", &USteamCoreProDestroySession::execOnCompleted },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreProDestroySession);
UClass* Z_Construct_UClass_USteamCoreProDestroySession_NoRegister()
{
	return USteamCoreProDestroySession::StaticClass();
}
struct Z_Construct_UClass_USteamCoreProDestroySession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreProDestroySession\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreProDestroySession\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreProDestroySession_DestroySteamCoreProSession, "DestroySteamCoreProSession" }, // 2996764490
		{ &Z_Construct_UFunction_USteamCoreProDestroySession_OnCompleted, "OnCompleted" }, // 1958518689
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreProDestroySession>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreProDestroySession_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreProDestroySession, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2328757345
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreProDestroySession_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreProDestroySession, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 2328757345
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreProDestroySession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProDestroySession_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProDestroySession_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProDestroySession_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamCoreProDestroySession_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreProAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProDestroySession_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreProDestroySession_Statics::ClassParams = {
	&USteamCoreProDestroySession::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreProDestroySession_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProDestroySession_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProDestroySession_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreProDestroySession_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCoreProDestroySession()
{
	if (!Z_Registration_Info_UClass_USteamCoreProDestroySession.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreProDestroySession.OuterSingleton, Z_Construct_UClass_USteamCoreProDestroySession_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreProDestroySession.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamCoreProDestroySession>()
{
	return USteamCoreProDestroySession::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreProDestroySession);
USteamCoreProDestroySession::~USteamCoreProDestroySession() {}
// End Class USteamCoreProDestroySession

// Begin Class USteamCoreProUpdateSession Function OnCompleted
struct Z_Construct_UFunction_USteamCoreProUpdateSession_OnCompleted_Statics
{
	struct SteamCoreProUpdateSession_eventOnCompleted_Parms
	{
		FName SessionName;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USteamCoreProUpdateSession_OnCompleted_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProUpdateSession_eventOnCompleted_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreProUpdateSession_OnCompleted_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreProUpdateSession_eventOnCompleted_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProUpdateSession_OnCompleted_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProUpdateSession_eventOnCompleted_Parms), &Z_Construct_UFunction_USteamCoreProUpdateSession_OnCompleted_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProUpdateSession_OnCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProUpdateSession_OnCompleted_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProUpdateSession_OnCompleted_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProUpdateSession_OnCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProUpdateSession_OnCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProUpdateSession, nullptr, "OnCompleted", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProUpdateSession_OnCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProUpdateSession_OnCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProUpdateSession_OnCompleted_Statics::SteamCoreProUpdateSession_eventOnCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProUpdateSession_OnCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProUpdateSession_OnCompleted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProUpdateSession_OnCompleted_Statics::SteamCoreProUpdateSession_eventOnCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProUpdateSession_OnCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProUpdateSession_OnCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProUpdateSession::execOnCompleted)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCompleted(Z_Param_SessionName,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// End Class USteamCoreProUpdateSession Function OnCompleted

// Begin Class USteamCoreProUpdateSession Function UpdateSteamCoreProSession
struct Z_Construct_UFunction_USteamCoreProUpdateSession_UpdateSteamCoreProSession_Statics
{
	struct SteamCoreProUpdateSession_eventUpdateSteamCoreProSession_Parms
	{
		UObject* WorldContextObject;
		TMap<FString,FSteamSessionSetting> Settings;
		FString SessionName;
		int32 MaxPlayers;
		bool bAllowJoinInProgress;
		USteamCoreProUpdateSession* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Settings" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|Matchmaking|Async" },
		{ "CPP_Default_bAllowJoinInProgress", "true" },
		{ "CPP_Default_MaxPlayers", "4" },
		{ "CPP_Default_SessionName", "SteamCoreProSession" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Settings_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayers;
	static void NewProp_bAllowJoinInProgress_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowJoinInProgress;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProUpdateSession_UpdateSteamCoreProSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProUpdateSession_eventUpdateSteamCoreProSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreProUpdateSession_UpdateSteamCoreProSession_Statics::NewProp_Settings_ValueProp = { "Settings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSteamSessionSetting, METADATA_PARAMS(0, nullptr) }; // 1471580263
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreProUpdateSession_UpdateSteamCoreProSession_Statics::NewProp_Settings_Key_KeyProp = { "Settings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USteamCoreProUpdateSession_UpdateSteamCoreProSession_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProUpdateSession_eventUpdateSteamCoreProSession_Parms, Settings), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1471580263
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreProUpdateSession_UpdateSteamCoreProSession_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProUpdateSession_eventUpdateSteamCoreProSession_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreProUpdateSession_UpdateSteamCoreProSession_Statics::NewProp_MaxPlayers = { "MaxPlayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProUpdateSession_eventUpdateSteamCoreProSession_Parms, MaxPlayers), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreProUpdateSession_UpdateSteamCoreProSession_Statics::NewProp_bAllowJoinInProgress_SetBit(void* Obj)
{
	((SteamCoreProUpdateSession_eventUpdateSteamCoreProSession_Parms*)Obj)->bAllowJoinInProgress = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProUpdateSession_UpdateSteamCoreProSession_Statics::NewProp_bAllowJoinInProgress = { "bAllowJoinInProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProUpdateSession_eventUpdateSteamCoreProSession_Parms), &Z_Construct_UFunction_USteamCoreProUpdateSession_UpdateSteamCoreProSession_Statics::NewProp_bAllowJoinInProgress_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProUpdateSession_UpdateSteamCoreProSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProUpdateSession_eventUpdateSteamCoreProSession_Parms, ReturnValue), Z_Construct_UClass_USteamCoreProUpdateSession_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProUpdateSession_UpdateSteamCoreProSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProUpdateSession_UpdateSteamCoreProSession_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProUpdateSession_UpdateSteamCoreProSession_Statics::NewProp_Settings_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProUpdateSession_UpdateSteamCoreProSession_Statics::NewProp_Settings_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProUpdateSession_UpdateSteamCoreProSession_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProUpdateSession_UpdateSteamCoreProSession_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProUpdateSession_UpdateSteamCoreProSession_Statics::NewProp_MaxPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProUpdateSession_UpdateSteamCoreProSession_Statics::NewProp_bAllowJoinInProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProUpdateSession_UpdateSteamCoreProSession_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProUpdateSession_UpdateSteamCoreProSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProUpdateSession_UpdateSteamCoreProSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProUpdateSession, nullptr, "UpdateSteamCoreProSession", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProUpdateSession_UpdateSteamCoreProSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProUpdateSession_UpdateSteamCoreProSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProUpdateSession_UpdateSteamCoreProSession_Statics::SteamCoreProUpdateSession_eventUpdateSteamCoreProSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProUpdateSession_UpdateSteamCoreProSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProUpdateSession_UpdateSteamCoreProSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProUpdateSession_UpdateSteamCoreProSession_Statics::SteamCoreProUpdateSession_eventUpdateSteamCoreProSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProUpdateSession_UpdateSteamCoreProSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProUpdateSession_UpdateSteamCoreProSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProUpdateSession::execUpdateSteamCoreProSession)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TMAP(FString,FSteamSessionSetting,Z_Param_Settings);
	P_GET_PROPERTY(FStrProperty,Z_Param_SessionName);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxPlayers);
	P_GET_UBOOL(Z_Param_bAllowJoinInProgress);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreProUpdateSession**)Z_Param__Result=USteamCoreProUpdateSession::UpdateSteamCoreProSession(Z_Param_WorldContextObject,Z_Param_Settings,Z_Param_SessionName,Z_Param_MaxPlayers,Z_Param_bAllowJoinInProgress);
	P_NATIVE_END;
}
// End Class USteamCoreProUpdateSession Function UpdateSteamCoreProSession

// Begin Class USteamCoreProUpdateSession
void USteamCoreProUpdateSession::StaticRegisterNativesUSteamCoreProUpdateSession()
{
	UClass* Class = USteamCoreProUpdateSession::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnCompleted", &USteamCoreProUpdateSession::execOnCompleted },
		{ "UpdateSteamCoreProSession", &USteamCoreProUpdateSession::execUpdateSteamCoreProSession },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreProUpdateSession);
UClass* Z_Construct_UClass_USteamCoreProUpdateSession_NoRegister()
{
	return USteamCoreProUpdateSession::StaticClass();
}
struct Z_Construct_UClass_USteamCoreProUpdateSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreProUpdateSession\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreProUpdateSession\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmaking/SteamMatchmakingAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreProUpdateSession_OnCompleted, "OnCompleted" }, // 450185598
		{ &Z_Construct_UFunction_USteamCoreProUpdateSession_UpdateSteamCoreProSession, "UpdateSteamCoreProSession" }, // 1812778349
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreProUpdateSession>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreProUpdateSession_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreProUpdateSession, OnCallback), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2328757345
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreProUpdateSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProUpdateSession_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProUpdateSession_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamCoreProUpdateSession_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreProAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProUpdateSession_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreProUpdateSession_Statics::ClassParams = {
	&USteamCoreProUpdateSession::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreProUpdateSession_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProUpdateSession_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProUpdateSession_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreProUpdateSession_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCoreProUpdateSession()
{
	if (!Z_Registration_Info_UClass_USteamCoreProUpdateSession.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreProUpdateSession.OuterSingleton, Z_Construct_UClass_USteamCoreProUpdateSession_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreProUpdateSession.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamCoreProUpdateSession>()
{
	return USteamCoreProUpdateSession::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreProUpdateSession);
USteamCoreProUpdateSession::~USteamCoreProUpdateSession() {}
// End Class USteamCoreProUpdateSession

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionCreateLobby, USteamCoreProMatchmakingAsyncActionCreateLobby::StaticClass, TEXT("USteamCoreProMatchmakingAsyncActionCreateLobby"), &Z_Registration_Info_UClass_USteamCoreProMatchmakingAsyncActionCreateLobby, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreProMatchmakingAsyncActionCreateLobby), 3950807962U) },
		{ Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionRequestLobbyList, USteamCoreProMatchmakingAsyncActionRequestLobbyList::StaticClass, TEXT("USteamCoreProMatchmakingAsyncActionRequestLobbyList"), &Z_Registration_Info_UClass_USteamCoreProMatchmakingAsyncActionRequestLobbyList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreProMatchmakingAsyncActionRequestLobbyList), 911009212U) },
		{ Z_Construct_UClass_USteamCoreProMatchmakingAsyncActionJoinLobby, USteamCoreProMatchmakingAsyncActionJoinLobby::StaticClass, TEXT("USteamCoreProMatchmakingAsyncActionJoinLobby"), &Z_Registration_Info_UClass_USteamCoreProMatchmakingAsyncActionJoinLobby, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreProMatchmakingAsyncActionJoinLobby), 1696514204U) },
		{ Z_Construct_UClass_USteamCoreProCreateSession, USteamCoreProCreateSession::StaticClass, TEXT("USteamCoreProCreateSession"), &Z_Registration_Info_UClass_USteamCoreProCreateSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreProCreateSession), 3180501350U) },
		{ Z_Construct_UClass_USteamCoreProFindSession, USteamCoreProFindSession::StaticClass, TEXT("USteamCoreProFindSession"), &Z_Registration_Info_UClass_USteamCoreProFindSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreProFindSession), 897824344U) },
		{ Z_Construct_UClass_USteamCoreProDestroySession, USteamCoreProDestroySession::StaticClass, TEXT("USteamCoreProDestroySession"), &Z_Registration_Info_UClass_USteamCoreProDestroySession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreProDestroySession), 2351600147U) },
		{ Z_Construct_UClass_USteamCoreProUpdateSession, USteamCoreProUpdateSession::StaticClass, TEXT("USteamCoreProUpdateSession"), &Z_Registration_Info_UClass_USteamCoreProUpdateSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreProUpdateSession), 784986254U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_268032050(TEXT("/Script/SteamCorePro"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmaking_SteamMatchmakingAsyncActions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
