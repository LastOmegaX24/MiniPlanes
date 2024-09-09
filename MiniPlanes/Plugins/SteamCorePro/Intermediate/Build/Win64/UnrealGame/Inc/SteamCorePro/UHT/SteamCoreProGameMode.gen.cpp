// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamCorePro/SteamCoreProGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreProGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
STEAMCOREPRO_API UClass* Z_Construct_UClass_ASteamCoreProGameMode();
STEAMCOREPRO_API UClass* Z_Construct_UClass_ASteamCoreProGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Class ASteamCoreProGameMode
void ASteamCoreProGameMode::StaticRegisterNativesASteamCoreProGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASteamCoreProGameMode);
UClass* Z_Construct_UClass_ASteamCoreProGameMode_NoRegister()
{
	return ASteamCoreProGameMode::StaticClass();
}
struct Z_Construct_UClass_ASteamCoreProGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SteamCorePro/SteamCoreProGameMode.h" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamCoreProGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASteamCoreProGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASteamCoreProGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASteamCoreProGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASteamCoreProGameMode_Statics::ClassParams = {
	&ASteamCoreProGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASteamCoreProGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASteamCoreProGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASteamCoreProGameMode()
{
	if (!Z_Registration_Info_UClass_ASteamCoreProGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASteamCoreProGameMode.OuterSingleton, Z_Construct_UClass_ASteamCoreProGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASteamCoreProGameMode.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<ASteamCoreProGameMode>()
{
	return ASteamCoreProGameMode::StaticClass();
}
ASteamCoreProGameMode::ASteamCoreProGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASteamCoreProGameMode);
ASteamCoreProGameMode::~ASteamCoreProGameMode() {}
// End Class ASteamCoreProGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamCoreProGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASteamCoreProGameMode, ASteamCoreProGameMode::StaticClass, TEXT("ASteamCoreProGameMode"), &Z_Registration_Info_UClass_ASteamCoreProGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASteamCoreProGameMode), 3555360538U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamCoreProGameMode_h_125240874(TEXT("/Script/SteamCorePro"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamCoreProGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamCoreProGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
