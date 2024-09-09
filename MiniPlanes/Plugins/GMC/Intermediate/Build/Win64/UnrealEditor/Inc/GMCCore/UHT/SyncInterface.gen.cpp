// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GMCCore/Public/Replication/SyncInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSyncInterface() {}

// Begin Cross Module References
GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_PawnState();
UPackage* Z_Construct_UPackage__Script_GMCCore();
// End Cross Module References

// Begin ScriptStruct FGMC_PawnState
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_PawnState;
class UScriptStruct* FGMC_PawnState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_PawnState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_PawnState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_PawnState, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_PawnState"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_PawnState.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_PawnState>()
{
	return FGMC_PawnState::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGMC_PawnState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Replication/SyncInterface.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_PawnState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_PawnState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
	nullptr,
	&NewStructOps,
	"GMC_PawnState",
	nullptr,
	0,
	sizeof(FGMC_PawnState),
	alignof(FGMC_PawnState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_PawnState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_PawnState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGMC_PawnState()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_PawnState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_PawnState.InnerSingleton, Z_Construct_UScriptStruct_FGMC_PawnState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GMC_PawnState.InnerSingleton;
}
// End ScriptStruct FGMC_PawnState

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_SyncInterface_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGMC_PawnState::StaticStruct, Z_Construct_UScriptStruct_FGMC_PawnState_Statics::NewStructOps, TEXT("GMC_PawnState"), &Z_Registration_Info_UScriptStruct_GMC_PawnState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_PawnState), 1888488850U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_SyncInterface_h_1583076730(TEXT("/Script/GMCCore"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_SyncInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_SyncInterface_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
