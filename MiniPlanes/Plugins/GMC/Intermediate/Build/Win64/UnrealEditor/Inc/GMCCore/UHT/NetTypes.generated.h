// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Replication/NetTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GMCCORE_NetTypes_generated_h
#error "NetTypes.generated.h already included, missing '#pragma once' in NetTypes.h"
#endif
#define GMCCORE_NetTypes_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_NetTypes_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGMC_ClientInfo_Statics; \
	GMCCORE_API static class UScriptStruct* StaticStruct();


template<> GMCCORE_API UScriptStruct* StaticStruct<struct FGMC_ClientInfo>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_NetTypes_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGMC_NetInfo_Statics; \
	GMCCORE_API static class UScriptStruct* StaticStruct();


template<> GMCCORE_API UScriptStruct* StaticStruct<struct FGMC_NetInfo>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_NetTypes_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGMC_MetaData_Statics; \
	GMCCORE_API static class UScriptStruct* StaticStruct();


template<> GMCCORE_API UScriptStruct* StaticStruct<struct FGMC_MetaData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_NetTypes_h


#define FOREACH_ENUM_EGMC_NETCONTEXT(op) \
	op(EGMC_NetContext::NoContextInformation) \
	op(EGMC_NetContext::LocalServerPawn_PreMoveExecution) \
	op(EGMC_NetContext::LocalServerPawn_PostMoveExecution) \
	op(EGMC_NetContext::LocalClientPawn_PreMoveExecution) \
	op(EGMC_NetContext::LocalClientPawn_PostMoveExecution) \
	op(EGMC_NetContext::LocalClientPawn_PreMoveExecutionNoPrediction) \
	op(EGMC_NetContext::LocalClientPawn_PostMoveExecutionNoPrediction) \
	op(EGMC_NetContext::LocalClientPawn_ReplayAborted) \
	op(EGMC_NetContext::LocalClientPawn_ServerStateAdoptedForReplay) \
	op(EGMC_NetContext::LocalClientPawn_PreReplay) \
	op(EGMC_NetContext::LocalClientPawn_PreReplayMoveExecution) \
	op(EGMC_NetContext::LocalClientPawn_PostReplayMoveExecution) \
	op(EGMC_NetContext::LocalClientPawn_PostReplay) \
	op(EGMC_NetContext::LocalClientPawn_Simulation) \
	op(EGMC_NetContext::LocalClientPawn_ExtrapolationAborted) \
	op(EGMC_NetContext::LocalClientPawn_PrePlayerTickNoPrediction) \
	op(EGMC_NetContext::LocalClientPawn_PostPlayerTickNoPrediction) \
	op(EGMC_NetContext::LocalClientPawn_PredictionEnabled) \
	op(EGMC_NetContext::LocalClientPawn_PredictionDisabled) \
	op(EGMC_NetContext::RemoteServerPawn_PreMoveProcessing) \
	op(EGMC_NetContext::RemoteServerPawn_PreMoveExecution) \
	op(EGMC_NetContext::RemoteServerPawn_PostMoveExecution) \
	op(EGMC_NetContext::RemoteServerPawn_PostMoveProcessing) \
	op(EGMC_NetContext::RemoteServerPawn_Smoothing) \
	op(EGMC_NetContext::RemoteServerPawn_UnSmoothing) \
	op(EGMC_NetContext::RemoteServerPawn_Simulation) \
	op(EGMC_NetContext::RemoteServerPawn_ExtrapolationAborted) \
	op(EGMC_NetContext::RemoteClientPawn_Simulation) \
	op(EGMC_NetContext::RemoteClientPawn_ExtrapolationAborted) \
	op(EGMC_NetContext::ManualRewind) \
	op(EGMC_NetContext::PostManualRewind) \
	op(EGMC_NetContext::RollbackSwap) \
	op(EGMC_NetContext::RegularTickUpdate) 

enum class EGMC_NetContext : uint8;
template<> struct TIsUEnumClass<EGMC_NetContext> { enum { Value = true }; };
template<> GMCCORE_API UEnum* StaticEnum<EGMC_NetContext>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
