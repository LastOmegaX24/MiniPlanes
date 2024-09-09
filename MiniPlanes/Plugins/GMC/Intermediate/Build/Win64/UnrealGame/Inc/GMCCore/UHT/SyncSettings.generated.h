// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Replication/SyncSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GMCCORE_SyncSettings_generated_h
#error "SyncSettings.generated.h already included, missing '#pragma once' in SyncSettings.h"
#endif
#define GMCCORE_SyncSettings_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_SyncSettings_h_215_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGMC_DefaultPredictionSettings_Statics; \
	GMCCORE_API static class UScriptStruct* StaticStruct();


template<> GMCCORE_API UScriptStruct* StaticStruct<struct FGMC_DefaultPredictionSettings>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_SyncSettings_h_242_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGMC_DefaultCombineSettings_Statics; \
	GMCCORE_API static class UScriptStruct* StaticStruct();


template<> GMCCORE_API UScriptStruct* StaticStruct<struct FGMC_DefaultCombineSettings>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_SyncSettings_h_269_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGMC_DefaultSimulationSettings_Statics; \
	GMCCORE_API static class UScriptStruct* StaticStruct();


template<> GMCCORE_API UScriptStruct* StaticStruct<struct FGMC_DefaultSimulationSettings>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_SyncSettings_h_296_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGMC_DefaultInterpolationFunctions_Statics; \
	GMCCORE_API static class UScriptStruct* StaticStruct();


template<> GMCCORE_API UScriptStruct* StaticStruct<struct FGMC_DefaultInterpolationFunctions>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_SyncSettings_h_323_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGMC_DefaultCompressionSettings_Statics; \
	GMCCORE_API static class UScriptStruct* StaticStruct();


template<> GMCCORE_API UScriptStruct* StaticStruct<struct FGMC_DefaultCompressionSettings>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_SyncSettings_h_347_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGMC_DefaultErrorTolerances_Statics; \
	GMCCORE_API static class UScriptStruct* StaticStruct();


template<> GMCCORE_API UScriptStruct* StaticStruct<struct FGMC_DefaultErrorTolerances>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_SyncSettings_h_388_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGMC_DefaultReplicationSettings_Statics; \
	GMCCORE_API static class UScriptStruct* StaticStruct();


template<> GMCCORE_API UScriptStruct* StaticStruct<struct FGMC_DefaultReplicationSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_SyncSettings_h


#define FOREACH_ENUM_EGMC_PREDICTIONMODE(op) \
	op(EGMC_PredictionMode::ServerAuth_Output_ClientValidated) \
	op(EGMC_PredictionMode::ServerAuth_Input_ClientValidated) \
	op(EGMC_PredictionMode::ServerAuth_InputOutput_ClientValidated) \
	op(EGMC_PredictionMode::ServerAuth_Output_ServerValidated) \
	op(EGMC_PredictionMode::ServerAuth_Input_ServerValidated) \
	op(EGMC_PredictionMode::ServerAuth_InputOutput_ServerValidated) \
	op(EGMC_PredictionMode::ClientAuth_Output) \
	op(EGMC_PredictionMode::ClientAuth_Input) \
	op(EGMC_PredictionMode::ClientAuth_InputOutput) \
	op(EGMC_PredictionMode::Local) 

enum class EGMC_PredictionMode : uint8;
template<> struct TIsUEnumClass<EGMC_PredictionMode> { enum { Value = true }; };
template<> GMCCORE_API UEnum* StaticEnum<EGMC_PredictionMode>();

#define FOREACH_ENUM_EGMC_COMBINEMODE(op) \
	op(EGMC_CombineMode::AlwaysCombine) \
	op(EGMC_CombineMode::CombineIfUnchanged) \
	op(EGMC_CombineMode::Default) \
	op(EGMC_CombineMode::NeverCombine) 

enum class EGMC_CombineMode : uint8;
template<> struct TIsUEnumClass<EGMC_CombineMode> { enum { Value = true }; };
template<> GMCCORE_API UEnum* StaticEnum<EGMC_CombineMode>();

#define FOREACH_ENUM_EGMC_SIMULATIONMODE(op) \
	op(EGMC_SimulationMode::Periodic_Output) \
	op(EGMC_SimulationMode::Periodic_Input) \
	op(EGMC_SimulationMode::Periodic_InputOutput) \
	op(EGMC_SimulationMode::PeriodicAndOnChange_Output) \
	op(EGMC_SimulationMode::PeriodicAndOnChange_Input) \
	op(EGMC_SimulationMode::PeriodicAndOnChange_InputOutput) \
	op(EGMC_SimulationMode::None) 

enum class EGMC_SimulationMode : uint8;
template<> struct TIsUEnumClass<EGMC_SimulationMode> { enum { Value = true }; };
template<> GMCCORE_API UEnum* StaticEnum<EGMC_SimulationMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
