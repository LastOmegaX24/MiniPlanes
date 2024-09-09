// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GMCEditor/Public/Montage/GMCK2Node_PlayMontage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMCK2Node_PlayMontage() {}

// Begin Cross Module References
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_BaseAsyncTask();
GMCEDITOR_API UClass* Z_Construct_UClass_UGMC_K2Node_PlayMontage();
GMCEDITOR_API UClass* Z_Construct_UClass_UGMC_K2Node_PlayMontage_NoRegister();
UPackage* Z_Construct_UPackage__Script_GMCEditor();
// End Cross Module References

// Begin Class UGMC_K2Node_PlayMontage
void UGMC_K2Node_PlayMontage::StaticRegisterNativesUGMC_K2Node_PlayMontage()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGMC_K2Node_PlayMontage);
UClass* Z_Construct_UClass_UGMC_K2Node_PlayMontage_NoRegister()
{
	return UGMC_K2Node_PlayMontage::StaticClass();
}
struct Z_Construct_UClass_UGMC_K2Node_PlayMontage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Montage/GMCK2Node_PlayMontage.h" },
		{ "ModuleRelativePath", "Public/Montage/GMCK2Node_PlayMontage.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGMC_K2Node_PlayMontage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGMC_K2Node_PlayMontage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UK2Node_BaseAsyncTask,
	(UObject* (*)())Z_Construct_UPackage__Script_GMCEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_K2Node_PlayMontage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGMC_K2Node_PlayMontage_Statics::ClassParams = {
	&UGMC_K2Node_PlayMontage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_K2Node_PlayMontage_Statics::Class_MetaDataParams), Z_Construct_UClass_UGMC_K2Node_PlayMontage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGMC_K2Node_PlayMontage()
{
	if (!Z_Registration_Info_UClass_UGMC_K2Node_PlayMontage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGMC_K2Node_PlayMontage.OuterSingleton, Z_Construct_UClass_UGMC_K2Node_PlayMontage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGMC_K2Node_PlayMontage.OuterSingleton;
}
template<> GMCEDITOR_API UClass* StaticClass<UGMC_K2Node_PlayMontage>()
{
	return UGMC_K2Node_PlayMontage::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGMC_K2Node_PlayMontage);
UGMC_K2Node_PlayMontage::~UGMC_K2Node_PlayMontage() {}
// End Class UGMC_K2Node_PlayMontage

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCEditor_Public_Montage_GMCK2Node_PlayMontage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGMC_K2Node_PlayMontage, UGMC_K2Node_PlayMontage::StaticClass, TEXT("UGMC_K2Node_PlayMontage"), &Z_Registration_Info_UClass_UGMC_K2Node_PlayMontage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGMC_K2Node_PlayMontage), 2888895839U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCEditor_Public_Montage_GMCK2Node_PlayMontage_h_1702924754(TEXT("/Script/GMCEditor"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCEditor_Public_Montage_GMCK2Node_PlayMontage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCEditor_Public_Montage_GMCK2Node_PlayMontage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
