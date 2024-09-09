// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GMCCore/Public/Components/GMCCapsuleComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMCCapsuleComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent();
GMCCORE_API UClass* Z_Construct_UClass_UGMC_CapsuleCmp();
GMCCORE_API UClass* Z_Construct_UClass_UGMC_CapsuleCmp_NoRegister();
UPackage* Z_Construct_UPackage__Script_GMCCore();
// End Cross Module References

// Begin Class UGMC_CapsuleCmp Function GetGMCCapsuleRotation
struct Z_Construct_UFunction_UGMC_CapsuleCmp_GetGMCCapsuleRotation_Statics
{
	struct GMC_CapsuleCmp_eventGetGMCCapsuleRotation_Parms
	{
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Capsule" },
		{ "Comment", "/// Returns the capsule rotation.\n///\n/// @returns      FRotator    The current capsule rotation.\n" },
		{ "DisplayName", "Get GMC Capsule Rotation" },
		{ "ModuleRelativePath", "Public/Components/GMCCapsuleComponent.h" },
		{ "ToolTip", "Returns the capsule rotation.\n\n@returns      FRotator    The current capsule rotation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_CapsuleCmp_GetGMCCapsuleRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_CapsuleCmp_eventGetGMCCapsuleRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_CapsuleCmp_GetGMCCapsuleRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_CapsuleCmp_GetGMCCapsuleRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_CapsuleCmp_GetGMCCapsuleRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_CapsuleCmp_GetGMCCapsuleRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_CapsuleCmp, nullptr, "GetGMCCapsuleRotation", nullptr, nullptr, Z_Construct_UFunction_UGMC_CapsuleCmp_GetGMCCapsuleRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_CapsuleCmp_GetGMCCapsuleRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_CapsuleCmp_GetGMCCapsuleRotation_Statics::GMC_CapsuleCmp_eventGetGMCCapsuleRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_CapsuleCmp_GetGMCCapsuleRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_CapsuleCmp_GetGMCCapsuleRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_CapsuleCmp_GetGMCCapsuleRotation_Statics::GMC_CapsuleCmp_eventGetGMCCapsuleRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_CapsuleCmp_GetGMCCapsuleRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_CapsuleCmp_GetGMCCapsuleRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_CapsuleCmp::execGetGMCCapsuleRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->GetGMCCapsuleRotation();
	P_NATIVE_END;
}
// End Class UGMC_CapsuleCmp Function GetGMCCapsuleRotation

// Begin Class UGMC_CapsuleCmp Function SetGMCCapsuleRotation
struct Z_Construct_UFunction_UGMC_CapsuleCmp_SetGMCCapsuleRotation_Statics
{
	struct GMC_CapsuleCmp_eventSetGMCCapsuleRotation_Parms
	{
		FRotator NewRotation;
		bool bUpdateOverlaps;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Capsule" },
		{ "Comment", "/// Set the capsule rotation. Arbitrary rotations are not supported by UGMC_MovementUtilityCmp.\n///\n/// @param        NewRotation        The new rotation of the capsule.\n/// @param        bUpdateOverlaps    Whether the touching array for the owner actor should be updated (only if this shape is registered and collides).\n/// @returns      void\n" },
		{ "CPP_Default_bUpdateOverlaps", "true" },
		{ "DisplayName", "Set GMC Capsule Rotation" },
		{ "ModuleRelativePath", "Public/Components/GMCCapsuleComponent.h" },
		{ "ToolTip", "Set the capsule rotation. Arbitrary rotations are not supported by UGMC_MovementUtilityCmp.\n\n@param        NewRotation        The new rotation of the capsule.\n@param        bUpdateOverlaps    Whether the touching array for the owner actor should be updated (only if this shape is registered and collides).\n@returns      void" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewRotation;
	static void NewProp_bUpdateOverlaps_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateOverlaps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_CapsuleCmp_SetGMCCapsuleRotation_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_CapsuleCmp_eventSetGMCCapsuleRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGMC_CapsuleCmp_SetGMCCapsuleRotation_Statics::NewProp_bUpdateOverlaps_SetBit(void* Obj)
{
	((GMC_CapsuleCmp_eventSetGMCCapsuleRotation_Parms*)Obj)->bUpdateOverlaps = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_CapsuleCmp_SetGMCCapsuleRotation_Statics::NewProp_bUpdateOverlaps = { "bUpdateOverlaps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_CapsuleCmp_eventSetGMCCapsuleRotation_Parms), &Z_Construct_UFunction_UGMC_CapsuleCmp_SetGMCCapsuleRotation_Statics::NewProp_bUpdateOverlaps_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_CapsuleCmp_SetGMCCapsuleRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_CapsuleCmp_SetGMCCapsuleRotation_Statics::NewProp_NewRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_CapsuleCmp_SetGMCCapsuleRotation_Statics::NewProp_bUpdateOverlaps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_CapsuleCmp_SetGMCCapsuleRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_CapsuleCmp_SetGMCCapsuleRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_CapsuleCmp, nullptr, "SetGMCCapsuleRotation", nullptr, nullptr, Z_Construct_UFunction_UGMC_CapsuleCmp_SetGMCCapsuleRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_CapsuleCmp_SetGMCCapsuleRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_CapsuleCmp_SetGMCCapsuleRotation_Statics::GMC_CapsuleCmp_eventSetGMCCapsuleRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_CapsuleCmp_SetGMCCapsuleRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_CapsuleCmp_SetGMCCapsuleRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_CapsuleCmp_SetGMCCapsuleRotation_Statics::GMC_CapsuleCmp_eventSetGMCCapsuleRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_CapsuleCmp_SetGMCCapsuleRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_CapsuleCmp_SetGMCCapsuleRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_CapsuleCmp::execSetGMCCapsuleRotation)
{
	P_GET_STRUCT(FRotator,Z_Param_NewRotation);
	P_GET_UBOOL(Z_Param_bUpdateOverlaps);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGMCCapsuleRotation(Z_Param_NewRotation,Z_Param_bUpdateOverlaps);
	P_NATIVE_END;
}
// End Class UGMC_CapsuleCmp Function SetGMCCapsuleRotation

// Begin Class UGMC_CapsuleCmp Function SetGMCCapsuleSizeAndRotation
struct Z_Construct_UFunction_UGMC_CapsuleCmp_SetGMCCapsuleSizeAndRotation_Statics
{
	struct GMC_CapsuleCmp_eventSetGMCCapsuleSizeAndRotation_Parms
	{
		FRotator NewRotation;
		float NewRadius;
		float NewHalfHeight;
		bool bUpdateOverlaps;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Capsule" },
		{ "Comment", "/// Set the size and rotation of the capsule. Arbitrary rotations are not supported by UGMC_MovementUtilityCmp.\n///\n/// @param        NewRotation        The new rotation of the capsule.\n/// @param        NewRadius          The new radius of the center cylinder.\n/// @param        NewHalfHeight      The new half-height (including the hemispheres).\n/// @param        bUpdateOverlaps    Whether the touching array for the owner actor should be updated (only if this shape is registered and collides).\n/// @returns      void\n" },
		{ "CPP_Default_bUpdateOverlaps", "true" },
		{ "DisplayName", "Set GMC Capsule Size And Rotation" },
		{ "ModuleRelativePath", "Public/Components/GMCCapsuleComponent.h" },
		{ "ToolTip", "Set the size and rotation of the capsule. Arbitrary rotations are not supported by UGMC_MovementUtilityCmp.\n\n@param        NewRotation        The new rotation of the capsule.\n@param        NewRadius          The new radius of the center cylinder.\n@param        NewHalfHeight      The new half-height (including the hemispheres).\n@param        bUpdateOverlaps    Whether the touching array for the owner actor should be updated (only if this shape is registered and collides).\n@returns      void" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHalfHeight;
	static void NewProp_bUpdateOverlaps_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateOverlaps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_CapsuleCmp_SetGMCCapsuleSizeAndRotation_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_CapsuleCmp_eventSetGMCCapsuleSizeAndRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_CapsuleCmp_SetGMCCapsuleSizeAndRotation_Statics::NewProp_NewRadius = { "NewRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_CapsuleCmp_eventSetGMCCapsuleSizeAndRotation_Parms, NewRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_CapsuleCmp_SetGMCCapsuleSizeAndRotation_Statics::NewProp_NewHalfHeight = { "NewHalfHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_CapsuleCmp_eventSetGMCCapsuleSizeAndRotation_Parms, NewHalfHeight), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGMC_CapsuleCmp_SetGMCCapsuleSizeAndRotation_Statics::NewProp_bUpdateOverlaps_SetBit(void* Obj)
{
	((GMC_CapsuleCmp_eventSetGMCCapsuleSizeAndRotation_Parms*)Obj)->bUpdateOverlaps = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_CapsuleCmp_SetGMCCapsuleSizeAndRotation_Statics::NewProp_bUpdateOverlaps = { "bUpdateOverlaps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_CapsuleCmp_eventSetGMCCapsuleSizeAndRotation_Parms), &Z_Construct_UFunction_UGMC_CapsuleCmp_SetGMCCapsuleSizeAndRotation_Statics::NewProp_bUpdateOverlaps_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_CapsuleCmp_SetGMCCapsuleSizeAndRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_CapsuleCmp_SetGMCCapsuleSizeAndRotation_Statics::NewProp_NewRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_CapsuleCmp_SetGMCCapsuleSizeAndRotation_Statics::NewProp_NewRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_CapsuleCmp_SetGMCCapsuleSizeAndRotation_Statics::NewProp_NewHalfHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_CapsuleCmp_SetGMCCapsuleSizeAndRotation_Statics::NewProp_bUpdateOverlaps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_CapsuleCmp_SetGMCCapsuleSizeAndRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_CapsuleCmp_SetGMCCapsuleSizeAndRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_CapsuleCmp, nullptr, "SetGMCCapsuleSizeAndRotation", nullptr, nullptr, Z_Construct_UFunction_UGMC_CapsuleCmp_SetGMCCapsuleSizeAndRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_CapsuleCmp_SetGMCCapsuleSizeAndRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_CapsuleCmp_SetGMCCapsuleSizeAndRotation_Statics::GMC_CapsuleCmp_eventSetGMCCapsuleSizeAndRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_CapsuleCmp_SetGMCCapsuleSizeAndRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_CapsuleCmp_SetGMCCapsuleSizeAndRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_CapsuleCmp_SetGMCCapsuleSizeAndRotation_Statics::GMC_CapsuleCmp_eventSetGMCCapsuleSizeAndRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_CapsuleCmp_SetGMCCapsuleSizeAndRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_CapsuleCmp_SetGMCCapsuleSizeAndRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_CapsuleCmp::execSetGMCCapsuleSizeAndRotation)
{
	P_GET_STRUCT(FRotator,Z_Param_NewRotation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewRadius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewHalfHeight);
	P_GET_UBOOL(Z_Param_bUpdateOverlaps);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGMCCapsuleSizeAndRotation(Z_Param_NewRotation,Z_Param_NewRadius,Z_Param_NewHalfHeight,Z_Param_bUpdateOverlaps);
	P_NATIVE_END;
}
// End Class UGMC_CapsuleCmp Function SetGMCCapsuleSizeAndRotation

// Begin Class UGMC_CapsuleCmp
void UGMC_CapsuleCmp::StaticRegisterNativesUGMC_CapsuleCmp()
{
	UClass* Class = UGMC_CapsuleCmp::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetGMCCapsuleRotation", &UGMC_CapsuleCmp::execGetGMCCapsuleRotation },
		{ "SetGMCCapsuleRotation", &UGMC_CapsuleCmp::execSetGMCCapsuleRotation },
		{ "SetGMCCapsuleSizeAndRotation", &UGMC_CapsuleCmp::execSetGMCCapsuleSizeAndRotation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGMC_CapsuleCmp);
UClass* Z_Construct_UClass_UGMC_CapsuleCmp_NoRegister()
{
	return UGMC_CapsuleCmp::StaticClass();
}
struct Z_Construct_UClass_UGMC_CapsuleCmp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/// General capsule collision that can assume arbitrary rotations. Not directly supported by UGMC_MovementUtilityCmp, use either the super-class default capsule\n/// or the horizontally oriented sub-class capsule.\n" },
		{ "DisplayName", "General Capsule Collision" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "Components/GMCCapsuleComponent.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Components/GMCCapsuleComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "General capsule collision that can assume arbitrary rotations. Not directly supported by UGMC_MovementUtilityCmp, use either the super-class default capsule\nor the horizontally oriented sub-class capsule." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGMC_CapsuleCmp_GetGMCCapsuleRotation, "GetGMCCapsuleRotation" }, // 3093131668
		{ &Z_Construct_UFunction_UGMC_CapsuleCmp_SetGMCCapsuleRotation, "SetGMCCapsuleRotation" }, // 1582836763
		{ &Z_Construct_UFunction_UGMC_CapsuleCmp_SetGMCCapsuleSizeAndRotation, "SetGMCCapsuleSizeAndRotation" }, // 3268245981
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGMC_CapsuleCmp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGMC_CapsuleCmp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCapsuleComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_CapsuleCmp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGMC_CapsuleCmp_Statics::ClassParams = {
	&UGMC_CapsuleCmp::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_CapsuleCmp_Statics::Class_MetaDataParams), Z_Construct_UClass_UGMC_CapsuleCmp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGMC_CapsuleCmp()
{
	if (!Z_Registration_Info_UClass_UGMC_CapsuleCmp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGMC_CapsuleCmp.OuterSingleton, Z_Construct_UClass_UGMC_CapsuleCmp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGMC_CapsuleCmp.OuterSingleton;
}
template<> GMCCORE_API UClass* StaticClass<UGMC_CapsuleCmp>()
{
	return UGMC_CapsuleCmp::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGMC_CapsuleCmp);
UGMC_CapsuleCmp::~UGMC_CapsuleCmp() {}
// End Class UGMC_CapsuleCmp

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCCapsuleComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGMC_CapsuleCmp, UGMC_CapsuleCmp::StaticClass, TEXT("UGMC_CapsuleCmp"), &Z_Registration_Info_UClass_UGMC_CapsuleCmp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGMC_CapsuleCmp), 3037993779U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCCapsuleComponent_h_3202846137(TEXT("/Script/GMCCore"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCCapsuleComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCCapsuleComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
