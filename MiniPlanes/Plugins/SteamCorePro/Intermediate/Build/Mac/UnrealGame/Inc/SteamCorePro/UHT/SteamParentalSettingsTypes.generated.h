// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamParentalSettings/SteamParentalSettingsTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMCOREPRO_SteamParentalSettingsTypes_generated_h
#error "SteamParentalSettingsTypes.generated.h already included, missing '#pragma once' in SteamParentalSettingsTypes.h"
#endif
#define STEAMCOREPRO_SteamParentalSettingsTypes_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParentalSettings_SteamParentalSettingsTypes_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamParentalSettingsChanged_Statics; \
	STEAMCOREPRO_API static class UScriptStruct* StaticStruct();


template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<struct FSteamParentalSettingsChanged>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParentalSettings_SteamParentalSettingsTypes_h


#define FOREACH_ENUM_ESTEAMPARENTALFEATURE(op) \
	op(ESteamParentalFeature::k_EFeatureInvalid) \
	op(ESteamParentalFeature::k_EFeatureStore) \
	op(ESteamParentalFeature::k_EFeatureCommunity) \
	op(ESteamParentalFeature::k_EFeatureProfile) \
	op(ESteamParentalFeature::k_EFeatureFriends) \
	op(ESteamParentalFeature::k_EFeatureNews) \
	op(ESteamParentalFeature::k_EFeatureTrading) \
	op(ESteamParentalFeature::k_EFeatureSettings) \
	op(ESteamParentalFeature::k_EFeatureConsole) \
	op(ESteamParentalFeature::k_EFeatureBrowser) \
	op(ESteamParentalFeature::k_EFeatureParentalSetup) \
	op(ESteamParentalFeature::k_EFeatureLibrary) \
	op(ESteamParentalFeature::k_EFeatureTest) \
	op(ESteamParentalFeature::k_EFeatureSiteLicense) \
	op(ESteamParentalFeature::k_EFeatureKioskMode_Deprecated) \
	op(ESteamParentalFeature::k_EFeatureBlockAlways) \
	op(ESteamParentalFeature::k_EFeatureMax) 

enum class ESteamParentalFeature : uint8;
template<> struct TIsUEnumClass<ESteamParentalFeature> { enum { Value = true }; };
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamParentalFeature>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
