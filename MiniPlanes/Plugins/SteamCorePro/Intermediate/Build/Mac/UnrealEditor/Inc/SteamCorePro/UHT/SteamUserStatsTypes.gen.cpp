// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamUserStats/SteamUserStatsTypes.h"
#include "SteamCorePro/Public/SteamCorePro/SteamTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamUserStatsTypes() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardDataRequest();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardDisplayType();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardSortMethod();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardUploadScoreMethod();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamResult();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnAttachLeaderboardUGC__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadLeaderboardEntries__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadLeaderboardEntriesForUsers__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnFindLeaderboard__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnFindOrCreateLeaderboard__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnGetNumberOfCurrentPlayers__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnRequestGlobalAchievementPercentages__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnRequestGlobalStats__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnRequestUserStats__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnUploadLeaderboardScore__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnUserAchievementIconFetched__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnUserAchievementStored__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsReceived__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsStored__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsUnloaded__DelegateSignature();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FAttachLeaderboardUGCData();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FGlobalStatsReceived();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardFindResult();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardScoreUploaded();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FNumberOfCurrentPlayers();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FRequestCurrentStatsData();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FRequestUserStatsData();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamGameID();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboard();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboardEntries();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboardEntry();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamUGCHandle();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FUserAchievementIconFetched();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FUserAchievementStored();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FUserStatsReceived();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FUserStatsStored();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FUserStatsUnloaded();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Enum ESteamLeaderboardDataRequest
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamLeaderboardDataRequest;
static UEnum* ESteamLeaderboardDataRequest_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamLeaderboardDataRequest.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamLeaderboardDataRequest.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardDataRequest, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamLeaderboardDataRequest"));
	}
	return Z_Registration_Info_UEnum_ESteamLeaderboardDataRequest.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamLeaderboardDataRequest>()
{
	return ESteamLeaderboardDataRequest_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardDataRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "Friends.Name", "ESteamLeaderboardDataRequest::Friends" },
		{ "Global.Name", "ESteamLeaderboardDataRequest::Global" },
		{ "GlobalAroundUser.Name", "ESteamLeaderboardDataRequest::GlobalAroundUser" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
		{ "Users.Name", "ESteamLeaderboardDataRequest::Users" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamLeaderboardDataRequest::Global", (int64)ESteamLeaderboardDataRequest::Global },
		{ "ESteamLeaderboardDataRequest::GlobalAroundUser", (int64)ESteamLeaderboardDataRequest::GlobalAroundUser },
		{ "ESteamLeaderboardDataRequest::Friends", (int64)ESteamLeaderboardDataRequest::Friends },
		{ "ESteamLeaderboardDataRequest::Users", (int64)ESteamLeaderboardDataRequest::Users },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardDataRequest_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamLeaderboardDataRequest",
	"ESteamLeaderboardDataRequest",
	Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardDataRequest_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardDataRequest_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardDataRequest_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardDataRequest_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardDataRequest()
{
	if (!Z_Registration_Info_UEnum_ESteamLeaderboardDataRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamLeaderboardDataRequest.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardDataRequest_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamLeaderboardDataRequest.InnerSingleton;
}
// End Enum ESteamLeaderboardDataRequest

// Begin Enum ESteamLeaderboardSortMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamLeaderboardSortMethod;
static UEnum* ESteamLeaderboardSortMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamLeaderboardSortMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamLeaderboardSortMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardSortMethod, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamLeaderboardSortMethod"));
	}
	return Z_Registration_Info_UEnum_ESteamLeaderboardSortMethod.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamLeaderboardSortMethod>()
{
	return ESteamLeaderboardSortMethod_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardSortMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Ascending.Name", "ESteamLeaderboardSortMethod::Ascending" },
		{ "BlueprintType", "true" },
		{ "Descending.Name", "ESteamLeaderboardSortMethod::Descending" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
		{ "None.Name", "ESteamLeaderboardSortMethod::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamLeaderboardSortMethod::None", (int64)ESteamLeaderboardSortMethod::None },
		{ "ESteamLeaderboardSortMethod::Ascending", (int64)ESteamLeaderboardSortMethod::Ascending },
		{ "ESteamLeaderboardSortMethod::Descending", (int64)ESteamLeaderboardSortMethod::Descending },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardSortMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamLeaderboardSortMethod",
	"ESteamLeaderboardSortMethod",
	Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardSortMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardSortMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardSortMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardSortMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardSortMethod()
{
	if (!Z_Registration_Info_UEnum_ESteamLeaderboardSortMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamLeaderboardSortMethod.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardSortMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamLeaderboardSortMethod.InnerSingleton;
}
// End Enum ESteamLeaderboardSortMethod

// Begin Enum ESteamLeaderboardDisplayType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamLeaderboardDisplayType;
static UEnum* ESteamLeaderboardDisplayType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamLeaderboardDisplayType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamLeaderboardDisplayType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardDisplayType, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamLeaderboardDisplayType"));
	}
	return Z_Registration_Info_UEnum_ESteamLeaderboardDisplayType.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamLeaderboardDisplayType>()
{
	return ESteamLeaderboardDisplayType_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardDisplayType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
		{ "None.Name", "ESteamLeaderboardDisplayType::None" },
		{ "Numeric.Name", "ESteamLeaderboardDisplayType::Numeric" },
		{ "TimeMilliSeconds.Name", "ESteamLeaderboardDisplayType::TimeMilliSeconds" },
		{ "TimeSeconds.Name", "ESteamLeaderboardDisplayType::TimeSeconds" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamLeaderboardDisplayType::None", (int64)ESteamLeaderboardDisplayType::None },
		{ "ESteamLeaderboardDisplayType::Numeric", (int64)ESteamLeaderboardDisplayType::Numeric },
		{ "ESteamLeaderboardDisplayType::TimeSeconds", (int64)ESteamLeaderboardDisplayType::TimeSeconds },
		{ "ESteamLeaderboardDisplayType::TimeMilliSeconds", (int64)ESteamLeaderboardDisplayType::TimeMilliSeconds },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardDisplayType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamLeaderboardDisplayType",
	"ESteamLeaderboardDisplayType",
	Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardDisplayType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardDisplayType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardDisplayType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardDisplayType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardDisplayType()
{
	if (!Z_Registration_Info_UEnum_ESteamLeaderboardDisplayType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamLeaderboardDisplayType.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardDisplayType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamLeaderboardDisplayType.InnerSingleton;
}
// End Enum ESteamLeaderboardDisplayType

// Begin Enum ESteamLeaderboardUploadScoreMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamLeaderboardUploadScoreMethod;
static UEnum* ESteamLeaderboardUploadScoreMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamLeaderboardUploadScoreMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamLeaderboardUploadScoreMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardUploadScoreMethod, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamLeaderboardUploadScoreMethod"));
	}
	return Z_Registration_Info_UEnum_ESteamLeaderboardUploadScoreMethod.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamLeaderboardUploadScoreMethod>()
{
	return ESteamLeaderboardUploadScoreMethod_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardUploadScoreMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ForceUpdate.Name", "ESteamLeaderboardUploadScoreMethod::ForceUpdate" },
		{ "KeepBest.Name", "ESteamLeaderboardUploadScoreMethod::KeepBest" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
		{ "None.Name", "ESteamLeaderboardUploadScoreMethod::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamLeaderboardUploadScoreMethod::None", (int64)ESteamLeaderboardUploadScoreMethod::None },
		{ "ESteamLeaderboardUploadScoreMethod::KeepBest", (int64)ESteamLeaderboardUploadScoreMethod::KeepBest },
		{ "ESteamLeaderboardUploadScoreMethod::ForceUpdate", (int64)ESteamLeaderboardUploadScoreMethod::ForceUpdate },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardUploadScoreMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamLeaderboardUploadScoreMethod",
	"ESteamLeaderboardUploadScoreMethod",
	Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardUploadScoreMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardUploadScoreMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardUploadScoreMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardUploadScoreMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardUploadScoreMethod()
{
	if (!Z_Registration_Info_UEnum_ESteamLeaderboardUploadScoreMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamLeaderboardUploadScoreMethod.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardUploadScoreMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamLeaderboardUploadScoreMethod.InnerSingleton;
}
// End Enum ESteamLeaderboardUploadScoreMethod

// Begin ScriptStruct FSteamLeaderboardEntries
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamLeaderboardEntries;
class UScriptStruct* FSteamLeaderboardEntries::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamLeaderboardEntries.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamLeaderboardEntries.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamLeaderboardEntries, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("SteamLeaderboardEntries"));
	}
	return Z_Registration_Info_UScriptStruct_SteamLeaderboardEntries.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FSteamLeaderboardEntries>()
{
	return FSteamLeaderboardEntries::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSteamLeaderboardEntries_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamLeaderboardEntries>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamLeaderboardEntries_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"SteamLeaderboardEntries",
	nullptr,
	0,
	sizeof(FSteamLeaderboardEntries),
	alignof(FSteamLeaderboardEntries),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboardEntries_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamLeaderboardEntries_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboardEntries()
{
	if (!Z_Registration_Info_UScriptStruct_SteamLeaderboardEntries.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamLeaderboardEntries.InnerSingleton, Z_Construct_UScriptStruct_FSteamLeaderboardEntries_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SteamLeaderboardEntries.InnerSingleton;
}
// End ScriptStruct FSteamLeaderboardEntries

// Begin ScriptStruct FSteamLeaderboardEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamLeaderboardEntry;
class UScriptStruct* FSteamLeaderboardEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamLeaderboardEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamLeaderboardEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamLeaderboardEntry, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("SteamLeaderboardEntry"));
	}
	return Z_Registration_Info_UScriptStruct_SteamLeaderboardEntry.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FSteamLeaderboardEntry>()
{
	return FSteamLeaderboardEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalRank_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Details_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UGCHandle_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GlobalRank;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Details;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UGCHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamLeaderboardEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamLeaderboardEntry, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamID_MetaData), NewProp_SteamID_MetaData) }; // 4251036166
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_GlobalRank = { "GlobalRank", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamLeaderboardEntry, GlobalRank), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalRank_MetaData), NewProp_GlobalRank_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamLeaderboardEntry, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_Details = { "Details", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamLeaderboardEntry, Details), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Details_MetaData), NewProp_Details_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_UGCHandle = { "UGCHandle", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamLeaderboardEntry, UGCHandle), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UGCHandle_MetaData), NewProp_UGCHandle_MetaData) }; // 3978973746
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_SteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_GlobalRank,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_Details,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewProp_UGCHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"SteamLeaderboardEntry",
	Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::PropPointers),
	sizeof(FSteamLeaderboardEntry),
	alignof(FSteamLeaderboardEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboardEntry()
{
	if (!Z_Registration_Info_UScriptStruct_SteamLeaderboardEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamLeaderboardEntry.InnerSingleton, Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SteamLeaderboardEntry.InnerSingleton;
}
// End ScriptStruct FSteamLeaderboardEntry

// Begin ScriptStruct FSteamLeaderboard
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamLeaderboard;
class UScriptStruct* FSteamLeaderboard::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamLeaderboard.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamLeaderboard.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamLeaderboard, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("SteamLeaderboard"));
	}
	return Z_Registration_Info_UScriptStruct_SteamLeaderboard.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FSteamLeaderboard>()
{
	return FSteamLeaderboard::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSteamLeaderboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamLeaderboard>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamLeaderboard_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"SteamLeaderboard",
	nullptr,
	0,
	sizeof(FSteamLeaderboard),
	alignof(FSteamLeaderboard),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamLeaderboard_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamLeaderboard_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboard()
{
	if (!Z_Registration_Info_UScriptStruct_SteamLeaderboard.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamLeaderboard.InnerSingleton, Z_Construct_UScriptStruct_FSteamLeaderboard_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SteamLeaderboard.InnerSingleton;
}
// End ScriptStruct FSteamLeaderboard

// Begin ScriptStruct FUserAchievementIconFetched
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UserAchievementIconFetched;
class UScriptStruct* FUserAchievementIconFetched::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UserAchievementIconFetched.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UserAchievementIconFetched.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserAchievementIconFetched, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("UserAchievementIconFetched"));
	}
	return Z_Registration_Info_UScriptStruct_UserAchievementIconFetched.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FUserAchievementIconFetched>()
{
	return FUserAchievementIconFetched::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AchievementName_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAchieved_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AchievementName;
	static void NewProp_bAchieved_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserAchievementIconFetched>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserAchievementIconFetched, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameID_MetaData), NewProp_GameID_MetaData) }; // 1935638068
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_AchievementName = { "AchievementName", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserAchievementIconFetched, AchievementName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AchievementName_MetaData), NewProp_AchievementName_MetaData) };
void Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_bAchieved_SetBit(void* Obj)
{
	((FUserAchievementIconFetched*)Obj)->bAchieved = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUserAchievementIconFetched), &Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAchieved_MetaData), NewProp_bAchieved_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserAchievementIconFetched, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_GameID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_AchievementName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_bAchieved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewProp_Icon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"UserAchievementIconFetched",
	Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::PropPointers),
	sizeof(FUserAchievementIconFetched),
	alignof(FUserAchievementIconFetched),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUserAchievementIconFetched()
{
	if (!Z_Registration_Info_UScriptStruct_UserAchievementIconFetched.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UserAchievementIconFetched.InnerSingleton, Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UserAchievementIconFetched.InnerSingleton;
}
// End ScriptStruct FUserAchievementIconFetched

// Begin ScriptStruct FUserAchievementStored
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UserAchievementStored;
class UScriptStruct* FUserAchievementStored::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UserAchievementStored.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UserAchievementStored.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserAchievementStored, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("UserAchievementStored"));
	}
	return Z_Registration_Info_UScriptStruct_UserAchievementStored.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FUserAchievementStored>()
{
	return FUserAchievementStored::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUserAchievementStored_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGroupAchievement_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AchievementName_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentProgress_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxProgress_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameID;
	static void NewProp_bGroupAchievement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroupAchievement;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AchievementName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentProgress;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxProgress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserAchievementStored>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserAchievementStored, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameID_MetaData), NewProp_GameID_MetaData) }; // 1935638068
void Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_bGroupAchievement_SetBit(void* Obj)
{
	((FUserAchievementStored*)Obj)->bGroupAchievement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_bGroupAchievement = { "bGroupAchievement", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUserAchievementStored), &Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_bGroupAchievement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGroupAchievement_MetaData), NewProp_bGroupAchievement_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_AchievementName = { "AchievementName", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserAchievementStored, AchievementName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AchievementName_MetaData), NewProp_AchievementName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_CurrentProgress = { "CurrentProgress", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserAchievementStored, CurrentProgress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentProgress_MetaData), NewProp_CurrentProgress_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_MaxProgress = { "MaxProgress", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserAchievementStored, MaxProgress), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxProgress_MetaData), NewProp_MaxProgress_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserAchievementStored_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_GameID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_bGroupAchievement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_AchievementName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_CurrentProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewProp_MaxProgress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserAchievementStored_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"UserAchievementStored",
	Z_Construct_UScriptStruct_FUserAchievementStored_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::PropPointers),
	sizeof(FUserAchievementStored),
	alignof(FUserAchievementStored),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserAchievementStored_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUserAchievementStored_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUserAchievementStored()
{
	if (!Z_Registration_Info_UScriptStruct_UserAchievementStored.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UserAchievementStored.InnerSingleton, Z_Construct_UScriptStruct_FUserAchievementStored_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UserAchievementStored.InnerSingleton;
}
// End ScriptStruct FUserAchievementStored

// Begin ScriptStruct FUserStatsReceived
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UserStatsReceived;
class UScriptStruct* FUserStatsReceived::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UserStatsReceived.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UserStatsReceived.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserStatsReceived, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("UserStatsReceived"));
	}
	return Z_Registration_Info_UScriptStruct_UserStatsReceived.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FUserStatsReceived>()
{
	return FUserStatsReceived::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUserStatsReceived_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserStatsReceived>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserStatsReceived, GameID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameID_MetaData), NewProp_GameID_MetaData) }; // 4251036166
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserStatsReceived, Result), Z_Construct_UEnum_SteamCorePro_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2516430442
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserStatsReceived, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamID_MetaData), NewProp_SteamID_MetaData) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserStatsReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_GameID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewProp_SteamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserStatsReceived_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"UserStatsReceived",
	Z_Construct_UScriptStruct_FUserStatsReceived_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsReceived_Statics::PropPointers),
	sizeof(FUserStatsReceived),
	alignof(FUserStatsReceived),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsReceived_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUserStatsReceived_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUserStatsReceived()
{
	if (!Z_Registration_Info_UScriptStruct_UserStatsReceived.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UserStatsReceived.InnerSingleton, Z_Construct_UScriptStruct_FUserStatsReceived_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UserStatsReceived.InnerSingleton;
}
// End ScriptStruct FUserStatsReceived

// Begin ScriptStruct FUserStatsStored
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UserStatsStored;
class UScriptStruct* FUserStatsStored::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UserStatsStored.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UserStatsStored.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserStatsStored, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("UserStatsStored"));
	}
	return Z_Registration_Info_UScriptStruct_UserStatsStored.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FUserStatsStored>()
{
	return FUserStatsStored::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUserStatsStored_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserStatsStored>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserStatsStored_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserStatsStored, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameID_MetaData), NewProp_GameID_MetaData) }; // 1935638068
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUserStatsStored_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUserStatsStored_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserStatsStored, Result), Z_Construct_UEnum_SteamCorePro_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2516430442
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserStatsStored_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserStatsStored_Statics::NewProp_GameID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserStatsStored_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserStatsStored_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsStored_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserStatsStored_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"UserStatsStored",
	Z_Construct_UScriptStruct_FUserStatsStored_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsStored_Statics::PropPointers),
	sizeof(FUserStatsStored),
	alignof(FUserStatsStored),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsStored_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUserStatsStored_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUserStatsStored()
{
	if (!Z_Registration_Info_UScriptStruct_UserStatsStored.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UserStatsStored.InnerSingleton, Z_Construct_UScriptStruct_FUserStatsStored_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UserStatsStored.InnerSingleton;
}
// End ScriptStruct FUserStatsStored

// Begin ScriptStruct FUserStatsUnloaded
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UserStatsUnloaded;
class UScriptStruct* FUserStatsUnloaded::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UserStatsUnloaded.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UserStatsUnloaded.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUserStatsUnloaded, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("UserStatsUnloaded"));
	}
	return Z_Registration_Info_UScriptStruct_UserStatsUnloaded.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FUserStatsUnloaded>()
{
	return FUserStatsUnloaded::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDUser_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUserStatsUnloaded>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUserStatsUnloaded, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDUser_MetaData), NewProp_SteamIDUser_MetaData) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::NewProp_SteamIDUser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"UserStatsUnloaded",
	Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::PropPointers),
	sizeof(FUserStatsUnloaded),
	alignof(FUserStatsUnloaded),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUserStatsUnloaded()
{
	if (!Z_Registration_Info_UScriptStruct_UserStatsUnloaded.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UserStatsUnloaded.InnerSingleton, Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UserStatsUnloaded.InnerSingleton;
}
// End ScriptStruct FUserStatsUnloaded

// Begin ScriptStruct FLeaderboardScoresDownloaded
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardScoresDownloaded;
class UScriptStruct* FLeaderboardScoresDownloaded::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardScoresDownloaded.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardScoresDownloaded.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("LeaderboardScoresDownloaded"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardScoresDownloaded.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FLeaderboardScoresDownloaded>()
{
	return FLeaderboardScoresDownloaded::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamLeaderboard_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamLeaderboardEntries_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryCount_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboardEntries;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EntryCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardScoresDownloaded>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardScoresDownloaded, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamLeaderboard_MetaData), NewProp_SteamLeaderboard_MetaData) }; // 3003321657
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewProp_SteamLeaderboardEntries = { "SteamLeaderboardEntries", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardScoresDownloaded, SteamLeaderboardEntries), Z_Construct_UScriptStruct_FSteamLeaderboardEntries, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamLeaderboardEntries_MetaData), NewProp_SteamLeaderboardEntries_MetaData) }; // 2142211046
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewProp_EntryCount = { "EntryCount", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardScoresDownloaded, EntryCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryCount_MetaData), NewProp_EntryCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewProp_SteamLeaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewProp_SteamLeaderboardEntries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewProp_EntryCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"LeaderboardScoresDownloaded",
	Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::PropPointers),
	sizeof(FLeaderboardScoresDownloaded),
	alignof(FLeaderboardScoresDownloaded),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardScoresDownloaded.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardScoresDownloaded.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardScoresDownloaded.InnerSingleton;
}
// End ScriptStruct FLeaderboardScoresDownloaded

// Begin ScriptStruct FLeaderboardScoresDownloadedForUsers
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardScoresDownloadedForUsers;
class UScriptStruct* FLeaderboardScoresDownloadedForUsers::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardScoresDownloadedForUsers.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardScoresDownloadedForUsers.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("LeaderboardScoresDownloadedForUsers"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardScoresDownloadedForUsers.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FLeaderboardScoresDownloadedForUsers>()
{
	return FLeaderboardScoresDownloadedForUsers::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamLeaderboard_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamLeaderboardEntries_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryCount_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboardEntries;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EntryCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardScoresDownloadedForUsers>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardScoresDownloadedForUsers, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamLeaderboard_MetaData), NewProp_SteamLeaderboard_MetaData) }; // 3003321657
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_SteamLeaderboardEntries = { "SteamLeaderboardEntries", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardScoresDownloadedForUsers, SteamLeaderboardEntries), Z_Construct_UScriptStruct_FSteamLeaderboardEntries, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamLeaderboardEntries_MetaData), NewProp_SteamLeaderboardEntries_MetaData) }; // 2142211046
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_EntryCount = { "EntryCount", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardScoresDownloadedForUsers, EntryCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryCount_MetaData), NewProp_EntryCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_SteamLeaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_SteamLeaderboardEntries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewProp_EntryCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"LeaderboardScoresDownloadedForUsers",
	Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::PropPointers),
	sizeof(FLeaderboardScoresDownloadedForUsers),
	alignof(FLeaderboardScoresDownloadedForUsers),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardScoresDownloadedForUsers.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardScoresDownloadedForUsers.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardScoresDownloadedForUsers.InnerSingleton;
}
// End ScriptStruct FLeaderboardScoresDownloadedForUsers

// Begin ScriptStruct FRequestUserStatsData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RequestUserStatsData;
class UScriptStruct* FRequestUserStatsData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RequestUserStatsData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RequestUserStatsData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRequestUserStatsData, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("RequestUserStatsData"));
	}
	return Z_Registration_Info_UScriptStruct_RequestUserStatsData.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FRequestUserStatsData>()
{
	return FRequestUserStatsData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRequestUserStatsData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDUser_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRequestUserStatsData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRequestUserStatsData, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameID_MetaData), NewProp_GameID_MetaData) }; // 1935638068
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRequestUserStatsData, Result), Z_Construct_UEnum_SteamCorePro_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2516430442
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRequestUserStatsData, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDUser_MetaData), NewProp_SteamIDUser_MetaData) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_GameID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewProp_SteamIDUser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"RequestUserStatsData",
	Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::PropPointers),
	sizeof(FRequestUserStatsData),
	alignof(FRequestUserStatsData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRequestUserStatsData()
{
	if (!Z_Registration_Info_UScriptStruct_RequestUserStatsData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RequestUserStatsData.InnerSingleton, Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RequestUserStatsData.InnerSingleton;
}
// End ScriptStruct FRequestUserStatsData

// Begin ScriptStruct FRequestCurrentStatsData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RequestCurrentStatsData;
class UScriptStruct* FRequestCurrentStatsData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RequestCurrentStatsData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RequestCurrentStatsData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRequestCurrentStatsData, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("RequestCurrentStatsData"));
	}
	return Z_Registration_Info_UScriptStruct_RequestCurrentStatsData.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FRequestCurrentStatsData>()
{
	return FRequestCurrentStatsData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRequestCurrentStatsData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDUser_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRequestCurrentStatsData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRequestCurrentStatsData_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRequestCurrentStatsData, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameID_MetaData), NewProp_GameID_MetaData) }; // 1935638068
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRequestCurrentStatsData_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRequestCurrentStatsData_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRequestCurrentStatsData, Result), Z_Construct_UEnum_SteamCorePro_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2516430442
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRequestCurrentStatsData_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRequestCurrentStatsData, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDUser_MetaData), NewProp_SteamIDUser_MetaData) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRequestCurrentStatsData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestCurrentStatsData_Statics::NewProp_GameID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestCurrentStatsData_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestCurrentStatsData_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRequestCurrentStatsData_Statics::NewProp_SteamIDUser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestCurrentStatsData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRequestCurrentStatsData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"RequestCurrentStatsData",
	Z_Construct_UScriptStruct_FRequestCurrentStatsData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestCurrentStatsData_Statics::PropPointers),
	sizeof(FRequestCurrentStatsData),
	alignof(FRequestCurrentStatsData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRequestCurrentStatsData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRequestCurrentStatsData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRequestCurrentStatsData()
{
	if (!Z_Registration_Info_UScriptStruct_RequestCurrentStatsData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RequestCurrentStatsData.InnerSingleton, Z_Construct_UScriptStruct_FRequestCurrentStatsData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RequestCurrentStatsData.InnerSingleton;
}
// End ScriptStruct FRequestCurrentStatsData

// Begin ScriptStruct FLeaderboardScoreUploaded
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardScoreUploaded;
class UScriptStruct* FLeaderboardScoreUploaded::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardScoreUploaded.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardScoreUploaded.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("LeaderboardScoreUploaded"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardScoreUploaded.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FLeaderboardScoreUploaded>()
{
	return FLeaderboardScoreUploaded::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamLeaderboard_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bScoreChanged_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalRankNew_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalRankPrevious_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static void NewProp_bScoreChanged_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bScoreChanged;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GlobalRankNew;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GlobalRankPrevious;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardScoreUploaded>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((FLeaderboardScoreUploaded*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLeaderboardScoreUploaded), &Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuccess_MetaData), NewProp_bSuccess_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardScoreUploaded, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamLeaderboard_MetaData), NewProp_SteamLeaderboard_MetaData) }; // 3003321657
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardScoreUploaded, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
void Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bScoreChanged_SetBit(void* Obj)
{
	((FLeaderboardScoreUploaded*)Obj)->bScoreChanged = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bScoreChanged = { "bScoreChanged", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLeaderboardScoreUploaded), &Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bScoreChanged_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bScoreChanged_MetaData), NewProp_bScoreChanged_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_GlobalRankNew = { "GlobalRankNew", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardScoreUploaded, GlobalRankNew), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalRankNew_MetaData), NewProp_GlobalRankNew_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_GlobalRankPrevious = { "GlobalRankPrevious", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardScoreUploaded, GlobalRankPrevious), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalRankPrevious_MetaData), NewProp_GlobalRankPrevious_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_SteamLeaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_bScoreChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_GlobalRankNew,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewProp_GlobalRankPrevious,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"LeaderboardScoreUploaded",
	Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::PropPointers),
	sizeof(FLeaderboardScoreUploaded),
	alignof(FLeaderboardScoreUploaded),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardScoreUploaded()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardScoreUploaded.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardScoreUploaded.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardScoreUploaded.InnerSingleton;
}
// End ScriptStruct FLeaderboardScoreUploaded

// Begin ScriptStruct FAttachLeaderboardUGCData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AttachLeaderboardUGCData;
class UScriptStruct* FAttachLeaderboardUGCData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AttachLeaderboardUGCData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AttachLeaderboardUGCData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttachLeaderboardUGCData, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("AttachLeaderboardUGCData"));
	}
	return Z_Registration_Info_UScriptStruct_AttachLeaderboardUGCData.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FAttachLeaderboardUGCData>()
{
	return FAttachLeaderboardUGCData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamLeaderboard_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttachLeaderboardUGCData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachLeaderboardUGCData, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamLeaderboard_MetaData), NewProp_SteamLeaderboard_MetaData) }; // 3003321657
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAttachLeaderboardUGCData, Result), Z_Construct_UEnum_SteamCorePro_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2516430442
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::NewProp_SteamLeaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"AttachLeaderboardUGCData",
	Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::PropPointers),
	sizeof(FAttachLeaderboardUGCData),
	alignof(FAttachLeaderboardUGCData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAttachLeaderboardUGCData()
{
	if (!Z_Registration_Info_UScriptStruct_AttachLeaderboardUGCData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AttachLeaderboardUGCData.InnerSingleton, Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AttachLeaderboardUGCData.InnerSingleton;
}
// End ScriptStruct FAttachLeaderboardUGCData

// Begin ScriptStruct FLeaderboardFindResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LeaderboardFindResult;
class UScriptStruct* FLeaderboardFindResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardFindResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LeaderboardFindResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardFindResult, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("LeaderboardFindResult"));
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardFindResult.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FLeaderboardFindResult>()
{
	return FLeaderboardFindResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamLeaderboard_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLeaderboardFound_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
	static void NewProp_bLeaderboardFound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLeaderboardFound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardFindResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLeaderboardFindResult, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamLeaderboard_MetaData), NewProp_SteamLeaderboard_MetaData) }; // 3003321657
void Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::NewProp_bLeaderboardFound_SetBit(void* Obj)
{
	((FLeaderboardFindResult*)Obj)->bLeaderboardFound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::NewProp_bLeaderboardFound = { "bLeaderboardFound", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLeaderboardFindResult), &Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::NewProp_bLeaderboardFound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLeaderboardFound_MetaData), NewProp_bLeaderboardFound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::NewProp_SteamLeaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::NewProp_bLeaderboardFound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"LeaderboardFindResult",
	Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::PropPointers),
	sizeof(FLeaderboardFindResult),
	alignof(FLeaderboardFindResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardFindResult()
{
	if (!Z_Registration_Info_UScriptStruct_LeaderboardFindResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LeaderboardFindResult.InnerSingleton, Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LeaderboardFindResult.InnerSingleton;
}
// End ScriptStruct FLeaderboardFindResult

// Begin ScriptStruct FFindOrCreateLeaderboardData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FindOrCreateLeaderboardData;
class UScriptStruct* FFindOrCreateLeaderboardData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FindOrCreateLeaderboardData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FindOrCreateLeaderboardData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("FindOrCreateLeaderboardData"));
	}
	return Z_Registration_Info_UScriptStruct_FindOrCreateLeaderboardData.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FFindOrCreateLeaderboardData>()
{
	return FFindOrCreateLeaderboardData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamLeaderboard_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLeaderboardFound_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
	static void NewProp_bLeaderboardFound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLeaderboardFound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFindOrCreateLeaderboardData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFindOrCreateLeaderboardData, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamLeaderboard_MetaData), NewProp_SteamLeaderboard_MetaData) }; // 3003321657
void Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_bLeaderboardFound_SetBit(void* Obj)
{
	((FFindOrCreateLeaderboardData*)Obj)->bLeaderboardFound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_bLeaderboardFound = { "bLeaderboardFound", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFindOrCreateLeaderboardData), &Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_bLeaderboardFound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLeaderboardFound_MetaData), NewProp_bLeaderboardFound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_SteamLeaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewProp_bLeaderboardFound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"FindOrCreateLeaderboardData",
	Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::PropPointers),
	sizeof(FFindOrCreateLeaderboardData),
	alignof(FFindOrCreateLeaderboardData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData()
{
	if (!Z_Registration_Info_UScriptStruct_FindOrCreateLeaderboardData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FindOrCreateLeaderboardData.InnerSingleton, Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FindOrCreateLeaderboardData.InnerSingleton;
}
// End ScriptStruct FFindOrCreateLeaderboardData

// Begin ScriptStruct FNumberOfCurrentPlayers
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NumberOfCurrentPlayers;
class UScriptStruct* FNumberOfCurrentPlayers::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NumberOfCurrentPlayers.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NumberOfCurrentPlayers.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNumberOfCurrentPlayers, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("NumberOfCurrentPlayers"));
	}
	return Z_Registration_Info_UScriptStruct_NumberOfCurrentPlayers.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FNumberOfCurrentPlayers>()
{
	return FNumberOfCurrentPlayers::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Players_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Players;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNumberOfCurrentPlayers>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((FNumberOfCurrentPlayers*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNumberOfCurrentPlayers), &Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuccess_MetaData), NewProp_bSuccess_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNumberOfCurrentPlayers, Players), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Players_MetaData), NewProp_Players_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewProp_Players,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"NumberOfCurrentPlayers",
	Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::PropPointers),
	sizeof(FNumberOfCurrentPlayers),
	alignof(FNumberOfCurrentPlayers),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNumberOfCurrentPlayers()
{
	if (!Z_Registration_Info_UScriptStruct_NumberOfCurrentPlayers.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NumberOfCurrentPlayers.InnerSingleton, Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NumberOfCurrentPlayers.InnerSingleton;
}
// End ScriptStruct FNumberOfCurrentPlayers

// Begin ScriptStruct FGlobalAchievementPercentagesReady
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GlobalAchievementPercentagesReady;
class UScriptStruct* FGlobalAchievementPercentagesReady::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GlobalAchievementPercentagesReady.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GlobalAchievementPercentagesReady.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("GlobalAchievementPercentagesReady"));
	}
	return Z_Registration_Info_UScriptStruct_GlobalAchievementPercentagesReady.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FGlobalAchievementPercentagesReady>()
{
	return FGlobalAchievementPercentagesReady::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGlobalAchievementPercentagesReady>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGlobalAchievementPercentagesReady, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameID_MetaData), NewProp_GameID_MetaData) }; // 1935638068
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGlobalAchievementPercentagesReady, Result), Z_Construct_UEnum_SteamCorePro_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2516430442
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::NewProp_GameID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"GlobalAchievementPercentagesReady",
	Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::PropPointers),
	sizeof(FGlobalAchievementPercentagesReady),
	alignof(FGlobalAchievementPercentagesReady),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady()
{
	if (!Z_Registration_Info_UScriptStruct_GlobalAchievementPercentagesReady.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GlobalAchievementPercentagesReady.InnerSingleton, Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GlobalAchievementPercentagesReady.InnerSingleton;
}
// End ScriptStruct FGlobalAchievementPercentagesReady

// Begin ScriptStruct FGlobalStatsReceived
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GlobalStatsReceived;
class UScriptStruct* FGlobalStatsReceived::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GlobalStatsReceived.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GlobalStatsReceived.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGlobalStatsReceived, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("GlobalStatsReceived"));
	}
	return Z_Registration_Info_UScriptStruct_GlobalStatsReceived.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FGlobalStatsReceived>()
{
	return FGlobalStatsReceived::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameID_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "Category", "UserStats" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGlobalStatsReceived>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::NewProp_GameID = { "GameID", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGlobalStatsReceived, GameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameID_MetaData), NewProp_GameID_MetaData) }; // 1935638068
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGlobalStatsReceived, Result), Z_Construct_UEnum_SteamCorePro_ESteamResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2516430442
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::NewProp_GameID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"GlobalStatsReceived",
	Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::PropPointers),
	sizeof(FGlobalStatsReceived),
	alignof(FGlobalStatsReceived),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGlobalStatsReceived()
{
	if (!Z_Registration_Info_UScriptStruct_GlobalStatsReceived.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GlobalStatsReceived.InnerSingleton, Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GlobalStatsReceived.InnerSingleton;
}
// End ScriptStruct FGlobalStatsReceived

// Begin Delegate FOnUserAchievementIconFetched
struct Z_Construct_UDelegateFunction_SteamCorePro_OnUserAchievementIconFetched__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnUserAchievementIconFetched_Parms
	{
		FUserAchievementIconFetched Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnUserAchievementIconFetched__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnUserAchievementIconFetched_Parms, Data), Z_Construct_UScriptStruct_FUserAchievementIconFetched, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 683379912
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnUserAchievementIconFetched__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnUserAchievementIconFetched__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnUserAchievementIconFetched__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnUserAchievementIconFetched__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnUserAchievementIconFetched__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnUserAchievementIconFetched__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnUserAchievementIconFetched__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnUserAchievementIconFetched__DelegateSignature_Statics::_Script_SteamCorePro_eventOnUserAchievementIconFetched_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnUserAchievementIconFetched__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnUserAchievementIconFetched__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnUserAchievementIconFetched__DelegateSignature_Statics::_Script_SteamCorePro_eventOnUserAchievementIconFetched_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnUserAchievementIconFetched__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnUserAchievementIconFetched__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUserAchievementIconFetched_DelegateWrapper(const FMulticastScriptDelegate& OnUserAchievementIconFetched, FUserAchievementIconFetched const& Data)
{
	struct _Script_SteamCorePro_eventOnUserAchievementIconFetched_Parms
	{
		FUserAchievementIconFetched Data;
	};
	_Script_SteamCorePro_eventOnUserAchievementIconFetched_Parms Parms;
	Parms.Data=Data;
	OnUserAchievementIconFetched.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnUserAchievementIconFetched

// Begin Delegate FOnUserAchievementStored
struct Z_Construct_UDelegateFunction_SteamCorePro_OnUserAchievementStored__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnUserAchievementStored_Parms
	{
		FUserAchievementStored Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnUserAchievementStored__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnUserAchievementStored_Parms, Data), Z_Construct_UScriptStruct_FUserAchievementStored, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1596220729
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnUserAchievementStored__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnUserAchievementStored__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnUserAchievementStored__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnUserAchievementStored__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnUserAchievementStored__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnUserAchievementStored__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnUserAchievementStored__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnUserAchievementStored__DelegateSignature_Statics::_Script_SteamCorePro_eventOnUserAchievementStored_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnUserAchievementStored__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnUserAchievementStored__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnUserAchievementStored__DelegateSignature_Statics::_Script_SteamCorePro_eventOnUserAchievementStored_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnUserAchievementStored__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnUserAchievementStored__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUserAchievementStored_DelegateWrapper(const FMulticastScriptDelegate& OnUserAchievementStored, FUserAchievementStored const& Data)
{
	struct _Script_SteamCorePro_eventOnUserAchievementStored_Parms
	{
		FUserAchievementStored Data;
	};
	_Script_SteamCorePro_eventOnUserAchievementStored_Parms Parms;
	Parms.Data=Data;
	OnUserAchievementStored.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnUserAchievementStored

// Begin Delegate FOnUserStatsReceived
struct Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsReceived__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnUserStatsReceived_Parms
	{
		FUserStatsReceived Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsReceived__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnUserStatsReceived_Parms, Data), Z_Construct_UScriptStruct_FUserStatsReceived, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 468405218
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsReceived__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsReceived__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsReceived__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnUserStatsReceived__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsReceived__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsReceived__DelegateSignature_Statics::_Script_SteamCorePro_eventOnUserStatsReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsReceived__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsReceived__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsReceived__DelegateSignature_Statics::_Script_SteamCorePro_eventOnUserStatsReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsReceived__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsReceived__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUserStatsReceived_DelegateWrapper(const FMulticastScriptDelegate& OnUserStatsReceived, FUserStatsReceived const& Data)
{
	struct _Script_SteamCorePro_eventOnUserStatsReceived_Parms
	{
		FUserStatsReceived Data;
	};
	_Script_SteamCorePro_eventOnUserStatsReceived_Parms Parms;
	Parms.Data=Data;
	OnUserStatsReceived.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnUserStatsReceived

// Begin Delegate FOnUserStatsStored
struct Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsStored__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnUserStatsStored_Parms
	{
		FUserStatsStored Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsStored__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnUserStatsStored_Parms, Data), Z_Construct_UScriptStruct_FUserStatsStored, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3587639998
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsStored__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsStored__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsStored__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsStored__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnUserStatsStored__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsStored__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsStored__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsStored__DelegateSignature_Statics::_Script_SteamCorePro_eventOnUserStatsStored_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsStored__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsStored__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsStored__DelegateSignature_Statics::_Script_SteamCorePro_eventOnUserStatsStored_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsStored__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsStored__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUserStatsStored_DelegateWrapper(const FMulticastScriptDelegate& OnUserStatsStored, FUserStatsStored const& Data)
{
	struct _Script_SteamCorePro_eventOnUserStatsStored_Parms
	{
		FUserStatsStored Data;
	};
	_Script_SteamCorePro_eventOnUserStatsStored_Parms Parms;
	Parms.Data=Data;
	OnUserStatsStored.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnUserStatsStored

// Begin Delegate FOnUserStatsUnloaded
struct Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsUnloaded__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnUserStatsUnloaded_Parms
	{
		FUserStatsUnloaded Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsUnloaded__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnUserStatsUnloaded_Parms, Data), Z_Construct_UScriptStruct_FUserStatsUnloaded, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2716984124
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsUnloaded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsUnloaded__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsUnloaded__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsUnloaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnUserStatsUnloaded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsUnloaded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsUnloaded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsUnloaded__DelegateSignature_Statics::_Script_SteamCorePro_eventOnUserStatsUnloaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsUnloaded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsUnloaded__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsUnloaded__DelegateSignature_Statics::_Script_SteamCorePro_eventOnUserStatsUnloaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsUnloaded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsUnloaded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUserStatsUnloaded_DelegateWrapper(const FMulticastScriptDelegate& OnUserStatsUnloaded, FUserStatsUnloaded const& Data)
{
	struct _Script_SteamCorePro_eventOnUserStatsUnloaded_Parms
	{
		FUserStatsUnloaded Data;
	};
	_Script_SteamCorePro_eventOnUserStatsUnloaded_Parms Parms;
	Parms.Data=Data;
	OnUserStatsUnloaded.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnUserStatsUnloaded

// Begin Delegate FOnDownloadLeaderboardEntries
struct Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadLeaderboardEntries__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnDownloadLeaderboardEntries_Parms
	{
		FLeaderboardScoresDownloaded Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadLeaderboardEntries__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnDownloadLeaderboardEntries_Parms, Data), Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 921166659
void Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadLeaderboardEntries__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnDownloadLeaderboardEntries_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadLeaderboardEntries__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnDownloadLeaderboardEntries_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadLeaderboardEntries__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadLeaderboardEntries__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadLeaderboardEntries__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadLeaderboardEntries__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadLeaderboardEntries__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadLeaderboardEntries__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnDownloadLeaderboardEntries__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadLeaderboardEntries__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadLeaderboardEntries__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadLeaderboardEntries__DelegateSignature_Statics::_Script_SteamCorePro_eventOnDownloadLeaderboardEntries_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadLeaderboardEntries__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadLeaderboardEntries__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadLeaderboardEntries__DelegateSignature_Statics::_Script_SteamCorePro_eventOnDownloadLeaderboardEntries_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadLeaderboardEntries__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadLeaderboardEntries__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDownloadLeaderboardEntries_DelegateWrapper(const FScriptDelegate& OnDownloadLeaderboardEntries, FLeaderboardScoresDownloaded const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnDownloadLeaderboardEntries_Parms
	{
		FLeaderboardScoresDownloaded Data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnDownloadLeaderboardEntries_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnDownloadLeaderboardEntries.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnDownloadLeaderboardEntries

// Begin Delegate FOnDownloadLeaderboardEntriesForUsers
struct Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnDownloadLeaderboardEntriesForUsers_Parms
	{
		FLeaderboardScoresDownloadedForUsers Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnDownloadLeaderboardEntriesForUsers_Parms, Data), Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3968615090
void Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnDownloadLeaderboardEntriesForUsers_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnDownloadLeaderboardEntriesForUsers_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnDownloadLeaderboardEntriesForUsers__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::_Script_SteamCorePro_eventOnDownloadLeaderboardEntriesForUsers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::_Script_SteamCorePro_eventOnDownloadLeaderboardEntriesForUsers_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadLeaderboardEntriesForUsers__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadLeaderboardEntriesForUsers__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDownloadLeaderboardEntriesForUsers_DelegateWrapper(const FScriptDelegate& OnDownloadLeaderboardEntriesForUsers, FLeaderboardScoresDownloadedForUsers const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnDownloadLeaderboardEntriesForUsers_Parms
	{
		FLeaderboardScoresDownloadedForUsers Data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnDownloadLeaderboardEntriesForUsers_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnDownloadLeaderboardEntriesForUsers.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnDownloadLeaderboardEntriesForUsers

// Begin Delegate FOnRequestUserStats
struct Z_Construct_UDelegateFunction_SteamCorePro_OnRequestUserStats__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnRequestUserStats_Parms
	{
		FRequestUserStatsData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnRequestUserStats__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnRequestUserStats_Parms, Data), Z_Construct_UScriptStruct_FRequestUserStatsData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 4038711035
void Z_Construct_UDelegateFunction_SteamCorePro_OnRequestUserStats__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnRequestUserStats_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnRequestUserStats__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnRequestUserStats_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnRequestUserStats__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnRequestUserStats__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnRequestUserStats__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnRequestUserStats__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnRequestUserStats__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnRequestUserStats__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnRequestUserStats__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnRequestUserStats__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnRequestUserStats__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnRequestUserStats__DelegateSignature_Statics::_Script_SteamCorePro_eventOnRequestUserStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnRequestUserStats__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnRequestUserStats__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnRequestUserStats__DelegateSignature_Statics::_Script_SteamCorePro_eventOnRequestUserStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnRequestUserStats__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnRequestUserStats__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestUserStats_DelegateWrapper(const FScriptDelegate& OnRequestUserStats, FRequestUserStatsData const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnRequestUserStats_Parms
	{
		FRequestUserStatsData Data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnRequestUserStats_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnRequestUserStats.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnRequestUserStats

// Begin Delegate FOnUploadLeaderboardScore
struct Z_Construct_UDelegateFunction_SteamCorePro_OnUploadLeaderboardScore__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnUploadLeaderboardScore_Parms
	{
		FLeaderboardScoreUploaded Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnUploadLeaderboardScore__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnUploadLeaderboardScore_Parms, Data), Z_Construct_UScriptStruct_FLeaderboardScoreUploaded, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 3593259045
void Z_Construct_UDelegateFunction_SteamCorePro_OnUploadLeaderboardScore__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnUploadLeaderboardScore_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnUploadLeaderboardScore__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnUploadLeaderboardScore_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnUploadLeaderboardScore__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnUploadLeaderboardScore__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnUploadLeaderboardScore__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnUploadLeaderboardScore__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnUploadLeaderboardScore__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnUploadLeaderboardScore__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnUploadLeaderboardScore__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnUploadLeaderboardScore__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnUploadLeaderboardScore__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnUploadLeaderboardScore__DelegateSignature_Statics::_Script_SteamCorePro_eventOnUploadLeaderboardScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnUploadLeaderboardScore__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnUploadLeaderboardScore__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnUploadLeaderboardScore__DelegateSignature_Statics::_Script_SteamCorePro_eventOnUploadLeaderboardScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnUploadLeaderboardScore__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnUploadLeaderboardScore__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUploadLeaderboardScore_DelegateWrapper(const FScriptDelegate& OnUploadLeaderboardScore, FLeaderboardScoreUploaded const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnUploadLeaderboardScore_Parms
	{
		FLeaderboardScoreUploaded Data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnUploadLeaderboardScore_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnUploadLeaderboardScore.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnUploadLeaderboardScore

// Begin Delegate FOnAttachLeaderboardUGC
struct Z_Construct_UDelegateFunction_SteamCorePro_OnAttachLeaderboardUGC__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnAttachLeaderboardUGC_Parms
	{
		FAttachLeaderboardUGCData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnAttachLeaderboardUGC__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnAttachLeaderboardUGC_Parms, Data), Z_Construct_UScriptStruct_FAttachLeaderboardUGCData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 527313291
void Z_Construct_UDelegateFunction_SteamCorePro_OnAttachLeaderboardUGC__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnAttachLeaderboardUGC_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnAttachLeaderboardUGC__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnAttachLeaderboardUGC_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnAttachLeaderboardUGC__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnAttachLeaderboardUGC__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnAttachLeaderboardUGC__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnAttachLeaderboardUGC__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnAttachLeaderboardUGC__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnAttachLeaderboardUGC__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnAttachLeaderboardUGC__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnAttachLeaderboardUGC__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnAttachLeaderboardUGC__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnAttachLeaderboardUGC__DelegateSignature_Statics::_Script_SteamCorePro_eventOnAttachLeaderboardUGC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnAttachLeaderboardUGC__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnAttachLeaderboardUGC__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnAttachLeaderboardUGC__DelegateSignature_Statics::_Script_SteamCorePro_eventOnAttachLeaderboardUGC_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnAttachLeaderboardUGC__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnAttachLeaderboardUGC__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAttachLeaderboardUGC_DelegateWrapper(const FScriptDelegate& OnAttachLeaderboardUGC, FAttachLeaderboardUGCData const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnAttachLeaderboardUGC_Parms
	{
		FAttachLeaderboardUGCData Data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnAttachLeaderboardUGC_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnAttachLeaderboardUGC.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnAttachLeaderboardUGC

// Begin Delegate FOnFindLeaderboard
struct Z_Construct_UDelegateFunction_SteamCorePro_OnFindLeaderboard__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnFindLeaderboard_Parms
	{
		FLeaderboardFindResult Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnFindLeaderboard__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnFindLeaderboard_Parms, Data), Z_Construct_UScriptStruct_FLeaderboardFindResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 681327701
void Z_Construct_UDelegateFunction_SteamCorePro_OnFindLeaderboard__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnFindLeaderboard_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnFindLeaderboard__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnFindLeaderboard_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnFindLeaderboard__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnFindLeaderboard__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnFindLeaderboard__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnFindLeaderboard__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnFindLeaderboard__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnFindLeaderboard__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnFindLeaderboard__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnFindLeaderboard__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnFindLeaderboard__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnFindLeaderboard__DelegateSignature_Statics::_Script_SteamCorePro_eventOnFindLeaderboard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnFindLeaderboard__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnFindLeaderboard__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnFindLeaderboard__DelegateSignature_Statics::_Script_SteamCorePro_eventOnFindLeaderboard_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnFindLeaderboard__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnFindLeaderboard__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFindLeaderboard_DelegateWrapper(const FScriptDelegate& OnFindLeaderboard, FLeaderboardFindResult const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnFindLeaderboard_Parms
	{
		FLeaderboardFindResult Data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnFindLeaderboard_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnFindLeaderboard.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnFindLeaderboard

// Begin Delegate FOnFindOrCreateLeaderboard
struct Z_Construct_UDelegateFunction_SteamCorePro_OnFindOrCreateLeaderboard__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnFindOrCreateLeaderboard_Parms
	{
		FFindOrCreateLeaderboardData Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnFindOrCreateLeaderboard__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnFindOrCreateLeaderboard_Parms, Data), Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1640579832
void Z_Construct_UDelegateFunction_SteamCorePro_OnFindOrCreateLeaderboard__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnFindOrCreateLeaderboard_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnFindOrCreateLeaderboard__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnFindOrCreateLeaderboard_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnFindOrCreateLeaderboard__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnFindOrCreateLeaderboard__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnFindOrCreateLeaderboard__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnFindOrCreateLeaderboard__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnFindOrCreateLeaderboard__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnFindOrCreateLeaderboard__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnFindOrCreateLeaderboard__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnFindOrCreateLeaderboard__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnFindOrCreateLeaderboard__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnFindOrCreateLeaderboard__DelegateSignature_Statics::_Script_SteamCorePro_eventOnFindOrCreateLeaderboard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnFindOrCreateLeaderboard__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnFindOrCreateLeaderboard__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnFindOrCreateLeaderboard__DelegateSignature_Statics::_Script_SteamCorePro_eventOnFindOrCreateLeaderboard_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnFindOrCreateLeaderboard__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnFindOrCreateLeaderboard__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFindOrCreateLeaderboard_DelegateWrapper(const FScriptDelegate& OnFindOrCreateLeaderboard, FFindOrCreateLeaderboardData const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnFindOrCreateLeaderboard_Parms
	{
		FFindOrCreateLeaderboardData Data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnFindOrCreateLeaderboard_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnFindOrCreateLeaderboard.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnFindOrCreateLeaderboard

// Begin Delegate FOnGetNumberOfCurrentPlayers
struct Z_Construct_UDelegateFunction_SteamCorePro_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnGetNumberOfCurrentPlayers_Parms
	{
		FNumberOfCurrentPlayers Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnGetNumberOfCurrentPlayers_Parms, Data), Z_Construct_UScriptStruct_FNumberOfCurrentPlayers, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2721971488
void Z_Construct_UDelegateFunction_SteamCorePro_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnGetNumberOfCurrentPlayers_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnGetNumberOfCurrentPlayers_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnGetNumberOfCurrentPlayers__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::_Script_SteamCorePro_eventOnGetNumberOfCurrentPlayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::_Script_SteamCorePro_eventOnGetNumberOfCurrentPlayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnGetNumberOfCurrentPlayers__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnGetNumberOfCurrentPlayers__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGetNumberOfCurrentPlayers_DelegateWrapper(const FScriptDelegate& OnGetNumberOfCurrentPlayers, FNumberOfCurrentPlayers const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnGetNumberOfCurrentPlayers_Parms
	{
		FNumberOfCurrentPlayers Data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnGetNumberOfCurrentPlayers_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnGetNumberOfCurrentPlayers.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnGetNumberOfCurrentPlayers

// Begin Delegate FOnRequestGlobalAchievementPercentages
struct Z_Construct_UDelegateFunction_SteamCorePro_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnRequestGlobalAchievementPercentages_Parms
	{
		FGlobalAchievementPercentagesReady Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnRequestGlobalAchievementPercentages_Parms, Data), Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 195619949
void Z_Construct_UDelegateFunction_SteamCorePro_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnRequestGlobalAchievementPercentages_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnRequestGlobalAchievementPercentages_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnRequestGlobalAchievementPercentages__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::_Script_SteamCorePro_eventOnRequestGlobalAchievementPercentages_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::_Script_SteamCorePro_eventOnRequestGlobalAchievementPercentages_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnRequestGlobalAchievementPercentages__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnRequestGlobalAchievementPercentages__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestGlobalAchievementPercentages_DelegateWrapper(const FScriptDelegate& OnRequestGlobalAchievementPercentages, FGlobalAchievementPercentagesReady const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnRequestGlobalAchievementPercentages_Parms
	{
		FGlobalAchievementPercentagesReady Data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnRequestGlobalAchievementPercentages_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnRequestGlobalAchievementPercentages.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnRequestGlobalAchievementPercentages

// Begin Delegate FOnRequestGlobalStats
struct Z_Construct_UDelegateFunction_SteamCorePro_OnRequestGlobalStats__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnRequestGlobalStats_Parms
	{
		FGlobalStatsReceived Data;
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStatsTypes.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnRequestGlobalStats__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnRequestGlobalStats_Parms, Data), Z_Construct_UScriptStruct_FGlobalStatsReceived, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1626356177
void Z_Construct_UDelegateFunction_SteamCorePro_OnRequestGlobalStats__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_SteamCorePro_eventOnRequestGlobalStats_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnRequestGlobalStats__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamCorePro_eventOnRequestGlobalStats_Parms), &Z_Construct_UDelegateFunction_SteamCorePro_OnRequestGlobalStats__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnRequestGlobalStats__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnRequestGlobalStats__DelegateSignature_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnRequestGlobalStats__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnRequestGlobalStats__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnRequestGlobalStats__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnRequestGlobalStats__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnRequestGlobalStats__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnRequestGlobalStats__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnRequestGlobalStats__DelegateSignature_Statics::_Script_SteamCorePro_eventOnRequestGlobalStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnRequestGlobalStats__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnRequestGlobalStats__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnRequestGlobalStats__DelegateSignature_Statics::_Script_SteamCorePro_eventOnRequestGlobalStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnRequestGlobalStats__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnRequestGlobalStats__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestGlobalStats_DelegateWrapper(const FScriptDelegate& OnRequestGlobalStats, FGlobalStatsReceived const& Data, bool bWasSuccessful)
{
	struct _Script_SteamCorePro_eventOnRequestGlobalStats_Parms
	{
		FGlobalStatsReceived Data;
		bool bWasSuccessful;
	};
	_Script_SteamCorePro_eventOnRequestGlobalStats_Parms Parms;
	Parms.Data=Data;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	OnRequestGlobalStats.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnRequestGlobalStats

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUserStats_SteamUserStatsTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESteamLeaderboardDataRequest_StaticEnum, TEXT("ESteamLeaderboardDataRequest"), &Z_Registration_Info_UEnum_ESteamLeaderboardDataRequest, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3097442389U) },
		{ ESteamLeaderboardSortMethod_StaticEnum, TEXT("ESteamLeaderboardSortMethod"), &Z_Registration_Info_UEnum_ESteamLeaderboardSortMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1733143043U) },
		{ ESteamLeaderboardDisplayType_StaticEnum, TEXT("ESteamLeaderboardDisplayType"), &Z_Registration_Info_UEnum_ESteamLeaderboardDisplayType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2353612195U) },
		{ ESteamLeaderboardUploadScoreMethod_StaticEnum, TEXT("ESteamLeaderboardUploadScoreMethod"), &Z_Registration_Info_UEnum_ESteamLeaderboardUploadScoreMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2613855586U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSteamLeaderboardEntries::StaticStruct, Z_Construct_UScriptStruct_FSteamLeaderboardEntries_Statics::NewStructOps, TEXT("SteamLeaderboardEntries"), &Z_Registration_Info_UScriptStruct_SteamLeaderboardEntries, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamLeaderboardEntries), 2142211046U) },
		{ FSteamLeaderboardEntry::StaticStruct, Z_Construct_UScriptStruct_FSteamLeaderboardEntry_Statics::NewStructOps, TEXT("SteamLeaderboardEntry"), &Z_Registration_Info_UScriptStruct_SteamLeaderboardEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamLeaderboardEntry), 513065793U) },
		{ FSteamLeaderboard::StaticStruct, Z_Construct_UScriptStruct_FSteamLeaderboard_Statics::NewStructOps, TEXT("SteamLeaderboard"), &Z_Registration_Info_UScriptStruct_SteamLeaderboard, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamLeaderboard), 3003321657U) },
		{ FUserAchievementIconFetched::StaticStruct, Z_Construct_UScriptStruct_FUserAchievementIconFetched_Statics::NewStructOps, TEXT("UserAchievementIconFetched"), &Z_Registration_Info_UScriptStruct_UserAchievementIconFetched, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUserAchievementIconFetched), 683379912U) },
		{ FUserAchievementStored::StaticStruct, Z_Construct_UScriptStruct_FUserAchievementStored_Statics::NewStructOps, TEXT("UserAchievementStored"), &Z_Registration_Info_UScriptStruct_UserAchievementStored, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUserAchievementStored), 1596220729U) },
		{ FUserStatsReceived::StaticStruct, Z_Construct_UScriptStruct_FUserStatsReceived_Statics::NewStructOps, TEXT("UserStatsReceived"), &Z_Registration_Info_UScriptStruct_UserStatsReceived, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUserStatsReceived), 468405218U) },
		{ FUserStatsStored::StaticStruct, Z_Construct_UScriptStruct_FUserStatsStored_Statics::NewStructOps, TEXT("UserStatsStored"), &Z_Registration_Info_UScriptStruct_UserStatsStored, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUserStatsStored), 3587639998U) },
		{ FUserStatsUnloaded::StaticStruct, Z_Construct_UScriptStruct_FUserStatsUnloaded_Statics::NewStructOps, TEXT("UserStatsUnloaded"), &Z_Registration_Info_UScriptStruct_UserStatsUnloaded, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUserStatsUnloaded), 2716984124U) },
		{ FLeaderboardScoresDownloaded::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardScoresDownloaded_Statics::NewStructOps, TEXT("LeaderboardScoresDownloaded"), &Z_Registration_Info_UScriptStruct_LeaderboardScoresDownloaded, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardScoresDownloaded), 921166659U) },
		{ FLeaderboardScoresDownloadedForUsers::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardScoresDownloadedForUsers_Statics::NewStructOps, TEXT("LeaderboardScoresDownloadedForUsers"), &Z_Registration_Info_UScriptStruct_LeaderboardScoresDownloadedForUsers, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardScoresDownloadedForUsers), 3968615090U) },
		{ FRequestUserStatsData::StaticStruct, Z_Construct_UScriptStruct_FRequestUserStatsData_Statics::NewStructOps, TEXT("RequestUserStatsData"), &Z_Registration_Info_UScriptStruct_RequestUserStatsData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRequestUserStatsData), 4038711035U) },
		{ FRequestCurrentStatsData::StaticStruct, Z_Construct_UScriptStruct_FRequestCurrentStatsData_Statics::NewStructOps, TEXT("RequestCurrentStatsData"), &Z_Registration_Info_UScriptStruct_RequestCurrentStatsData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRequestCurrentStatsData), 2630482230U) },
		{ FLeaderboardScoreUploaded::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardScoreUploaded_Statics::NewStructOps, TEXT("LeaderboardScoreUploaded"), &Z_Registration_Info_UScriptStruct_LeaderboardScoreUploaded, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardScoreUploaded), 3593259045U) },
		{ FAttachLeaderboardUGCData::StaticStruct, Z_Construct_UScriptStruct_FAttachLeaderboardUGCData_Statics::NewStructOps, TEXT("AttachLeaderboardUGCData"), &Z_Registration_Info_UScriptStruct_AttachLeaderboardUGCData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttachLeaderboardUGCData), 527313291U) },
		{ FLeaderboardFindResult::StaticStruct, Z_Construct_UScriptStruct_FLeaderboardFindResult_Statics::NewStructOps, TEXT("LeaderboardFindResult"), &Z_Registration_Info_UScriptStruct_LeaderboardFindResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLeaderboardFindResult), 681327701U) },
		{ FFindOrCreateLeaderboardData::StaticStruct, Z_Construct_UScriptStruct_FFindOrCreateLeaderboardData_Statics::NewStructOps, TEXT("FindOrCreateLeaderboardData"), &Z_Registration_Info_UScriptStruct_FindOrCreateLeaderboardData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFindOrCreateLeaderboardData), 1640579832U) },
		{ FNumberOfCurrentPlayers::StaticStruct, Z_Construct_UScriptStruct_FNumberOfCurrentPlayers_Statics::NewStructOps, TEXT("NumberOfCurrentPlayers"), &Z_Registration_Info_UScriptStruct_NumberOfCurrentPlayers, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNumberOfCurrentPlayers), 2721971488U) },
		{ FGlobalAchievementPercentagesReady::StaticStruct, Z_Construct_UScriptStruct_FGlobalAchievementPercentagesReady_Statics::NewStructOps, TEXT("GlobalAchievementPercentagesReady"), &Z_Registration_Info_UScriptStruct_GlobalAchievementPercentagesReady, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGlobalAchievementPercentagesReady), 195619949U) },
		{ FGlobalStatsReceived::StaticStruct, Z_Construct_UScriptStruct_FGlobalStatsReceived_Statics::NewStructOps, TEXT("GlobalStatsReceived"), &Z_Registration_Info_UScriptStruct_GlobalStatsReceived, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGlobalStatsReceived), 1626356177U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUserStats_SteamUserStatsTypes_h_3031068919(TEXT("/Script/SteamCorePro"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUserStats_SteamUserStatsTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUserStats_SteamUserStatsTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUserStats_SteamUserStatsTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUserStats_SteamUserStatsTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
