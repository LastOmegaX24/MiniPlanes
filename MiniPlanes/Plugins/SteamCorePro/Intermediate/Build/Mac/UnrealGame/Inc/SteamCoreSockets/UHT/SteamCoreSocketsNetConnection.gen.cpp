// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCoreSockets/Public/SteamCoreSocketsNetConnection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreSocketsNetConnection() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UNetConnection();
STEAMCORESOCKETS_API UClass* Z_Construct_UClass_USteamCoreSocketsNetConnection();
STEAMCORESOCKETS_API UClass* Z_Construct_UClass_USteamCoreSocketsNetConnection_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamCoreSockets();
// End Cross Module References

// Begin Class USteamCoreSocketsNetConnection
void USteamCoreSocketsNetConnection::StaticRegisterNativesUSteamCoreSocketsNetConnection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreSocketsNetConnection);
UClass* Z_Construct_UClass_USteamCoreSocketsNetConnection_NoRegister()
{
	return USteamCoreSocketsNetConnection::StaticClass();
}
struct Z_Construct_UClass_USteamCoreSocketsNetConnection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamCoreSocketsNetConnection.h" },
		{ "ModuleRelativePath", "Public/SteamCoreSocketsNetConnection.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreSocketsNetConnection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USteamCoreSocketsNetConnection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNetConnection,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCoreSockets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSocketsNetConnection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreSocketsNetConnection_Statics::ClassParams = {
	&USteamCoreSocketsNetConnection::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSocketsNetConnection_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreSocketsNetConnection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCoreSocketsNetConnection()
{
	if (!Z_Registration_Info_UClass_USteamCoreSocketsNetConnection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreSocketsNetConnection.OuterSingleton, Z_Construct_UClass_USteamCoreSocketsNetConnection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreSocketsNetConnection.OuterSingleton;
}
template<> STEAMCORESOCKETS_API UClass* StaticClass<USteamCoreSocketsNetConnection>()
{
	return USteamCoreSocketsNetConnection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreSocketsNetConnection);
USteamCoreSocketsNetConnection::~USteamCoreSocketsNetConnection() {}
// End Class USteamCoreSocketsNetConnection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCoreSockets_Public_SteamCoreSocketsNetConnection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreSocketsNetConnection, USteamCoreSocketsNetConnection::StaticClass, TEXT("USteamCoreSocketsNetConnection"), &Z_Registration_Info_UClass_USteamCoreSocketsNetConnection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreSocketsNetConnection), 3518673833U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCoreSockets_Public_SteamCoreSocketsNetConnection_h_528990637(TEXT("/Script/SteamCoreSockets"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCoreSockets_Public_SteamCoreSocketsNetConnection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCoreSockets_Public_SteamCoreSocketsNetConnection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
