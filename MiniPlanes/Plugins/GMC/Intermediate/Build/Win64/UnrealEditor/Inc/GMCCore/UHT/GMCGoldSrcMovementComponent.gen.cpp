// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GMCCore/Public/Components/GMCGoldSrcMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMCGoldSrcMovementComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionEnabled();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
GMCCORE_API UClass* Z_Construct_UClass_UGMC_GoldSrcMovementCmp();
GMCCORE_API UClass* Z_Construct_UClass_UGMC_GoldSrcMovementCmp_NoRegister();
GMCCORE_API UClass* Z_Construct_UClass_UGMC_OrganicMovementCmp();
GMCCORE_API UEnum* Z_Construct_UEnum_GMCCore_EGMC_JumpMode();
UPackage* Z_Construct_UPackage__Script_GMCCore();
// End Cross Module References

// Begin Enum EGMC_JumpMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGMC_JumpMode;
static UEnum* EGMC_JumpMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGMC_JumpMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGMC_JumpMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GMCCore_EGMC_JumpMode, (UObject*)Z_Construct_UPackage__Script_GMCCore(), TEXT("EGMC_JumpMode"));
	}
	return Z_Registration_Info_UEnum_EGMC_JumpMode.OuterSingleton;
}
template<> GMCCORE_API UEnum* StaticEnum<EGMC_JumpMode>()
{
	return EGMC_JumpMode_StaticEnum();
}
struct Z_Construct_UEnum_GMCCore_EGMC_JumpMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FullAuto.Name", "EGMC_JumpMode::FullAuto" },
		{ "FullAuto.ToolTip", "The player can continuously jump by holding the jump button." },
		{ "Manual.Name", "EGMC_JumpMode::Manual" },
		{ "Manual.ToolTip", "The player can only jump if the jump button is pressed while already on the ground." },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "EGMC_JumpMode::MAX" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "SemiAuto.Name", "EGMC_JumpMode::SemiAuto" },
		{ "SemiAuto.ToolTip", "The player can jump by holding the jump button, but the button must be released between jumps." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGMC_JumpMode::Manual", (int64)EGMC_JumpMode::Manual },
		{ "EGMC_JumpMode::SemiAuto", (int64)EGMC_JumpMode::SemiAuto },
		{ "EGMC_JumpMode::FullAuto", (int64)EGMC_JumpMode::FullAuto },
		{ "EGMC_JumpMode::MAX", (int64)EGMC_JumpMode::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GMCCore_EGMC_JumpMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GMCCore,
	nullptr,
	"EGMC_JumpMode",
	"EGMC_JumpMode",
	Z_Construct_UEnum_GMCCore_EGMC_JumpMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_JumpMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GMCCore_EGMC_JumpMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GMCCore_EGMC_JumpMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GMCCore_EGMC_JumpMode()
{
	if (!Z_Registration_Info_UEnum_EGMC_JumpMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGMC_JumpMode.InnerSingleton, Z_Construct_UEnum_GMCCore_EGMC_JumpMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGMC_JumpMode.InnerSingleton;
}
// End Enum EGMC_JumpMode

// Begin Class UGMC_GoldSrcMovementCmp Function Accelerate
struct Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Accelerate_Statics
{
	struct GMC_GoldSrcMovementCmp_eventAccelerate_Parms
	{
		FVector WishDirection;
		float WishSpeed;
		float CurrentSpeed;
		float DeltaSeconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Applies acceleration to calculate a new velocity for the pawn.\n///\n/// @param        WishDirection    The direction the player wants to move in.\n/// @param        WishSpeed        The speed the player wants to have based on the input.\n/// @param        CurrentSpeed     The current speed of the pawn.\n/// @param        DeltaSeconds     The delta time to use.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "Applies acceleration to calculate a new velocity for the pawn.\n\n@param        WishDirection    The direction the player wants to move in.\n@param        WishSpeed        The speed the player wants to have based on the input.\n@param        CurrentSpeed     The current speed of the pawn.\n@param        DeltaSeconds     The delta time to use.\n@returns      void" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WishDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WishSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Accelerate_Statics::NewProp_WishDirection = { "WishDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcMovementCmp_eventAccelerate_Parms, WishDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Accelerate_Statics::NewProp_WishSpeed = { "WishSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcMovementCmp_eventAccelerate_Parms, WishSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Accelerate_Statics::NewProp_CurrentSpeed = { "CurrentSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcMovementCmp_eventAccelerate_Parms, CurrentSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Accelerate_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcMovementCmp_eventAccelerate_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Accelerate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Accelerate_Statics::NewProp_WishDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Accelerate_Statics::NewProp_WishSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Accelerate_Statics::NewProp_CurrentSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Accelerate_Statics::NewProp_DeltaSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Accelerate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Accelerate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcMovementCmp, nullptr, "Accelerate", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Accelerate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Accelerate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Accelerate_Statics::GMC_GoldSrcMovementCmp_eventAccelerate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Accelerate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Accelerate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Accelerate_Statics::GMC_GoldSrcMovementCmp_eventAccelerate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Accelerate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Accelerate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcMovementCmp::execAccelerate)
{
	P_GET_STRUCT(FVector,Z_Param_WishDirection);
	P_GET_PROPERTY(FFloatProperty,Z_Param_WishSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CurrentSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Accelerate(Z_Param_WishDirection,Z_Param_WishSpeed,Z_Param_CurrentSpeed,Z_Param_DeltaSeconds);
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcMovementCmp Function Accelerate

// Begin Class UGMC_GoldSrcMovementCmp Function AirMove
struct Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_AirMove_Statics
{
	struct GMC_GoldSrcMovementCmp_eventAirMove_Parms
	{
		FVector WishDirection;
		float WishSpeed;
		float DeltaSeconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Calculates a new velocity for the pawn when in the air.\n///\n/// @param        WishDirection    The direction the player wants to move in.\n/// @param        WishSpeed        The speed the player wants to have based on the input.\n/// @param        DeltaSeconds     The delta time to use.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "Calculates a new velocity for the pawn when in the air.\n\n@param        WishDirection    The direction the player wants to move in.\n@param        WishSpeed        The speed the player wants to have based on the input.\n@param        DeltaSeconds     The delta time to use.\n@returns      void" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WishDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WishSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_AirMove_Statics::NewProp_WishDirection = { "WishDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcMovementCmp_eventAirMove_Parms, WishDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_AirMove_Statics::NewProp_WishSpeed = { "WishSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcMovementCmp_eventAirMove_Parms, WishSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_AirMove_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcMovementCmp_eventAirMove_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_AirMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_AirMove_Statics::NewProp_WishDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_AirMove_Statics::NewProp_WishSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_AirMove_Statics::NewProp_DeltaSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_AirMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_AirMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcMovementCmp, nullptr, "AirMove", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_AirMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_AirMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_AirMove_Statics::GMC_GoldSrcMovementCmp_eventAirMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_AirMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_AirMove_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_AirMove_Statics::GMC_GoldSrcMovementCmp_eventAirMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_AirMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_AirMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcMovementCmp::execAirMove)
{
	P_GET_STRUCT(FVector,Z_Param_WishDirection);
	P_GET_PROPERTY(FFloatProperty,Z_Param_WishSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AirMove(Z_Param_WishDirection,Z_Param_WishSpeed,Z_Param_DeltaSeconds);
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcMovementCmp Function AirMove

// Begin Class UGMC_GoldSrcMovementCmp Function ApplyFloorFriction
struct Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyFloorFriction_Statics
{
	struct GMC_GoldSrcMovementCmp_eventApplyFloorFriction_Parms
	{
		float DeltaSeconds;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Applies friction while moving on the ground.\n///\n/// @param        DeltaSeconds    The delta time to use.\n/// @returns      float           The new speed of the pawn.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "Applies friction while moving on the ground.\n\n@param        DeltaSeconds    The delta time to use.\n@returns      float           The new speed of the pawn." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyFloorFriction_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcMovementCmp_eventApplyFloorFriction_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyFloorFriction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcMovementCmp_eventApplyFloorFriction_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyFloorFriction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyFloorFriction_Statics::NewProp_DeltaSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyFloorFriction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyFloorFriction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyFloorFriction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcMovementCmp, nullptr, "ApplyFloorFriction", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyFloorFriction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyFloorFriction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyFloorFriction_Statics::GMC_GoldSrcMovementCmp_eventApplyFloorFriction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyFloorFriction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyFloorFriction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyFloorFriction_Statics::GMC_GoldSrcMovementCmp_eventApplyFloorFriction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyFloorFriction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyFloorFriction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcMovementCmp::execApplyFloorFriction)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->ApplyFloorFriction(Z_Param_DeltaSeconds);
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcMovementCmp Function ApplyFloorFriction

// Begin Class UGMC_GoldSrcMovementCmp Function ApplyJumpSpeedBoost
struct GMC_GoldSrcMovementCmp_eventApplyJumpSpeedBoost_Parms
{
	float DeltaSeconds;
};
static FName NAME_UGMC_GoldSrcMovementCmp_ApplyJumpSpeedBoost = FName(TEXT("ApplyJumpSpeedBoost"));
void UGMC_GoldSrcMovementCmp::ApplyJumpSpeedBoost(float DeltaSeconds)
{
	GMC_GoldSrcMovementCmp_eventApplyJumpSpeedBoost_Parms Parms;
	Parms.DeltaSeconds=DeltaSeconds;
	ProcessEvent(FindFunctionChecked(NAME_UGMC_GoldSrcMovementCmp_ApplyJumpSpeedBoost),&Parms);
}
struct Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyJumpSpeedBoost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Calculates and applies the jump speed boost.\n///\n/// @param        DeltaSeconds      The delta time to use.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "Calculates and applies the jump speed boost.\n\n@param        DeltaSeconds      The delta time to use.\n@returns      void" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyJumpSpeedBoost_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcMovementCmp_eventApplyJumpSpeedBoost_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyJumpSpeedBoost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyJumpSpeedBoost_Statics::NewProp_DeltaSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyJumpSpeedBoost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyJumpSpeedBoost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcMovementCmp, nullptr, "ApplyJumpSpeedBoost", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyJumpSpeedBoost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyJumpSpeedBoost_Statics::PropPointers), sizeof(GMC_GoldSrcMovementCmp_eventApplyJumpSpeedBoost_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyJumpSpeedBoost_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyJumpSpeedBoost_Statics::Function_MetaDataParams) };
static_assert(sizeof(GMC_GoldSrcMovementCmp_eventApplyJumpSpeedBoost_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyJumpSpeedBoost()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyJumpSpeedBoost_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcMovementCmp::execApplyJumpSpeedBoost)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyJumpSpeedBoost_Implementation(Z_Param_DeltaSeconds);
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcMovementCmp Function ApplyJumpSpeedBoost

// Begin Class UGMC_GoldSrcMovementCmp Function ApplyWaterFriction
struct Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyWaterFriction_Statics
{
	struct GMC_GoldSrcMovementCmp_eventApplyWaterFriction_Parms
	{
		float DeltaSeconds;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Applies friction while moving in a fluid.\n///\n/// @param        DeltaSeconds    The delta time to use.\n/// @returns      float           The new speed of the pawn.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "Applies friction while moving in a fluid.\n\n@param        DeltaSeconds    The delta time to use.\n@returns      float           The new speed of the pawn." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyWaterFriction_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcMovementCmp_eventApplyWaterFriction_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyWaterFriction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcMovementCmp_eventApplyWaterFriction_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyWaterFriction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyWaterFriction_Statics::NewProp_DeltaSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyWaterFriction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyWaterFriction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyWaterFriction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcMovementCmp, nullptr, "ApplyWaterFriction", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyWaterFriction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyWaterFriction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyWaterFriction_Statics::GMC_GoldSrcMovementCmp_eventApplyWaterFriction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyWaterFriction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyWaterFriction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyWaterFriction_Statics::GMC_GoldSrcMovementCmp_eventApplyWaterFriction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyWaterFriction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyWaterFriction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcMovementCmp::execApplyWaterFriction)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->ApplyWaterFriction(Z_Param_DeltaSeconds);
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcMovementCmp Function ApplyWaterFriction

// Begin Class UGMC_GoldSrcMovementCmp Function CanCrouch
struct GMC_GoldSrcMovementCmp_eventCanCrouch_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	GMC_GoldSrcMovementCmp_eventCanCrouch_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UGMC_GoldSrcMovementCmp_CanCrouch = FName(TEXT("CanCrouch"));
bool UGMC_GoldSrcMovementCmp::CanCrouch() const
{
	GMC_GoldSrcMovementCmp_eventCanCrouch_Parms Parms;
	const_cast<UGMC_GoldSrcMovementCmp*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGMC_GoldSrcMovementCmp_CanCrouch),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanCrouch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Whether the pawn is currently allowed to crouch (irrespective of whether the player wants to crouch or not).\n///\n/// @returns      bool    True if the pawn can currently crouch, false otherwise.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "Whether the pawn is currently allowed to crouch (irrespective of whether the player wants to crouch or not).\n\n@returns      bool    True if the pawn can currently crouch, false otherwise." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanCrouch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GMC_GoldSrcMovementCmp_eventCanCrouch_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanCrouch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_GoldSrcMovementCmp_eventCanCrouch_Parms), &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanCrouch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanCrouch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanCrouch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanCrouch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanCrouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcMovementCmp, nullptr, "CanCrouch", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanCrouch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanCrouch_Statics::PropPointers), sizeof(GMC_GoldSrcMovementCmp_eventCanCrouch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanCrouch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanCrouch_Statics::Function_MetaDataParams) };
static_assert(sizeof(GMC_GoldSrcMovementCmp_eventCanCrouch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanCrouch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanCrouch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcMovementCmp::execCanCrouch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanCrouch_Implementation();
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcMovementCmp Function CanCrouch

// Begin Class UGMC_GoldSrcMovementCmp Function CanJump
struct GMC_GoldSrcMovementCmp_eventCanJump_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	GMC_GoldSrcMovementCmp_eventCanJump_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UGMC_GoldSrcMovementCmp_CanJump = FName(TEXT("CanJump"));
bool UGMC_GoldSrcMovementCmp::CanJump() const
{
	GMC_GoldSrcMovementCmp_eventCanJump_Parms Parms;
	const_cast<UGMC_GoldSrcMovementCmp*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGMC_GoldSrcMovementCmp_CanJump),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanJump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Whether the pawn is currently allowed to jump (irrespective of whether the player wants to jump or not).\n///\n/// @returns      bool    True if the pawn can currently jump, false otherwise.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "Whether the pawn is currently allowed to jump (irrespective of whether the player wants to jump or not).\n\n@returns      bool    True if the pawn can currently jump, false otherwise." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanJump_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GMC_GoldSrcMovementCmp_eventCanJump_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanJump_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_GoldSrcMovementCmp_eventCanJump_Parms), &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanJump_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanJump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanJump_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanJump_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcMovementCmp, nullptr, "CanJump", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanJump_Statics::PropPointers), sizeof(GMC_GoldSrcMovementCmp_eventCanJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanJump_Statics::Function_MetaDataParams) };
static_assert(sizeof(GMC_GoldSrcMovementCmp_eventCanJump_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcMovementCmp::execCanJump)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanJump_Implementation();
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcMovementCmp Function CanJump

// Begin Class UGMC_GoldSrcMovementCmp Function CanSprint
struct GMC_GoldSrcMovementCmp_eventCanSprint_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	GMC_GoldSrcMovementCmp_eventCanSprint_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UGMC_GoldSrcMovementCmp_CanSprint = FName(TEXT("CanSprint"));
bool UGMC_GoldSrcMovementCmp::CanSprint() const
{
	GMC_GoldSrcMovementCmp_eventCanSprint_Parms Parms;
	const_cast<UGMC_GoldSrcMovementCmp*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGMC_GoldSrcMovementCmp_CanSprint),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanSprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Whether the pawn is currently allowed to sprint (irrespective of whether the player wants to sprint or not).\n///\n/// @returns      bool    True if the pawn can currently sprint, false otherwise.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "Whether the pawn is currently allowed to sprint (irrespective of whether the player wants to sprint or not).\n\n@returns      bool    True if the pawn can currently sprint, false otherwise." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanSprint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GMC_GoldSrcMovementCmp_eventCanSprint_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanSprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_GoldSrcMovementCmp_eventCanSprint_Parms), &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanSprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanSprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanSprint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanSprint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcMovementCmp, nullptr, "CanSprint", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanSprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanSprint_Statics::PropPointers), sizeof(GMC_GoldSrcMovementCmp_eventCanSprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanSprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanSprint_Statics::Function_MetaDataParams) };
static_assert(sizeof(GMC_GoldSrcMovementCmp_eventCanSprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanSprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanSprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcMovementCmp::execCanSprint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanSprint_Implementation();
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcMovementCmp Function CanSprint

// Begin Class UGMC_GoldSrcMovementCmp Function CanUncrouch
struct GMC_GoldSrcMovementCmp_eventCanUncrouch_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	GMC_GoldSrcMovementCmp_eventCanUncrouch_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UGMC_GoldSrcMovementCmp_CanUncrouch = FName(TEXT("CanUncrouch"));
bool UGMC_GoldSrcMovementCmp::CanUncrouch() const
{
	GMC_GoldSrcMovementCmp_eventCanUncrouch_Parms Parms;
	const_cast<UGMC_GoldSrcMovementCmp*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGMC_GoldSrcMovementCmp_CanUncrouch),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanUncrouch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Whether the pawn is currently allowed to come out of a crouch.\n///\n/// @returns      bool    True if the pawn can currently uncrouch, false otherwise.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "Whether the pawn is currently allowed to come out of a crouch.\n\n@returns      bool    True if the pawn can currently uncrouch, false otherwise." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanUncrouch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GMC_GoldSrcMovementCmp_eventCanUncrouch_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanUncrouch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_GoldSrcMovementCmp_eventCanUncrouch_Parms), &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanUncrouch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanUncrouch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanUncrouch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanUncrouch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanUncrouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcMovementCmp, nullptr, "CanUncrouch", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanUncrouch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanUncrouch_Statics::PropPointers), sizeof(GMC_GoldSrcMovementCmp_eventCanUncrouch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanUncrouch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanUncrouch_Statics::Function_MetaDataParams) };
static_assert(sizeof(GMC_GoldSrcMovementCmp_eventCanUncrouch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanUncrouch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanUncrouch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcMovementCmp::execCanUncrouch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanUncrouch_Implementation();
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcMovementCmp Function CanUncrouch

// Begin Class UGMC_GoldSrcMovementCmp Function Crouch
struct GMC_GoldSrcMovementCmp_eventCrouch_Parms
{
	bool bRequestedCrouch;
	float DeltaSeconds;
};
static FName NAME_UGMC_GoldSrcMovementCmp_Crouch = FName(TEXT("Crouch"));
void UGMC_GoldSrcMovementCmp::Crouch(bool bRequestedCrouch, float DeltaSeconds)
{
	GMC_GoldSrcMovementCmp_eventCrouch_Parms Parms;
	Parms.bRequestedCrouch=bRequestedCrouch ? true : false;
	Parms.DeltaSeconds=DeltaSeconds;
	ProcessEvent(FindFunctionChecked(NAME_UGMC_GoldSrcMovementCmp_Crouch),&Parms);
}
struct Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Crouch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Smoothly shrinks the collision half height towards CrouchedHalfHeight or increases it towards DefaultHalfHeight.\n///\n/// @param        bRequestedCrouch    Whether the player has pressed the crouch button.\n/// @param        DeltaSeconds        The delta time to use.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "Smoothly shrinks the collision half height towards CrouchedHalfHeight or increases it towards DefaultHalfHeight.\n\n@param        bRequestedCrouch    Whether the player has pressed the crouch button.\n@param        DeltaSeconds        The delta time to use.\n@returns      void" },
	};
#endif // WITH_METADATA
	static void NewProp_bRequestedCrouch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequestedCrouch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Crouch_Statics::NewProp_bRequestedCrouch_SetBit(void* Obj)
{
	((GMC_GoldSrcMovementCmp_eventCrouch_Parms*)Obj)->bRequestedCrouch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Crouch_Statics::NewProp_bRequestedCrouch = { "bRequestedCrouch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_GoldSrcMovementCmp_eventCrouch_Parms), &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Crouch_Statics::NewProp_bRequestedCrouch_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Crouch_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcMovementCmp_eventCrouch_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Crouch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Crouch_Statics::NewProp_bRequestedCrouch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Crouch_Statics::NewProp_DeltaSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Crouch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Crouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcMovementCmp, nullptr, "Crouch", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Crouch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Crouch_Statics::PropPointers), sizeof(GMC_GoldSrcMovementCmp_eventCrouch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Crouch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Crouch_Statics::Function_MetaDataParams) };
static_assert(sizeof(GMC_GoldSrcMovementCmp_eventCrouch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Crouch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Crouch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcMovementCmp::execCrouch)
{
	P_GET_UBOOL(Z_Param_bRequestedCrouch);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Crouch_Implementation(Z_Param_bRequestedCrouch,Z_Param_DeltaSeconds);
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcMovementCmp Function Crouch

// Begin Class UGMC_GoldSrcMovementCmp Function GetCrouchedHalfHeight
struct Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetCrouchedHalfHeight_Statics
{
	struct GMC_GoldSrcMovementCmp_eventGetCrouchedHalfHeight_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Returns the half height of the pawn's root collision when fully crouched.\n///\n/// @returns      float    The half height the root collision when the pawn is fully crouched.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "Returns the half height of the pawn's root collision when fully crouched.\n\n@returns      float    The half height the root collision when the pawn is fully crouched." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetCrouchedHalfHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcMovementCmp_eventGetCrouchedHalfHeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetCrouchedHalfHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetCrouchedHalfHeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetCrouchedHalfHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetCrouchedHalfHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcMovementCmp, nullptr, "GetCrouchedHalfHeight", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetCrouchedHalfHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetCrouchedHalfHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetCrouchedHalfHeight_Statics::GMC_GoldSrcMovementCmp_eventGetCrouchedHalfHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetCrouchedHalfHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetCrouchedHalfHeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetCrouchedHalfHeight_Statics::GMC_GoldSrcMovementCmp_eventGetCrouchedHalfHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetCrouchedHalfHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetCrouchedHalfHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcMovementCmp::execGetCrouchedHalfHeight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCrouchedHalfHeight();
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcMovementCmp Function GetCrouchedHalfHeight

// Begin Class UGMC_GoldSrcMovementCmp Function GetDefaultHalfHeight
struct Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetDefaultHalfHeight_Statics
{
	struct GMC_GoldSrcMovementCmp_eventGetDefaultHalfHeight_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Returns the default half height of the pawn's root collision.\n///\n/// @returns      float    The half height the root collision when the pawn spawned.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "Returns the default half height of the pawn's root collision.\n\n@returns      float    The half height the root collision when the pawn spawned." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetDefaultHalfHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcMovementCmp_eventGetDefaultHalfHeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetDefaultHalfHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetDefaultHalfHeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetDefaultHalfHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetDefaultHalfHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcMovementCmp, nullptr, "GetDefaultHalfHeight", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetDefaultHalfHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetDefaultHalfHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetDefaultHalfHeight_Statics::GMC_GoldSrcMovementCmp_eventGetDefaultHalfHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetDefaultHalfHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetDefaultHalfHeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetDefaultHalfHeight_Statics::GMC_GoldSrcMovementCmp_eventGetDefaultHalfHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetDefaultHalfHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetDefaultHalfHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcMovementCmp::execGetDefaultHalfHeight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDefaultHalfHeight();
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcMovementCmp Function GetDefaultHalfHeight

// Begin Class UGMC_GoldSrcMovementCmp Function GetFloorFriction
struct Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetFloorFriction_Statics
{
	struct GMC_GoldSrcMovementCmp_eventGetFloorFriction_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Returns the friction value to use when moving on the ground.\n///\n/// @returns      float    The floor friction to use.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "Returns the friction value to use when moving on the ground.\n\n@returns      float    The floor friction to use." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetFloorFriction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcMovementCmp_eventGetFloorFriction_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetFloorFriction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetFloorFriction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetFloorFriction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetFloorFriction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcMovementCmp, nullptr, "GetFloorFriction", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetFloorFriction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetFloorFriction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetFloorFriction_Statics::GMC_GoldSrcMovementCmp_eventGetFloorFriction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetFloorFriction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetFloorFriction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetFloorFriction_Statics::GMC_GoldSrcMovementCmp_eventGetFloorFriction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetFloorFriction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetFloorFriction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcMovementCmp::execGetFloorFriction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFloorFriction();
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcMovementCmp Function GetFloorFriction

// Begin Class UGMC_GoldSrcMovementCmp Function HasJustJumped
struct Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustJumped_Statics
{
	struct GMC_GoldSrcMovementCmp_eventHasJustJumped_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Whether the pawn has just jumped. Only intended as animation trigger, should not be used for movement logic (use OnJumped instead).\n///\n/// @returns      bool    Whether the pawn has just jumped.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "Whether the pawn has just jumped. Only intended as animation trigger, should not be used for movement logic (use OnJumped instead).\n\n@returns      bool    Whether the pawn has just jumped." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustJumped_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GMC_GoldSrcMovementCmp_eventHasJustJumped_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustJumped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_GoldSrcMovementCmp_eventHasJustJumped_Parms), &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustJumped_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustJumped_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustJumped_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustJumped_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustJumped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcMovementCmp, nullptr, "HasJustJumped", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustJumped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustJumped_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustJumped_Statics::GMC_GoldSrcMovementCmp_eventHasJustJumped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustJumped_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustJumped_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustJumped_Statics::GMC_GoldSrcMovementCmp_eventHasJustJumped_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustJumped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustJumped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcMovementCmp::execHasJustJumped)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasJustJumped();
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcMovementCmp Function HasJustJumped

// Begin Class UGMC_GoldSrcMovementCmp Function HasJustLanded
struct Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustLanded_Statics
{
	struct GMC_GoldSrcMovementCmp_eventHasJustLanded_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Whether the pawn has just landed on the ground. Only intended as animation trigger, should not be used for movement logic (use OnLanded or\n/// HasJustLanded_Internal instead).\n///\n/// @returns      bool    Whether the pawn has just landed.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "Whether the pawn has just landed on the ground. Only intended as animation trigger, should not be used for movement logic (use OnLanded or\nHasJustLanded_Internal instead).\n\n@returns      bool    Whether the pawn has just landed." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustLanded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GMC_GoldSrcMovementCmp_eventHasJustLanded_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustLanded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_GoldSrcMovementCmp_eventHasJustLanded_Parms), &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustLanded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustLanded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustLanded_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustLanded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustLanded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcMovementCmp, nullptr, "HasJustLanded", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustLanded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustLanded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustLanded_Statics::GMC_GoldSrcMovementCmp_eventHasJustLanded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustLanded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustLanded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustLanded_Statics::GMC_GoldSrcMovementCmp_eventHasJustLanded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustLanded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustLanded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcMovementCmp::execHasJustLanded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasJustLanded();
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcMovementCmp Function HasJustLanded

// Begin Class UGMC_GoldSrcMovementCmp Function HasJustLanded_Internal
struct Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustLanded_Internal_Statics
{
	struct GMC_GoldSrcMovementCmp_eventHasJustLanded_Internal_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Whether the pawn has just landed on the ground. Can be used for movement logic. For simulated pawns use HasJustLanded.\n///\n/// @returns      bool    Whether the pawn has just landed.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "Whether the pawn has just landed on the ground. Can be used for movement logic. For simulated pawns use HasJustLanded.\n\n@returns      bool    Whether the pawn has just landed." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustLanded_Internal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GMC_GoldSrcMovementCmp_eventHasJustLanded_Internal_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustLanded_Internal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_GoldSrcMovementCmp_eventHasJustLanded_Internal_Parms), &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustLanded_Internal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustLanded_Internal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustLanded_Internal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustLanded_Internal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustLanded_Internal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcMovementCmp, nullptr, "HasJustLanded_Internal", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustLanded_Internal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustLanded_Internal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustLanded_Internal_Statics::GMC_GoldSrcMovementCmp_eventHasJustLanded_Internal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustLanded_Internal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustLanded_Internal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustLanded_Internal_Statics::GMC_GoldSrcMovementCmp_eventHasJustLanded_Internal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustLanded_Internal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustLanded_Internal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcMovementCmp::execHasJustLanded_Internal)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasJustLanded_Internal();
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcMovementCmp Function HasJustLanded_Internal

// Begin Class UGMC_GoldSrcMovementCmp Function IsCrouchingDown
struct Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsCrouchingDown_Statics
{
	struct GMC_GoldSrcMovementCmp_eventIsCrouchingDown_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Whether the pawn is currently in the process of crouching down. Only returns true if the root collision's half height is smaller than DefaultHalfHeight\n/// and greater than CrouchedHalfHeight, and the crouch button is being pressed.\n///\n/// @returns      bool    True if the pawn is currently in the process of crouching down, false otherwise.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "Whether the pawn is currently in the process of crouching down. Only returns true if the root collision's half height is smaller than DefaultHalfHeight\nand greater than CrouchedHalfHeight, and the crouch button is being pressed.\n\n@returns      bool    True if the pawn is currently in the process of crouching down, false otherwise." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsCrouchingDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GMC_GoldSrcMovementCmp_eventIsCrouchingDown_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsCrouchingDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_GoldSrcMovementCmp_eventIsCrouchingDown_Parms), &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsCrouchingDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsCrouchingDown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsCrouchingDown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsCrouchingDown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsCrouchingDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcMovementCmp, nullptr, "IsCrouchingDown", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsCrouchingDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsCrouchingDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsCrouchingDown_Statics::GMC_GoldSrcMovementCmp_eventIsCrouchingDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsCrouchingDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsCrouchingDown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsCrouchingDown_Statics::GMC_GoldSrcMovementCmp_eventIsCrouchingDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsCrouchingDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsCrouchingDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcMovementCmp::execIsCrouchingDown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCrouchingDown();
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcMovementCmp Function IsCrouchingDown

// Begin Class UGMC_GoldSrcMovementCmp Function IsFullyCrouched
struct Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsFullyCrouched_Statics
{
	struct GMC_GoldSrcMovementCmp_eventIsFullyCrouched_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Whether the pawn is fully crouched. Only returns true if the root collision's half height is equal to CrouchedHalfHeight.\n///\n/// @returns      bool    True if the pawn is currently fully crouched, false otherwise.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "Whether the pawn is fully crouched. Only returns true if the root collision's half height is equal to CrouchedHalfHeight.\n\n@returns      bool    True if the pawn is currently fully crouched, false otherwise." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsFullyCrouched_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GMC_GoldSrcMovementCmp_eventIsFullyCrouched_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsFullyCrouched_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_GoldSrcMovementCmp_eventIsFullyCrouched_Parms), &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsFullyCrouched_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsFullyCrouched_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsFullyCrouched_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsFullyCrouched_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsFullyCrouched_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcMovementCmp, nullptr, "IsFullyCrouched", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsFullyCrouched_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsFullyCrouched_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsFullyCrouched_Statics::GMC_GoldSrcMovementCmp_eventIsFullyCrouched_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsFullyCrouched_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsFullyCrouched_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsFullyCrouched_Statics::GMC_GoldSrcMovementCmp_eventIsFullyCrouched_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsFullyCrouched()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsFullyCrouched_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcMovementCmp::execIsFullyCrouched)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsFullyCrouched();
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcMovementCmp Function IsFullyCrouched

// Begin Class UGMC_GoldSrcMovementCmp Function IsSprinting
struct Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsSprinting_Statics
{
	struct GMC_GoldSrcMovementCmp_eventIsSprinting_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Whether the pawn is currently sprinting.\n///\n/// @returns      bool    Whether the pawn is sprinting.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "Whether the pawn is currently sprinting.\n\n@returns      bool    Whether the pawn is sprinting." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsSprinting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GMC_GoldSrcMovementCmp_eventIsSprinting_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsSprinting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_GoldSrcMovementCmp_eventIsSprinting_Parms), &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsSprinting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsSprinting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsSprinting_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsSprinting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcMovementCmp, nullptr, "IsSprinting", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsSprinting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsSprinting_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsSprinting_Statics::GMC_GoldSrcMovementCmp_eventIsSprinting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsSprinting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsSprinting_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsSprinting_Statics::GMC_GoldSrcMovementCmp_eventIsSprinting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsSprinting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsSprinting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcMovementCmp::execIsSprinting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSprinting();
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcMovementCmp Function IsSprinting

// Begin Class UGMC_GoldSrcMovementCmp Function IsUncrouching
struct Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUncrouching_Statics
{
	struct GMC_GoldSrcMovementCmp_eventIsUncrouching_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Whether the pawn is currently in the process of uncrouching. Only returns true if the root collision's half height is greater than CrouchedHalfHeight and\n/// smaller than DefaultHalfHeight, and the crouch button is not being pressed.\n///\n/// @returns      bool    True if the pawn is currently in the process of uncrouching, false otherwise.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "Whether the pawn is currently in the process of uncrouching. Only returns true if the root collision's half height is greater than CrouchedHalfHeight and\nsmaller than DefaultHalfHeight, and the crouch button is not being pressed.\n\n@returns      bool    True if the pawn is currently in the process of uncrouching, false otherwise." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUncrouching_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GMC_GoldSrcMovementCmp_eventIsUncrouching_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUncrouching_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_GoldSrcMovementCmp_eventIsUncrouching_Parms), &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUncrouching_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUncrouching_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUncrouching_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUncrouching_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUncrouching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcMovementCmp, nullptr, "IsUncrouching", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUncrouching_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUncrouching_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUncrouching_Statics::GMC_GoldSrcMovementCmp_eventIsUncrouching_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUncrouching_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUncrouching_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUncrouching_Statics::GMC_GoldSrcMovementCmp_eventIsUncrouching_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUncrouching()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUncrouching_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcMovementCmp::execIsUncrouching)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsUncrouching();
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcMovementCmp Function IsUncrouching

// Begin Class UGMC_GoldSrcMovementCmp Function IsUsingFlyMode
struct Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUsingFlyMode_Statics
{
	struct GMC_GoldSrcMovementCmp_eventIsUsingFlyMode_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Whether the pawn is using fly mode.\n///\n/// @returns      bool    True when currently flying, false otherwise.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "Whether the pawn is using fly mode.\n\n@returns      bool    True when currently flying, false otherwise." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUsingFlyMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GMC_GoldSrcMovementCmp_eventIsUsingFlyMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUsingFlyMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_GoldSrcMovementCmp_eventIsUsingFlyMode_Parms), &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUsingFlyMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUsingFlyMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUsingFlyMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUsingFlyMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUsingFlyMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcMovementCmp, nullptr, "IsUsingFlyMode", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUsingFlyMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUsingFlyMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUsingFlyMode_Statics::GMC_GoldSrcMovementCmp_eventIsUsingFlyMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUsingFlyMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUsingFlyMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUsingFlyMode_Statics::GMC_GoldSrcMovementCmp_eventIsUsingFlyMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUsingFlyMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUsingFlyMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcMovementCmp::execIsUsingFlyMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsUsingFlyMode();
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcMovementCmp Function IsUsingFlyMode

// Begin Class UGMC_GoldSrcMovementCmp Function IsUsingNoClipMode
struct Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUsingNoClipMode_Statics
{
	struct GMC_GoldSrcMovementCmp_eventIsUsingNoClipMode_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Whether the pawn is using no-clip mode.\n///\n/// @returns      bool    True when currently using no-clip, false otherwise.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "Whether the pawn is using no-clip mode.\n\n@returns      bool    True when currently using no-clip, false otherwise." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUsingNoClipMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GMC_GoldSrcMovementCmp_eventIsUsingNoClipMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUsingNoClipMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_GoldSrcMovementCmp_eventIsUsingNoClipMode_Parms), &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUsingNoClipMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUsingNoClipMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUsingNoClipMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUsingNoClipMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUsingNoClipMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcMovementCmp, nullptr, "IsUsingNoClipMode", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUsingNoClipMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUsingNoClipMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUsingNoClipMode_Statics::GMC_GoldSrcMovementCmp_eventIsUsingNoClipMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUsingNoClipMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUsingNoClipMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUsingNoClipMode_Statics::GMC_GoldSrcMovementCmp_eventIsUsingNoClipMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUsingNoClipMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUsingNoClipMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcMovementCmp::execIsUsingNoClipMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsUsingNoClipMode();
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcMovementCmp Function IsUsingNoClipMode

// Begin Class UGMC_GoldSrcMovementCmp Function Jump
struct GMC_GoldSrcMovementCmp_eventJump_Parms
{
	bool bRequestedJump;
	float DeltaSeconds;
};
static FName NAME_UGMC_GoldSrcMovementCmp_Jump = FName(TEXT("Jump"));
void UGMC_GoldSrcMovementCmp::Jump(bool bRequestedJump, float DeltaSeconds)
{
	GMC_GoldSrcMovementCmp_eventJump_Parms Parms;
	Parms.bRequestedJump=bRequestedJump ? true : false;
	Parms.DeltaSeconds=DeltaSeconds;
	ProcessEvent(FindFunctionChecked(NAME_UGMC_GoldSrcMovementCmp_Jump),&Parms);
}
struct Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Jump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Handles the jumping logic.\n///\n/// @param        bRequestedJump    Whether the player has pressed the jump button.\n/// @param        DeltaSeconds      The delta time to use.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "Handles the jumping logic.\n\n@param        bRequestedJump    Whether the player has pressed the jump button.\n@param        DeltaSeconds      The delta time to use.\n@returns      void" },
	};
#endif // WITH_METADATA
	static void NewProp_bRequestedJump_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequestedJump;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Jump_Statics::NewProp_bRequestedJump_SetBit(void* Obj)
{
	((GMC_GoldSrcMovementCmp_eventJump_Parms*)Obj)->bRequestedJump = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Jump_Statics::NewProp_bRequestedJump = { "bRequestedJump", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_GoldSrcMovementCmp_eventJump_Parms), &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Jump_Statics::NewProp_bRequestedJump_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Jump_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcMovementCmp_eventJump_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Jump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Jump_Statics::NewProp_bRequestedJump,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Jump_Statics::NewProp_DeltaSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Jump_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Jump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcMovementCmp, nullptr, "Jump", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Jump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Jump_Statics::PropPointers), sizeof(GMC_GoldSrcMovementCmp_eventJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Jump_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Jump_Statics::Function_MetaDataParams) };
static_assert(sizeof(GMC_GoldSrcMovementCmp_eventJump_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Jump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Jump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcMovementCmp::execJump)
{
	P_GET_UBOOL(Z_Param_bRequestedJump);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Jump_Implementation(Z_Param_bRequestedJump,Z_Param_DeltaSeconds);
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcMovementCmp Function Jump

// Begin Class UGMC_GoldSrcMovementCmp Function OnJumped
static FName NAME_UGMC_GoldSrcMovementCmp_OnJumped = FName(TEXT("OnJumped"));
void UGMC_GoldSrcMovementCmp::OnJumped()
{
	ProcessEvent(FindFunctionChecked(NAME_UGMC_GoldSrcMovementCmp_OnJumped),NULL);
}
struct Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_OnJumped_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Called when the pawn is just about to jump. The movement mode at this point is still grounded but will will be changed to airborne in the next frame.\n///\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "Called when the pawn is just about to jump. The movement mode at this point is still grounded but will will be changed to airborne in the next frame.\n\n@returns      void" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_OnJumped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcMovementCmp, nullptr, "OnJumped", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_OnJumped_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_OnJumped_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_OnJumped()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_OnJumped_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcMovementCmp::execOnJumped)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnJumped_Implementation();
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcMovementCmp Function OnJumped

// Begin Class UGMC_GoldSrcMovementCmp Function PhysicsGoldSrc
struct Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_PhysicsGoldSrc_Statics
{
	struct GMC_GoldSrcMovementCmp_eventPhysicsGoldSrc_Parms
	{
		FVector WishMove;
		FVector WishVelocity;
		float DeltaSeconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Implements movement physics similar to those used in GoldSource games.\n///\n/// @param        WishMove        The directional input of the player.\n/// @param        WishVelocity    The velocity generated from the directional input.\n/// @param        DeltaSeconds    The delta time to use.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "Implements movement physics similar to those used in GoldSource games.\n\n@param        WishMove        The directional input of the player.\n@param        WishVelocity    The velocity generated from the directional input.\n@param        DeltaSeconds    The delta time to use.\n@returns      void" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WishMove_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WishMove;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WishVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_PhysicsGoldSrc_Statics::NewProp_WishMove = { "WishMove", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcMovementCmp_eventPhysicsGoldSrc_Parms, WishMove), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WishMove_MetaData), NewProp_WishMove_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_PhysicsGoldSrc_Statics::NewProp_WishVelocity = { "WishVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcMovementCmp_eventPhysicsGoldSrc_Parms, WishVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_PhysicsGoldSrc_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcMovementCmp_eventPhysicsGoldSrc_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_PhysicsGoldSrc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_PhysicsGoldSrc_Statics::NewProp_WishMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_PhysicsGoldSrc_Statics::NewProp_WishVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_PhysicsGoldSrc_Statics::NewProp_DeltaSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_PhysicsGoldSrc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_PhysicsGoldSrc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcMovementCmp, nullptr, "PhysicsGoldSrc", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_PhysicsGoldSrc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_PhysicsGoldSrc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_PhysicsGoldSrc_Statics::GMC_GoldSrcMovementCmp_eventPhysicsGoldSrc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_PhysicsGoldSrc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_PhysicsGoldSrc_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_PhysicsGoldSrc_Statics::GMC_GoldSrcMovementCmp_eventPhysicsGoldSrc_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_PhysicsGoldSrc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_PhysicsGoldSrc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcMovementCmp::execPhysicsGoldSrc)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_WishMove);
	P_GET_STRUCT(FVector,Z_Param_WishVelocity);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PhysicsGoldSrc(Z_Param_Out_WishMove,Z_Param_WishVelocity,Z_Param_DeltaSeconds);
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcMovementCmp Function PhysicsGoldSrc

// Begin Class UGMC_GoldSrcMovementCmp Function Slide
struct Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Slide_Statics
{
	struct GMC_GoldSrcMovementCmp_eventSlide_Parms
	{
		float MinRequiredZ;
		float DeltaSeconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Makes the pawn slide along a usually walkable surface if its velocity is high enough.\n///\n/// @param        MinRequiredZ    The minimum Z of the projected velocity required to slide.\n/// @param        DeltaSeconds    The delta time to use.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "Makes the pawn slide along a usually walkable surface if its velocity is high enough.\n\n@param        MinRequiredZ    The minimum Z of the projected velocity required to slide.\n@param        DeltaSeconds    The delta time to use.\n@returns      void" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRequiredZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Slide_Statics::NewProp_MinRequiredZ = { "MinRequiredZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcMovementCmp_eventSlide_Parms, MinRequiredZ), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Slide_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcMovementCmp_eventSlide_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Slide_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Slide_Statics::NewProp_MinRequiredZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Slide_Statics::NewProp_DeltaSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Slide_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Slide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcMovementCmp, nullptr, "Slide", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Slide_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Slide_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Slide_Statics::GMC_GoldSrcMovementCmp_eventSlide_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Slide_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Slide_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Slide_Statics::GMC_GoldSrcMovementCmp_eventSlide_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Slide()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Slide_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcMovementCmp::execSlide)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinRequiredZ);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Slide(Z_Param_MinRequiredZ,Z_Param_DeltaSeconds);
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcMovementCmp Function Slide

// Begin Class UGMC_GoldSrcMovementCmp Function Sprint
struct GMC_GoldSrcMovementCmp_eventSprint_Parms
{
	bool bRequestedSprint;
	float DeltaSeconds;
};
static FName NAME_UGMC_GoldSrcMovementCmp_Sprint = FName(TEXT("Sprint"));
void UGMC_GoldSrcMovementCmp::Sprint(bool bRequestedSprint, float DeltaSeconds)
{
	GMC_GoldSrcMovementCmp_eventSprint_Parms Parms;
	Parms.bRequestedSprint=bRequestedSprint ? true : false;
	Parms.DeltaSeconds=DeltaSeconds;
	ProcessEvent(FindFunctionChecked(NAME_UGMC_GoldSrcMovementCmp_Sprint),&Parms);
}
struct Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Sprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Increases the movement speed of the pawn to SprintSpeed if desired.\n///\n/// @param        bRquestedSprint    Whether the player has pressed the sprint button.\n/// @param        DeltaSeconds       The delta time to use.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "Increases the movement speed of the pawn to SprintSpeed if desired.\n\n@param        bRquestedSprint    Whether the player has pressed the sprint button.\n@param        DeltaSeconds       The delta time to use.\n@returns      void" },
	};
#endif // WITH_METADATA
	static void NewProp_bRequestedSprint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequestedSprint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Sprint_Statics::NewProp_bRequestedSprint_SetBit(void* Obj)
{
	((GMC_GoldSrcMovementCmp_eventSprint_Parms*)Obj)->bRequestedSprint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Sprint_Statics::NewProp_bRequestedSprint = { "bRequestedSprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_GoldSrcMovementCmp_eventSprint_Parms), &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Sprint_Statics::NewProp_bRequestedSprint_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Sprint_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcMovementCmp_eventSprint_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Sprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Sprint_Statics::NewProp_bRequestedSprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Sprint_Statics::NewProp_DeltaSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Sprint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Sprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcMovementCmp, nullptr, "Sprint", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Sprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Sprint_Statics::PropPointers), sizeof(GMC_GoldSrcMovementCmp_eventSprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Sprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Sprint_Statics::Function_MetaDataParams) };
static_assert(sizeof(GMC_GoldSrcMovementCmp_eventSprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Sprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Sprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcMovementCmp::execSprint)
{
	P_GET_UBOOL(Z_Param_bRequestedSprint);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Sprint_Implementation(Z_Param_bRequestedSprint,Z_Param_DeltaSeconds);
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcMovementCmp Function Sprint

// Begin Class UGMC_GoldSrcMovementCmp Function WalkMove
struct Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WalkMove_Statics
{
	struct GMC_GoldSrcMovementCmp_eventWalkMove_Parms
	{
		FVector WishDirection;
		float WishSpeed;
		float DeltaSeconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Calculates a new velocity for the pawn when on the ground.\n///\n/// @param        WishDirection    The direction the player wants to move in.\n/// @param        WishSpeed        The speed the player wants to have based on the input.\n/// @param        DeltaSeconds     The delta time to use.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "Calculates a new velocity for the pawn when on the ground.\n\n@param        WishDirection    The direction the player wants to move in.\n@param        WishSpeed        The speed the player wants to have based on the input.\n@param        DeltaSeconds     The delta time to use.\n@returns      void" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WishDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WishSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WalkMove_Statics::NewProp_WishDirection = { "WishDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcMovementCmp_eventWalkMove_Parms, WishDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WalkMove_Statics::NewProp_WishSpeed = { "WishSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcMovementCmp_eventWalkMove_Parms, WishSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WalkMove_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcMovementCmp_eventWalkMove_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WalkMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WalkMove_Statics::NewProp_WishDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WalkMove_Statics::NewProp_WishSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WalkMove_Statics::NewProp_DeltaSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WalkMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WalkMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcMovementCmp, nullptr, "WalkMove", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WalkMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WalkMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WalkMove_Statics::GMC_GoldSrcMovementCmp_eventWalkMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WalkMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WalkMove_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WalkMove_Statics::GMC_GoldSrcMovementCmp_eventWalkMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WalkMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WalkMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcMovementCmp::execWalkMove)
{
	P_GET_STRUCT(FVector,Z_Param_WishDirection);
	P_GET_PROPERTY(FFloatProperty,Z_Param_WishSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WalkMove(Z_Param_WishDirection,Z_Param_WishSpeed,Z_Param_DeltaSeconds);
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcMovementCmp Function WalkMove

// Begin Class UGMC_GoldSrcMovementCmp Function WaterJump
struct GMC_GoldSrcMovementCmp_eventWaterJump_Parms
{
	float DeltaSeconds;
};
static FName NAME_UGMC_GoldSrcMovementCmp_WaterJump = FName(TEXT("WaterJump"));
void UGMC_GoldSrcMovementCmp::WaterJump(float DeltaSeconds)
{
	GMC_GoldSrcMovementCmp_eventWaterJump_Parms Parms;
	Parms.DeltaSeconds=DeltaSeconds;
	ProcessEvent(FindFunctionChecked(NAME_UGMC_GoldSrcMovementCmp_WaterJump),&Parms);
}
struct Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WaterJump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Handles the logic for jumping out of water.\n///\n/// @param        DeltaSeconds    The delta time to use.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "Handles the logic for jumping out of water.\n\n@param        DeltaSeconds    The delta time to use.\n@returns      void" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WaterJump_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcMovementCmp_eventWaterJump_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WaterJump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WaterJump_Statics::NewProp_DeltaSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WaterJump_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WaterJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcMovementCmp, nullptr, "WaterJump", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WaterJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WaterJump_Statics::PropPointers), sizeof(GMC_GoldSrcMovementCmp_eventWaterJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WaterJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WaterJump_Statics::Function_MetaDataParams) };
static_assert(sizeof(GMC_GoldSrcMovementCmp_eventWaterJump_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WaterJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WaterJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcMovementCmp::execWaterJump)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WaterJump_Implementation(Z_Param_DeltaSeconds);
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcMovementCmp Function WaterJump

// Begin Class UGMC_GoldSrcMovementCmp Function WaterMove
struct Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WaterMove_Statics
{
	struct GMC_GoldSrcMovementCmp_eventWaterMove_Parms
	{
		FVector WishDirection;
		float WishSpeed;
		float DeltaSeconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Calculates a new velocity for the pawn when in water.\n///\n/// @param        WishDirection    The direction the player wants to move in.\n/// @param        WishSpeed        The speed the player wants to have based on the input.\n/// @param        DeltaSeconds     The delta time to use.\n/// @returns      void\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "Calculates a new velocity for the pawn when in water.\n\n@param        WishDirection    The direction the player wants to move in.\n@param        WishSpeed        The speed the player wants to have based on the input.\n@param        DeltaSeconds     The delta time to use.\n@returns      void" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WishDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WishSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WaterMove_Statics::NewProp_WishDirection = { "WishDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcMovementCmp_eventWaterMove_Parms, WishDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WaterMove_Statics::NewProp_WishSpeed = { "WishSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcMovementCmp_eventWaterMove_Parms, WishSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WaterMove_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcMovementCmp_eventWaterMove_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WaterMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WaterMove_Statics::NewProp_WishDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WaterMove_Statics::NewProp_WishSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WaterMove_Statics::NewProp_DeltaSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WaterMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WaterMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcMovementCmp, nullptr, "WaterMove", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WaterMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WaterMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WaterMove_Statics::GMC_GoldSrcMovementCmp_eventWaterMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WaterMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WaterMove_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WaterMove_Statics::GMC_GoldSrcMovementCmp_eventWaterMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WaterMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WaterMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcMovementCmp::execWaterMove)
{
	P_GET_STRUCT(FVector,Z_Param_WishDirection);
	P_GET_PROPERTY(FFloatProperty,Z_Param_WishSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WaterMove(Z_Param_WishDirection,Z_Param_WishSpeed,Z_Param_DeltaSeconds);
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcMovementCmp Function WaterMove

// Begin Class UGMC_GoldSrcMovementCmp
void UGMC_GoldSrcMovementCmp::StaticRegisterNativesUGMC_GoldSrcMovementCmp()
{
	UClass* Class = UGMC_GoldSrcMovementCmp::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Accelerate", &UGMC_GoldSrcMovementCmp::execAccelerate },
		{ "AirMove", &UGMC_GoldSrcMovementCmp::execAirMove },
		{ "ApplyFloorFriction", &UGMC_GoldSrcMovementCmp::execApplyFloorFriction },
		{ "ApplyJumpSpeedBoost", &UGMC_GoldSrcMovementCmp::execApplyJumpSpeedBoost },
		{ "ApplyWaterFriction", &UGMC_GoldSrcMovementCmp::execApplyWaterFriction },
		{ "CanCrouch", &UGMC_GoldSrcMovementCmp::execCanCrouch },
		{ "CanJump", &UGMC_GoldSrcMovementCmp::execCanJump },
		{ "CanSprint", &UGMC_GoldSrcMovementCmp::execCanSprint },
		{ "CanUncrouch", &UGMC_GoldSrcMovementCmp::execCanUncrouch },
		{ "Crouch", &UGMC_GoldSrcMovementCmp::execCrouch },
		{ "GetCrouchedHalfHeight", &UGMC_GoldSrcMovementCmp::execGetCrouchedHalfHeight },
		{ "GetDefaultHalfHeight", &UGMC_GoldSrcMovementCmp::execGetDefaultHalfHeight },
		{ "GetFloorFriction", &UGMC_GoldSrcMovementCmp::execGetFloorFriction },
		{ "HasJustJumped", &UGMC_GoldSrcMovementCmp::execHasJustJumped },
		{ "HasJustLanded", &UGMC_GoldSrcMovementCmp::execHasJustLanded },
		{ "HasJustLanded_Internal", &UGMC_GoldSrcMovementCmp::execHasJustLanded_Internal },
		{ "IsCrouchingDown", &UGMC_GoldSrcMovementCmp::execIsCrouchingDown },
		{ "IsFullyCrouched", &UGMC_GoldSrcMovementCmp::execIsFullyCrouched },
		{ "IsSprinting", &UGMC_GoldSrcMovementCmp::execIsSprinting },
		{ "IsUncrouching", &UGMC_GoldSrcMovementCmp::execIsUncrouching },
		{ "IsUsingFlyMode", &UGMC_GoldSrcMovementCmp::execIsUsingFlyMode },
		{ "IsUsingNoClipMode", &UGMC_GoldSrcMovementCmp::execIsUsingNoClipMode },
		{ "Jump", &UGMC_GoldSrcMovementCmp::execJump },
		{ "OnJumped", &UGMC_GoldSrcMovementCmp::execOnJumped },
		{ "PhysicsGoldSrc", &UGMC_GoldSrcMovementCmp::execPhysicsGoldSrc },
		{ "Slide", &UGMC_GoldSrcMovementCmp::execSlide },
		{ "Sprint", &UGMC_GoldSrcMovementCmp::execSprint },
		{ "WalkMove", &UGMC_GoldSrcMovementCmp::execWalkMove },
		{ "WaterJump", &UGMC_GoldSrcMovementCmp::execWaterJump },
		{ "WaterMove", &UGMC_GoldSrcMovementCmp::execWaterMove },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGMC_GoldSrcMovementCmp);
UClass* Z_Construct_UClass_UGMC_GoldSrcMovementCmp_NoRegister()
{
	return UGMC_GoldSrcMovementCmp::StaticClass();
}
struct Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Movement" },
		{ "Comment", "/// Movement component loosely based on the movement physics found in classic shooter games such as Quake and Half-Life.\n" },
		{ "HideCategories", "Movement|Tempo Velocity Hidden" },
		{ "IncludePath", "Components/GMCGoldSrcMovementComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Movement component loosely based on the movement physics found in classic shooter games such as Quake and Half-Life." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BI_WantsToSprint_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BI_WantsToCrouch_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BI_WantsToJump_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BI_CanJump_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BI_JustLandedPostPhysics_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BI_JustJumped_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BI_JustLanded_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BI_IsSprinting_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BI_MaxSpeed_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultHalfHeight_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// The half height of the pawn's root collision when just spawned.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "The half height of the pawn's root collision when just spawned." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCollisionType_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// The collision type that the root component had when it just spawned.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "The collision type that the root component had when it just spawned." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWantsToSprint_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// True while the user is pressing the sprint button, false otherwise.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "True while the user is pressing the sprint button, false otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWantsToCrouch_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// True while the user is pressing the crouch button, false otherwise.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "True while the user is pressing the crouch button, false otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWantsToJump_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// True while the user is pressing the jump button, false otherwise.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "True while the user is pressing the jump button, false otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanJump_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Flag to determine whether a jump is currently allowed.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "Flag to determine whether a jump is currently allowed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSprinting_MetaData[] = {
		{ "Category", "General Movement Component" },
		{ "Comment", "/// Flag set when the pawn is sprinting.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "Flag set when the pawn is sprinting." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintAction_MetaData[] = {
		{ "Category", "Movement|Input" },
		{ "Comment", "///=============================================================================================================================================================\n/// Properties\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "Properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchAction_MetaData[] = {
		{ "Category", "Movement|Input" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "Category", "Movement|Input" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[] = {
		{ "Category", "Movement|GoldSrc|On Ground" },
		{ "ClampMin", "0" },
		{ "Comment", "/// Acceleration of the pawn when not in the air.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "Acceleration of the pawn when not in the air." },
		{ "UIMax", "1000" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Movement|GoldSrc|On Ground" },
		{ "ClampMin", "0" },
		{ "Comment", "/// Soft cap on the movement speed of the pawn.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "Soft cap on the movement speed of the pawn." },
		{ "UIMax", "2000" },
		{ "UIMin", "100" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StopSpeed_MetaData[] = {
		{ "Category", "Movement|GoldSrc|On Ground" },
		{ "ClampMin", "0" },
		{ "Comment", "/// How quickly the pawn comes to a stop when there is no directional input.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "How quickly the pawn comes to a stop when there is no directional input." },
		{ "UIMax", "500" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "Movement|GoldSrc|On Ground" },
		{ "ClampMin", "0" },
		{ "Comment", "/// The speed the pawn should have when sprinting.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "The speed the pawn should have when sprinting." },
		{ "UIMax", "5000" },
		{ "UIMin", "100" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchWalkSpeed_MetaData[] = {
		{ "Category", "Movement|GoldSrc|On Ground" },
		{ "ClampMin", "0" },
		{ "Comment", "/// How fast the pawn can walk when crouching while grounded.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "How fast the pawn can walk when crouching while grounded." },
		{ "UIMax", "2000" },
		{ "UIMin", "100" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchInterpSpeed_MetaData[] = {
		{ "Category", "Movement|GoldSrc|On Ground" },
		{ "ClampMin", "0" },
		{ "Comment", "/// How fast the pawn can (un)crouch.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "How fast the pawn can (un)crouch." },
		{ "UIMax", "1000" },
		{ "UIMin", "100" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchedHalfHeight_MetaData[] = {
		{ "Category", "Movement|GoldSrc|On Ground" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/// What the half height of the pawn's root collision should be when fully crouched. Crouching is only possible if the root collision is a vertical capsule or\n/// a box. Will be clamped if larger than the default root collision half height.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "What the half height of the pawn's root collision should be when fully crouched. Crouching is only possible if the root collision is a vertical capsule or\na box. Will be clamped if larger than the default root collision half height." },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorFriction_MetaData[] = {
		{ "Category", "Movement|GoldSrc|On Ground" },
		{ "ClampMin", "0" },
		{ "Comment", "/// The amount of friction applied when moving on the ground.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "The amount of friction applied when moving on the ground." },
		{ "UIMax", "10" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeFrictionScale_MetaData[] = {
		{ "Category", "Movement|GoldSrc|On Ground" },
		{ "ClampMin", "0" },
		{ "Comment", "/// Multiplier applied to the floor friction when the pawn is close to a drop-off.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "Multiplier applied to the floor friction when the pawn is close to a drop-off." },
		{ "UIMax", "5" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeFrictionMinRequiredHeight_MetaData[] = {
		{ "Category", "Movement|GoldSrc|On Ground" },
		{ "ClampMin", "0" },
		{ "Comment", "/// How high a ledge must be at the least for edge friction to be applied.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "How high a ledge must be at the least for edge friction to be applied." },
		{ "UIMax", "100" },
		{ "UIMin", "10" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAltEdgeFriction_MetaData[] = {
		{ "Category", "Movement|GoldSrc|On Ground" },
		{ "Comment", "/// If false, the edge friction multiplier will be applied as soon as the outer edge of the collision shape is over the ledge. If true, the edge friction\n/// multiplier will be applied only after the center of the pawn's collision shape is already over the ledge.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "If false, the edge friction multiplier will be applied as soon as the outer edge of the collision shape is over the ledge. If true, the edge friction\nmultiplier will be applied only after the center of the pawn's collision shape is already over the ledge." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpMode_MetaData[] = {
		{ "Category", "Movement|GoldSrc|On Ground" },
		{ "Comment", "/// Determines the behaviour of the jumping mechanic.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "Determines the behaviour of the jumping mechanic." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpForce_MetaData[] = {
		{ "Category", "Movement|GoldSrc|On Ground" },
		{ "ClampMin", "0" },
		{ "Comment", "/// The strength of the pawn's jump.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "The strength of the pawn's jump." },
		{ "UIMax", "2000" },
		{ "UIMin", "300" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyJumpSpeedBoost_MetaData[] = {
		{ "Category", "Movement|GoldSrc|On Ground" },
		{ "Comment", "/// Whether the pawn should receive a forward speed boost when jumping. Allows gaining speed through \"Accelerated Back Hopping\" but also prevents strafe\n/// jumping.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "Whether the pawn should receive a forward speed boost when jumping. Allows gaining speed through \"Accelerated Back Hopping\" but also prevents strafe\njumping." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmallJumpSpeedBoostFactor_MetaData[] = {
		{ "Category", "Movement|GoldSrc|On Ground" },
		{ "ClampMin", "0" },
		{ "Comment", "/// The percentage of the max speed applied as jump speed boost when the pawn is sprinting or fully crouched.\n" },
		{ "EditCondition", "bApplyJumpSpeedBoost" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "The percentage of the max speed applied as jump speed boost when the pawn is sprinting or fully crouched." },
		{ "UIMax", "1" },
		{ "UIMin", "0.01" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LargeJumpSpeedBoostFactor_MetaData[] = {
		{ "Category", "Movement|GoldSrc|On Ground" },
		{ "ClampMin", "0" },
		{ "Comment", "/// The percentage of the max speed applied as jump speed boost when the pawn is neither sprinting nor fully crouched.\n" },
		{ "EditCondition", "bApplyJumpSpeedBoost" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "The percentage of the max speed applied as jump speed boost when the pawn is neither sprinting nor fully crouched." },
		{ "UIMax", "1" },
		{ "UIMin", "0.01" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AirAcceleration_MetaData[] = {
		{ "Category", "Movement|GoldSrc|In Air" },
		{ "ClampMin", "0" },
		{ "Comment", "/// Acceleration of the pawn when in the air.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "Acceleration of the pawn when in the air." },
		{ "UIMax", "1000" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AirControl_MetaData[] = {
		{ "Category", "Movement|GoldSrc|In Air" },
		{ "ClampMin", "0" },
		{ "Comment", "/// Multiplier limiting the pawn's speed while in the air.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "Multiplier limiting the pawn's speed while in the air." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterControl_MetaData[] = {
		{ "Category", "Movement|GoldSrc|In Water" },
		{ "ClampMin", "0" },
		{ "Comment", "/// Multiplier limiting the pawn's speed while in water.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "Multiplier limiting the pawn's speed while in water." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SinkSpeed_MetaData[] = {
		{ "Category", "Movement|GoldSrc|In Water" },
		{ "ClampMin", "0" },
		{ "Comment", "/// How quickly the pawn sinks in water when there is no directional input.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "How quickly the pawn sinks in water when there is no directional input." },
		{ "UIMax", "500" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterJumpForce_MetaData[] = {
		{ "Category", "Movement|GoldSrc|In Water" },
		{ "ClampMin", "0" },
		{ "Comment", "/// The strength of the pawn's jump when trying to jump out of water.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "The strength of the pawn's jump when trying to jump out of water." },
		{ "UIMax", "2000" },
		{ "UIMin", "300" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WaterJumpPush_MetaData[] = {
		{ "Category", "Movement|GoldSrc|In Water" },
		{ "ClampMin", "0" },
		{ "Comment", "/// The strength of the forward push when the pawn's trying to jump out of water.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "The strength of the forward push when the pawn's trying to jump out of water." },
		{ "UIMax", "2000" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAltSwimControls_MetaData[] = {
		{ "Category", "Movement|GoldSrc|In Water" },
		{ "Comment", "/// If false, swimming controls with use an \"AbsoluteZ\" input scheme. If true, swimming controls will be fully relative to the player's view rotation.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "If false, swimming controls with use an \"AbsoluteZ\" input scheme. If true, swimming controls will be fully relative to the player's view rotation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedHardCap_MetaData[] = {
		{ "Category", "Movement" },
		{ "ClampMin", "0" },
		{ "Comment", "/// The absolute max speed that the pawn can achieve under any circumstances. Setting this to 0 disables the hard cap.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "The absolute max speed that the pawn can achieve under any circumstances. Setting this to 0 disables the hard cap." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bImmediateCrouchWalkSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/// If true, the crouch walk speed will already be applied while partially crouching.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "If true, the crouch walk speed will already be applied while partially crouching." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConsiderMassOnJump_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/// If true, the configured mass of the pawn will affect the height of the jump.\n" },
		{ "ModuleRelativePath", "Public/Components/GMCGoldSrcMovementComponent.h" },
		{ "ToolTip", "If true, the configured mass of the pawn will affect the height of the jump." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_BI_WantsToSprint;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BI_WantsToCrouch;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BI_WantsToJump;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BI_CanJump;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BI_JustLandedPostPhysics;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BI_JustJumped;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BI_JustLanded;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BI_IsSprinting;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BI_MaxSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultHalfHeight;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultCollisionType;
	static void NewProp_bWantsToSprint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantsToSprint;
	static void NewProp_bWantsToCrouch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantsToCrouch;
	static void NewProp_bWantsToJump_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantsToJump;
	static void NewProp_bCanJump_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanJump;
	static void NewProp_bIsSprinting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSprinting;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SprintAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrouchAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Acceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StopSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchWalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchInterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchedHalfHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloorFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EdgeFrictionScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EdgeFrictionMinRequiredHeight;
	static void NewProp_bUseAltEdgeFriction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAltEdgeFriction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_JumpMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_JumpMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpForce;
	static void NewProp_bApplyJumpSpeedBoost_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyJumpSpeedBoost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SmallJumpSpeedBoostFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LargeJumpSpeedBoostFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AirAcceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AirControl;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WaterControl;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SinkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WaterJumpForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WaterJumpPush;
	static void NewProp_bUseAltSwimControls_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAltSwimControls;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedHardCap;
	static void NewProp_bImmediateCrouchWalkSpeed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImmediateCrouchWalkSpeed;
	static void NewProp_bConsiderMassOnJump_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsiderMassOnJump;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Accelerate, "Accelerate" }, // 2359100552
		{ &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_AirMove, "AirMove" }, // 3677695428
		{ &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyFloorFriction, "ApplyFloorFriction" }, // 1905812130
		{ &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyJumpSpeedBoost, "ApplyJumpSpeedBoost" }, // 2921814027
		{ &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_ApplyWaterFriction, "ApplyWaterFriction" }, // 3656165274
		{ &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanCrouch, "CanCrouch" }, // 3250359403
		{ &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanJump, "CanJump" }, // 3195084863
		{ &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanSprint, "CanSprint" }, // 2513587413
		{ &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_CanUncrouch, "CanUncrouch" }, // 2227337456
		{ &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Crouch, "Crouch" }, // 2943328519
		{ &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetCrouchedHalfHeight, "GetCrouchedHalfHeight" }, // 1235241791
		{ &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetDefaultHalfHeight, "GetDefaultHalfHeight" }, // 192736645
		{ &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_GetFloorFriction, "GetFloorFriction" }, // 2068858275
		{ &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustJumped, "HasJustJumped" }, // 2689976011
		{ &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustLanded, "HasJustLanded" }, // 614665897
		{ &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_HasJustLanded_Internal, "HasJustLanded_Internal" }, // 1609655972
		{ &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsCrouchingDown, "IsCrouchingDown" }, // 721340111
		{ &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsFullyCrouched, "IsFullyCrouched" }, // 911586946
		{ &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsSprinting, "IsSprinting" }, // 3698889221
		{ &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUncrouching, "IsUncrouching" }, // 3125585846
		{ &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUsingFlyMode, "IsUsingFlyMode" }, // 1168560630
		{ &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_IsUsingNoClipMode, "IsUsingNoClipMode" }, // 319217529
		{ &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Jump, "Jump" }, // 886625947
		{ &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_OnJumped, "OnJumped" }, // 3246698613
		{ &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_PhysicsGoldSrc, "PhysicsGoldSrc" }, // 1320058209
		{ &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Slide, "Slide" }, // 391587792
		{ &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_Sprint, "Sprint" }, // 4129054401
		{ &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WalkMove, "WalkMove" }, // 3281109337
		{ &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WaterJump, "WaterJump" }, // 3251604934
		{ &Z_Construct_UFunction_UGMC_GoldSrcMovementCmp_WaterMove, "WaterMove" }, // 3060269887
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGMC_GoldSrcMovementCmp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_BI_WantsToSprint = { "BI_WantsToSprint", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcMovementCmp, BI_WantsToSprint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BI_WantsToSprint_MetaData), NewProp_BI_WantsToSprint_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_BI_WantsToCrouch = { "BI_WantsToCrouch", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcMovementCmp, BI_WantsToCrouch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BI_WantsToCrouch_MetaData), NewProp_BI_WantsToCrouch_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_BI_WantsToJump = { "BI_WantsToJump", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcMovementCmp, BI_WantsToJump), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BI_WantsToJump_MetaData), NewProp_BI_WantsToJump_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_BI_CanJump = { "BI_CanJump", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcMovementCmp, BI_CanJump), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BI_CanJump_MetaData), NewProp_BI_CanJump_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_BI_JustLandedPostPhysics = { "BI_JustLandedPostPhysics", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcMovementCmp, BI_JustLandedPostPhysics), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BI_JustLandedPostPhysics_MetaData), NewProp_BI_JustLandedPostPhysics_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_BI_JustJumped = { "BI_JustJumped", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcMovementCmp, BI_JustJumped), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BI_JustJumped_MetaData), NewProp_BI_JustJumped_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_BI_JustLanded = { "BI_JustLanded", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcMovementCmp, BI_JustLanded), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BI_JustLanded_MetaData), NewProp_BI_JustLanded_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_BI_IsSprinting = { "BI_IsSprinting", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcMovementCmp, BI_IsSprinting), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BI_IsSprinting_MetaData), NewProp_BI_IsSprinting_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_BI_MaxSpeed = { "BI_MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcMovementCmp, BI_MaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BI_MaxSpeed_MetaData), NewProp_BI_MaxSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_DefaultHalfHeight = { "DefaultHalfHeight", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcMovementCmp, DefaultHalfHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultHalfHeight_MetaData), NewProp_DefaultHalfHeight_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_DefaultCollisionType = { "DefaultCollisionType", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcMovementCmp, DefaultCollisionType), Z_Construct_UEnum_Engine_ECollisionEnabled, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultCollisionType_MetaData), NewProp_DefaultCollisionType_MetaData) }; // 2362857466
void Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_bWantsToSprint_SetBit(void* Obj)
{
	((UGMC_GoldSrcMovementCmp*)Obj)->bWantsToSprint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_bWantsToSprint = { "bWantsToSprint", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGMC_GoldSrcMovementCmp), &Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_bWantsToSprint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWantsToSprint_MetaData), NewProp_bWantsToSprint_MetaData) };
void Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_bWantsToCrouch_SetBit(void* Obj)
{
	((UGMC_GoldSrcMovementCmp*)Obj)->bWantsToCrouch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_bWantsToCrouch = { "bWantsToCrouch", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGMC_GoldSrcMovementCmp), &Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_bWantsToCrouch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWantsToCrouch_MetaData), NewProp_bWantsToCrouch_MetaData) };
void Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_bWantsToJump_SetBit(void* Obj)
{
	((UGMC_GoldSrcMovementCmp*)Obj)->bWantsToJump = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_bWantsToJump = { "bWantsToJump", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGMC_GoldSrcMovementCmp), &Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_bWantsToJump_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWantsToJump_MetaData), NewProp_bWantsToJump_MetaData) };
void Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_bCanJump_SetBit(void* Obj)
{
	((UGMC_GoldSrcMovementCmp*)Obj)->bCanJump = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_bCanJump = { "bCanJump", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGMC_GoldSrcMovementCmp), &Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_bCanJump_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanJump_MetaData), NewProp_bCanJump_MetaData) };
void Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_bIsSprinting_SetBit(void* Obj)
{
	((UGMC_GoldSrcMovementCmp*)Obj)->bIsSprinting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_bIsSprinting = { "bIsSprinting", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGMC_GoldSrcMovementCmp), &Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_bIsSprinting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSprinting_MetaData), NewProp_bIsSprinting_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_SprintAction = { "SprintAction", nullptr, (EPropertyFlags)0x0124080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcMovementCmp, SprintAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintAction_MetaData), NewProp_SprintAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_CrouchAction = { "CrouchAction", nullptr, (EPropertyFlags)0x0124080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcMovementCmp, CrouchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchAction_MetaData), NewProp_CrouchAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0124080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcMovementCmp, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcMovementCmp, Acceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Acceleration_MetaData), NewProp_Acceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcMovementCmp, MaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpeed_MetaData), NewProp_MaxSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_StopSpeed = { "StopSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcMovementCmp, StopSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StopSpeed_MetaData), NewProp_StopSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcMovementCmp, SprintSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintSpeed_MetaData), NewProp_SprintSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_CrouchWalkSpeed = { "CrouchWalkSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcMovementCmp, CrouchWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchWalkSpeed_MetaData), NewProp_CrouchWalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_CrouchInterpSpeed = { "CrouchInterpSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcMovementCmp, CrouchInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchInterpSpeed_MetaData), NewProp_CrouchInterpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_CrouchedHalfHeight = { "CrouchedHalfHeight", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcMovementCmp, CrouchedHalfHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchedHalfHeight_MetaData), NewProp_CrouchedHalfHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_FloorFriction = { "FloorFriction", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcMovementCmp, FloorFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorFriction_MetaData), NewProp_FloorFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_EdgeFrictionScale = { "EdgeFrictionScale", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcMovementCmp, EdgeFrictionScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeFrictionScale_MetaData), NewProp_EdgeFrictionScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_EdgeFrictionMinRequiredHeight = { "EdgeFrictionMinRequiredHeight", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcMovementCmp, EdgeFrictionMinRequiredHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeFrictionMinRequiredHeight_MetaData), NewProp_EdgeFrictionMinRequiredHeight_MetaData) };
void Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_bUseAltEdgeFriction_SetBit(void* Obj)
{
	((UGMC_GoldSrcMovementCmp*)Obj)->bUseAltEdgeFriction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_bUseAltEdgeFriction = { "bUseAltEdgeFriction", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGMC_GoldSrcMovementCmp), &Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_bUseAltEdgeFriction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAltEdgeFriction_MetaData), NewProp_bUseAltEdgeFriction_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_JumpMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_JumpMode = { "JumpMode", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcMovementCmp, JumpMode), Z_Construct_UEnum_GMCCore_EGMC_JumpMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpMode_MetaData), NewProp_JumpMode_MetaData) }; // 799403176
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_JumpForce = { "JumpForce", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcMovementCmp, JumpForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpForce_MetaData), NewProp_JumpForce_MetaData) };
void Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_bApplyJumpSpeedBoost_SetBit(void* Obj)
{
	((UGMC_GoldSrcMovementCmp*)Obj)->bApplyJumpSpeedBoost = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_bApplyJumpSpeedBoost = { "bApplyJumpSpeedBoost", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGMC_GoldSrcMovementCmp), &Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_bApplyJumpSpeedBoost_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyJumpSpeedBoost_MetaData), NewProp_bApplyJumpSpeedBoost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_SmallJumpSpeedBoostFactor = { "SmallJumpSpeedBoostFactor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcMovementCmp, SmallJumpSpeedBoostFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmallJumpSpeedBoostFactor_MetaData), NewProp_SmallJumpSpeedBoostFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_LargeJumpSpeedBoostFactor = { "LargeJumpSpeedBoostFactor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcMovementCmp, LargeJumpSpeedBoostFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LargeJumpSpeedBoostFactor_MetaData), NewProp_LargeJumpSpeedBoostFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_AirAcceleration = { "AirAcceleration", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcMovementCmp, AirAcceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AirAcceleration_MetaData), NewProp_AirAcceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_AirControl = { "AirControl", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcMovementCmp, AirControl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AirControl_MetaData), NewProp_AirControl_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_WaterControl = { "WaterControl", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcMovementCmp, WaterControl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterControl_MetaData), NewProp_WaterControl_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_SinkSpeed = { "SinkSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcMovementCmp, SinkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SinkSpeed_MetaData), NewProp_SinkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_WaterJumpForce = { "WaterJumpForce", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcMovementCmp, WaterJumpForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterJumpForce_MetaData), NewProp_WaterJumpForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_WaterJumpPush = { "WaterJumpPush", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcMovementCmp, WaterJumpPush), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WaterJumpPush_MetaData), NewProp_WaterJumpPush_MetaData) };
void Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_bUseAltSwimControls_SetBit(void* Obj)
{
	((UGMC_GoldSrcMovementCmp*)Obj)->bUseAltSwimControls = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_bUseAltSwimControls = { "bUseAltSwimControls", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGMC_GoldSrcMovementCmp), &Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_bUseAltSwimControls_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAltSwimControls_MetaData), NewProp_bUseAltSwimControls_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_SpeedHardCap = { "SpeedHardCap", nullptr, (EPropertyFlags)0x00200c0000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcMovementCmp, SpeedHardCap), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedHardCap_MetaData), NewProp_SpeedHardCap_MetaData) };
void Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_bImmediateCrouchWalkSpeed_SetBit(void* Obj)
{
	((UGMC_GoldSrcMovementCmp*)Obj)->bImmediateCrouchWalkSpeed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_bImmediateCrouchWalkSpeed = { "bImmediateCrouchWalkSpeed", nullptr, (EPropertyFlags)0x00200c0000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGMC_GoldSrcMovementCmp), &Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_bImmediateCrouchWalkSpeed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bImmediateCrouchWalkSpeed_MetaData), NewProp_bImmediateCrouchWalkSpeed_MetaData) };
void Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_bConsiderMassOnJump_SetBit(void* Obj)
{
	((UGMC_GoldSrcMovementCmp*)Obj)->bConsiderMassOnJump = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_bConsiderMassOnJump = { "bConsiderMassOnJump", nullptr, (EPropertyFlags)0x00200c0000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGMC_GoldSrcMovementCmp), &Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_bConsiderMassOnJump_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConsiderMassOnJump_MetaData), NewProp_bConsiderMassOnJump_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_BI_WantsToSprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_BI_WantsToCrouch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_BI_WantsToJump,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_BI_CanJump,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_BI_JustLandedPostPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_BI_JustJumped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_BI_JustLanded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_BI_IsSprinting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_BI_MaxSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_DefaultHalfHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_DefaultCollisionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_bWantsToSprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_bWantsToCrouch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_bWantsToJump,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_bCanJump,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_bIsSprinting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_SprintAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_CrouchAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_Acceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_MaxSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_StopSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_SprintSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_CrouchWalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_CrouchInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_CrouchedHalfHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_FloorFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_EdgeFrictionScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_EdgeFrictionMinRequiredHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_bUseAltEdgeFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_JumpMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_JumpMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_JumpForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_bApplyJumpSpeedBoost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_SmallJumpSpeedBoostFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_LargeJumpSpeedBoostFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_AirAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_AirControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_WaterControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_SinkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_WaterJumpForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_WaterJumpPush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_bUseAltSwimControls,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_SpeedHardCap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_bImmediateCrouchWalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::NewProp_bConsiderMassOnJump,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGMC_OrganicMovementCmp,
	(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::ClassParams = {
	&UGMC_GoldSrcMovementCmp::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::Class_MetaDataParams), Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGMC_GoldSrcMovementCmp()
{
	if (!Z_Registration_Info_UClass_UGMC_GoldSrcMovementCmp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGMC_GoldSrcMovementCmp.OuterSingleton, Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGMC_GoldSrcMovementCmp.OuterSingleton;
}
template<> GMCCORE_API UClass* StaticClass<UGMC_GoldSrcMovementCmp>()
{
	return UGMC_GoldSrcMovementCmp::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGMC_GoldSrcMovementCmp);
UGMC_GoldSrcMovementCmp::~UGMC_GoldSrcMovementCmp() {}
// End Class UGMC_GoldSrcMovementCmp

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCGoldSrcMovementComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGMC_JumpMode_StaticEnum, TEXT("EGMC_JumpMode"), &Z_Registration_Info_UEnum_EGMC_JumpMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 799403176U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGMC_GoldSrcMovementCmp, UGMC_GoldSrcMovementCmp::StaticClass, TEXT("UGMC_GoldSrcMovementCmp"), &Z_Registration_Info_UClass_UGMC_GoldSrcMovementCmp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGMC_GoldSrcMovementCmp), 4265737811U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCGoldSrcMovementComponent_h_2849568330(TEXT("/Script/GMCCore"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCGoldSrcMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCGoldSrcMovementComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCGoldSrcMovementComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCGoldSrcMovementComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
