// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemSteamCore/Public/Auth/OnlineAuthHandlerSteamCore.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineAuthHandlerSteamCore() {}

// Begin Cross Module References
ONLINESUBSYSTEMSTEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAuthComponentModuleInterface();
ONLINESUBSYSTEMSTEAMCORE_API UClass* Z_Construct_UClass_USteamCoreAuthComponentModuleInterface_NoRegister();
PACKETHANDLER_API UClass* Z_Construct_UClass_UHandlerComponentFactory();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemSteamCore();
// End Cross Module References

// Begin Class USteamCoreAuthComponentModuleInterface
void USteamCoreAuthComponentModuleInterface::StaticRegisterNativesUSteamCoreAuthComponentModuleInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreAuthComponentModuleInterface);
UClass* Z_Construct_UClass_USteamCoreAuthComponentModuleInterface_NoRegister()
{
	return USteamCoreAuthComponentModuleInterface::StaticClass();
}
struct Z_Construct_UClass_USteamCoreAuthComponentModuleInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Auth/OnlineAuthHandlerSteamCore.h" },
		{ "ModuleRelativePath", "Public/Auth/OnlineAuthHandlerSteamCore.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreAuthComponentModuleInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USteamCoreAuthComponentModuleInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHandlerComponentFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemSteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAuthComponentModuleInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreAuthComponentModuleInterface_Statics::ClassParams = {
	&USteamCoreAuthComponentModuleInterface::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreAuthComponentModuleInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreAuthComponentModuleInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCoreAuthComponentModuleInterface()
{
	if (!Z_Registration_Info_UClass_USteamCoreAuthComponentModuleInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreAuthComponentModuleInterface.OuterSingleton, Z_Construct_UClass_USteamCoreAuthComponentModuleInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreAuthComponentModuleInterface.OuterSingleton;
}
template<> ONLINESUBSYSTEMSTEAMCORE_API UClass* StaticClass<USteamCoreAuthComponentModuleInterface>()
{
	return USteamCoreAuthComponentModuleInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreAuthComponentModuleInterface);
USteamCoreAuthComponentModuleInterface::~USteamCoreAuthComponentModuleInterface() {}
// End Class USteamCoreAuthComponentModuleInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_OnlineSubsystemSteamCore_Public_Auth_OnlineAuthHandlerSteamCore_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreAuthComponentModuleInterface, USteamCoreAuthComponentModuleInterface::StaticClass, TEXT("USteamCoreAuthComponentModuleInterface"), &Z_Registration_Info_UClass_USteamCoreAuthComponentModuleInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreAuthComponentModuleInterface), 2075871240U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_OnlineSubsystemSteamCore_Public_Auth_OnlineAuthHandlerSteamCore_h_835385418(TEXT("/Script/OnlineSubsystemSteamCore"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_OnlineSubsystemSteamCore_Public_Auth_OnlineAuthHandlerSteamCore_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_OnlineSubsystemSteamCore_Public_Auth_OnlineAuthHandlerSteamCore_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
