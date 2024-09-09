// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GMCCore/Public/Actors/GMCRollbackActor.h"
#include "GMCCore/Public/Components/GMCReplicationComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMCRollbackActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
GMCCORE_API UClass* Z_Construct_UClass_AGMC_Aggregator_NoRegister();
GMCCORE_API UClass* Z_Construct_UClass_AGMC_RollbackActor();
GMCCORE_API UClass* Z_Construct_UClass_AGMC_RollbackActor_NoRegister();
GMCCORE_API UEnum* Z_Construct_UEnum_GMCCore_EGMC_NetContext();
GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_Move();
GMCCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGMC_RollbackState();
UPackage* Z_Construct_UPackage__Script_GMCCore();
// End Cross Module References

// Begin ScriptStruct FGMC_RollbackState
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GMC_RollbackState;
class UScriptStruct* FGMC_RollbackState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_RollbackState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GMC_RollbackState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGMC_RollbackState, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("GMC_RollbackState"));
	}
	return Z_Registration_Info_UScriptStruct_GMC_RollbackState.OuterSingleton;
}
template<> GMCCORE_API UScriptStruct* StaticStruct<FGMC_RollbackState>()
{
	return FGMC_RollbackState::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGMC_RollbackState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearVelocity_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGMC_RollbackState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGMC_RollbackState_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_RollbackState, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGMC_RollbackState_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_RollbackState, LinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearVelocity_MetaData), NewProp_LinearVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGMC_RollbackState_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGMC_RollbackState, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularVelocity_MetaData), NewProp_AngularVelocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGMC_RollbackState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_RollbackState_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_RollbackState_Statics::NewProp_LinearVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGMC_RollbackState_Statics::NewProp_AngularVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_RollbackState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGMC_RollbackState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
	nullptr,
	&NewStructOps,
	"GMC_RollbackState",
	Z_Construct_UScriptStruct_FGMC_RollbackState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_RollbackState_Statics::PropPointers),
	sizeof(FGMC_RollbackState),
	alignof(FGMC_RollbackState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGMC_RollbackState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGMC_RollbackState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGMC_RollbackState()
{
	if (!Z_Registration_Info_UScriptStruct_GMC_RollbackState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GMC_RollbackState.InnerSingleton, Z_Construct_UScriptStruct_FGMC_RollbackState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GMC_RollbackState.InnerSingleton;
}
// End ScriptStruct FGMC_RollbackState

// Begin Class AGMC_RollbackActor Function ComputeTangentialVelocity
struct Z_Construct_UFunction_AGMC_RollbackActor_ComputeTangentialVelocity_Statics
{
	struct GMC_RollbackActor_eventComputeTangentialVelocity_Parms
	{
		FVector WorldLocation;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Calculates the tangential velocity that would act on an object at the passed position. Only relevant if the actor has any angular velocity.\n///\n/// @param        WorldLocation    The location to calculate the tangential velocity at in world space.\n/// @returns      FVector          The tangential velocity at the passed location in cm/sec.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ToolTip", "Calculates the tangential velocity that would act on an object at the passed position. Only relevant if the actor has any angular velocity.\n\n@param        WorldLocation    The location to calculate the tangential velocity at in world space.\n@returns      FVector          The tangential velocity at the passed location in cm/sec." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGMC_RollbackActor_ComputeTangentialVelocity_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_RollbackActor_eventComputeTangentialVelocity_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldLocation_MetaData), NewProp_WorldLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGMC_RollbackActor_ComputeTangentialVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_RollbackActor_eventComputeTangentialVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_RollbackActor_ComputeTangentialVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_RollbackActor_ComputeTangentialVelocity_Statics::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_RollbackActor_ComputeTangentialVelocity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_ComputeTangentialVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_RollbackActor_ComputeTangentialVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_RollbackActor, nullptr, "ComputeTangentialVelocity", nullptr, nullptr, Z_Construct_UFunction_AGMC_RollbackActor_ComputeTangentialVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_ComputeTangentialVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_RollbackActor_ComputeTangentialVelocity_Statics::GMC_RollbackActor_eventComputeTangentialVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_ComputeTangentialVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_RollbackActor_ComputeTangentialVelocity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGMC_RollbackActor_ComputeTangentialVelocity_Statics::GMC_RollbackActor_eventComputeTangentialVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_RollbackActor_ComputeTangentialVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_RollbackActor_ComputeTangentialVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_RollbackActor::execComputeTangentialVelocity)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->ComputeTangentialVelocity(Z_Param_Out_WorldLocation);
	P_NATIVE_END;
}
// End Class AGMC_RollbackActor Function ComputeTangentialVelocity

// Begin Class AGMC_RollbackActor Function GetAngularVelocityInDegrees
struct Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInDegrees_Statics
{
	struct GMC_RollbackActor_eventGetAngularVelocityInDegrees_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Returns the angular velocity of the actor in deg/sec.\n///\n/// @returns      FVector    The angular velocity of the actor.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ToolTip", "Returns the angular velocity of the actor in deg/sec.\n\n@returns      FVector    The angular velocity of the actor." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInDegrees_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_RollbackActor_eventGetAngularVelocityInDegrees_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInDegrees_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInDegrees_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInDegrees_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInDegrees_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_RollbackActor, nullptr, "GetAngularVelocityInDegrees", nullptr, nullptr, Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInDegrees_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInDegrees_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInDegrees_Statics::GMC_RollbackActor_eventGetAngularVelocityInDegrees_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInDegrees_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInDegrees_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInDegrees_Statics::GMC_RollbackActor_eventGetAngularVelocityInDegrees_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInDegrees()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInDegrees_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_RollbackActor::execGetAngularVelocityInDegrees)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetAngularVelocityInDegrees();
	P_NATIVE_END;
}
// End Class AGMC_RollbackActor Function GetAngularVelocityInDegrees

// Begin Class AGMC_RollbackActor Function GetAngularVelocityInRadians
struct Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInRadians_Statics
{
	struct GMC_RollbackActor_eventGetAngularVelocityInRadians_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Returns the angular velocity of the actor in rad/sec.\n///\n/// @returns      FVector    The angular velocity of the actor.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ToolTip", "Returns the angular velocity of the actor in rad/sec.\n\n@returns      FVector    The angular velocity of the actor." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInRadians_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_RollbackActor_eventGetAngularVelocityInRadians_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInRadians_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInRadians_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInRadians_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInRadians_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_RollbackActor, nullptr, "GetAngularVelocityInRadians", nullptr, nullptr, Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInRadians_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInRadians_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInRadians_Statics::GMC_RollbackActor_eventGetAngularVelocityInRadians_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInRadians_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInRadians_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInRadians_Statics::GMC_RollbackActor_eventGetAngularVelocityInRadians_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInRadians()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInRadians_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_RollbackActor::execGetAngularVelocityInRadians)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetAngularVelocityInRadians();
	P_NATIVE_END;
}
// End Class AGMC_RollbackActor Function GetAngularVelocityInRadians

// Begin Class AGMC_RollbackActor Function GetLinearVelocity
struct Z_Construct_UFunction_AGMC_RollbackActor_GetLinearVelocity_Statics
{
	struct GMC_RollbackActor_eventGetLinearVelocity_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Returns the linear velocity of the actor in cm/sec.\n///\n/// @returns      FVector    The linear velocity of the actor.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ToolTip", "Returns the linear velocity of the actor in cm/sec.\n\n@returns      FVector    The linear velocity of the actor." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGMC_RollbackActor_GetLinearVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_RollbackActor_eventGetLinearVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_RollbackActor_GetLinearVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_RollbackActor_GetLinearVelocity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_GetLinearVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_RollbackActor_GetLinearVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_RollbackActor, nullptr, "GetLinearVelocity", nullptr, nullptr, Z_Construct_UFunction_AGMC_RollbackActor_GetLinearVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_GetLinearVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_RollbackActor_GetLinearVelocity_Statics::GMC_RollbackActor_eventGetLinearVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_GetLinearVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_RollbackActor_GetLinearVelocity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGMC_RollbackActor_GetLinearVelocity_Statics::GMC_RollbackActor_eventGetLinearVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_RollbackActor_GetLinearVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_RollbackActor_GetLinearVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_RollbackActor::execGetLinearVelocity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetLinearVelocity();
	P_NATIVE_END;
}
// End Class AGMC_RollbackActor Function GetLinearVelocity

// Begin Class AGMC_RollbackActor Function GetTime
struct Z_Construct_UFunction_AGMC_RollbackActor_GetTime_Statics
{
	struct GMC_RollbackActor_eventGetTime_Parms
	{
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Returns the current synchronised world time i.e. when called on the client the network delay is already accounted for.\n///\n/// @returns      double    The current world time.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ToolTip", "Returns the current synchronised world time i.e. when called on the client the network delay is already accounted for.\n\n@returns      double    The current world time." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AGMC_RollbackActor_GetTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_RollbackActor_eventGetTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_RollbackActor_GetTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_RollbackActor_GetTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_GetTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_RollbackActor_GetTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_RollbackActor, nullptr, "GetTime", nullptr, nullptr, Z_Construct_UFunction_AGMC_RollbackActor_GetTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_GetTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_RollbackActor_GetTime_Statics::GMC_RollbackActor_eventGetTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_GetTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_RollbackActor_GetTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGMC_RollbackActor_GetTime_Statics::GMC_RollbackActor_eventGetTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_RollbackActor_GetTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_RollbackActor_GetTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_RollbackActor::execGetTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetTime();
	P_NATIVE_END;
}
// End Class AGMC_RollbackActor Function GetTime

// Begin Class AGMC_RollbackActor Function HasTicked
struct Z_Construct_UFunction_AGMC_RollbackActor_HasTicked_Statics
{
	struct GMC_RollbackActor_eventHasTicked_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "/// Checks whether UpdateState has already been called on this actor during the current frame.\n///\n/// @returns      bool    True if the rollback actor have already been ticked this frame, false otherwise.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ToolTip", "Checks whether UpdateState has already been called on this actor during the current frame.\n\n@returns      bool    True if the rollback actor have already been ticked this frame, false otherwise." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGMC_RollbackActor_HasTicked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GMC_RollbackActor_eventHasTicked_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGMC_RollbackActor_HasTicked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_RollbackActor_eventHasTicked_Parms), &Z_Construct_UFunction_AGMC_RollbackActor_HasTicked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_RollbackActor_HasTicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_RollbackActor_HasTicked_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_HasTicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_RollbackActor_HasTicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_RollbackActor, nullptr, "HasTicked", nullptr, nullptr, Z_Construct_UFunction_AGMC_RollbackActor_HasTicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_HasTicked_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_RollbackActor_HasTicked_Statics::GMC_RollbackActor_eventHasTicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_HasTicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_RollbackActor_HasTicked_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGMC_RollbackActor_HasTicked_Statics::GMC_RollbackActor_eventHasTicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_RollbackActor_HasTicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_RollbackActor_HasTicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_RollbackActor::execHasTicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasTicked();
	P_NATIVE_END;
}
// End Class AGMC_RollbackActor Function HasTicked

// Begin Class AGMC_RollbackActor Function LoadState
struct GMC_RollbackActor_eventLoadState_Parms
{
	EGMC_NetContext Context;
};
static FName NAME_AGMC_RollbackActor_LoadState = FName(TEXT("LoadState"));
void AGMC_RollbackActor::LoadState(EGMC_NetContext Context)
{
	GMC_RollbackActor_eventLoadState_Parms Parms;
	Parms.Context=Context;
	ProcessEvent(FindFunctionChecked(NAME_AGMC_RollbackActor_LoadState),&Parms);
}
struct Z_Construct_UFunction_AGMC_RollbackActor_LoadState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Restores the currently saved state of the actor after rollback.\n///\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ToolTip", "Restores the currently saved state of the actor after rollback.\n\n@returns      void" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Context_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGMC_RollbackActor_LoadState_Statics::NewProp_Context_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AGMC_RollbackActor_LoadState_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_RollbackActor_eventLoadState_Parms, Context), Z_Construct_UEnum_GMCCore_EGMC_NetContext, METADATA_PARAMS(0, nullptr) }; // 3444456588
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_RollbackActor_LoadState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_RollbackActor_LoadState_Statics::NewProp_Context_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_RollbackActor_LoadState_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_LoadState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_RollbackActor_LoadState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_RollbackActor, nullptr, "LoadState", nullptr, nullptr, Z_Construct_UFunction_AGMC_RollbackActor_LoadState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_LoadState_Statics::PropPointers), sizeof(GMC_RollbackActor_eventLoadState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_LoadState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_RollbackActor_LoadState_Statics::Function_MetaDataParams) };
static_assert(sizeof(GMC_RollbackActor_eventLoadState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_RollbackActor_LoadState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_RollbackActor_LoadState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_RollbackActor::execLoadState)
{
	P_GET_ENUM(EGMC_NetContext,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadState_Implementation(EGMC_NetContext(Z_Param_Context));
	P_NATIVE_END;
}
// End Class AGMC_RollbackActor Function LoadState

// Begin Class AGMC_RollbackActor Function SaveState
struct GMC_RollbackActor_eventSaveState_Parms
{
	EGMC_NetContext Context;
};
static FName NAME_AGMC_RollbackActor_SaveState = FName(TEXT("SaveState"));
void AGMC_RollbackActor::SaveState(EGMC_NetContext Context)
{
	GMC_RollbackActor_eventSaveState_Parms Parms;
	Parms.Context=Context;
	ProcessEvent(FindFunctionChecked(NAME_AGMC_RollbackActor_SaveState),&Parms);
}
struct Z_Construct_UFunction_AGMC_RollbackActor_SaveState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Saves the current state of the actor before rollback.\n///\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ToolTip", "Saves the current state of the actor before rollback.\n\n@returns      void" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Context_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGMC_RollbackActor_SaveState_Statics::NewProp_Context_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AGMC_RollbackActor_SaveState_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_RollbackActor_eventSaveState_Parms, Context), Z_Construct_UEnum_GMCCore_EGMC_NetContext, METADATA_PARAMS(0, nullptr) }; // 3444456588
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_RollbackActor_SaveState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_RollbackActor_SaveState_Statics::NewProp_Context_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_RollbackActor_SaveState_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_SaveState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_RollbackActor_SaveState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_RollbackActor, nullptr, "SaveState", nullptr, nullptr, Z_Construct_UFunction_AGMC_RollbackActor_SaveState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_SaveState_Statics::PropPointers), sizeof(GMC_RollbackActor_eventSaveState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_SaveState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_RollbackActor_SaveState_Statics::Function_MetaDataParams) };
static_assert(sizeof(GMC_RollbackActor_eventSaveState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_RollbackActor_SaveState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_RollbackActor_SaveState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_RollbackActor::execSaveState)
{
	P_GET_ENUM(EGMC_NetContext,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveState_Implementation(EGMC_NetContext(Z_Param_Context));
	P_NATIVE_END;
}
// End Class AGMC_RollbackActor Function SaveState

// Begin Class AGMC_RollbackActor Function SetAngularVelocityInDegrees
struct Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInDegrees_Statics
{
	struct GMC_RollbackActor_eventSetAngularVelocityInDegrees_Parms
	{
		FVector NewVelocity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Sets the angular velocity of the rollback actor.\n///\n/// @param        NewVelocity    The new angular velocity the actor should have in deg/sec.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ToolTip", "Sets the angular velocity of the rollback actor.\n\n@param        NewVelocity    The new angular velocity the actor should have in deg/sec.\n@returns      void" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInDegrees_Statics::NewProp_NewVelocity = { "NewVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_RollbackActor_eventSetAngularVelocityInDegrees_Parms, NewVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewVelocity_MetaData), NewProp_NewVelocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInDegrees_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInDegrees_Statics::NewProp_NewVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInDegrees_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInDegrees_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_RollbackActor, nullptr, "SetAngularVelocityInDegrees", nullptr, nullptr, Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInDegrees_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInDegrees_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInDegrees_Statics::GMC_RollbackActor_eventSetAngularVelocityInDegrees_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInDegrees_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInDegrees_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInDegrees_Statics::GMC_RollbackActor_eventSetAngularVelocityInDegrees_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInDegrees()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInDegrees_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_RollbackActor::execSetAngularVelocityInDegrees)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_NewVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAngularVelocityInDegrees(Z_Param_Out_NewVelocity);
	P_NATIVE_END;
}
// End Class AGMC_RollbackActor Function SetAngularVelocityInDegrees

// Begin Class AGMC_RollbackActor Function SetAngularVelocityInRadians
struct Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInRadians_Statics
{
	struct GMC_RollbackActor_eventSetAngularVelocityInRadians_Parms
	{
		FVector NewVelocity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Sets the angular velocity of the rollback actor.\n///\n/// @param        NewVelocity    The new angular velocity the actor should have in rad/sec.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ToolTip", "Sets the angular velocity of the rollback actor.\n\n@param        NewVelocity    The new angular velocity the actor should have in rad/sec.\n@returns      void" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInRadians_Statics::NewProp_NewVelocity = { "NewVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_RollbackActor_eventSetAngularVelocityInRadians_Parms, NewVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewVelocity_MetaData), NewProp_NewVelocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInRadians_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInRadians_Statics::NewProp_NewVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInRadians_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInRadians_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_RollbackActor, nullptr, "SetAngularVelocityInRadians", nullptr, nullptr, Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInRadians_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInRadians_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInRadians_Statics::GMC_RollbackActor_eventSetAngularVelocityInRadians_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInRadians_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInRadians_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInRadians_Statics::GMC_RollbackActor_eventSetAngularVelocityInRadians_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInRadians()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInRadians_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_RollbackActor::execSetAngularVelocityInRadians)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_NewVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAngularVelocityInRadians(Z_Param_Out_NewVelocity);
	P_NATIVE_END;
}
// End Class AGMC_RollbackActor Function SetAngularVelocityInRadians

// Begin Class AGMC_RollbackActor Function SetLinearVelocity
struct Z_Construct_UFunction_AGMC_RollbackActor_SetLinearVelocity_Statics
{
	struct GMC_RollbackActor_eventSetLinearVelocity_Parms
	{
		FVector NewVelocity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Sets the linear velocity of the actor.\n///\n/// @param        NewVelocity    The new linear velocity the actor should have in cm/sec.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ToolTip", "Sets the linear velocity of the actor.\n\n@param        NewVelocity    The new linear velocity the actor should have in cm/sec.\n@returns      void" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGMC_RollbackActor_SetLinearVelocity_Statics::NewProp_NewVelocity = { "NewVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_RollbackActor_eventSetLinearVelocity_Parms, NewVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewVelocity_MetaData), NewProp_NewVelocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_RollbackActor_SetLinearVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_RollbackActor_SetLinearVelocity_Statics::NewProp_NewVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_SetLinearVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_RollbackActor_SetLinearVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_RollbackActor, nullptr, "SetLinearVelocity", nullptr, nullptr, Z_Construct_UFunction_AGMC_RollbackActor_SetLinearVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_SetLinearVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGMC_RollbackActor_SetLinearVelocity_Statics::GMC_RollbackActor_eventSetLinearVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_SetLinearVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_RollbackActor_SetLinearVelocity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGMC_RollbackActor_SetLinearVelocity_Statics::GMC_RollbackActor_eventSetLinearVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_RollbackActor_SetLinearVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_RollbackActor_SetLinearVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_RollbackActor::execSetLinearVelocity)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_NewVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLinearVelocity(Z_Param_Out_NewVelocity);
	P_NATIVE_END;
}
// End Class AGMC_RollbackActor Function SetLinearVelocity

// Begin Class AGMC_RollbackActor Function UpdateState
struct GMC_RollbackActor_eventUpdateState_Parms
{
	double Time;
	float DeltaTime;
	FGMC_Move Move;
	EGMC_NetContext Context;
};
static FName NAME_AGMC_RollbackActor_UpdateState = FName(TEXT("UpdateState"));
void AGMC_RollbackActor::UpdateState(double Time, float DeltaTime, FGMC_Move const& Move, EGMC_NetContext Context)
{
	GMC_RollbackActor_eventUpdateState_Parms Parms;
	Parms.Time=Time;
	Parms.DeltaTime=DeltaTime;
	Parms.Move=Move;
	Parms.Context=Context;
	ProcessEvent(FindFunctionChecked(NAME_AGMC_RollbackActor_UpdateState),&Parms);
}
struct Z_Construct_UFunction_AGMC_RollbackActor_UpdateState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Overridable function to update the state of the rollback actor (called every frame). This function should be implemented in a way that the state of the\n/// actor can be recreated solely based on the passed arguments.\n///\n/// @param        Time         The time of the move (or the current world time for regular tick updates).\n/// @param        DeltaTime    The delta time to use.\n/// @param        Move         The move that is about to be executed (empty move with timestamp -1 for regular tick updates).\n/// @param        Context      The context in which the actor state is being updated.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ToolTip", "Overridable function to update the state of the rollback actor (called every frame). This function should be implemented in a way that the state of the\nactor can be recreated solely based on the passed arguments.\n\n@param        Time         The time of the move (or the current world time for regular tick updates).\n@param        DeltaTime    The delta time to use.\n@param        Move         The move that is about to be executed (empty move with timestamp -1 for regular tick updates).\n@param        Context      The context in which the actor state is being updated.\n@returns      void" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Move_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Time;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Move;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Context_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AGMC_RollbackActor_UpdateState_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_RollbackActor_eventUpdateState_Parms, Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGMC_RollbackActor_UpdateState_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_RollbackActor_eventUpdateState_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGMC_RollbackActor_UpdateState_Statics::NewProp_Move = { "Move", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_RollbackActor_eventUpdateState_Parms, Move), Z_Construct_UScriptStruct_FGMC_Move, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Move_MetaData), NewProp_Move_MetaData) }; // 827461668
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGMC_RollbackActor_UpdateState_Statics::NewProp_Context_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AGMC_RollbackActor_UpdateState_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_RollbackActor_eventUpdateState_Parms, Context), Z_Construct_UEnum_GMCCore_EGMC_NetContext, METADATA_PARAMS(0, nullptr) }; // 3444456588
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGMC_RollbackActor_UpdateState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_RollbackActor_UpdateState_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_RollbackActor_UpdateState_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_RollbackActor_UpdateState_Statics::NewProp_Move,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_RollbackActor_UpdateState_Statics::NewProp_Context_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGMC_RollbackActor_UpdateState_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_UpdateState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGMC_RollbackActor_UpdateState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGMC_RollbackActor, nullptr, "UpdateState", nullptr, nullptr, Z_Construct_UFunction_AGMC_RollbackActor_UpdateState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_UpdateState_Statics::PropPointers), sizeof(GMC_RollbackActor_eventUpdateState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGMC_RollbackActor_UpdateState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGMC_RollbackActor_UpdateState_Statics::Function_MetaDataParams) };
static_assert(sizeof(GMC_RollbackActor_eventUpdateState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGMC_RollbackActor_UpdateState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGMC_RollbackActor_UpdateState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGMC_RollbackActor::execUpdateState)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_Time);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_GET_STRUCT_REF(FGMC_Move,Z_Param_Out_Move);
	P_GET_ENUM(EGMC_NetContext,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateState_Implementation(Z_Param_Time,Z_Param_DeltaTime,Z_Param_Out_Move,EGMC_NetContext(Z_Param_Context));
	P_NATIVE_END;
}
// End Class AGMC_RollbackActor Function UpdateState

// Begin Class AGMC_RollbackActor
void AGMC_RollbackActor::StaticRegisterNativesAGMC_RollbackActor()
{
	UClass* Class = AGMC_RollbackActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ComputeTangentialVelocity", &AGMC_RollbackActor::execComputeTangentialVelocity },
		{ "GetAngularVelocityInDegrees", &AGMC_RollbackActor::execGetAngularVelocityInDegrees },
		{ "GetAngularVelocityInRadians", &AGMC_RollbackActor::execGetAngularVelocityInRadians },
		{ "GetLinearVelocity", &AGMC_RollbackActor::execGetLinearVelocity },
		{ "GetTime", &AGMC_RollbackActor::execGetTime },
		{ "HasTicked", &AGMC_RollbackActor::execHasTicked },
		{ "LoadState", &AGMC_RollbackActor::execLoadState },
		{ "SaveState", &AGMC_RollbackActor::execSaveState },
		{ "SetAngularVelocityInDegrees", &AGMC_RollbackActor::execSetAngularVelocityInDegrees },
		{ "SetAngularVelocityInRadians", &AGMC_RollbackActor::execSetAngularVelocityInRadians },
		{ "SetLinearVelocity", &AGMC_RollbackActor::execSetLinearVelocity },
		{ "UpdateState", &AGMC_RollbackActor::execUpdateState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGMC_RollbackActor);
UClass* Z_Construct_UClass_AGMC_RollbackActor_NoRegister()
{
	return AGMC_RollbackActor::StaticClass();
}
struct Z_Construct_UClass_AGMC_RollbackActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Movement" },
		{ "Comment", "/// Base class for actors that have no net role on the client but should still be synchronised for gameplay. All actors of this type can be rolled back to a\n/// previous deterministic state for move execution by UGMC_ReplicationCmp.\n" },
		{ "IncludePath", "Actors/GMCRollbackActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class for actors that have no net role on the client but should still be synchronised for gameplay. All actors of this type can be rolled back to a\nprevious deterministic state for move execution by UGMC_ReplicationCmp." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExcludeFromRollback_MetaData[] = {
		{ "Category", "Networking" },
		{ "Comment", "/// If true, this actor will never be rolled back by a pawn for move execution and won't be ticked from the replication component. This will effectively make\n/// it behave like a regular (non-rollback) actor.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ToolTip", "If true, this actor will never be rolled back by a pawn for move execution and won't be ticked from the replication component. This will effectively make\nit behave like a regular (non-rollback) actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNoBlueprintEvents_MetaData[] = {
		{ "Category", "Networking" },
		{ "Comment", "/// Disables all Blueprint events called for this actor.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ToolTip", "Disables all Blueprint events called for this actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearVelocity_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/// The linear velocity of the actor in cm/sec.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ToolTip", "The linear velocity of the actor in cm/sec." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/// The angular velocity of the actor in deg/sec.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ToolTip", "The angular velocity of the actor in deg/sec." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseLinearVelocity_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// The linear velocity the actor started with when it was spawned.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ToolTip", "The linear velocity the actor started with when it was spawned." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseAngularVelocity_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// The angular velocity the actor started with when it was spawned.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ToolTip", "The angular velocity the actor started with when it was spawned." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseTransform_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// The transform the actor started with when it was spawned.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ToolTip", "The transform the actor started with when it was spawned." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedRollbackState_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Used to buffer the state of the actor for rollback.\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ToolTip", "Used to buffer the state of the actor for rollback." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GMCAggregator_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Cached reference to the GMC aggregator (if present).\n" },
		{ "ModuleRelativePath", "Public/Actors/GMCRollbackActor.h" },
		{ "ToolTip", "Cached reference to the GMC aggregator (if present)." },
	};
#endif // WITH_METADATA
	static void NewProp_bExcludeFromRollback_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExcludeFromRollback;
	static void NewProp_bNoBlueprintEvents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoBlueprintEvents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseLinearVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseAngularVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedRollbackState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GMCAggregator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGMC_RollbackActor_ComputeTangentialVelocity, "ComputeTangentialVelocity" }, // 4201510469
		{ &Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInDegrees, "GetAngularVelocityInDegrees" }, // 4137661551
		{ &Z_Construct_UFunction_AGMC_RollbackActor_GetAngularVelocityInRadians, "GetAngularVelocityInRadians" }, // 3534073790
		{ &Z_Construct_UFunction_AGMC_RollbackActor_GetLinearVelocity, "GetLinearVelocity" }, // 2676276637
		{ &Z_Construct_UFunction_AGMC_RollbackActor_GetTime, "GetTime" }, // 2947397927
		{ &Z_Construct_UFunction_AGMC_RollbackActor_HasTicked, "HasTicked" }, // 2165068190
		{ &Z_Construct_UFunction_AGMC_RollbackActor_LoadState, "LoadState" }, // 600960498
		{ &Z_Construct_UFunction_AGMC_RollbackActor_SaveState, "SaveState" }, // 774193485
		{ &Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInDegrees, "SetAngularVelocityInDegrees" }, // 2826780500
		{ &Z_Construct_UFunction_AGMC_RollbackActor_SetAngularVelocityInRadians, "SetAngularVelocityInRadians" }, // 3458184711
		{ &Z_Construct_UFunction_AGMC_RollbackActor_SetLinearVelocity, "SetLinearVelocity" }, // 697879130
		{ &Z_Construct_UFunction_AGMC_RollbackActor_UpdateState, "UpdateState" }, // 170454233
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGMC_RollbackActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_bExcludeFromRollback_SetBit(void* Obj)
{
	((AGMC_RollbackActor*)Obj)->bExcludeFromRollback = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_bExcludeFromRollback = { "bExcludeFromRollback", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGMC_RollbackActor), &Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_bExcludeFromRollback_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExcludeFromRollback_MetaData), NewProp_bExcludeFromRollback_MetaData) };
void Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_bNoBlueprintEvents_SetBit(void* Obj)
{
	((AGMC_RollbackActor*)Obj)->bNoBlueprintEvents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_bNoBlueprintEvents = { "bNoBlueprintEvents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGMC_RollbackActor), &Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_bNoBlueprintEvents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNoBlueprintEvents_MetaData), NewProp_bNoBlueprintEvents_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGMC_RollbackActor, LinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearVelocity_MetaData), NewProp_LinearVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGMC_RollbackActor, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularVelocity_MetaData), NewProp_AngularVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_BaseLinearVelocity = { "BaseLinearVelocity", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGMC_RollbackActor, BaseLinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseLinearVelocity_MetaData), NewProp_BaseLinearVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_BaseAngularVelocity = { "BaseAngularVelocity", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGMC_RollbackActor, BaseAngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseAngularVelocity_MetaData), NewProp_BaseAngularVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_BaseTransform = { "BaseTransform", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGMC_RollbackActor, BaseTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseTransform_MetaData), NewProp_BaseTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_SavedRollbackState = { "SavedRollbackState", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGMC_RollbackActor, SavedRollbackState), Z_Construct_UScriptStruct_FGMC_RollbackState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedRollbackState_MetaData), NewProp_SavedRollbackState_MetaData) }; // 636510431
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_GMCAggregator = { "GMCAggregator", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGMC_RollbackActor, GMCAggregator), Z_Construct_UClass_AGMC_Aggregator_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GMCAggregator_MetaData), NewProp_GMCAggregator_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGMC_RollbackActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_bExcludeFromRollback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_bNoBlueprintEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_LinearVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_AngularVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_BaseLinearVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_BaseAngularVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_BaseTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_SavedRollbackState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGMC_RollbackActor_Statics::NewProp_GMCAggregator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_RollbackActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGMC_RollbackActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_RollbackActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGMC_RollbackActor_Statics::ClassParams = {
	&AGMC_RollbackActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGMC_RollbackActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_RollbackActor_Statics::PropPointers),
	0,
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGMC_RollbackActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AGMC_RollbackActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGMC_RollbackActor()
{
	if (!Z_Registration_Info_UClass_AGMC_RollbackActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGMC_RollbackActor.OuterSingleton, Z_Construct_UClass_AGMC_RollbackActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGMC_RollbackActor.OuterSingleton;
}
template<> GMCCORE_API UClass* StaticClass<AGMC_RollbackActor>()
{
	return AGMC_RollbackActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGMC_RollbackActor);
AGMC_RollbackActor::~AGMC_RollbackActor() {}
// End Class AGMC_RollbackActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCRollbackActor_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGMC_RollbackState::StaticStruct, Z_Construct_UScriptStruct_FGMC_RollbackState_Statics::NewStructOps, TEXT("GMC_RollbackState"), &Z_Registration_Info_UScriptStruct_GMC_RollbackState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGMC_RollbackState), 636510431U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGMC_RollbackActor, AGMC_RollbackActor::StaticClass, TEXT("AGMC_RollbackActor"), &Z_Registration_Info_UClass_AGMC_RollbackActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGMC_RollbackActor), 3730136327U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCRollbackActor_h_4084521872(TEXT("/Script/GMCCore"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCRollbackActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCRollbackActor_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCRollbackActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCRollbackActor_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
