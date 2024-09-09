// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GMCCore/Public/Replication/FloatPrecision.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloatPrecision() {}

// Begin Cross Module References
GMCCORE_API UEnum* Z_Construct_UEnum_GMCCore_EGMC_FloatPrecisionBlueprint();
UPackage* Z_Construct_UPackage__Script_GMCCore();
// End Cross Module References

// Begin Enum EGMC_FloatPrecisionBlueprint
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGMC_FloatPrecisionBlueprint;
static UEnum* EGMC_FloatPrecisionBlueprint_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGMC_FloatPrecisionBlueprint.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGMC_FloatPrecisionBlueprint.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GMCCore_EGMC_FloatPrecisionBlueprint, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("EGMC_FloatPrecisionBlueprint"));
	}
	return Z_Registration_Info_UEnum_EGMC_FloatPrecisionBlueprint.OuterSingleton;
}
template<> GMCCORE_API UEnum* StaticEnum<EGMC_FloatPrecisionBlueprint>()
{
	return EGMC_FloatPrecisionBlueprint_StaticEnum();
}
struct Z_Construct_UEnum_GMCCore_EGMC_FloatPrecisionBlueprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FiveDecimals.Name", "EGMC_FloatPrecisionBlueprint::FiveDecimals" },
		{ "FourDecimals.Name", "EGMC_FloatPrecisionBlueprint::FourDecimals" },
		{ "FullPrecision.Name", "EGMC_FloatPrecisionBlueprint::FullPrecision" },
		{ "ModuleRelativePath", "Public/Replication/FloatPrecision.h" },
		{ "OneDecimal.Name", "EGMC_FloatPrecisionBlueprint::OneDecimal" },
		{ "SixDecimals.Name", "EGMC_FloatPrecisionBlueprint::SixDecimals" },
		{ "ThreeDecimals.Name", "EGMC_FloatPrecisionBlueprint::ThreeDecimals" },
		{ "TwoDecimals.Name", "EGMC_FloatPrecisionBlueprint::TwoDecimals" },
		{ "WholeNumber.Name", "EGMC_FloatPrecisionBlueprint::WholeNumber" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGMC_FloatPrecisionBlueprint::WholeNumber", (int64)EGMC_FloatPrecisionBlueprint::WholeNumber },
		{ "EGMC_FloatPrecisionBlueprint::OneDecimal", (int64)EGMC_FloatPrecisionBlueprint::OneDecimal },
		{ "EGMC_FloatPrecisionBlueprint::TwoDecimals", (int64)EGMC_FloatPrecisionBlueprint::TwoDecimals },
		{ "EGMC_FloatPrecisionBlueprint::ThreeDecimals", (int64)EGMC_FloatPrecisionBlueprint::ThreeDecimals },
		{ "EGMC_FloatPrecisionBlueprint::FourDecimals", (int64)EGMC_FloatPrecisionBlueprint::FourDecimals },
		{ "EGMC_FloatPrecisionBlueprint::FiveDecimals", (int64)EGMC_FloatPrecisionBlueprint::FiveDecimals },
		{ "EGMC_FloatPrecisionBlueprint::SixDecimals", (int64)EGMC_FloatPrecisionBlueprint::SixDecimals },
		{ "EGMC_FloatPrecisionBlueprint::FullPrecision", (int64)EGMC_FloatPrecisionBlueprint::FullPrecision },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GMCCore_EGMC_FloatPrecisionBlueprint_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GMCCore,
	nullptr,
	"EGMC_FloatPrecisionBlueprint",
	"EGMC_FloatPrecisionBlueprint",
	Z_Construct_UEnum_GMCCore_EGMC_FloatPrecisionBlueprint_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_FloatPrecisionBlueprint_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_FloatPrecisionBlueprint_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GMCCore_EGMC_FloatPrecisionBlueprint_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GMCCore_EGMC_FloatPrecisionBlueprint()
{
	if (!Z_Registration_Info_UEnum_EGMC_FloatPrecisionBlueprint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGMC_FloatPrecisionBlueprint.InnerSingleton, Z_Construct_UEnum_GMCCore_EGMC_FloatPrecisionBlueprint_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGMC_FloatPrecisionBlueprint.InnerSingleton;
}
// End Enum EGMC_FloatPrecisionBlueprint

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_FloatPrecision_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGMC_FloatPrecisionBlueprint_StaticEnum, TEXT("EGMC_FloatPrecisionBlueprint"), &Z_Registration_Info_UEnum_EGMC_FloatPrecisionBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1971695439U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_FloatPrecision_h_1353740977(TEXT("/Script/GMCCore"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_FloatPrecision_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_FloatPrecision_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
