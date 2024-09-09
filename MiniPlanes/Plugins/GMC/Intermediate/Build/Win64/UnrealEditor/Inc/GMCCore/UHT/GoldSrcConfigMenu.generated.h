// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/GoldSrcConfigMenu.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGMC_GoldSrcMovementCmp;
#ifdef GMCCORE_GoldSrcConfigMenu_generated_h
#error "GoldSrcConfigMenu.generated.h already included, missing '#pragma once' in GoldSrcConfigMenu.h"
#endif
#define GMCCORE_GoldSrcConfigMenu_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Widgets_GoldSrcConfigMenu_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnValueChanged_GravityScale); \
	DECLARE_FUNCTION(execOnCheckStateChanged_bConsiderMassOnJump); \
	DECLARE_FUNCTION(execOnValueChanged_SpeedHardCap); \
	DECLARE_FUNCTION(execOnCheckStateChanged_bUseAltSwimControls); \
	DECLARE_FUNCTION(execOnValueChanged_WaterJumpPush); \
	DECLARE_FUNCTION(execOnValueChanged_WaterJumpForce); \
	DECLARE_FUNCTION(execOnValueChanged_SinkSpeed); \
	DECLARE_FUNCTION(execOnValueChanged_WaterControl); \
	DECLARE_FUNCTION(execOnValueChanged_AirControl); \
	DECLARE_FUNCTION(execOnValueChanged_AirAcceleration); \
	DECLARE_FUNCTION(execOnValueChanged_LargeJumpSpeedBoostFactor); \
	DECLARE_FUNCTION(execOnValueChanged_SmallJumpSpeedBoostFactor); \
	DECLARE_FUNCTION(execOnCheckStateChanged_bApplyJumpSpeedBoost); \
	DECLARE_FUNCTION(execOnValueChanged_MaxGroundedVelocityZ); \
	DECLARE_FUNCTION(execOnValueChanged_JumpForce); \
	DECLARE_FUNCTION(execOnSelectionChanged_JumpMode); \
	DECLARE_FUNCTION(execOnCheckStateChanged_bUseAltEdgeFriction); \
	DECLARE_FUNCTION(execOnValueChanged_EdgeFrictionMinRequiredHeight); \
	DECLARE_FUNCTION(execOnValueChanged_EdgeFrictionScale); \
	DECLARE_FUNCTION(execOnValueChanged_FloorFriction); \
	DECLARE_FUNCTION(execOnValueChanged_CrouchedHalfHeight); \
	DECLARE_FUNCTION(execOnValueChanged_CrouchInterpSpeed); \
	DECLARE_FUNCTION(execOnValueChanged_CrouchWalkSpeed); \
	DECLARE_FUNCTION(execOnValueChanged_SprintSpeed); \
	DECLARE_FUNCTION(execOnValueChanged_StopSpeed); \
	DECLARE_FUNCTION(execOnValueChanged_MaxSpeed); \
	DECLARE_FUNCTION(execOnValueChanged_Acceleration); \
	DECLARE_FUNCTION(execOnClicked_UpdateArchetype); \
	DECLARE_FUNCTION(execGetLocalGoldSrcMovementComponent); \
	DECLARE_FUNCTION(execUpdateArchetypeValues); \
	DECLARE_FUNCTION(execUpdateInterfaceValues);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Widgets_GoldSrcConfigMenu_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGMC_GoldSrcConfigMenu(); \
	friend struct Z_Construct_UClass_UGMC_GoldSrcConfigMenu_Statics; \
public: \
	DECLARE_CLASS(UGMC_GoldSrcConfigMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GMCCore"), NO_API) \
	DECLARE_SERIALIZER(UGMC_GoldSrcConfigMenu)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Widgets_GoldSrcConfigMenu_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGMC_GoldSrcConfigMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGMC_GoldSrcConfigMenu(UGMC_GoldSrcConfigMenu&&); \
	UGMC_GoldSrcConfigMenu(const UGMC_GoldSrcConfigMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGMC_GoldSrcConfigMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGMC_GoldSrcConfigMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGMC_GoldSrcConfigMenu) \
	NO_API virtual ~UGMC_GoldSrcConfigMenu();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Widgets_GoldSrcConfigMenu_h_9_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Widgets_GoldSrcConfigMenu_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Widgets_GoldSrcConfigMenu_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Widgets_GoldSrcConfigMenu_h_12_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Widgets_GoldSrcConfigMenu_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GMCCORE_API UClass* StaticClass<class UGMC_GoldSrcConfigMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Widgets_GoldSrcConfigMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
