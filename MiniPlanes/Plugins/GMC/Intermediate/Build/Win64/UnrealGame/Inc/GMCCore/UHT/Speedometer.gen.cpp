// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GMCCore/Public/Widgets/Speedometer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeedometer() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent_NoRegister();
GMCCORE_API UClass* Z_Construct_UClass_UGMC_Speedometer();
GMCCORE_API UClass* Z_Construct_UClass_UGMC_Speedometer_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_GMCCore();
// End Cross Module References

// Begin Class UGMC_Speedometer Function GetLocalPawnMovementComponent
struct Z_Construct_UFunction_UGMC_Speedometer_GetLocalPawnMovementComponent_Statics
{
	struct GMC_Speedometer_eventGetLocalPawnMovementComponent_Parms
	{
		UPawnMovementComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Widgets/Speedometer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGMC_Speedometer_GetLocalPawnMovementComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_Speedometer_eventGetLocalPawnMovementComponent_Parms, ReturnValue), Z_Construct_UClass_UPawnMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_Speedometer_GetLocalPawnMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_Speedometer_GetLocalPawnMovementComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_Speedometer_GetLocalPawnMovementComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_Speedometer_GetLocalPawnMovementComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_Speedometer, nullptr, "GetLocalPawnMovementComponent", nullptr, nullptr, Z_Construct_UFunction_UGMC_Speedometer_GetLocalPawnMovementComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_Speedometer_GetLocalPawnMovementComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_Speedometer_GetLocalPawnMovementComponent_Statics::GMC_Speedometer_eventGetLocalPawnMovementComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_Speedometer_GetLocalPawnMovementComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_Speedometer_GetLocalPawnMovementComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_Speedometer_GetLocalPawnMovementComponent_Statics::GMC_Speedometer_eventGetLocalPawnMovementComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_Speedometer_GetLocalPawnMovementComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_Speedometer_GetLocalPawnMovementComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_Speedometer::execGetLocalPawnMovementComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPawnMovementComponent**)Z_Param__Result=P_THIS->GetLocalPawnMovementComponent();
	P_NATIVE_END;
}
// End Class UGMC_Speedometer Function GetLocalPawnMovementComponent

// Begin Class UGMC_Speedometer
void UGMC_Speedometer::StaticRegisterNativesUGMC_Speedometer()
{
	UClass* Class = UGMC_Speedometer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetLocalPawnMovementComponent", &UGMC_Speedometer::execGetLocalPawnMovementComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGMC_Speedometer);
UClass* Z_Construct_UClass_UGMC_Speedometer_NoRegister()
{
	return UGMC_Speedometer::StaticClass();
}
struct Z_Construct_UClass_UGMC_Speedometer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/// Provides the bindings for a widget Blueprint which displays the current speed of the pawn.\n" },
		{ "IncludePath", "Widgets/Speedometer.h" },
		{ "ModuleRelativePath", "Public/Widgets/Speedometer.h" },
		{ "ToolTip", "Provides the bindings for a widget Blueprint which displays the current speed of the pawn." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_Speedometer_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Speedometer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_Speedometer_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Widgets/Speedometer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeVelocityZ_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Widgets/Speedometer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_Speedometer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value_Speedometer;
	static void NewProp_bIncludeVelocityZ_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeVelocityZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGMC_Speedometer_GetLocalPawnMovementComponent, "GetLocalPawnMovementComponent" }, // 1905198471
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGMC_Speedometer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_Speedometer_Statics::NewProp_Text_Speedometer = { "Text_Speedometer", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_Speedometer, Text_Speedometer), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_Speedometer_MetaData), NewProp_Text_Speedometer_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_Speedometer_Statics::NewProp_Value_Speedometer = { "Value_Speedometer", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_Speedometer, Value_Speedometer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_Speedometer_MetaData), NewProp_Value_Speedometer_MetaData) };
void Z_Construct_UClass_UGMC_Speedometer_Statics::NewProp_bIncludeVelocityZ_SetBit(void* Obj)
{
	((UGMC_Speedometer*)Obj)->bIncludeVelocityZ = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGMC_Speedometer_Statics::NewProp_bIncludeVelocityZ = { "bIncludeVelocityZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGMC_Speedometer), &Z_Construct_UClass_UGMC_Speedometer_Statics::NewProp_bIncludeVelocityZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeVelocityZ_MetaData), NewProp_bIncludeVelocityZ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGMC_Speedometer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_Speedometer_Statics::NewProp_Text_Speedometer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_Speedometer_Statics::NewProp_Value_Speedometer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_Speedometer_Statics::NewProp_bIncludeVelocityZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_Speedometer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGMC_Speedometer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_Speedometer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGMC_Speedometer_Statics::ClassParams = {
	&UGMC_Speedometer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGMC_Speedometer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_Speedometer_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_Speedometer_Statics::Class_MetaDataParams), Z_Construct_UClass_UGMC_Speedometer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGMC_Speedometer()
{
	if (!Z_Registration_Info_UClass_UGMC_Speedometer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGMC_Speedometer.OuterSingleton, Z_Construct_UClass_UGMC_Speedometer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGMC_Speedometer.OuterSingleton;
}
template<> GMCCORE_API UClass* StaticClass<UGMC_Speedometer>()
{
	return UGMC_Speedometer::StaticClass();
}
UGMC_Speedometer::UGMC_Speedometer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGMC_Speedometer);
UGMC_Speedometer::~UGMC_Speedometer() {}
// End Class UGMC_Speedometer

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Widgets_Speedometer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGMC_Speedometer, UGMC_Speedometer::StaticClass, TEXT("UGMC_Speedometer"), &Z_Registration_Info_UClass_UGMC_Speedometer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGMC_Speedometer), 1595630322U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Widgets_Speedometer_h_1676396439(TEXT("/Script/GMCCore"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Widgets_Speedometer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Widgets_Speedometer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
