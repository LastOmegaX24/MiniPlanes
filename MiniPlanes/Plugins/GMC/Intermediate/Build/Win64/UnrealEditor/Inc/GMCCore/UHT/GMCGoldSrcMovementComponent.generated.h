// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/GMCGoldSrcMovementComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GMCCORE_GMCGoldSrcMovementComponent_generated_h
#error "GMCGoldSrcMovementComponent.generated.h already included, missing '#pragma once' in GMCGoldSrcMovementComponent.h"
#endif
#define GMCCORE_GMCGoldSrcMovementComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCGoldSrcMovementComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnJumped); \
	DECLARE_FUNCTION(execApplyJumpSpeedBoost); \
	DECLARE_FUNCTION(execWaterJump); \
	DECLARE_FUNCTION(execCanJump); \
	DECLARE_FUNCTION(execJump); \
	DECLARE_FUNCTION(execCanUncrouch); \
	DECLARE_FUNCTION(execCanCrouch); \
	DECLARE_FUNCTION(execCrouch); \
	DECLARE_FUNCTION(execCanSprint); \
	DECLARE_FUNCTION(execSprint); \
	DECLARE_FUNCTION(execHasJustLanded_Internal); \
	DECLARE_FUNCTION(execSlide); \
	DECLARE_FUNCTION(execApplyWaterFriction); \
	DECLARE_FUNCTION(execGetFloorFriction); \
	DECLARE_FUNCTION(execApplyFloorFriction); \
	DECLARE_FUNCTION(execAccelerate); \
	DECLARE_FUNCTION(execWaterMove); \
	DECLARE_FUNCTION(execAirMove); \
	DECLARE_FUNCTION(execWalkMove); \
	DECLARE_FUNCTION(execPhysicsGoldSrc); \
	DECLARE_FUNCTION(execIsUsingNoClipMode); \
	DECLARE_FUNCTION(execIsUsingFlyMode); \
	DECLARE_FUNCTION(execIsUncrouching); \
	DECLARE_FUNCTION(execIsCrouchingDown); \
	DECLARE_FUNCTION(execIsFullyCrouched); \
	DECLARE_FUNCTION(execGetCrouchedHalfHeight); \
	DECLARE_FUNCTION(execGetDefaultHalfHeight); \
	DECLARE_FUNCTION(execIsSprinting); \
	DECLARE_FUNCTION(execHasJustLanded); \
	DECLARE_FUNCTION(execHasJustJumped);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCGoldSrcMovementComponent_h_22_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCGoldSrcMovementComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGMC_GoldSrcMovementCmp(); \
	friend struct Z_Construct_UClass_UGMC_GoldSrcMovementCmp_Statics; \
public: \
	DECLARE_CLASS(UGMC_GoldSrcMovementCmp, UGMC_OrganicMovementCmp, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GMCCore"), NO_API) \
	DECLARE_SERIALIZER(UGMC_GoldSrcMovementCmp)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCGoldSrcMovementComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGMC_GoldSrcMovementCmp(UGMC_GoldSrcMovementCmp&&); \
	UGMC_GoldSrcMovementCmp(const UGMC_GoldSrcMovementCmp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGMC_GoldSrcMovementCmp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGMC_GoldSrcMovementCmp); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGMC_GoldSrcMovementCmp) \
	NO_API virtual ~UGMC_GoldSrcMovementCmp();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCGoldSrcMovementComponent_h_19_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCGoldSrcMovementComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCGoldSrcMovementComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCGoldSrcMovementComponent_h_22_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCGoldSrcMovementComponent_h_22_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCGoldSrcMovementComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GMCCORE_API UClass* StaticClass<class UGMC_GoldSrcMovementCmp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCGoldSrcMovementComponent_h


#define FOREACH_ENUM_EGMC_JUMPMODE(op) \
	op(EGMC_JumpMode::Manual) \
	op(EGMC_JumpMode::SemiAuto) \
	op(EGMC_JumpMode::FullAuto) 

enum class EGMC_JumpMode : uint8;
template<> struct TIsUEnumClass<EGMC_JumpMode> { enum { Value = true }; };
template<> GMCCORE_API UEnum* StaticEnum<EGMC_JumpMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
