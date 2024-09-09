// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GMCCore/Public/Actors/GMCAggregator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMCAggregator() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMovementComponent_NoRegister();
GMCCORE_API UClass* Z_Construct_UClass_AGMC_Aggregator();
GMCCORE_API UClass* Z_Construct_UClass_AGMC_Aggregator_NoRegister();
GMCCORE_API UClass* Z_Construct_UClass_AGMC_RollbackActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_GMCCore();
// End Cross Module References

// Begin Class AGMC_Aggregator Function GetControllerOrderNumber
struct Z_Construct_UFunction_AGMC_Aggregator_GetControllerOrderNumber_Statics
{
	struct GMC_Aggregator_eventGetControllerOrderNumber_Parms
	{
		const AController* Controller;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Determines the order number of the passed controller.\n///\n/// @param        Controller    The object to get the order number for.\n/// @returns      int32         The order number of the passed object.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCAggregator.h" },
		{ "ToolTip", "Determines the order number of the passed controller.\n\n@param        Controller    The object to get the order number for.\n@returns      int32         The order number of the passed object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGMC_Aggregator_GetControllerOrderNumber_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_Aggregator_eventGetControllerOrderNumber_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Controller_MetaData), NewProp_Controller_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGMC_Aggregator_GetControllerOrderNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_Aggregator_eventGetControllerOrderNumber_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_Aggregator_GetControllerOrderNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_Aggregator_GetControllerOrderNumber_Statics::NewProp_Controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_Aggregator_GetControllerOrderNumber_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_GetControllerOrderNumber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_Aggregator_GetControllerOrderNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_Aggregator, nullptr, "GetControllerOrderNumber", nullptr, nullptr, Z_Construct_UFunction_AGMC_Aggregator_GetControllerOrderNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_GetControllerOrderNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_Aggregator_GetControllerOrderNumber_Statics::GMC_Aggregator_eventGetControllerOrderNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_GetControllerOrderNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_Aggregator_GetControllerOrderNumber_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGMC_Aggregator_GetControllerOrderNumber_Statics::GMC_Aggregator_eventGetControllerOrderNumber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_Aggregator_GetControllerOrderNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_Aggregator_GetControllerOrderNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_Aggregator::execGetControllerOrderNumber)
{
	P_GET_OBJECT(AController,Z_Param_Controller);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetControllerOrderNumber(Z_Param_Controller);
	P_NATIVE_END;
}
// End Class AGMC_Aggregator Function GetControllerOrderNumber

// Begin Class AGMC_Aggregator Function GetControllers
struct Z_Construct_UFunction_AGMC_Aggregator_GetControllers_Statics
{
	struct GMC_Aggregator_eventGetControllers_Parms
	{
		TArray<AController*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Returns all currently registered controller actors.\n///\n/// @returns      const TArray<AController*>&    The array containing all registered controller actors.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCAggregator.h" },
		{ "ToolTip", "Returns all currently registered controller actors.\n\n@returns      const TArray<AController*>&    The array containing all registered controller actors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGMC_Aggregator_GetControllers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGMC_Aggregator_GetControllers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_Aggregator_eventGetControllers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_Aggregator_GetControllers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_Aggregator_GetControllers_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_Aggregator_GetControllers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_GetControllers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_Aggregator_GetControllers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_Aggregator, nullptr, "GetControllers", nullptr, nullptr, Z_Construct_UFunction_AGMC_Aggregator_GetControllers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_GetControllers_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_Aggregator_GetControllers_Statics::GMC_Aggregator_eventGetControllers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_GetControllers_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_Aggregator_GetControllers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGMC_Aggregator_GetControllers_Statics::GMC_Aggregator_eventGetControllers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_Aggregator_GetControllers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_Aggregator_GetControllers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_Aggregator::execGetControllers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AController*>*)Z_Param__Result=P_THIS->GetControllers();
	P_NATIVE_END;
}
// End Class AGMC_Aggregator Function GetControllers

// Begin Class AGMC_Aggregator Function GetGMCAggregator
struct Z_Construct_UFunction_AGMC_Aggregator_GetGMCAggregator_Statics
{
	struct GMC_Aggregator_eventGetGMCAggregator_Parms
	{
		UObject* Context;
		AGMC_Aggregator* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Returns the aggregator (if present). There must never be more than one instance of this actor in a world.\n///\n/// @returns      AGMC_Aggregator*    The aggregator if one exists, otherwise nullptr.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCAggregator.h" },
		{ "ToolTip", "Returns the aggregator (if present). There must never be more than one instance of this actor in a world.\n\n@returns      AGMC_Aggregator*    The aggregator if one exists, otherwise nullptr." },
		{ "WorldContext", "Context" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGMC_Aggregator_GetGMCAggregator_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_Aggregator_eventGetGMCAggregator_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGMC_Aggregator_GetGMCAggregator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_Aggregator_eventGetGMCAggregator_Parms, ReturnValue), Z_Construct_UClass_AGMC_Aggregator_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_Aggregator_GetGMCAggregator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_Aggregator_GetGMCAggregator_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_Aggregator_GetGMCAggregator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_GetGMCAggregator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_Aggregator_GetGMCAggregator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_Aggregator, nullptr, "GetGMCAggregator", nullptr, nullptr, Z_Construct_UFunction_AGMC_Aggregator_GetGMCAggregator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_GetGMCAggregator_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_Aggregator_GetGMCAggregator_Statics::GMC_Aggregator_eventGetGMCAggregator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_GetGMCAggregator_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_Aggregator_GetGMCAggregator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGMC_Aggregator_GetGMCAggregator_Statics::GMC_Aggregator_eventGetGMCAggregator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_Aggregator_GetGMCAggregator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_Aggregator_GetGMCAggregator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_Aggregator::execGetGMCAggregator)
{
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AGMC_Aggregator**)Z_Param__Result=AGMC_Aggregator::GetGMCAggregator(Z_Param_Context);
	P_NATIVE_END;
}
// End Class AGMC_Aggregator Function GetGMCAggregator

// Begin Class AGMC_Aggregator Function GetMeshComponentOrderNumber
struct Z_Construct_UFunction_AGMC_Aggregator_GetMeshComponentOrderNumber_Statics
{
	struct GMC_Aggregator_eventGetMeshComponentOrderNumber_Parms
	{
		const UMeshComponent* MeshComponent;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Determines the order number of the passed mesh component.\n///\n/// @param        MeshComponent    The object to get the order number for.\n/// @returns      int32            The order number of the passed object.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCAggregator.h" },
		{ "ToolTip", "Determines the order number of the passed mesh component.\n\n@param        MeshComponent    The object to get the order number for.\n@returns      int32            The order number of the passed object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGMC_Aggregator_GetMeshComponentOrderNumber_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_Aggregator_eventGetMeshComponentOrderNumber_Parms, MeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGMC_Aggregator_GetMeshComponentOrderNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_Aggregator_eventGetMeshComponentOrderNumber_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_Aggregator_GetMeshComponentOrderNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_Aggregator_GetMeshComponentOrderNumber_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_Aggregator_GetMeshComponentOrderNumber_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_GetMeshComponentOrderNumber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_Aggregator_GetMeshComponentOrderNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_Aggregator, nullptr, "GetMeshComponentOrderNumber", nullptr, nullptr, Z_Construct_UFunction_AGMC_Aggregator_GetMeshComponentOrderNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_GetMeshComponentOrderNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_Aggregator_GetMeshComponentOrderNumber_Statics::GMC_Aggregator_eventGetMeshComponentOrderNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_GetMeshComponentOrderNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_Aggregator_GetMeshComponentOrderNumber_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGMC_Aggregator_GetMeshComponentOrderNumber_Statics::GMC_Aggregator_eventGetMeshComponentOrderNumber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_Aggregator_GetMeshComponentOrderNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_Aggregator_GetMeshComponentOrderNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_Aggregator::execGetMeshComponentOrderNumber)
{
	P_GET_OBJECT(UMeshComponent,Z_Param_MeshComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMeshComponentOrderNumber(Z_Param_MeshComponent);
	P_NATIVE_END;
}
// End Class AGMC_Aggregator Function GetMeshComponentOrderNumber

// Begin Class AGMC_Aggregator Function GetMeshComponents
struct Z_Construct_UFunction_AGMC_Aggregator_GetMeshComponents_Statics
{
	struct GMC_Aggregator_eventGetMeshComponents_Parms
	{
		TArray<UMeshComponent*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Returns all currently registered mesh components.\n///\n/// @returns      const TArray<UMeshComponent*>&    The array containing all registered mesh components.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCAggregator.h" },
		{ "ToolTip", "Returns all currently registered mesh components.\n\n@returns      const TArray<UMeshComponent*>&    The array containing all registered mesh components." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGMC_Aggregator_GetMeshComponents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGMC_Aggregator_GetMeshComponents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000800800058a, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_Aggregator_eventGetMeshComponents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_Aggregator_GetMeshComponents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_Aggregator_GetMeshComponents_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_Aggregator_GetMeshComponents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_GetMeshComponents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_Aggregator_GetMeshComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_Aggregator, nullptr, "GetMeshComponents", nullptr, nullptr, Z_Construct_UFunction_AGMC_Aggregator_GetMeshComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_GetMeshComponents_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_Aggregator_GetMeshComponents_Statics::GMC_Aggregator_eventGetMeshComponents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_GetMeshComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_Aggregator_GetMeshComponents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGMC_Aggregator_GetMeshComponents_Statics::GMC_Aggregator_eventGetMeshComponents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_Aggregator_GetMeshComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_Aggregator_GetMeshComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_Aggregator::execGetMeshComponents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UMeshComponent*>*)Z_Param__Result=P_THIS->GetMeshComponents();
	P_NATIVE_END;
}
// End Class AGMC_Aggregator Function GetMeshComponents

// Begin Class AGMC_Aggregator Function GetMovementComponentOrderNumber
struct Z_Construct_UFunction_AGMC_Aggregator_GetMovementComponentOrderNumber_Statics
{
	struct GMC_Aggregator_eventGetMovementComponentOrderNumber_Parms
	{
		const UMovementComponent* MovementComponent;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Determines the order number of the passed movement component.\n///\n/// @param        MovementComponent    The object to get the order number for.\n/// @returns      int32                The order number of the passed object.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCAggregator.h" },
		{ "ToolTip", "Determines the order number of the passed movement component.\n\n@param        MovementComponent    The object to get the order number for.\n@returns      int32                The order number of the passed object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGMC_Aggregator_GetMovementComponentOrderNumber_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_Aggregator_eventGetMovementComponentOrderNumber_Parms, MovementComponent), Z_Construct_UClass_UMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementComponent_MetaData), NewProp_MovementComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGMC_Aggregator_GetMovementComponentOrderNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_Aggregator_eventGetMovementComponentOrderNumber_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_Aggregator_GetMovementComponentOrderNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_Aggregator_GetMovementComponentOrderNumber_Statics::NewProp_MovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_Aggregator_GetMovementComponentOrderNumber_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_GetMovementComponentOrderNumber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_Aggregator_GetMovementComponentOrderNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_Aggregator, nullptr, "GetMovementComponentOrderNumber", nullptr, nullptr, Z_Construct_UFunction_AGMC_Aggregator_GetMovementComponentOrderNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_GetMovementComponentOrderNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_Aggregator_GetMovementComponentOrderNumber_Statics::GMC_Aggregator_eventGetMovementComponentOrderNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_GetMovementComponentOrderNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_Aggregator_GetMovementComponentOrderNumber_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGMC_Aggregator_GetMovementComponentOrderNumber_Statics::GMC_Aggregator_eventGetMovementComponentOrderNumber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_Aggregator_GetMovementComponentOrderNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_Aggregator_GetMovementComponentOrderNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_Aggregator::execGetMovementComponentOrderNumber)
{
	P_GET_OBJECT(UMovementComponent,Z_Param_MovementComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMovementComponentOrderNumber(Z_Param_MovementComponent);
	P_NATIVE_END;
}
// End Class AGMC_Aggregator Function GetMovementComponentOrderNumber

// Begin Class AGMC_Aggregator Function GetMovementComponents
struct Z_Construct_UFunction_AGMC_Aggregator_GetMovementComponents_Statics
{
	struct GMC_Aggregator_eventGetMovementComponents_Parms
	{
		TArray<UMovementComponent*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Returns all currently registered movement components.\n///\n/// @returns      const TArray<UMovementComponent*>&    The array containing all registered movement components.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCAggregator.h" },
		{ "ToolTip", "Returns all currently registered movement components.\n\n@returns      const TArray<UMovementComponent*>&    The array containing all registered movement components." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGMC_Aggregator_GetMovementComponents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovementComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGMC_Aggregator_GetMovementComponents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000800800058a, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_Aggregator_eventGetMovementComponents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_Aggregator_GetMovementComponents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_Aggregator_GetMovementComponents_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_Aggregator_GetMovementComponents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_GetMovementComponents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_Aggregator_GetMovementComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_Aggregator, nullptr, "GetMovementComponents", nullptr, nullptr, Z_Construct_UFunction_AGMC_Aggregator_GetMovementComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_GetMovementComponents_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_Aggregator_GetMovementComponents_Statics::GMC_Aggregator_eventGetMovementComponents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_GetMovementComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_Aggregator_GetMovementComponents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGMC_Aggregator_GetMovementComponents_Statics::GMC_Aggregator_eventGetMovementComponents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_Aggregator_GetMovementComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_Aggregator_GetMovementComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_Aggregator::execGetMovementComponents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UMovementComponent*>*)Z_Param__Result=P_THIS->GetMovementComponents();
	P_NATIVE_END;
}
// End Class AGMC_Aggregator Function GetMovementComponents

// Begin Class AGMC_Aggregator Function GetPawnOrderNumber
struct Z_Construct_UFunction_AGMC_Aggregator_GetPawnOrderNumber_Statics
{
	struct GMC_Aggregator_eventGetPawnOrderNumber_Parms
	{
		const APawn* Pawn;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Determines the order number of the passed pawn.\n///\n/// @param        Pawn     The object to get the order number for.\n/// @returns      int32    The order number of the passed object.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCAggregator.h" },
		{ "ToolTip", "Determines the order number of the passed pawn.\n\n@param        Pawn     The object to get the order number for.\n@returns      int32    The order number of the passed object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pawn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGMC_Aggregator_GetPawnOrderNumber_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_Aggregator_eventGetPawnOrderNumber_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pawn_MetaData), NewProp_Pawn_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGMC_Aggregator_GetPawnOrderNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_Aggregator_eventGetPawnOrderNumber_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_Aggregator_GetPawnOrderNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_Aggregator_GetPawnOrderNumber_Statics::NewProp_Pawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_Aggregator_GetPawnOrderNumber_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_GetPawnOrderNumber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_Aggregator_GetPawnOrderNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_Aggregator, nullptr, "GetPawnOrderNumber", nullptr, nullptr, Z_Construct_UFunction_AGMC_Aggregator_GetPawnOrderNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_GetPawnOrderNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_Aggregator_GetPawnOrderNumber_Statics::GMC_Aggregator_eventGetPawnOrderNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_GetPawnOrderNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_Aggregator_GetPawnOrderNumber_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGMC_Aggregator_GetPawnOrderNumber_Statics::GMC_Aggregator_eventGetPawnOrderNumber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_Aggregator_GetPawnOrderNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_Aggregator_GetPawnOrderNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_Aggregator::execGetPawnOrderNumber)
{
	P_GET_OBJECT(APawn,Z_Param_Pawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPawnOrderNumber(Z_Param_Pawn);
	P_NATIVE_END;
}
// End Class AGMC_Aggregator Function GetPawnOrderNumber

// Begin Class AGMC_Aggregator Function GetPawns
struct Z_Construct_UFunction_AGMC_Aggregator_GetPawns_Statics
{
	struct GMC_Aggregator_eventGetPawns_Parms
	{
		TArray<APawn*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Returns all currently registered pawn actors.\n///\n/// @returns      const TArray<APawn*>&    The array containing all registered pawn actors.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCAggregator.h" },
		{ "ToolTip", "Returns all currently registered pawn actors.\n\n@returns      const TArray<APawn*>&    The array containing all registered pawn actors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGMC_Aggregator_GetPawns_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGMC_Aggregator_GetPawns_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_Aggregator_eventGetPawns_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_Aggregator_GetPawns_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_Aggregator_GetPawns_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_Aggregator_GetPawns_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_GetPawns_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_Aggregator_GetPawns_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_Aggregator, nullptr, "GetPawns", nullptr, nullptr, Z_Construct_UFunction_AGMC_Aggregator_GetPawns_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_GetPawns_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_Aggregator_GetPawns_Statics::GMC_Aggregator_eventGetPawns_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_GetPawns_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_Aggregator_GetPawns_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGMC_Aggregator_GetPawns_Statics::GMC_Aggregator_eventGetPawns_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_Aggregator_GetPawns()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_Aggregator_GetPawns_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_Aggregator::execGetPawns)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<APawn*>*)Z_Param__Result=P_THIS->GetPawns();
	P_NATIVE_END;
}
// End Class AGMC_Aggregator Function GetPawns

// Begin Class AGMC_Aggregator Function GetRollbackActorOrderNumber
struct Z_Construct_UFunction_AGMC_Aggregator_GetRollbackActorOrderNumber_Statics
{
	struct GMC_Aggregator_eventGetRollbackActorOrderNumber_Parms
	{
		const AGMC_RollbackActor* RollbackActor;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Determines the order number of the passed rollback actor.\n///\n/// @param        RollbackActor    The object to get the order number for.\n/// @returns      int32            The order number of the passed object.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCAggregator.h" },
		{ "ToolTip", "Determines the order number of the passed rollback actor.\n\n@param        RollbackActor    The object to get the order number for.\n@returns      int32            The order number of the passed object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RollbackActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RollbackActor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGMC_Aggregator_GetRollbackActorOrderNumber_Statics::NewProp_RollbackActor = { "RollbackActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_Aggregator_eventGetRollbackActorOrderNumber_Parms, RollbackActor), Z_Construct_UClass_AGMC_RollbackActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RollbackActor_MetaData), NewProp_RollbackActor_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGMC_Aggregator_GetRollbackActorOrderNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_Aggregator_eventGetRollbackActorOrderNumber_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_Aggregator_GetRollbackActorOrderNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_Aggregator_GetRollbackActorOrderNumber_Statics::NewProp_RollbackActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_Aggregator_GetRollbackActorOrderNumber_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_GetRollbackActorOrderNumber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_Aggregator_GetRollbackActorOrderNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_Aggregator, nullptr, "GetRollbackActorOrderNumber", nullptr, nullptr, Z_Construct_UFunction_AGMC_Aggregator_GetRollbackActorOrderNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_GetRollbackActorOrderNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_Aggregator_GetRollbackActorOrderNumber_Statics::GMC_Aggregator_eventGetRollbackActorOrderNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_GetRollbackActorOrderNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_Aggregator_GetRollbackActorOrderNumber_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGMC_Aggregator_GetRollbackActorOrderNumber_Statics::GMC_Aggregator_eventGetRollbackActorOrderNumber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_Aggregator_GetRollbackActorOrderNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_Aggregator_GetRollbackActorOrderNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_Aggregator::execGetRollbackActorOrderNumber)
{
	P_GET_OBJECT(AGMC_RollbackActor,Z_Param_RollbackActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetRollbackActorOrderNumber(Z_Param_RollbackActor);
	P_NATIVE_END;
}
// End Class AGMC_Aggregator Function GetRollbackActorOrderNumber

// Begin Class AGMC_Aggregator Function GetRollbackActors
struct Z_Construct_UFunction_AGMC_Aggregator_GetRollbackActors_Statics
{
	struct GMC_Aggregator_eventGetRollbackActors_Parms
	{
		TArray<AGMC_RollbackActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Returns all currently registered rollback actors.\n///\n/// @returns      const TArray<AGMC_RollbackActor*>&    The array containing all registered rollback actors.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCAggregator.h" },
		{ "ToolTip", "Returns all currently registered rollback actors.\n\n@returns      const TArray<AGMC_RollbackActor*>&    The array containing all registered rollback actors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGMC_Aggregator_GetRollbackActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AGMC_RollbackActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGMC_Aggregator_GetRollbackActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_Aggregator_eventGetRollbackActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_Aggregator_GetRollbackActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_Aggregator_GetRollbackActors_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_Aggregator_GetRollbackActors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_GetRollbackActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_Aggregator_GetRollbackActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_Aggregator, nullptr, "GetRollbackActors", nullptr, nullptr, Z_Construct_UFunction_AGMC_Aggregator_GetRollbackActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_GetRollbackActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_Aggregator_GetRollbackActors_Statics::GMC_Aggregator_eventGetRollbackActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_GetRollbackActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_Aggregator_GetRollbackActors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGMC_Aggregator_GetRollbackActors_Statics::GMC_Aggregator_eventGetRollbackActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_Aggregator_GetRollbackActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_Aggregator_GetRollbackActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_Aggregator::execGetRollbackActors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AGMC_RollbackActor*>*)Z_Param__Result=P_THIS->GetRollbackActors();
	P_NATIVE_END;
}
// End Class AGMC_Aggregator Function GetRollbackActors

// Begin Class AGMC_Aggregator Function OnAggregateTickToggled
struct GMC_Aggregator_eventOnAggregateTickToggled_Parms
{
	bool bEnabled;
};
static FName NAME_AGMC_Aggregator_OnAggregateTickToggled = FName(TEXT("OnAggregateTickToggled"));
void AGMC_Aggregator::OnAggregateTickToggled(bool bEnabled)
{
	GMC_Aggregator_eventOnAggregateTickToggled_Parms Parms;
	Parms.bEnabled=bEnabled ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_AGMC_Aggregator_OnAggregateTickToggled),&Parms);
}
struct Z_Construct_UFunction_AGMC_Aggregator_OnAggregateTickToggled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Called when the aggregate tick is toggled.\n///\n/// @param        bEnabled    Whether the aggregate tick was enabled or disabled.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCAggregator.h" },
		{ "ToolTip", "Called when the aggregate tick is toggled.\n\n@param        bEnabled    Whether the aggregate tick was enabled or disabled.\n@returns      void" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGMC_Aggregator_OnAggregateTickToggled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((GMC_Aggregator_eventOnAggregateTickToggled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGMC_Aggregator_OnAggregateTickToggled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_Aggregator_eventOnAggregateTickToggled_Parms), &Z_Construct_UFunction_AGMC_Aggregator_OnAggregateTickToggled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_Aggregator_OnAggregateTickToggled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_Aggregator_OnAggregateTickToggled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_OnAggregateTickToggled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_Aggregator_OnAggregateTickToggled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_Aggregator, nullptr, "OnAggregateTickToggled", nullptr, nullptr, Z_Construct_UFunction_AGMC_Aggregator_OnAggregateTickToggled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_OnAggregateTickToggled_Statics::PropPointers), sizeof(GMC_Aggregator_eventOnAggregateTickToggled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_OnAggregateTickToggled_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_Aggregator_OnAggregateTickToggled_Statics::Function_MetaDataParams) };
static_assert(sizeof(GMC_Aggregator_eventOnAggregateTickToggled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_Aggregator_OnAggregateTickToggled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_Aggregator_OnAggregateTickToggled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_Aggregator::execOnAggregateTickToggled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAggregateTickToggled_Implementation(Z_Param_bEnabled);
	P_NATIVE_END;
}
// End Class AGMC_Aggregator Function OnAggregateTickToggled

// Begin Class AGMC_Aggregator Function RegisterController
struct Z_Construct_UFunction_AGMC_Aggregator_RegisterController_Statics
{
	struct GMC_Aggregator_eventRegisterController_Parms
	{
		AController* Controller;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Add a controller actor to the aggregator.\n///\n/// @param        Controller    The object to add.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCAggregator.h" },
		{ "ToolTip", "Add a controller actor to the aggregator.\n\n@param        Controller    The object to add.\n@returns      void" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGMC_Aggregator_RegisterController_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_Aggregator_eventRegisterController_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_Aggregator_RegisterController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_Aggregator_RegisterController_Statics::NewProp_Controller,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_RegisterController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_Aggregator_RegisterController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_Aggregator, nullptr, "RegisterController", nullptr, nullptr, Z_Construct_UFunction_AGMC_Aggregator_RegisterController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_RegisterController_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_Aggregator_RegisterController_Statics::GMC_Aggregator_eventRegisterController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_RegisterController_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_Aggregator_RegisterController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGMC_Aggregator_RegisterController_Statics::GMC_Aggregator_eventRegisterController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_Aggregator_RegisterController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_Aggregator_RegisterController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_Aggregator::execRegisterController)
{
	P_GET_OBJECT(AController,Z_Param_Controller);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterController(Z_Param_Controller);
	P_NATIVE_END;
}
// End Class AGMC_Aggregator Function RegisterController

// Begin Class AGMC_Aggregator Function RegisterMeshComponent
struct Z_Construct_UFunction_AGMC_Aggregator_RegisterMeshComponent_Statics
{
	struct GMC_Aggregator_eventRegisterMeshComponent_Parms
	{
		UMeshComponent* Mesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Add a mesh component to the aggregator.\n///\n/// @param        Mesh    The object to add.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCAggregator.h" },
		{ "ToolTip", "Add a mesh component to the aggregator.\n\n@param        Mesh    The object to add.\n@returns      void" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGMC_Aggregator_RegisterMeshComponent_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_Aggregator_eventRegisterMeshComponent_Parms, Mesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_Aggregator_RegisterMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_Aggregator_RegisterMeshComponent_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_RegisterMeshComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_Aggregator_RegisterMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_Aggregator, nullptr, "RegisterMeshComponent", nullptr, nullptr, Z_Construct_UFunction_AGMC_Aggregator_RegisterMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_RegisterMeshComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_Aggregator_RegisterMeshComponent_Statics::GMC_Aggregator_eventRegisterMeshComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_RegisterMeshComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_Aggregator_RegisterMeshComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGMC_Aggregator_RegisterMeshComponent_Statics::GMC_Aggregator_eventRegisterMeshComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_Aggregator_RegisterMeshComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_Aggregator_RegisterMeshComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_Aggregator::execRegisterMeshComponent)
{
	P_GET_OBJECT(UMeshComponent,Z_Param_Mesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterMeshComponent(Z_Param_Mesh);
	P_NATIVE_END;
}
// End Class AGMC_Aggregator Function RegisterMeshComponent

// Begin Class AGMC_Aggregator Function RegisterMovementComponent
struct Z_Construct_UFunction_AGMC_Aggregator_RegisterMovementComponent_Statics
{
	struct GMC_Aggregator_eventRegisterMovementComponent_Parms
	{
		UMovementComponent* MovementComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Add a movement component to the aggregator.\n///\n/// @param        MovementComponent    The object to add.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCAggregator.h" },
		{ "ToolTip", "Add a movement component to the aggregator.\n\n@param        MovementComponent    The object to add.\n@returns      void" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGMC_Aggregator_RegisterMovementComponent_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_Aggregator_eventRegisterMovementComponent_Parms, MovementComponent), Z_Construct_UClass_UMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementComponent_MetaData), NewProp_MovementComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_Aggregator_RegisterMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_Aggregator_RegisterMovementComponent_Statics::NewProp_MovementComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_RegisterMovementComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_Aggregator_RegisterMovementComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_Aggregator, nullptr, "RegisterMovementComponent", nullptr, nullptr, Z_Construct_UFunction_AGMC_Aggregator_RegisterMovementComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_RegisterMovementComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_Aggregator_RegisterMovementComponent_Statics::GMC_Aggregator_eventRegisterMovementComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_RegisterMovementComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_Aggregator_RegisterMovementComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGMC_Aggregator_RegisterMovementComponent_Statics::GMC_Aggregator_eventRegisterMovementComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_Aggregator_RegisterMovementComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_Aggregator_RegisterMovementComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_Aggregator::execRegisterMovementComponent)
{
	P_GET_OBJECT(UMovementComponent,Z_Param_MovementComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterMovementComponent(Z_Param_MovementComponent);
	P_NATIVE_END;
}
// End Class AGMC_Aggregator Function RegisterMovementComponent

// Begin Class AGMC_Aggregator Function RegisterPawn
struct Z_Construct_UFunction_AGMC_Aggregator_RegisterPawn_Statics
{
	struct GMC_Aggregator_eventRegisterPawn_Parms
	{
		APawn* Pawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Add a pawn actor to the aggregator.\n///\n/// @param        Pawn    The object to add.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCAggregator.h" },
		{ "ToolTip", "Add a pawn actor to the aggregator.\n\n@param        Pawn    The object to add.\n@returns      void" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGMC_Aggregator_RegisterPawn_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_Aggregator_eventRegisterPawn_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_Aggregator_RegisterPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_Aggregator_RegisterPawn_Statics::NewProp_Pawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_RegisterPawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_Aggregator_RegisterPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_Aggregator, nullptr, "RegisterPawn", nullptr, nullptr, Z_Construct_UFunction_AGMC_Aggregator_RegisterPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_RegisterPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_Aggregator_RegisterPawn_Statics::GMC_Aggregator_eventRegisterPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_RegisterPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_Aggregator_RegisterPawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGMC_Aggregator_RegisterPawn_Statics::GMC_Aggregator_eventRegisterPawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_Aggregator_RegisterPawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_Aggregator_RegisterPawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_Aggregator::execRegisterPawn)
{
	P_GET_OBJECT(APawn,Z_Param_Pawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterPawn(Z_Param_Pawn);
	P_NATIVE_END;
}
// End Class AGMC_Aggregator Function RegisterPawn

// Begin Class AGMC_Aggregator Function RegisterRollbackActor
struct Z_Construct_UFunction_AGMC_Aggregator_RegisterRollbackActor_Statics
{
	struct GMC_Aggregator_eventRegisterRollbackActor_Parms
	{
		AGMC_RollbackActor* RollbackActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Add a rollback actor to the aggregator.\n///\n/// @param        RollbackActor    The object to add.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCAggregator.h" },
		{ "ToolTip", "Add a rollback actor to the aggregator.\n\n@param        RollbackActor    The object to add.\n@returns      void" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RollbackActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGMC_Aggregator_RegisterRollbackActor_Statics::NewProp_RollbackActor = { "RollbackActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_Aggregator_eventRegisterRollbackActor_Parms, RollbackActor), Z_Construct_UClass_AGMC_RollbackActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_Aggregator_RegisterRollbackActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_Aggregator_RegisterRollbackActor_Statics::NewProp_RollbackActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_RegisterRollbackActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_Aggregator_RegisterRollbackActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_Aggregator, nullptr, "RegisterRollbackActor", nullptr, nullptr, Z_Construct_UFunction_AGMC_Aggregator_RegisterRollbackActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_RegisterRollbackActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_Aggregator_RegisterRollbackActor_Statics::GMC_Aggregator_eventRegisterRollbackActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_RegisterRollbackActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_Aggregator_RegisterRollbackActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGMC_Aggregator_RegisterRollbackActor_Statics::GMC_Aggregator_eventRegisterRollbackActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_Aggregator_RegisterRollbackActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_Aggregator_RegisterRollbackActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_Aggregator::execRegisterRollbackActor)
{
	P_GET_OBJECT(AGMC_RollbackActor,Z_Param_RollbackActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterRollbackActor(Z_Param_RollbackActor);
	P_NATIVE_END;
}
// End Class AGMC_Aggregator Function RegisterRollbackActor

// Begin Class AGMC_Aggregator Function SetTickFunctionsEnabled
struct Z_Construct_UFunction_AGMC_Aggregator_SetTickFunctionsEnabled_Statics
{
	struct GMC_Aggregator_eventSetTickFunctionsEnabled_Parms
	{
		bool bInEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Enables/disables the tick functions of all currently registered objects.\n///\n/// @param        bInEnable    Whether to enable or disable the tick functions.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCAggregator.h" },
		{ "ToolTip", "Enables/disables the tick functions of all currently registered objects.\n\n@param        bInEnable    Whether to enable or disable the tick functions.\n@returns      void" },
	};
#endif // WITH_METADATA
	static void NewProp_bInEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGMC_Aggregator_SetTickFunctionsEnabled_Statics::NewProp_bInEnable_SetBit(void* Obj)
{
	((GMC_Aggregator_eventSetTickFunctionsEnabled_Parms*)Obj)->bInEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGMC_Aggregator_SetTickFunctionsEnabled_Statics::NewProp_bInEnable = { "bInEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_Aggregator_eventSetTickFunctionsEnabled_Parms), &Z_Construct_UFunction_AGMC_Aggregator_SetTickFunctionsEnabled_Statics::NewProp_bInEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_Aggregator_SetTickFunctionsEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_Aggregator_SetTickFunctionsEnabled_Statics::NewProp_bInEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_SetTickFunctionsEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_Aggregator_SetTickFunctionsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_Aggregator, nullptr, "SetTickFunctionsEnabled", nullptr, nullptr, Z_Construct_UFunction_AGMC_Aggregator_SetTickFunctionsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_SetTickFunctionsEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_Aggregator_SetTickFunctionsEnabled_Statics::GMC_Aggregator_eventSetTickFunctionsEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_SetTickFunctionsEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_Aggregator_SetTickFunctionsEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGMC_Aggregator_SetTickFunctionsEnabled_Statics::GMC_Aggregator_eventSetTickFunctionsEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_Aggregator_SetTickFunctionsEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_Aggregator_SetTickFunctionsEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_Aggregator::execSetTickFunctionsEnabled)
{
	P_GET_UBOOL(Z_Param_bInEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTickFunctionsEnabled(Z_Param_bInEnable);
	P_NATIVE_END;
}
// End Class AGMC_Aggregator Function SetTickFunctionsEnabled

// Begin Class AGMC_Aggregator Function SortControllers
struct Z_Construct_UFunction_AGMC_Aggregator_SortControllers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Sorts all currently registered controller actors.\n///\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCAggregator.h" },
		{ "ToolTip", "Sorts all currently registered controller actors.\n\n@returns      void" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_Aggregator_SortControllers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_Aggregator, nullptr, "SortControllers", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_SortControllers_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_Aggregator_SortControllers_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGMC_Aggregator_SortControllers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_Aggregator_SortControllers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_Aggregator::execSortControllers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SortControllers();
	P_NATIVE_END;
}
// End Class AGMC_Aggregator Function SortControllers

// Begin Class AGMC_Aggregator Function SortMeshComponents
struct Z_Construct_UFunction_AGMC_Aggregator_SortMeshComponents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Sorts all currently registered mesh components.\n///\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCAggregator.h" },
		{ "ToolTip", "Sorts all currently registered mesh components.\n\n@returns      void" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_Aggregator_SortMeshComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_Aggregator, nullptr, "SortMeshComponents", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_SortMeshComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_Aggregator_SortMeshComponents_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGMC_Aggregator_SortMeshComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_Aggregator_SortMeshComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_Aggregator::execSortMeshComponents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SortMeshComponents();
	P_NATIVE_END;
}
// End Class AGMC_Aggregator Function SortMeshComponents

// Begin Class AGMC_Aggregator Function SortMovementComponents
struct Z_Construct_UFunction_AGMC_Aggregator_SortMovementComponents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Sorts all currently registered movement components.\n///\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCAggregator.h" },
		{ "ToolTip", "Sorts all currently registered movement components.\n\n@returns      void" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_Aggregator_SortMovementComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_Aggregator, nullptr, "SortMovementComponents", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_SortMovementComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_Aggregator_SortMovementComponents_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGMC_Aggregator_SortMovementComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_Aggregator_SortMovementComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_Aggregator::execSortMovementComponents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SortMovementComponents();
	P_NATIVE_END;
}
// End Class AGMC_Aggregator Function SortMovementComponents

// Begin Class AGMC_Aggregator Function SortPawns
struct Z_Construct_UFunction_AGMC_Aggregator_SortPawns_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Sorts all currently registered pawn actors.\n///\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCAggregator.h" },
		{ "ToolTip", "Sorts all currently registered pawn actors.\n\n@returns      void" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_Aggregator_SortPawns_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_Aggregator, nullptr, "SortPawns", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_SortPawns_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_Aggregator_SortPawns_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGMC_Aggregator_SortPawns()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_Aggregator_SortPawns_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_Aggregator::execSortPawns)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SortPawns();
	P_NATIVE_END;
}
// End Class AGMC_Aggregator Function SortPawns

// Begin Class AGMC_Aggregator Function SortRollbackActors
struct Z_Construct_UFunction_AGMC_Aggregator_SortRollbackActors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Sorts all currently registered rollback actors.\n///\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCAggregator.h" },
		{ "ToolTip", "Sorts all currently registered rollback actors.\n\n@returns      void" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_Aggregator_SortRollbackActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_Aggregator, nullptr, "SortRollbackActors", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_SortRollbackActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_Aggregator_SortRollbackActors_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGMC_Aggregator_SortRollbackActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_Aggregator_SortRollbackActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_Aggregator::execSortRollbackActors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SortRollbackActors();
	P_NATIVE_END;
}
// End Class AGMC_Aggregator Function SortRollbackActors

// Begin Class AGMC_Aggregator Function UnregisterController
struct Z_Construct_UFunction_AGMC_Aggregator_UnregisterController_Statics
{
	struct GMC_Aggregator_eventUnregisterController_Parms
	{
		AController* Controller;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Remove a controller actor from the aggregator.\n///\n/// @param        Controller    The object to remove.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCAggregator.h" },
		{ "ToolTip", "Remove a controller actor from the aggregator.\n\n@param        Controller    The object to remove.\n@returns      void" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGMC_Aggregator_UnregisterController_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_Aggregator_eventUnregisterController_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_Aggregator_UnregisterController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_Aggregator_UnregisterController_Statics::NewProp_Controller,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_UnregisterController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_Aggregator_UnregisterController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_Aggregator, nullptr, "UnregisterController", nullptr, nullptr, Z_Construct_UFunction_AGMC_Aggregator_UnregisterController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_UnregisterController_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_Aggregator_UnregisterController_Statics::GMC_Aggregator_eventUnregisterController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_UnregisterController_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_Aggregator_UnregisterController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGMC_Aggregator_UnregisterController_Statics::GMC_Aggregator_eventUnregisterController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_Aggregator_UnregisterController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_Aggregator_UnregisterController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_Aggregator::execUnregisterController)
{
	P_GET_OBJECT(AController,Z_Param_Controller);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnregisterController(Z_Param_Controller);
	P_NATIVE_END;
}
// End Class AGMC_Aggregator Function UnregisterController

// Begin Class AGMC_Aggregator Function UnregisterMeshComponent
struct Z_Construct_UFunction_AGMC_Aggregator_UnregisterMeshComponent_Statics
{
	struct GMC_Aggregator_eventUnregisterMeshComponent_Parms
	{
		UMeshComponent* Mesh;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Remove a mesh component from the aggregator.\n///\n/// @param        Mesh    The object to remove.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCAggregator.h" },
		{ "ToolTip", "Remove a mesh component from the aggregator.\n\n@param        Mesh    The object to remove.\n@returns      void" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGMC_Aggregator_UnregisterMeshComponent_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_Aggregator_eventUnregisterMeshComponent_Parms, Mesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_Aggregator_UnregisterMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_Aggregator_UnregisterMeshComponent_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_UnregisterMeshComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_Aggregator_UnregisterMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_Aggregator, nullptr, "UnregisterMeshComponent", nullptr, nullptr, Z_Construct_UFunction_AGMC_Aggregator_UnregisterMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_UnregisterMeshComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_Aggregator_UnregisterMeshComponent_Statics::GMC_Aggregator_eventUnregisterMeshComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_UnregisterMeshComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_Aggregator_UnregisterMeshComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGMC_Aggregator_UnregisterMeshComponent_Statics::GMC_Aggregator_eventUnregisterMeshComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_Aggregator_UnregisterMeshComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_Aggregator_UnregisterMeshComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_Aggregator::execUnregisterMeshComponent)
{
	P_GET_OBJECT(UMeshComponent,Z_Param_Mesh);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnregisterMeshComponent(Z_Param_Mesh);
	P_NATIVE_END;
}
// End Class AGMC_Aggregator Function UnregisterMeshComponent

// Begin Class AGMC_Aggregator Function UnregisterMovementComponent
struct Z_Construct_UFunction_AGMC_Aggregator_UnregisterMovementComponent_Statics
{
	struct GMC_Aggregator_eventUnregisterMovementComponent_Parms
	{
		UMovementComponent* MovementComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Remove a movement component from the aggregator.\n///\n/// @param        MovementComponent    The object to remove.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCAggregator.h" },
		{ "ToolTip", "Remove a movement component from the aggregator.\n\n@param        MovementComponent    The object to remove.\n@returns      void" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGMC_Aggregator_UnregisterMovementComponent_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_Aggregator_eventUnregisterMovementComponent_Parms, MovementComponent), Z_Construct_UClass_UMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementComponent_MetaData), NewProp_MovementComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_Aggregator_UnregisterMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_Aggregator_UnregisterMovementComponent_Statics::NewProp_MovementComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_UnregisterMovementComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_Aggregator_UnregisterMovementComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_Aggregator, nullptr, "UnregisterMovementComponent", nullptr, nullptr, Z_Construct_UFunction_AGMC_Aggregator_UnregisterMovementComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_UnregisterMovementComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_Aggregator_UnregisterMovementComponent_Statics::GMC_Aggregator_eventUnregisterMovementComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_UnregisterMovementComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_Aggregator_UnregisterMovementComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGMC_Aggregator_UnregisterMovementComponent_Statics::GMC_Aggregator_eventUnregisterMovementComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_Aggregator_UnregisterMovementComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_Aggregator_UnregisterMovementComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_Aggregator::execUnregisterMovementComponent)
{
	P_GET_OBJECT(UMovementComponent,Z_Param_MovementComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnregisterMovementComponent(Z_Param_MovementComponent);
	P_NATIVE_END;
}
// End Class AGMC_Aggregator Function UnregisterMovementComponent

// Begin Class AGMC_Aggregator Function UnregisterPawn
struct Z_Construct_UFunction_AGMC_Aggregator_UnregisterPawn_Statics
{
	struct GMC_Aggregator_eventUnregisterPawn_Parms
	{
		APawn* Pawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Remove a pawn actor from the aggregator.\n///\n/// @param        Pawn    The object to remove.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCAggregator.h" },
		{ "ToolTip", "Remove a pawn actor from the aggregator.\n\n@param        Pawn    The object to remove.\n@returns      void" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGMC_Aggregator_UnregisterPawn_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_Aggregator_eventUnregisterPawn_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_Aggregator_UnregisterPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_Aggregator_UnregisterPawn_Statics::NewProp_Pawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_UnregisterPawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_Aggregator_UnregisterPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_Aggregator, nullptr, "UnregisterPawn", nullptr, nullptr, Z_Construct_UFunction_AGMC_Aggregator_UnregisterPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_UnregisterPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_Aggregator_UnregisterPawn_Statics::GMC_Aggregator_eventUnregisterPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_UnregisterPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_Aggregator_UnregisterPawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGMC_Aggregator_UnregisterPawn_Statics::GMC_Aggregator_eventUnregisterPawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_Aggregator_UnregisterPawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_Aggregator_UnregisterPawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_Aggregator::execUnregisterPawn)
{
	P_GET_OBJECT(APawn,Z_Param_Pawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnregisterPawn(Z_Param_Pawn);
	P_NATIVE_END;
}
// End Class AGMC_Aggregator Function UnregisterPawn

// Begin Class AGMC_Aggregator Function UnregisterRollbackActor
struct Z_Construct_UFunction_AGMC_Aggregator_UnregisterRollbackActor_Statics
{
	struct GMC_Aggregator_eventUnregisterRollbackActor_Parms
	{
		AGMC_RollbackActor* RollbackActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Remove a rollback actor from the aggregator.\n///\n/// @param        RollbackActor    The object to remove.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCAggregator.h" },
		{ "ToolTip", "Remove a rollback actor from the aggregator.\n\n@param        RollbackActor    The object to remove.\n@returns      void" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RollbackActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGMC_Aggregator_UnregisterRollbackActor_Statics::NewProp_RollbackActor = { "RollbackActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_Aggregator_eventUnregisterRollbackActor_Parms, RollbackActor), Z_Construct_UClass_AGMC_RollbackActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_Aggregator_UnregisterRollbackActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_Aggregator_UnregisterRollbackActor_Statics::NewProp_RollbackActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_UnregisterRollbackActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_Aggregator_UnregisterRollbackActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_Aggregator, nullptr, "UnregisterRollbackActor", nullptr, nullptr, Z_Construct_UFunction_AGMC_Aggregator_UnregisterRollbackActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_UnregisterRollbackActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_Aggregator_UnregisterRollbackActor_Statics::GMC_Aggregator_eventUnregisterRollbackActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_Aggregator_UnregisterRollbackActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_Aggregator_UnregisterRollbackActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGMC_Aggregator_UnregisterRollbackActor_Statics::GMC_Aggregator_eventUnregisterRollbackActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_Aggregator_UnregisterRollbackActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_Aggregator_UnregisterRollbackActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_Aggregator::execUnregisterRollbackActor)
{
	P_GET_OBJECT(AGMC_RollbackActor,Z_Param_RollbackActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnregisterRollbackActor(Z_Param_RollbackActor);
	P_NATIVE_END;
}
// End Class AGMC_Aggregator Function UnregisterRollbackActor

// Begin Class AGMC_Aggregator
void AGMC_Aggregator::StaticRegisterNativesAGMC_Aggregator()
{
	UClass* Class = AGMC_Aggregator::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetControllerOrderNumber", &AGMC_Aggregator::execGetControllerOrderNumber },
		{ "GetControllers", &AGMC_Aggregator::execGetControllers },
		{ "GetGMCAggregator", &AGMC_Aggregator::execGetGMCAggregator },
		{ "GetMeshComponentOrderNumber", &AGMC_Aggregator::execGetMeshComponentOrderNumber },
		{ "GetMeshComponents", &AGMC_Aggregator::execGetMeshComponents },
		{ "GetMovementComponentOrderNumber", &AGMC_Aggregator::execGetMovementComponentOrderNumber },
		{ "GetMovementComponents", &AGMC_Aggregator::execGetMovementComponents },
		{ "GetPawnOrderNumber", &AGMC_Aggregator::execGetPawnOrderNumber },
		{ "GetPawns", &AGMC_Aggregator::execGetPawns },
		{ "GetRollbackActorOrderNumber", &AGMC_Aggregator::execGetRollbackActorOrderNumber },
		{ "GetRollbackActors", &AGMC_Aggregator::execGetRollbackActors },
		{ "OnAggregateTickToggled", &AGMC_Aggregator::execOnAggregateTickToggled },
		{ "RegisterController", &AGMC_Aggregator::execRegisterController },
		{ "RegisterMeshComponent", &AGMC_Aggregator::execRegisterMeshComponent },
		{ "RegisterMovementComponent", &AGMC_Aggregator::execRegisterMovementComponent },
		{ "RegisterPawn", &AGMC_Aggregator::execRegisterPawn },
		{ "RegisterRollbackActor", &AGMC_Aggregator::execRegisterRollbackActor },
		{ "SetTickFunctionsEnabled", &AGMC_Aggregator::execSetTickFunctionsEnabled },
		{ "SortControllers", &AGMC_Aggregator::execSortControllers },
		{ "SortMeshComponents", &AGMC_Aggregator::execSortMeshComponents },
		{ "SortMovementComponents", &AGMC_Aggregator::execSortMovementComponents },
		{ "SortPawns", &AGMC_Aggregator::execSortPawns },
		{ "SortRollbackActors", &AGMC_Aggregator::execSortRollbackActors },
		{ "UnregisterController", &AGMC_Aggregator::execUnregisterController },
		{ "UnregisterMeshComponent", &AGMC_Aggregator::execUnregisterMeshComponent },
		{ "UnregisterMovementComponent", &AGMC_Aggregator::execUnregisterMovementComponent },
		{ "UnregisterPawn", &AGMC_Aggregator::execUnregisterPawn },
		{ "UnregisterRollbackActor", &AGMC_Aggregator::execUnregisterRollbackActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGMC_Aggregator);
UClass* Z_Construct_UClass_AGMC_Aggregator_NoRegister()
{
	return AGMC_Aggregator::StaticClass();
}
struct Z_Construct_UClass_AGMC_Aggregator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/// Allows for efficient ticking and retrieval of GMC related actors and components.\n" },
		{ "IncludePath", "Actors/GMCAggregator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actors/GMCAggregator.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Allows for efficient ticking and retrieval of GMC related actors and components." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAggregateTick_MetaData[] = {
		{ "Category", "Tick" },
		{ "Comment", "/// If true, all currently registered objects will have their tick functions disabled and will be ticked from the aggregator instead.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCAggregator.h" },
		{ "ToolTip", "If true, all currently registered objects will have their tick functions disabled and will be ticked from the aggregator instead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAggregateControllers_MetaData[] = {
		{ "Category", "Groups" },
		{ "Comment", "/// Do not toggle at runtime. Some tick group combinations may cause faulty behaviour.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCAggregator.h" },
		{ "ToolTip", "Do not toggle at runtime. Some tick group combinations may cause faulty behaviour." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAggregatePawns_MetaData[] = {
		{ "Category", "Groups" },
		{ "Comment", "/// Do not toggle at runtime. Some tick group combinations may cause faulty behaviour.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCAggregator.h" },
		{ "ToolTip", "Do not toggle at runtime. Some tick group combinations may cause faulty behaviour." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAggregateMovementComponents_MetaData[] = {
		{ "Category", "Groups" },
		{ "Comment", "/// Do not toggle at runtime. Some tick group combinations may cause faulty behaviour.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCAggregator.h" },
		{ "ToolTip", "Do not toggle at runtime. Some tick group combinations may cause faulty behaviour." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAggregateRollbackActors_MetaData[] = {
		{ "Category", "Groups" },
		{ "Comment", "/// Do not toggle at runtime. Some tick group combinations may cause faulty behaviour.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCAggregator.h" },
		{ "ToolTip", "Do not toggle at runtime. Some tick group combinations may cause faulty behaviour." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAggregateMeshComponents_MetaData[] = {
		{ "Category", "Groups" },
		{ "Comment", "/// Do not toggle at runtime. Some tick group combinations may cause faulty behaviour.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCAggregator.h" },
		{ "ToolTip", "Do not toggle at runtime. Some tick group combinations may cause faulty behaviour." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Controllers_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Holds all currently registered controllers.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCAggregator.h" },
		{ "ToolTip", "Holds all currently registered controllers." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pawns_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Holds all currently registered pawns.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCAggregator.h" },
		{ "ToolTip", "Holds all currently registered pawns." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponents_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Holds all currently registered movement components.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/GMCAggregator.h" },
		{ "ToolTip", "Holds all currently registered movement components." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RollbackActors_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Holds all currently registered rollback actors.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCAggregator.h" },
		{ "ToolTip", "Holds all currently registered rollback actors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponents_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Holds all currently registered mesh components.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/GMCAggregator.h" },
		{ "ToolTip", "Holds all currently registered mesh components." },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableAggregateTick_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAggregateTick;
	static void NewProp_bAggregateControllers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAggregateControllers;
	static void NewProp_bAggregatePawns_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAggregatePawns;
	static void NewProp_bAggregateMovementComponents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAggregateMovementComponents;
	static void NewProp_bAggregateRollbackActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAggregateRollbackActors;
	static void NewProp_bAggregateMeshComponents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAggregateMeshComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controllers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Controllers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawns_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Pawns;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MovementComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RollbackActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RollbackActors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGMC_Aggregator_GetControllerOrderNumber, "GetControllerOrderNumber" }, // 2560512476
		{ &Z_Construct_UFunction_AGMC_Aggregator_GetControllers, "GetControllers" }, // 3206084883
		{ &Z_Construct_UFunction_AGMC_Aggregator_GetGMCAggregator, "GetGMCAggregator" }, // 1999585408
		{ &Z_Construct_UFunction_AGMC_Aggregator_GetMeshComponentOrderNumber, "GetMeshComponentOrderNumber" }, // 3529485806
		{ &Z_Construct_UFunction_AGMC_Aggregator_GetMeshComponents, "GetMeshComponents" }, // 438913242
		{ &Z_Construct_UFunction_AGMC_Aggregator_GetMovementComponentOrderNumber, "GetMovementComponentOrderNumber" }, // 1060045482
		{ &Z_Construct_UFunction_AGMC_Aggregator_GetMovementComponents, "GetMovementComponents" }, // 3853145801
		{ &Z_Construct_UFunction_AGMC_Aggregator_GetPawnOrderNumber, "GetPawnOrderNumber" }, // 3477840795
		{ &Z_Construct_UFunction_AGMC_Aggregator_GetPawns, "GetPawns" }, // 1523020780
		{ &Z_Construct_UFunction_AGMC_Aggregator_GetRollbackActorOrderNumber, "GetRollbackActorOrderNumber" }, // 2528537167
		{ &Z_Construct_UFunction_AGMC_Aggregator_GetRollbackActors, "GetRollbackActors" }, // 665042051
		{ &Z_Construct_UFunction_AGMC_Aggregator_OnAggregateTickToggled, "OnAggregateTickToggled" }, // 4031302761
		{ &Z_Construct_UFunction_AGMC_Aggregator_RegisterController, "RegisterController" }, // 636108782
		{ &Z_Construct_UFunction_AGMC_Aggregator_RegisterMeshComponent, "RegisterMeshComponent" }, // 2429882483
		{ &Z_Construct_UFunction_AGMC_Aggregator_RegisterMovementComponent, "RegisterMovementComponent" }, // 2662907401
		{ &Z_Construct_UFunction_AGMC_Aggregator_RegisterPawn, "RegisterPawn" }, // 581428015
		{ &Z_Construct_UFunction_AGMC_Aggregator_RegisterRollbackActor, "RegisterRollbackActor" }, // 2465537282
		{ &Z_Construct_UFunction_AGMC_Aggregator_SetTickFunctionsEnabled, "SetTickFunctionsEnabled" }, // 125822789
		{ &Z_Construct_UFunction_AGMC_Aggregator_SortControllers, "SortControllers" }, // 181219946
		{ &Z_Construct_UFunction_AGMC_Aggregator_SortMeshComponents, "SortMeshComponents" }, // 391732676
		{ &Z_Construct_UFunction_AGMC_Aggregator_SortMovementComponents, "SortMovementComponents" }, // 2427817834
		{ &Z_Construct_UFunction_AGMC_Aggregator_SortPawns, "SortPawns" }, // 1010376577
		{ &Z_Construct_UFunction_AGMC_Aggregator_SortRollbackActors, "SortRollbackActors" }, // 2651448388
		{ &Z_Construct_UFunction_AGMC_Aggregator_UnregisterController, "UnregisterController" }, // 3003760378
		{ &Z_Construct_UFunction_AGMC_Aggregator_UnregisterMeshComponent, "UnregisterMeshComponent" }, // 87240074
		{ &Z_Construct_UFunction_AGMC_Aggregator_UnregisterMovementComponent, "UnregisterMovementComponent" }, // 2903545386
		{ &Z_Construct_UFunction_AGMC_Aggregator_UnregisterPawn, "UnregisterPawn" }, // 3256717557
		{ &Z_Construct_UFunction_AGMC_Aggregator_UnregisterRollbackActor, "UnregisterRollbackActor" }, // 2165975944
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGMC_Aggregator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_bEnableAggregateTick_SetBit(void* Obj)
{
	((AGMC_Aggregator*)Obj)->bEnableAggregateTick = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_bEnableAggregateTick = { "bEnableAggregateTick", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGMC_Aggregator), &Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_bEnableAggregateTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableAggregateTick_MetaData), NewProp_bEnableAggregateTick_MetaData) };
void Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_bAggregateControllers_SetBit(void* Obj)
{
	((AGMC_Aggregator*)Obj)->bAggregateControllers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_bAggregateControllers = { "bAggregateControllers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGMC_Aggregator), &Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_bAggregateControllers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAggregateControllers_MetaData), NewProp_bAggregateControllers_MetaData) };
void Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_bAggregatePawns_SetBit(void* Obj)
{
	((AGMC_Aggregator*)Obj)->bAggregatePawns = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_bAggregatePawns = { "bAggregatePawns", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGMC_Aggregator), &Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_bAggregatePawns_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAggregatePawns_MetaData), NewProp_bAggregatePawns_MetaData) };
void Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_bAggregateMovementComponents_SetBit(void* Obj)
{
	((AGMC_Aggregator*)Obj)->bAggregateMovementComponents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_bAggregateMovementComponents = { "bAggregateMovementComponents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGMC_Aggregator), &Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_bAggregateMovementComponents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAggregateMovementComponents_MetaData), NewProp_bAggregateMovementComponents_MetaData) };
void Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_bAggregateRollbackActors_SetBit(void* Obj)
{
	((AGMC_Aggregator*)Obj)->bAggregateRollbackActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_bAggregateRollbackActors = { "bAggregateRollbackActors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGMC_Aggregator), &Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_bAggregateRollbackActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAggregateRollbackActors_MetaData), NewProp_bAggregateRollbackActors_MetaData) };
void Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_bAggregateMeshComponents_SetBit(void* Obj)
{
	((AGMC_Aggregator*)Obj)->bAggregateMeshComponents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_bAggregateMeshComponents = { "bAggregateMeshComponents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGMC_Aggregator), &Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_bAggregateMeshComponents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAggregateMeshComponents_MetaData), NewProp_bAggregateMeshComponents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_Controllers_Inner = { "Controllers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_Controllers = { "Controllers", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGMC_Aggregator, Controllers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Controllers_MetaData), NewProp_Controllers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_Pawns_Inner = { "Pawns", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_Pawns = { "Pawns", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGMC_Aggregator, Pawns), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pawns_MetaData), NewProp_Pawns_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_MovementComponents_Inner = { "MovementComponents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMovementComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_MovementComponents = { "MovementComponents", nullptr, (EPropertyFlags)0x002008800000000c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGMC_Aggregator, MovementComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementComponents_MetaData), NewProp_MovementComponents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_RollbackActors_Inner = { "RollbackActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AGMC_RollbackActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_RollbackActors = { "RollbackActors", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGMC_Aggregator, RollbackActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RollbackActors_MetaData), NewProp_RollbackActors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_MeshComponents_Inner = { "MeshComponents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_MeshComponents = { "MeshComponents", nullptr, (EPropertyFlags)0x002008800000000c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGMC_Aggregator, MeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponents_MetaData), NewProp_MeshComponents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGMC_Aggregator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_bEnableAggregateTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_bAggregateControllers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_bAggregatePawns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_bAggregateMovementComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_bAggregateRollbackActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_bAggregateMeshComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_Controllers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_Controllers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_Pawns_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_Pawns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_MovementComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_MovementComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_RollbackActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_RollbackActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_MeshComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_Aggregator_Statics::NewProp_MeshComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_Aggregator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGMC_Aggregator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_Aggregator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGMC_Aggregator_Statics::ClassParams = {
	&AGMC_Aggregator::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGMC_Aggregator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_Aggregator_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_Aggregator_Statics::Class_MetaDataParams), Z_Construct_UClass_AGMC_Aggregator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGMC_Aggregator()
{
	if (!Z_Registration_Info_UClass_AGMC_Aggregator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGMC_Aggregator.OuterSingleton, Z_Construct_UClass_AGMC_Aggregator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGMC_Aggregator.OuterSingleton;
}
template<> GMCCORE_API UClass* StaticClass<AGMC_Aggregator>()
{
	return AGMC_Aggregator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGMC_Aggregator);
AGMC_Aggregator::~AGMC_Aggregator() {}
// End Class AGMC_Aggregator

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCAggregator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGMC_Aggregator, AGMC_Aggregator::StaticClass, TEXT("AGMC_Aggregator"), &Z_Registration_Info_UClass_AGMC_Aggregator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGMC_Aggregator), 444327699U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCAggregator_h_1428843626(TEXT("/Script/GMCCore"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCAggregator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCAggregator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
