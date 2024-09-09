// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamParentalSettings/SteamParentalSettingsTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamParentalSettingsTypes() {}

// Begin Cross Module References
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamParentalFeature();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamParentalSettingsChanged();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Enum ESteamParentalFeature
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamParentalFeature;
static UEnum* ESteamParentalFeature_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamParentalFeature.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamParentalFeature.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamParentalFeature, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamParentalFeature"));
	}
	return Z_Registration_Info_UEnum_ESteamParentalFeature.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamParentalFeature>()
{
	return ESteamParentalFeature_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamParentalFeature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "k_EFeatureBlockAlways.Name", "ESteamParentalFeature::k_EFeatureBlockAlways" },
		{ "k_EFeatureBrowser.Name", "ESteamParentalFeature::k_EFeatureBrowser" },
		{ "k_EFeatureCommunity.Name", "ESteamParentalFeature::k_EFeatureCommunity" },
		{ "k_EFeatureConsole.Name", "ESteamParentalFeature::k_EFeatureConsole" },
		{ "k_EFeatureFriends.Name", "ESteamParentalFeature::k_EFeatureFriends" },
		{ "k_EFeatureInvalid.Name", "ESteamParentalFeature::k_EFeatureInvalid" },
		{ "k_EFeatureKioskMode_Deprecated.Name", "ESteamParentalFeature::k_EFeatureKioskMode_Deprecated" },
		{ "k_EFeatureLibrary.Name", "ESteamParentalFeature::k_EFeatureLibrary" },
		{ "k_EFeatureMax.Name", "ESteamParentalFeature::k_EFeatureMax" },
		{ "k_EFeatureNews.Name", "ESteamParentalFeature::k_EFeatureNews" },
		{ "k_EFeatureParentalSetup.Name", "ESteamParentalFeature::k_EFeatureParentalSetup" },
		{ "k_EFeatureProfile.Name", "ESteamParentalFeature::k_EFeatureProfile" },
		{ "k_EFeatureSettings.Name", "ESteamParentalFeature::k_EFeatureSettings" },
		{ "k_EFeatureSiteLicense.Name", "ESteamParentalFeature::k_EFeatureSiteLicense" },
		{ "k_EFeatureStore.Name", "ESteamParentalFeature::k_EFeatureStore" },
		{ "k_EFeatureTest.Name", "ESteamParentalFeature::k_EFeatureTest" },
		{ "k_EFeatureTrading.Name", "ESteamParentalFeature::k_EFeatureTrading" },
		{ "ModuleRelativePath", "Public/SteamParentalSettings/SteamParentalSettingsTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamParentalFeature::k_EFeatureInvalid", (int64)ESteamParentalFeature::k_EFeatureInvalid },
		{ "ESteamParentalFeature::k_EFeatureStore", (int64)ESteamParentalFeature::k_EFeatureStore },
		{ "ESteamParentalFeature::k_EFeatureCommunity", (int64)ESteamParentalFeature::k_EFeatureCommunity },
		{ "ESteamParentalFeature::k_EFeatureProfile", (int64)ESteamParentalFeature::k_EFeatureProfile },
		{ "ESteamParentalFeature::k_EFeatureFriends", (int64)ESteamParentalFeature::k_EFeatureFriends },
		{ "ESteamParentalFeature::k_EFeatureNews", (int64)ESteamParentalFeature::k_EFeatureNews },
		{ "ESteamParentalFeature::k_EFeatureTrading", (int64)ESteamParentalFeature::k_EFeatureTrading },
		{ "ESteamParentalFeature::k_EFeatureSettings", (int64)ESteamParentalFeature::k_EFeatureSettings },
		{ "ESteamParentalFeature::k_EFeatureConsole", (int64)ESteamParentalFeature::k_EFeatureConsole },
		{ "ESteamParentalFeature::k_EFeatureBrowser", (int64)ESteamParentalFeature::k_EFeatureBrowser },
		{ "ESteamParentalFeature::k_EFeatureParentalSetup", (int64)ESteamParentalFeature::k_EFeatureParentalSetup },
		{ "ESteamParentalFeature::k_EFeatureLibrary", (int64)ESteamParentalFeature::k_EFeatureLibrary },
		{ "ESteamParentalFeature::k_EFeatureTest", (int64)ESteamParentalFeature::k_EFeatureTest },
		{ "ESteamParentalFeature::k_EFeatureSiteLicense", (int64)ESteamParentalFeature::k_EFeatureSiteLicense },
		{ "ESteamParentalFeature::k_EFeatureKioskMode_Deprecated", (int64)ESteamParentalFeature::k_EFeatureKioskMode_Deprecated },
		{ "ESteamParentalFeature::k_EFeatureBlockAlways", (int64)ESteamParentalFeature::k_EFeatureBlockAlways },
		{ "ESteamParentalFeature::k_EFeatureMax", (int64)ESteamParentalFeature::k_EFeatureMax },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamParentalFeature_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamParentalFeature",
	"ESteamParentalFeature",
	Z_Construct_UEnum_SteamCorePro_ESteamParentalFeature_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamParentalFeature_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamParentalFeature_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamParentalFeature_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamParentalFeature()
{
	if (!Z_Registration_Info_UEnum_ESteamParentalFeature.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamParentalFeature.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamParentalFeature_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamParentalFeature.InnerSingleton;
}
// End Enum ESteamParentalFeature

// Begin ScriptStruct FSteamParentalSettingsChanged
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamParentalSettingsChanged;
class UScriptStruct* FSteamParentalSettingsChanged::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamParentalSettingsChanged.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamParentalSettingsChanged.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamParentalSettingsChanged, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("SteamParentalSettingsChanged"));
	}
	return Z_Registration_Info_UScriptStruct_SteamParentalSettingsChanged.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FSteamParentalSettingsChanged>()
{
	return FSteamParentalSettingsChanged::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSteamParentalSettingsChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamParentalSettings/SteamParentalSettingsTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamParentalSettingsChanged>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamParentalSettingsChanged_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"SteamParentalSettingsChanged",
	nullptr,
	0,
	sizeof(FSteamParentalSettingsChanged),
	alignof(FSteamParentalSettingsChanged),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamParentalSettingsChanged_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamParentalSettingsChanged_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamParentalSettingsChanged()
{
	if (!Z_Registration_Info_UScriptStruct_SteamParentalSettingsChanged.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamParentalSettingsChanged.InnerSingleton, Z_Construct_UScriptStruct_FSteamParentalSettingsChanged_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SteamParentalSettingsChanged.InnerSingleton;
}
// End ScriptStruct FSteamParentalSettingsChanged

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParentalSettings_SteamParentalSettingsTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESteamParentalFeature_StaticEnum, TEXT("ESteamParentalFeature"), &Z_Registration_Info_UEnum_ESteamParentalFeature, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2715660404U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSteamParentalSettingsChanged::StaticStruct, Z_Construct_UScriptStruct_FSteamParentalSettingsChanged_Statics::NewStructOps, TEXT("SteamParentalSettingsChanged"), &Z_Registration_Info_UScriptStruct_SteamParentalSettingsChanged, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamParentalSettingsChanged), 2811899067U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParentalSettings_SteamParentalSettingsTypes_h_4029300188(TEXT("/Script/SteamCorePro"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParentalSettings_SteamParentalSettingsTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParentalSettings_SteamParentalSettingsTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParentalSettings_SteamParentalSettingsTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParentalSettings_SteamParentalSettingsTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
