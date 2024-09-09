// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamCorePro/SteamCoreProAsync.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreProAsync() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProAsyncAction();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProAsyncAction_NoRegister();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnFailure__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Delegate FOnFailure
struct Z_Construct_UDelegateFunction_SteamCorePro_OnFailure__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamCoreProAsync.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnFailure__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnFailure__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnFailure__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnFailure__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnFailure__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnFailure__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFailure_DelegateWrapper(const FMulticastScriptDelegate& OnFailure)
{
	OnFailure.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnFailure

// Begin Class USteamCoreProAsyncAction
void USteamCoreProAsyncAction::StaticRegisterNativesUSteamCoreProAsyncAction()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreProAsyncAction);
UClass* Z_Construct_UClass_USteamCoreProAsyncAction_NoRegister()
{
	return USteamCoreProAsyncAction::StaticClass();
}
struct Z_Construct_UClass_USteamCoreProAsyncAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SteamCorePro/SteamCoreProAsync.h" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamCoreProAsync.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreProAsyncAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USteamCoreProAsyncAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProAsyncAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreProAsyncAction_Statics::ClassParams = {
	&USteamCoreProAsyncAction::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProAsyncAction_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreProAsyncAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCoreProAsyncAction()
{
	if (!Z_Registration_Info_UClass_USteamCoreProAsyncAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreProAsyncAction.OuterSingleton, Z_Construct_UClass_USteamCoreProAsyncAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreProAsyncAction.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamCoreProAsyncAction>()
{
	return USteamCoreProAsyncAction::StaticClass();
}
USteamCoreProAsyncAction::USteamCoreProAsyncAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreProAsyncAction);
USteamCoreProAsyncAction::~USteamCoreProAsyncAction() {}
// End Class USteamCoreProAsyncAction

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamCoreProAsync_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreProAsyncAction, USteamCoreProAsyncAction::StaticClass, TEXT("USteamCoreProAsyncAction"), &Z_Registration_Info_UClass_USteamCoreProAsyncAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreProAsyncAction), 3088425655U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamCoreProAsync_h_1303973712(TEXT("/Script/SteamCorePro"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamCoreProAsync_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamCoreProAsync_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
