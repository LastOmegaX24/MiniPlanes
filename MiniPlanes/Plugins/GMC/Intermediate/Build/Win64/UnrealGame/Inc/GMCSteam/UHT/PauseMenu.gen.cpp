// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GMCSteam/Public/Widgets/PauseMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePauseMenu() {}

// Begin Cross Module References
GMCSTEAM_API UClass* Z_Construct_UClass_UPauseMenu();
GMCSTEAM_API UClass* Z_Construct_UClass_UPauseMenu_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_GMCSteam();
// End Cross Module References

// Begin Class UPauseMenu Function OnExitButtonClicked
struct Z_Construct_UFunction_UPauseMenu_OnExitButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/PauseMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseMenu_OnExitButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPauseMenu, nullptr, "OnExitButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseMenu_OnExitButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPauseMenu_OnExitButtonClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPauseMenu_OnExitButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPauseMenu_OnExitButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPauseMenu::execOnExitButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnExitButtonClicked();
	P_NATIVE_END;
}
// End Class UPauseMenu Function OnExitButtonClicked

// Begin Class UPauseMenu
void UPauseMenu::StaticRegisterNativesUPauseMenu()
{
	UClass* Class = UPauseMenu::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnExitButtonClicked", &UPauseMenu::execOnExitButtonClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPauseMenu);
UClass* Z_Construct_UClass_UPauseMenu_NoRegister()
{
	return UPauseMenu::StaticClass();
}
struct Z_Construct_UClass_UPauseMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/// Provides the bindings for a widget Blueprint which displays a very simple pause menu for sessions created with USteamGameInstance.\n" },
		{ "IncludePath", "Widgets/PauseMenu.h" },
		{ "ModuleRelativePath", "Public/Widgets/PauseMenu.h" },
		{ "ToolTip", "Provides the bindings for a widget Blueprint which displays a very simple pause menu for sessions created with USteamGameInstance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitButton_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/PauseMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExitButton;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPauseMenu_OnExitButtonClicked, "OnExitButtonClicked" }, // 100035328
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPauseMenu>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPauseMenu_Statics::NewProp_ExitButton = { "ExitButton", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPauseMenu, ExitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitButton_MetaData), NewProp_ExitButton_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPauseMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPauseMenu_Statics::NewProp_ExitButton,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPauseMenu_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPauseMenu_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_GMCSteam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPauseMenu_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPauseMenu_Statics::ClassParams = {
	&UPauseMenu::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPauseMenu_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPauseMenu_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPauseMenu_Statics::Class_MetaDataParams), Z_Construct_UClass_UPauseMenu_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPauseMenu()
{
	if (!Z_Registration_Info_UClass_UPauseMenu.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPauseMenu.OuterSingleton, Z_Construct_UClass_UPauseMenu_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPauseMenu.OuterSingleton;
}
template<> GMCSTEAM_API UClass* StaticClass<UPauseMenu>()
{
	return UPauseMenu::StaticClass();
}
UPauseMenu::UPauseMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPauseMenu);
UPauseMenu::~UPauseMenu() {}
// End Class UPauseMenu

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCSteam_Public_Widgets_PauseMenu_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPauseMenu, UPauseMenu::StaticClass, TEXT("UPauseMenu"), &Z_Registration_Info_UClass_UPauseMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPauseMenu), 549945322U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCSteam_Public_Widgets_PauseMenu_h_2481122123(TEXT("/Script/GMCSteam"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCSteam_Public_Widgets_PauseMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCSteam_Public_Widgets_PauseMenu_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
