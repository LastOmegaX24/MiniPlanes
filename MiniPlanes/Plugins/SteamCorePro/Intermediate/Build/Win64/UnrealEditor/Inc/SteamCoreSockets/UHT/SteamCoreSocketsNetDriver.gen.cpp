// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreSockets/Public/SteamCoreSocketsNetDriver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreSocketsNetDriver() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UNetDriver();
STEAMCORESOCKETS_API UClass* Z_Construct_UClass_USteamCoreSocketsNetDriver();
STEAMCORESOCKETS_API UClass* Z_Construct_UClass_USteamCoreSocketsNetDriver_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamCoreSockets();
// End Cross Module References

// Begin Class USteamCoreSocketsNetDriver
void USteamCoreSocketsNetDriver::StaticRegisterNativesUSteamCoreSocketsNetDriver()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreSocketsNetDriver);
UClass* Z_Construct_UClass_USteamCoreSocketsNetDriver_NoRegister()
{
	return USteamCoreSocketsNetDriver::StaticClass();
}
struct Z_Construct_UClass_USteamCoreSocketsNetDriver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamCoreSocketsNetDriver.h" },
		{ "ModuleRelativePath", "Public/SteamCoreSocketsNetDriver.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreSocketsNetDriver>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USteamCoreSocketsNetDriver_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNetDriver,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreSockets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSocketsNetDriver_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreSocketsNetDriver_Statics::ClassParams = {
	&USteamCoreSocketsNetDriver::StaticClass,
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
	0x001000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSocketsNetDriver_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreSocketsNetDriver_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCoreSocketsNetDriver()
{
	if (!Z_Registration_Info_UClass_USteamCoreSocketsNetDriver.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreSocketsNetDriver.OuterSingleton, Z_Construct_UClass_USteamCoreSocketsNetDriver_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreSocketsNetDriver.OuterSingleton;
}
template<> STEAMCORESOCKETS_API UClass* StaticClass<USteamCoreSocketsNetDriver>()
{
	return USteamCoreSocketsNetDriver::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreSocketsNetDriver);
USteamCoreSocketsNetDriver::~USteamCoreSocketsNetDriver() {}
// End Class USteamCoreSocketsNetDriver

// Begin Registration
struct Z_CompiledInDeferFile_FID_MiniPlanes_Plugins_SteamCorePro_Source_SteamCoreSockets_Public_SteamCoreSocketsNetDriver_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreSocketsNetDriver, USteamCoreSocketsNetDriver::StaticClass, TEXT("USteamCoreSocketsNetDriver"), &Z_Registration_Info_UClass_USteamCoreSocketsNetDriver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreSocketsNetDriver), 3061296019U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniPlanes_Plugins_SteamCorePro_Source_SteamCoreSockets_Public_SteamCoreSocketsNetDriver_h_399973769(TEXT("/Script/SteamCoreSockets"),
	Z_CompiledInDeferFile_FID_MiniPlanes_Plugins_SteamCorePro_Source_SteamCoreSockets_Public_SteamCoreSocketsNetDriver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MiniPlanes_Plugins_SteamCorePro_Source_SteamCoreSockets_Public_SteamCoreSocketsNetDriver_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
