// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamTimeline/SteamTimelineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamTimelineTypes() {}

// Begin Cross Module References
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamTimelineEventClipPriority();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamTimelineGameMode();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Enum ESteamTimelineGameMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamTimelineGameMode;
static UEnum* ESteamTimelineGameMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamTimelineGameMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamTimelineGameMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamTimelineGameMode, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamTimelineGameMode"));
	}
	return Z_Registration_Info_UEnum_ESteamTimelineGameMode.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamTimelineGameMode>()
{
	return ESteamTimelineGameMode_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamTimelineGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Controls the color of the timeline bar segments. The value names listed here map to a multiplayer game, where\n// the user starts a game (in menus), then joins a multiplayer session that first has a character selection lobby\n// then finally the multiplayer session starts. However, you can also map these values to any type of game. In a single\n// player game where you visit towns & dungeons, you could set k_ETimelineGameMode_Menus when the player is in a town\n// buying items, k_ETimelineGameMode_Staging for when a dungeon is loading and k_ETimelineGameMode_Playing for when\n// inside the dungeon fighting monsters.\n" },
		{ "k_ETimelineGameMode_Invalid.Name", "ESteamTimelineGameMode::k_ETimelineGameMode_Invalid" },
		{ "k_ETimelineGameMode_LoadingScreen.Name", "ESteamTimelineGameMode::k_ETimelineGameMode_LoadingScreen" },
		{ "k_ETimelineGameMode_Max.Name", "ESteamTimelineGameMode::k_ETimelineGameMode_Max" },
		{ "k_ETimelineGameMode_Menus.Name", "ESteamTimelineGameMode::k_ETimelineGameMode_Menus" },
		{ "k_ETimelineGameMode_Playing.Name", "ESteamTimelineGameMode::k_ETimelineGameMode_Playing" },
		{ "k_ETimelineGameMode_Staging.Name", "ESteamTimelineGameMode::k_ETimelineGameMode_Staging" },
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimelineTypes.h" },
		{ "ToolTip", "Controls the color of the timeline bar segments. The value names listed here map to a multiplayer game, where\nthe user starts a game (in menus), then joins a multiplayer session that first has a character selection lobby\nthen finally the multiplayer session starts. However, you can also map these values to any type of game. In a single\nplayer game where you visit towns & dungeons, you could set k_ETimelineGameMode_Menus when the player is in a town\nbuying items, k_ETimelineGameMode_Staging for when a dungeon is loading and k_ETimelineGameMode_Playing for when\ninside the dungeon fighting monsters." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamTimelineGameMode::k_ETimelineGameMode_Invalid", (int64)ESteamTimelineGameMode::k_ETimelineGameMode_Invalid },
		{ "ESteamTimelineGameMode::k_ETimelineGameMode_Playing", (int64)ESteamTimelineGameMode::k_ETimelineGameMode_Playing },
		{ "ESteamTimelineGameMode::k_ETimelineGameMode_Staging", (int64)ESteamTimelineGameMode::k_ETimelineGameMode_Staging },
		{ "ESteamTimelineGameMode::k_ETimelineGameMode_Menus", (int64)ESteamTimelineGameMode::k_ETimelineGameMode_Menus },
		{ "ESteamTimelineGameMode::k_ETimelineGameMode_LoadingScreen", (int64)ESteamTimelineGameMode::k_ETimelineGameMode_LoadingScreen },
		{ "ESteamTimelineGameMode::k_ETimelineGameMode_Max", (int64)ESteamTimelineGameMode::k_ETimelineGameMode_Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamTimelineGameMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamTimelineGameMode",
	"ESteamTimelineGameMode",
	Z_Construct_UEnum_SteamCorePro_ESteamTimelineGameMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamTimelineGameMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamTimelineGameMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamTimelineGameMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamTimelineGameMode()
{
	if (!Z_Registration_Info_UEnum_ESteamTimelineGameMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamTimelineGameMode.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamTimelineGameMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamTimelineGameMode.InnerSingleton;
}
// End Enum ESteamTimelineGameMode

// Begin Enum ESteamTimelineEventClipPriority
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamTimelineEventClipPriority;
static UEnum* ESteamTimelineEventClipPriority_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamTimelineEventClipPriority.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamTimelineEventClipPriority.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamTimelineEventClipPriority, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamTimelineEventClipPriority"));
	}
	return Z_Registration_Info_UEnum_ESteamTimelineEventClipPriority.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamTimelineEventClipPriority>()
{
	return ESteamTimelineEventClipPriority_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamTimelineEventClipPriority_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Used in AddTimelineEvent, where Featured events will be offered before Standard events\n" },
		{ "k_ETimelineEventClipPriority_Featured.Name", "ESteamTimelineEventClipPriority::k_ETimelineEventClipPriority_Featured" },
		{ "k_ETimelineEventClipPriority_Invalid.Name", "ESteamTimelineEventClipPriority::k_ETimelineEventClipPriority_Invalid" },
		{ "k_ETimelineEventClipPriority_None.Name", "ESteamTimelineEventClipPriority::k_ETimelineEventClipPriority_None" },
		{ "k_ETimelineEventClipPriority_Standard.Name", "ESteamTimelineEventClipPriority::k_ETimelineEventClipPriority_Standard" },
		{ "ModuleRelativePath", "Public/SteamTimeline/SteamTimelineTypes.h" },
		{ "ToolTip", "Used in AddTimelineEvent, where Featured events will be offered before Standard events" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamTimelineEventClipPriority::k_ETimelineEventClipPriority_Invalid", (int64)ESteamTimelineEventClipPriority::k_ETimelineEventClipPriority_Invalid },
		{ "ESteamTimelineEventClipPriority::k_ETimelineEventClipPriority_None", (int64)ESteamTimelineEventClipPriority::k_ETimelineEventClipPriority_None },
		{ "ESteamTimelineEventClipPriority::k_ETimelineEventClipPriority_Standard", (int64)ESteamTimelineEventClipPriority::k_ETimelineEventClipPriority_Standard },
		{ "ESteamTimelineEventClipPriority::k_ETimelineEventClipPriority_Featured", (int64)ESteamTimelineEventClipPriority::k_ETimelineEventClipPriority_Featured },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamTimelineEventClipPriority_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamTimelineEventClipPriority",
	"ESteamTimelineEventClipPriority",
	Z_Construct_UEnum_SteamCorePro_ESteamTimelineEventClipPriority_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamTimelineEventClipPriority_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamTimelineEventClipPriority_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamTimelineEventClipPriority_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamTimelineEventClipPriority()
{
	if (!Z_Registration_Info_UEnum_ESteamTimelineEventClipPriority.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamTimelineEventClipPriority.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamTimelineEventClipPriority_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamTimelineEventClipPriority.InnerSingleton;
}
// End Enum ESteamTimelineEventClipPriority

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamTimeline_SteamTimelineTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESteamTimelineGameMode_StaticEnum, TEXT("ESteamTimelineGameMode"), &Z_Registration_Info_UEnum_ESteamTimelineGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3202774101U) },
		{ ESteamTimelineEventClipPriority_StaticEnum, TEXT("ESteamTimelineEventClipPriority"), &Z_Registration_Info_UEnum_ESteamTimelineEventClipPriority, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1994647307U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamTimeline_SteamTimelineTypes_h_2950298640(TEXT("/Script/SteamCorePro"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamTimeline_SteamTimelineTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamTimeline_SteamTimelineTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
