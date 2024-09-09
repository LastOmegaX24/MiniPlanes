// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamMatchmakingServersTypes() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
STEAMCOREPRO_API UClass* Z_Construct_UClass_UServerFilter();
STEAMCOREPRO_API UClass* Z_Construct_UClass_UServerFilter_NoRegister();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnServerPing__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnServerRefreshCompleted__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnServerRules__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnServerUpdated__DelegateSignature();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FGameServerItem();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FGameServerRule();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamServerAddr();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Class UServerFilter Function AddFilterAnd
struct Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics
{
	struct ServerFilter_eventAddFilterAnd_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* \n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ServerFilter_eventAddFilterAnd_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterAnd", nullptr, nullptr, Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::ServerFilter_eventAddFilterAnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::ServerFilter_eventAddFilterAnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterAnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterAnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterAnd)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterAnd(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UServerFilter Function AddFilterAnd

// Begin Class UServerFilter Function AddFilterDedicated
struct Z_Construct_UFunction_UServerFilter_AddFilterDedicated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* Servers running dedicated\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* Servers running dedicated" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterDedicated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterDedicated", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterDedicated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterDedicated_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterDedicated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterDedicated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterDedicated)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterDedicated();
	P_NATIVE_END;
}
// End Class UServerFilter Function AddFilterDedicated

// Begin Class UServerFilter Function AddFilterGameAddr
struct Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics
{
	struct ServerFilter_eventAddFilterGameAddr_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* \x09Return only servers on the specified IP address (port supported and optional)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "*       Return only servers on the specified IP address (port supported and optional)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ServerFilter_eventAddFilterGameAddr_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterGameAddr", nullptr, nullptr, Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::PropPointers), sizeof(Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::ServerFilter_eventAddFilterGameAddr_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::ServerFilter_eventAddFilterGameAddr_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterGameAddr()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterGameAddr_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterGameAddr)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterGameAddr(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UServerFilter Function AddFilterGameAddr

// Begin Class UServerFilter Function AddFilterGameDataAnd
struct Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics
{
	struct ServerFilter_eventAddFilterGameDataAnd_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* \n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ServerFilter_eventAddFilterGameDataAnd_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterGameDataAnd", nullptr, nullptr, Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::ServerFilter_eventAddFilterGameDataAnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::ServerFilter_eventAddFilterGameDataAnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterGameDataAnd)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterGameDataAnd(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UServerFilter Function AddFilterGameDataAnd

// Begin Class UServerFilter Function AddFilterGameDataNor
struct Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics
{
	struct ServerFilter_eventAddFilterGameDataNor_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* \n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ServerFilter_eventAddFilterGameDataNor_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterGameDataNor", nullptr, nullptr, Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::ServerFilter_eventAddFilterGameDataNor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::ServerFilter_eventAddFilterGameDataNor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterGameDataNor)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterGameDataNor(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UServerFilter Function AddFilterGameDataNor

// Begin Class UServerFilter Function AddFilterGameDataOr
struct Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics
{
	struct ServerFilter_eventAddFilterGameDataOr_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* Servers with any of the given tag(s) in their 'hidden' tags (L4D2)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* Servers with any of the given tag(s) in their 'hidden' tags (L4D2)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ServerFilter_eventAddFilterGameDataOr_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterGameDataOr", nullptr, nullptr, Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::PropPointers), sizeof(Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::ServerFilter_eventAddFilterGameDataOr_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::ServerFilter_eventAddFilterGameDataOr_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterGameDataOr)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterGameDataOr(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UServerFilter Function AddFilterGameDataOr

// Begin Class UServerFilter Function AddFilterGameTagsAnd
struct Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics
{
	struct ServerFilter_eventAddFilterGameTagsAnd_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* \n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ServerFilter_eventAddFilterGameTagsAnd_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterGameTagsAnd", nullptr, nullptr, Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::ServerFilter_eventAddFilterGameTagsAnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::ServerFilter_eventAddFilterGameTagsAnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterGameTagsAnd)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterGameTagsAnd(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UServerFilter Function AddFilterGameTagsAnd

// Begin Class UServerFilter Function AddFilterGameTagsNor
struct Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics
{
	struct ServerFilter_eventAddFilterGameTagsNor_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* \n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ServerFilter_eventAddFilterGameTagsNor_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterGameTagsNor", nullptr, nullptr, Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::ServerFilter_eventAddFilterGameTagsNor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::ServerFilter_eventAddFilterGameTagsNor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterGameTagsNor)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterGameTagsNor(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UServerFilter Function AddFilterGameTagsNor

// Begin Class UServerFilter Function AddFilterHasPlayers
struct Z_Construct_UFunction_UServerFilter_AddFilterHasPlayers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* Servers that are not empty\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* Servers that are not empty" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterHasPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterHasPlayers", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterHasPlayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterHasPlayers_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterHasPlayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterHasPlayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterHasPlayers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterHasPlayers();
	P_NATIVE_END;
}
// End Class UServerFilter Function AddFilterHasPlayers

// Begin Class UServerFilter Function AddFilterLinux
struct Z_Construct_UFunction_UServerFilter_AddFilterLinux_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* Servers running on a Linux platform\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* Servers running on a Linux platform" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterLinux_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterLinux", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterLinux_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterLinux_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterLinux()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterLinux_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterLinux)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterLinux();
	P_NATIVE_END;
}
// End Class UServerFilter Function AddFilterLinux

// Begin Class UServerFilter Function AddFilterMap
struct Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics
{
	struct ServerFilter_eventAddFilterMap_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* Servers running the specified map (ex. cs_italy)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* Servers running the specified map (ex. cs_italy)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ServerFilter_eventAddFilterMap_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterMap", nullptr, nullptr, Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::ServerFilter_eventAddFilterMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::ServerFilter_eventAddFilterMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterMap)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterMap(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UServerFilter Function AddFilterMap

// Begin Class UServerFilter Function AddFilterName
struct Z_Construct_UFunction_UServerFilter_AddFilterName_Statics
{
	struct ServerFilter_eventAddFilterName_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09 * Servers with their hostname matching [hostname] (can use * as a wildcard)\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* Servers with their hostname matching [hostname] (can use * as a wildcard)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ServerFilter_eventAddFilterName_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterName_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterName", nullptr, nullptr, Z_Construct_UFunction_UServerFilter_AddFilterName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UServerFilter_AddFilterName_Statics::ServerFilter_eventAddFilterName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UServerFilter_AddFilterName_Statics::ServerFilter_eventAddFilterName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterName(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UServerFilter Function AddFilterName

// Begin Class UServerFilter Function AddFilterNand
struct Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics
{
	struct ServerFilter_eventAddFilterNand_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* A special filter, specifies that servers matching all of the following [x] conditions should not be returned\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* A special filter, specifies that servers matching all of the following [x] conditions should not be returned" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ServerFilter_eventAddFilterNand_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterNand", nullptr, nullptr, Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::PropPointers), sizeof(Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::ServerFilter_eventAddFilterNand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::ServerFilter_eventAddFilterNand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterNand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterNand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterNand)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterNand(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UServerFilter Function AddFilterNand

// Begin Class UServerFilter Function AddFilterNoPlayers
struct Z_Construct_UFunction_UServerFilter_AddFilterNoPlayers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* Servers that are empty\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* Servers that are empty" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterNoPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterNoPlayers", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterNoPlayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterNoPlayers_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterNoPlayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterNoPlayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterNoPlayers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterNoPlayers();
	P_NATIVE_END;
}
// End Class UServerFilter Function AddFilterNoPlayers

// Begin Class UServerFilter Function AddFilterNor
struct Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics
{
	struct ServerFilter_eventAddFilterNor_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* A special filter, specifies that servers matching any of the following [x] conditions should not be returned\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* A special filter, specifies that servers matching any of the following [x] conditions should not be returned" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ServerFilter_eventAddFilterNor_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterNor", nullptr, nullptr, Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::ServerFilter_eventAddFilterNor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::ServerFilter_eventAddFilterNor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterNor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterNor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterNor)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterNor(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UServerFilter Function AddFilterNor

// Begin Class UServerFilter Function AddFilterNotAppId
struct Z_Construct_UFunction_UServerFilter_AddFilterNotAppId_Statics
{
	struct ServerFilter_eventAddFilterNotAppId_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* Servers that are NOT running game [appid] (This was introduced to block Left 4 Dead games from the Steam Server Browser)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* Servers that are NOT running game [appid] (This was introduced to block Left 4 Dead games from the Steam Server Browser)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterNotAppId_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ServerFilter_eventAddFilterNotAppId_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterNotAppId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterNotAppId_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterNotAppId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterNotAppId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterNotAppId", nullptr, nullptr, Z_Construct_UFunction_UServerFilter_AddFilterNotAppId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterNotAppId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UServerFilter_AddFilterNotAppId_Statics::ServerFilter_eventAddFilterNotAppId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterNotAppId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterNotAppId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UServerFilter_AddFilterNotAppId_Statics::ServerFilter_eventAddFilterNotAppId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterNotAppId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterNotAppId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterNotAppId)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterNotAppId(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UServerFilter Function AddFilterNotAppId

// Begin Class UServerFilter Function AddFilterNotFull
struct Z_Construct_UFunction_UServerFilter_AddFilterNotFull_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* Servers that are not full\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* Servers that are not full" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterNotFull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterNotFull", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterNotFull_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterNotFull_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterNotFull()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterNotFull_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterNotFull)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterNotFull();
	P_NATIVE_END;
}
// End Class UServerFilter Function AddFilterNotFull

// Begin Class UServerFilter Function AddFilterOr
struct Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics
{
	struct ServerFilter_eventAddFilterOr_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* \n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ServerFilter_eventAddFilterOr_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterOr", nullptr, nullptr, Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::PropPointers), sizeof(Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::ServerFilter_eventAddFilterOr_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::ServerFilter_eventAddFilterOr_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterOr()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterOr_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterOr)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterOr(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UServerFilter Function AddFilterOr

// Begin Class UServerFilter Function AddFilterPassword
struct Z_Construct_UFunction_UServerFilter_AddFilterPassword_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* Servers that are not password protected\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* Servers that are not password protected" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterPassword_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterPassword", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterPassword_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterPassword_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterPassword()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterPassword_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterPassword)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterPassword();
	P_NATIVE_END;
}
// End Class UServerFilter Function AddFilterPassword

// Begin Class UServerFilter Function AddFilterProxy
struct Z_Construct_UFunction_UServerFilter_AddFilterProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* Servers that are spectator proxies\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* Servers that are spectator proxies" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterProxy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterProxy", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterProxy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterProxy_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterProxy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterProxy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterProxy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterProxy();
	P_NATIVE_END;
}
// End Class UServerFilter Function AddFilterProxy

// Begin Class UServerFilter Function AddFilterSecure
struct Z_Construct_UFunction_UServerFilter_AddFilterSecure_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* Servers using anti-cheat technology (VAC, but potentially others as well)\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* Servers using anti-cheat technology (VAC, but potentially others as well)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterSecure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterSecure", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterSecure_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterSecure_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterSecure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterSecure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterSecure)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterSecure();
	P_NATIVE_END;
}
// End Class UServerFilter Function AddFilterSecure

// Begin Class UServerFilter Function AddFilterVersion
struct Z_Construct_UFunction_UServerFilter_AddFilterVersion_Statics
{
	struct ServerFilter_eventAddFilterVersion_Parms
	{
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09 * Servers running version [version] (can use * as a wildcard)\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* Servers running version [version] (can use * as a wildcard)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_AddFilterVersion_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ServerFilter_eventAddFilterVersion_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_AddFilterVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_AddFilterVersion_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterVersion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterVersion", nullptr, nullptr, Z_Construct_UFunction_UServerFilter_AddFilterVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterVersion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UServerFilter_AddFilterVersion_Statics::ServerFilter_eventAddFilterVersion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterVersion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UServerFilter_AddFilterVersion_Statics::ServerFilter_eventAddFilterVersion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterVersion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterVersion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterVersion)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterVersion(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UServerFilter Function AddFilterVersion

// Begin Class UServerFilter Function AddFilterWhitelisted
struct Z_Construct_UFunction_UServerFilter_AddFilterWhitelisted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "Comment", "/*\n\x09* Servers that are whitelisted\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "* Servers that are whitelisted" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_AddFilterWhitelisted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "AddFilterWhitelisted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_AddFilterWhitelisted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_AddFilterWhitelisted_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UServerFilter_AddFilterWhitelisted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_AddFilterWhitelisted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execAddFilterWhitelisted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFilterWhitelisted();
	P_NATIVE_END;
}
// End Class UServerFilter Function AddFilterWhitelisted

// Begin Class UServerFilter Function GetFilters
struct Z_Construct_UFunction_UServerFilter_GetFilters_Statics
{
	struct ServerFilter_eventGetFilters_Parms
	{
		TMap<FString,FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Filters" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_GetFilters_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UServerFilter_GetFilters_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UServerFilter_GetFilters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ServerFilter_eventGetFilters_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UServerFilter_GetFilters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_GetFilters_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_GetFilters_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UServerFilter_GetFilters_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_GetFilters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerFilter_GetFilters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerFilter, nullptr, "GetFilters", nullptr, nullptr, Z_Construct_UFunction_UServerFilter_GetFilters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_GetFilters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UServerFilter_GetFilters_Statics::ServerFilter_eventGetFilters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UServerFilter_GetFilters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UServerFilter_GetFilters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UServerFilter_GetFilters_Statics::ServerFilter_eventGetFilters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UServerFilter_GetFilters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UServerFilter_GetFilters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UServerFilter::execGetFilters)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FString,FString>*)Z_Param__Result=P_THIS->GetFilters();
	P_NATIVE_END;
}
// End Class UServerFilter Function GetFilters

// Begin Class UServerFilter
void UServerFilter::StaticRegisterNativesUServerFilter()
{
	UClass* Class = UServerFilter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddFilterAnd", &UServerFilter::execAddFilterAnd },
		{ "AddFilterDedicated", &UServerFilter::execAddFilterDedicated },
		{ "AddFilterGameAddr", &UServerFilter::execAddFilterGameAddr },
		{ "AddFilterGameDataAnd", &UServerFilter::execAddFilterGameDataAnd },
		{ "AddFilterGameDataNor", &UServerFilter::execAddFilterGameDataNor },
		{ "AddFilterGameDataOr", &UServerFilter::execAddFilterGameDataOr },
		{ "AddFilterGameTagsAnd", &UServerFilter::execAddFilterGameTagsAnd },
		{ "AddFilterGameTagsNor", &UServerFilter::execAddFilterGameTagsNor },
		{ "AddFilterHasPlayers", &UServerFilter::execAddFilterHasPlayers },
		{ "AddFilterLinux", &UServerFilter::execAddFilterLinux },
		{ "AddFilterMap", &UServerFilter::execAddFilterMap },
		{ "AddFilterName", &UServerFilter::execAddFilterName },
		{ "AddFilterNand", &UServerFilter::execAddFilterNand },
		{ "AddFilterNoPlayers", &UServerFilter::execAddFilterNoPlayers },
		{ "AddFilterNor", &UServerFilter::execAddFilterNor },
		{ "AddFilterNotAppId", &UServerFilter::execAddFilterNotAppId },
		{ "AddFilterNotFull", &UServerFilter::execAddFilterNotFull },
		{ "AddFilterOr", &UServerFilter::execAddFilterOr },
		{ "AddFilterPassword", &UServerFilter::execAddFilterPassword },
		{ "AddFilterProxy", &UServerFilter::execAddFilterProxy },
		{ "AddFilterSecure", &UServerFilter::execAddFilterSecure },
		{ "AddFilterVersion", &UServerFilter::execAddFilterVersion },
		{ "AddFilterWhitelisted", &UServerFilter::execAddFilterWhitelisted },
		{ "GetFilters", &UServerFilter::execGetFilters },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UServerFilter);
UClass* Z_Construct_UClass_UServerFilter_NoRegister()
{
	return UServerFilter::StaticClass();
}
struct Z_Construct_UClass_UServerFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UServerFilter_AddFilterAnd, "AddFilterAnd" }, // 29599187
		{ &Z_Construct_UFunction_UServerFilter_AddFilterDedicated, "AddFilterDedicated" }, // 1024871441
		{ &Z_Construct_UFunction_UServerFilter_AddFilterGameAddr, "AddFilterGameAddr" }, // 1430291460
		{ &Z_Construct_UFunction_UServerFilter_AddFilterGameDataAnd, "AddFilterGameDataAnd" }, // 2128877907
		{ &Z_Construct_UFunction_UServerFilter_AddFilterGameDataNor, "AddFilterGameDataNor" }, // 4261333203
		{ &Z_Construct_UFunction_UServerFilter_AddFilterGameDataOr, "AddFilterGameDataOr" }, // 893058717
		{ &Z_Construct_UFunction_UServerFilter_AddFilterGameTagsAnd, "AddFilterGameTagsAnd" }, // 2968831355
		{ &Z_Construct_UFunction_UServerFilter_AddFilterGameTagsNor, "AddFilterGameTagsNor" }, // 2386224434
		{ &Z_Construct_UFunction_UServerFilter_AddFilterHasPlayers, "AddFilterHasPlayers" }, // 2728436426
		{ &Z_Construct_UFunction_UServerFilter_AddFilterLinux, "AddFilterLinux" }, // 3870571400
		{ &Z_Construct_UFunction_UServerFilter_AddFilterMap, "AddFilterMap" }, // 2402091926
		{ &Z_Construct_UFunction_UServerFilter_AddFilterName, "AddFilterName" }, // 2162708564
		{ &Z_Construct_UFunction_UServerFilter_AddFilterNand, "AddFilterNand" }, // 1544670344
		{ &Z_Construct_UFunction_UServerFilter_AddFilterNoPlayers, "AddFilterNoPlayers" }, // 3838787149
		{ &Z_Construct_UFunction_UServerFilter_AddFilterNor, "AddFilterNor" }, // 3281179874
		{ &Z_Construct_UFunction_UServerFilter_AddFilterNotAppId, "AddFilterNotAppId" }, // 605607105
		{ &Z_Construct_UFunction_UServerFilter_AddFilterNotFull, "AddFilterNotFull" }, // 2768710349
		{ &Z_Construct_UFunction_UServerFilter_AddFilterOr, "AddFilterOr" }, // 413261967
		{ &Z_Construct_UFunction_UServerFilter_AddFilterPassword, "AddFilterPassword" }, // 3243267328
		{ &Z_Construct_UFunction_UServerFilter_AddFilterProxy, "AddFilterProxy" }, // 4273533170
		{ &Z_Construct_UFunction_UServerFilter_AddFilterSecure, "AddFilterSecure" }, // 1931781499
		{ &Z_Construct_UFunction_UServerFilter_AddFilterVersion, "AddFilterVersion" }, // 1466164015
		{ &Z_Construct_UFunction_UServerFilter_AddFilterWhitelisted, "AddFilterWhitelisted" }, // 2153118368
		{ &Z_Construct_UFunction_UServerFilter_GetFilters, "GetFilters" }, // 1938487817
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UServerFilter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UServerFilter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UServerFilter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UServerFilter_Statics::ClassParams = {
	&UServerFilter::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UServerFilter_Statics::Class_MetaDataParams), Z_Construct_UClass_UServerFilter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UServerFilter()
{
	if (!Z_Registration_Info_UClass_UServerFilter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UServerFilter.OuterSingleton, Z_Construct_UClass_UServerFilter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UServerFilter.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<UServerFilter>()
{
	return UServerFilter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UServerFilter);
// End Class UServerFilter

// Begin ScriptStruct FSteamServerAddr
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamServerAddr;
class UScriptStruct* FSteamServerAddr::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamServerAddr.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamServerAddr.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamServerAddr, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("SteamServerAddr"));
	}
	return Z_Registration_Info_UScriptStruct_SteamServerAddr.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FSteamServerAddr>()
{
	return FSteamServerAddr::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSteamServerAddr_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IP_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryPort_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionAddressString_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamP2PAddr_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_IP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QueryPort;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectionAddressString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamP2PAddr;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamServerAddr>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_IP = { "IP", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamServerAddr, IP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IP_MetaData), NewProp_IP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamServerAddr, Port), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Port_MetaData), NewProp_Port_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_QueryPort = { "QueryPort", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamServerAddr, QueryPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryPort_MetaData), NewProp_QueryPort_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_ConnectionAddressString = { "ConnectionAddressString", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamServerAddr, ConnectionAddressString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectionAddressString_MetaData), NewProp_ConnectionAddressString_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_SteamP2PAddr = { "SteamP2PAddr", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamServerAddr, SteamP2PAddr), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamP2PAddr_MetaData), NewProp_SteamP2PAddr_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamServerAddr_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_IP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_Port,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_QueryPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_ConnectionAddressString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewProp_SteamP2PAddr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamServerAddr_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"SteamServerAddr",
	Z_Construct_UScriptStruct_FSteamServerAddr_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::PropPointers),
	sizeof(FSteamServerAddr),
	alignof(FSteamServerAddr),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServerAddr_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamServerAddr_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamServerAddr()
{
	if (!Z_Registration_Info_UScriptStruct_SteamServerAddr.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamServerAddr.InnerSingleton, Z_Construct_UScriptStruct_FSteamServerAddr_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SteamServerAddr.InnerSingleton;
}
// End ScriptStruct FSteamServerAddr

// Begin ScriptStruct FGameServerItem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameServerItem;
class UScriptStruct* FGameServerItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameServerItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameServerItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameServerItem, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("GameServerItem"));
	}
	return Z_Registration_Info_UScriptStruct_GameServerItem.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FGameServerItem>()
{
	return FGameServerItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameServerItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerName_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameDescription_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameTags_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamServerAddr_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ping_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Players_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlayers_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BotPlayers_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerVersion_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPassword_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSecure_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServerName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MapName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameDescription;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamServerAddr;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Ping;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Players;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlayers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BotPlayers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ServerVersion;
	static void NewProp_bPassword_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPassword;
	static void NewProp_bSecure_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSecure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameServerItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_ServerName = { "ServerName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameServerItem, ServerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerName_MetaData), NewProp_ServerName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameServerItem, MapName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapName_MetaData), NewProp_MapName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_GameDescription = { "GameDescription", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameServerItem, GameDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameDescription_MetaData), NewProp_GameDescription_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_GameTags = { "GameTags", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameServerItem, GameTags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameTags_MetaData), NewProp_GameTags_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_SteamServerAddr = { "SteamServerAddr", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameServerItem, SteamServerAddr), Z_Construct_UScriptStruct_FSteamServerAddr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamServerAddr_MetaData), NewProp_SteamServerAddr_MetaData) }; // 1658444005
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_Ping = { "Ping", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameServerItem, Ping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ping_MetaData), NewProp_Ping_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameServerItem, Players), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Players_MetaData), NewProp_Players_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_MaxPlayers = { "MaxPlayers", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameServerItem, MaxPlayers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPlayers_MetaData), NewProp_MaxPlayers_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_BotPlayers = { "BotPlayers", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameServerItem, BotPlayers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BotPlayers_MetaData), NewProp_BotPlayers_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_ServerVersion = { "ServerVersion", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameServerItem, ServerVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerVersion_MetaData), NewProp_ServerVersion_MetaData) };
void Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bPassword_SetBit(void* Obj)
{
	((FGameServerItem*)Obj)->bPassword = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bPassword = { "bPassword", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameServerItem), &Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bPassword_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPassword_MetaData), NewProp_bPassword_MetaData) };
void Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bSecure_SetBit(void* Obj)
{
	((FGameServerItem*)Obj)->bSecure = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bSecure = { "bSecure", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGameServerItem), &Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bSecure_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSecure_MetaData), NewProp_bSecure_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameServerItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_ServerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_MapName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_GameDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_GameTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_SteamServerAddr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_Ping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_Players,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_MaxPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_BotPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_ServerVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bPassword,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerItem_Statics::NewProp_bSecure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameServerItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"GameServerItem",
	Z_Construct_UScriptStruct_FGameServerItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::PropPointers),
	sizeof(FGameServerItem),
	alignof(FGameServerItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameServerItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameServerItem()
{
	if (!Z_Registration_Info_UScriptStruct_GameServerItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameServerItem.InnerSingleton, Z_Construct_UScriptStruct_FGameServerItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameServerItem.InnerSingleton;
}
// End ScriptStruct FGameServerItem

// Begin ScriptStruct FGameServerRule
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameServerRule;
class UScriptStruct* FGameServerRule::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameServerRule.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameServerRule.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameServerRule, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("GameServerRule"));
	}
	return Z_Registration_Info_UScriptStruct_GameServerRule.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FGameServerRule>()
{
	return FGameServerRule::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGameServerRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "MatchmakingServers" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameServerRule>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameServerRule_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameServerRule, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameServerRule_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameServerRule, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameServerRule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerRule_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameServerRule_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerRule_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameServerRule_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"GameServerRule",
	Z_Construct_UScriptStruct_FGameServerRule_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerRule_Statics::PropPointers),
	sizeof(FGameServerRule),
	alignof(FGameServerRule),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameServerRule_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameServerRule_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGameServerRule()
{
	if (!Z_Registration_Info_UScriptStruct_GameServerRule.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameServerRule.InnerSingleton, Z_Construct_UScriptStruct_FGameServerRule_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GameServerRule.InnerSingleton;
}
// End ScriptStruct FGameServerRule

// Begin Delegate FOnServerUpdated
struct Z_Construct_UDelegateFunction_SteamCorePro_OnServerUpdated__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnServerUpdated_Parms
	{
		FGameServerItem data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnServerUpdated__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnServerUpdated_Parms, data), Z_Construct_UScriptStruct_FGameServerItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) }; // 366988279
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnServerUpdated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnServerUpdated__DelegateSignature_Statics::NewProp_data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnServerUpdated__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnServerUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnServerUpdated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnServerUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnServerUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnServerUpdated__DelegateSignature_Statics::_Script_SteamCorePro_eventOnServerUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnServerUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnServerUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnServerUpdated__DelegateSignature_Statics::_Script_SteamCorePro_eventOnServerUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnServerUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnServerUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnServerUpdated_DelegateWrapper(const FScriptDelegate& OnServerUpdated, FGameServerItem const& data)
{
	struct _Script_SteamCorePro_eventOnServerUpdated_Parms
	{
		FGameServerItem data;
	};
	_Script_SteamCorePro_eventOnServerUpdated_Parms Parms;
	Parms.data=data;
	OnServerUpdated.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnServerUpdated

// Begin Delegate FOnServerPing
struct Z_Construct_UDelegateFunction_SteamCorePro_OnServerPing__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnServerPing_Parms
	{
		FGameServerItem data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnServerPing__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnServerPing_Parms, data), Z_Construct_UScriptStruct_FGameServerItem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) }; // 366988279
void Z_Construct_UDelegateFunction_SteamCorePro_OnServerPing__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnServerPing_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnServerPing__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnServerPing_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnServerPing__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnServerPing__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnServerPing__DelegateSignature_Statics::NewProp_data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnServerPing__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnServerPing__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnServerPing__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnServerPing__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnServerPing__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnServerPing__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnServerPing__DelegateSignature_Statics::_Script_SteamCorePro_eventOnServerPing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnServerPing__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnServerPing__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnServerPing__DelegateSignature_Statics::_Script_SteamCorePro_eventOnServerPing_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnServerPing__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnServerPing__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnServerPing_DelegateWrapper(const FScriptDelegate& OnServerPing, FGameServerItem const& data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnServerPing_Parms
	{
		FGameServerItem data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnServerPing_Parms Parms;
	Parms.data=data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnServerPing.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnServerPing

// Begin Delegate FOnServerRules
struct Z_Construct_UDelegateFunction_SteamCorePro_OnServerRules__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnServerRules_Parms
	{
		TArray<FGameServerRule> data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_data;
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnServerRules__DelegateSignature_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameServerRule, METADATA_PARAMS(0, nullptr) }; // 2368865488
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnServerRules__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnServerRules_Parms, data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_data_MetaData), NewProp_data_MetaData) }; // 2368865488
void Z_Construct_UDelegateFunction_SteamCorePro_OnServerRules__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnServerRules_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnServerRules__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnServerRules_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnServerRules__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnServerRules__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnServerRules__DelegateSignature_Statics::NewProp_data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnServerRules__DelegateSignature_Statics::NewProp_data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnServerRules__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnServerRules__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnServerRules__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnServerRules__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnServerRules__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnServerRules__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnServerRules__DelegateSignature_Statics::_Script_SteamCorePro_eventOnServerRules_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnServerRules__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnServerRules__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnServerRules__DelegateSignature_Statics::_Script_SteamCorePro_eventOnServerRules_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnServerRules__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnServerRules__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnServerRules_DelegateWrapper(const FScriptDelegate& OnServerRules, TArray<FGameServerRule> const& data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnServerRules_Parms
	{
		TArray<FGameServerRule> data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnServerRules_Parms Parms;
	Parms.data=data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnServerRules.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnServerRules

// Begin Delegate FOnServerRefreshCompleted
struct Z_Construct_UDelegateFunction_SteamCorePro_OnServerRefreshCompleted__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamMatchmakingServers/SteamMatchmakingServersTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnServerRefreshCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnServerRefreshCompleted__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnServerRefreshCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnServerRefreshCompleted__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnServerRefreshCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnServerRefreshCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnServerRefreshCompleted_DelegateWrapper(const FScriptDelegate& OnServerRefreshCompleted)
{
	OnServerRefreshCompleted.ProcessDelegate<UObject>(NULL);
}
// End Delegate FOnServerRefreshCompleted

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSteamServerAddr::StaticStruct, Z_Construct_UScriptStruct_FSteamServerAddr_Statics::NewStructOps, TEXT("SteamServerAddr"), &Z_Registration_Info_UScriptStruct_SteamServerAddr, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamServerAddr), 1658444005U) },
		{ FGameServerItem::StaticStruct, Z_Construct_UScriptStruct_FGameServerItem_Statics::NewStructOps, TEXT("GameServerItem"), &Z_Registration_Info_UScriptStruct_GameServerItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameServerItem), 366988279U) },
		{ FGameServerRule::StaticStruct, Z_Construct_UScriptStruct_FGameServerRule_Statics::NewStructOps, TEXT("GameServerRule"), &Z_Registration_Info_UScriptStruct_GameServerRule, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameServerRule), 2368865488U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UServerFilter, UServerFilter::StaticClass, TEXT("UServerFilter"), &Z_Registration_Info_UClass_UServerFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UServerFilter), 4069224709U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_1291652716(TEXT("/Script/SteamCorePro"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamMatchmakingServers_SteamMatchmakingServersTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
