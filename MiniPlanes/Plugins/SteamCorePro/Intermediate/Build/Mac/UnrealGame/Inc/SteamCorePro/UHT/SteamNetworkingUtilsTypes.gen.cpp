// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamNetworkingUtils/SteamNetworkingUtilsTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamNetworkingUtilsTypes() {}

// Begin Cross Module References
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamNetworkPingLocation();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin ScriptStruct FSteamNetworkPingLocation
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamNetworkPingLocation;
class UScriptStruct* FSteamNetworkPingLocation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamNetworkPingLocation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamNetworkPingLocation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamNetworkPingLocation, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("SteamNetworkPingLocation"));
	}
	return Z_Registration_Info_UScriptStruct_SteamNetworkPingLocation.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FSteamNetworkPingLocation>()
{
	return FSteamNetworkPingLocation::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamNetworkingUtils/SteamNetworkingUtilsTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "NetworkingUtils" },
		{ "ModuleRelativePath", "Public/SteamNetworkingUtils/SteamNetworkingUtilsTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamNetworkPingLocation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamNetworkPingLocation, Location), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"SteamNetworkPingLocation",
	Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::PropPointers),
	sizeof(FSteamNetworkPingLocation),
	alignof(FSteamNetworkPingLocation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamNetworkPingLocation()
{
	if (!Z_Registration_Info_UScriptStruct_SteamNetworkPingLocation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamNetworkPingLocation.InnerSingleton, Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SteamNetworkPingLocation.InnerSingleton;
}
// End ScriptStruct FSteamNetworkPingLocation

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamNetworkingUtils_SteamNetworkingUtilsTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSteamNetworkPingLocation::StaticStruct, Z_Construct_UScriptStruct_FSteamNetworkPingLocation_Statics::NewStructOps, TEXT("SteamNetworkPingLocation"), &Z_Registration_Info_UScriptStruct_SteamNetworkPingLocation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamNetworkPingLocation), 2210185824U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamNetworkingUtils_SteamNetworkingUtilsTypes_h_3012384070(TEXT("/Script/SteamCorePro"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamNetworkingUtils_SteamNetworkingUtilsTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamNetworkingUtils_SteamNetworkingUtilsTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
