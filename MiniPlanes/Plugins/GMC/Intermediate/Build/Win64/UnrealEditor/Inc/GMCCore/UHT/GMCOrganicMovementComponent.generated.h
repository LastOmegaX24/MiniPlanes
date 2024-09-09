// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/GMCOrganicMovementComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AGMC_Pawn;
class UAnimMontage;
class UGMC_MontageMetaData;
class UPrimitiveComponent;
class USceneComponent;
class USkeletalMeshComponent;
enum class EGMC_BasedMovementSource : uint8;
enum class EGMC_MovementMode : uint8;
struct FGMC_FloorParams;
struct FGMC_RootMotionVelocitySettings;
struct FHitResult;
struct FNavAvoidanceMask;
#ifdef GMCCORE_GMCOrganicMovementComponent_generated_h
#error "GMCOrganicMovementComponent.generated.h already included, missing '#pragma once' in GMCOrganicMovementComponent.h"
#endif
#define GMCCORE_GMCOrganicMovementComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCOrganicMovementComponent_h_89_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGMC_BasedMovementVelocity_Statics; \
	GMCCORE_API static class UScriptStruct* StaticStruct();


template<> GMCCORE_API UScriptStruct* StaticStruct<struct FGMC_BasedMovementVelocity>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCOrganicMovementComponent_h_141_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGMC_BasedMovementRelative_Statics; \
	GMCCORE_API static class UScriptStruct* StaticStruct();


template<> GMCCORE_API UScriptStruct* StaticStruct<struct FGMC_BasedMovementRelative>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCOrganicMovementComponent_h_214_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGMC_BasedMovement_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GMCCORE_API UScriptStruct* StaticStruct<struct FGMC_BasedMovement>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCOrganicMovementComponent_h_320_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGMC_RelBasedMovementAux_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GMCCORE_API UScriptStruct* StaticStruct<struct FGMC_RelBasedMovementAux>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCOrganicMovementComponent_h_383_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGMC_MontagePrediction_Statics; \
	GMCCORE_API static class UScriptStruct* StaticStruct();


template<> GMCCORE_API UScriptStruct* StaticStruct<struct FGMC_MontagePrediction>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCOrganicMovementComponent_h_425_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGMC_MontageSimulation_Statics; \
	GMCCORE_API static class UScriptStruct* StaticStruct();


template<> GMCCORE_API UScriptStruct* StaticStruct<struct FGMC_MontageSimulation>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCOrganicMovementComponent_h_467_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGMC_MontageReplication_Statics; \
	GMCCORE_API static class UScriptStruct* StaticStruct();


template<> GMCCORE_API UScriptStruct* StaticStruct<struct FGMC_MontageReplication>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCOrganicMovementComponent_h_481_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGMC_RootMotionExtractionSettings_Statics; \
	GMCCORE_API static class UScriptStruct* StaticStruct();


template<> GMCCORE_API UScriptStruct* StaticStruct<struct FGMC_RootMotionExtractionSettings>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCOrganicMovementComponent_h_503_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGMC_RootMotionVelocitySettings_Statics; \
	GMCCORE_API static class UScriptStruct* StaticStruct();


template<> GMCCORE_API UScriptStruct* StaticStruct<struct FGMC_RootMotionVelocitySettings>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCOrganicMovementComponent_h_529_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGMC_SimulationSettings_Statics; \
	GMCCORE_API static class UScriptStruct* StaticStruct();


template<> GMCCORE_API UScriptStruct* StaticStruct<struct FGMC_SimulationSettings>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCOrganicMovementComponent_h_565_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGMC_MontageMetaData(); \
	friend struct Z_Construct_UClass_UGMC_MontageMetaData_Statics; \
public: \
	DECLARE_CLASS(UGMC_MontageMetaData, UAnimMetaData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GMCCore"), NO_API) \
	DECLARE_SERIALIZER(UGMC_MontageMetaData)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCOrganicMovementComponent_h_565_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGMC_MontageMetaData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGMC_MontageMetaData(UGMC_MontageMetaData&&); \
	UGMC_MontageMetaData(const UGMC_MontageMetaData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGMC_MontageMetaData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGMC_MontageMetaData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGMC_MontageMetaData) \
	NO_API virtual ~UGMC_MontageMetaData();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCOrganicMovementComponent_h_562_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCOrganicMovementComponent_h_565_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCOrganicMovementComponent_h_565_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCOrganicMovementComponent_h_565_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GMCCORE_API UClass* StaticClass<class UGMC_MontageMetaData>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCOrganicMovementComponent_h_595_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetLastValidTargetNavLocation); \
	DECLARE_FUNCTION(execGetDistanceToNavMesh); \
	DECLARE_FUNCTION(execWasNavMeshWalkingLastUpdate); \
	DECLARE_FUNCTION(execK2_GetLastValidTargetNavLocation); \
	DECLARE_FUNCTION(execSetGroupsToIgnoreMask); \
	DECLARE_FUNCTION(execSetGroupsToAvoidMask); \
	DECLARE_FUNCTION(execSetAvoidanceGroupMask); \
	DECLARE_FUNCTION(execOnNavMeshProjectionFailed); \
	DECLARE_FUNCTION(execIsNavMeshWalking); \
	DECLARE_FUNCTION(execCalculatePathFollowingBrakingDistance); \
	DECLARE_FUNCTION(execNavAgentPropsAdjustment); \
	DECLARE_FUNCTION(execOnActorBaseChangedSimulated); \
	DECLARE_FUNCTION(execOnMovementModeChangedSimulated); \
	DECLARE_FUNCTION(execOnLandedSimulated); \
	DECLARE_FUNCTION(execGetPreviousControlRotationSimulated); \
	DECLARE_FUNCTION(execGetPreviousMovementModeSimulated); \
	DECLARE_FUNCTION(execMovementUpdateSimulated); \
	DECLARE_FUNCTION(execPostProcessAnimRootMotionVelocity); \
	DECLARE_FUNCTION(execPrePlayMontageSimulated); \
	DECLARE_FUNCTION(execPlayMontageSimulated); \
	DECLARE_FUNCTION(execGetGMCMontageMetaData); \
	DECLARE_FUNCTION(execHasRootMotion); \
	DECLARE_FUNCTION(execSetAnimRootMotionTranslationScale); \
	DECLARE_FUNCTION(execGetAnimRootMotionTranslationScale); \
	DECLARE_FUNCTION(execIsExceedingMaxGroundedVelocityZ); \
	DECLARE_FUNCTION(execIsAirborne); \
	DECLARE_FUNCTION(execIsAffectedByGravity); \
	DECLARE_FUNCTION(execDisableMovement); \
	DECLARE_FUNCTION(execGetGravity); \
	DECLARE_FUNCTION(execSetWalkableFloorZ); \
	DECLARE_FUNCTION(execSetWalkableFloorAngle); \
	DECLARE_FUNCTION(execGetMaxStepDownHeight); \
	DECLARE_FUNCTION(execGetMaxStepUpHeight); \
	DECLARE_FUNCTION(execUpdateRelativeBasedMovementTransform); \
	DECLARE_FUNCTION(execGetCurrentImmersionDepth); \
	DECLARE_FUNCTION(execSetMovementMode); \
	DECLARE_FUNCTION(execHitWalkableFloor); \
	DECLARE_FUNCTION(execGetGroundFriction); \
	DECLARE_FUNCTION(execGetOverMaxSpeedDeceleration); \
	DECLARE_FUNCTION(execGetBrakingDeceleration); \
	DECLARE_FUNCTION(execGetInputAcceleration); \
	DECLARE_FUNCTION(execGetMovementMode); \
	DECLARE_FUNCTION(execGetProcessedInputVector); \
	DECLARE_FUNCTION(execGetRawInputVector); \
	DECLARE_FUNCTION(execRootCollisionTouched); \
	DECLARE_FUNCTION(execGetOverMaxSpeedDecelerationCustom); \
	DECLARE_FUNCTION(execGetBrakingDecelerationCustom); \
	DECLARE_FUNCTION(execGetInputAccelerationCustom); \
	DECLARE_FUNCTION(execOnMovementModeChanged); \
	DECLARE_FUNCTION(execOnLanded); \
	DECLARE_FUNCTION(execAdjustVelocityFromHitAirborne); \
	DECLARE_FUNCTION(execMaintainDistanceToFloor); \
	DECLARE_FUNCTION(execOnMovementModeUpdated); \
	DECLARE_FUNCTION(execUpdateMovementModeStatic); \
	DECLARE_FUNCTION(execUpdateMovementModeDynamic); \
	DECLARE_FUNCTION(execReEqualizeBase); \
	DECLARE_FUNCTION(execUnEqualizeBase); \
	DECLARE_FUNCTION(execShouldMoveGMCPawnForBaseEqualization); \
	DECLARE_FUNCTION(execMoveWithBaseRelative); \
	DECLARE_FUNCTION(execPostProcessPawnVelocity); \
	DECLARE_FUNCTION(execPostProcessVelocityToImpart); \
	DECLARE_FUNCTION(execMoveWithBaseVelocity); \
	DECLARE_FUNCTION(execOnActorBaseChanged); \
	DECLARE_FUNCTION(execTraceForActorBase); \
	DECLARE_FUNCTION(execFindActorBase); \
	DECLARE_FUNCTION(execSetBasedMovementSource); \
	DECLARE_FUNCTION(execGetOutermostAttachParent); \
	DECLARE_FUNCTION(execComputeInputAcceleration); \
	DECLARE_FUNCTION(execUpdateImmersionDepth); \
	DECLARE_FUNCTION(execCalculateVelocityCustom); \
	DECLARE_FUNCTION(execLimitSpeed); \
	DECLARE_FUNCTION(execApplyDeceleration); \
	DECLARE_FUNCTION(execApplyExternalForces); \
	DECLARE_FUNCTION(execApplyRotation); \
	DECLARE_FUNCTION(execApplyInputVelocity); \
	DECLARE_FUNCTION(execBotDirectMove); \
	DECLARE_FUNCTION(execShouldPerformDirectMove); \
	DECLARE_FUNCTION(execCalculateVelocity); \
	DECLARE_FUNCTION(execPhysicsCustom); \
	DECLARE_FUNCTION(execPhysicsBuoyant); \
	DECLARE_FUNCTION(execPhysicsAirborne); \
	DECLARE_FUNCTION(execPhysicsGrounded); \
	DECLARE_FUNCTION(execMovementUpdate); \
	DECLARE_FUNCTION(execPostPhysicsUpdate); \
	DECLARE_FUNCTION(execPrePhysicsUpdate); \
	DECLARE_FUNCTION(execPostMovementUpdate); \
	DECLARE_FUNCTION(execPreMovementUpdate); \
	DECLARE_FUNCTION(execPhysicsSimulationUpdate); \
	DECLARE_FUNCTION(execPreProcessInputVector); \
	DECLARE_FUNCTION(execGetCurrentFloor); \
	DECLARE_FUNCTION(execGetSkeletalMeshReference); \
	DECLARE_FUNCTION(execSetSkeletalMeshReference);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCOrganicMovementComponent_h_595_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCOrganicMovementComponent_h_595_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGMC_OrganicMovementCmp(); \
	friend struct Z_Construct_UClass_UGMC_OrganicMovementCmp_Statics; \
public: \
	DECLARE_CLASS(UGMC_OrganicMovementCmp, UGMC_MovementUtilityCmp, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GMCCore"), NO_API) \
	DECLARE_SERIALIZER(UGMC_OrganicMovementCmp) \
	virtual UObject* _getUObject() const override { return const_cast<UGMC_OrganicMovementCmp*>(this); }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCOrganicMovementComponent_h_595_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGMC_OrganicMovementCmp(UGMC_OrganicMovementCmp&&); \
	UGMC_OrganicMovementCmp(const UGMC_OrganicMovementCmp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGMC_OrganicMovementCmp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGMC_OrganicMovementCmp); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGMC_OrganicMovementCmp) \
	NO_API virtual ~UGMC_OrganicMovementCmp();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCOrganicMovementComponent_h_592_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCOrganicMovementComponent_h_595_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCOrganicMovementComponent_h_595_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCOrganicMovementComponent_h_595_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCOrganicMovementComponent_h_595_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCOrganicMovementComponent_h_595_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GMCCORE_API UClass* StaticClass<class UGMC_OrganicMovementCmp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCOrganicMovementComponent_h


#define FOREACH_ENUM_EGMC_MOVEMENTMODE(op) \
	op(EGMC_MovementMode::None) \
	op(EGMC_MovementMode::Grounded) \
	op(EGMC_MovementMode::Airborne) \
	op(EGMC_MovementMode::Buoyant) \
	op(EGMC_MovementMode::Custom1) \
	op(EGMC_MovementMode::Custom2) \
	op(EGMC_MovementMode::Custom3) \
	op(EGMC_MovementMode::Custom4) \
	op(EGMC_MovementMode::Custom5) \
	op(EGMC_MovementMode::Custom6) \
	op(EGMC_MovementMode::Custom7) \
	op(EGMC_MovementMode::Custom8) \
	op(EGMC_MovementMode::Custom9) \
	op(EGMC_MovementMode::Custom10) \
	op(EGMC_MovementMode::Custom11) \
	op(EGMC_MovementMode::Custom12) 

enum class EGMC_MovementMode : uint8;
template<> struct TIsUEnumClass<EGMC_MovementMode> { enum { Value = true }; };
template<> GMCCORE_API UEnum* StaticEnum<EGMC_MovementMode>();

#define FOREACH_ENUM_EGMC_BASEDMOVEMENTSOURCE(op) \
	op(EGMC_BasedMovementSource::None) \
	op(EGMC_BasedMovementSource::Velocity) \
	op(EGMC_BasedMovementSource::Relative) 

enum class EGMC_BasedMovementSource : uint8;
template<> struct TIsUEnumClass<EGMC_BasedMovementSource> { enum { Value = true }; };
template<> GMCCORE_API UEnum* StaticEnum<EGMC_BasedMovementSource>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
