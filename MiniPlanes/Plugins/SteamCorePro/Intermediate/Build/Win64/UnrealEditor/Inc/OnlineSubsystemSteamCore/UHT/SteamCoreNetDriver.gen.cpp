// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemSteamCore/Private/SteamCoreNetDriver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreNetDriver() {}

// Begin Cross Module References
ONLINESUBSYSTEMSTEAMCORE_API UClass* Z_Construct_UClass_USteamCoreNetDriver();
ONLINESUBSYSTEMSTEAMCORE_API UClass* Z_Construct_UClass_USteamCoreNetDriver_NoRegister();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpNetDriver();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemSteamCore();
// End Cross Module References

// Begin Class USteamCoreNetDriver
void USteamCoreNetDriver::StaticRegisterNativesUSteamCoreNetDriver()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreNetDriver);
UClass* Z_Construct_UClass_USteamCoreNetDriver_NoRegister()
{
	return USteamCoreNetDriver::StaticClass();
}
struct Z_Construct_UClass_USteamCoreNetDriver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamCoreNetDriver.h" },
		{ "ModuleRelativePath", "Private/SteamCoreNetDriver.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreNetDriver>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USteamCoreNetDriver_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIpNetDriver,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemSteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreNetDriver_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreNetDriver_Statics::ClassParams = {
	&USteamCoreNetDriver::StaticClass,
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
	0x000000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreNetDriver_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreNetDriver_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCoreNetDriver()
{
	if (!Z_Registration_Info_UClass_USteamCoreNetDriver.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreNetDriver.OuterSingleton, Z_Construct_UClass_USteamCoreNetDriver_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreNetDriver.OuterSingleton;
}
template<> ONLINESUBSYSTEMSTEAMCORE_API UClass* StaticClass<USteamCoreNetDriver>()
{
	return USteamCoreNetDriver::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreNetDriver);
USteamCoreNetDriver::~USteamCoreNetDriver() {}
// End Class USteamCoreNetDriver

// Begin Registration
struct Z_CompiledInDeferFile_FID_MiniPlanes_Plugins_SteamCorePro_Source_OnlineSubsystemSteamCore_Private_SteamCoreNetDriver_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreNetDriver, USteamCoreNetDriver::StaticClass, TEXT("USteamCoreNetDriver"), &Z_Registration_Info_UClass_USteamCoreNetDriver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreNetDriver), 970151079U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MiniPlanes_Plugins_SteamCorePro_Source_OnlineSubsystemSteamCore_Private_SteamCoreNetDriver_h_2107639014(TEXT("/Script/OnlineSubsystemSteamCore"),
	Z_CompiledInDeferFile_FID_MiniPlanes_Plugins_SteamCorePro_Source_OnlineSubsystemSteamCore_Private_SteamCoreNetDriver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MiniPlanes_Plugins_SteamCorePro_Source_OnlineSubsystemSteamCore_Private_SteamCoreNetDriver_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
