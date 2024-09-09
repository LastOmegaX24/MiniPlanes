// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamCorePro/SteamCoreProModule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreProModule() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreInterface();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreInterface_NoRegister();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCorePro();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCorePro_NoRegister();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProSubsystem();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Class USteamCorePro
void USteamCorePro::StaticRegisterNativesUSteamCorePro()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCorePro);
UClass* Z_Construct_UClass_USteamCorePro_NoRegister()
{
	return USteamCorePro::StaticClass();
}
struct Z_Construct_UClass_USteamCorePro_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamCorePro/SteamCoreProModule.h" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamCoreProModule.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCorePro>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USteamCorePro_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCorePro_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCorePro_Statics::ClassParams = {
	&USteamCorePro::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCorePro_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCorePro_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCorePro()
{
	if (!Z_Registration_Info_UClass_USteamCorePro.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCorePro.OuterSingleton, Z_Construct_UClass_USteamCorePro_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCorePro.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamCorePro>()
{
	return USteamCorePro::StaticClass();
}
USteamCorePro::USteamCorePro(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCorePro);
USteamCorePro::~USteamCorePro() {}
// End Class USteamCorePro

// Begin Class USteamCoreInterface
void USteamCoreInterface::StaticRegisterNativesUSteamCoreInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreInterface);
UClass* Z_Construct_UClass_USteamCoreInterface_NoRegister()
{
	return USteamCoreInterface::StaticClass();
}
struct Z_Construct_UClass_USteamCoreInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamCorePro/SteamCoreProModule.h" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamCoreProModule.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USteamCoreInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreInterface_Statics::ClassParams = {
	&USteamCoreInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCoreInterface()
{
	if (!Z_Registration_Info_UClass_USteamCoreInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreInterface.OuterSingleton, Z_Construct_UClass_USteamCoreInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreInterface.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamCoreInterface>()
{
	return USteamCoreInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreInterface);
// End Class USteamCoreInterface

// Begin Class USteamCoreProSubsystem
void USteamCoreProSubsystem::StaticRegisterNativesUSteamCoreProSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreProSubsystem);
UClass* Z_Construct_UClass_USteamCoreProSubsystem_NoRegister()
{
	return USteamCoreProSubsystem::StaticClass();
}
struct Z_Construct_UClass_USteamCoreProSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamCorePro/SteamCoreProModule.h" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamCoreProModule.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreProSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USteamCoreProSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreProSubsystem_Statics::ClassParams = {
	&USteamCoreProSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreProSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCoreProSubsystem()
{
	if (!Z_Registration_Info_UClass_USteamCoreProSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreProSubsystem.OuterSingleton, Z_Construct_UClass_USteamCoreProSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreProSubsystem.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamCoreProSubsystem>()
{
	return USteamCoreProSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreProSubsystem);
// End Class USteamCoreProSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamCoreProModule_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCorePro, USteamCorePro::StaticClass, TEXT("USteamCorePro"), &Z_Registration_Info_UClass_USteamCorePro, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCorePro), 790950288U) },
		{ Z_Construct_UClass_USteamCoreInterface, USteamCoreInterface::StaticClass, TEXT("USteamCoreInterface"), &Z_Registration_Info_UClass_USteamCoreInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreInterface), 2018552361U) },
		{ Z_Construct_UClass_USteamCoreProSubsystem, USteamCoreProSubsystem::StaticClass, TEXT("USteamCoreProSubsystem"), &Z_Registration_Info_UClass_USteamCoreProSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreProSubsystem), 2210066103U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamCoreProModule_h_3376728267(TEXT("/Script/SteamCorePro"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamCoreProModule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamCoreProModule_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
