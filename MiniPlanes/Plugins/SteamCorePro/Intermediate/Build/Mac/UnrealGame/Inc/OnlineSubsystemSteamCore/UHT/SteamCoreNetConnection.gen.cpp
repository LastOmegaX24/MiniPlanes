// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemSteamCore/Private/Net/SteamCoreNetConnection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreNetConnection() {}

// Begin Cross Module References
ONLINESUBSYSTEMSTEAMCORE_API UClass* Z_Construct_UClass_USteamCoreNetConnection();
ONLINESUBSYSTEMSTEAMCORE_API UClass* Z_Construct_UClass_USteamCoreNetConnection_NoRegister();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpConnection();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemSteamCore();
// End Cross Module References

// Begin Class USteamCoreNetConnection
void USteamCoreNetConnection::StaticRegisterNativesUSteamCoreNetConnection()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreNetConnection);
UClass* Z_Construct_UClass_USteamCoreNetConnection_NoRegister()
{
	return USteamCoreNetConnection::StaticClass();
}
struct Z_Construct_UClass_USteamCoreNetConnection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Net/SteamCoreNetConnection.h" },
		{ "ModuleRelativePath", "Private/Net/SteamCoreNetConnection.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_m_bIsPassthrough_MetaData[] = {
		{ "Comment", "//~ End UIpConnection Interface\n" },
		{ "ModuleRelativePath", "Private/Net/SteamCoreNetConnection.h" },
	};
#endif // WITH_METADATA
	static void NewProp_m_bIsPassthrough_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_m_bIsPassthrough;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreNetConnection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_USteamCoreNetConnection_Statics::NewProp_m_bIsPassthrough_SetBit(void* Obj)
{
	((USteamCoreNetConnection*)Obj)->m_bIsPassthrough = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamCoreNetConnection_Statics::NewProp_m_bIsPassthrough = { "m_bIsPassthrough", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamCoreNetConnection), &Z_Construct_UClass_USteamCoreNetConnection_Statics::NewProp_m_bIsPassthrough_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_m_bIsPassthrough_MetaData), NewProp_m_bIsPassthrough_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreNetConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreNetConnection_Statics::NewProp_m_bIsPassthrough,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreNetConnection_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamCoreNetConnection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIpConnection,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemSteamCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreNetConnection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreNetConnection_Statics::ClassParams = {
	&USteamCoreNetConnection::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USteamCoreNetConnection_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreNetConnection_Statics::PropPointers),
	0,
	0x000000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreNetConnection_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreNetConnection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCoreNetConnection()
{
	if (!Z_Registration_Info_UClass_USteamCoreNetConnection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreNetConnection.OuterSingleton, Z_Construct_UClass_USteamCoreNetConnection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreNetConnection.OuterSingleton;
}
template<> ONLINESUBSYSTEMSTEAMCORE_API UClass* StaticClass<USteamCoreNetConnection>()
{
	return USteamCoreNetConnection::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreNetConnection);
USteamCoreNetConnection::~USteamCoreNetConnection() {}
// End Class USteamCoreNetConnection

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_OnlineSubsystemSteamCore_Private_Net_SteamCoreNetConnection_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreNetConnection, USteamCoreNetConnection::StaticClass, TEXT("USteamCoreNetConnection"), &Z_Registration_Info_UClass_USteamCoreNetConnection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreNetConnection), 160904356U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_OnlineSubsystemSteamCore_Private_Net_SteamCoreNetConnection_h_2793483399(TEXT("/Script/OnlineSubsystemSteamCore"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_OnlineSubsystemSteamCore_Private_Net_SteamCoreNetConnection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_OnlineSubsystemSteamCore_Private_Net_SteamCoreNetConnection_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
