// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/GMCAggregator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
class AGMC_Aggregator;
class AGMC_RollbackActor;
class APawn;
class UMeshComponent;
class UMovementComponent;
class UObject;
#ifdef GMCCORE_GMCAggregator_generated_h
#error "GMCAggregator.generated.h already included, missing '#pragma once' in GMCAggregator.h"
#endif
#define GMCCORE_GMCAggregator_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCAggregator_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMeshComponentOrderNumber); \
	DECLARE_FUNCTION(execGetRollbackActorOrderNumber); \
	DECLARE_FUNCTION(execGetMovementComponentOrderNumber); \
	DECLARE_FUNCTION(execGetPawnOrderNumber); \
	DECLARE_FUNCTION(execGetControllerOrderNumber); \
	DECLARE_FUNCTION(execOnAggregateTickToggled); \
	DECLARE_FUNCTION(execSetTickFunctionsEnabled); \
	DECLARE_FUNCTION(execGetMeshComponents); \
	DECLARE_FUNCTION(execGetRollbackActors); \
	DECLARE_FUNCTION(execGetMovementComponents); \
	DECLARE_FUNCTION(execGetPawns); \
	DECLARE_FUNCTION(execGetControllers); \
	DECLARE_FUNCTION(execSortMeshComponents); \
	DECLARE_FUNCTION(execSortRollbackActors); \
	DECLARE_FUNCTION(execSortMovementComponents); \
	DECLARE_FUNCTION(execSortPawns); \
	DECLARE_FUNCTION(execSortControllers); \
	DECLARE_FUNCTION(execUnregisterMeshComponent); \
	DECLARE_FUNCTION(execUnregisterRollbackActor); \
	DECLARE_FUNCTION(execUnregisterMovementComponent); \
	DECLARE_FUNCTION(execUnregisterPawn); \
	DECLARE_FUNCTION(execUnregisterController); \
	DECLARE_FUNCTION(execRegisterMeshComponent); \
	DECLARE_FUNCTION(execRegisterRollbackActor); \
	DECLARE_FUNCTION(execRegisterMovementComponent); \
	DECLARE_FUNCTION(execRegisterPawn); \
	DECLARE_FUNCTION(execRegisterController); \
	DECLARE_FUNCTION(execGetGMCAggregator);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCAggregator_h_14_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCAggregator_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGMC_Aggregator(); \
	friend struct Z_Construct_UClass_AGMC_Aggregator_Statics; \
public: \
	DECLARE_CLASS(AGMC_Aggregator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GMCCore"), NO_API) \
	DECLARE_SERIALIZER(AGMC_Aggregator)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCAggregator_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGMC_Aggregator(AGMC_Aggregator&&); \
	AGMC_Aggregator(const AGMC_Aggregator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGMC_Aggregator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGMC_Aggregator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGMC_Aggregator) \
	NO_API virtual ~AGMC_Aggregator();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCAggregator_h_11_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCAggregator_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCAggregator_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCAggregator_h_14_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCAggregator_h_14_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCAggregator_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GMCCORE_API UClass* StaticClass<class AGMC_Aggregator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCAggregator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
