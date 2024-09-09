// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GMCCore/Public/Replication/SyncTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSyncTypes() {}

// Begin Cross Module References
GMCCORE_API UEnum* Z_Construct_UEnum_GMCCore_EGMC_SyncType();
UPackage* Z_Construct_UPackage__Script_GMCCore();
// End Cross Module References

// Begin Enum EGMC_SyncType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGMC_SyncType;
static UEnum* EGMC_SyncType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGMC_SyncType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGMC_SyncType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GMCCore_EGMC_SyncType, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("EGMC_SyncType"));
	}
	return Z_Registration_Info_UEnum_EGMC_SyncType.OuterSingleton;
}
template<> GMCCORE_API UEnum* StaticEnum<EGMC_SyncType>()
{
	return EGMC_SyncType_StaticEnum();
}
struct Z_Construct_UEnum_GMCCore_EGMC_SyncType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ActorBase.Name", "EGMC_SyncType::ActorBase" },
		{ "ActorComponentReference.Name", "EGMC_SyncType::ActorComponentReference" },
		{ "ActorLocation.Name", "EGMC_SyncType::ActorLocation" },
		{ "ActorReference.Name", "EGMC_SyncType::ActorReference" },
		{ "ActorRotation.Name", "EGMC_SyncType::ActorRotation" },
		{ "ActorScale.Name", "EGMC_SyncType::ActorScale" },
		{ "AngularVelocity.Name", "EGMC_SyncType::AngularVelocity" },
		{ "AnimMontageReference.Name", "EGMC_SyncType::AnimMontageReference" },
		{ "BlueprintType", "true" },
		{ "Bool.Name", "EGMC_SyncType::Bool" },
		{ "Byte.Name", "EGMC_SyncType::Byte" },
		{ "CompressedDoublePrecisionFloat.Name", "EGMC_SyncType::CompressedDoublePrecisionFloat" },
		{ "CompressedRotator.Name", "EGMC_SyncType::CompressedRotator" },
		{ "CompressedSinglePrecisionFloat.Name", "EGMC_SyncType::CompressedSinglePrecisionFloat" },
		{ "CompressedVector.Name", "EGMC_SyncType::CompressedVector" },
		{ "CompressedVector2D.Name", "EGMC_SyncType::CompressedVector2D" },
		{ "ControlRotation.Name", "EGMC_SyncType::ControlRotation" },
		{ "DoublePrecisionFloat.Name", "EGMC_SyncType::DoublePrecisionFloat" },
		{ "GameplayTag.Name", "EGMC_SyncType::GameplayTag" },
		{ "GameplayTagContainer.Name", "EGMC_SyncType::GameplayTagContainer" },
		{ "HalfByte.Name", "EGMC_SyncType::HalfByte" },
		{ "InstancedStruct.Name", "EGMC_SyncType::InstancedStruct" },
		{ "Int.Name", "EGMC_SyncType::Int" },
		{ "LinearVelocity.Name", "EGMC_SyncType::LinearVelocity" },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "EGMC_SyncType::MAX" },
		{ "ModuleRelativePath", "Public/Replication/SyncTypes.h" },
		{ "Name.Name", "EGMC_SyncType::Name" },
		{ "SinglePrecisionFloat.Name", "EGMC_SyncType::SinglePrecisionFloat" },
		{ "TruncatedDoublePrecisionFloat.Name", "EGMC_SyncType::TruncatedDoublePrecisionFloat" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGMC_SyncType::ActorBase", (int64)EGMC_SyncType::ActorBase },
		{ "EGMC_SyncType::LinearVelocity", (int64)EGMC_SyncType::LinearVelocity },
		{ "EGMC_SyncType::AngularVelocity", (int64)EGMC_SyncType::AngularVelocity },
		{ "EGMC_SyncType::ActorLocation", (int64)EGMC_SyncType::ActorLocation },
		{ "EGMC_SyncType::ActorRotation", (int64)EGMC_SyncType::ActorRotation },
		{ "EGMC_SyncType::ActorScale", (int64)EGMC_SyncType::ActorScale },
		{ "EGMC_SyncType::ControlRotation", (int64)EGMC_SyncType::ControlRotation },
		{ "EGMC_SyncType::Bool", (int64)EGMC_SyncType::Bool },
		{ "EGMC_SyncType::HalfByte", (int64)EGMC_SyncType::HalfByte },
		{ "EGMC_SyncType::Byte", (int64)EGMC_SyncType::Byte },
		{ "EGMC_SyncType::Int", (int64)EGMC_SyncType::Int },
		{ "EGMC_SyncType::SinglePrecisionFloat", (int64)EGMC_SyncType::SinglePrecisionFloat },
		{ "EGMC_SyncType::CompressedSinglePrecisionFloat", (int64)EGMC_SyncType::CompressedSinglePrecisionFloat },
		{ "EGMC_SyncType::DoublePrecisionFloat", (int64)EGMC_SyncType::DoublePrecisionFloat },
		{ "EGMC_SyncType::CompressedDoublePrecisionFloat", (int64)EGMC_SyncType::CompressedDoublePrecisionFloat },
		{ "EGMC_SyncType::TruncatedDoublePrecisionFloat", (int64)EGMC_SyncType::TruncatedDoublePrecisionFloat },
		{ "EGMC_SyncType::CompressedVector2D", (int64)EGMC_SyncType::CompressedVector2D },
		{ "EGMC_SyncType::CompressedVector", (int64)EGMC_SyncType::CompressedVector },
		{ "EGMC_SyncType::CompressedRotator", (int64)EGMC_SyncType::CompressedRotator },
		{ "EGMC_SyncType::ActorReference", (int64)EGMC_SyncType::ActorReference },
		{ "EGMC_SyncType::ActorComponentReference", (int64)EGMC_SyncType::ActorComponentReference },
		{ "EGMC_SyncType::AnimMontageReference", (int64)EGMC_SyncType::AnimMontageReference },
		{ "EGMC_SyncType::Name", (int64)EGMC_SyncType::Name },
		{ "EGMC_SyncType::GameplayTag", (int64)EGMC_SyncType::GameplayTag },
		{ "EGMC_SyncType::GameplayTagContainer", (int64)EGMC_SyncType::GameplayTagContainer },
		{ "EGMC_SyncType::InstancedStruct", (int64)EGMC_SyncType::InstancedStruct },
		{ "EGMC_SyncType::MAX", (int64)EGMC_SyncType::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GMCCore_EGMC_SyncType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GMCCore,
	nullptr,
	"EGMC_SyncType",
	"EGMC_SyncType",
	Z_Construct_UEnum_GMCCore_EGMC_SyncType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_SyncType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_SyncType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GMCCore_EGMC_SyncType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GMCCore_EGMC_SyncType()
{
	if (!Z_Registration_Info_UEnum_EGMC_SyncType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGMC_SyncType.InnerSingleton, Z_Construct_UEnum_GMCCore_EGMC_SyncType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGMC_SyncType.InnerSingleton;
}
// End Enum EGMC_SyncType

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_SyncTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGMC_SyncType_StaticEnum, TEXT("EGMC_SyncType"), &Z_Registration_Info_UEnum_EGMC_SyncType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2394879416U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_SyncTypes_h_2452759947(TEXT("/Script/GMCCore"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_SyncTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_SyncTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
