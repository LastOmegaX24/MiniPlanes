// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamApps/SteamAppsTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamAppsTypes() {}

// Begin Cross Module References
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamBetaBranchFlags();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamResult();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnDLCInstalled__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResult__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResultDelegate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnNewUrlLaunchParametersDelegate__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnTimedTrialStatusDelegate__DelegateSignature();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FDLCInstalled();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FFileDetailsResult();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FTimedTrialStatus();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin ScriptStruct FTimedTrialStatus
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TimedTrialStatus;
class UScriptStruct* FTimedTrialStatus::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TimedTrialStatus.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TimedTrialStatus.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimedTrialStatus, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("TimedTrialStatus"));
	}
	return Z_Registration_Info_UScriptStruct_TimedTrialStatus.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FTimedTrialStatus>()
{
	return FTimedTrialStatus::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTimedTrialStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "Category", "Apps" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsOffline_MetaData[] = {
		{ "Category", "Apps" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondsAllowed_MetaData[] = {
		{ "Category", "Apps" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondsPlayed_MetaData[] = {
		{ "Category", "Apps" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static void NewProp_bIsOffline_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOffline;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SecondsAllowed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SecondsPlayed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimedTrialStatus>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTimedTrialStatus_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimedTrialStatus, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
void Z_Construct_UScriptStruct_FTimedTrialStatus_Statics::NewProp_bIsOffline_SetBit(void* Obj)
{
	((FTimedTrialStatus*)Obj)->bIsOffline = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTimedTrialStatus_Statics::NewProp_bIsOffline = { "bIsOffline", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FTimedTrialStatus), &Z_Construct_UScriptStruct_FTimedTrialStatus_Statics::NewProp_bIsOffline_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsOffline_MetaData), NewProp_bIsOffline_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTimedTrialStatus_Statics::NewProp_SecondsAllowed = { "SecondsAllowed", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimedTrialStatus, SecondsAllowed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondsAllowed_MetaData), NewProp_SecondsAllowed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTimedTrialStatus_Statics::NewProp_SecondsPlayed = { "SecondsPlayed", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimedTrialStatus, SecondsPlayed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondsPlayed_MetaData), NewProp_SecondsPlayed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimedTrialStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedTrialStatus_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedTrialStatus_Statics::NewProp_bIsOffline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedTrialStatus_Statics::NewProp_SecondsAllowed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedTrialStatus_Statics::NewProp_SecondsPlayed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedTrialStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimedTrialStatus_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"TimedTrialStatus",
	Z_Construct_UScriptStruct_FTimedTrialStatus_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedTrialStatus_Statics::PropPointers),
	sizeof(FTimedTrialStatus),
	alignof(FTimedTrialStatus),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedTrialStatus_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTimedTrialStatus_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTimedTrialStatus()
{
	if (!Z_Registration_Info_UScriptStruct_TimedTrialStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TimedTrialStatus.InnerSingleton, Z_Construct_UScriptStruct_FTimedTrialStatus_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TimedTrialStatus.InnerSingleton;
}
// End ScriptStruct FTimedTrialStatus

// Begin ScriptStruct FFileDetailsResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FileDetailsResult;
class UScriptStruct* FFileDetailsResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FileDetailsResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FileDetailsResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFileDetailsResult, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("FileDetailsResult"));
	}
	return Z_Registration_Info_UScriptStruct_FileDetailsResult.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FFileDetailsResult>()
{
	return FFileDetailsResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFileDetailsResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "Apps" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileSize_MetaData[] = {
		{ "Category", "Apps" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SHA_MetaData[] = {
		{ "Category", "Apps" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[] = {
		{ "Category", "Apps" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FileSize;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SHA;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Flags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Flags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFileDetailsResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFileDetailsResult, Result), Z_Construct_UEnum_SteamCorePro_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2516430442
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_FileSize = { "FileSize", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFileDetailsResult, FileSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileSize_MetaData), NewProp_FileSize_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_SHA = { "SHA", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFileDetailsResult, SHA), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SHA_MetaData), NewProp_SHA_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_Flags_Inner = { "Flags", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFileDetailsResult, Flags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flags_MetaData), NewProp_Flags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFileDetailsResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_FileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_SHA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_Flags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewProp_Flags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileDetailsResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFileDetailsResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"FileDetailsResult",
	Z_Construct_UScriptStruct_FFileDetailsResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileDetailsResult_Statics::PropPointers),
	sizeof(FFileDetailsResult),
	alignof(FFileDetailsResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFileDetailsResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFileDetailsResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFileDetailsResult()
{
	if (!Z_Registration_Info_UScriptStruct_FileDetailsResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FileDetailsResult.InnerSingleton, Z_Construct_UScriptStruct_FFileDetailsResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FileDetailsResult.InnerSingleton;
}
// End ScriptStruct FFileDetailsResult

// Begin ScriptStruct FDLCInstalled
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DLCInstalled;
class UScriptStruct* FDLCInstalled::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DLCInstalled.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DLCInstalled.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDLCInstalled, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("DLCInstalled"));
	}
	return Z_Registration_Info_UScriptStruct_DLCInstalled.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FDLCInstalled>()
{
	return FDLCInstalled::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDLCInstalled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[] = {
		{ "Category", "Apps" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDLCInstalled>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDLCInstalled_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDLCInstalled, AppID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppID_MetaData), NewProp_AppID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDLCInstalled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDLCInstalled_Statics::NewProp_AppID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDLCInstalled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDLCInstalled_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"DLCInstalled",
	Z_Construct_UScriptStruct_FDLCInstalled_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDLCInstalled_Statics::PropPointers),
	sizeof(FDLCInstalled),
	alignof(FDLCInstalled),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDLCInstalled_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDLCInstalled_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDLCInstalled()
{
	if (!Z_Registration_Info_UScriptStruct_DLCInstalled.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DLCInstalled.InnerSingleton, Z_Construct_UScriptStruct_FDLCInstalled_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DLCInstalled.InnerSingleton;
}
// End ScriptStruct FDLCInstalled

// Begin Enum ESteamBetaBranchFlags
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamBetaBranchFlags;
static UEnum* ESteamBetaBranchFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamBetaBranchFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamBetaBranchFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamBetaBranchFlags, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamBetaBranchFlags"));
	}
	return Z_Registration_Info_UEnum_ESteamBetaBranchFlags.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamBetaBranchFlags>()
{
	return ESteamBetaBranchFlags_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamBetaBranchFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "k_EBetaBranch_Available.Comment", "// this is the default branch (\"public\")\n" },
		{ "k_EBetaBranch_Available.Name", "ESteamBetaBranchFlags::k_EBetaBranch_Available" },
		{ "k_EBetaBranch_Available.ToolTip", "this is the default branch (\"public\")" },
		{ "k_EBetaBranch_Default.Name", "ESteamBetaBranchFlags::k_EBetaBranch_Default" },
		{ "k_EBetaBranch_Installed.Comment", "// this is the currently selected branch (active)\n" },
		{ "k_EBetaBranch_Installed.Name", "ESteamBetaBranchFlags::k_EBetaBranch_Installed" },
		{ "k_EBetaBranch_Installed.ToolTip", "this is the currently selected branch (active)" },
		{ "k_EBetaBranch_None.Name", "ESteamBetaBranchFlags::k_EBetaBranch_None" },
		{ "k_EBetaBranch_Private.Comment", "// this branch can be selected (available)\n" },
		{ "k_EBetaBranch_Private.Name", "ESteamBetaBranchFlags::k_EBetaBranch_Private" },
		{ "k_EBetaBranch_Private.ToolTip", "this branch can be selected (available)" },
		{ "k_EBetaBranch_Selected.Comment", "// this is a private branch (password protected)\n" },
		{ "k_EBetaBranch_Selected.Name", "ESteamBetaBranchFlags::k_EBetaBranch_Selected" },
		{ "k_EBetaBranch_Selected.ToolTip", "this is a private branch (password protected)" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamBetaBranchFlags::k_EBetaBranch_None", (int64)ESteamBetaBranchFlags::k_EBetaBranch_None },
		{ "ESteamBetaBranchFlags::k_EBetaBranch_Default", (int64)ESteamBetaBranchFlags::k_EBetaBranch_Default },
		{ "ESteamBetaBranchFlags::k_EBetaBranch_Available", (int64)ESteamBetaBranchFlags::k_EBetaBranch_Available },
		{ "ESteamBetaBranchFlags::k_EBetaBranch_Private", (int64)ESteamBetaBranchFlags::k_EBetaBranch_Private },
		{ "ESteamBetaBranchFlags::k_EBetaBranch_Selected", (int64)ESteamBetaBranchFlags::k_EBetaBranch_Selected },
		{ "ESteamBetaBranchFlags::k_EBetaBranch_Installed", (int64)ESteamBetaBranchFlags::k_EBetaBranch_Installed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamBetaBranchFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamBetaBranchFlags",
	"ESteamBetaBranchFlags",
	Z_Construct_UEnum_SteamCorePro_ESteamBetaBranchFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamBetaBranchFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamBetaBranchFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamBetaBranchFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamBetaBranchFlags()
{
	if (!Z_Registration_Info_UEnum_ESteamBetaBranchFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamBetaBranchFlags.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamBetaBranchFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamBetaBranchFlags.InnerSingleton;
}
// End Enum ESteamBetaBranchFlags

// Begin Delegate FOnFileDetailsResult
struct Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResult__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnFileDetailsResult_Parms
	{
		FFileDetailsResult Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsTypes.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResult__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnFileDetailsResult_Parms, Data), Z_Construct_UScriptStruct_FFileDetailsResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1050696504
void Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResult__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnFileDetailsResult_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResult__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnFileDetailsResult_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResult__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResult__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResult__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnFileDetailsResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResult__DelegateSignature_Statics::_Script_SteamCorePro_eventOnFileDetailsResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResult__DelegateSignature_Statics::_Script_SteamCorePro_eventOnFileDetailsResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFileDetailsResult_DelegateWrapper(const FScriptDelegate& OnFileDetailsResult, FFileDetailsResult const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnFileDetailsResult_Parms
	{
		FFileDetailsResult Data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnFileDetailsResult_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnFileDetailsResult.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnFileDetailsResult

// Begin Delegate FOnDLCInstalled
struct Z_Construct_UDelegateFunction_SteamCorePro_OnDLCInstalled__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnDLCInstalled_Parms
	{
		FDLCInstalled Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnDLCInstalled__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnDLCInstalled_Parms, Data), Z_Construct_UScriptStruct_FDLCInstalled, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3428423473
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnDLCInstalled__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnDLCInstalled__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnDLCInstalled__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnDLCInstalled__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnDLCInstalled__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnDLCInstalled__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnDLCInstalled__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnDLCInstalled__DelegateSignature_Statics::_Script_SteamCorePro_eventOnDLCInstalled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnDLCInstalled__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnDLCInstalled__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnDLCInstalled__DelegateSignature_Statics::_Script_SteamCorePro_eventOnDLCInstalled_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnDLCInstalled__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnDLCInstalled__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDLCInstalled_DelegateWrapper(const FMulticastScriptDelegate& OnDLCInstalled, FDLCInstalled const& Data)
{
	struct _Script_SteamCorePro_eventOnDLCInstalled_Parms
	{
		FDLCInstalled Data;
	};
	_Script_SteamCorePro_eventOnDLCInstalled_Parms Parms;
	Parms.Data=Data;
	OnDLCInstalled.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDLCInstalled

// Begin Delegate FOnFileDetailsResultDelegate
struct Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResultDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnFileDetailsResultDelegate_Parms
	{
		FFileDetailsResult Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResultDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnFileDetailsResultDelegate_Parms, Data), Z_Construct_UScriptStruct_FFileDetailsResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1050696504
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResultDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResultDelegate__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResultDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnFileDetailsResultDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResultDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResultDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnFileDetailsResultDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResultDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResultDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResultDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnFileDetailsResultDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResultDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnFileDetailsResultDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFileDetailsResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFileDetailsResultDelegate, FFileDetailsResult const& Data)
{
	struct _Script_SteamCorePro_eventOnFileDetailsResultDelegate_Parms
	{
		FFileDetailsResult Data;
	};
	_Script_SteamCorePro_eventOnFileDetailsResultDelegate_Parms Parms;
	Parms.Data=Data;
	OnFileDetailsResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnFileDetailsResultDelegate

// Begin Delegate FOnNewUrlLaunchParametersDelegate
struct Z_Construct_UDelegateFunction_SteamCorePro_OnNewUrlLaunchParametersDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnNewUrlLaunchParametersDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnNewUrlLaunchParametersDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnNewUrlLaunchParametersDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnNewUrlLaunchParametersDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnNewUrlLaunchParametersDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnNewUrlLaunchParametersDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnNewUrlLaunchParametersDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnNewUrlLaunchParametersDelegate)
{
	OnNewUrlLaunchParametersDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnNewUrlLaunchParametersDelegate

// Begin Delegate FOnTimedTrialStatusDelegate
struct Z_Construct_UDelegateFunction_SteamCorePro_OnTimedTrialStatusDelegate__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnTimedTrialStatusDelegate_Parms
	{
		FTimedTrialStatus Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamApps/SteamAppsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnTimedTrialStatusDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnTimedTrialStatusDelegate_Parms, Data), Z_Construct_UScriptStruct_FTimedTrialStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1916626970
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnTimedTrialStatusDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnTimedTrialStatusDelegate__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnTimedTrialStatusDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnTimedTrialStatusDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnTimedTrialStatusDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnTimedTrialStatusDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnTimedTrialStatusDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnTimedTrialStatusDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnTimedTrialStatusDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnTimedTrialStatusDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnTimedTrialStatusDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnTimedTrialStatusDelegate__DelegateSignature_Statics::_Script_SteamCorePro_eventOnTimedTrialStatusDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnTimedTrialStatusDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnTimedTrialStatusDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTimedTrialStatusDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnTimedTrialStatusDelegate, FTimedTrialStatus const& Data)
{
	struct _Script_SteamCorePro_eventOnTimedTrialStatusDelegate_Parms
	{
		FTimedTrialStatus Data;
	};
	_Script_SteamCorePro_eventOnTimedTrialStatusDelegate_Parms Parms;
	Parms.Data=Data;
	OnTimedTrialStatusDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnTimedTrialStatusDelegate

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamApps_SteamAppsTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESteamBetaBranchFlags_StaticEnum, TEXT("ESteamBetaBranchFlags"), &Z_Registration_Info_UEnum_ESteamBetaBranchFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1117072687U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTimedTrialStatus::StaticStruct, Z_Construct_UScriptStruct_FTimedTrialStatus_Statics::NewStructOps, TEXT("TimedTrialStatus"), &Z_Registration_Info_UScriptStruct_TimedTrialStatus, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTimedTrialStatus), 1916626970U) },
		{ FFileDetailsResult::StaticStruct, Z_Construct_UScriptStruct_FFileDetailsResult_Statics::NewStructOps, TEXT("FileDetailsResult"), &Z_Registration_Info_UScriptStruct_FileDetailsResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFileDetailsResult), 1050696504U) },
		{ FDLCInstalled::StaticStruct, Z_Construct_UScriptStruct_FDLCInstalled_Statics::NewStructOps, TEXT("DLCInstalled"), &Z_Registration_Info_UScriptStruct_DLCInstalled, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDLCInstalled), 3428423473U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamApps_SteamAppsTypes_h_3953694214(TEXT("/Script/SteamCorePro"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamApps_SteamAppsTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamApps_SteamAppsTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamApps_SteamAppsTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamApps_SteamAppsTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
