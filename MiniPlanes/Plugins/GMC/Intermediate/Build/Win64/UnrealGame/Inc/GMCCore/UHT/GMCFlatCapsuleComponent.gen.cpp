// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GMCCore/Public/Components/GMCFlatCapsuleComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMCFlatCapsuleComponent() {}

// Begin Cross Module References
GMCCORE_API UClass* Z_Construct_UClass_UGMC_CapsuleCmp();
GMCCORE_API UClass* Z_Construct_UClass_UGMC_FlatCapsuleCmp();
GMCCORE_API UClass* Z_Construct_UClass_UGMC_FlatCapsuleCmp_NoRegister();
UPackage* Z_Construct_UPackage__Script_GMCCore();
// End Cross Module References

// Begin Class UGMC_FlatCapsuleCmp
void UGMC_FlatCapsuleCmp::StaticRegisterNativesUGMC_FlatCapsuleCmp()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGMC_FlatCapsuleCmp);
UClass* Z_Construct_UClass_UGMC_FlatCapsuleCmp_NoRegister()
{
	return UGMC_FlatCapsuleCmp::StaticClass();
}
struct Z_Construct_UClass_UGMC_FlatCapsuleCmp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Collision" },
		{ "Comment", "/// A horizontally oriented capsule component.\n" },
		{ "DisplayName", "Flat Capsule Collision" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "Components/GMCFlatCapsuleComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/GMCFlatCapsuleComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A horizontally oriented capsule component." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGMC_FlatCapsuleCmp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGMC_FlatCapsuleCmp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGMC_CapsuleCmp,
	(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_FlatCapsuleCmp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGMC_FlatCapsuleCmp_Statics::ClassParams = {
	&UGMC_FlatCapsuleCmp::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_FlatCapsuleCmp_Statics::Class_MetaDataParams), Z_Construct_UClass_UGMC_FlatCapsuleCmp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGMC_FlatCapsuleCmp()
{
	if (!Z_Registration_Info_UClass_UGMC_FlatCapsuleCmp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGMC_FlatCapsuleCmp.OuterSingleton, Z_Construct_UClass_UGMC_FlatCapsuleCmp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGMC_FlatCapsuleCmp.OuterSingleton;
}
template<> GMCCORE_API UClass* StaticClass<UGMC_FlatCapsuleCmp>()
{
	return UGMC_FlatCapsuleCmp::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGMC_FlatCapsuleCmp);
UGMC_FlatCapsuleCmp::~UGMC_FlatCapsuleCmp() {}
// End Class UGMC_FlatCapsuleCmp

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCFlatCapsuleComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGMC_FlatCapsuleCmp, UGMC_FlatCapsuleCmp::StaticClass, TEXT("UGMC_FlatCapsuleCmp"), &Z_Registration_Info_UClass_UGMC_FlatCapsuleCmp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGMC_FlatCapsuleCmp), 2740921822U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCFlatCapsuleComponent_h_1812234304(TEXT("/Script/GMCCore"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCFlatCapsuleComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCFlatCapsuleComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
