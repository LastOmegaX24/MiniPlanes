// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamUserStats/SteamUserStats.h"
#include "SteamCorePro/Public/SteamCorePro/SteamTypes.h"
#include "SteamCorePro/Public/SteamUserStats/SteamUserStatsTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamUserStats() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreInterface();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamProUserStats();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamProUserStats_NoRegister();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardDataRequest();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardDisplayType();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardSortMethod();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardUploadScoreMethod();
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
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboard();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboardEntries();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamLeaderboardEntry();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamUGCHandle();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Class USteamProUserStats Function AttachLeaderboardUGC
struct Z_Construct_UFunction_USteamProUserStats_AttachLeaderboardUGC_Statics
{
	struct SteamProUserStats_eventAttachLeaderboardUGC_Parms
	{
		FScriptDelegate Callback;
		FSteamLeaderboard SteamLeaderboard;
		FSteamUGCHandle Handle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Attaches a piece of user generated content the current user's entry on a leaderboard.\n\x09*\n\x09* This content could be a replay of the user achieving the score or a ghost to race against. The attached Handle will be available when the entry is retrieved and can be accessed by other users using GetDownloadedLeaderboardEntry which contains LeaderboardEntry_t.m_hUGC. To create and download user generated content see the documentation for the Steam Workshop.\n\x09* Once attached, the content will be available even if the underlying Cloud file is changed or deleted by the user.\n\x09* You must call FindLeaderboard or FindOrCreateLeaderboard to get a SteamLeaderboard_t prior to calling this function.\n\x09*\n\x09* @param\x09SteamLeaderboard\x09""A leaderboard Handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n\x09* @param\x09Handle\x09\x09\x09\x09Handle to a piece of user generated content that was shared using ISteamRemoteStorage::FileShare or ISteamUGC::CreateItem.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Attaches a piece of user generated content the current user's entry on a leaderboard.\n\nThis content could be a replay of the user achieving the score or a ghost to race against. The attached Handle will be available when the entry is retrieved and can be accessed by other users using GetDownloadedLeaderboardEntry which contains LeaderboardEntry_t.m_hUGC. To create and download user generated content see the documentation for the Steam Workshop.\nOnce attached, the content will be available even if the underlying Cloud file is changed or deleted by the user.\nYou must call FindLeaderboard or FindOrCreateLeaderboard to get a SteamLeaderboard_t prior to calling this function.\n\n@param        SteamLeaderboard        A leaderboard Handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n@param        Handle                          Handle to a piece of user generated content that was shared using ISteamRemoteStorage::FileShare or ISteamUGC::CreateItem." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamProUserStats_AttachLeaderboardUGC_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventAttachLeaderboardUGC_Parms, Callback), Z_Construct_UDelegateFunction_SteamCorePro_OnAttachLeaderboardUGC__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2160867924
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProUserStats_AttachLeaderboardUGC_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventAttachLeaderboardUGC_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(0, nullptr) }; // 3003321657
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProUserStats_AttachLeaderboardUGC_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventAttachLeaderboardUGC_Parms, Handle), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(0, nullptr) }; // 3978973746
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_AttachLeaderboardUGC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_AttachLeaderboardUGC_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_AttachLeaderboardUGC_Statics::NewProp_SteamLeaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_AttachLeaderboardUGC_Statics::NewProp_Handle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_AttachLeaderboardUGC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_AttachLeaderboardUGC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "AttachLeaderboardUGC", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_AttachLeaderboardUGC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_AttachLeaderboardUGC_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_AttachLeaderboardUGC_Statics::SteamProUserStats_eventAttachLeaderboardUGC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_AttachLeaderboardUGC_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_AttachLeaderboardUGC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_AttachLeaderboardUGC_Statics::SteamProUserStats_eventAttachLeaderboardUGC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_AttachLeaderboardUGC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_AttachLeaderboardUGC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execAttachLeaderboardUGC)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FSteamLeaderboard,Z_Param_SteamLeaderboard);
	P_GET_STRUCT(FSteamUGCHandle,Z_Param_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AttachLeaderboardUGC(FOnAttachLeaderboardUGC(Z_Param_Out_Callback),Z_Param_SteamLeaderboard,Z_Param_Handle);
	P_NATIVE_END;
}
// End Class USteamProUserStats Function AttachLeaderboardUGC

// Begin Class USteamProUserStats Function ClearAchievement
struct Z_Construct_UFunction_USteamProUserStats_ClearAchievement_Statics
{
	struct SteamProUserStats_eventClearAchievement_Parms
	{
		FString Name;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Resets the unlock status of an achievement.\n\x09*\n\x09* This is primarily only ever used for testing.\n\x09* ou must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this!\n\x09* This call only modifies Steam's in-memory state so it is quite cheap. \n\x09* To send the unlock status to the server and to trigger the Steam overlay notification you must call StoreStats.\n\x09*\n\x09* @param\x09Name\x09The 'API Name' of the Achievement to reset.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Resets the unlock status of an achievement.\n\nThis is primarily only ever used for testing.\nou must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this!\nThis call only modifies Steam's in-memory state so it is quite cheap.\nTo send the unlock status to the server and to trigger the Steam overlay notification you must call StoreStats.\n\n@param        Name    The 'API Name' of the Achievement to reset." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProUserStats_ClearAchievement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventClearAchievement_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProUserStats_ClearAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUserStats_eventClearAchievement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUserStats_ClearAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUserStats_eventClearAchievement_Parms), &Z_Construct_UFunction_USteamProUserStats_ClearAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_ClearAchievement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_ClearAchievement_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_ClearAchievement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_ClearAchievement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_ClearAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "ClearAchievement", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_ClearAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_ClearAchievement_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_ClearAchievement_Statics::SteamProUserStats_eventClearAchievement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_ClearAchievement_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_ClearAchievement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_ClearAchievement_Statics::SteamProUserStats_eventClearAchievement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_ClearAchievement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_ClearAchievement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execClearAchievement)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUserStats::ClearAchievement(Z_Param_Name);
	P_NATIVE_END;
}
// End Class USteamProUserStats Function ClearAchievement

// Begin Class USteamProUserStats Function DownloadLeaderboardEntries
struct Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntries_Statics
{
	struct SteamProUserStats_eventDownloadLeaderboardEntries_Parms
	{
		FScriptDelegate Callback;
		FSteamLeaderboard SteamLeaderboard;
		ESteamLeaderboardDataRequest DataRequest;
		int32 RangeStart;
		int32 RangeEnd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Fetches a series of leaderboard entries for a specified leaderboard.\n\x09*\n\x09* You can ask for more entries than exist, then this will return as many as do exist.\n\x09* If you want to download entries for an arbitrary set of users, such as all of \n\x09* the users on a server then you can use DownloadLeaderboardEntriesForUsers which takes an array of Steam IDs.\n\x09*\n\x09* @param\x09SteamLeaderboard\x09""A leaderboard Handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n\x09* @param\x09""DataRequest\x09\x09\x09The type of data request to make.\n\x09* @param\x09RangeStart\x09\x09\x09The index to start downloading entries relative to eLeaderboardDataRequest.\n\x09* @param\x09RangeEnd\x09\x09\x09The last index to retrieve entries for relative to eLeaderboardDataRequest.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Fetches a series of leaderboard entries for a specified leaderboard.\n\nYou can ask for more entries than exist, then this will return as many as do exist.\nIf you want to download entries for an arbitrary set of users, such as all of\nthe users on a server then you can use DownloadLeaderboardEntriesForUsers which takes an array of Steam IDs.\n\n@param        SteamLeaderboard        A leaderboard Handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n@param        DataRequest                     The type of data request to make.\n@param        RangeStart                      The index to start downloading entries relative to eLeaderboardDataRequest.\n@param        RangeEnd                        The last index to retrieve entries for relative to eLeaderboardDataRequest." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DataRequest_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DataRequest;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RangeStart;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RangeEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntries_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventDownloadLeaderboardEntries_Parms, Callback), Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadLeaderboardEntries__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 4208795409
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntries_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventDownloadLeaderboardEntries_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(0, nullptr) }; // 3003321657
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntries_Statics::NewProp_DataRequest_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntries_Statics::NewProp_DataRequest = { "DataRequest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventDownloadLeaderboardEntries_Parms, DataRequest), Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardDataRequest, METADATA_PARAMS(0, nullptr) }; // 3097442389
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntries_Statics::NewProp_RangeStart = { "RangeStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventDownloadLeaderboardEntries_Parms, RangeStart), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntries_Statics::NewProp_RangeEnd = { "RangeEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventDownloadLeaderboardEntries_Parms, RangeEnd), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntries_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntries_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntries_Statics::NewProp_SteamLeaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntries_Statics::NewProp_DataRequest_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntries_Statics::NewProp_DataRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntries_Statics::NewProp_RangeStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntries_Statics::NewProp_RangeEnd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntries_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "DownloadLeaderboardEntries", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntries_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntries_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntries_Statics::SteamProUserStats_eventDownloadLeaderboardEntries_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntries_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntries_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntries_Statics::SteamProUserStats_eventDownloadLeaderboardEntries_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntries()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntries_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execDownloadLeaderboardEntries)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FSteamLeaderboard,Z_Param_SteamLeaderboard);
	P_GET_ENUM(ESteamLeaderboardDataRequest,Z_Param_DataRequest);
	P_GET_PROPERTY(FIntProperty,Z_Param_RangeStart);
	P_GET_PROPERTY(FIntProperty,Z_Param_RangeEnd);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DownloadLeaderboardEntries(FOnDownloadLeaderboardEntries(Z_Param_Out_Callback),Z_Param_SteamLeaderboard,ESteamLeaderboardDataRequest(Z_Param_DataRequest),Z_Param_RangeStart,Z_Param_RangeEnd);
	P_NATIVE_END;
}
// End Class USteamProUserStats Function DownloadLeaderboardEntries

// Begin Class USteamProUserStats Function DownloadLeaderboardEntriesForUsers
struct Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntriesForUsers_Statics
{
	struct SteamProUserStats_eventDownloadLeaderboardEntriesForUsers_Parms
	{
		FScriptDelegate Callback;
		FSteamLeaderboard SteamLeaderboard;
		TArray<FSteamID> Users;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Fetches leaderboard entries for an arbitrary set of users on a specified leaderboard.\n\x09*\n\x09* A maximum of 100 users can be downloaded at a time, with only one outstanding call at a time. If a user doesn't have an entry on the specified leaderboard, they won't be included in the result.\n\x09* If you want to download entries based on their ranking or friends of the current user then you should use DownloadLeaderboardEntries.\n\x09* You must call FindLeaderboard or FindOrCreateLeaderboard to get a SteamLeaderboard_t prior to calling this function.\n\x09*\n\x09* @param\x09SteamLeaderboard\x09""A leaderboard Handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n\x09* @param\x09Users\x09\x09\x09\x09""An array of Steam IDs to get the leaderboard entries for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Fetches leaderboard entries for an arbitrary set of users on a specified leaderboard.\n\nA maximum of 100 users can be downloaded at a time, with only one outstanding call at a time. If a user doesn't have an entry on the specified leaderboard, they won't be included in the result.\nIf you want to download entries based on their ranking or friends of the current user then you should use DownloadLeaderboardEntries.\nYou must call FindLeaderboard or FindOrCreateLeaderboard to get a SteamLeaderboard_t prior to calling this function.\n\n@param        SteamLeaderboard        A leaderboard Handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n@param        Users                           An array of Steam IDs to get the leaderboard entries for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Users_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Users;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntriesForUsers_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventDownloadLeaderboardEntriesForUsers_Parms, Callback), Z_Construct_UDelegateFunction_SteamCorePro_OnDownloadLeaderboardEntriesForUsers__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 2233372764
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntriesForUsers_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventDownloadLeaderboardEntriesForUsers_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(0, nullptr) }; // 3003321657
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntriesForUsers_Statics::NewProp_Users_Inner = { "Users", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntriesForUsers_Statics::NewProp_Users = { "Users", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventDownloadLeaderboardEntriesForUsers_Parms, Users), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntriesForUsers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntriesForUsers_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntriesForUsers_Statics::NewProp_SteamLeaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntriesForUsers_Statics::NewProp_Users_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntriesForUsers_Statics::NewProp_Users,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntriesForUsers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntriesForUsers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "DownloadLeaderboardEntriesForUsers", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntriesForUsers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntriesForUsers_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntriesForUsers_Statics::SteamProUserStats_eventDownloadLeaderboardEntriesForUsers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntriesForUsers_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntriesForUsers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntriesForUsers_Statics::SteamProUserStats_eventDownloadLeaderboardEntriesForUsers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntriesForUsers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntriesForUsers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execDownloadLeaderboardEntriesForUsers)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FSteamLeaderboard,Z_Param_SteamLeaderboard);
	P_GET_TARRAY(FSteamID,Z_Param_Users);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DownloadLeaderboardEntriesForUsers(FOnDownloadLeaderboardEntriesForUsers(Z_Param_Out_Callback),Z_Param_SteamLeaderboard,Z_Param_Users);
	P_NATIVE_END;
}
// End Class USteamProUserStats Function DownloadLeaderboardEntriesForUsers

// Begin Class USteamProUserStats Function FindLeaderboard
struct Z_Construct_UFunction_USteamProUserStats_FindLeaderboard_Statics
{
	struct SteamProUserStats_eventFindLeaderboard_Parms
	{
		FScriptDelegate Callback;
		FString LeaderboardName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Gets a leaderboard by name.\n\x09*\n\x09* You must call either this or FindOrCreateLeaderboard to obtain the leaderboard Handle which is valid for the game session for\n\x09* each leaderboard you wish to access prior to calling any other Leaderboard functions.\n\x09*\n\x09* @param\x09LeaderboardName\x09\x09The name of the leaderboard to find. Must not be longer than k_cchLeaderboardNameMax.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Gets a leaderboard by name.\n\nYou must call either this or FindOrCreateLeaderboard to obtain the leaderboard Handle which is valid for the game session for\neach leaderboard you wish to access prior to calling any other Leaderboard functions.\n\n@param        LeaderboardName         The name of the leaderboard to find. Must not be longer than k_cchLeaderboardNameMax." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LeaderboardName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamProUserStats_FindLeaderboard_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventFindLeaderboard_Parms, Callback), Z_Construct_UDelegateFunction_SteamCorePro_OnFindLeaderboard__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 3463085434
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProUserStats_FindLeaderboard_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventFindLeaderboard_Parms, LeaderboardName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_FindLeaderboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_FindLeaderboard_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_FindLeaderboard_Statics::NewProp_LeaderboardName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_FindLeaderboard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_FindLeaderboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "FindLeaderboard", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_FindLeaderboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_FindLeaderboard_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_FindLeaderboard_Statics::SteamProUserStats_eventFindLeaderboard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_FindLeaderboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_FindLeaderboard_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_FindLeaderboard_Statics::SteamProUserStats_eventFindLeaderboard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_FindLeaderboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_FindLeaderboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execFindLeaderboard)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FindLeaderboard(FOnFindLeaderboard(Z_Param_Out_Callback),Z_Param_LeaderboardName);
	P_NATIVE_END;
}
// End Class USteamProUserStats Function FindLeaderboard

// Begin Class USteamProUserStats Function FindOrCreateLeaderboard
struct Z_Construct_UFunction_USteamProUserStats_FindOrCreateLeaderboard_Statics
{
	struct SteamProUserStats_eventFindOrCreateLeaderboard_Parms
	{
		FScriptDelegate Callback;
		FString LeaderboardName;
		ESteamLeaderboardSortMethod SortMethod;
		ESteamLeaderboardDisplayType DisplayType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Gets a leaderboard by name, it will create it if it's not yet created.\n\x09*\n\x09* You must call either this or FindLeaderboard to obtain the leaderboard Handle which is valid for the\n\x09* game session for each leaderboard you wish to access prior to calling any other Leaderboard functions.\n\x09* Leaderboards created with this function will not automatically show up in the Steam Community.\n\x09* You must manually set the Community Name field in the App Admin panel of the Steamworks website.\n\x09* As such it's generally recommended to prefer creating the leaderboards in the App Admin panel on the Steamworks\n\x09* website and using FindLeaderboard unless you're expected to have a large amount of dynamically created leaderboards.\n\x09* You should never pass k_ELeaderboardSortMethodNone for eLeaderboardSortMethod or k_ELeaderboardDisplayTypeNone\n\x09* for eLeaderboardDisplayType as this is undefined behavior.\n\x09*\n\x09* @param\x09LeaderboardName\x09\x09The name of the leaderboard to find or create. Must not be longer than k_cchLeaderboardNameMax.\n\x09* @param\x09SortMethod\x09\x09\x09The sort order of the new leaderboard if it's created.\n\x09* @param\x09""DisplayType\x09\x09\x09The display type (used by the Steam Community web site) of the new leaderboard if it's created.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Gets a leaderboard by name, it will create it if it's not yet created.\n\nYou must call either this or FindLeaderboard to obtain the leaderboard Handle which is valid for the\ngame session for each leaderboard you wish to access prior to calling any other Leaderboard functions.\nLeaderboards created with this function will not automatically show up in the Steam Community.\nYou must manually set the Community Name field in the App Admin panel of the Steamworks website.\nAs such it's generally recommended to prefer creating the leaderboards in the App Admin panel on the Steamworks\nwebsite and using FindLeaderboard unless you're expected to have a large amount of dynamically created leaderboards.\nYou should never pass k_ELeaderboardSortMethodNone for eLeaderboardSortMethod or k_ELeaderboardDisplayTypeNone\nfor eLeaderboardDisplayType as this is undefined behavior.\n\n@param        LeaderboardName         The name of the leaderboard to find or create. Must not be longer than k_cchLeaderboardNameMax.\n@param        SortMethod                      The sort order of the new leaderboard if it's created.\n@param        DisplayType                     The display type (used by the Steam Community web site) of the new leaderboard if it's created." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LeaderboardName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SortMethod;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DisplayType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DisplayType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamProUserStats_FindOrCreateLeaderboard_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventFindOrCreateLeaderboard_Parms, Callback), Z_Construct_UDelegateFunction_SteamCorePro_OnFindOrCreateLeaderboard__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 4125614114
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProUserStats_FindOrCreateLeaderboard_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventFindOrCreateLeaderboard_Parms, LeaderboardName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProUserStats_FindOrCreateLeaderboard_Statics::NewProp_SortMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProUserStats_FindOrCreateLeaderboard_Statics::NewProp_SortMethod = { "SortMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventFindOrCreateLeaderboard_Parms, SortMethod), Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardSortMethod, METADATA_PARAMS(0, nullptr) }; // 1733143043
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProUserStats_FindOrCreateLeaderboard_Statics::NewProp_DisplayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProUserStats_FindOrCreateLeaderboard_Statics::NewProp_DisplayType = { "DisplayType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventFindOrCreateLeaderboard_Parms, DisplayType), Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardDisplayType, METADATA_PARAMS(0, nullptr) }; // 2353612195
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_FindOrCreateLeaderboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_FindOrCreateLeaderboard_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_FindOrCreateLeaderboard_Statics::NewProp_LeaderboardName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_FindOrCreateLeaderboard_Statics::NewProp_SortMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_FindOrCreateLeaderboard_Statics::NewProp_SortMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_FindOrCreateLeaderboard_Statics::NewProp_DisplayType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_FindOrCreateLeaderboard_Statics::NewProp_DisplayType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_FindOrCreateLeaderboard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_FindOrCreateLeaderboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "FindOrCreateLeaderboard", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_FindOrCreateLeaderboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_FindOrCreateLeaderboard_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_FindOrCreateLeaderboard_Statics::SteamProUserStats_eventFindOrCreateLeaderboard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_FindOrCreateLeaderboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_FindOrCreateLeaderboard_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_FindOrCreateLeaderboard_Statics::SteamProUserStats_eventFindOrCreateLeaderboard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_FindOrCreateLeaderboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_FindOrCreateLeaderboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execFindOrCreateLeaderboard)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardName);
	P_GET_ENUM(ESteamLeaderboardSortMethod,Z_Param_SortMethod);
	P_GET_ENUM(ESteamLeaderboardDisplayType,Z_Param_DisplayType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FindOrCreateLeaderboard(FOnFindOrCreateLeaderboard(Z_Param_Out_Callback),Z_Param_LeaderboardName,ESteamLeaderboardSortMethod(Z_Param_SortMethod),ESteamLeaderboardDisplayType(Z_Param_DisplayType));
	P_NATIVE_END;
}
// End Class USteamProUserStats Function FindOrCreateLeaderboard

// Begin Class USteamProUserStats Function GetAchievement
struct Z_Construct_UFunction_USteamProUserStats_GetAchievement_Statics
{
	struct SteamProUserStats_eventGetAchievement_Parms
	{
		FString Name;
		bool bAchieved;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Gets the unlock status of the Achievement.\n\x09*\n\x09* The equivalent function for other users is GetUserAchievement.\n\x09*\n\x09* @param\x09Name\x09\x09The 'API Name' of the achievement.\n\x09* @param\x09""bAchieved\x09Returns the unlock status of the achievement.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Gets the unlock status of the Achievement.\n\nThe equivalent function for other users is GetUserAchievement.\n\n@param        Name            The 'API Name' of the achievement.\n@param        bAchieved       Returns the unlock status of the achievement." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_bAchieved_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProUserStats_GetAchievement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetAchievement_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProUserStats_GetAchievement_Statics::NewProp_bAchieved_SetBit(void* Obj)
{
	((SteamProUserStats_eventGetAchievement_Parms*)Obj)->bAchieved = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUserStats_GetAchievement_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUserStats_eventGetAchievement_Parms), &Z_Construct_UFunction_USteamProUserStats_GetAchievement_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProUserStats_GetAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUserStats_eventGetAchievement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUserStats_GetAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUserStats_eventGetAchievement_Parms), &Z_Construct_UFunction_USteamProUserStats_GetAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_GetAchievement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetAchievement_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetAchievement_Statics::NewProp_bAchieved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetAchievement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetAchievement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_GetAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "GetAchievement", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_GetAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetAchievement_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_GetAchievement_Statics::SteamProUserStats_eventGetAchievement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetAchievement_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_GetAchievement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_GetAchievement_Statics::SteamProUserStats_eventGetAchievement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_GetAchievement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_GetAchievement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execGetAchievement)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_UBOOL_REF(Z_Param_Out_bAchieved);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUserStats::GetAchievement(Z_Param_Name,Z_Param_Out_bAchieved);
	P_NATIVE_END;
}
// End Class USteamProUserStats Function GetAchievement

// Begin Class USteamProUserStats Function GetAchievementAchievedPercent
struct Z_Construct_UFunction_USteamProUserStats_GetAchievementAchievedPercent_Statics
{
	struct SteamProUserStats_eventGetAchievementAchievedPercent_Parms
	{
		FString Name;
		float Percent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Returns the percentage of users who have unlocked the specified achievement.\n\x09*\n\x09* You must have called RequestGlobalAchievementPercentages and it needs to return successfully via its Callback prior to calling this.\n\x09*\n\x09* @param\x09Name\x09\x09The 'API Name' of the achievement.\n\x09* @param\x09Percent\x09\x09Variable to return the percentage of people that have unlocked this achievement from 0 to 100.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Returns the percentage of users who have unlocked the specified achievement.\n\nYou must have called RequestGlobalAchievementPercentages and it needs to return successfully via its Callback prior to calling this.\n\n@param        Name            The 'API Name' of the achievement.\n@param        Percent         Variable to return the percentage of people that have unlocked this achievement from 0 to 100." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Percent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProUserStats_GetAchievementAchievedPercent_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetAchievementAchievedPercent_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamProUserStats_GetAchievementAchievedPercent_Statics::NewProp_Percent = { "Percent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetAchievementAchievedPercent_Parms, Percent), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProUserStats_GetAchievementAchievedPercent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUserStats_eventGetAchievementAchievedPercent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUserStats_GetAchievementAchievedPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUserStats_eventGetAchievementAchievedPercent_Parms), &Z_Construct_UFunction_USteamProUserStats_GetAchievementAchievedPercent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_GetAchievementAchievedPercent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetAchievementAchievedPercent_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetAchievementAchievedPercent_Statics::NewProp_Percent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetAchievementAchievedPercent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetAchievementAchievedPercent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_GetAchievementAchievedPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "GetAchievementAchievedPercent", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_GetAchievementAchievedPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetAchievementAchievedPercent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_GetAchievementAchievedPercent_Statics::SteamProUserStats_eventGetAchievementAchievedPercent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetAchievementAchievedPercent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_GetAchievementAchievedPercent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_GetAchievementAchievedPercent_Statics::SteamProUserStats_eventGetAchievementAchievedPercent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_GetAchievementAchievedPercent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_GetAchievementAchievedPercent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execGetAchievementAchievedPercent)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Percent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUserStats::GetAchievementAchievedPercent(Z_Param_Name,Z_Param_Out_Percent);
	P_NATIVE_END;
}
// End Class USteamProUserStats Function GetAchievementAchievedPercent

// Begin Class USteamProUserStats Function GetAchievementAndUnlockTime
struct Z_Construct_UFunction_USteamProUserStats_GetAchievementAndUnlockTime_Statics
{
	struct SteamProUserStats_eventGetAchievementAndUnlockTime_Parms
	{
		FString Name;
		bool bAchieved;
		int32 UnlockTime;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Gets the achievement status, and the time it was unlocked if unlocked.\n\x09*\n\x09* If the return value is true, but the unlock time is zero, that means it was unlocked before Steam began tracking achievement unlock times (December 2009). The time is provided in Unix epoch format, seconds since January 1, 1970 UTC.\n\x09* The equivalent function for other users is GetUserAchievementAndUnlockTime.\n\x09*\n\x09* @param\x09Name\x09\x09The 'API Name' of the achievement.\n\x09* @param\x09""bAchieved\x09Returns whether the current user has unlocked the achievement.\n\x09* @param\x09UnlockTime\x09Returns the time that the unchievement was unlocked; if pbAchieved is true.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Gets the achievement status, and the time it was unlocked if unlocked.\n\nIf the return value is true, but the unlock time is zero, that means it was unlocked before Steam began tracking achievement unlock times (December 2009). The time is provided in Unix epoch format, seconds since January 1, 1970 UTC.\nThe equivalent function for other users is GetUserAchievementAndUnlockTime.\n\n@param        Name            The 'API Name' of the achievement.\n@param        bAchieved       Returns whether the current user has unlocked the achievement.\n@param        UnlockTime      Returns the time that the unchievement was unlocked; if pbAchieved is true." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_bAchieved_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UnlockTime;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProUserStats_GetAchievementAndUnlockTime_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetAchievementAndUnlockTime_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProUserStats_GetAchievementAndUnlockTime_Statics::NewProp_bAchieved_SetBit(void* Obj)
{
	((SteamProUserStats_eventGetAchievementAndUnlockTime_Parms*)Obj)->bAchieved = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUserStats_GetAchievementAndUnlockTime_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUserStats_eventGetAchievementAndUnlockTime_Parms), &Z_Construct_UFunction_USteamProUserStats_GetAchievementAndUnlockTime_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUserStats_GetAchievementAndUnlockTime_Statics::NewProp_UnlockTime = { "UnlockTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetAchievementAndUnlockTime_Parms, UnlockTime), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProUserStats_GetAchievementAndUnlockTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUserStats_eventGetAchievementAndUnlockTime_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUserStats_GetAchievementAndUnlockTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUserStats_eventGetAchievementAndUnlockTime_Parms), &Z_Construct_UFunction_USteamProUserStats_GetAchievementAndUnlockTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_GetAchievementAndUnlockTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetAchievementAndUnlockTime_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetAchievementAndUnlockTime_Statics::NewProp_bAchieved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetAchievementAndUnlockTime_Statics::NewProp_UnlockTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetAchievementAndUnlockTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetAchievementAndUnlockTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_GetAchievementAndUnlockTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "GetAchievementAndUnlockTime", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_GetAchievementAndUnlockTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetAchievementAndUnlockTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_GetAchievementAndUnlockTime_Statics::SteamProUserStats_eventGetAchievementAndUnlockTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetAchievementAndUnlockTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_GetAchievementAndUnlockTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_GetAchievementAndUnlockTime_Statics::SteamProUserStats_eventGetAchievementAndUnlockTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_GetAchievementAndUnlockTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_GetAchievementAndUnlockTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execGetAchievementAndUnlockTime)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_UBOOL_REF(Z_Param_Out_bAchieved);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_UnlockTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUserStats::GetAchievementAndUnlockTime(Z_Param_Name,Z_Param_Out_bAchieved,Z_Param_Out_UnlockTime);
	P_NATIVE_END;
}
// End Class USteamProUserStats Function GetAchievementAndUnlockTime

// Begin Class USteamProUserStats Function GetAchievementDisplayAttribute
struct Z_Construct_UFunction_USteamProUserStats_GetAchievementDisplayAttribute_Statics
{
	struct SteamProUserStats_eventGetAchievementDisplayAttribute_Parms
	{
		FString Name;
		FString Key;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Get general attributes for an achievement. Currently provides: Name, Description, and Hidden status.\n\x09*\n\x09* This receives the value from a dictionary/map keyvalue store, so you must provide one of the following keys.\n\x09*\n\x09* This localization is provided based on the games language if it's set, otherwise it checks if a localization is avilable for the users Steam UI Language. If that fails too, then it falls back to english.\n\x09*\n\x09* @param\x09Name\x09\x09The 'API Name' of the achievement.\n\x09* @param\x09Key\x09\x09\x09The 'key' to get a value for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Get general attributes for an achievement. Currently provides: Name, Description, and Hidden status.\n\nThis receives the value from a dictionary/map keyvalue store, so you must provide one of the following keys.\n\nThis localization is provided based on the games language if it's set, otherwise it checks if a localization is avilable for the users Steam UI Language. If that fails too, then it falls back to english.\n\n@param        Name            The 'API Name' of the achievement.\n@param        Key                     The 'key' to get a value for." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProUserStats_GetAchievementDisplayAttribute_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetAchievementDisplayAttribute_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProUserStats_GetAchievementDisplayAttribute_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetAchievementDisplayAttribute_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProUserStats_GetAchievementDisplayAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetAchievementDisplayAttribute_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_GetAchievementDisplayAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetAchievementDisplayAttribute_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetAchievementDisplayAttribute_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetAchievementDisplayAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetAchievementDisplayAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_GetAchievementDisplayAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "GetAchievementDisplayAttribute", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_GetAchievementDisplayAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetAchievementDisplayAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_GetAchievementDisplayAttribute_Statics::SteamProUserStats_eventGetAchievementDisplayAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetAchievementDisplayAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_GetAchievementDisplayAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_GetAchievementDisplayAttribute_Statics::SteamProUserStats_eventGetAchievementDisplayAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_GetAchievementDisplayAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_GetAchievementDisplayAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execGetAchievementDisplayAttribute)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamProUserStats::GetAchievementDisplayAttribute(Z_Param_Name,Z_Param_Key);
	P_NATIVE_END;
}
// End Class USteamProUserStats Function GetAchievementDisplayAttribute

// Begin Class USteamProUserStats Function GetAchievementIcon
struct Z_Construct_UFunction_USteamProUserStats_GetAchievementIcon_Statics
{
	struct SteamProUserStats_eventGetAchievementIcon_Parms
	{
		FString Name;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Gets the icon for an achievement.\n\x09*\n\x09* @param\x09Name\x09The 'API Name' of the achievement.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Gets the icon for an achievement.\n\n@param        Name    The 'API Name' of the achievement." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProUserStats_GetAchievementIcon_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetAchievementIcon_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamProUserStats_GetAchievementIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetAchievementIcon_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_GetAchievementIcon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetAchievementIcon_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetAchievementIcon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetAchievementIcon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_GetAchievementIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "GetAchievementIcon", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_GetAchievementIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetAchievementIcon_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_GetAchievementIcon_Statics::SteamProUserStats_eventGetAchievementIcon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetAchievementIcon_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_GetAchievementIcon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_GetAchievementIcon_Statics::SteamProUserStats_eventGetAchievementIcon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_GetAchievementIcon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_GetAchievementIcon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execGetAchievementIcon)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=USteamProUserStats::GetAchievementIcon(Z_Param_Name);
	P_NATIVE_END;
}
// End Class USteamProUserStats Function GetAchievementIcon

// Begin Class USteamProUserStats Function GetAchievementName
struct Z_Construct_UFunction_USteamProUserStats_GetAchievementName_Statics
{
	struct SteamProUserStats_eventGetAchievementName_Parms
	{
		int32 Achievement;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Gets the 'API name' for an achievement index between 0 and GetNumAchievements.\n\x09*\n\x09* This function must be used in cojunction with GetNumAchievements to loop over the list of achievements.\n\x09* In general games should not need these functions as they should have the list of achievements compiled into them.\n\x09*\n\x09* @param\x09""Achievement\x09\x09\x09index of the achievement.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Gets the 'API name' for an achievement index between 0 and GetNumAchievements.\n\nThis function must be used in cojunction with GetNumAchievements to loop over the list of achievements.\nIn general games should not need these functions as they should have the list of achievements compiled into them.\n\n@param        Achievement                     index of the achievement." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Achievement;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUserStats_GetAchievementName_Statics::NewProp_Achievement = { "Achievement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetAchievementName_Parms, Achievement), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProUserStats_GetAchievementName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetAchievementName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_GetAchievementName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetAchievementName_Statics::NewProp_Achievement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetAchievementName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetAchievementName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_GetAchievementName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "GetAchievementName", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_GetAchievementName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetAchievementName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_GetAchievementName_Statics::SteamProUserStats_eventGetAchievementName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetAchievementName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_GetAchievementName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_GetAchievementName_Statics::SteamProUserStats_eventGetAchievementName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_GetAchievementName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_GetAchievementName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execGetAchievementName)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Achievement);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamProUserStats::GetAchievementName(Z_Param_Achievement);
	P_NATIVE_END;
}
// End Class USteamProUserStats Function GetAchievementName

// Begin Class USteamProUserStats Function GetAchievementProgressLimits
struct Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimits_Statics
{
	struct SteamProUserStats_eventGetAchievementProgressLimits_Parms
	{
		FString Name;
		int32 MinProgress;
		int32 MaxProgress;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* For achievements that have related Progress stats, use this to query what the bounds of that progress are.\n\x09* You may want this info to selectively call IndicateAchievementProgress when appropriate milestones of progress\n\x09* have been made, to show a progress notification to the user.\n\x09*\n\x09* Notes: Only available in UE4.27+\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "For achievements that have related Progress stats, use this to query what the bounds of that progress are.\nYou may want this info to selectively call IndicateAchievementProgress when appropriate milestones of progress\nhave been made, to show a progress notification to the user.\n\nNotes: Only available in UE4.27+" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinProgress;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxProgress;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimits_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetAchievementProgressLimits_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimits_Statics::NewProp_MinProgress = { "MinProgress", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetAchievementProgressLimits_Parms, MinProgress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimits_Statics::NewProp_MaxProgress = { "MaxProgress", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetAchievementProgressLimits_Parms, MaxProgress), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimits_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUserStats_eventGetAchievementProgressLimits_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUserStats_eventGetAchievementProgressLimits_Parms), &Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimits_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimits_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimits_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimits_Statics::NewProp_MinProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimits_Statics::NewProp_MaxProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimits_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimits_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "GetAchievementProgressLimits", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimits_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimits_Statics::SteamProUserStats_eventGetAchievementProgressLimits_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimits_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimits_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimits_Statics::SteamProUserStats_eventGetAchievementProgressLimits_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimits()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimits_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execGetAchievementProgressLimits)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MinProgress);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MaxProgress);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUserStats::GetAchievementProgressLimits(Z_Param_Name,Z_Param_Out_MinProgress,Z_Param_Out_MaxProgress);
	P_NATIVE_END;
}
// End Class USteamProUserStats Function GetAchievementProgressLimits

// Begin Class USteamProUserStats Function GetAchievementProgressLimitsFloat
struct Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimitsFloat_Statics
{
	struct SteamProUserStats_eventGetAchievementProgressLimitsFloat_Parms
	{
		FString Name;
		float MinProgress;
		float MaxProgress;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* For achievements that have related Progress stats, use this to query what the bounds of that progress are.\n\x09* You may want this info to selectively call IndicateAchievementProgress when appropriate milestones of progress\n\x09* have been made, to show a progress notification to the user.\n\x09*\n\x09* Notes: Only available in UE4.27+\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "For achievements that have related Progress stats, use this to query what the bounds of that progress are.\nYou may want this info to selectively call IndicateAchievementProgress when appropriate milestones of progress\nhave been made, to show a progress notification to the user.\n\nNotes: Only available in UE4.27+" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinProgress;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxProgress;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimitsFloat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetAchievementProgressLimitsFloat_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimitsFloat_Statics::NewProp_MinProgress = { "MinProgress", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetAchievementProgressLimitsFloat_Parms, MinProgress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimitsFloat_Statics::NewProp_MaxProgress = { "MaxProgress", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetAchievementProgressLimitsFloat_Parms, MaxProgress), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimitsFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUserStats_eventGetAchievementProgressLimitsFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimitsFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUserStats_eventGetAchievementProgressLimitsFloat_Parms), &Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimitsFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimitsFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimitsFloat_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimitsFloat_Statics::NewProp_MinProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimitsFloat_Statics::NewProp_MaxProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimitsFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimitsFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimitsFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "GetAchievementProgressLimitsFloat", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimitsFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimitsFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimitsFloat_Statics::SteamProUserStats_eventGetAchievementProgressLimitsFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimitsFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimitsFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimitsFloat_Statics::SteamProUserStats_eventGetAchievementProgressLimitsFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimitsFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimitsFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execGetAchievementProgressLimitsFloat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_MinProgress);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_MaxProgress);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUserStats::GetAchievementProgressLimitsFloat(Z_Param_Name,Z_Param_Out_MinProgress,Z_Param_Out_MaxProgress);
	P_NATIVE_END;
}
// End Class USteamProUserStats Function GetAchievementProgressLimitsFloat

// Begin Class USteamProUserStats Function GetDownloadedLeaderboardEntry
struct Z_Construct_UFunction_USteamProUserStats_GetDownloadedLeaderboardEntry_Statics
{
	struct SteamProUserStats_eventGetDownloadedLeaderboardEntry_Parms
	{
		FSteamLeaderboardEntries LeaderboardEntries;
		int32 Index;
		FSteamLeaderboardEntry LeaderboardEntry;
		TArray<int32> Details;
		TArray<int32> outDetails;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Details" },
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Retrieves the data for a single leaderboard entry.\n\x09*\n\x09* You should use a for loop from 0 to LeaderboardScoresDownloaded_t.m_cEntryCount to get all the downloaded entries.\n\x09* Once you've accessed all the entries, the data will be freed, and the SteamLeaderboardEntries_t Handle will become invalid.\n\x09* Optionally details may be returned for the entry via the pDetails. If this is NULL then cDetailsMax MUST be 0.\n\x09*\n\x09* @param\x09LeaderboardEntries\x09\x09""A leaderboard entries Handle obtained from the most recently received LeaderboardScoresDownloaded_t call result.\n\x09* @param\x09Index\x09\x09\x09\x09\x09The index of the leaderboard entry to receive, must be between 0 and LeaderboardScoresDownloaded_t.m_cEntryCount.\n\x09* @param\x09LeaderboardEntry\x09\x09Variable where the entry will be returned to.\n\x09* @param\x09""Details\x09\x09\x09\x09\x09""A preallocated array where the details of this entry get returned into.\n\x09* @param outDetails\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Retrieves the data for a single leaderboard entry.\n\nYou should use a for loop from 0 to LeaderboardScoresDownloaded_t.m_cEntryCount to get all the downloaded entries.\nOnce you've accessed all the entries, the data will be freed, and the SteamLeaderboardEntries_t Handle will become invalid.\nOptionally details may be returned for the entry via the pDetails. If this is NULL then cDetailsMax MUST be 0.\n\n@param        LeaderboardEntries              A leaderboard entries Handle obtained from the most recently received LeaderboardScoresDownloaded_t call result.\n@param        Index                                   The index of the leaderboard entry to receive, must be between 0 and LeaderboardScoresDownloaded_t.m_cEntryCount.\n@param        LeaderboardEntry                Variable where the entry will be returned to.\n@param        Details                                 A preallocated array where the details of this entry get returned into.\n@param outDetails" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeaderboardEntries;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LeaderboardEntry;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Details_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Details;
	static const UECodeGen_Private::FIntPropertyParams NewProp_outDetails_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_outDetails;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_LeaderboardEntries = { "LeaderboardEntries", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetDownloadedLeaderboardEntry_Parms, LeaderboardEntries), Z_Construct_UScriptStruct_FSteamLeaderboardEntries, METADATA_PARAMS(0, nullptr) }; // 2142211046
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetDownloadedLeaderboardEntry_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_LeaderboardEntry = { "LeaderboardEntry", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetDownloadedLeaderboardEntry_Parms, LeaderboardEntry), Z_Construct_UScriptStruct_FSteamLeaderboardEntry, METADATA_PARAMS(0, nullptr) }; // 513065793
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_Details_Inner = { "Details", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_Details = { "Details", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetDownloadedLeaderboardEntry_Parms, Details), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_outDetails_Inner = { "outDetails", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_outDetails = { "outDetails", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetDownloadedLeaderboardEntry_Parms, outDetails), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUserStats_eventGetDownloadedLeaderboardEntry_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUserStats_eventGetDownloadedLeaderboardEntry_Parms), &Z_Construct_UFunction_USteamProUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_GetDownloadedLeaderboardEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_LeaderboardEntries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_LeaderboardEntry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_Details_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_Details,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_outDetails_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_outDetails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetDownloadedLeaderboardEntry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetDownloadedLeaderboardEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_GetDownloadedLeaderboardEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "GetDownloadedLeaderboardEntry", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_GetDownloadedLeaderboardEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetDownloadedLeaderboardEntry_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_GetDownloadedLeaderboardEntry_Statics::SteamProUserStats_eventGetDownloadedLeaderboardEntry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetDownloadedLeaderboardEntry_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_GetDownloadedLeaderboardEntry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_GetDownloadedLeaderboardEntry_Statics::SteamProUserStats_eventGetDownloadedLeaderboardEntry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_GetDownloadedLeaderboardEntry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_GetDownloadedLeaderboardEntry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execGetDownloadedLeaderboardEntry)
{
	P_GET_STRUCT(FSteamLeaderboardEntries,Z_Param_LeaderboardEntries);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT_REF(FSteamLeaderboardEntry,Z_Param_Out_LeaderboardEntry);
	P_GET_TARRAY(int32,Z_Param_Details);
	P_GET_TARRAY_REF(int32,Z_Param_Out_outDetails);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUserStats::GetDownloadedLeaderboardEntry(Z_Param_LeaderboardEntries,Z_Param_Index,Z_Param_Out_LeaderboardEntry,Z_Param_Details,Z_Param_Out_outDetails);
	P_NATIVE_END;
}
// End Class USteamProUserStats Function GetDownloadedLeaderboardEntry

// Begin Class USteamProUserStats Function GetGlobalStatFloat
struct Z_Construct_UFunction_USteamProUserStats_GetGlobalStatFloat_Statics
{
	struct SteamProUserStats_eventGetGlobalStatFloat_Parms
	{
		FString StatName;
		float Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Gets the lifetime totals for an aggregated stat.\n\x09*\n\x09* You must have called RequestGlobalStats and it needs to return successfully via its Callback prior to calling this.\n\x09*\n\x09* @param\x09StatName\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09* @param\x09""Data\x09\x09The variable to return the stat value into.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Gets the lifetime totals for an aggregated stat.\n\nYou must have called RequestGlobalStats and it needs to return successfully via its Callback prior to calling this.\n\n@param        StatName        The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param        Data            The variable to return the stat value into." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProUserStats_GetGlobalStatFloat_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetGlobalStatFloat_Parms, StatName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamProUserStats_GetGlobalStatFloat_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetGlobalStatFloat_Parms, Data), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProUserStats_GetGlobalStatFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUserStats_eventGetGlobalStatFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUserStats_GetGlobalStatFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUserStats_eventGetGlobalStatFloat_Parms), &Z_Construct_UFunction_USteamProUserStats_GetGlobalStatFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_GetGlobalStatFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetGlobalStatFloat_Statics::NewProp_StatName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetGlobalStatFloat_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetGlobalStatFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetGlobalStatFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_GetGlobalStatFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "GetGlobalStatFloat", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_GetGlobalStatFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetGlobalStatFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_GetGlobalStatFloat_Statics::SteamProUserStats_eventGetGlobalStatFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetGlobalStatFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_GetGlobalStatFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_GetGlobalStatFloat_Statics::SteamProUserStats_eventGetGlobalStatFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_GetGlobalStatFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_GetGlobalStatFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execGetGlobalStatFloat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_StatName);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUserStats::GetGlobalStatFloat(Z_Param_StatName,Z_Param_Out_Data);
	P_NATIVE_END;
}
// End Class USteamProUserStats Function GetGlobalStatFloat

// Begin Class USteamProUserStats Function GetGlobalStatHistoryFloat
struct Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryFloat_Statics
{
	struct SteamProUserStats_eventGetGlobalStatHistoryFloat_Parms
	{
		FString StatName;
		int32 HistoryDays;
		TArray<float> Data;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Gets the daily history for an aggregated stat.\n\x09*\n\x09* pData will be filled with daily values, starting with today.\n\x09* So when called, pData[0] will be today, pData[1] will be yesterday, and pData[2] will be two days ago, etc.\n\x09* You must have called RequestGlobalStats and it needs to return successfully via its Callback prior to calling this.\n\x09*\n\x09* @param\x09StatName\x09\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09* @param\x09HistoryDays\x09\x09The total size in bytes of the pData array.\n\x09* @param\x09""Data\x09\x09\x09""Array that the daily history will be returned into.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Gets the daily history for an aggregated stat.\n\npData will be filled with daily values, starting with today.\nSo when called, pData[0] will be today, pData[1] will be yesterday, and pData[2] will be two days ago, etc.\nYou must have called RequestGlobalStats and it needs to return successfully via its Callback prior to calling this.\n\n@param        StatName                The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param        HistoryDays             The total size in bytes of the pData array.\n@param        Data                    Array that the daily history will be returned into." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HistoryDays;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetGlobalStatHistoryFloat_Parms, StatName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_HistoryDays = { "HistoryDays", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetGlobalStatHistoryFloat_Parms, HistoryDays), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetGlobalStatHistoryFloat_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetGlobalStatHistoryFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_StatName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_HistoryDays,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "GetGlobalStatHistoryFloat", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryFloat_Statics::SteamProUserStats_eventGetGlobalStatHistoryFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryFloat_Statics::SteamProUserStats_eventGetGlobalStatHistoryFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execGetGlobalStatHistoryFloat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_StatName);
	P_GET_PROPERTY(FIntProperty,Z_Param_HistoryDays);
	P_GET_TARRAY_REF(float,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProUserStats::GetGlobalStatHistoryFloat(Z_Param_StatName,Z_Param_HistoryDays,Z_Param_Out_Data);
	P_NATIVE_END;
}
// End Class USteamProUserStats Function GetGlobalStatHistoryFloat

// Begin Class USteamProUserStats Function GetGlobalStatHistoryInt
struct Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryInt_Statics
{
	struct SteamProUserStats_eventGetGlobalStatHistoryInt_Parms
	{
		FString StatName;
		int32 HistoryDays;
		TArray<int32> Data;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Gets the daily history for an aggregated stat.\n\x09*\n\x09* pData will be filled with daily values, starting with today.\n\x09* So when called, pData[0] will be today, pData[1] will be yesterday, and pData[2] will be two days ago, etc.\n\x09* You must have called RequestGlobalStats and it needs to return successfully via its Callback prior to calling this.\n\x09*\n\x09* @param\x09StatName\x09\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09* @param\x09HistoryDays\x09\x09The total size in bytes of the pData array.\n\x09* @param\x09""Data\x09\x09\x09""Array that the daily history will be returned into.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Gets the daily history for an aggregated stat.\n\npData will be filled with daily values, starting with today.\nSo when called, pData[0] will be today, pData[1] will be yesterday, and pData[2] will be two days ago, etc.\nYou must have called RequestGlobalStats and it needs to return successfully via its Callback prior to calling this.\n\n@param        StatName                The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param        HistoryDays             The total size in bytes of the pData array.\n@param        Data                    Array that the daily history will be returned into." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HistoryDays;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryInt_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetGlobalStatHistoryInt_Parms, StatName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryInt_Statics::NewProp_HistoryDays = { "HistoryDays", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetGlobalStatHistoryInt_Parms, HistoryDays), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryInt_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryInt_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetGlobalStatHistoryInt_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetGlobalStatHistoryInt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryInt_Statics::NewProp_StatName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryInt_Statics::NewProp_HistoryDays,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryInt_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryInt_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "GetGlobalStatHistoryInt", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryInt_Statics::SteamProUserStats_eventGetGlobalStatHistoryInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryInt_Statics::SteamProUserStats_eventGetGlobalStatHistoryInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execGetGlobalStatHistoryInt)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_StatName);
	P_GET_PROPERTY(FIntProperty,Z_Param_HistoryDays);
	P_GET_TARRAY_REF(int32,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProUserStats::GetGlobalStatHistoryInt(Z_Param_StatName,Z_Param_HistoryDays,Z_Param_Out_Data);
	P_NATIVE_END;
}
// End Class USteamProUserStats Function GetGlobalStatHistoryInt

// Begin Class USteamProUserStats Function GetGlobalStatInt
struct Z_Construct_UFunction_USteamProUserStats_GetGlobalStatInt_Statics
{
	struct SteamProUserStats_eventGetGlobalStatInt_Parms
	{
		FString StatName;
		int32 Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Gets the lifetime totals for an aggregated stat.\n\x09*\n\x09* You must have called RequestGlobalStats and it needs to return successfully via its Callback prior to calling this.\n\x09*\n\x09* @param\x09StatName\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09* @param\x09""Data\x09\x09The variable to return the stat value into.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Gets the lifetime totals for an aggregated stat.\n\nYou must have called RequestGlobalStats and it needs to return successfully via its Callback prior to calling this.\n\n@param        StatName        The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param        Data            The variable to return the stat value into." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_StatName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProUserStats_GetGlobalStatInt_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetGlobalStatInt_Parms, StatName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUserStats_GetGlobalStatInt_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetGlobalStatInt_Parms, Data), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProUserStats_GetGlobalStatInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUserStats_eventGetGlobalStatInt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUserStats_GetGlobalStatInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUserStats_eventGetGlobalStatInt_Parms), &Z_Construct_UFunction_USteamProUserStats_GetGlobalStatInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_GetGlobalStatInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetGlobalStatInt_Statics::NewProp_StatName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetGlobalStatInt_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetGlobalStatInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetGlobalStatInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_GetGlobalStatInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "GetGlobalStatInt", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_GetGlobalStatInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetGlobalStatInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_GetGlobalStatInt_Statics::SteamProUserStats_eventGetGlobalStatInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetGlobalStatInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_GetGlobalStatInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_GetGlobalStatInt_Statics::SteamProUserStats_eventGetGlobalStatInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_GetGlobalStatInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_GetGlobalStatInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execGetGlobalStatInt)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_StatName);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUserStats::GetGlobalStatInt(Z_Param_StatName,Z_Param_Out_Data);
	P_NATIVE_END;
}
// End Class USteamProUserStats Function GetGlobalStatInt

// Begin Class USteamProUserStats Function GetLeaderboardDisplayType
struct Z_Construct_UFunction_USteamProUserStats_GetLeaderboardDisplayType_Statics
{
	struct SteamProUserStats_eventGetLeaderboardDisplayType_Parms
	{
		FSteamLeaderboard SteamLeaderboard;
		ESteamLeaderboardDisplayType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Returns the display type of a leaderboard Handle.\n\x09*\n\x09* @param\x09SteamLeaderboard\x09""A leaderboard Handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Returns the display type of a leaderboard Handle.\n\n@param        SteamLeaderboard        A leaderboard Handle obtained from FindLeaderboard or FindOrCreateLeaderboard." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProUserStats_GetLeaderboardDisplayType_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetLeaderboardDisplayType_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(0, nullptr) }; // 3003321657
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProUserStats_GetLeaderboardDisplayType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProUserStats_GetLeaderboardDisplayType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetLeaderboardDisplayType_Parms, ReturnValue), Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardDisplayType, METADATA_PARAMS(0, nullptr) }; // 2353612195
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_GetLeaderboardDisplayType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetLeaderboardDisplayType_Statics::NewProp_SteamLeaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetLeaderboardDisplayType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetLeaderboardDisplayType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetLeaderboardDisplayType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_GetLeaderboardDisplayType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "GetLeaderboardDisplayType", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_GetLeaderboardDisplayType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetLeaderboardDisplayType_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_GetLeaderboardDisplayType_Statics::SteamProUserStats_eventGetLeaderboardDisplayType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetLeaderboardDisplayType_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_GetLeaderboardDisplayType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_GetLeaderboardDisplayType_Statics::SteamProUserStats_eventGetLeaderboardDisplayType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_GetLeaderboardDisplayType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_GetLeaderboardDisplayType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execGetLeaderboardDisplayType)
{
	P_GET_STRUCT(FSteamLeaderboard,Z_Param_SteamLeaderboard);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamLeaderboardDisplayType*)Z_Param__Result=USteamProUserStats::GetLeaderboardDisplayType(Z_Param_SteamLeaderboard);
	P_NATIVE_END;
}
// End Class USteamProUserStats Function GetLeaderboardDisplayType

// Begin Class USteamProUserStats Function GetLeaderboardEntryCount
struct Z_Construct_UFunction_USteamProUserStats_GetLeaderboardEntryCount_Statics
{
	struct SteamProUserStats_eventGetLeaderboardEntryCount_Parms
	{
		FSteamLeaderboard SteamLeaderboard;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Returns the total number of entries in a leaderboard.\n\x09*\n\x09* @param\x09SteamLeaderboard\x09""A leaderboard Handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Returns the total number of entries in a leaderboard.\n\n@param        SteamLeaderboard        A leaderboard Handle obtained from FindLeaderboard or FindOrCreateLeaderboard." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProUserStats_GetLeaderboardEntryCount_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetLeaderboardEntryCount_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(0, nullptr) }; // 3003321657
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUserStats_GetLeaderboardEntryCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetLeaderboardEntryCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_GetLeaderboardEntryCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetLeaderboardEntryCount_Statics::NewProp_SteamLeaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetLeaderboardEntryCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetLeaderboardEntryCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_GetLeaderboardEntryCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "GetLeaderboardEntryCount", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_GetLeaderboardEntryCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetLeaderboardEntryCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_GetLeaderboardEntryCount_Statics::SteamProUserStats_eventGetLeaderboardEntryCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetLeaderboardEntryCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_GetLeaderboardEntryCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_GetLeaderboardEntryCount_Statics::SteamProUserStats_eventGetLeaderboardEntryCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_GetLeaderboardEntryCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_GetLeaderboardEntryCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execGetLeaderboardEntryCount)
{
	P_GET_STRUCT(FSteamLeaderboard,Z_Param_SteamLeaderboard);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProUserStats::GetLeaderboardEntryCount(Z_Param_SteamLeaderboard);
	P_NATIVE_END;
}
// End Class USteamProUserStats Function GetLeaderboardEntryCount

// Begin Class USteamProUserStats Function GetLeaderboardName
struct Z_Construct_UFunction_USteamProUserStats_GetLeaderboardName_Statics
{
	struct SteamProUserStats_eventGetLeaderboardName_Parms
	{
		FSteamLeaderboard SteamLeaderboard;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Returns the name of a leaderboard Handle.\n\x09*\n\x09* @param\x09SteamLeaderboard\x09""A leaderboard Handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Returns the name of a leaderboard Handle.\n\n@param        SteamLeaderboard        A leaderboard Handle obtained from FindLeaderboard or FindOrCreateLeaderboard." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProUserStats_GetLeaderboardName_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetLeaderboardName_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(0, nullptr) }; // 3003321657
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProUserStats_GetLeaderboardName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetLeaderboardName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_GetLeaderboardName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetLeaderboardName_Statics::NewProp_SteamLeaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetLeaderboardName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetLeaderboardName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_GetLeaderboardName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "GetLeaderboardName", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_GetLeaderboardName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetLeaderboardName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_GetLeaderboardName_Statics::SteamProUserStats_eventGetLeaderboardName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetLeaderboardName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_GetLeaderboardName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_GetLeaderboardName_Statics::SteamProUserStats_eventGetLeaderboardName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_GetLeaderboardName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_GetLeaderboardName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execGetLeaderboardName)
{
	P_GET_STRUCT(FSteamLeaderboard,Z_Param_SteamLeaderboard);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USteamProUserStats::GetLeaderboardName(Z_Param_SteamLeaderboard);
	P_NATIVE_END;
}
// End Class USteamProUserStats Function GetLeaderboardName

// Begin Class USteamProUserStats Function GetLeaderboardSortMethod
struct Z_Construct_UFunction_USteamProUserStats_GetLeaderboardSortMethod_Statics
{
	struct SteamProUserStats_eventGetLeaderboardSortMethod_Parms
	{
		FSteamLeaderboard SteamLeaderboard;
		ESteamLeaderboardSortMethod ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Returns the sort order of a leaderboard Handle.\n\x09*\n\x09* @param\x09SteamLeaderboard\x09""A leaderboard Handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Returns the sort order of a leaderboard Handle.\n\n@param        SteamLeaderboard        A leaderboard Handle obtained from FindLeaderboard or FindOrCreateLeaderboard." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProUserStats_GetLeaderboardSortMethod_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetLeaderboardSortMethod_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(0, nullptr) }; // 3003321657
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProUserStats_GetLeaderboardSortMethod_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProUserStats_GetLeaderboardSortMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetLeaderboardSortMethod_Parms, ReturnValue), Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardSortMethod, METADATA_PARAMS(0, nullptr) }; // 1733143043
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_GetLeaderboardSortMethod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetLeaderboardSortMethod_Statics::NewProp_SteamLeaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetLeaderboardSortMethod_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetLeaderboardSortMethod_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetLeaderboardSortMethod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_GetLeaderboardSortMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "GetLeaderboardSortMethod", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_GetLeaderboardSortMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetLeaderboardSortMethod_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_GetLeaderboardSortMethod_Statics::SteamProUserStats_eventGetLeaderboardSortMethod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetLeaderboardSortMethod_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_GetLeaderboardSortMethod_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_GetLeaderboardSortMethod_Statics::SteamProUserStats_eventGetLeaderboardSortMethod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_GetLeaderboardSortMethod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_GetLeaderboardSortMethod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execGetLeaderboardSortMethod)
{
	P_GET_STRUCT(FSteamLeaderboard,Z_Param_SteamLeaderboard);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESteamLeaderboardSortMethod*)Z_Param__Result=USteamProUserStats::GetLeaderboardSortMethod(Z_Param_SteamLeaderboard);
	P_NATIVE_END;
}
// End Class USteamProUserStats Function GetLeaderboardSortMethod

// Begin Class USteamProUserStats Function GetMostAchievedAchievementInfo
struct Z_Construct_UFunction_USteamProUserStats_GetMostAchievedAchievementInfo_Statics
{
	struct SteamProUserStats_eventGetMostAchievedAchievementInfo_Parms
	{
		FString Name;
		float Percent;
		bool bAchieved;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Gets the info on the most achieved achievement for the game.\n\x09*\n\x09* You must have called RequestGlobalAchievementPercentages and it needs to return successfully via its Callback prior to calling this.\n\x09*\n\x09* @param\x09Name\x09\x09\x09String buffer to return the 'API Name' of the achievement into.\n\x09* @param\x09Percent\x09\x09\x09Variable to return the percentage of people that have unlocked this achievement from 0 to 100.\n\x09* @param\x09""bAchieved\x09\x09Variable to return whether the current user has unlocked this achievement.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Gets the info on the most achieved achievement for the game.\n\nYou must have called RequestGlobalAchievementPercentages and it needs to return successfully via its Callback prior to calling this.\n\n@param        Name                    String buffer to return the 'API Name' of the achievement into.\n@param        Percent                 Variable to return the percentage of people that have unlocked this achievement from 0 to 100.\n@param        bAchieved               Variable to return whether the current user has unlocked this achievement." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Percent;
	static void NewProp_bAchieved_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetMostAchievedAchievementInfo_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamProUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_Percent = { "Percent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetMostAchievedAchievementInfo_Parms, Percent), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_bAchieved_SetBit(void* Obj)
{
	((SteamProUserStats_eventGetMostAchievedAchievementInfo_Parms*)Obj)->bAchieved = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUserStats_eventGetMostAchievedAchievementInfo_Parms), &Z_Construct_UFunction_USteamProUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetMostAchievedAchievementInfo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_GetMostAchievedAchievementInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_Percent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_bAchieved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetMostAchievedAchievementInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetMostAchievedAchievementInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_GetMostAchievedAchievementInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "GetMostAchievedAchievementInfo", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_GetMostAchievedAchievementInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetMostAchievedAchievementInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_GetMostAchievedAchievementInfo_Statics::SteamProUserStats_eventGetMostAchievedAchievementInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetMostAchievedAchievementInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_GetMostAchievedAchievementInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_GetMostAchievedAchievementInfo_Statics::SteamProUserStats_eventGetMostAchievedAchievementInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_GetMostAchievedAchievementInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_GetMostAchievedAchievementInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execGetMostAchievedAchievementInfo)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Name);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Percent);
	P_GET_UBOOL_REF(Z_Param_Out_bAchieved);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProUserStats::GetMostAchievedAchievementInfo(Z_Param_Out_Name,Z_Param_Out_Percent,Z_Param_Out_bAchieved);
	P_NATIVE_END;
}
// End Class USteamProUserStats Function GetMostAchievedAchievementInfo

// Begin Class USteamProUserStats Function GetNextMostAchievedAchievementInfo
struct Z_Construct_UFunction_USteamProUserStats_GetNextMostAchievedAchievementInfo_Statics
{
	struct SteamProUserStats_eventGetNextMostAchievedAchievementInfo_Parms
	{
		int32 IteratorPrevious;
		FString Name;
		float Percent;
		bool bAchieved;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Gets the info on the next most achieved achievement for the game.\n\x09*\n\x09* You must have called RequestGlobalAchievementPercentages and it needs to return successfully via its Callback prior to calling this.\n\x09*\n\x09* @param\x09Name\x09\x09\x09String buffer to return the 'API Name' of the achievement into.\n\x09* @param\x09Percent\x09\x09\x09Variable to return the percentage of people that have unlocked this achievement from 0 to 100.\n\x09* @param\x09""bAchieved\x09\x09Variable to return whether the current user has unlocked this achievement.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Gets the info on the next most achieved achievement for the game.\n\nYou must have called RequestGlobalAchievementPercentages and it needs to return successfully via its Callback prior to calling this.\n\n@param        Name                    String buffer to return the 'API Name' of the achievement into.\n@param        Percent                 Variable to return the percentage of people that have unlocked this achievement from 0 to 100.\n@param        bAchieved               Variable to return whether the current user has unlocked this achievement." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_IteratorPrevious;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Percent;
	static void NewProp_bAchieved_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_IteratorPrevious = { "IteratorPrevious", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetNextMostAchievedAchievementInfo_Parms, IteratorPrevious), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetNextMostAchievedAchievementInfo_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamProUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_Percent = { "Percent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetNextMostAchievedAchievementInfo_Parms, Percent), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_bAchieved_SetBit(void* Obj)
{
	((SteamProUserStats_eventGetNextMostAchievedAchievementInfo_Parms*)Obj)->bAchieved = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUserStats_eventGetNextMostAchievedAchievementInfo_Parms), &Z_Construct_UFunction_USteamProUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetNextMostAchievedAchievementInfo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_GetNextMostAchievedAchievementInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_IteratorPrevious,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_Percent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_bAchieved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetNextMostAchievedAchievementInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetNextMostAchievedAchievementInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_GetNextMostAchievedAchievementInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "GetNextMostAchievedAchievementInfo", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_GetNextMostAchievedAchievementInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetNextMostAchievedAchievementInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_GetNextMostAchievedAchievementInfo_Statics::SteamProUserStats_eventGetNextMostAchievedAchievementInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetNextMostAchievedAchievementInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_GetNextMostAchievedAchievementInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_GetNextMostAchievedAchievementInfo_Statics::SteamProUserStats_eventGetNextMostAchievedAchievementInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_GetNextMostAchievedAchievementInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_GetNextMostAchievedAchievementInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execGetNextMostAchievedAchievementInfo)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_IteratorPrevious);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Name);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Percent);
	P_GET_UBOOL_REF(Z_Param_Out_bAchieved);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProUserStats::GetNextMostAchievedAchievementInfo(Z_Param_IteratorPrevious,Z_Param_Out_Name,Z_Param_Out_Percent,Z_Param_Out_bAchieved);
	P_NATIVE_END;
}
// End Class USteamProUserStats Function GetNextMostAchievedAchievementInfo

// Begin Class USteamProUserStats Function GetNumAchievements
struct Z_Construct_UFunction_USteamProUserStats_GetNumAchievements_Statics
{
	struct SteamProUserStats_eventGetNumAchievements_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Get the number of achievements defined in the App Admin panel of the Steamworks website.\n\x09*\n\x09* This is used for iterating through all of the achievements with GetAchievementName.\n\x09* In general games should not need these functions because they should have a list of existing achievements compiled into them.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Get the number of achievements defined in the App Admin panel of the Steamworks website.\n\nThis is used for iterating through all of the achievements with GetAchievementName.\nIn general games should not need these functions because they should have a list of existing achievements compiled into them." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUserStats_GetNumAchievements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetNumAchievements_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_GetNumAchievements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetNumAchievements_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetNumAchievements_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_GetNumAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "GetNumAchievements", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_GetNumAchievements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetNumAchievements_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_GetNumAchievements_Statics::SteamProUserStats_eventGetNumAchievements_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetNumAchievements_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_GetNumAchievements_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_GetNumAchievements_Statics::SteamProUserStats_eventGetNumAchievements_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_GetNumAchievements()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_GetNumAchievements_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execGetNumAchievements)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USteamProUserStats::GetNumAchievements();
	P_NATIVE_END;
}
// End Class USteamProUserStats Function GetNumAchievements

// Begin Class USteamProUserStats Function GetNumberOfCurrentPlayers
struct Z_Construct_UFunction_USteamProUserStats_GetNumberOfCurrentPlayers_Statics
{
	struct SteamProUserStats_eventGetNumberOfCurrentPlayers_Parms
	{
		FScriptDelegate Callback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Asynchronously retrieves the total number of players currently playing the current game. Both online and in offline mode.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Asynchronously retrieves the total number of players currently playing the current game. Both online and in offline mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamProUserStats_GetNumberOfCurrentPlayers_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetNumberOfCurrentPlayers_Parms, Callback), Z_Construct_UDelegateFunction_SteamCorePro_OnGetNumberOfCurrentPlayers__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 838375995
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_GetNumberOfCurrentPlayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetNumberOfCurrentPlayers_Statics::NewProp_Callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetNumberOfCurrentPlayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_GetNumberOfCurrentPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "GetNumberOfCurrentPlayers", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_GetNumberOfCurrentPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetNumberOfCurrentPlayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_GetNumberOfCurrentPlayers_Statics::SteamProUserStats_eventGetNumberOfCurrentPlayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetNumberOfCurrentPlayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_GetNumberOfCurrentPlayers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_GetNumberOfCurrentPlayers_Statics::SteamProUserStats_eventGetNumberOfCurrentPlayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_GetNumberOfCurrentPlayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_GetNumberOfCurrentPlayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execGetNumberOfCurrentPlayers)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetNumberOfCurrentPlayers(FOnGetNumberOfCurrentPlayers(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// End Class USteamProUserStats Function GetNumberOfCurrentPlayers

// Begin Class USteamProUserStats Function GetStatFloat
struct Z_Construct_UFunction_USteamProUserStats_GetStatFloat_Statics
{
	struct SteamProUserStats_eventGetStatFloat_Parms
	{
		FString Name;
		float Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Gets the current value of the a stat for the current user.\n\x09*\n\x09* You must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this.\n\x09* To receive stats for other users use GetUserStat.\n\x09*\n\x09* @param\x09Name\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09* @param\x09""Data\x09The variable to return the stat value into.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Gets the current value of the a stat for the current user.\n\nYou must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this.\nTo receive stats for other users use GetUserStat.\n\n@param        Name    The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param        Data    The variable to return the stat value into." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProUserStats_GetStatFloat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetStatFloat_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamProUserStats_GetStatFloat_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetStatFloat_Parms, Data), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProUserStats_GetStatFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUserStats_eventGetStatFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUserStats_GetStatFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUserStats_eventGetStatFloat_Parms), &Z_Construct_UFunction_USteamProUserStats_GetStatFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_GetStatFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetStatFloat_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetStatFloat_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetStatFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetStatFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_GetStatFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "GetStatFloat", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_GetStatFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetStatFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_GetStatFloat_Statics::SteamProUserStats_eventGetStatFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetStatFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_GetStatFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_GetStatFloat_Statics::SteamProUserStats_eventGetStatFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_GetStatFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_GetStatFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execGetStatFloat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUserStats::GetStatFloat(Z_Param_Name,Z_Param_Out_Data);
	P_NATIVE_END;
}
// End Class USteamProUserStats Function GetStatFloat

// Begin Class USteamProUserStats Function GetStatInt
struct Z_Construct_UFunction_USteamProUserStats_GetStatInt_Statics
{
	struct SteamProUserStats_eventGetStatInt_Parms
	{
		FString Name;
		int32 Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Gets the current value of the a stat for the current user.\n\x09*\n\x09* You must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this.\n\x09* To receive stats for other users use GetUserStat.\n\x09*\n\x09* @param\x09Name\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09* @param\x09""Data\x09The variable to return the stat value into.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Gets the current value of the a stat for the current user.\n\nYou must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this.\nTo receive stats for other users use GetUserStat.\n\n@param        Name    The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param        Data    The variable to return the stat value into." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProUserStats_GetStatInt_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetStatInt_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUserStats_GetStatInt_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetStatInt_Parms, Data), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProUserStats_GetStatInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUserStats_eventGetStatInt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUserStats_GetStatInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUserStats_eventGetStatInt_Parms), &Z_Construct_UFunction_USteamProUserStats_GetStatInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_GetStatInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetStatInt_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetStatInt_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetStatInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetStatInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_GetStatInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "GetStatInt", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_GetStatInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetStatInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_GetStatInt_Statics::SteamProUserStats_eventGetStatInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetStatInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_GetStatInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_GetStatInt_Statics::SteamProUserStats_eventGetStatInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_GetStatInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_GetStatInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execGetStatInt)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUserStats::GetStatInt(Z_Param_Name,Z_Param_Out_Data);
	P_NATIVE_END;
}
// End Class USteamProUserStats Function GetStatInt

// Begin Class USteamProUserStats Function GetSteamUserStats
struct Z_Construct_UFunction_USteamProUserStats_GetSteamUserStats_Statics
{
	struct SteamProUserStats_eventGetSteamUserStats_Parms
	{
		USteamProUserStats* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamProUserStats_GetSteamUserStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetSteamUserStats_Parms, ReturnValue), Z_Construct_UClass_USteamProUserStats_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_GetSteamUserStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetSteamUserStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetSteamUserStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_GetSteamUserStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "GetSteamUserStats", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_GetSteamUserStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetSteamUserStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_GetSteamUserStats_Statics::SteamProUserStats_eventGetSteamUserStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetSteamUserStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_GetSteamUserStats_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_GetSteamUserStats_Statics::SteamProUserStats_eventGetSteamUserStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_GetSteamUserStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_GetSteamUserStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execGetSteamUserStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USteamProUserStats**)Z_Param__Result=USteamProUserStats::GetSteamUserStats();
	P_NATIVE_END;
}
// End Class USteamProUserStats Function GetSteamUserStats

// Begin Class USteamProUserStats Function GetUserAchievement
struct Z_Construct_UFunction_USteamProUserStats_GetUserAchievement_Statics
{
	struct SteamProUserStats_eventGetUserAchievement_Parms
	{
		FSteamID SteamIDUser;
		FString Name;
		bool bAchieved;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Gets the unlock status of the Achievement.\n\x09*\n\x09* The equivalent function for the local user is GetAchievement, the equivalent function for game servers is ISteamGameServerStats::GetUserAchievement.\n\x09*\n\x09* @param\x09SteamIDUser\x09\x09The Steam ID of the user to get the achievement for.\n\x09* @param\x09Name\x09\x09\x09The 'API Name' of the achievement.\n\x09* @param\x09""bAchieved\x09\x09Returns the unlock status of the achievement.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Gets the unlock status of the Achievement.\n\nThe equivalent function for the local user is GetAchievement, the equivalent function for game servers is ISteamGameServerStats::GetUserAchievement.\n\n@param        SteamIDUser             The Steam ID of the user to get the achievement for.\n@param        Name                    The 'API Name' of the achievement.\n@param        bAchieved               Returns the unlock status of the achievement." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_bAchieved_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProUserStats_GetUserAchievement_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetUserAchievement_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProUserStats_GetUserAchievement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetUserAchievement_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProUserStats_GetUserAchievement_Statics::NewProp_bAchieved_SetBit(void* Obj)
{
	((SteamProUserStats_eventGetUserAchievement_Parms*)Obj)->bAchieved = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUserStats_GetUserAchievement_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUserStats_eventGetUserAchievement_Parms), &Z_Construct_UFunction_USteamProUserStats_GetUserAchievement_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProUserStats_GetUserAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUserStats_eventGetUserAchievement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUserStats_GetUserAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUserStats_eventGetUserAchievement_Parms), &Z_Construct_UFunction_USteamProUserStats_GetUserAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_GetUserAchievement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetUserAchievement_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetUserAchievement_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetUserAchievement_Statics::NewProp_bAchieved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetUserAchievement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetUserAchievement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_GetUserAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "GetUserAchievement", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_GetUserAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetUserAchievement_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_GetUserAchievement_Statics::SteamProUserStats_eventGetUserAchievement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetUserAchievement_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_GetUserAchievement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_GetUserAchievement_Statics::SteamProUserStats_eventGetUserAchievement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_GetUserAchievement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_GetUserAchievement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execGetUserAchievement)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_UBOOL_REF(Z_Param_Out_bAchieved);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUserStats::GetUserAchievement(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_Out_bAchieved);
	P_NATIVE_END;
}
// End Class USteamProUserStats Function GetUserAchievement

// Begin Class USteamProUserStats Function GetUserAchievementAndUnlockTime
struct Z_Construct_UFunction_USteamProUserStats_GetUserAchievementAndUnlockTime_Statics
{
	struct SteamProUserStats_eventGetUserAchievementAndUnlockTime_Parms
	{
		FSteamID SteamIDUser;
		FString Name;
		bool bAchieved;
		int32 UnlockTime;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Gets the achievement status, and the time it was unlocked if unlocked.\n\x09*\n\x09* If the return value is true, but the unlock time is zero, that means it was unlocked before Steam began tracking achievement unlock times (December 2009). The time is provided in Unix epoch format, seconds since January 1, 1970 UTC.\n\x09* The equivalent function for the local user is GetAchievementAndUnlockTime.\n\x09*\n\x09* @param\x09SteamIDUser\x09\x09The Steam ID of the user to get the achievement for.\n\x09* @param\x09Name\x09\x09\x09The 'API Name' of the achievement.\n\x09* @param\x09""bAchieved\x09\x09Returns the unlock status of the achievement.\n\x09* @param\x09UnlockTime\x09\x09Returns the time that the unchievement was unlocked; if pbAchieved is true.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Gets the achievement status, and the time it was unlocked if unlocked.\n\nIf the return value is true, but the unlock time is zero, that means it was unlocked before Steam began tracking achievement unlock times (December 2009). The time is provided in Unix epoch format, seconds since January 1, 1970 UTC.\nThe equivalent function for the local user is GetAchievementAndUnlockTime.\n\n@param        SteamIDUser             The Steam ID of the user to get the achievement for.\n@param        Name                    The 'API Name' of the achievement.\n@param        bAchieved               Returns the unlock status of the achievement.\n@param        UnlockTime              Returns the time that the unchievement was unlocked; if pbAchieved is true." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_bAchieved_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UnlockTime;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetUserAchievementAndUnlockTime_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetUserAchievementAndUnlockTime_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_bAchieved_SetBit(void* Obj)
{
	((SteamProUserStats_eventGetUserAchievementAndUnlockTime_Parms*)Obj)->bAchieved = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUserStats_eventGetUserAchievementAndUnlockTime_Parms), &Z_Construct_UFunction_USteamProUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_UnlockTime = { "UnlockTime", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetUserAchievementAndUnlockTime_Parms, UnlockTime), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUserStats_eventGetUserAchievementAndUnlockTime_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUserStats_eventGetUserAchievementAndUnlockTime_Parms), &Z_Construct_UFunction_USteamProUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_GetUserAchievementAndUnlockTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_bAchieved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_UnlockTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetUserAchievementAndUnlockTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetUserAchievementAndUnlockTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_GetUserAchievementAndUnlockTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "GetUserAchievementAndUnlockTime", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_GetUserAchievementAndUnlockTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetUserAchievementAndUnlockTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_GetUserAchievementAndUnlockTime_Statics::SteamProUserStats_eventGetUserAchievementAndUnlockTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetUserAchievementAndUnlockTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_GetUserAchievementAndUnlockTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_GetUserAchievementAndUnlockTime_Statics::SteamProUserStats_eventGetUserAchievementAndUnlockTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_GetUserAchievementAndUnlockTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_GetUserAchievementAndUnlockTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execGetUserAchievementAndUnlockTime)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_UBOOL_REF(Z_Param_Out_bAchieved);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_UnlockTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUserStats::GetUserAchievementAndUnlockTime(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_Out_bAchieved,Z_Param_Out_UnlockTime);
	P_NATIVE_END;
}
// End Class USteamProUserStats Function GetUserAchievementAndUnlockTime

// Begin Class USteamProUserStats Function GetUserStatFloat
struct Z_Construct_UFunction_USteamProUserStats_GetUserStatFloat_Statics
{
	struct SteamProUserStats_eventGetUserStatFloat_Parms
	{
		FSteamID SteamIDUser;
		FString Name;
		float Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Gets the current value of the a stat for the current user.\n\x09*\n\x09* You must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this.\n\x09* To receive stats for other users use GetUserStat.\n\x09*\n\x09* @param\x09SteamIDUser\x09The Steam ID of the user to get the stat for.\n\x09* @param\x09Name\x09\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09* @param\x09""Data\x09\x09The variable to return the stat value into.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Gets the current value of the a stat for the current user.\n\nYou must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this.\nTo receive stats for other users use GetUserStat.\n\n@param        SteamIDUser     The Steam ID of the user to get the stat for.\n@param        Name            The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param        Data            The variable to return the stat value into." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProUserStats_GetUserStatFloat_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetUserStatFloat_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProUserStats_GetUserStatFloat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetUserStatFloat_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamProUserStats_GetUserStatFloat_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetUserStatFloat_Parms, Data), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProUserStats_GetUserStatFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUserStats_eventGetUserStatFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUserStats_GetUserStatFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUserStats_eventGetUserStatFloat_Parms), &Z_Construct_UFunction_USteamProUserStats_GetUserStatFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_GetUserStatFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetUserStatFloat_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetUserStatFloat_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetUserStatFloat_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetUserStatFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetUserStatFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_GetUserStatFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "GetUserStatFloat", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_GetUserStatFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetUserStatFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_GetUserStatFloat_Statics::SteamProUserStats_eventGetUserStatFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetUserStatFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_GetUserStatFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_GetUserStatFloat_Statics::SteamProUserStats_eventGetUserStatFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_GetUserStatFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_GetUserStatFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execGetUserStatFloat)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUserStats::GetUserStatFloat(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_Out_Data);
	P_NATIVE_END;
}
// End Class USteamProUserStats Function GetUserStatFloat

// Begin Class USteamProUserStats Function GetUserStatInteger
struct Z_Construct_UFunction_USteamProUserStats_GetUserStatInteger_Statics
{
	struct SteamProUserStats_eventGetUserStatInteger_Parms
	{
		FSteamID SteamIDUser;
		FString Name;
		int32 Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Gets the current value of the a stat for the current user.\n\x09*\n\x09* You must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this.\n\x09* To receive stats for other users use GetUserStat.\n\x09*\n\x09* @param\x09SteamIDUser\x09The Steam ID of the user to get the stat for.\n\x09* @param\x09Name\x09\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09* @param\x09""Data\x09\x09The variable to return the stat value into.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Gets the current value of the a stat for the current user.\n\nYou must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this.\nTo receive stats for other users use GetUserStat.\n\n@param        SteamIDUser     The Steam ID of the user to get the stat for.\n@param        Name            The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param        Data            The variable to return the stat value into." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProUserStats_GetUserStatInteger_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetUserStatInteger_Parms, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProUserStats_GetUserStatInteger_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetUserStatInteger_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUserStats_GetUserStatInteger_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventGetUserStatInteger_Parms, Data), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProUserStats_GetUserStatInteger_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUserStats_eventGetUserStatInteger_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUserStats_GetUserStatInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUserStats_eventGetUserStatInteger_Parms), &Z_Construct_UFunction_USteamProUserStats_GetUserStatInteger_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_GetUserStatInteger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetUserStatInteger_Statics::NewProp_SteamIDUser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetUserStatInteger_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetUserStatInteger_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_GetUserStatInteger_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetUserStatInteger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_GetUserStatInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "GetUserStatInteger", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_GetUserStatInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetUserStatInteger_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_GetUserStatInteger_Statics::SteamProUserStats_eventGetUserStatInteger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_GetUserStatInteger_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_GetUserStatInteger_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_GetUserStatInteger_Statics::SteamProUserStats_eventGetUserStatInteger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_GetUserStatInteger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_GetUserStatInteger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execGetUserStatInteger)
{
	P_GET_STRUCT(FSteamID,Z_Param_SteamIDUser);
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUserStats::GetUserStatInteger(Z_Param_SteamIDUser,Z_Param_Name,Z_Param_Out_Data);
	P_NATIVE_END;
}
// End Class USteamProUserStats Function GetUserStatInteger

// Begin Class USteamProUserStats Function IndicateAchievementProgress
struct Z_Construct_UFunction_USteamProUserStats_IndicateAchievementProgress_Statics
{
	struct SteamProUserStats_eventIndicateAchievementProgress_Parms
	{
		FString Name;
		int32 CurrentProgress;
		int32 MaxProgress;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Shows the user a pop-up notification with the current progress of an achievement.\n\x09*\n\x09* Calling this function will NOT set the progress or unlock the achievement, the game must do that manually by calling SetStat!\n\x09*\n\x09* @param\x09The 'API Name' of the achievement.\n\x09* @param\x09The current progress.\n\x09* @param\x09The progress required to unlock the achievement.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Shows the user a pop-up notification with the current progress of an achievement.\n\nCalling this function will NOT set the progress or unlock the achievement, the game must do that manually by calling SetStat!\n\n@param        The 'API Name' of the achievement.\n@param        The current progress.\n@param        The progress required to unlock the achievement." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentProgress;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxProgress;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProUserStats_IndicateAchievementProgress_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventIndicateAchievementProgress_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUserStats_IndicateAchievementProgress_Statics::NewProp_CurrentProgress = { "CurrentProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventIndicateAchievementProgress_Parms, CurrentProgress), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUserStats_IndicateAchievementProgress_Statics::NewProp_MaxProgress = { "MaxProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventIndicateAchievementProgress_Parms, MaxProgress), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProUserStats_IndicateAchievementProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUserStats_eventIndicateAchievementProgress_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUserStats_IndicateAchievementProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUserStats_eventIndicateAchievementProgress_Parms), &Z_Construct_UFunction_USteamProUserStats_IndicateAchievementProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_IndicateAchievementProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_IndicateAchievementProgress_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_IndicateAchievementProgress_Statics::NewProp_CurrentProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_IndicateAchievementProgress_Statics::NewProp_MaxProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_IndicateAchievementProgress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_IndicateAchievementProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_IndicateAchievementProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "IndicateAchievementProgress", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_IndicateAchievementProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_IndicateAchievementProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_IndicateAchievementProgress_Statics::SteamProUserStats_eventIndicateAchievementProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_IndicateAchievementProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_IndicateAchievementProgress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_IndicateAchievementProgress_Statics::SteamProUserStats_eventIndicateAchievementProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_IndicateAchievementProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_IndicateAchievementProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execIndicateAchievementProgress)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY(FIntProperty,Z_Param_CurrentProgress);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxProgress);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUserStats::IndicateAchievementProgress(Z_Param_Name,Z_Param_CurrentProgress,Z_Param_MaxProgress);
	P_NATIVE_END;
}
// End Class USteamProUserStats Function IndicateAchievementProgress

// Begin Class USteamProUserStats Function RequestCurrentStats
struct Z_Construct_UFunction_USteamProUserStats_RequestCurrentStats_Statics
{
	struct SteamProUserStats_eventRequestCurrentStats_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Asynchronously request the user's current stats and achievements from the server.\n\x09*\n\x09* You must always call this first to get the initial status of stats and achievements.\n\x09* Only after the resulting Callback comes back can you start calling the rest of the stats and achievement functions for the current user.\n\x09* The equivalent function for other users is RequestUserStats.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Asynchronously request the user's current stats and achievements from the server.\n\nYou must always call this first to get the initial status of stats and achievements.\nOnly after the resulting Callback comes back can you start calling the rest of the stats and achievement functions for the current user.\nThe equivalent function for other users is RequestUserStats." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProUserStats_RequestCurrentStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUserStats_eventRequestCurrentStats_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUserStats_RequestCurrentStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUserStats_eventRequestCurrentStats_Parms), &Z_Construct_UFunction_USteamProUserStats_RequestCurrentStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_RequestCurrentStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_RequestCurrentStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_RequestCurrentStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_RequestCurrentStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "RequestCurrentStats", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_RequestCurrentStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_RequestCurrentStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_RequestCurrentStats_Statics::SteamProUserStats_eventRequestCurrentStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_RequestCurrentStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_RequestCurrentStats_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_RequestCurrentStats_Statics::SteamProUserStats_eventRequestCurrentStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_RequestCurrentStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_RequestCurrentStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execRequestCurrentStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUserStats::RequestCurrentStats();
	P_NATIVE_END;
}
// End Class USteamProUserStats Function RequestCurrentStats

// Begin Class USteamProUserStats Function RequestGlobalAchievementPercentages
struct Z_Construct_UFunction_USteamProUserStats_RequestGlobalAchievementPercentages_Statics
{
	struct SteamProUserStats_eventRequestGlobalAchievementPercentages_Parms
	{
		FScriptDelegate Callback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Asynchronously fetch the data for the percentage of players who have received each achievement for the current game globally.\n\x09*\n\x09* You must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this!\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Asynchronously fetch the data for the percentage of players who have received each achievement for the current game globally.\n\nYou must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamProUserStats_RequestGlobalAchievementPercentages_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventRequestGlobalAchievementPercentages_Parms, Callback), Z_Construct_UDelegateFunction_SteamCorePro_OnRequestGlobalAchievementPercentages__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 519815760
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_RequestGlobalAchievementPercentages_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_RequestGlobalAchievementPercentages_Statics::NewProp_Callback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_RequestGlobalAchievementPercentages_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_RequestGlobalAchievementPercentages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "RequestGlobalAchievementPercentages", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_RequestGlobalAchievementPercentages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_RequestGlobalAchievementPercentages_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_RequestGlobalAchievementPercentages_Statics::SteamProUserStats_eventRequestGlobalAchievementPercentages_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_RequestGlobalAchievementPercentages_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_RequestGlobalAchievementPercentages_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_RequestGlobalAchievementPercentages_Statics::SteamProUserStats_eventRequestGlobalAchievementPercentages_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_RequestGlobalAchievementPercentages()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_RequestGlobalAchievementPercentages_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execRequestGlobalAchievementPercentages)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestGlobalAchievementPercentages(FOnRequestGlobalAchievementPercentages(Z_Param_Out_Callback));
	P_NATIVE_END;
}
// End Class USteamProUserStats Function RequestGlobalAchievementPercentages

// Begin Class USteamProUserStats Function RequestGlobalStats
struct Z_Construct_UFunction_USteamProUserStats_RequestGlobalStats_Statics
{
	struct SteamProUserStats_eventRequestGlobalStats_Parms
	{
		FScriptDelegate Callback;
		int32 HistoryDays;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Asynchronously fetches global stats data, which is available for stats marked as \"aggregated\" in the App Admin panel of the Steamworks website.\n\x09*\n\x09* You must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this.\n\x09*\n\x09* @param\x09HistoryDays\x09\x09How many days of day-by-day history to retrieve in addition to the overall totals. The limit is 60.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Asynchronously fetches global stats data, which is available for stats marked as \"aggregated\" in the App Admin panel of the Steamworks website.\n\nYou must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this.\n\n@param        HistoryDays             How many days of day-by-day history to retrieve in addition to the overall totals. The limit is 60." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HistoryDays;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamProUserStats_RequestGlobalStats_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventRequestGlobalStats_Parms, Callback), Z_Construct_UDelegateFunction_SteamCorePro_OnRequestGlobalStats__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 492081074
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUserStats_RequestGlobalStats_Statics::NewProp_HistoryDays = { "HistoryDays", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventRequestGlobalStats_Parms, HistoryDays), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_RequestGlobalStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_RequestGlobalStats_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_RequestGlobalStats_Statics::NewProp_HistoryDays,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_RequestGlobalStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_RequestGlobalStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "RequestGlobalStats", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_RequestGlobalStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_RequestGlobalStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_RequestGlobalStats_Statics::SteamProUserStats_eventRequestGlobalStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_RequestGlobalStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_RequestGlobalStats_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_RequestGlobalStats_Statics::SteamProUserStats_eventRequestGlobalStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_RequestGlobalStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_RequestGlobalStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execRequestGlobalStats)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_PROPERTY(FIntProperty,Z_Param_HistoryDays);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestGlobalStats(FOnRequestGlobalStats(Z_Param_Out_Callback),Z_Param_HistoryDays);
	P_NATIVE_END;
}
// End Class USteamProUserStats Function RequestGlobalStats

// Begin Class USteamProUserStats Function RequestUserStats
struct Z_Construct_UFunction_USteamProUserStats_RequestUserStats_Statics
{
	struct SteamProUserStats_eventRequestUserStats_Parms
	{
		FScriptDelegate Callback;
		FSteamID SteamID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback" },
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Asynchronously downloads stats and achievements for the specified user from the server.\n\x09*\n\x09* These stats are not automatically updated; you'll need to call this function again to refresh any data that may have change.\n\x09* To keep from using too much memory, an least recently used cache (LRU) is maintained and other user's stats will occasionally be unloaded. When this happens a\n\x09* UserStatsUnloaded_t Callback is sent. After receiving this Callback the user's stats will be unavailable until this function is called again.\n\x09* The equivalent function for the local user is RequestCurrentStats, the equivalent function for game servers is ISteamGameServerStats::RequestUserStats.\n\x09*\n\x09* @param\x09SteamID\x09\x09The Steam ID of the user to request stats for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Asynchronously downloads stats and achievements for the specified user from the server.\n\nThese stats are not automatically updated; you'll need to call this function again to refresh any data that may have change.\nTo keep from using too much memory, an least recently used cache (LRU) is maintained and other user's stats will occasionally be unloaded. When this happens a\nUserStatsUnloaded_t Callback is sent. After receiving this Callback the user's stats will be unavailable until this function is called again.\nThe equivalent function for the local user is RequestCurrentStats, the equivalent function for game servers is ISteamGameServerStats::RequestUserStats.\n\n@param        SteamID         The Steam ID of the user to request stats for." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamProUserStats_RequestUserStats_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventRequestUserStats_Parms, Callback), Z_Construct_UDelegateFunction_SteamCorePro_OnRequestUserStats__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1637474014
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProUserStats_RequestUserStats_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventRequestUserStats_Parms, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(0, nullptr) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_RequestUserStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_RequestUserStats_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_RequestUserStats_Statics::NewProp_SteamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_RequestUserStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_RequestUserStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "RequestUserStats", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_RequestUserStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_RequestUserStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_RequestUserStats_Statics::SteamProUserStats_eventRequestUserStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_RequestUserStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_RequestUserStats_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_RequestUserStats_Statics::SteamProUserStats_eventRequestUserStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_RequestUserStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_RequestUserStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execRequestUserStats)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FSteamID,Z_Param_SteamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestUserStats(FOnRequestUserStats(Z_Param_Out_Callback),Z_Param_SteamID);
	P_NATIVE_END;
}
// End Class USteamProUserStats Function RequestUserStats

// Begin Class USteamProUserStats Function ResetAllStats
struct Z_Construct_UFunction_USteamProUserStats_ResetAllStats_Statics
{
	struct SteamProUserStats_eventResetAllStats_Parms
	{
		bool bAchievementsToo;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Resets the current users stats and, optionally achievements.\n\x09*\n\x09* This automatically calls StoreStats to persist the changes to the server.\n\x09* This should typically only be used for testing purposes during development.\n\x09* Ensure that you sync up your stats with the new default values provided by Steam after calling this by calling RequestCurrentStats.\n\x09*\n\x09* @param\x09""bAchievementsToo\x09""Also reset the user's achievements?\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Resets the current users stats and, optionally achievements.\n\nThis automatically calls StoreStats to persist the changes to the server.\nThis should typically only be used for testing purposes during development.\nEnsure that you sync up your stats with the new default values provided by Steam after calling this by calling RequestCurrentStats.\n\n@param        bAchievementsToo        Also reset the user's achievements?" },
	};
#endif // WITH_METADATA
	static void NewProp_bAchievementsToo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAchievementsToo;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProUserStats_ResetAllStats_Statics::NewProp_bAchievementsToo_SetBit(void* Obj)
{
	((SteamProUserStats_eventResetAllStats_Parms*)Obj)->bAchievementsToo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUserStats_ResetAllStats_Statics::NewProp_bAchievementsToo = { "bAchievementsToo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUserStats_eventResetAllStats_Parms), &Z_Construct_UFunction_USteamProUserStats_ResetAllStats_Statics::NewProp_bAchievementsToo_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProUserStats_ResetAllStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUserStats_eventResetAllStats_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUserStats_ResetAllStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUserStats_eventResetAllStats_Parms), &Z_Construct_UFunction_USteamProUserStats_ResetAllStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_ResetAllStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_ResetAllStats_Statics::NewProp_bAchievementsToo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_ResetAllStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_ResetAllStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_ResetAllStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "ResetAllStats", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_ResetAllStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_ResetAllStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_ResetAllStats_Statics::SteamProUserStats_eventResetAllStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_ResetAllStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_ResetAllStats_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_ResetAllStats_Statics::SteamProUserStats_eventResetAllStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_ResetAllStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_ResetAllStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execResetAllStats)
{
	P_GET_UBOOL(Z_Param_bAchievementsToo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUserStats::ResetAllStats(Z_Param_bAchievementsToo);
	P_NATIVE_END;
}
// End Class USteamProUserStats Function ResetAllStats

// Begin Class USteamProUserStats Function SetAchievement
struct Z_Construct_UFunction_USteamProUserStats_SetAchievement_Statics
{
	struct SteamProUserStats_eventSetAchievement_Parms
	{
		FString Name;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Unlocks an achievement.\n\x09*\n\x09* You must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this!\n\x09* You can unlock an achievement multiple times so you don't need to worry about only setting achievements that aren't already set.\n\x09* This call only modifies Steam's in-memory state so it is quite cheap. To send the unlock status to the server and to trigger the Steam overlay notification you must call StoreStats.\n\x09*\n\x09* @param\x09Name\x09The 'API Name' of the Achievement to unlock.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Unlocks an achievement.\n\nYou must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this!\nYou can unlock an achievement multiple times so you don't need to worry about only setting achievements that aren't already set.\nThis call only modifies Steam's in-memory state so it is quite cheap. To send the unlock status to the server and to trigger the Steam overlay notification you must call StoreStats.\n\n@param        Name    The 'API Name' of the Achievement to unlock." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProUserStats_SetAchievement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventSetAchievement_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProUserStats_SetAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUserStats_eventSetAchievement_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUserStats_SetAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUserStats_eventSetAchievement_Parms), &Z_Construct_UFunction_USteamProUserStats_SetAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_SetAchievement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_SetAchievement_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_SetAchievement_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_SetAchievement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_SetAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "SetAchievement", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_SetAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_SetAchievement_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_SetAchievement_Statics::SteamProUserStats_eventSetAchievement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_SetAchievement_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_SetAchievement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_SetAchievement_Statics::SteamProUserStats_eventSetAchievement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_SetAchievement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_SetAchievement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execSetAchievement)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUserStats::SetAchievement(Z_Param_Name);
	P_NATIVE_END;
}
// End Class USteamProUserStats Function SetAchievement

// Begin Class USteamProUserStats Function SetStatFloat
struct Z_Construct_UFunction_USteamProUserStats_SetStatFloat_Statics
{
	struct SteamProUserStats_eventSetStatFloat_Parms
	{
		FString Name;
		float Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Sets / updates the value of a given stat for the current user.\n\x09*\n\x09* You must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this!\n\x09* This call only modifies Steam's in-memory state and is very cheap. Doing so allows Steam to persist the changes even in the event of a game crash or unexpected shutdown.\n\x09* To submit the stats to the server you must call StoreStats.\n\x09* If this is returning false and everything appears correct, then check to ensure that your changes in the App Admin panel of the Steamworks website are published.\n\x09*\n\x09* @param\x09Name\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09* @param\x09""Data\x09The new value of the stat. This must be an absolute value, it will not increment or decrement for you.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Sets / updates the value of a given stat for the current user.\n\nYou must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this!\nThis call only modifies Steam's in-memory state and is very cheap. Doing so allows Steam to persist the changes even in the event of a game crash or unexpected shutdown.\nTo submit the stats to the server you must call StoreStats.\nIf this is returning false and everything appears correct, then check to ensure that your changes in the App Admin panel of the Steamworks website are published.\n\n@param        Name    The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param        Data    The new value of the stat. This must be an absolute value, it will not increment or decrement for you." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProUserStats_SetStatFloat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventSetStatFloat_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamProUserStats_SetStatFloat_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventSetStatFloat_Parms, Data), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProUserStats_SetStatFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUserStats_eventSetStatFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUserStats_SetStatFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUserStats_eventSetStatFloat_Parms), &Z_Construct_UFunction_USteamProUserStats_SetStatFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_SetStatFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_SetStatFloat_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_SetStatFloat_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_SetStatFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_SetStatFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_SetStatFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "SetStatFloat", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_SetStatFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_SetStatFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_SetStatFloat_Statics::SteamProUserStats_eventSetStatFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_SetStatFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_SetStatFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_SetStatFloat_Statics::SteamProUserStats_eventSetStatFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_SetStatFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_SetStatFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execSetStatFloat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUserStats::SetStatFloat(Z_Param_Name,Z_Param_Data);
	P_NATIVE_END;
}
// End Class USteamProUserStats Function SetStatFloat

// Begin Class USteamProUserStats Function SetStatInt
struct Z_Construct_UFunction_USteamProUserStats_SetStatInt_Statics
{
	struct SteamProUserStats_eventSetStatInt_Parms
	{
		FString Name;
		int32 Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Sets / updates the value of a given stat for the current user.\n\x09*\n\x09* You must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this!\n\x09* This call only modifies Steam's in-memory state and is very cheap. Doing so allows Steam to persist the changes even in the event of a game crash or unexpected shutdown.\n\x09* To submit the stats to the server you must call StoreStats.\n\x09* If this is returning false and everything appears correct, then check to ensure that your changes in the App Admin panel of the Steamworks website are published.\n\x09*\n\x09* @param\x09Name\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09* @param\x09""Data\x09The new value of the stat. This must be an absolute value, it will not increment or decrement for you.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Sets / updates the value of a given stat for the current user.\n\nYou must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this!\nThis call only modifies Steam's in-memory state and is very cheap. Doing so allows Steam to persist the changes even in the event of a game crash or unexpected shutdown.\nTo submit the stats to the server you must call StoreStats.\nIf this is returning false and everything appears correct, then check to ensure that your changes in the App Admin panel of the Steamworks website are published.\n\n@param        Name    The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param        Data    The new value of the stat. This must be an absolute value, it will not increment or decrement for you." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProUserStats_SetStatInt_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventSetStatInt_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUserStats_SetStatInt_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventSetStatInt_Parms, Data), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProUserStats_SetStatInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUserStats_eventSetStatInt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUserStats_SetStatInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUserStats_eventSetStatInt_Parms), &Z_Construct_UFunction_USteamProUserStats_SetStatInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_SetStatInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_SetStatInt_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_SetStatInt_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_SetStatInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_SetStatInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_SetStatInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "SetStatInt", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_SetStatInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_SetStatInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_SetStatInt_Statics::SteamProUserStats_eventSetStatInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_SetStatInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_SetStatInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_SetStatInt_Statics::SteamProUserStats_eventSetStatInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_SetStatInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_SetStatInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execSetStatInt)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY(FIntProperty,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUserStats::SetStatInt(Z_Param_Name,Z_Param_Data);
	P_NATIVE_END;
}
// End Class USteamProUserStats Function SetStatInt

// Begin Class USteamProUserStats Function StoreStats
struct Z_Construct_UFunction_USteamProUserStats_StoreStats_Statics
{
	struct SteamProUserStats_eventStoreStats_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Send the changed stats and achievements data to the server for permanent storage.\n\x09*\n\x09* If this fails then nothing is sent to the server. It's advisable to keep trying until the call is successful.\n\x09* This call can be rate limited. Call frequency should be on the order of minutes, rather than seconds.\n\x09* You should only be calling this during major state changes such as the end of a round, the map changing, or the user leaving a server.\n\x09* This call is required to display the achievement unlock notification dialog though, so if you have called SetAchievement then it's advisable to call this soon after that.\n\x09* If you have stats or achievements that you have saved locally but haven't uploaded with this function when your application process ends then this function will automatically be called.\n\x09*\n\x09* You can find additional debug information written to the %steam_install%\\logs\\stats_log.txt file.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Send the changed stats and achievements data to the server for permanent storage.\n\nIf this fails then nothing is sent to the server. It's advisable to keep trying until the call is successful.\nThis call can be rate limited. Call frequency should be on the order of minutes, rather than seconds.\nYou should only be calling this during major state changes such as the end of a round, the map changing, or the user leaving a server.\nThis call is required to display the achievement unlock notification dialog though, so if you have called SetAchievement then it's advisable to call this soon after that.\nIf you have stats or achievements that you have saved locally but haven't uploaded with this function when your application process ends then this function will automatically be called.\n\nYou can find additional debug information written to the %steam_install%\\logs\\stats_log.txt file." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamProUserStats_StoreStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUserStats_eventStoreStats_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUserStats_StoreStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUserStats_eventStoreStats_Parms), &Z_Construct_UFunction_USteamProUserStats_StoreStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_StoreStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_StoreStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_StoreStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_StoreStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "StoreStats", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_StoreStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_StoreStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_StoreStats_Statics::SteamProUserStats_eventStoreStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_StoreStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_StoreStats_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_StoreStats_Statics::SteamProUserStats_eventStoreStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_StoreStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_StoreStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execStoreStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUserStats::StoreStats();
	P_NATIVE_END;
}
// End Class USteamProUserStats Function StoreStats

// Begin Class USteamProUserStats Function UpdateAvgRateStat
struct Z_Construct_UFunction_USteamProUserStats_UpdateAvgRateStat_Statics
{
	struct SteamProUserStats_eventUpdateAvgRateStat_Parms
	{
		FString Name;
		float CountThisSession;
		float SessionLength;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Updates an AVGRATE stat with new values.\n\x09*\n\x09* You must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this!\n\x09* This call only modifies Steam's in-memory state and is very cheap. Doing so allows Steam to persist the changes even in the event of a game crash or unexpected shutdown.\n\x09* To submit the stats to the server you must call StoreStats.\n\x09* If this is returning false and everything appears correct, then check to ensure that your changes in the App Admin panel of the Steamworks website are published.\n\x09*\n\x09* @param\x09Name\x09\x09\x09\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09* @param\x09""CountThisSession\x09The value accumulation since the last call to this function.\n\x09* @param\x09SessionLength\x09\x09The amount of time in seconds since the last call to this function.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Updates an AVGRATE stat with new values.\n\nYou must have called RequestCurrentStats and it needs to return successfully via its Callback prior to calling this!\nThis call only modifies Steam's in-memory state and is very cheap. Doing so allows Steam to persist the changes even in the event of a game crash or unexpected shutdown.\nTo submit the stats to the server you must call StoreStats.\nIf this is returning false and everything appears correct, then check to ensure that your changes in the App Admin panel of the Steamworks website are published.\n\n@param        Name                            The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param        CountThisSession        The value accumulation since the last call to this function.\n@param        SessionLength           The amount of time in seconds since the last call to this function." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CountThisSession;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SessionLength;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamProUserStats_UpdateAvgRateStat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventUpdateAvgRateStat_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamProUserStats_UpdateAvgRateStat_Statics::NewProp_CountThisSession = { "CountThisSession", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventUpdateAvgRateStat_Parms, CountThisSession), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USteamProUserStats_UpdateAvgRateStat_Statics::NewProp_SessionLength = { "SessionLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventUpdateAvgRateStat_Parms, SessionLength), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamProUserStats_UpdateAvgRateStat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamProUserStats_eventUpdateAvgRateStat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamProUserStats_UpdateAvgRateStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamProUserStats_eventUpdateAvgRateStat_Parms), &Z_Construct_UFunction_USteamProUserStats_UpdateAvgRateStat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_UpdateAvgRateStat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_UpdateAvgRateStat_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_UpdateAvgRateStat_Statics::NewProp_CountThisSession,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_UpdateAvgRateStat_Statics::NewProp_SessionLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_UpdateAvgRateStat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_UpdateAvgRateStat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_UpdateAvgRateStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "UpdateAvgRateStat", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_UpdateAvgRateStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_UpdateAvgRateStat_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_UpdateAvgRateStat_Statics::SteamProUserStats_eventUpdateAvgRateStat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_UpdateAvgRateStat_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_UpdateAvgRateStat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_UpdateAvgRateStat_Statics::SteamProUserStats_eventUpdateAvgRateStat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_UpdateAvgRateStat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_UpdateAvgRateStat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execUpdateAvgRateStat)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CountThisSession);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SessionLength);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USteamProUserStats::UpdateAvgRateStat(Z_Param_Name,Z_Param_CountThisSession,Z_Param_SessionLength);
	P_NATIVE_END;
}
// End Class USteamProUserStats Function UpdateAvgRateStat

// Begin Class USteamProUserStats Function UploadLeaderboardScore
struct Z_Construct_UFunction_USteamProUserStats_UploadLeaderboardScore_Statics
{
	struct SteamProUserStats_eventUploadLeaderboardScore_Parms
	{
		FScriptDelegate Callback;
		FSteamLeaderboard SteamLeaderboard;
		ESteamLeaderboardUploadScoreMethod UploadScoreMethod;
		int32 Score;
		TArray<int32> ScoreDetails;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Callback, scoreDetails" },
		{ "Category", "SteamCore|UserStats" },
		{ "Comment", "/**\n\x09* Uploads a user score to a specified leaderboard.\n\x09*\n\x09* Details are optional game-defined information which outlines how the user got that score. For example if it's a racing style time based leaderboard \n\x09* you could store the timestamps when the player hits each checkpoint. If you have collectibles along the way you could use bit fields as booleans to store the items the player picked up in the playthrough.\n\x09* Uploading scores to Steam is rate limited to 10 uploads per 10 minutes and you may only have one outstanding call to this function at a time.\n\x09*\n\x09* @param\x09SteamLeaderboard\x09\x09""A leaderboard Handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n\x09* @param\x09UploadScoreMethod\x09\x09""Do you want to force the score to change, or keep the previous score if it was better?\n\x09* @param\x09Score\x09\x09\x09\x09\x09The score to upload.\n\x09* @param\x09ScoreDetails\x09\x09\x09Optional: Array containing the details surrounding the unlocking of this score.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
		{ "ToolTip", "Uploads a user score to a specified leaderboard.\n\nDetails are optional game-defined information which outlines how the user got that score. For example if it's a racing style time based leaderboard\nyou could store the timestamps when the player hits each checkpoint. If you have collectibles along the way you could use bit fields as booleans to store the items the player picked up in the playthrough.\nUploading scores to Steam is rate limited to 10 uploads per 10 minutes and you may only have one outstanding call to this function at a time.\n\n@param        SteamLeaderboard                A leaderboard Handle obtained from FindLeaderboard or FindOrCreateLeaderboard.\n@param        UploadScoreMethod               Do you want to force the score to change, or keep the previous score if it was better?\n@param        Score                                   The score to upload.\n@param        ScoreDetails                    Optional: Array containing the details surrounding the unlocking of this score." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamLeaderboard;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UploadScoreMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UploadScoreMethod;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ScoreDetails_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ScoreDetails;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamProUserStats_UploadLeaderboardScore_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventUploadLeaderboardScore_Parms, Callback), Z_Construct_UDelegateFunction_SteamCorePro_OnUploadLeaderboardScore__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Callback_MetaData), NewProp_Callback_MetaData) }; // 1312149917
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamProUserStats_UploadLeaderboardScore_Statics::NewProp_SteamLeaderboard = { "SteamLeaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventUploadLeaderboardScore_Parms, SteamLeaderboard), Z_Construct_UScriptStruct_FSteamLeaderboard, METADATA_PARAMS(0, nullptr) }; // 3003321657
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamProUserStats_UploadLeaderboardScore_Statics::NewProp_UploadScoreMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamProUserStats_UploadLeaderboardScore_Statics::NewProp_UploadScoreMethod = { "UploadScoreMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventUploadLeaderboardScore_Parms, UploadScoreMethod), Z_Construct_UEnum_SteamCorePro_ESteamLeaderboardUploadScoreMethod, METADATA_PARAMS(0, nullptr) }; // 2613855586
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUserStats_UploadLeaderboardScore_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventUploadLeaderboardScore_Parms, Score), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamProUserStats_UploadLeaderboardScore_Statics::NewProp_ScoreDetails_Inner = { "ScoreDetails", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamProUserStats_UploadLeaderboardScore_Statics::NewProp_ScoreDetails = { "ScoreDetails", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamProUserStats_eventUploadLeaderboardScore_Parms, ScoreDetails), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamProUserStats_UploadLeaderboardScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_UploadLeaderboardScore_Statics::NewProp_Callback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_UploadLeaderboardScore_Statics::NewProp_SteamLeaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_UploadLeaderboardScore_Statics::NewProp_UploadScoreMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_UploadLeaderboardScore_Statics::NewProp_UploadScoreMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_UploadLeaderboardScore_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_UploadLeaderboardScore_Statics::NewProp_ScoreDetails_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamProUserStats_UploadLeaderboardScore_Statics::NewProp_ScoreDetails,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_UploadLeaderboardScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamProUserStats_UploadLeaderboardScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamProUserStats, nullptr, "UploadLeaderboardScore", nullptr, nullptr, Z_Construct_UFunction_USteamProUserStats_UploadLeaderboardScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_UploadLeaderboardScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamProUserStats_UploadLeaderboardScore_Statics::SteamProUserStats_eventUploadLeaderboardScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamProUserStats_UploadLeaderboardScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamProUserStats_UploadLeaderboardScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamProUserStats_UploadLeaderboardScore_Statics::SteamProUserStats_eventUploadLeaderboardScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamProUserStats_UploadLeaderboardScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamProUserStats_UploadLeaderboardScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamProUserStats::execUploadLeaderboardScore)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Callback);
	P_GET_STRUCT(FSteamLeaderboard,Z_Param_SteamLeaderboard);
	P_GET_ENUM(ESteamLeaderboardUploadScoreMethod,Z_Param_UploadScoreMethod);
	P_GET_PROPERTY(FIntProperty,Z_Param_Score);
	P_GET_TARRAY(int32,Z_Param_ScoreDetails);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UploadLeaderboardScore(FOnUploadLeaderboardScore(Z_Param_Out_Callback),Z_Param_SteamLeaderboard,ESteamLeaderboardUploadScoreMethod(Z_Param_UploadScoreMethod),Z_Param_Score,Z_Param_ScoreDetails);
	P_NATIVE_END;
}
// End Class USteamProUserStats Function UploadLeaderboardScore

// Begin Class USteamProUserStats
void USteamProUserStats::StaticRegisterNativesUSteamProUserStats()
{
	UClass* Class = USteamProUserStats::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AttachLeaderboardUGC", &USteamProUserStats::execAttachLeaderboardUGC },
		{ "ClearAchievement", &USteamProUserStats::execClearAchievement },
		{ "DownloadLeaderboardEntries", &USteamProUserStats::execDownloadLeaderboardEntries },
		{ "DownloadLeaderboardEntriesForUsers", &USteamProUserStats::execDownloadLeaderboardEntriesForUsers },
		{ "FindLeaderboard", &USteamProUserStats::execFindLeaderboard },
		{ "FindOrCreateLeaderboard", &USteamProUserStats::execFindOrCreateLeaderboard },
		{ "GetAchievement", &USteamProUserStats::execGetAchievement },
		{ "GetAchievementAchievedPercent", &USteamProUserStats::execGetAchievementAchievedPercent },
		{ "GetAchievementAndUnlockTime", &USteamProUserStats::execGetAchievementAndUnlockTime },
		{ "GetAchievementDisplayAttribute", &USteamProUserStats::execGetAchievementDisplayAttribute },
		{ "GetAchievementIcon", &USteamProUserStats::execGetAchievementIcon },
		{ "GetAchievementName", &USteamProUserStats::execGetAchievementName },
		{ "GetAchievementProgressLimits", &USteamProUserStats::execGetAchievementProgressLimits },
		{ "GetAchievementProgressLimitsFloat", &USteamProUserStats::execGetAchievementProgressLimitsFloat },
		{ "GetDownloadedLeaderboardEntry", &USteamProUserStats::execGetDownloadedLeaderboardEntry },
		{ "GetGlobalStatFloat", &USteamProUserStats::execGetGlobalStatFloat },
		{ "GetGlobalStatHistoryFloat", &USteamProUserStats::execGetGlobalStatHistoryFloat },
		{ "GetGlobalStatHistoryInt", &USteamProUserStats::execGetGlobalStatHistoryInt },
		{ "GetGlobalStatInt", &USteamProUserStats::execGetGlobalStatInt },
		{ "GetLeaderboardDisplayType", &USteamProUserStats::execGetLeaderboardDisplayType },
		{ "GetLeaderboardEntryCount", &USteamProUserStats::execGetLeaderboardEntryCount },
		{ "GetLeaderboardName", &USteamProUserStats::execGetLeaderboardName },
		{ "GetLeaderboardSortMethod", &USteamProUserStats::execGetLeaderboardSortMethod },
		{ "GetMostAchievedAchievementInfo", &USteamProUserStats::execGetMostAchievedAchievementInfo },
		{ "GetNextMostAchievedAchievementInfo", &USteamProUserStats::execGetNextMostAchievedAchievementInfo },
		{ "GetNumAchievements", &USteamProUserStats::execGetNumAchievements },
		{ "GetNumberOfCurrentPlayers", &USteamProUserStats::execGetNumberOfCurrentPlayers },
		{ "GetStatFloat", &USteamProUserStats::execGetStatFloat },
		{ "GetStatInt", &USteamProUserStats::execGetStatInt },
		{ "GetSteamUserStats", &USteamProUserStats::execGetSteamUserStats },
		{ "GetUserAchievement", &USteamProUserStats::execGetUserAchievement },
		{ "GetUserAchievementAndUnlockTime", &USteamProUserStats::execGetUserAchievementAndUnlockTime },
		{ "GetUserStatFloat", &USteamProUserStats::execGetUserStatFloat },
		{ "GetUserStatInteger", &USteamProUserStats::execGetUserStatInteger },
		{ "IndicateAchievementProgress", &USteamProUserStats::execIndicateAchievementProgress },
		{ "RequestCurrentStats", &USteamProUserStats::execRequestCurrentStats },
		{ "RequestGlobalAchievementPercentages", &USteamProUserStats::execRequestGlobalAchievementPercentages },
		{ "RequestGlobalStats", &USteamProUserStats::execRequestGlobalStats },
		{ "RequestUserStats", &USteamProUserStats::execRequestUserStats },
		{ "ResetAllStats", &USteamProUserStats::execResetAllStats },
		{ "SetAchievement", &USteamProUserStats::execSetAchievement },
		{ "SetStatFloat", &USteamProUserStats::execSetStatFloat },
		{ "SetStatInt", &USteamProUserStats::execSetStatInt },
		{ "StoreStats", &USteamProUserStats::execStoreStats },
		{ "UpdateAvgRateStat", &USteamProUserStats::execUpdateAvgRateStat },
		{ "UploadLeaderboardScore", &USteamProUserStats::execUploadLeaderboardScore },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamProUserStats);
UClass* Z_Construct_UClass_USteamProUserStats_NoRegister()
{
	return USteamProUserStats::StaticClass();
}
struct Z_Construct_UClass_USteamProUserStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamUserStats/SteamUserStats.h" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserAchievementIconFetched_MetaData[] = {
		{ "Category", "SteamCore|UserStats|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserAchievementStored_MetaData[] = {
		{ "Category", "SteamCore|UserStats|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserStatsReceived_MetaData[] = {
		{ "Category", "SteamCore|UserStats|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserStatsStored_MetaData[] = {
		{ "Category", "SteamCore|UserStats|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserStatsUnloaded_MetaData[] = {
		{ "Category", "SteamCore|UserStats|Delegates" },
		{ "ModuleRelativePath", "Public/SteamUserStats/SteamUserStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_UserAchievementIconFetched;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_UserAchievementStored;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_UserStatsReceived;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_UserStatsStored;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_UserStatsUnloaded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamProUserStats_AttachLeaderboardUGC, "AttachLeaderboardUGC" }, // 2283221113
		{ &Z_Construct_UFunction_USteamProUserStats_ClearAchievement, "ClearAchievement" }, // 1419631688
		{ &Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntries, "DownloadLeaderboardEntries" }, // 1349756843
		{ &Z_Construct_UFunction_USteamProUserStats_DownloadLeaderboardEntriesForUsers, "DownloadLeaderboardEntriesForUsers" }, // 196897751
		{ &Z_Construct_UFunction_USteamProUserStats_FindLeaderboard, "FindLeaderboard" }, // 2575670828
		{ &Z_Construct_UFunction_USteamProUserStats_FindOrCreateLeaderboard, "FindOrCreateLeaderboard" }, // 383703853
		{ &Z_Construct_UFunction_USteamProUserStats_GetAchievement, "GetAchievement" }, // 1330128153
		{ &Z_Construct_UFunction_USteamProUserStats_GetAchievementAchievedPercent, "GetAchievementAchievedPercent" }, // 1911404829
		{ &Z_Construct_UFunction_USteamProUserStats_GetAchievementAndUnlockTime, "GetAchievementAndUnlockTime" }, // 1328664080
		{ &Z_Construct_UFunction_USteamProUserStats_GetAchievementDisplayAttribute, "GetAchievementDisplayAttribute" }, // 1943996560
		{ &Z_Construct_UFunction_USteamProUserStats_GetAchievementIcon, "GetAchievementIcon" }, // 1256967814
		{ &Z_Construct_UFunction_USteamProUserStats_GetAchievementName, "GetAchievementName" }, // 287875596
		{ &Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimits, "GetAchievementProgressLimits" }, // 901434631
		{ &Z_Construct_UFunction_USteamProUserStats_GetAchievementProgressLimitsFloat, "GetAchievementProgressLimitsFloat" }, // 2155993355
		{ &Z_Construct_UFunction_USteamProUserStats_GetDownloadedLeaderboardEntry, "GetDownloadedLeaderboardEntry" }, // 508491779
		{ &Z_Construct_UFunction_USteamProUserStats_GetGlobalStatFloat, "GetGlobalStatFloat" }, // 1327673265
		{ &Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryFloat, "GetGlobalStatHistoryFloat" }, // 2218464587
		{ &Z_Construct_UFunction_USteamProUserStats_GetGlobalStatHistoryInt, "GetGlobalStatHistoryInt" }, // 570143182
		{ &Z_Construct_UFunction_USteamProUserStats_GetGlobalStatInt, "GetGlobalStatInt" }, // 665220323
		{ &Z_Construct_UFunction_USteamProUserStats_GetLeaderboardDisplayType, "GetLeaderboardDisplayType" }, // 3952540082
		{ &Z_Construct_UFunction_USteamProUserStats_GetLeaderboardEntryCount, "GetLeaderboardEntryCount" }, // 2831154835
		{ &Z_Construct_UFunction_USteamProUserStats_GetLeaderboardName, "GetLeaderboardName" }, // 2057959038
		{ &Z_Construct_UFunction_USteamProUserStats_GetLeaderboardSortMethod, "GetLeaderboardSortMethod" }, // 3282713115
		{ &Z_Construct_UFunction_USteamProUserStats_GetMostAchievedAchievementInfo, "GetMostAchievedAchievementInfo" }, // 1242253345
		{ &Z_Construct_UFunction_USteamProUserStats_GetNextMostAchievedAchievementInfo, "GetNextMostAchievedAchievementInfo" }, // 1567246262
		{ &Z_Construct_UFunction_USteamProUserStats_GetNumAchievements, "GetNumAchievements" }, // 1568301640
		{ &Z_Construct_UFunction_USteamProUserStats_GetNumberOfCurrentPlayers, "GetNumberOfCurrentPlayers" }, // 1197278221
		{ &Z_Construct_UFunction_USteamProUserStats_GetStatFloat, "GetStatFloat" }, // 109773053
		{ &Z_Construct_UFunction_USteamProUserStats_GetStatInt, "GetStatInt" }, // 1512131920
		{ &Z_Construct_UFunction_USteamProUserStats_GetSteamUserStats, "GetSteamUserStats" }, // 3619677873
		{ &Z_Construct_UFunction_USteamProUserStats_GetUserAchievement, "GetUserAchievement" }, // 2977390092
		{ &Z_Construct_UFunction_USteamProUserStats_GetUserAchievementAndUnlockTime, "GetUserAchievementAndUnlockTime" }, // 4191926762
		{ &Z_Construct_UFunction_USteamProUserStats_GetUserStatFloat, "GetUserStatFloat" }, // 675601558
		{ &Z_Construct_UFunction_USteamProUserStats_GetUserStatInteger, "GetUserStatInteger" }, // 2403023451
		{ &Z_Construct_UFunction_USteamProUserStats_IndicateAchievementProgress, "IndicateAchievementProgress" }, // 868379811
		{ &Z_Construct_UFunction_USteamProUserStats_RequestCurrentStats, "RequestCurrentStats" }, // 260781782
		{ &Z_Construct_UFunction_USteamProUserStats_RequestGlobalAchievementPercentages, "RequestGlobalAchievementPercentages" }, // 2324360363
		{ &Z_Construct_UFunction_USteamProUserStats_RequestGlobalStats, "RequestGlobalStats" }, // 1927638997
		{ &Z_Construct_UFunction_USteamProUserStats_RequestUserStats, "RequestUserStats" }, // 1772281796
		{ &Z_Construct_UFunction_USteamProUserStats_ResetAllStats, "ResetAllStats" }, // 18735282
		{ &Z_Construct_UFunction_USteamProUserStats_SetAchievement, "SetAchievement" }, // 2132141709
		{ &Z_Construct_UFunction_USteamProUserStats_SetStatFloat, "SetStatFloat" }, // 1233968883
		{ &Z_Construct_UFunction_USteamProUserStats_SetStatInt, "SetStatInt" }, // 732872875
		{ &Z_Construct_UFunction_USteamProUserStats_StoreStats, "StoreStats" }, // 1661373259
		{ &Z_Construct_UFunction_USteamProUserStats_UpdateAvgRateStat, "UpdateAvgRateStat" }, // 2515637939
		{ &Z_Construct_UFunction_USteamProUserStats_UploadLeaderboardScore, "UploadLeaderboardScore" }, // 2448913765
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamProUserStats>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProUserStats_Statics::NewProp_UserAchievementIconFetched = { "UserAchievementIconFetched", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProUserStats, UserAchievementIconFetched), Z_Construct_UDelegateFunction_SteamCorePro_OnUserAchievementIconFetched__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserAchievementIconFetched_MetaData), NewProp_UserAchievementIconFetched_MetaData) }; // 2977383819
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProUserStats_Statics::NewProp_UserAchievementStored = { "UserAchievementStored", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProUserStats, UserAchievementStored), Z_Construct_UDelegateFunction_SteamCorePro_OnUserAchievementStored__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserAchievementStored_MetaData), NewProp_UserAchievementStored_MetaData) }; // 1487649970
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProUserStats_Statics::NewProp_UserStatsReceived = { "UserStatsReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProUserStats, UserStatsReceived), Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserStatsReceived_MetaData), NewProp_UserStatsReceived_MetaData) }; // 2163609549
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProUserStats_Statics::NewProp_UserStatsStored = { "UserStatsStored", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProUserStats, UserStatsStored), Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsStored__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserStatsStored_MetaData), NewProp_UserStatsStored_MetaData) }; // 607242153
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamProUserStats_Statics::NewProp_UserStatsUnloaded = { "UserStatsUnloaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamProUserStats, UserStatsUnloaded), Z_Construct_UDelegateFunction_SteamCorePro_OnUserStatsUnloaded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserStatsUnloaded_MetaData), NewProp_UserStatsUnloaded_MetaData) }; // 3474296428
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamProUserStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProUserStats_Statics::NewProp_UserAchievementIconFetched,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProUserStats_Statics::NewProp_UserAchievementStored,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProUserStats_Statics::NewProp_UserStatsReceived,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProUserStats_Statics::NewProp_UserStatsStored,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamProUserStats_Statics::NewProp_UserStatsUnloaded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProUserStats_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamProUserStats_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USteamCoreInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProUserStats_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamProUserStats_Statics::ClassParams = {
	&USteamProUserStats::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamProUserStats_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamProUserStats_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamProUserStats_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamProUserStats_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamProUserStats()
{
	if (!Z_Registration_Info_UClass_USteamProUserStats.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamProUserStats.OuterSingleton, Z_Construct_UClass_USteamProUserStats_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamProUserStats.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamProUserStats>()
{
	return USteamProUserStats::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamProUserStats);
// End Class USteamProUserStats

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUserStats_SteamUserStats_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamProUserStats, USteamProUserStats::StaticClass, TEXT("USteamProUserStats"), &Z_Registration_Info_UClass_USteamProUserStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamProUserStats), 3678601581U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUserStats_SteamUserStats_h_1517321796(TEXT("/Script/SteamCorePro"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUserStats_SteamUserStats_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamUserStats_SteamUserStats_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
