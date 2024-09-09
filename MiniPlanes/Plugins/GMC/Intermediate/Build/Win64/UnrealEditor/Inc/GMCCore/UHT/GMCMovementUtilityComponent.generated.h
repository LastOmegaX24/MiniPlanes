// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/GMCMovementUtilityComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAnimMontage;
class UPrimitiveComponent;
class USceneComponent;
class USkeletalMeshComponent;
enum class EGMC_AdjustDirection : uint8;
enum class EGMC_CollisionShape : uint8;
enum class EGMC_FloatPrecisionBlueprint : uint8;
enum class EGMC_OverlapType : uint8;
enum class EGMC_RadialImpulseFalloff : uint8;
enum class EMontagePlayReturnType : uint8;
enum class ETeleportType : uint8;
struct FAIRequestID;
struct FAlphaBlendArgs;
struct FGMC_FilterOverlapAux;
struct FGMC_FloorParams;
struct FGMC_MontageTracker;
struct FGMC_PawnState;
struct FHitResult;
struct FMontageBlendSettings;
#ifdef GMCCORE_GMCMovementUtilityComponent_generated_h
#error "GMCMovementUtilityComponent.generated.h already included, missing '#pragma once' in GMCMovementUtilityComponent.h"
#endif
#define GMCCORE_GMCMovementUtilityComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCMovementUtilityComponent_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGMC_FloorParams_Statics; \
	GMCCORE_API static class UScriptStruct* StaticStruct();


template<> GMCCORE_API UScriptStruct* StaticStruct<struct FGMC_FloorParams>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCMovementUtilityComponent_h_379_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGMC_FilterOverlapAux_Statics; \
	GMCCORE_API static class UScriptStruct* StaticStruct();


template<> GMCCORE_API UScriptStruct* StaticStruct<struct FGMC_FilterOverlapAux>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCMovementUtilityComponent_h_429_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execNetLogError); \
	DECLARE_FUNCTION(execNetLogWarning); \
	DECLARE_FUNCTION(execNetLog); \
	DECLARE_FUNCTION(execGetAvgMS); \
	DECLARE_FUNCTION(execGetAvgFPS); \
	DECLARE_FUNCTION(execUnpackBoolsFromByte); \
	DECLARE_FUNCTION(execPackBoolsToByte); \
	DECLARE_FUNCTION(execResetFilterOverlapAux); \
	DECLARE_FUNCTION(execFilterOverlap); \
	DECLARE_FUNCTION(execFilterContext); \
	DECLARE_FUNCTION(execSimpleMoveToActor_GMC); \
	DECLARE_FUNCTION(execSimpleMoveToLocation_GMC); \
	DECLARE_FUNCTION(execIsUsingAccelerationForPathFollowing); \
	DECLARE_FUNCTION(execEnableAccelerationForPathFollowing); \
	DECLARE_FUNCTION(execIsPathFollowing); \
	DECLARE_FUNCTION(execGetCurrentPathFollowingRequest); \
	DECLARE_FUNCTION(execResumePathFollowing); \
	DECLARE_FUNCTION(execPausePathFollowing); \
	DECLARE_FUNCTION(execHasActiveNonRootMotionMontage); \
	DECLARE_FUNCTION(execHasActiveRootMotionMontage); \
	DECLARE_FUNCTION(execHasActiveMontage); \
	DECLARE_FUNCTION(execGetActiveRootMotionMontage); \
	DECLARE_FUNCTION(execGetActiveNonRootMotionMontage); \
	DECLARE_FUNCTION(execGetActiveMontage); \
	DECLARE_FUNCTION(execClearActiveMontage); \
	DECLARE_FUNCTION(execSetActiveMontage); \
	DECLARE_FUNCTION(execSetMontagePosition); \
	DECLARE_FUNCTION(execGetMontagePosition); \
	DECLARE_FUNCTION(execSetMontagePlayRate); \
	DECLARE_FUNCTION(execGetMontagePlayRate); \
	DECLARE_FUNCTION(execGetCurrentMontageSection); \
	DECLARE_FUNCTION(execJumpToMontageSectionsEnd); \
	DECLARE_FUNCTION(execJumpToMontageSection); \
	DECLARE_FUNCTION(execResumeMontage); \
	DECLARE_FUNCTION(execPauseMontage); \
	DECLARE_FUNCTION(execStopMontageWithBlendSettings); \
	DECLARE_FUNCTION(execStopMontageWithBlendOut); \
	DECLARE_FUNCTION(execStopMontage); \
	DECLARE_FUNCTION(execPlayMontageWithBlendSettings_Blocking); \
	DECLARE_FUNCTION(execPlayMontageWithBlendSettings_NonBlocking); \
	DECLARE_FUNCTION(execPlayMontageWithBlendIn_Blocking); \
	DECLARE_FUNCTION(execPlayMontageWithBlendIn_NonBlocking); \
	DECLARE_FUNCTION(execPlayMontage_Blocking); \
	DECLARE_FUNCTION(execPlayMontage_NonBlocking); \
	DECLARE_FUNCTION(execPrePlayMontage_Blocking); \
	DECLARE_FUNCTION(execPrePlayMontage_NonBlocking); \
	DECLARE_FUNCTION(execGetMontageBlendOutTime); \
	DECLARE_FUNCTION(execGetMontageBlendInTime); \
	DECLARE_FUNCTION(execCanStepUp); \
	DECLARE_FUNCTION(execHasMoveInputEnabled); \
	DECLARE_FUNCTION(execCanMove); \
	DECLARE_FUNCTION(execIsValidPosition); \
	DECLARE_FUNCTION(execSetRootCollisionShapeSafe); \
	DECLARE_FUNCTION(execSetRootCollisionShape); \
	DECLARE_FUNCTION(execLerpRootCollisionWidth); \
	DECLARE_FUNCTION(execLerpRootCollisionHalfHeight); \
	DECLARE_FUNCTION(execIsWithinEdgeTolerance); \
	DECLARE_FUNCTION(execResolveRootCollisionPenetration); \
	DECLARE_FUNCTION(execUpdateFloor); \
	DECLARE_FUNCTION(execGetPlaneNormalWithWorldZ); \
	DECLARE_FUNCTION(execCalculateRollingResistance); \
	DECLARE_FUNCTION(execCalculateAirResistance); \
	DECLARE_FUNCTION(execGetLowerBound); \
	DECLARE_FUNCTION(execComputeTangentialVelocity); \
	DECLARE_FUNCTION(execGetAngularComponentVelocityInDegrees); \
	DECLARE_FUNCTION(execGetAngularComponentVelocityInRadians); \
	DECLARE_FUNCTION(execGetLinearComponentVelocity); \
	DECLARE_FUNCTION(execIsMovable); \
	DECLARE_FUNCTION(execOnStuckInGeometry); \
	DECLARE_FUNCTION(execAutoResolvePenetration); \
	DECLARE_FUNCTION(execLineTracesAlignedVertical); \
	DECLARE_FUNCTION(execK2_SweepRootCollisionMultiByChannel); \
	DECLARE_FUNCTION(execK2_SweepRootCollisionMultiByChannel_Direction); \
	DECLARE_FUNCTION(execK2_SweepRootCollisionSingleByChannel); \
	DECLARE_FUNCTION(execK2_SweepRootCollisionSingleByChannel_Direction); \
	DECLARE_FUNCTION(execIsFloorDirty); \
	DECLARE_FUNCTION(execComputeDistanceRootCollisionToImpactPercentXY); \
	DECLARE_FUNCTION(execGetMaxDistanceToRootCollisionBoundaryXY); \
	DECLARE_FUNCTION(execComputeDistanceToRootCollisionBoundaryXY); \
	DECLARE_FUNCTION(execIsValidExtent); \
	DECLARE_FUNCTION(execGetValidExtent); \
	DECLARE_FUNCTION(execAddToGMCCapsuleRotation); \
	DECLARE_FUNCTION(execSetRootCollisionRotationSafe); \
	DECLARE_FUNCTION(execGetRootCollisionRotation); \
	DECLARE_FUNCTION(execSetRootCollisionRotation); \
	DECLARE_FUNCTION(execSetRootCollisionLocationSafe); \
	DECLARE_FUNCTION(execGetRootCollisionLocation); \
	DECLARE_FUNCTION(execSetRootCollisionLocation); \
	DECLARE_FUNCTION(execSetRootCollisionHalfHeightSafe); \
	DECLARE_FUNCTION(execSetRootCollisionHalfHeight); \
	DECLARE_FUNCTION(execSetRootCollisionExtentSafe); \
	DECLARE_FUNCTION(execSetRootCollisionExtent); \
	DECLARE_FUNCTION(execGetRootCollisionWidth); \
	DECLARE_FUNCTION(execGetRootCollisionOuterHalfHeight); \
	DECLARE_FUNCTION(execGetRootCollisionHalfHeight); \
	DECLARE_FUNCTION(execGetRootCollisionExtent); \
	DECLARE_FUNCTION(execHasSphereCollision); \
	DECLARE_FUNCTION(execHasBoxCollision); \
	DECLARE_FUNCTION(execHasHorizontalCapsuleCollision); \
	DECLARE_FUNCTION(execHasVerticalCapsuleCollision); \
	DECLARE_FUNCTION(execGetRootCollisionShape); \
	DECLARE_FUNCTION(execHasValidRootCollisionScale); \
	DECLARE_FUNCTION(execHasValidRootCollisionExtent); \
	DECLARE_FUNCTION(execHasValidRootCollisionShape); \
	DECLARE_FUNCTION(execIsUpdatedComponentRootCollision); \
	DECLARE_FUNCTION(execToAngularVelocityQuat); \
	DECLARE_FUNCTION(execToAngularVelocityRotator); \
	DECLARE_FUNCTION(execGetWorldRotator); \
	DECLARE_FUNCTION(execGetWorldVectorByRotation); \
	DECLARE_FUNCTION(execGetWorldVector); \
	DECLARE_FUNCTION(execGetBasedRotatorYaw); \
	DECLARE_FUNCTION(execGetBasedRotator); \
	DECLARE_FUNCTION(execGetBasedVectorByRotation); \
	DECLARE_FUNCTION(execGetBasedVector); \
	DECLARE_FUNCTION(execRoundBasedRotatorYaw); \
	DECLARE_FUNCTION(execRoundBasedRotator); \
	DECLARE_FUNCTION(execRoundBasedVectorByRotation); \
	DECLARE_FUNCTION(execRoundBasedVector); \
	DECLARE_FUNCTION(execRoundRotator); \
	DECLARE_FUNCTION(execRoundVector); \
	DECLARE_FUNCTION(execRoundDouble); \
	DECLARE_FUNCTION(execRoundFloat); \
	DECLARE_FUNCTION(execDirectionsDifferZ); \
	DECLARE_FUNCTION(execDirectionsDifferXY); \
	DECLARE_FUNCTION(execDirectionsDiffer); \
	DECLARE_FUNCTION(execResizeVector); \
	DECLARE_FUNCTION(execComputeImmersionDepth); \
	DECLARE_FUNCTION(execRotateYawTowardsDirectionSafe); \
	DECLARE_FUNCTION(execRotateYawTowardsDirection); \
	DECLARE_FUNCTION(execGenerateNetRandomAngle); \
	DECLARE_FUNCTION(execGenerateNetRandomNumber); \
	DECLARE_FUNCTION(execAdjustVelocityFromNormal); \
	DECLARE_FUNCTION(execAdjustVelocityFromHit); \
	DECLARE_FUNCTION(execGetSpeedZ); \
	DECLARE_FUNCTION(execGetSpeedXY); \
	DECLARE_FUNCTION(execGetSpeed); \
	DECLARE_FUNCTION(execHaltMovement); \
	DECLARE_FUNCTION(execHasMoved); \
	DECLARE_FUNCTION(execUpdateVelocityFromMovedDistance); \
	DECLARE_FUNCTION(execTransformInputVectorAllRelative); \
	DECLARE_FUNCTION(execTransformInputVectorAbsoluteZ); \
	DECLARE_FUNCTION(execSetPhysDeltaTime); \
	DECLARE_FUNCTION(execAddRadialImpulse); \
	DECLARE_FUNCTION(execAddRadialForce); \
	DECLARE_FUNCTION(execAddImpulse); \
	DECLARE_FUNCTION(execAddForce); \
	DECLARE_FUNCTION(execAddAcceleration); \
	DECLARE_FUNCTION(execAddVelocity); \
	DECLARE_FUNCTION(execUpdateForce); \
	DECLARE_FUNCTION(execUpdateAcceleration); \
	DECLARE_FUNCTION(execUpdateVelocity); \
	DECLARE_FUNCTION(execGetStartLocation); \
	DECLARE_FUNCTION(execGetStartVelocity); \
	DECLARE_FUNCTION(execGetTransientForce); \
	DECLARE_FUNCTION(execGetTransientAcceleration); \
	DECLARE_FUNCTION(execGetPhysDeltaTime); \
	DECLARE_FUNCTION(execGetSkippedSmoothingIndices); \
	DECLARE_FUNCTION(execGetSmoothingTargetIdx); \
	DECLARE_FUNCTION(execGetSmoothingTime); \
	DECLARE_FUNCTION(execIsCombinedMove); \
	DECLARE_FUNCTION(execIsSimulatedMove); \
	DECLARE_FUNCTION(execIsLocalMove); \
	DECLARE_FUNCTION(execIsSubSteppedIteration); \
	DECLARE_FUNCTION(execGetIterationNumber); \
	DECLARE_FUNCTION(execGetMoveInputState); \
	DECLARE_FUNCTION(execGetMoveDeltaTime); \
	DECLARE_FUNCTION(execGetMoveTimestamp); \
	DECLARE_FUNCTION(execPreProcessMoveDeltaTime); \
	DECLARE_FUNCTION(execGenAncillaryTick); \
	DECLARE_FUNCTION(execGenSimulationTick); \
	DECLARE_FUNCTION(execGenPredictionTick);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCMovementUtilityComponent_h_429_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCMovementUtilityComponent_h_429_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGMC_MovementUtilityCmp(); \
	friend struct Z_Construct_UClass_UGMC_MovementUtilityCmp_Statics; \
public: \
	DECLARE_CLASS(UGMC_MovementUtilityCmp, UGMC_ReplicationCmp, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GMCCore"), NO_API) \
	DECLARE_SERIALIZER(UGMC_MovementUtilityCmp)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCMovementUtilityComponent_h_429_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGMC_MovementUtilityCmp(UGMC_MovementUtilityCmp&&); \
	UGMC_MovementUtilityCmp(const UGMC_MovementUtilityCmp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGMC_MovementUtilityCmp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGMC_MovementUtilityCmp); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGMC_MovementUtilityCmp) \
	NO_API virtual ~UGMC_MovementUtilityCmp();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCMovementUtilityComponent_h_426_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCMovementUtilityComponent_h_429_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCMovementUtilityComponent_h_429_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCMovementUtilityComponent_h_429_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCMovementUtilityComponent_h_429_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCMovementUtilityComponent_h_429_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GMCCORE_API UClass* StaticClass<class UGMC_MovementUtilityCmp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCMovementUtilityComponent_h


#define FOREACH_ENUM_EGMC_RADIALIMPULSEFALLOFF(op) \
	op(EGMC_RadialImpulseFalloff::Constant) \
	op(EGMC_RadialImpulseFalloff::Linear) 

enum class EGMC_RadialImpulseFalloff : uint8;
template<> struct TIsUEnumClass<EGMC_RadialImpulseFalloff> { enum { Value = true }; };
template<> GMCCORE_API UEnum* StaticEnum<EGMC_RadialImpulseFalloff>();

#define FOREACH_ENUM_EGMC_COLLISIONSHAPE(op) \
	op(EGMC_CollisionShape::VerticalCapsule) \
	op(EGMC_CollisionShape::HorizontalCapsule) \
	op(EGMC_CollisionShape::Box) \
	op(EGMC_CollisionShape::Sphere) \
	op(EGMC_CollisionShape::Invalid) 

enum class EGMC_CollisionShape : uint8;
template<> struct TIsUEnumClass<EGMC_CollisionShape> { enum { Value = true }; };
template<> GMCCORE_API UEnum* StaticEnum<EGMC_CollisionShape>();

#define FOREACH_ENUM_EGMC_ADJUSTDIRECTION(op) \
	op(EGMC_AdjustDirection::Up) \
	op(EGMC_AdjustDirection::Down) 

enum class EGMC_AdjustDirection : uint8;
template<> struct TIsUEnumClass<EGMC_AdjustDirection> { enum { Value = true }; };
template<> GMCCORE_API UEnum* StaticEnum<EGMC_AdjustDirection>();

#define FOREACH_ENUM_EGMC_OVERLAPTYPE(op) \
	op(EGMC_OverlapType::Begin) \
	op(EGMC_OverlapType::End) 

enum class EGMC_OverlapType : uint8;
template<> struct TIsUEnumClass<EGMC_OverlapType> { enum { Value = true }; };
template<> GMCCORE_API UEnum* StaticEnum<EGMC_OverlapType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
