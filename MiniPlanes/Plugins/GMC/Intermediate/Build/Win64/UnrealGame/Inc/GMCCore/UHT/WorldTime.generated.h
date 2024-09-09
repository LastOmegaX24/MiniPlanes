// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Replication/WorldTime.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GMCCORE_WorldTime_generated_h
#error "WorldTime.generated.h already included, missing '#pragma once' in WorldTime.h"
#endif
#define GMCCORE_WorldTime_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_WorldTime_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCL_OnRepRealWorldTimeSecondsReplicated); \
	DECLARE_FUNCTION(execSV_ResetUpdateTimer); \
	DECLARE_FUNCTION(execSV_StopUpdateTimer); \
	DECLARE_FUNCTION(execSV_StartUpdateTimer); \
	DECLARE_FUNCTION(execGetRealWorldTimeSecondsReplicated);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_WorldTime_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGMC_WorldTimeReplicator(); \
	friend struct Z_Construct_UClass_AGMC_WorldTimeReplicator_Statics; \
public: \
	DECLARE_CLASS(AGMC_WorldTimeReplicator, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GMCCore"), NO_API) \
	DECLARE_SERIALIZER(AGMC_WorldTimeReplicator) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RealWorldTimeSecondsReplicated=NETFIELD_REP_START, \
		NETFIELD_REP_END=RealWorldTimeSecondsReplicated	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_WorldTime_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGMC_WorldTimeReplicator(AGMC_WorldTimeReplicator&&); \
	AGMC_WorldTimeReplicator(const AGMC_WorldTimeReplicator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGMC_WorldTimeReplicator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGMC_WorldTimeReplicator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGMC_WorldTimeReplicator) \
	NO_API virtual ~AGMC_WorldTimeReplicator();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_WorldTime_h_10_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_WorldTime_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_WorldTime_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_WorldTime_h_13_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_WorldTime_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GMCCORE_API UClass* StaticClass<class AGMC_WorldTimeReplicator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_WorldTime_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
