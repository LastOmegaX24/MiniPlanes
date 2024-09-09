// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/GMCReplicationComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AGMC_Pawn;
class AGMC_RollbackActor;
class APlayerController;
class UActorComponent;
class UAnimMontage;
class UInputComponent;
class USceneComponent;
enum class EGMC_CombineMode : uint8;
enum class EGMC_InterpolationFunction : uint8;
enum class EGMC_InterpolationStates : uint8;
enum class EGMC_NetContext : uint8;
enum class EGMC_PredictionMode : uint8;
enum class EGMC_SimulationMode : uint8;
enum class EGMC_SyncType : uint8;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FGMC_ClientAuthPhysicsSettings;
struct FGMC_Move;
struct FGMC_NumericValue;
struct FGMC_PawnState;
struct FGMC_PhysicsInterpState;
struct FGMC_ServerAuthPhysicsSettings;
struct FHitResult;
struct FInstancedStruct;
#ifdef GMCCORE_GMCReplicationComponent_generated_h
#error "GMCReplicationComponent.generated.h already included, missing '#pragma once' in GMCReplicationComponent.h"
#endif
#define GMCCORE_GMCReplicationComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCReplicationComponent_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGMC_Move_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GMCCORE_API UScriptStruct* StaticStruct<struct FGMC_Move>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCReplicationComponent_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetBoundInstancedStructSuspended); \
	DECLARE_FUNCTION(execSetBoundGameplayTagContainerSuspended); \
	DECLARE_FUNCTION(execSetBoundGameplayTagSuspended); \
	DECLARE_FUNCTION(execSetBoundNameSuspended); \
	DECLARE_FUNCTION(execSetBoundAnimMontageReferenceSuspended); \
	DECLARE_FUNCTION(execSetBoundActorComponentReferenceSuspended); \
	DECLARE_FUNCTION(execSetBoundActorReferenceSuspended); \
	DECLARE_FUNCTION(execSetBoundCompressedRotatorSuspended); \
	DECLARE_FUNCTION(execSetBoundCompressedVectorSuspended); \
	DECLARE_FUNCTION(execSetBoundCompressedVector2DSuspended); \
	DECLARE_FUNCTION(execSetBoundTruncatedDoublePrecisionFloatSuspended); \
	DECLARE_FUNCTION(execSetBoundCompressedDoublePrecisionFloatSuspended); \
	DECLARE_FUNCTION(execSetBoundDoublePrecisionFloatSuspended); \
	DECLARE_FUNCTION(execSetBoundCompressedSinglePrecisionFloatSuspended); \
	DECLARE_FUNCTION(execSetBoundSinglePrecisionFloatSuspended); \
	DECLARE_FUNCTION(execSetBoundIntSuspended); \
	DECLARE_FUNCTION(execSetBoundByteSuspended); \
	DECLARE_FUNCTION(execSetBoundHalfByteSuspended); \
	DECLARE_FUNCTION(execSetBoundInstancedStruct); \
	DECLARE_FUNCTION(execSetBoundGameplayTagContainer); \
	DECLARE_FUNCTION(execSetBoundGameplayTag); \
	DECLARE_FUNCTION(execSetBoundName); \
	DECLARE_FUNCTION(execSetBoundAnimMontageReference); \
	DECLARE_FUNCTION(execSetBoundActorComponentReference); \
	DECLARE_FUNCTION(execSetBoundActorReference); \
	DECLARE_FUNCTION(execSetBoundCompressedRotator); \
	DECLARE_FUNCTION(execSetBoundCompressedVector); \
	DECLARE_FUNCTION(execSetBoundCompressedVector2D); \
	DECLARE_FUNCTION(execSetBoundTruncatedDoublePrecisionFloat); \
	DECLARE_FUNCTION(execSetBoundCompressedDoublePrecisionFloat); \
	DECLARE_FUNCTION(execSetBoundDoublePrecisionFloat); \
	DECLARE_FUNCTION(execSetBoundCompressedSinglePrecisionFloat); \
	DECLARE_FUNCTION(execSetBoundSinglePrecisionFloat); \
	DECLARE_FUNCTION(execSetBoundInt); \
	DECLARE_FUNCTION(execSetBoundByte); \
	DECLARE_FUNCTION(execSetBoundHalfByte); \
	DECLARE_FUNCTION(execSetBoundBool); \
	DECLARE_FUNCTION(execGetBoundInstancedStruct); \
	DECLARE_FUNCTION(execGetBoundGameplayTagContainer); \
	DECLARE_FUNCTION(execGetBoundGameplayTag); \
	DECLARE_FUNCTION(execGetBoundName); \
	DECLARE_FUNCTION(execGetBoundAnimMontageReference); \
	DECLARE_FUNCTION(execGetBoundActorComponentReference); \
	DECLARE_FUNCTION(execGetBoundActorReference); \
	DECLARE_FUNCTION(execGetBoundCompressedRotator); \
	DECLARE_FUNCTION(execGetBoundCompressedVector); \
	DECLARE_FUNCTION(execGetBoundCompressedVector2D); \
	DECLARE_FUNCTION(execGetBoundTruncatedDoublePrecisionFloat); \
	DECLARE_FUNCTION(execGetBoundCompressedDoublePrecisionFloat); \
	DECLARE_FUNCTION(execGetBoundDoublePrecisionFloat); \
	DECLARE_FUNCTION(execGetBoundCompressedSinglePrecisionFloat); \
	DECLARE_FUNCTION(execGetBoundSinglePrecisionFloat); \
	DECLARE_FUNCTION(execGetBoundInt); \
	DECLARE_FUNCTION(execGetBoundByte); \
	DECLARE_FUNCTION(execGetBoundHalfByte); \
	DECLARE_FUNCTION(execGetBoundBool); \
	DECLARE_FUNCTION(execBindInstancedStruct); \
	DECLARE_FUNCTION(execBindGameplayTagContainer); \
	DECLARE_FUNCTION(execBindGameplayTag); \
	DECLARE_FUNCTION(execBindName); \
	DECLARE_FUNCTION(execBindAnimMontageReference); \
	DECLARE_FUNCTION(execBindActorComponentReference); \
	DECLARE_FUNCTION(execBindActorReference); \
	DECLARE_FUNCTION(execBindCompressedRotator); \
	DECLARE_FUNCTION(execBindCompressedVector); \
	DECLARE_FUNCTION(execBindCompressedVector2D); \
	DECLARE_FUNCTION(execBindTruncatedDoublePrecisionFloat); \
	DECLARE_FUNCTION(execBindCompressedDoublePrecisionFloat); \
	DECLARE_FUNCTION(execBindDoublePrecisionFloat); \
	DECLARE_FUNCTION(execBindCompressedSinglePrecisionFloat); \
	DECLARE_FUNCTION(execBindSinglePrecisionFloat); \
	DECLARE_FUNCTION(execBindInt); \
	DECLARE_FUNCTION(execBindByte); \
	DECLARE_FUNCTION(execBindHalfByte); \
	DECLARE_FUNCTION(execBindBool); \
	DECLARE_FUNCTION(execInterpolatePhysicsCustom8); \
	DECLARE_FUNCTION(execInterpolatePhysicsCustom7); \
	DECLARE_FUNCTION(execInterpolatePhysicsCustom6); \
	DECLARE_FUNCTION(execInterpolatePhysicsCustom5); \
	DECLARE_FUNCTION(execInterpolatePhysicsCustom4); \
	DECLARE_FUNCTION(execInterpolatePhysicsCustom3); \
	DECLARE_FUNCTION(execInterpolatePhysicsCustom2); \
	DECLARE_FUNCTION(execInterpolatePhysicsCustom1); \
	DECLARE_FUNCTION(execInterpolateCustom8); \
	DECLARE_FUNCTION(execInterpolateCustom7); \
	DECLARE_FUNCTION(execInterpolateCustom6); \
	DECLARE_FUNCTION(execInterpolateCustom5); \
	DECLARE_FUNCTION(execInterpolateCustom4); \
	DECLARE_FUNCTION(execInterpolateCustom3); \
	DECLARE_FUNCTION(execInterpolateCustom2); \
	DECLARE_FUNCTION(execInterpolateCustom1); \
	DECLARE_FUNCTION(execInterpolateCubic); \
	DECLARE_FUNCTION(execInterpolateLinear); \
	DECLARE_FUNCTION(execInterpolateTargetValue); \
	DECLARE_FUNCTION(execInterpolateStartValue); \
	DECLARE_FUNCTION(execInterpolateNearestNeighbour); \
	DECLARE_FUNCTION(execShouldTickGMCActor); \
	DECLARE_FUNCTION(execShouldRollBackGMCActor); \
	DECLARE_FUNCTION(execShouldRollBackGMCPawn); \
	DECLARE_FUNCTION(execRollbackBuffer); \
	DECLARE_FUNCTION(execCL_OnClientAuthPhysicsSimulationToggled); \
	DECLARE_FUNCTION(execCL_OnServerAuthPhysicsSimulationToggled); \
	DECLARE_FUNCTION(execCL_SetSyncDataCombinedMove_Custom); \
	DECLARE_FUNCTION(execCL_CheckSyncDataShouldCombineMove_Custom); \
	DECLARE_FUNCTION(execCL_SwapNoPredictionBuffer); \
	DECLARE_FUNCTION(execCL_NoPredictionBuffer); \
	DECLARE_FUNCTION(execSV_CheckForcedNetUpdate_Custom); \
	DECLARE_FUNCTION(execSV_RemoteServerPawnSmoothingBuffer); \
	DECLARE_FUNCTION(execIsReadyForPlay); \
	DECLARE_FUNCTION(execClearTransientData); \
	DECLARE_FUNCTION(execGetMaxCombinedDeltaTime); \
	DECLARE_FUNCTION(execGetClientSendRate); \
	DECLARE_FUNCTION(execCalculateSubDeltaTime); \
	DECLARE_FUNCTION(execSPMove); \
	DECLARE_FUNCTION(execAPMove); \
	DECLARE_FUNCTION(execLocalMove); \
	DECLARE_FUNCTION(execGetTangentialVelocity_GMC); \
	DECLARE_FUNCTION(execGetControllerRotation_GMC); \
	DECLARE_FUNCTION(execSetControllerRotation_GMC); \
	DECLARE_FUNCTION(execGetActorTransform_GMC); \
	DECLARE_FUNCTION(execSetActorTransform_GMC); \
	DECLARE_FUNCTION(execGetActorScale_GMC); \
	DECLARE_FUNCTION(execSetActorScale_GMC); \
	DECLARE_FUNCTION(execSetActorLocationAndQuat_GMC); \
	DECLARE_FUNCTION(execSetActorLocationAndRotation_GMC); \
	DECLARE_FUNCTION(execGetActorQuat_GMC); \
	DECLARE_FUNCTION(execSetActorQuat_GMC); \
	DECLARE_FUNCTION(execGetActorRotation_GMC); \
	DECLARE_FUNCTION(execSetActorRotation_GMC); \
	DECLARE_FUNCTION(execGetActorLocation_GMC); \
	DECLARE_FUNCTION(execSetActorLocation_GMC); \
	DECLARE_FUNCTION(execGetAngularVelocity_GMC); \
	DECLARE_FUNCTION(execSetAngularVelocity_GMC); \
	DECLARE_FUNCTION(execGetLinearVelocity_GMC); \
	DECLARE_FUNCTION(execSetLinearVelocity_GMC); \
	DECLARE_FUNCTION(execGetVelocity); \
	DECLARE_FUNCTION(execSetVelocity); \
	DECLARE_FUNCTION(execGetElapsedTimeSinceSpawn); \
	DECLARE_FUNCTION(execEnableGMC); \
	DECLARE_FUNCTION(execIsGMCEnabled); \
	DECLARE_FUNCTION(execIsUsingUnreliableClientMoves); \
	DECLARE_FUNCTION(execEnableClientPrediction); \
	DECLARE_FUNCTION(execIsUsingClientPrediction); \
	DECLARE_FUNCTION(execIsUsingClientAuthPhysicsReplication); \
	DECLARE_FUNCTION(execIsUsingServerAuthPhysicsReplication); \
	DECLARE_FUNCTION(execEnableClientAuthPhysicsSimulationLocal); \
	DECLARE_FUNCTION(execSV_EnableClientAuthPhysicsSimulation); \
	DECLARE_FUNCTION(execEnableServerAuthPhysicsSimulationLocal); \
	DECLARE_FUNCTION(execSV_EnableServerAuthPhysicsSimulation); \
	DECLARE_FUNCTION(execIsServerBot); \
	DECLARE_FUNCTION(execGetActorBase); \
	DECLARE_FUNCTION(execSetActorBase); \
	DECLARE_FUNCTION(execGetBasedControlRotationFor); \
	DECLARE_FUNCTION(execGetBasedControlRotation); \
	DECLARE_FUNCTION(execGetWorldControlRotationFor); \
	DECLARE_FUNCTION(execSetBasedControlRotation); \
	DECLARE_FUNCTION(execGetBasedActorScaleFor); \
	DECLARE_FUNCTION(execGetBasedActorScale); \
	DECLARE_FUNCTION(execGetWorldActorScaleFor); \
	DECLARE_FUNCTION(execSetBasedActorScale); \
	DECLARE_FUNCTION(execGetBasedActorRotationFor); \
	DECLARE_FUNCTION(execGetBasedActorRotation); \
	DECLARE_FUNCTION(execGetWorldActorRotationFor); \
	DECLARE_FUNCTION(execSetBasedActorRotation); \
	DECLARE_FUNCTION(execGetBasedActorLocationFor); \
	DECLARE_FUNCTION(execGetBasedActorLocation); \
	DECLARE_FUNCTION(execGetWorldActorLocationFor); \
	DECLARE_FUNCTION(execSetBasedActorLocation); \
	DECLARE_FUNCTION(execGetBasedAngularVelocityFor); \
	DECLARE_FUNCTION(execGetBasedAngularVelocity); \
	DECLARE_FUNCTION(execGetWorldAngularVelocityFor); \
	DECLARE_FUNCTION(execSetBasedAngularVelocity); \
	DECLARE_FUNCTION(execGetBasedLinearVelocityFor); \
	DECLARE_FUNCTION(execGetBasedLinearVelocity); \
	DECLARE_FUNCTION(execGetWorldLinearVelocityFor); \
	DECLARE_FUNCTION(execSetBasedLinearVelocity); \
	DECLARE_FUNCTION(execSetControlRotationSuspended); \
	DECLARE_FUNCTION(execSetActorScaleSuspended); \
	DECLARE_FUNCTION(execSetActorRotationSuspended); \
	DECLARE_FUNCTION(execSetActorLocationSuspended); \
	DECLARE_FUNCTION(execSetAngularVelocitySuspended); \
	DECLARE_FUNCTION(execSetLinearVelocitySuspended); \
	DECLARE_FUNCTION(execSetControlRotationInState); \
	DECLARE_FUNCTION(execSetActorScaleInState); \
	DECLARE_FUNCTION(execSetActorRotationInState); \
	DECLARE_FUNCTION(execSetActorLocationInState); \
	DECLARE_FUNCTION(execSetAngularVelocityInState); \
	DECLARE_FUNCTION(execSetLinearVelocityInState); \
	DECLARE_FUNCTION(execGetControlRotationFromState); \
	DECLARE_FUNCTION(execGetActorScaleFromState); \
	DECLARE_FUNCTION(execGetActorRotationFromState); \
	DECLARE_FUNCTION(execGetActorLocationFromState); \
	DECLARE_FUNCTION(execGetAngularVelocityFromState); \
	DECLARE_FUNCTION(execGetLinearVelocityFromState); \
	DECLARE_FUNCTION(execApplyPawnState); \
	DECLARE_FUNCTION(execGetPawnState); \
	DECLARE_FUNCTION(execGetControlRotationWorldSpace); \
	DECLARE_FUNCTION(execGetControlRotationLocalSpace); \
	DECLARE_FUNCTION(execCL_GetNumPendingClientMoves); \
	DECLARE_FUNCTION(execGetMoveHistoryMaxSize); \
	DECLARE_FUNCTION(execGetCurrentMoveHistoryNum); \
	DECLARE_FUNCTION(execIsValidMoveHistoryIndex); \
	DECLARE_FUNCTION(execAccessMoveHistory); \
	DECLARE_FUNCTION(execCL_DoNotCombineNextMove); \
	DECLARE_FUNCTION(execSetComponentWorldScaleWithSmoothOffset); \
	DECLARE_FUNCTION(execSetComponentWorldRotationWithSmoothOffset); \
	DECLARE_FUNCTION(execSetComponentWorldLocationWithSmoothOffset); \
	DECLARE_FUNCTION(execSetComponentWorldTransformWithSmoothOffset); \
	DECLARE_FUNCTION(execGetComponentToSmoothOffset); \
	DECLARE_FUNCTION(execGetComponentToSmooth); \
	DECLARE_FUNCTION(execSetComponentToSmooth); \
	DECLARE_FUNCTION(execIsPerformingExtrapolationRecovery); \
	DECLARE_FUNCTION(execTriggerExtrapolationRecovery); \
	DECLARE_FUNCTION(execWasExtrapolatingLastUpdate); \
	DECLARE_FUNCTION(execHasReachedMaxExtrapolationDistance); \
	DECLARE_FUNCTION(execIsExtrapolating); \
	DECLARE_FUNCTION(execIsCumulativeSmoothingUpdate); \
	DECLARE_FUNCTION(execGetLastExtrapTargetTime); \
	DECLARE_FUNCTION(execGetLastInterpTargetTime); \
	DECLARE_FUNCTION(execIsSimulating); \
	DECLARE_FUNCTION(execSV_GetLastClientData); \
	DECLARE_FUNCTION(execSV_IsExecutingRemoteMoves); \
	DECLARE_FUNCTION(execCL_GetCurrentReplayMove); \
	DECLARE_FUNCTION(execCL_GetCurrentReplayMoveIndex); \
	DECLARE_FUNCTION(execCL_IsReplaying); \
	DECLARE_FUNCTION(execSV_IsRewound); \
	DECLARE_FUNCTION(execSV_RestorePawnAfterRewind); \
	DECLARE_FUNCTION(execSV_RewindPawn); \
	DECLARE_FUNCTION(execSV_GetRewindParams); \
	DECLARE_FUNCTION(execFindMoveByIndex); \
	DECLARE_FUNCTION(execFindMove); \
	DECLARE_FUNCTION(execCL_GetTimeDiscrepancy); \
	DECLARE_FUNCTION(execCL_GetTimeSinceLastMoveBatchWasSent); \
	DECLARE_FUNCTION(execCL_IsPerformingSmoothCorrection); \
	DECLARE_FUNCTION(execSV_SwapRollbackState); \
	DECLARE_FUNCTION(execSV_SwapServerState); \
	DECLARE_FUNCTION(execIsExecutingSimulatedMove); \
	DECLARE_FUNCTION(execIsExecutingNonSimulatedMove); \
	DECLARE_FUNCTION(execIsExecutingLocalMove); \
	DECLARE_FUNCTION(execIsExecutingMove); \
	DECLARE_FUNCTION(execIsNetworkedServer); \
	DECLARE_FUNCTION(execIsSimulatedPawn); \
	DECLARE_FUNCTION(execIsPlayerControlledPawn); \
	DECLARE_FUNCTION(execIsSmoothedListenServerPawn); \
	DECLARE_FUNCTION(execIsRemotelyControlledListenServerPawn); \
	DECLARE_FUNCTION(execIsLocallyControlledListenServerPawn); \
	DECLARE_FUNCTION(execIsRemotelyControlledDedicatedServerPawn); \
	DECLARE_FUNCTION(execIsLocallyControlledDedicatedServerPawn); \
	DECLARE_FUNCTION(execIsRemotelyControlledNonPredictedServerPawn); \
	DECLARE_FUNCTION(execIsRemotelyControlledPredictedServerPawn); \
	DECLARE_FUNCTION(execIsRemotelyControlledServerPawn); \
	DECLARE_FUNCTION(execIsLocallyControlledServerPawn); \
	DECLARE_FUNCTION(execIsServerPawn); \
	DECLARE_FUNCTION(execIsNonPredictedAutonomousProxy); \
	DECLARE_FUNCTION(execIsPredictedAutonomousProxy); \
	DECLARE_FUNCTION(execIsClientPawn); \
	DECLARE_FUNCTION(execIsNonPlayerControlledSimulatedProxy); \
	DECLARE_FUNCTION(execIsPlayerControlledSimulatedProxy); \
	DECLARE_FUNCTION(execIsSimulatedProxy); \
	DECLARE_FUNCTION(execIsAutonomousProxy); \
	DECLARE_FUNCTION(execGetGMCPawnOwner); \
	DECLARE_FUNCTION(execGetTime); \
	DECLARE_FUNCTION(execOnGMCDisabled); \
	DECLARE_FUNCTION(execOnGMCEnabled); \
	DECLARE_FUNCTION(execOnUnreliableClientMovesDeactivated); \
	DECLARE_FUNCTION(execOnUnreliableClientMovesActivated); \
	DECLARE_FUNCTION(execOnClientPredictionDisabled); \
	DECLARE_FUNCTION(execOnClientPredictionEnabled); \
	DECLARE_FUNCTION(execSetupPlayerInputComponent); \
	DECLARE_FUNCTION(execOnClientAuthPhysicsSimulationToggled); \
	DECLARE_FUNCTION(execOnServerAuthPhysicsSimulationToggled); \
	DECLARE_FUNCTION(execSV_OnPawnRestoredAfterRewind); \
	DECLARE_FUNCTION(execSV_OnPawnRewound); \
	DECLARE_FUNCTION(execOnPawnRestoredAfterRollback); \
	DECLARE_FUNCTION(execOnPawnRolledBack); \
	DECLARE_FUNCTION(execOnSyncDataApplied); \
	DECLARE_FUNCTION(execPreSmoothing); \
	DECLARE_FUNCTION(execPostPlayerTick); \
	DECLARE_FUNCTION(execPrePlayerTick); \
	DECLARE_FUNCTION(execPostLocalMoveExecution); \
	DECLARE_FUNCTION(execPreLocalMoveExecution); \
	DECLARE_FUNCTION(execCL_OnSmoothCorrectionCompleted); \
	DECLARE_FUNCTION(execCL_IsAllowedToReplay); \
	DECLARE_FUNCTION(execCL_PostReplay); \
	DECLARE_FUNCTION(execCL_PreReplay); \
	DECLARE_FUNCTION(execCL_PostReplayMoveExecution); \
	DECLARE_FUNCTION(execCL_PreReplayMoveExecution); \
	DECLARE_FUNCTION(execCL_OnSPMoveReceived); \
	DECLARE_FUNCTION(execCL_OnAPMoveReceived); \
	DECLARE_FUNCTION(execSV_OnSPMoveSaved); \
	DECLARE_FUNCTION(execSV_OnAPMoveSaved); \
	DECLARE_FUNCTION(execPostSimulatedMoveExecution); \
	DECLARE_FUNCTION(execPreSimulatedMoveExecution); \
	DECLARE_FUNCTION(execOnSimulationMoveEnqueued); \
	DECLARE_FUNCTION(execOnCumulativeMoveInitialized); \
	DECLARE_FUNCTION(execSV_OnProxyMoveInitialized); \
	DECLARE_FUNCTION(execSV_OnRemoteMovesProcessed); \
	DECLARE_FUNCTION(execSV_PreRemoteMovesProcessing); \
	DECLARE_FUNCTION(execSV_PostRemoteMoveExecution); \
	DECLARE_FUNCTION(execSV_PreRemoteMoveExecution); \
	DECLARE_FUNCTION(execSV_HandleConspicuousClient); \
	DECLARE_FUNCTION(execSV_ValidateRemoteMoves); \
	DECLARE_FUNCTION(execWorldTickEnd); \
	DECLARE_FUNCTION(execWorldTickStart); \
	DECLARE_FUNCTION(execBindReplicationData);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCReplicationComponent_h_64_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCReplicationComponent_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGMC_ReplicationCmp(); \
	friend struct Z_Construct_UClass_UGMC_ReplicationCmp_Statics; \
public: \
	DECLARE_CLASS(UGMC_ReplicationCmp, UPawnMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GMCCore"), NO_API) \
	DECLARE_SERIALIZER(UGMC_ReplicationCmp)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCReplicationComponent_h_64_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGMC_ReplicationCmp(UGMC_ReplicationCmp&&); \
	UGMC_ReplicationCmp(const UGMC_ReplicationCmp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGMC_ReplicationCmp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGMC_ReplicationCmp); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGMC_ReplicationCmp) \
	NO_API virtual ~UGMC_ReplicationCmp();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCReplicationComponent_h_61_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCReplicationComponent_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCReplicationComponent_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCReplicationComponent_h_64_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCReplicationComponent_h_64_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCReplicationComponent_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GMCCORE_API UClass* StaticClass<class UGMC_ReplicationCmp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Components_GMCReplicationComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
