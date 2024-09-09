// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h"
#include "SteamCorePro/Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamMatchmakingServersAsyncActions() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
STEAMCOREPRO_API UClass* Z_Construct_UClass_UServerFilter_NoRegister();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProAsyncAction();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionPingServer();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionPingServer_NoRegister();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionRequestServerList();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionRequestServerList_NoRegister();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionServerRules();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionServerRules_NoRegister();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnPingServerAsyncDelegate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnServerRefreshCompleteDelegate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnServerRuleAsyncDelegate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnServerUpdatedAsyncDelegate__DelegateSignature();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FGameServerItem();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FGameServerRule();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Delegate FOnPingServerAsyncDelegate
struct Z_Construct_UDelegateFunction_SteamCorePro_OnPingServerAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnPingServerAsyncDelegate_Parms
	{
		FGameServerItem Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnPingServerAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnPingServerAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FGameServerItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 366988279
void Z_Construct_UDelegateFunction_SteamCorePro_OnPingServerAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnPingServerAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnPingServerAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnPingServerAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnPingServerAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnPingServerAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnPingServerAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnPingServerAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnPingServerAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnPingServerAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnPingServerAsyncDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnPingServerAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnPingServerAsyncDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnPingServerAsyncDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnPingServerAsyncDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnPingServerAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnPingServerAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnPingServerAsyncDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnPingServerAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnPingServerAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnPingServerAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPingServerAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPingServerAsyncDelegate, FGameServerItem const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnPingServerAsyncDelegate_Parms
	{
		FGameServerItem Data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnPingServerAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnPingServerAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPingServerAsyncDelegate

// Begin Delegate FOnServerUpdatedAsyncDelegate
struct Z_Construct_UDelegateFunction_SteamCorePro_OnServerUpdatedAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnServerUpdatedAsyncDelegate_Parms
	{
		FGameServerItem Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnServerUpdatedAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnServerUpdatedAsyncDelegate_Parms, Data), Z_Construct_UScriptStruct_FGameServerItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 366988279
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnServerUpdatedAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnServerUpdatedAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnServerUpdatedAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnServerUpdatedAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnServerUpdatedAsyncDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnServerUpdatedAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnServerUpdatedAsyncDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnServerUpdatedAsyncDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnServerUpdatedAsyncDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnServerUpdatedAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnServerUpdatedAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnServerUpdatedAsyncDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnServerUpdatedAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnServerUpdatedAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnServerUpdatedAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnServerUpdatedAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnServerUpdatedAsyncDelegate, FGameServerItem const& Data)
{
	struct _Script_SteamCorePro_eventOnServerUpdatedAsyncDelegate_Parms
	{
		FGameServerItem Data;
	};
	_Script_SteamCorePro_eventOnServerUpdatedAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	OnServerUpdatedAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnServerUpdatedAsyncDelegate

// Begin Delegate FOnServerRuleAsyncDelegate
struct Z_Construct_UDelegateFunction_SteamCorePro_OnServerRuleAsyncDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnServerRuleAsyncDelegate_Parms
	{
		TArray<FGameServerRule> Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnServerRuleAsyncDelegate__DelegateSignature_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameServerRule, METADATA_PARAMS(0, nullptr) }; // 2368865488
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnServerRuleAsyncDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnServerRuleAsyncDelegate_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2368865488
void Z_Construct_UDelegateFunction_SteamCorePro_OnServerRuleAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnServerRuleAsyncDelegate_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnServerRuleAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnServerRuleAsyncDelegate_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnServerRuleAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnServerRuleAsyncDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnServerRuleAsyncDelegate__DelegateSignature_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnServerRuleAsyncDelegate__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnServerRuleAsyncDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnServerRuleAsyncDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnServerRuleAsyncDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnServerRuleAsyncDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnServerRuleAsyncDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnServerRuleAsyncDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnServerRuleAsyncDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnServerRuleAsyncDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnServerRuleAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnServerRuleAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnServerRuleAsyncDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnServerRuleAsyncDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnServerRuleAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnServerRuleAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnServerRuleAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnServerRuleAsyncDelegate, TArray<FGameServerRule> const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnServerRuleAsyncDelegate_Parms
	{
		TArray<FGameServerRule> Data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnServerRuleAsyncDelegate_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnServerRuleAsyncDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnServerRuleAsyncDelegate

// Begin Delegate FOnServerRefreshCompleteDelegate
struct Z_Construct_UDelegateFunction_SteamCorePro_OnServerRefreshCompleteDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnServerRefreshCompleteDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnServerRefreshCompleteDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnServerRefreshCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnServerRefreshCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnServerRefreshCompleteDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnServerRefreshCompleteDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnServerRefreshCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnServerRefreshCompleteDelegate)
{
	OnServerRefreshCompleteDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnServerRefreshCompleteDelegate

// Begin Class USteamCoreProMatchmakingServersAsyncActionPingServer Function CancelPingQueries
struct Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_CancelPingQueries_Statics
{
	struct SteamCoreProMatchmakingServersAsyncActionPingServer_eventCancelPingQueries_Parms
	{
		UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|MatchmakingServers|Async" },
		{ "Comment", "/*\n\x09* Cancel all active \"Server Ping\" queries\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
		{ "ToolTip", "* Cancel all active \"Server Ping\" queries" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_CancelPingQueries_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionPingServer_eventCancelPingQueries_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_CancelPingQueries_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_CancelPingQueries_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_CancelPingQueries_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_CancelPingQueries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionPingServer, nullptr, "CancelPingQueries", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_CancelPingQueries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_CancelPingQueries_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_CancelPingQueries_Statics::SteamCoreProMatchmakingServersAsyncActionPingServer_eventCancelPingQueries_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_CancelPingQueries_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_CancelPingQueries_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_CancelPingQueries_Statics::SteamCoreProMatchmakingServersAsyncActionPingServer_eventCancelPingQueries_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_CancelPingQueries()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_CancelPingQueries_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProMatchmakingServersAsyncActionPingServer::execCancelPingQueries)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamCoreProMatchmakingServersAsyncActionPingServer::CancelPingQueries(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class USteamCoreProMatchmakingServersAsyncActionPingServer Function CancelPingQueries

// Begin Class USteamCoreProMatchmakingServersAsyncActionPingServer Function HandleCallback
struct Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_HandleCallback_Statics
{
	struct SteamCoreProMatchmakingServersAsyncActionPingServer_eventHandleCallback_Parms
	{
		FGameServerItem Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionPingServer_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FGameServerItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 366988279
void Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreProMatchmakingServersAsyncActionPingServer_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProMatchmakingServersAsyncActionPingServer_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionPingServer, nullptr, "HandleCallback", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::SteamCoreProMatchmakingServersAsyncActionPingServer_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::SteamCoreProMatchmakingServersAsyncActionPingServer_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProMatchmakingServersAsyncActionPingServer::execHandleCallback)
{
	P_GET_STRUCT_REF(FGameServerItem,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// End Class USteamCoreProMatchmakingServersAsyncActionPingServer Function HandleCallback

// Begin Class USteamCoreProMatchmakingServersAsyncActionPingServer Function PingServerAsync
struct Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics
{
	struct SteamCoreProMatchmakingServersAsyncActionPingServer_eventPingServerAsync_Parms
	{
		UObject* WorldContextObject;
		FString IP;
		int32 Port;
		float Timeout;
		USteamCoreProMatchmakingServersAsyncActionPingServer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|MatchmakingServers|Async" },
		{ "Comment", "/**\n\x09* Queries an individual game servers directly via IP/Port to request an updated ping time and other details from the server.\n\x09*\n\x09* @param\x09IP\x09\x09The IP of the game server you are querying in host order, i.e 127.0.0.1 == 0x7f000001.\n\x09* @param\x09Port\x09The port of the game server you are querying, in host order.\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Ping Server" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
		{ "ToolTip", "Queries an individual game servers directly via IP/Port to request an updated ping time and other details from the server.\n\n@param        IP              The IP of the game server you are querying in host order, i.e 127.0.0.1 == 0x7f000001.\n@param        Port    The port of the game server you are querying, in host order.\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionPingServer_eventPingServerAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionPingServer_eventPingServerAsync_Parms, IP), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionPingServer_eventPingServerAsync_Parms, Port), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionPingServer_eventPingServerAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionPingServer_eventPingServerAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionPingServer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::NewProp_IP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::NewProp_Port,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionPingServer, nullptr, "PingServerAsync", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::SteamCoreProMatchmakingServersAsyncActionPingServer_eventPingServerAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::SteamCoreProMatchmakingServersAsyncActionPingServer_eventPingServerAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_PingServerAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_PingServerAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProMatchmakingServersAsyncActionPingServer::execPingServerAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_IP);
	P_GET_PROPERTY(FIntProperty,Z_Param_Port);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreProMatchmakingServersAsyncActionPingServer**)Z_Param__Result=USteamCoreProMatchmakingServersAsyncActionPingServer::PingServerAsync(Z_Param_WorldContextObject,Z_Param_IP,Z_Param_Port,Z_Param_Timeout);
	P_NATIVE_END;
}
// End Class USteamCoreProMatchmakingServersAsyncActionPingServer Function PingServerAsync

// Begin Class USteamCoreProMatchmakingServersAsyncActionPingServer
void USteamCoreProMatchmakingServersAsyncActionPingServer::StaticRegisterNativesUSteamCoreProMatchmakingServersAsyncActionPingServer()
{
	UClass* Class = USteamCoreProMatchmakingServersAsyncActionPingServer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CancelPingQueries", &USteamCoreProMatchmakingServersAsyncActionPingServer::execCancelPingQueries },
		{ "HandleCallback", &USteamCoreProMatchmakingServersAsyncActionPingServer::execHandleCallback },
		{ "PingServerAsync", &USteamCoreProMatchmakingServersAsyncActionPingServer::execPingServerAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreProMatchmakingServersAsyncActionPingServer);
UClass* Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionPingServer_NoRegister()
{
	return USteamCoreProMatchmakingServersAsyncActionPingServer::StaticClass();
}
struct Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionPingServer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreProMatchmakingServersAsyncActionPingServer\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreProMatchmakingServersAsyncActionPingServer\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_CancelPingQueries, "CancelPingQueries" }, // 31318800
		{ &Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_HandleCallback, "HandleCallback" }, // 1147473361
		{ &Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionPingServer_PingServerAsync, "PingServerAsync" }, // 1813413252
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreProMatchmakingServersAsyncActionPingServer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionPingServer_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreProMatchmakingServersAsyncActionPingServer, OnCallback), Z_Construct_UDelegateFunction_SteamCorePro_OnPingServerAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 2699925700
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionPingServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionPingServer_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionPingServer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionPingServer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreProAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionPingServer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionPingServer_Statics::ClassParams = {
	&USteamCoreProMatchmakingServersAsyncActionPingServer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionPingServer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionPingServer_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionPingServer_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionPingServer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionPingServer()
{
	if (!Z_Registration_Info_UClass_USteamCoreProMatchmakingServersAsyncActionPingServer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreProMatchmakingServersAsyncActionPingServer.OuterSingleton, Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionPingServer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreProMatchmakingServersAsyncActionPingServer.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamCoreProMatchmakingServersAsyncActionPingServer>()
{
	return USteamCoreProMatchmakingServersAsyncActionPingServer::StaticClass();
}
USteamCoreProMatchmakingServersAsyncActionPingServer::USteamCoreProMatchmakingServersAsyncActionPingServer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreProMatchmakingServersAsyncActionPingServer);
USteamCoreProMatchmakingServersAsyncActionPingServer::~USteamCoreProMatchmakingServersAsyncActionPingServer() {}
// End Class USteamCoreProMatchmakingServersAsyncActionPingServer

// Begin Class USteamCoreProMatchmakingServersAsyncActionRequestServerList Function CancelServerListQueries
struct Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_CancelServerListQueries_Statics
{
	struct SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventCancelServerListQueries_Parms
	{
		UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|MatchmakingServers" },
		{ "Comment", "/*\n\x09 * Cancel all active \"Server List\" queries\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
		{ "ToolTip", "* Cancel all active \"Server List\" queries" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_CancelServerListQueries_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventCancelServerListQueries_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_CancelServerListQueries_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_CancelServerListQueries_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_CancelServerListQueries_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_CancelServerListQueries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionRequestServerList, nullptr, "CancelServerListQueries", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_CancelServerListQueries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_CancelServerListQueries_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_CancelServerListQueries_Statics::SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventCancelServerListQueries_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_CancelServerListQueries_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_CancelServerListQueries_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_CancelServerListQueries_Statics::SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventCancelServerListQueries_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_CancelServerListQueries()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_CancelServerListQueries_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProMatchmakingServersAsyncActionRequestServerList::execCancelServerListQueries)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamCoreProMatchmakingServersAsyncActionRequestServerList::CancelServerListQueries(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class USteamCoreProMatchmakingServersAsyncActionRequestServerList Function CancelServerListQueries

// Begin Class USteamCoreProMatchmakingServersAsyncActionRequestServerList Function HandleCallback
struct Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics
{
	struct SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventHandleCallback_Parms
	{
		FGameServerItem Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventHandleCallback_Parms, Data), Z_Construct_UScriptStruct_FGameServerItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 366988279
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionRequestServerList, nullptr, "HandleCallback", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProMatchmakingServersAsyncActionRequestServerList::execHandleCallback)
{
	P_GET_STRUCT_REF(FGameServerItem,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data);
	P_NATIVE_END;
}
// End Class USteamCoreProMatchmakingServersAsyncActionRequestServerList Function HandleCallback

// Begin Class USteamCoreProMatchmakingServersAsyncActionRequestServerList Function HandleServerListFinished
struct Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_HandleServerListFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_HandleServerListFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionRequestServerList, nullptr, "HandleServerListFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_HandleServerListFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_HandleServerListFinished_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_HandleServerListFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_HandleServerListFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProMatchmakingServersAsyncActionRequestServerList::execHandleServerListFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleServerListFinished();
	P_NATIVE_END;
}
// End Class USteamCoreProMatchmakingServersAsyncActionRequestServerList Function HandleServerListFinished

// Begin Class USteamCoreProMatchmakingServersAsyncActionRequestServerList Function RequestFavoritesServerListAsync
struct Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics
{
	struct SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestFavoritesServerListAsync_Parms
	{
		UObject* WorldContextObject;
		int32 AppID;
		float Timeout;
		int32 MaxResults;
		bool bIgnoreNonResponsive;
		UServerFilter* ServerFilter;
		USteamCoreProMatchmakingServersAsyncActionRequestServerList* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|MatchmakingServers|Async" },
		{ "Comment", "/**\n\x09* Request a new list of game servers from the 'FAVORITES' server list.\n\x09*\n\x09* @param\x09""AppID\x09The app to request the server list of.\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_AppID", "480" },
		{ "CPP_Default_bIgnoreNonResponsive", "false" },
		{ "CPP_Default_MaxResults", "50" },
		{ "CPP_Default_ServerFilter", "None" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request Favorites Server List" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
		{ "ToolTip", "Request a new list of game servers from the 'FAVORITES' server list.\n\n@param        AppID   The app to request the server list of.\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
	static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerFilter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestFavoritesServerListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestFavoritesServerListAsync_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestFavoritesServerListAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestFavoritesServerListAsync_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
{
	((SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestFavoritesServerListAsync_Parms*)Obj)->bIgnoreNonResponsive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestFavoritesServerListAsync_Parms), &Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_ServerFilter = { "ServerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestFavoritesServerListAsync_Parms, ServerFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestFavoritesServerListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionRequestServerList_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_MaxResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_bIgnoreNonResponsive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_ServerFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionRequestServerList, nullptr, "RequestFavoritesServerListAsync", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestFavoritesServerListAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestFavoritesServerListAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProMatchmakingServersAsyncActionRequestServerList::execRequestFavoritesServerListAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
	P_GET_UBOOL(Z_Param_bIgnoreNonResponsive);
	P_GET_OBJECT(UServerFilter,Z_Param_ServerFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreProMatchmakingServersAsyncActionRequestServerList**)Z_Param__Result=USteamCoreProMatchmakingServersAsyncActionRequestServerList::RequestFavoritesServerListAsync(Z_Param_WorldContextObject,Z_Param_AppID,Z_Param_Timeout,Z_Param_MaxResults,Z_Param_bIgnoreNonResponsive,Z_Param_ServerFilter);
	P_NATIVE_END;
}
// End Class USteamCoreProMatchmakingServersAsyncActionRequestServerList Function RequestFavoritesServerListAsync

// Begin Class USteamCoreProMatchmakingServersAsyncActionRequestServerList Function RequestFriendsServerListAsync
struct Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics
{
	struct SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestFriendsServerListAsync_Parms
	{
		UObject* WorldContextObject;
		int32 AppID;
		float Timeout;
		int32 MaxResults;
		bool bIgnoreNonResponsive;
		UServerFilter* ServerFilter;
		USteamCoreProMatchmakingServersAsyncActionRequestServerList* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|MatchmakingServers|Async" },
		{ "Comment", "/**\n\x09* Request a new list of game servers from the 'FRIENDS' server list.\n\x09*\n\x09* @param\x09""AppID\x09The app to request the server list of.\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_AppID", "480" },
		{ "CPP_Default_bIgnoreNonResponsive", "false" },
		{ "CPP_Default_MaxResults", "50" },
		{ "CPP_Default_ServerFilter", "None" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request Friends Server List" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
		{ "ToolTip", "Request a new list of game servers from the 'FRIENDS' server list.\n\n@param        AppID   The app to request the server list of.\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
	static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerFilter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestFriendsServerListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestFriendsServerListAsync_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestFriendsServerListAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestFriendsServerListAsync_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
{
	((SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestFriendsServerListAsync_Parms*)Obj)->bIgnoreNonResponsive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestFriendsServerListAsync_Parms), &Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_ServerFilter = { "ServerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestFriendsServerListAsync_Parms, ServerFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestFriendsServerListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionRequestServerList_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_MaxResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_bIgnoreNonResponsive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_ServerFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionRequestServerList, nullptr, "RequestFriendsServerListAsync", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestFriendsServerListAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestFriendsServerListAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProMatchmakingServersAsyncActionRequestServerList::execRequestFriendsServerListAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
	P_GET_UBOOL(Z_Param_bIgnoreNonResponsive);
	P_GET_OBJECT(UServerFilter,Z_Param_ServerFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreProMatchmakingServersAsyncActionRequestServerList**)Z_Param__Result=USteamCoreProMatchmakingServersAsyncActionRequestServerList::RequestFriendsServerListAsync(Z_Param_WorldContextObject,Z_Param_AppID,Z_Param_Timeout,Z_Param_MaxResults,Z_Param_bIgnoreNonResponsive,Z_Param_ServerFilter);
	P_NATIVE_END;
}
// End Class USteamCoreProMatchmakingServersAsyncActionRequestServerList Function RequestFriendsServerListAsync

// Begin Class USteamCoreProMatchmakingServersAsyncActionRequestServerList Function RequestHistoryServerListAsync
struct Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics
{
	struct SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestHistoryServerListAsync_Parms
	{
		UObject* WorldContextObject;
		int32 AppID;
		float Timeout;
		int32 MaxResults;
		bool bIgnoreNonResponsive;
		UServerFilter* ServerFilter;
		USteamCoreProMatchmakingServersAsyncActionRequestServerList* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|MatchmakingServers|Async" },
		{ "Comment", "/**\n\x09* Request a new list of game servers from the 'HISTORY' server list.\n\x09*\n\x09* @param\x09""AppID\x09The app to request the server list of.\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_AppID", "480" },
		{ "CPP_Default_bIgnoreNonResponsive", "false" },
		{ "CPP_Default_MaxResults", "50" },
		{ "CPP_Default_ServerFilter", "None" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request History Server List" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
		{ "ToolTip", "Request a new list of game servers from the 'HISTORY' server list.\n\n@param        AppID   The app to request the server list of.\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
	static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerFilter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestHistoryServerListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestHistoryServerListAsync_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestHistoryServerListAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestHistoryServerListAsync_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
{
	((SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestHistoryServerListAsync_Parms*)Obj)->bIgnoreNonResponsive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestHistoryServerListAsync_Parms), &Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_ServerFilter = { "ServerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestHistoryServerListAsync_Parms, ServerFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestHistoryServerListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionRequestServerList_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_MaxResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_bIgnoreNonResponsive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_ServerFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionRequestServerList, nullptr, "RequestHistoryServerListAsync", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestHistoryServerListAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestHistoryServerListAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProMatchmakingServersAsyncActionRequestServerList::execRequestHistoryServerListAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
	P_GET_UBOOL(Z_Param_bIgnoreNonResponsive);
	P_GET_OBJECT(UServerFilter,Z_Param_ServerFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreProMatchmakingServersAsyncActionRequestServerList**)Z_Param__Result=USteamCoreProMatchmakingServersAsyncActionRequestServerList::RequestHistoryServerListAsync(Z_Param_WorldContextObject,Z_Param_AppID,Z_Param_Timeout,Z_Param_MaxResults,Z_Param_bIgnoreNonResponsive,Z_Param_ServerFilter);
	P_NATIVE_END;
}
// End Class USteamCoreProMatchmakingServersAsyncActionRequestServerList Function RequestHistoryServerListAsync

// Begin Class USteamCoreProMatchmakingServersAsyncActionRequestServerList Function RequestInternetServerListAsync
struct Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics
{
	struct SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestInternetServerListAsync_Parms
	{
		UObject* WorldContextObject;
		int32 AppID;
		float Timeout;
		int32 MaxResults;
		bool bIgnoreNonResponsive;
		UServerFilter* ServerFilter;
		USteamCoreProMatchmakingServersAsyncActionRequestServerList* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|MatchmakingServers|Async" },
		{ "Comment", "/**\n\x09* Request a new list of game servers from the 'INTERNET' server list.\n\x09*\n\x09* @param\x09""AppID\x09The app to request the server list of.\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_AppID", "480" },
		{ "CPP_Default_bIgnoreNonResponsive", "false" },
		{ "CPP_Default_MaxResults", "50" },
		{ "CPP_Default_ServerFilter", "None" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request Internet Server List" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
		{ "ToolTip", "Request a new list of game servers from the 'INTERNET' server list.\n\n@param        AppID   The app to request the server list of.\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
	static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerFilter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestInternetServerListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestInternetServerListAsync_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestInternetServerListAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestInternetServerListAsync_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
{
	((SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestInternetServerListAsync_Parms*)Obj)->bIgnoreNonResponsive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestInternetServerListAsync_Parms), &Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_ServerFilter = { "ServerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestInternetServerListAsync_Parms, ServerFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestInternetServerListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionRequestServerList_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_MaxResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_bIgnoreNonResponsive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_ServerFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionRequestServerList, nullptr, "RequestInternetServerListAsync", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestInternetServerListAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestInternetServerListAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProMatchmakingServersAsyncActionRequestServerList::execRequestInternetServerListAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
	P_GET_UBOOL(Z_Param_bIgnoreNonResponsive);
	P_GET_OBJECT(UServerFilter,Z_Param_ServerFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreProMatchmakingServersAsyncActionRequestServerList**)Z_Param__Result=USteamCoreProMatchmakingServersAsyncActionRequestServerList::RequestInternetServerListAsync(Z_Param_WorldContextObject,Z_Param_AppID,Z_Param_Timeout,Z_Param_MaxResults,Z_Param_bIgnoreNonResponsive,Z_Param_ServerFilter);
	P_NATIVE_END;
}
// End Class USteamCoreProMatchmakingServersAsyncActionRequestServerList Function RequestInternetServerListAsync

// Begin Class USteamCoreProMatchmakingServersAsyncActionRequestServerList Function RequestLANServerListAsync
struct Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics
{
	struct SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestLANServerListAsync_Parms
	{
		UObject* WorldContextObject;
		int32 AppID;
		float Timeout;
		int32 MaxResults;
		bool bIgnoreNonResponsive;
		UServerFilter* ServerFilter;
		USteamCoreProMatchmakingServersAsyncActionRequestServerList* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|MatchmakingServers|Async" },
		{ "Comment", "/**\n\x09* Request a new list of game servers from the 'LAN' server list.\n\x09*\n\x09* @param\x09""AppID\x09The app to request the server list of.\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_AppID", "480" },
		{ "CPP_Default_bIgnoreNonResponsive", "false" },
		{ "CPP_Default_MaxResults", "50" },
		{ "CPP_Default_ServerFilter", "None" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request LAN Server List" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
		{ "ToolTip", "Request a new list of game servers from the 'LAN' server list.\n\n@param        AppID   The app to request the server list of.\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
	static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerFilter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestLANServerListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestLANServerListAsync_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestLANServerListAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestLANServerListAsync_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
{
	((SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestLANServerListAsync_Parms*)Obj)->bIgnoreNonResponsive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestLANServerListAsync_Parms), &Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_ServerFilter = { "ServerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestLANServerListAsync_Parms, ServerFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestLANServerListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionRequestServerList_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_MaxResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_bIgnoreNonResponsive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_ServerFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionRequestServerList, nullptr, "RequestLANServerListAsync", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestLANServerListAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestLANServerListAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProMatchmakingServersAsyncActionRequestServerList::execRequestLANServerListAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
	P_GET_UBOOL(Z_Param_bIgnoreNonResponsive);
	P_GET_OBJECT(UServerFilter,Z_Param_ServerFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreProMatchmakingServersAsyncActionRequestServerList**)Z_Param__Result=USteamCoreProMatchmakingServersAsyncActionRequestServerList::RequestLANServerListAsync(Z_Param_WorldContextObject,Z_Param_AppID,Z_Param_Timeout,Z_Param_MaxResults,Z_Param_bIgnoreNonResponsive,Z_Param_ServerFilter);
	P_NATIVE_END;
}
// End Class USteamCoreProMatchmakingServersAsyncActionRequestServerList Function RequestLANServerListAsync

// Begin Class USteamCoreProMatchmakingServersAsyncActionRequestServerList Function RequestSpectatorServerListAsync
struct Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics
{
	struct SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestSpectatorServerListAsync_Parms
	{
		UObject* WorldContextObject;
		int32 AppID;
		float Timeout;
		int32 MaxResults;
		bool bIgnoreNonResponsive;
		UServerFilter* ServerFilter;
		USteamCoreProMatchmakingServersAsyncActionRequestServerList* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|MatchmakingServers|Async" },
		{ "Comment", "/**\n\x09* Request a new list of game servers from the 'spectator' server list.\n\x09*\n\x09* @param\x09""AppID\x09The app to request the server list of.\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_AppID", "480" },
		{ "CPP_Default_bIgnoreNonResponsive", "false" },
		{ "CPP_Default_MaxResults", "50" },
		{ "CPP_Default_ServerFilter", "None" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Request Spectator Server List" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
		{ "ToolTip", "Request a new list of game servers from the 'spectator' server list.\n\n@param        AppID   The app to request the server list of.\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
	static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerFilter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestSpectatorServerListAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestSpectatorServerListAsync_Parms, AppID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestSpectatorServerListAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestSpectatorServerListAsync_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
{
	((SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestSpectatorServerListAsync_Parms*)Obj)->bIgnoreNonResponsive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestSpectatorServerListAsync_Parms), &Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_ServerFilter = { "ServerFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestSpectatorServerListAsync_Parms, ServerFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestSpectatorServerListAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionRequestServerList_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_MaxResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_bIgnoreNonResponsive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_ServerFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionRequestServerList, nullptr, "RequestSpectatorServerListAsync", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestSpectatorServerListAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::SteamCoreProMatchmakingServersAsyncActionRequestServerList_eventRequestSpectatorServerListAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProMatchmakingServersAsyncActionRequestServerList::execRequestSpectatorServerListAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppID);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
	P_GET_UBOOL(Z_Param_bIgnoreNonResponsive);
	P_GET_OBJECT(UServerFilter,Z_Param_ServerFilter);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreProMatchmakingServersAsyncActionRequestServerList**)Z_Param__Result=USteamCoreProMatchmakingServersAsyncActionRequestServerList::RequestSpectatorServerListAsync(Z_Param_WorldContextObject,Z_Param_AppID,Z_Param_Timeout,Z_Param_MaxResults,Z_Param_bIgnoreNonResponsive,Z_Param_ServerFilter);
	P_NATIVE_END;
}
// End Class USteamCoreProMatchmakingServersAsyncActionRequestServerList Function RequestSpectatorServerListAsync

// Begin Class USteamCoreProMatchmakingServersAsyncActionRequestServerList
void USteamCoreProMatchmakingServersAsyncActionRequestServerList::StaticRegisterNativesUSteamCoreProMatchmakingServersAsyncActionRequestServerList()
{
	UClass* Class = USteamCoreProMatchmakingServersAsyncActionRequestServerList::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CancelServerListQueries", &USteamCoreProMatchmakingServersAsyncActionRequestServerList::execCancelServerListQueries },
		{ "HandleCallback", &USteamCoreProMatchmakingServersAsyncActionRequestServerList::execHandleCallback },
		{ "HandleServerListFinished", &USteamCoreProMatchmakingServersAsyncActionRequestServerList::execHandleServerListFinished },
		{ "RequestFavoritesServerListAsync", &USteamCoreProMatchmakingServersAsyncActionRequestServerList::execRequestFavoritesServerListAsync },
		{ "RequestFriendsServerListAsync", &USteamCoreProMatchmakingServersAsyncActionRequestServerList::execRequestFriendsServerListAsync },
		{ "RequestHistoryServerListAsync", &USteamCoreProMatchmakingServersAsyncActionRequestServerList::execRequestHistoryServerListAsync },
		{ "RequestInternetServerListAsync", &USteamCoreProMatchmakingServersAsyncActionRequestServerList::execRequestInternetServerListAsync },
		{ "RequestLANServerListAsync", &USteamCoreProMatchmakingServersAsyncActionRequestServerList::execRequestLANServerListAsync },
		{ "RequestSpectatorServerListAsync", &USteamCoreProMatchmakingServersAsyncActionRequestServerList::execRequestSpectatorServerListAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreProMatchmakingServersAsyncActionRequestServerList);
UClass* Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionRequestServerList_NoRegister()
{
	return USteamCoreProMatchmakingServersAsyncActionRequestServerList::StaticClass();
}
struct Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionRequestServerList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreProMatchmakingServersAsyncActionRequestFavoritesServerList\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreProMatchmakingServersAsyncActionRequestFavoritesServerList\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRefreshCompleted_MetaData[] = {
		{ "Comment", "// This delegate will fire when Steam tells us that we've got the entire list, but could also mean it took too long and we've timed out.\n" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
		{ "ToolTip", "This delegate will fire when Steam tells us that we've got the entire list, but could also mean it took too long and we've timed out." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRefreshCompleted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_CancelServerListQueries, "CancelServerListQueries" }, // 2668155076
		{ &Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_HandleCallback, "HandleCallback" }, // 544511073
		{ &Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_HandleServerListFinished, "HandleServerListFinished" }, // 1638991453
		{ &Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFavoritesServerListAsync, "RequestFavoritesServerListAsync" }, // 2970650713
		{ &Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestFriendsServerListAsync, "RequestFriendsServerListAsync" }, // 2250009948
		{ &Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestHistoryServerListAsync, "RequestHistoryServerListAsync" }, // 403874498
		{ &Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestInternetServerListAsync, "RequestInternetServerListAsync" }, // 305371404
		{ &Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestLANServerListAsync, "RequestLANServerListAsync" }, // 1809713664
		{ &Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionRequestServerList_RequestSpectatorServerListAsync, "RequestSpectatorServerListAsync" }, // 572835789
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreProMatchmakingServersAsyncActionRequestServerList>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionRequestServerList_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreProMatchmakingServersAsyncActionRequestServerList, OnCallback), Z_Construct_UDelegateFunction_SteamCorePro_OnServerUpdatedAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 4056634483
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionRequestServerList_Statics::NewProp_OnRefreshCompleted = { "OnRefreshCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreProMatchmakingServersAsyncActionRequestServerList, OnRefreshCompleted), Z_Construct_UDelegateFunction_SteamCorePro_OnServerRefreshCompleteDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRefreshCompleted_MetaData), NewProp_OnRefreshCompleted_MetaData) }; // 1628589268
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionRequestServerList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionRequestServerList_Statics::NewProp_OnCallback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionRequestServerList_Statics::NewProp_OnRefreshCompleted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionRequestServerList_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionRequestServerList_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreProAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionRequestServerList_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionRequestServerList_Statics::ClassParams = {
	&USteamCoreProMatchmakingServersAsyncActionRequestServerList::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionRequestServerList_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionRequestServerList_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionRequestServerList_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionRequestServerList_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionRequestServerList()
{
	if (!Z_Registration_Info_UClass_USteamCoreProMatchmakingServersAsyncActionRequestServerList.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreProMatchmakingServersAsyncActionRequestServerList.OuterSingleton, Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionRequestServerList_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreProMatchmakingServersAsyncActionRequestServerList.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamCoreProMatchmakingServersAsyncActionRequestServerList>()
{
	return USteamCoreProMatchmakingServersAsyncActionRequestServerList::StaticClass();
}
USteamCoreProMatchmakingServersAsyncActionRequestServerList::USteamCoreProMatchmakingServersAsyncActionRequestServerList(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreProMatchmakingServersAsyncActionRequestServerList);
USteamCoreProMatchmakingServersAsyncActionRequestServerList::~USteamCoreProMatchmakingServersAsyncActionRequestServerList() {}
// End Class USteamCoreProMatchmakingServersAsyncActionRequestServerList

// Begin Class USteamCoreProMatchmakingServersAsyncActionServerRules Function CancelServerRulesQueries
struct Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_CancelServerRulesQueries_Statics
{
	struct SteamCoreProMatchmakingServersAsyncActionServerRules_eventCancelServerRulesQueries_Parms
	{
		UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|MatchmakingServers|Async" },
		{ "Comment", "/*\n\x09* Cancel all active \"Server Rules\" queries\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
		{ "ToolTip", "* Cancel all active \"Server Rules\" queries" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_CancelServerRulesQueries_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionServerRules_eventCancelServerRulesQueries_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_CancelServerRulesQueries_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_CancelServerRulesQueries_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_CancelServerRulesQueries_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_CancelServerRulesQueries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionServerRules, nullptr, "CancelServerRulesQueries", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_CancelServerRulesQueries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_CancelServerRulesQueries_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_CancelServerRulesQueries_Statics::SteamCoreProMatchmakingServersAsyncActionServerRules_eventCancelServerRulesQueries_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_CancelServerRulesQueries_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_CancelServerRulesQueries_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_CancelServerRulesQueries_Statics::SteamCoreProMatchmakingServersAsyncActionServerRules_eventCancelServerRulesQueries_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_CancelServerRulesQueries()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_CancelServerRulesQueries_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProMatchmakingServersAsyncActionServerRules::execCancelServerRulesQueries)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	USteamCoreProMatchmakingServersAsyncActionServerRules::CancelServerRulesQueries(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class USteamCoreProMatchmakingServersAsyncActionServerRules Function CancelServerRulesQueries

// Begin Class USteamCoreProMatchmakingServersAsyncActionServerRules Function HandleCallback
struct Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_HandleCallback_Statics
{
	struct SteamCoreProMatchmakingServersAsyncActionServerRules_eventHandleCallback_Parms
	{
		TArray<FGameServerRule> Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameServerRule, METADATA_PARAMS(0, nullptr) }; // 2368865488
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionServerRules_eventHandleCallback_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2368865488
void Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((SteamCoreProMatchmakingServersAsyncActionServerRules_eventHandleCallback_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamCoreProMatchmakingServersAsyncActionServerRules_eventHandleCallback_Parms), &Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionServerRules, nullptr, "HandleCallback", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::SteamCoreProMatchmakingServersAsyncActionServerRules_eventHandleCallback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::SteamCoreProMatchmakingServersAsyncActionServerRules_eventHandleCallback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_HandleCallback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_HandleCallback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProMatchmakingServersAsyncActionServerRules::execHandleCallback)
{
	P_GET_TARRAY_REF(FGameServerRule,Z_Param_Out_Data);
	P_GET_UBOOL(Z_Param_bWasSuccessful);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCallback(Z_Param_Out_Data,Z_Param_bWasSuccessful);
	P_NATIVE_END;
}
// End Class USteamCoreProMatchmakingServersAsyncActionServerRules Function HandleCallback

// Begin Class USteamCoreProMatchmakingServersAsyncActionServerRules Function ServerRulesAsync
struct Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics
{
	struct SteamCoreProMatchmakingServersAsyncActionServerRules_eventServerRulesAsync_Parms
	{
		UObject* WorldContextObject;
		FString Ip;
		int32 QueryPort;
		float Timeout;
		USteamCoreProMatchmakingServersAsyncActionServerRules* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SteamCore|MatchmakingServers|Async" },
		{ "Comment", "/**\n\x09* Queries an individual game servers directly via IP/Port to request the list of rules that the server is running. (See ISteamGameServer::SetKeyValue to set the rules on the server side.)\n\x09*\n\x09* @param\x09Ip\x09\x09\x09The IP of the game server you are querying in host order, i.e 127.0.0.1 == 0x7f000001.\n\x09* @param\x09QueryPort\x09The port of the game server you are querying, in host order.\n\x09* @param\x09Timeout\x09\x09How long we wait for this function to finish before aborting\n\x09*/" },
		{ "CPP_Default_Timeout", "10.000000" },
		{ "DisplayName", "Server Rules" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
		{ "ToolTip", "Queries an individual game servers directly via IP/Port to request the list of rules that the server is running. (See ISteamGameServer::SetKeyValue to set the rules on the server side.)\n\n@param        Ip                      The IP of the game server you are querying in host order, i.e 127.0.0.1 == 0x7f000001.\n@param        QueryPort       The port of the game server you are querying, in host order.\n@param        Timeout         How long we wait for this function to finish before aborting" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Ip;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QueryPort;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionServerRules_eventServerRulesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::NewProp_Ip = { "Ip", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionServerRules_eventServerRulesAsync_Parms, Ip), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionServerRules_eventServerRulesAsync_Parms, QueryPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionServerRules_eventServerRulesAsync_Parms, Timeout), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamCoreProMatchmakingServersAsyncActionServerRules_eventServerRulesAsync_Parms, ReturnValue), Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionServerRules_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::NewProp_Ip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::NewProp_QueryPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::NewProp_Timeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionServerRules, nullptr, "ServerRulesAsync", nullptr, nullptr, Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::SteamCoreProMatchmakingServersAsyncActionServerRules_eventServerRulesAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::SteamCoreProMatchmakingServersAsyncActionServerRules_eventServerRulesAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_ServerRulesAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_ServerRulesAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamCoreProMatchmakingServersAsyncActionServerRules::execServerRulesAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Ip);
	P_GET_PROPERTY(FIntProperty,Z_Param_QueryPort);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamCoreProMatchmakingServersAsyncActionServerRules**)Z_Param__Result=USteamCoreProMatchmakingServersAsyncActionServerRules::ServerRulesAsync(Z_Param_WorldContextObject,Z_Param_Ip,Z_Param_QueryPort,Z_Param_Timeout);
	P_NATIVE_END;
}
// End Class USteamCoreProMatchmakingServersAsyncActionServerRules Function ServerRulesAsync

// Begin Class USteamCoreProMatchmakingServersAsyncActionServerRules
void USteamCoreProMatchmakingServersAsyncActionServerRules::StaticRegisterNativesUSteamCoreProMatchmakingServersAsyncActionServerRules()
{
	UClass* Class = USteamCoreProMatchmakingServersAsyncActionServerRules::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CancelServerRulesQueries", &USteamCoreProMatchmakingServersAsyncActionServerRules::execCancelServerRulesQueries },
		{ "HandleCallback", &USteamCoreProMatchmakingServersAsyncActionServerRules::execHandleCallback },
		{ "ServerRulesAsync", &USteamCoreProMatchmakingServersAsyncActionServerRules::execServerRulesAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreProMatchmakingServersAsyncActionServerRules);
UClass* Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionServerRules_NoRegister()
{
	return USteamCoreProMatchmakingServersAsyncActionServerRules::StaticClass();
}
struct Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionServerRules_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09USteamCoreProMatchmakingServersAsyncActionServerRules\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "IncludePath", "SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              USteamCoreProMatchmakingServersAsyncActionServerRules\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCallback_MetaData[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersAsyncActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCallback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_CancelServerRulesQueries, "CancelServerRulesQueries" }, // 4018869235
		{ &Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_HandleCallback, "HandleCallback" }, // 1341089854
		{ &Z_Construct_UFunction_USteamCoreProMatchmakingServersAsyncActionServerRules_ServerRulesAsync, "ServerRulesAsync" }, // 3385980227
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreProMatchmakingServersAsyncActionServerRules>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionServerRules_Statics::NewProp_OnCallback = { "OnCallback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreProMatchmakingServersAsyncActionServerRules, OnCallback), Z_Construct_UDelegateFunction_SteamCorePro_OnServerRuleAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCallback_MetaData), NewProp_OnCallback_MetaData) }; // 3136092173
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionServerRules_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionServerRules_Statics::NewProp_OnCallback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionServerRules_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionServerRules_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreProAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionServerRules_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionServerRules_Statics::ClassParams = {
	&USteamCoreProMatchmakingServersAsyncActionServerRules::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionServerRules_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionServerRules_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionServerRules_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionServerRules_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionServerRules()
{
	if (!Z_Registration_Info_UClass_USteamCoreProMatchmakingServersAsyncActionServerRules.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreProMatchmakingServersAsyncActionServerRules.OuterSingleton, Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionServerRules_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreProMatchmakingServersAsyncActionServerRules.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamCoreProMatchmakingServersAsyncActionServerRules>()
{
	return USteamCoreProMatchmakingServersAsyncActionServerRules::StaticClass();
}
USteamCoreProMatchmakingServersAsyncActionServerRules::USteamCoreProMatchmakingServersAsyncActionServerRules(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreProMatchmakingServersAsyncActionServerRules);
USteamCoreProMatchmakingServersAsyncActionServerRules::~USteamCoreProMatchmakingServersAsyncActionServerRules() {}
// End Class USteamCoreProMatchmakingServersAsyncActionServerRules

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionPingServer, USteamCoreProMatchmakingServersAsyncActionPingServer::StaticClass, TEXT("USteamCoreProMatchmakingServersAsyncActionPingServer"), &Z_Registration_Info_UClass_USteamCoreProMatchmakingServersAsyncActionPingServer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreProMatchmakingServersAsyncActionPingServer), 4146777826U) },
		{ Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionRequestServerList, USteamCoreProMatchmakingServersAsyncActionRequestServerList::StaticClass, TEXT("USteamCoreProMatchmakingServersAsyncActionRequestServerList"), &Z_Registration_Info_UClass_USteamCoreProMatchmakingServersAsyncActionRequestServerList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreProMatchmakingServersAsyncActionRequestServerList), 1405494705U) },
		{ Z_Construct_UClass_USteamCoreProMatchmakingServersAsyncActionServerRules, USteamCoreProMatchmakingServersAsyncActionServerRules::StaticClass, TEXT("USteamCoreProMatchmakingServersAsyncActionServerRules"), &Z_Registration_Info_UClass_USteamCoreProMatchmakingServersAsyncActionServerRules, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreProMatchmakingServersAsyncActionServerRules), 4053684248U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_3844644670(TEXT("/Script/SteamCorePro"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmakingServers_SteamMatchmakingServersAsyncActions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
