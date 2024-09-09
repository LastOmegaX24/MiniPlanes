// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GMCCore/Public/Widgets/GoldSrcConfigMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoldSrcConfigMenu() {}

// Begin Cross Module References
GMCCORE_API UClass* Z_Construct_UClass_UGMC_GoldSrcConfigMenu();
GMCCORE_API UClass* Z_Construct_UClass_UGMC_GoldSrcConfigMenu_NoRegister();
GMCCORE_API UClass* Z_Construct_UClass_UGMC_GoldSrcMovementCmp_NoRegister();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESelectInfo();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UCheckBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UComboBoxString_NoRegister();
UMG_API UClass* Z_Construct_UClass_USpinBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_GMCCore();
// End Cross Module References

// Begin Class UGMC_GoldSrcConfigMenu Function GetLocalGoldSrcMovementComponent
struct Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_GetLocalGoldSrcMovementComponent_Statics
{
	struct GMC_GoldSrcConfigMenu_eventGetLocalGoldSrcMovementComponent_Parms
	{
		UGMC_GoldSrcMovementCmp* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_GetLocalGoldSrcMovementComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcConfigMenu_eventGetLocalGoldSrcMovementComponent_Parms, ReturnValue), Z_Construct_UClass_UGMC_GoldSrcMovementCmp_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_GetLocalGoldSrcMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_GetLocalGoldSrcMovementComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_GetLocalGoldSrcMovementComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_GetLocalGoldSrcMovementComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcConfigMenu, nullptr, "GetLocalGoldSrcMovementComponent", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_GetLocalGoldSrcMovementComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_GetLocalGoldSrcMovementComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_GetLocalGoldSrcMovementComponent_Statics::GMC_GoldSrcConfigMenu_eventGetLocalGoldSrcMovementComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_GetLocalGoldSrcMovementComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_GetLocalGoldSrcMovementComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_GetLocalGoldSrcMovementComponent_Statics::GMC_GoldSrcConfigMenu_eventGetLocalGoldSrcMovementComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_GetLocalGoldSrcMovementComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_GetLocalGoldSrcMovementComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcConfigMenu::execGetLocalGoldSrcMovementComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGMC_GoldSrcMovementCmp**)Z_Param__Result=P_THIS->GetLocalGoldSrcMovementComponent();
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcConfigMenu Function GetLocalGoldSrcMovementComponent

// Begin Class UGMC_GoldSrcConfigMenu Function OnCheckStateChanged_bApplyJumpSpeedBoost
struct Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bApplyJumpSpeedBoost_Statics
{
	struct GMC_GoldSrcConfigMenu_eventOnCheckStateChanged_bApplyJumpSpeedBoost_Parms
	{
		bool bIsChecked;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsChecked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsChecked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bApplyJumpSpeedBoost_Statics::NewProp_bIsChecked_SetBit(void* Obj)
{
	((GMC_GoldSrcConfigMenu_eventOnCheckStateChanged_bApplyJumpSpeedBoost_Parms*)Obj)->bIsChecked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bApplyJumpSpeedBoost_Statics::NewProp_bIsChecked = { "bIsChecked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_GoldSrcConfigMenu_eventOnCheckStateChanged_bApplyJumpSpeedBoost_Parms), &Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bApplyJumpSpeedBoost_Statics::NewProp_bIsChecked_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bApplyJumpSpeedBoost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bApplyJumpSpeedBoost_Statics::NewProp_bIsChecked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bApplyJumpSpeedBoost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bApplyJumpSpeedBoost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcConfigMenu, nullptr, "OnCheckStateChanged_bApplyJumpSpeedBoost", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bApplyJumpSpeedBoost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bApplyJumpSpeedBoost_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bApplyJumpSpeedBoost_Statics::GMC_GoldSrcConfigMenu_eventOnCheckStateChanged_bApplyJumpSpeedBoost_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bApplyJumpSpeedBoost_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bApplyJumpSpeedBoost_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bApplyJumpSpeedBoost_Statics::GMC_GoldSrcConfigMenu_eventOnCheckStateChanged_bApplyJumpSpeedBoost_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bApplyJumpSpeedBoost()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bApplyJumpSpeedBoost_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcConfigMenu::execOnCheckStateChanged_bApplyJumpSpeedBoost)
{
	P_GET_UBOOL(Z_Param_bIsChecked);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCheckStateChanged_bApplyJumpSpeedBoost(Z_Param_bIsChecked);
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcConfigMenu Function OnCheckStateChanged_bApplyJumpSpeedBoost

// Begin Class UGMC_GoldSrcConfigMenu Function OnCheckStateChanged_bConsiderMassOnJump
struct Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bConsiderMassOnJump_Statics
{
	struct GMC_GoldSrcConfigMenu_eventOnCheckStateChanged_bConsiderMassOnJump_Parms
	{
		bool bIsChecked;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsChecked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsChecked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bConsiderMassOnJump_Statics::NewProp_bIsChecked_SetBit(void* Obj)
{
	((GMC_GoldSrcConfigMenu_eventOnCheckStateChanged_bConsiderMassOnJump_Parms*)Obj)->bIsChecked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bConsiderMassOnJump_Statics::NewProp_bIsChecked = { "bIsChecked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_GoldSrcConfigMenu_eventOnCheckStateChanged_bConsiderMassOnJump_Parms), &Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bConsiderMassOnJump_Statics::NewProp_bIsChecked_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bConsiderMassOnJump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bConsiderMassOnJump_Statics::NewProp_bIsChecked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bConsiderMassOnJump_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bConsiderMassOnJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcConfigMenu, nullptr, "OnCheckStateChanged_bConsiderMassOnJump", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bConsiderMassOnJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bConsiderMassOnJump_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bConsiderMassOnJump_Statics::GMC_GoldSrcConfigMenu_eventOnCheckStateChanged_bConsiderMassOnJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bConsiderMassOnJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bConsiderMassOnJump_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bConsiderMassOnJump_Statics::GMC_GoldSrcConfigMenu_eventOnCheckStateChanged_bConsiderMassOnJump_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bConsiderMassOnJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bConsiderMassOnJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcConfigMenu::execOnCheckStateChanged_bConsiderMassOnJump)
{
	P_GET_UBOOL(Z_Param_bIsChecked);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCheckStateChanged_bConsiderMassOnJump(Z_Param_bIsChecked);
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcConfigMenu Function OnCheckStateChanged_bConsiderMassOnJump

// Begin Class UGMC_GoldSrcConfigMenu Function OnCheckStateChanged_bUseAltEdgeFriction
struct Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bUseAltEdgeFriction_Statics
{
	struct GMC_GoldSrcConfigMenu_eventOnCheckStateChanged_bUseAltEdgeFriction_Parms
	{
		bool bIsChecked;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsChecked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsChecked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bUseAltEdgeFriction_Statics::NewProp_bIsChecked_SetBit(void* Obj)
{
	((GMC_GoldSrcConfigMenu_eventOnCheckStateChanged_bUseAltEdgeFriction_Parms*)Obj)->bIsChecked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bUseAltEdgeFriction_Statics::NewProp_bIsChecked = { "bIsChecked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_GoldSrcConfigMenu_eventOnCheckStateChanged_bUseAltEdgeFriction_Parms), &Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bUseAltEdgeFriction_Statics::NewProp_bIsChecked_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bUseAltEdgeFriction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bUseAltEdgeFriction_Statics::NewProp_bIsChecked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bUseAltEdgeFriction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bUseAltEdgeFriction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcConfigMenu, nullptr, "OnCheckStateChanged_bUseAltEdgeFriction", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bUseAltEdgeFriction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bUseAltEdgeFriction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bUseAltEdgeFriction_Statics::GMC_GoldSrcConfigMenu_eventOnCheckStateChanged_bUseAltEdgeFriction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bUseAltEdgeFriction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bUseAltEdgeFriction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bUseAltEdgeFriction_Statics::GMC_GoldSrcConfigMenu_eventOnCheckStateChanged_bUseAltEdgeFriction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bUseAltEdgeFriction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bUseAltEdgeFriction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcConfigMenu::execOnCheckStateChanged_bUseAltEdgeFriction)
{
	P_GET_UBOOL(Z_Param_bIsChecked);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCheckStateChanged_bUseAltEdgeFriction(Z_Param_bIsChecked);
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcConfigMenu Function OnCheckStateChanged_bUseAltEdgeFriction

// Begin Class UGMC_GoldSrcConfigMenu Function OnCheckStateChanged_bUseAltSwimControls
struct Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bUseAltSwimControls_Statics
{
	struct GMC_GoldSrcConfigMenu_eventOnCheckStateChanged_bUseAltSwimControls_Parms
	{
		bool bIsChecked;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsChecked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsChecked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bUseAltSwimControls_Statics::NewProp_bIsChecked_SetBit(void* Obj)
{
	((GMC_GoldSrcConfigMenu_eventOnCheckStateChanged_bUseAltSwimControls_Parms*)Obj)->bIsChecked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bUseAltSwimControls_Statics::NewProp_bIsChecked = { "bIsChecked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_GoldSrcConfigMenu_eventOnCheckStateChanged_bUseAltSwimControls_Parms), &Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bUseAltSwimControls_Statics::NewProp_bIsChecked_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bUseAltSwimControls_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bUseAltSwimControls_Statics::NewProp_bIsChecked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bUseAltSwimControls_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bUseAltSwimControls_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcConfigMenu, nullptr, "OnCheckStateChanged_bUseAltSwimControls", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bUseAltSwimControls_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bUseAltSwimControls_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bUseAltSwimControls_Statics::GMC_GoldSrcConfigMenu_eventOnCheckStateChanged_bUseAltSwimControls_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bUseAltSwimControls_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bUseAltSwimControls_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bUseAltSwimControls_Statics::GMC_GoldSrcConfigMenu_eventOnCheckStateChanged_bUseAltSwimControls_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bUseAltSwimControls()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bUseAltSwimControls_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcConfigMenu::execOnCheckStateChanged_bUseAltSwimControls)
{
	P_GET_UBOOL(Z_Param_bIsChecked);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCheckStateChanged_bUseAltSwimControls(Z_Param_bIsChecked);
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcConfigMenu Function OnCheckStateChanged_bUseAltSwimControls

// Begin Class UGMC_GoldSrcConfigMenu Function OnClicked_UpdateArchetype
struct Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnClicked_UpdateArchetype_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnClicked_UpdateArchetype_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcConfigMenu, nullptr, "OnClicked_UpdateArchetype", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnClicked_UpdateArchetype_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnClicked_UpdateArchetype_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnClicked_UpdateArchetype()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnClicked_UpdateArchetype_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcConfigMenu::execOnClicked_UpdateArchetype)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnClicked_UpdateArchetype();
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcConfigMenu Function OnClicked_UpdateArchetype

// Begin Class UGMC_GoldSrcConfigMenu Function OnSelectionChanged_JumpMode
struct Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnSelectionChanged_JumpMode_Statics
{
	struct GMC_GoldSrcConfigMenu_eventOnSelectionChanged_JumpMode_Parms
	{
		FString SelectedItem;
		TEnumAsByte<ESelectInfo::Type> SelectionType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedItem;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnSelectionChanged_JumpMode_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcConfigMenu_eventOnSelectionChanged_JumpMode_Parms, SelectedItem), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnSelectionChanged_JumpMode_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcConfigMenu_eventOnSelectionChanged_JumpMode_Parms, SelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(0, nullptr) }; // 4040429206
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnSelectionChanged_JumpMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnSelectionChanged_JumpMode_Statics::NewProp_SelectedItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnSelectionChanged_JumpMode_Statics::NewProp_SelectionType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnSelectionChanged_JumpMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnSelectionChanged_JumpMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcConfigMenu, nullptr, "OnSelectionChanged_JumpMode", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnSelectionChanged_JumpMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnSelectionChanged_JumpMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnSelectionChanged_JumpMode_Statics::GMC_GoldSrcConfigMenu_eventOnSelectionChanged_JumpMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnSelectionChanged_JumpMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnSelectionChanged_JumpMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnSelectionChanged_JumpMode_Statics::GMC_GoldSrcConfigMenu_eventOnSelectionChanged_JumpMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnSelectionChanged_JumpMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnSelectionChanged_JumpMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcConfigMenu::execOnSelectionChanged_JumpMode)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SelectedItem);
	P_GET_PROPERTY(FByteProperty,Z_Param_SelectionType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSelectionChanged_JumpMode(Z_Param_SelectedItem,ESelectInfo::Type(Z_Param_SelectionType));
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcConfigMenu Function OnSelectionChanged_JumpMode

// Begin Class UGMC_GoldSrcConfigMenu Function OnValueChanged_Acceleration
struct Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_Acceleration_Statics
{
	struct GMC_GoldSrcConfigMenu_eventOnValueChanged_Acceleration_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_Acceleration_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcConfigMenu_eventOnValueChanged_Acceleration_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_Acceleration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_Acceleration_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_Acceleration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_Acceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcConfigMenu, nullptr, "OnValueChanged_Acceleration", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_Acceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_Acceleration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_Acceleration_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_Acceleration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_Acceleration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_Acceleration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_Acceleration_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_Acceleration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_Acceleration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_Acceleration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcConfigMenu::execOnValueChanged_Acceleration)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnValueChanged_Acceleration(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcConfigMenu Function OnValueChanged_Acceleration

// Begin Class UGMC_GoldSrcConfigMenu Function OnValueChanged_AirAcceleration
struct Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_AirAcceleration_Statics
{
	struct GMC_GoldSrcConfigMenu_eventOnValueChanged_AirAcceleration_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_AirAcceleration_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcConfigMenu_eventOnValueChanged_AirAcceleration_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_AirAcceleration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_AirAcceleration_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_AirAcceleration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_AirAcceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcConfigMenu, nullptr, "OnValueChanged_AirAcceleration", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_AirAcceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_AirAcceleration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_AirAcceleration_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_AirAcceleration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_AirAcceleration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_AirAcceleration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_AirAcceleration_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_AirAcceleration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_AirAcceleration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_AirAcceleration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcConfigMenu::execOnValueChanged_AirAcceleration)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnValueChanged_AirAcceleration(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcConfigMenu Function OnValueChanged_AirAcceleration

// Begin Class UGMC_GoldSrcConfigMenu Function OnValueChanged_AirControl
struct Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_AirControl_Statics
{
	struct GMC_GoldSrcConfigMenu_eventOnValueChanged_AirControl_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_AirControl_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcConfigMenu_eventOnValueChanged_AirControl_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_AirControl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_AirControl_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_AirControl_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_AirControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcConfigMenu, nullptr, "OnValueChanged_AirControl", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_AirControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_AirControl_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_AirControl_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_AirControl_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_AirControl_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_AirControl_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_AirControl_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_AirControl_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_AirControl()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_AirControl_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcConfigMenu::execOnValueChanged_AirControl)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnValueChanged_AirControl(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcConfigMenu Function OnValueChanged_AirControl

// Begin Class UGMC_GoldSrcConfigMenu Function OnValueChanged_CrouchedHalfHeight
struct Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchedHalfHeight_Statics
{
	struct GMC_GoldSrcConfigMenu_eventOnValueChanged_CrouchedHalfHeight_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchedHalfHeight_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcConfigMenu_eventOnValueChanged_CrouchedHalfHeight_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchedHalfHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchedHalfHeight_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchedHalfHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchedHalfHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcConfigMenu, nullptr, "OnValueChanged_CrouchedHalfHeight", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchedHalfHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchedHalfHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchedHalfHeight_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_CrouchedHalfHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchedHalfHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchedHalfHeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchedHalfHeight_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_CrouchedHalfHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchedHalfHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchedHalfHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcConfigMenu::execOnValueChanged_CrouchedHalfHeight)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnValueChanged_CrouchedHalfHeight(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcConfigMenu Function OnValueChanged_CrouchedHalfHeight

// Begin Class UGMC_GoldSrcConfigMenu Function OnValueChanged_CrouchInterpSpeed
struct Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchInterpSpeed_Statics
{
	struct GMC_GoldSrcConfigMenu_eventOnValueChanged_CrouchInterpSpeed_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchInterpSpeed_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcConfigMenu_eventOnValueChanged_CrouchInterpSpeed_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchInterpSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchInterpSpeed_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchInterpSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchInterpSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcConfigMenu, nullptr, "OnValueChanged_CrouchInterpSpeed", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchInterpSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchInterpSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchInterpSpeed_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_CrouchInterpSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchInterpSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchInterpSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchInterpSpeed_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_CrouchInterpSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchInterpSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchInterpSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcConfigMenu::execOnValueChanged_CrouchInterpSpeed)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnValueChanged_CrouchInterpSpeed(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcConfigMenu Function OnValueChanged_CrouchInterpSpeed

// Begin Class UGMC_GoldSrcConfigMenu Function OnValueChanged_CrouchWalkSpeed
struct Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchWalkSpeed_Statics
{
	struct GMC_GoldSrcConfigMenu_eventOnValueChanged_CrouchWalkSpeed_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchWalkSpeed_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcConfigMenu_eventOnValueChanged_CrouchWalkSpeed_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchWalkSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchWalkSpeed_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchWalkSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchWalkSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcConfigMenu, nullptr, "OnValueChanged_CrouchWalkSpeed", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchWalkSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchWalkSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchWalkSpeed_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_CrouchWalkSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchWalkSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchWalkSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchWalkSpeed_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_CrouchWalkSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchWalkSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchWalkSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcConfigMenu::execOnValueChanged_CrouchWalkSpeed)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnValueChanged_CrouchWalkSpeed(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcConfigMenu Function OnValueChanged_CrouchWalkSpeed

// Begin Class UGMC_GoldSrcConfigMenu Function OnValueChanged_EdgeFrictionMinRequiredHeight
struct Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_EdgeFrictionMinRequiredHeight_Statics
{
	struct GMC_GoldSrcConfigMenu_eventOnValueChanged_EdgeFrictionMinRequiredHeight_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_EdgeFrictionMinRequiredHeight_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcConfigMenu_eventOnValueChanged_EdgeFrictionMinRequiredHeight_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_EdgeFrictionMinRequiredHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_EdgeFrictionMinRequiredHeight_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_EdgeFrictionMinRequiredHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_EdgeFrictionMinRequiredHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcConfigMenu, nullptr, "OnValueChanged_EdgeFrictionMinRequiredHeight", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_EdgeFrictionMinRequiredHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_EdgeFrictionMinRequiredHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_EdgeFrictionMinRequiredHeight_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_EdgeFrictionMinRequiredHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_EdgeFrictionMinRequiredHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_EdgeFrictionMinRequiredHeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_EdgeFrictionMinRequiredHeight_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_EdgeFrictionMinRequiredHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_EdgeFrictionMinRequiredHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_EdgeFrictionMinRequiredHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcConfigMenu::execOnValueChanged_EdgeFrictionMinRequiredHeight)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnValueChanged_EdgeFrictionMinRequiredHeight(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcConfigMenu Function OnValueChanged_EdgeFrictionMinRequiredHeight

// Begin Class UGMC_GoldSrcConfigMenu Function OnValueChanged_EdgeFrictionScale
struct Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_EdgeFrictionScale_Statics
{
	struct GMC_GoldSrcConfigMenu_eventOnValueChanged_EdgeFrictionScale_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_EdgeFrictionScale_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcConfigMenu_eventOnValueChanged_EdgeFrictionScale_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_EdgeFrictionScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_EdgeFrictionScale_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_EdgeFrictionScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_EdgeFrictionScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcConfigMenu, nullptr, "OnValueChanged_EdgeFrictionScale", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_EdgeFrictionScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_EdgeFrictionScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_EdgeFrictionScale_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_EdgeFrictionScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_EdgeFrictionScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_EdgeFrictionScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_EdgeFrictionScale_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_EdgeFrictionScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_EdgeFrictionScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_EdgeFrictionScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcConfigMenu::execOnValueChanged_EdgeFrictionScale)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnValueChanged_EdgeFrictionScale(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcConfigMenu Function OnValueChanged_EdgeFrictionScale

// Begin Class UGMC_GoldSrcConfigMenu Function OnValueChanged_FloorFriction
struct Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_FloorFriction_Statics
{
	struct GMC_GoldSrcConfigMenu_eventOnValueChanged_FloorFriction_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_FloorFriction_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcConfigMenu_eventOnValueChanged_FloorFriction_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_FloorFriction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_FloorFriction_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_FloorFriction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_FloorFriction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcConfigMenu, nullptr, "OnValueChanged_FloorFriction", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_FloorFriction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_FloorFriction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_FloorFriction_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_FloorFriction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_FloorFriction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_FloorFriction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_FloorFriction_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_FloorFriction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_FloorFriction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_FloorFriction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcConfigMenu::execOnValueChanged_FloorFriction)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnValueChanged_FloorFriction(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcConfigMenu Function OnValueChanged_FloorFriction

// Begin Class UGMC_GoldSrcConfigMenu Function OnValueChanged_GravityScale
struct Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_GravityScale_Statics
{
	struct GMC_GoldSrcConfigMenu_eventOnValueChanged_GravityScale_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_GravityScale_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcConfigMenu_eventOnValueChanged_GravityScale_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_GravityScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_GravityScale_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_GravityScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_GravityScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcConfigMenu, nullptr, "OnValueChanged_GravityScale", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_GravityScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_GravityScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_GravityScale_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_GravityScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_GravityScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_GravityScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_GravityScale_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_GravityScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_GravityScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_GravityScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcConfigMenu::execOnValueChanged_GravityScale)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnValueChanged_GravityScale(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcConfigMenu Function OnValueChanged_GravityScale

// Begin Class UGMC_GoldSrcConfigMenu Function OnValueChanged_JumpForce
struct Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_JumpForce_Statics
{
	struct GMC_GoldSrcConfigMenu_eventOnValueChanged_JumpForce_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_JumpForce_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcConfigMenu_eventOnValueChanged_JumpForce_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_JumpForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_JumpForce_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_JumpForce_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_JumpForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcConfigMenu, nullptr, "OnValueChanged_JumpForce", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_JumpForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_JumpForce_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_JumpForce_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_JumpForce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_JumpForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_JumpForce_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_JumpForce_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_JumpForce_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_JumpForce()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_JumpForce_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcConfigMenu::execOnValueChanged_JumpForce)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnValueChanged_JumpForce(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcConfigMenu Function OnValueChanged_JumpForce

// Begin Class UGMC_GoldSrcConfigMenu Function OnValueChanged_LargeJumpSpeedBoostFactor
struct Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_LargeJumpSpeedBoostFactor_Statics
{
	struct GMC_GoldSrcConfigMenu_eventOnValueChanged_LargeJumpSpeedBoostFactor_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_LargeJumpSpeedBoostFactor_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcConfigMenu_eventOnValueChanged_LargeJumpSpeedBoostFactor_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_LargeJumpSpeedBoostFactor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_LargeJumpSpeedBoostFactor_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_LargeJumpSpeedBoostFactor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_LargeJumpSpeedBoostFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcConfigMenu, nullptr, "OnValueChanged_LargeJumpSpeedBoostFactor", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_LargeJumpSpeedBoostFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_LargeJumpSpeedBoostFactor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_LargeJumpSpeedBoostFactor_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_LargeJumpSpeedBoostFactor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_LargeJumpSpeedBoostFactor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_LargeJumpSpeedBoostFactor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_LargeJumpSpeedBoostFactor_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_LargeJumpSpeedBoostFactor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_LargeJumpSpeedBoostFactor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_LargeJumpSpeedBoostFactor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcConfigMenu::execOnValueChanged_LargeJumpSpeedBoostFactor)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnValueChanged_LargeJumpSpeedBoostFactor(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcConfigMenu Function OnValueChanged_LargeJumpSpeedBoostFactor

// Begin Class UGMC_GoldSrcConfigMenu Function OnValueChanged_MaxGroundedVelocityZ
struct Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_MaxGroundedVelocityZ_Statics
{
	struct GMC_GoldSrcConfigMenu_eventOnValueChanged_MaxGroundedVelocityZ_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_MaxGroundedVelocityZ_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcConfigMenu_eventOnValueChanged_MaxGroundedVelocityZ_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_MaxGroundedVelocityZ_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_MaxGroundedVelocityZ_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_MaxGroundedVelocityZ_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_MaxGroundedVelocityZ_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcConfigMenu, nullptr, "OnValueChanged_MaxGroundedVelocityZ", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_MaxGroundedVelocityZ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_MaxGroundedVelocityZ_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_MaxGroundedVelocityZ_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_MaxGroundedVelocityZ_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_MaxGroundedVelocityZ_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_MaxGroundedVelocityZ_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_MaxGroundedVelocityZ_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_MaxGroundedVelocityZ_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_MaxGroundedVelocityZ()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_MaxGroundedVelocityZ_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcConfigMenu::execOnValueChanged_MaxGroundedVelocityZ)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnValueChanged_MaxGroundedVelocityZ(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcConfigMenu Function OnValueChanged_MaxGroundedVelocityZ

// Begin Class UGMC_GoldSrcConfigMenu Function OnValueChanged_MaxSpeed
struct Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_MaxSpeed_Statics
{
	struct GMC_GoldSrcConfigMenu_eventOnValueChanged_MaxSpeed_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_MaxSpeed_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcConfigMenu_eventOnValueChanged_MaxSpeed_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_MaxSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_MaxSpeed_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_MaxSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_MaxSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcConfigMenu, nullptr, "OnValueChanged_MaxSpeed", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_MaxSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_MaxSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_MaxSpeed_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_MaxSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_MaxSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_MaxSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_MaxSpeed_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_MaxSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_MaxSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_MaxSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcConfigMenu::execOnValueChanged_MaxSpeed)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnValueChanged_MaxSpeed(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcConfigMenu Function OnValueChanged_MaxSpeed

// Begin Class UGMC_GoldSrcConfigMenu Function OnValueChanged_SinkSpeed
struct Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SinkSpeed_Statics
{
	struct GMC_GoldSrcConfigMenu_eventOnValueChanged_SinkSpeed_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SinkSpeed_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcConfigMenu_eventOnValueChanged_SinkSpeed_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SinkSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SinkSpeed_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SinkSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SinkSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcConfigMenu, nullptr, "OnValueChanged_SinkSpeed", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SinkSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SinkSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SinkSpeed_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_SinkSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SinkSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SinkSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SinkSpeed_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_SinkSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SinkSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SinkSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcConfigMenu::execOnValueChanged_SinkSpeed)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnValueChanged_SinkSpeed(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcConfigMenu Function OnValueChanged_SinkSpeed

// Begin Class UGMC_GoldSrcConfigMenu Function OnValueChanged_SmallJumpSpeedBoostFactor
struct Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SmallJumpSpeedBoostFactor_Statics
{
	struct GMC_GoldSrcConfigMenu_eventOnValueChanged_SmallJumpSpeedBoostFactor_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SmallJumpSpeedBoostFactor_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcConfigMenu_eventOnValueChanged_SmallJumpSpeedBoostFactor_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SmallJumpSpeedBoostFactor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SmallJumpSpeedBoostFactor_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SmallJumpSpeedBoostFactor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SmallJumpSpeedBoostFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcConfigMenu, nullptr, "OnValueChanged_SmallJumpSpeedBoostFactor", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SmallJumpSpeedBoostFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SmallJumpSpeedBoostFactor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SmallJumpSpeedBoostFactor_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_SmallJumpSpeedBoostFactor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SmallJumpSpeedBoostFactor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SmallJumpSpeedBoostFactor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SmallJumpSpeedBoostFactor_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_SmallJumpSpeedBoostFactor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SmallJumpSpeedBoostFactor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SmallJumpSpeedBoostFactor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcConfigMenu::execOnValueChanged_SmallJumpSpeedBoostFactor)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnValueChanged_SmallJumpSpeedBoostFactor(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcConfigMenu Function OnValueChanged_SmallJumpSpeedBoostFactor

// Begin Class UGMC_GoldSrcConfigMenu Function OnValueChanged_SpeedHardCap
struct Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SpeedHardCap_Statics
{
	struct GMC_GoldSrcConfigMenu_eventOnValueChanged_SpeedHardCap_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SpeedHardCap_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcConfigMenu_eventOnValueChanged_SpeedHardCap_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SpeedHardCap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SpeedHardCap_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SpeedHardCap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SpeedHardCap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcConfigMenu, nullptr, "OnValueChanged_SpeedHardCap", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SpeedHardCap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SpeedHardCap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SpeedHardCap_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_SpeedHardCap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SpeedHardCap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SpeedHardCap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SpeedHardCap_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_SpeedHardCap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SpeedHardCap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SpeedHardCap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcConfigMenu::execOnValueChanged_SpeedHardCap)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnValueChanged_SpeedHardCap(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcConfigMenu Function OnValueChanged_SpeedHardCap

// Begin Class UGMC_GoldSrcConfigMenu Function OnValueChanged_SprintSpeed
struct Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SprintSpeed_Statics
{
	struct GMC_GoldSrcConfigMenu_eventOnValueChanged_SprintSpeed_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SprintSpeed_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcConfigMenu_eventOnValueChanged_SprintSpeed_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SprintSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SprintSpeed_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SprintSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SprintSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcConfigMenu, nullptr, "OnValueChanged_SprintSpeed", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SprintSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SprintSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SprintSpeed_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_SprintSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SprintSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SprintSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SprintSpeed_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_SprintSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SprintSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SprintSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcConfigMenu::execOnValueChanged_SprintSpeed)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnValueChanged_SprintSpeed(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcConfigMenu Function OnValueChanged_SprintSpeed

// Begin Class UGMC_GoldSrcConfigMenu Function OnValueChanged_StopSpeed
struct Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_StopSpeed_Statics
{
	struct GMC_GoldSrcConfigMenu_eventOnValueChanged_StopSpeed_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_StopSpeed_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcConfigMenu_eventOnValueChanged_StopSpeed_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_StopSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_StopSpeed_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_StopSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_StopSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcConfigMenu, nullptr, "OnValueChanged_StopSpeed", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_StopSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_StopSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_StopSpeed_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_StopSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_StopSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_StopSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_StopSpeed_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_StopSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_StopSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_StopSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcConfigMenu::execOnValueChanged_StopSpeed)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnValueChanged_StopSpeed(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcConfigMenu Function OnValueChanged_StopSpeed

// Begin Class UGMC_GoldSrcConfigMenu Function OnValueChanged_WaterControl
struct Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterControl_Statics
{
	struct GMC_GoldSrcConfigMenu_eventOnValueChanged_WaterControl_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterControl_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcConfigMenu_eventOnValueChanged_WaterControl_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterControl_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterControl_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterControl_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcConfigMenu, nullptr, "OnValueChanged_WaterControl", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterControl_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterControl_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_WaterControl_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterControl_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterControl_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterControl_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_WaterControl_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterControl()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterControl_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcConfigMenu::execOnValueChanged_WaterControl)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnValueChanged_WaterControl(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcConfigMenu Function OnValueChanged_WaterControl

// Begin Class UGMC_GoldSrcConfigMenu Function OnValueChanged_WaterJumpForce
struct Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterJumpForce_Statics
{
	struct GMC_GoldSrcConfigMenu_eventOnValueChanged_WaterJumpForce_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterJumpForce_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcConfigMenu_eventOnValueChanged_WaterJumpForce_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterJumpForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterJumpForce_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterJumpForce_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterJumpForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcConfigMenu, nullptr, "OnValueChanged_WaterJumpForce", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterJumpForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterJumpForce_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterJumpForce_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_WaterJumpForce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterJumpForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterJumpForce_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterJumpForce_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_WaterJumpForce_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterJumpForce()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterJumpForce_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcConfigMenu::execOnValueChanged_WaterJumpForce)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnValueChanged_WaterJumpForce(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcConfigMenu Function OnValueChanged_WaterJumpForce

// Begin Class UGMC_GoldSrcConfigMenu Function OnValueChanged_WaterJumpPush
struct Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterJumpPush_Statics
{
	struct GMC_GoldSrcConfigMenu_eventOnValueChanged_WaterJumpPush_Parms
	{
		float InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterJumpPush_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_GoldSrcConfigMenu_eventOnValueChanged_WaterJumpPush_Parms, InValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterJumpPush_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterJumpPush_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterJumpPush_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterJumpPush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcConfigMenu, nullptr, "OnValueChanged_WaterJumpPush", nullptr, nullptr, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterJumpPush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterJumpPush_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterJumpPush_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_WaterJumpPush_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterJumpPush_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterJumpPush_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterJumpPush_Statics::GMC_GoldSrcConfigMenu_eventOnValueChanged_WaterJumpPush_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterJumpPush()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterJumpPush_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcConfigMenu::execOnValueChanged_WaterJumpPush)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnValueChanged_WaterJumpPush(Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcConfigMenu Function OnValueChanged_WaterJumpPush

// Begin Class UGMC_GoldSrcConfigMenu Function UpdateArchetypeValues
struct Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_UpdateArchetypeValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_UpdateArchetypeValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcConfigMenu, nullptr, "UpdateArchetypeValues", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_UpdateArchetypeValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_UpdateArchetypeValues_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_UpdateArchetypeValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_UpdateArchetypeValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcConfigMenu::execUpdateArchetypeValues)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateArchetypeValues();
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcConfigMenu Function UpdateArchetypeValues

// Begin Class UGMC_GoldSrcConfigMenu Function UpdateInterfaceValues
struct Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_UpdateInterfaceValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_UpdateInterfaceValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_GoldSrcConfigMenu, nullptr, "UpdateInterfaceValues", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_UpdateInterfaceValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_UpdateInterfaceValues_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_UpdateInterfaceValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_UpdateInterfaceValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_GoldSrcConfigMenu::execUpdateInterfaceValues)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateInterfaceValues();
	P_NATIVE_END;
}
// End Class UGMC_GoldSrcConfigMenu Function UpdateInterfaceValues

// Begin Class UGMC_GoldSrcConfigMenu
void UGMC_GoldSrcConfigMenu::StaticRegisterNativesUGMC_GoldSrcConfigMenu()
{
	UClass* Class = UGMC_GoldSrcConfigMenu::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetLocalGoldSrcMovementComponent", &UGMC_GoldSrcConfigMenu::execGetLocalGoldSrcMovementComponent },
		{ "OnCheckStateChanged_bApplyJumpSpeedBoost", &UGMC_GoldSrcConfigMenu::execOnCheckStateChanged_bApplyJumpSpeedBoost },
		{ "OnCheckStateChanged_bConsiderMassOnJump", &UGMC_GoldSrcConfigMenu::execOnCheckStateChanged_bConsiderMassOnJump },
		{ "OnCheckStateChanged_bUseAltEdgeFriction", &UGMC_GoldSrcConfigMenu::execOnCheckStateChanged_bUseAltEdgeFriction },
		{ "OnCheckStateChanged_bUseAltSwimControls", &UGMC_GoldSrcConfigMenu::execOnCheckStateChanged_bUseAltSwimControls },
		{ "OnClicked_UpdateArchetype", &UGMC_GoldSrcConfigMenu::execOnClicked_UpdateArchetype },
		{ "OnSelectionChanged_JumpMode", &UGMC_GoldSrcConfigMenu::execOnSelectionChanged_JumpMode },
		{ "OnValueChanged_Acceleration", &UGMC_GoldSrcConfigMenu::execOnValueChanged_Acceleration },
		{ "OnValueChanged_AirAcceleration", &UGMC_GoldSrcConfigMenu::execOnValueChanged_AirAcceleration },
		{ "OnValueChanged_AirControl", &UGMC_GoldSrcConfigMenu::execOnValueChanged_AirControl },
		{ "OnValueChanged_CrouchedHalfHeight", &UGMC_GoldSrcConfigMenu::execOnValueChanged_CrouchedHalfHeight },
		{ "OnValueChanged_CrouchInterpSpeed", &UGMC_GoldSrcConfigMenu::execOnValueChanged_CrouchInterpSpeed },
		{ "OnValueChanged_CrouchWalkSpeed", &UGMC_GoldSrcConfigMenu::execOnValueChanged_CrouchWalkSpeed },
		{ "OnValueChanged_EdgeFrictionMinRequiredHeight", &UGMC_GoldSrcConfigMenu::execOnValueChanged_EdgeFrictionMinRequiredHeight },
		{ "OnValueChanged_EdgeFrictionScale", &UGMC_GoldSrcConfigMenu::execOnValueChanged_EdgeFrictionScale },
		{ "OnValueChanged_FloorFriction", &UGMC_GoldSrcConfigMenu::execOnValueChanged_FloorFriction },
		{ "OnValueChanged_GravityScale", &UGMC_GoldSrcConfigMenu::execOnValueChanged_GravityScale },
		{ "OnValueChanged_JumpForce", &UGMC_GoldSrcConfigMenu::execOnValueChanged_JumpForce },
		{ "OnValueChanged_LargeJumpSpeedBoostFactor", &UGMC_GoldSrcConfigMenu::execOnValueChanged_LargeJumpSpeedBoostFactor },
		{ "OnValueChanged_MaxGroundedVelocityZ", &UGMC_GoldSrcConfigMenu::execOnValueChanged_MaxGroundedVelocityZ },
		{ "OnValueChanged_MaxSpeed", &UGMC_GoldSrcConfigMenu::execOnValueChanged_MaxSpeed },
		{ "OnValueChanged_SinkSpeed", &UGMC_GoldSrcConfigMenu::execOnValueChanged_SinkSpeed },
		{ "OnValueChanged_SmallJumpSpeedBoostFactor", &UGMC_GoldSrcConfigMenu::execOnValueChanged_SmallJumpSpeedBoostFactor },
		{ "OnValueChanged_SpeedHardCap", &UGMC_GoldSrcConfigMenu::execOnValueChanged_SpeedHardCap },
		{ "OnValueChanged_SprintSpeed", &UGMC_GoldSrcConfigMenu::execOnValueChanged_SprintSpeed },
		{ "OnValueChanged_StopSpeed", &UGMC_GoldSrcConfigMenu::execOnValueChanged_StopSpeed },
		{ "OnValueChanged_WaterControl", &UGMC_GoldSrcConfigMenu::execOnValueChanged_WaterControl },
		{ "OnValueChanged_WaterJumpForce", &UGMC_GoldSrcConfigMenu::execOnValueChanged_WaterJumpForce },
		{ "OnValueChanged_WaterJumpPush", &UGMC_GoldSrcConfigMenu::execOnValueChanged_WaterJumpPush },
		{ "UpdateArchetypeValues", &UGMC_GoldSrcConfigMenu::execUpdateArchetypeValues },
		{ "UpdateInterfaceValues", &UGMC_GoldSrcConfigMenu::execUpdateInterfaceValues },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGMC_GoldSrcConfigMenu);
UClass* Z_Construct_UClass_UGMC_GoldSrcConfigMenu_NoRegister()
{
	return UGMC_GoldSrcConfigMenu::StaticClass();
}
struct Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/// Provides the bindings for a widget Blueprint which allows for the runtime configuration of UGMC_GoldSrcMovementCmp.\n" },
		{ "IncludePath", "Widgets/GoldSrcConfigMenu.h" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
		{ "ToolTip", "Provides the bindings for a widget Blueprint which allows for the runtime configuration of UGMC_GoldSrcMovementCmp." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_UpdateArchetype_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "Comment", "/// Update Archetype\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
		{ "ToolTip", "Update Archetype" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_UpdateArchetype_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_Acceleration_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "Comment", "/// Category: On Ground\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
		{ "ToolTip", "Category: On Ground" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_Acceleration_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MaxSpeed_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MaxSpeed_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_StopSpeed_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_StopSpeed_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_SprintSpeed_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_SprintSpeed_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_CrouchWalkSpeed_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_CrouchWalkSpeed_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_CrouchInterpSpeed_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_CrouchInterpSpeed_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_CrouchedHalfHeight_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_CrouchedHalfHeight_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_FloorFriction_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_FloorFriction_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_EdgeFrictionScale_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_EdgeFrictionScale_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_EdgeFrictionMinRequiredHeight_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_EdgeFrictionMinRequiredHeight_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_bUseAltEdgeFriction_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_bUseAltEdgeFriction_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_JumpMode_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_JumpMode_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_JumpForce_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_JumpForce_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MaxGroundedVelocityZ_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MaxGroundedVelocityZ_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_bApplyJumpSpeedBoost_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_bApplyJumpSpeedBoost_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_SmallJumpSpeedBoostFactor_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_SmallJumpSpeedBoostFactor_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_LargeJumpSpeedBoostFactor_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_LargeJumpSpeedBoostFactor_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_AirAcceleration_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "Comment", "/// Category: In Air\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
		{ "ToolTip", "Category: In Air" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_AirAcceleration_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_AirControl_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_AirControl_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_WaterControl_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "Comment", "/// Category: In Water\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
		{ "ToolTip", "Category: In Water" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_WaterControl_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_SinkSpeed_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_SinkSpeed_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_WaterJumpForce_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_WaterJumpForce_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_WaterJumpPush_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_WaterJumpPush_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_bUseAltSwimControls_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_bUseAltSwimControls_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_SpeedHardCap_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "Comment", "/// Category: Advanced\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
		{ "ToolTip", "Category: Advanced" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_SpeedHardCap_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_bConsiderMassOnJump_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_bConsiderMassOnJump_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_GravityScale_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "Comment", "/// Other\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
		{ "ToolTip", "Other" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_GravityScale_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GoldSrcConfigMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_UpdateArchetype;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_UpdateArchetype;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_Acceleration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value_Acceleration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_MaxSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value_MaxSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_StopSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value_StopSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_SprintSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value_SprintSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_CrouchWalkSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value_CrouchWalkSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_CrouchInterpSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value_CrouchInterpSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_CrouchedHalfHeight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value_CrouchedHalfHeight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_FloorFriction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value_FloorFriction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_EdgeFrictionScale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value_EdgeFrictionScale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_EdgeFrictionMinRequiredHeight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value_EdgeFrictionMinRequiredHeight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_bUseAltEdgeFriction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value_bUseAltEdgeFriction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_JumpMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value_JumpMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_JumpForce;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value_JumpForce;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_MaxGroundedVelocityZ;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value_MaxGroundedVelocityZ;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_bApplyJumpSpeedBoost;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value_bApplyJumpSpeedBoost;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_SmallJumpSpeedBoostFactor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value_SmallJumpSpeedBoostFactor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_LargeJumpSpeedBoostFactor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value_LargeJumpSpeedBoostFactor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_AirAcceleration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value_AirAcceleration;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_AirControl;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value_AirControl;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_WaterControl;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value_WaterControl;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_SinkSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value_SinkSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_WaterJumpForce;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value_WaterJumpForce;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_WaterJumpPush;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value_WaterJumpPush;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_bUseAltSwimControls;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value_bUseAltSwimControls;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_SpeedHardCap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value_SpeedHardCap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_bConsiderMassOnJump;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value_bConsiderMassOnJump;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Text_GravityScale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value_GravityScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_GetLocalGoldSrcMovementComponent, "GetLocalGoldSrcMovementComponent" }, // 1789712710
		{ &Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bApplyJumpSpeedBoost, "OnCheckStateChanged_bApplyJumpSpeedBoost" }, // 571101014
		{ &Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bConsiderMassOnJump, "OnCheckStateChanged_bConsiderMassOnJump" }, // 3557257161
		{ &Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bUseAltEdgeFriction, "OnCheckStateChanged_bUseAltEdgeFriction" }, // 3490459502
		{ &Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnCheckStateChanged_bUseAltSwimControls, "OnCheckStateChanged_bUseAltSwimControls" }, // 4012176351
		{ &Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnClicked_UpdateArchetype, "OnClicked_UpdateArchetype" }, // 813194386
		{ &Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnSelectionChanged_JumpMode, "OnSelectionChanged_JumpMode" }, // 1799681736
		{ &Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_Acceleration, "OnValueChanged_Acceleration" }, // 2533129525
		{ &Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_AirAcceleration, "OnValueChanged_AirAcceleration" }, // 778548878
		{ &Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_AirControl, "OnValueChanged_AirControl" }, // 1692265901
		{ &Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchedHalfHeight, "OnValueChanged_CrouchedHalfHeight" }, // 996901951
		{ &Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchInterpSpeed, "OnValueChanged_CrouchInterpSpeed" }, // 2212517700
		{ &Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_CrouchWalkSpeed, "OnValueChanged_CrouchWalkSpeed" }, // 2937165480
		{ &Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_EdgeFrictionMinRequiredHeight, "OnValueChanged_EdgeFrictionMinRequiredHeight" }, // 3318992038
		{ &Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_EdgeFrictionScale, "OnValueChanged_EdgeFrictionScale" }, // 3849577711
		{ &Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_FloorFriction, "OnValueChanged_FloorFriction" }, // 3324508548
		{ &Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_GravityScale, "OnValueChanged_GravityScale" }, // 3491574701
		{ &Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_JumpForce, "OnValueChanged_JumpForce" }, // 1935949277
		{ &Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_LargeJumpSpeedBoostFactor, "OnValueChanged_LargeJumpSpeedBoostFactor" }, // 2393839654
		{ &Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_MaxGroundedVelocityZ, "OnValueChanged_MaxGroundedVelocityZ" }, // 3474234339
		{ &Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_MaxSpeed, "OnValueChanged_MaxSpeed" }, // 601265078
		{ &Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SinkSpeed, "OnValueChanged_SinkSpeed" }, // 20215202
		{ &Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SmallJumpSpeedBoostFactor, "OnValueChanged_SmallJumpSpeedBoostFactor" }, // 355662262
		{ &Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SpeedHardCap, "OnValueChanged_SpeedHardCap" }, // 2211061785
		{ &Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_SprintSpeed, "OnValueChanged_SprintSpeed" }, // 1363006793
		{ &Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_StopSpeed, "OnValueChanged_StopSpeed" }, // 2505630825
		{ &Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterControl, "OnValueChanged_WaterControl" }, // 1775154496
		{ &Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterJumpForce, "OnValueChanged_WaterJumpForce" }, // 665827157
		{ &Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_OnValueChanged_WaterJumpPush, "OnValueChanged_WaterJumpPush" }, // 3503025866
		{ &Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_UpdateArchetypeValues, "UpdateArchetypeValues" }, // 1074976881
		{ &Z_Construct_UFunction_UGMC_GoldSrcConfigMenu_UpdateInterfaceValues, "UpdateInterfaceValues" }, // 301714568
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGMC_GoldSrcConfigMenu>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_UpdateArchetype = { "Text_UpdateArchetype", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Text_UpdateArchetype), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_UpdateArchetype_MetaData), NewProp_Text_UpdateArchetype_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Button_UpdateArchetype = { "Button_UpdateArchetype", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Button_UpdateArchetype), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_UpdateArchetype_MetaData), NewProp_Button_UpdateArchetype_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_Acceleration = { "Text_Acceleration", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Text_Acceleration), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_Acceleration_MetaData), NewProp_Text_Acceleration_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_Acceleration = { "Value_Acceleration", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Value_Acceleration), Z_Construct_UClass_USpinBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_Acceleration_MetaData), NewProp_Value_Acceleration_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_MaxSpeed = { "Text_MaxSpeed", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Text_MaxSpeed), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MaxSpeed_MetaData), NewProp_Text_MaxSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_MaxSpeed = { "Value_MaxSpeed", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Value_MaxSpeed), Z_Construct_UClass_USpinBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MaxSpeed_MetaData), NewProp_Value_MaxSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_StopSpeed = { "Text_StopSpeed", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Text_StopSpeed), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_StopSpeed_MetaData), NewProp_Text_StopSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_StopSpeed = { "Value_StopSpeed", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Value_StopSpeed), Z_Construct_UClass_USpinBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_StopSpeed_MetaData), NewProp_Value_StopSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_SprintSpeed = { "Text_SprintSpeed", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Text_SprintSpeed), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_SprintSpeed_MetaData), NewProp_Text_SprintSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_SprintSpeed = { "Value_SprintSpeed", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Value_SprintSpeed), Z_Construct_UClass_USpinBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_SprintSpeed_MetaData), NewProp_Value_SprintSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_CrouchWalkSpeed = { "Text_CrouchWalkSpeed", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Text_CrouchWalkSpeed), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_CrouchWalkSpeed_MetaData), NewProp_Text_CrouchWalkSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_CrouchWalkSpeed = { "Value_CrouchWalkSpeed", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Value_CrouchWalkSpeed), Z_Construct_UClass_USpinBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_CrouchWalkSpeed_MetaData), NewProp_Value_CrouchWalkSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_CrouchInterpSpeed = { "Text_CrouchInterpSpeed", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Text_CrouchInterpSpeed), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_CrouchInterpSpeed_MetaData), NewProp_Text_CrouchInterpSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_CrouchInterpSpeed = { "Value_CrouchInterpSpeed", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Value_CrouchInterpSpeed), Z_Construct_UClass_USpinBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_CrouchInterpSpeed_MetaData), NewProp_Value_CrouchInterpSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_CrouchedHalfHeight = { "Text_CrouchedHalfHeight", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Text_CrouchedHalfHeight), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_CrouchedHalfHeight_MetaData), NewProp_Text_CrouchedHalfHeight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_CrouchedHalfHeight = { "Value_CrouchedHalfHeight", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Value_CrouchedHalfHeight), Z_Construct_UClass_USpinBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_CrouchedHalfHeight_MetaData), NewProp_Value_CrouchedHalfHeight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_FloorFriction = { "Text_FloorFriction", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Text_FloorFriction), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_FloorFriction_MetaData), NewProp_Text_FloorFriction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_FloorFriction = { "Value_FloorFriction", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Value_FloorFriction), Z_Construct_UClass_USpinBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_FloorFriction_MetaData), NewProp_Value_FloorFriction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_EdgeFrictionScale = { "Text_EdgeFrictionScale", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Text_EdgeFrictionScale), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_EdgeFrictionScale_MetaData), NewProp_Text_EdgeFrictionScale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_EdgeFrictionScale = { "Value_EdgeFrictionScale", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Value_EdgeFrictionScale), Z_Construct_UClass_USpinBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_EdgeFrictionScale_MetaData), NewProp_Value_EdgeFrictionScale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_EdgeFrictionMinRequiredHeight = { "Text_EdgeFrictionMinRequiredHeight", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Text_EdgeFrictionMinRequiredHeight), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_EdgeFrictionMinRequiredHeight_MetaData), NewProp_Text_EdgeFrictionMinRequiredHeight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_EdgeFrictionMinRequiredHeight = { "Value_EdgeFrictionMinRequiredHeight", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Value_EdgeFrictionMinRequiredHeight), Z_Construct_UClass_USpinBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_EdgeFrictionMinRequiredHeight_MetaData), NewProp_Value_EdgeFrictionMinRequiredHeight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_bUseAltEdgeFriction = { "Text_bUseAltEdgeFriction", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Text_bUseAltEdgeFriction), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_bUseAltEdgeFriction_MetaData), NewProp_Text_bUseAltEdgeFriction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_bUseAltEdgeFriction = { "Value_bUseAltEdgeFriction", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Value_bUseAltEdgeFriction), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_bUseAltEdgeFriction_MetaData), NewProp_Value_bUseAltEdgeFriction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_JumpMode = { "Text_JumpMode", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Text_JumpMode), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_JumpMode_MetaData), NewProp_Text_JumpMode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_JumpMode = { "Value_JumpMode", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Value_JumpMode), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_JumpMode_MetaData), NewProp_Value_JumpMode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_JumpForce = { "Text_JumpForce", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Text_JumpForce), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_JumpForce_MetaData), NewProp_Text_JumpForce_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_JumpForce = { "Value_JumpForce", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Value_JumpForce), Z_Construct_UClass_USpinBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_JumpForce_MetaData), NewProp_Value_JumpForce_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_MaxGroundedVelocityZ = { "Text_MaxGroundedVelocityZ", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Text_MaxGroundedVelocityZ), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MaxGroundedVelocityZ_MetaData), NewProp_Text_MaxGroundedVelocityZ_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_MaxGroundedVelocityZ = { "Value_MaxGroundedVelocityZ", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Value_MaxGroundedVelocityZ), Z_Construct_UClass_USpinBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MaxGroundedVelocityZ_MetaData), NewProp_Value_MaxGroundedVelocityZ_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_bApplyJumpSpeedBoost = { "Text_bApplyJumpSpeedBoost", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Text_bApplyJumpSpeedBoost), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_bApplyJumpSpeedBoost_MetaData), NewProp_Text_bApplyJumpSpeedBoost_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_bApplyJumpSpeedBoost = { "Value_bApplyJumpSpeedBoost", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Value_bApplyJumpSpeedBoost), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_bApplyJumpSpeedBoost_MetaData), NewProp_Value_bApplyJumpSpeedBoost_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_SmallJumpSpeedBoostFactor = { "Text_SmallJumpSpeedBoostFactor", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Text_SmallJumpSpeedBoostFactor), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_SmallJumpSpeedBoostFactor_MetaData), NewProp_Text_SmallJumpSpeedBoostFactor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_SmallJumpSpeedBoostFactor = { "Value_SmallJumpSpeedBoostFactor", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Value_SmallJumpSpeedBoostFactor), Z_Construct_UClass_USpinBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_SmallJumpSpeedBoostFactor_MetaData), NewProp_Value_SmallJumpSpeedBoostFactor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_LargeJumpSpeedBoostFactor = { "Text_LargeJumpSpeedBoostFactor", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Text_LargeJumpSpeedBoostFactor), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_LargeJumpSpeedBoostFactor_MetaData), NewProp_Text_LargeJumpSpeedBoostFactor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_LargeJumpSpeedBoostFactor = { "Value_LargeJumpSpeedBoostFactor", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Value_LargeJumpSpeedBoostFactor), Z_Construct_UClass_USpinBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_LargeJumpSpeedBoostFactor_MetaData), NewProp_Value_LargeJumpSpeedBoostFactor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_AirAcceleration = { "Text_AirAcceleration", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Text_AirAcceleration), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_AirAcceleration_MetaData), NewProp_Text_AirAcceleration_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_AirAcceleration = { "Value_AirAcceleration", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Value_AirAcceleration), Z_Construct_UClass_USpinBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_AirAcceleration_MetaData), NewProp_Value_AirAcceleration_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_AirControl = { "Text_AirControl", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Text_AirControl), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_AirControl_MetaData), NewProp_Text_AirControl_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_AirControl = { "Value_AirControl", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Value_AirControl), Z_Construct_UClass_USpinBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_AirControl_MetaData), NewProp_Value_AirControl_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_WaterControl = { "Text_WaterControl", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Text_WaterControl), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_WaterControl_MetaData), NewProp_Text_WaterControl_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_WaterControl = { "Value_WaterControl", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Value_WaterControl), Z_Construct_UClass_USpinBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_WaterControl_MetaData), NewProp_Value_WaterControl_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_SinkSpeed = { "Text_SinkSpeed", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Text_SinkSpeed), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_SinkSpeed_MetaData), NewProp_Text_SinkSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_SinkSpeed = { "Value_SinkSpeed", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Value_SinkSpeed), Z_Construct_UClass_USpinBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_SinkSpeed_MetaData), NewProp_Value_SinkSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_WaterJumpForce = { "Text_WaterJumpForce", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Text_WaterJumpForce), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_WaterJumpForce_MetaData), NewProp_Text_WaterJumpForce_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_WaterJumpForce = { "Value_WaterJumpForce", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Value_WaterJumpForce), Z_Construct_UClass_USpinBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_WaterJumpForce_MetaData), NewProp_Value_WaterJumpForce_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_WaterJumpPush = { "Text_WaterJumpPush", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Text_WaterJumpPush), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_WaterJumpPush_MetaData), NewProp_Text_WaterJumpPush_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_WaterJumpPush = { "Value_WaterJumpPush", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Value_WaterJumpPush), Z_Construct_UClass_USpinBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_WaterJumpPush_MetaData), NewProp_Value_WaterJumpPush_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_bUseAltSwimControls = { "Text_bUseAltSwimControls", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Text_bUseAltSwimControls), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_bUseAltSwimControls_MetaData), NewProp_Text_bUseAltSwimControls_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_bUseAltSwimControls = { "Value_bUseAltSwimControls", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Value_bUseAltSwimControls), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_bUseAltSwimControls_MetaData), NewProp_Value_bUseAltSwimControls_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_SpeedHardCap = { "Text_SpeedHardCap", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Text_SpeedHardCap), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_SpeedHardCap_MetaData), NewProp_Text_SpeedHardCap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_SpeedHardCap = { "Value_SpeedHardCap", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Value_SpeedHardCap), Z_Construct_UClass_USpinBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_SpeedHardCap_MetaData), NewProp_Value_SpeedHardCap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_bConsiderMassOnJump = { "Text_bConsiderMassOnJump", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Text_bConsiderMassOnJump), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_bConsiderMassOnJump_MetaData), NewProp_Text_bConsiderMassOnJump_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_bConsiderMassOnJump = { "Value_bConsiderMassOnJump", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Value_bConsiderMassOnJump), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_bConsiderMassOnJump_MetaData), NewProp_Value_bConsiderMassOnJump_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_GravityScale = { "Text_GravityScale", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Text_GravityScale), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_GravityScale_MetaData), NewProp_Text_GravityScale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_GravityScale = { "Value_GravityScale", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_GoldSrcConfigMenu, Value_GravityScale), Z_Construct_UClass_USpinBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_GravityScale_MetaData), NewProp_Value_GravityScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_UpdateArchetype,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Button_UpdateArchetype,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_Acceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_Acceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_MaxSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_MaxSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_StopSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_StopSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_SprintSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_SprintSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_CrouchWalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_CrouchWalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_CrouchInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_CrouchInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_CrouchedHalfHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_CrouchedHalfHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_FloorFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_FloorFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_EdgeFrictionScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_EdgeFrictionScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_EdgeFrictionMinRequiredHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_EdgeFrictionMinRequiredHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_bUseAltEdgeFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_bUseAltEdgeFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_JumpMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_JumpMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_JumpForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_JumpForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_MaxGroundedVelocityZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_MaxGroundedVelocityZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_bApplyJumpSpeedBoost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_bApplyJumpSpeedBoost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_SmallJumpSpeedBoostFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_SmallJumpSpeedBoostFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_LargeJumpSpeedBoostFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_LargeJumpSpeedBoostFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_AirAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_AirAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_AirControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_AirControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_WaterControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_WaterControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_SinkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_SinkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_WaterJumpForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_WaterJumpForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_WaterJumpPush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_WaterJumpPush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_bUseAltSwimControls,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_bUseAltSwimControls,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_SpeedHardCap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_SpeedHardCap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_bConsiderMassOnJump,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_bConsiderMassOnJump,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Text_GravityScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::NewProp_Value_GravityScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::ClassParams = {
	&UGMC_GoldSrcConfigMenu::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::Class_MetaDataParams), Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGMC_GoldSrcConfigMenu()
{
	if (!Z_Registration_Info_UClass_UGMC_GoldSrcConfigMenu.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGMC_GoldSrcConfigMenu.OuterSingleton, Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGMC_GoldSrcConfigMenu.OuterSingleton;
}
template<> GMCCORE_API UClass* StaticClass<UGMC_GoldSrcConfigMenu>()
{
	return UGMC_GoldSrcConfigMenu::StaticClass();
}
UGMC_GoldSrcConfigMenu::UGMC_GoldSrcConfigMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGMC_GoldSrcConfigMenu);
UGMC_GoldSrcConfigMenu::~UGMC_GoldSrcConfigMenu() {}
// End Class UGMC_GoldSrcConfigMenu

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Widgets_GoldSrcConfigMenu_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGMC_GoldSrcConfigMenu, UGMC_GoldSrcConfigMenu::StaticClass, TEXT("UGMC_GoldSrcConfigMenu"), &Z_Registration_Info_UClass_UGMC_GoldSrcConfigMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGMC_GoldSrcConfigMenu), 2620650685U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Widgets_GoldSrcConfigMenu_h_3545519050(TEXT("/Script/GMCCore"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Widgets_GoldSrcConfigMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Widgets_GoldSrcConfigMenu_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
