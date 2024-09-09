// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/GMCRollbackActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGMC_NetContext : uint8;
struct FGMC_Move;
#ifdef GMCCORE_GMCRollbackActor_generated_h
#error "GMCRollbackActor.generated.h already included, missing '#pragma once' in GMCRollbackActor.h"
#endif
#define GMCCORE_GMCRollbackActor_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCRollbackActor_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGMC_RollbackState_Statics; \
	GMCCORE_API static class UScriptStruct* StaticStruct();


template<> GMCCORE_API UScriptStruct* StaticStruct<struct FGMC_RollbackState>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCRollbackActor_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHasTicked); \
	DECLARE_FUNCTION(execLoadState); \
	DECLARE_FUNCTION(execSaveState); \
	DECLARE_FUNCTION(execUpdateState); \
	DECLARE_FUNCTION(execGetTime); \
	DECLARE_FUNCTION(execComputeTangentialVelocity); \
	DECLARE_FUNCTION(execSetAngularVelocityInRadians); \
	DECLARE_FUNCTION(execSetAngularVelocityInDegrees); \
	DECLARE_FUNCTION(execSetLinearVelocity); \
	DECLARE_FUNCTION(execGetAngularVelocityInRadians); \
	DECLARE_FUNCTION(execGetAngularVelocityInDegrees); \
	DECLARE_FUNCTION(execGetLinearVelocity);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCRollbackActor_h_29_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCRollbackActor_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGMC_RollbackActor(); \
	friend struct Z_Construct_UClass_AGMC_RollbackActor_Statics; \
public: \
	DECLARE_CLASS(AGMC_RollbackActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GMCCore"), NO_API) \
	DECLARE_SERIALIZER(AGMC_RollbackActor)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCRollbackActor_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGMC_RollbackActor(AGMC_RollbackActor&&); \
	AGMC_RollbackActor(const AGMC_RollbackActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGMC_RollbackActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGMC_RollbackActor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGMC_RollbackActor) \
	NO_API virtual ~AGMC_RollbackActor();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCRollbackActor_h_26_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCRollbackActor_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCRollbackActor_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCRollbackActor_h_29_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCRollbackActor_h_29_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCRollbackActor_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GMCCORE_API UClass* StaticClass<class AGMC_RollbackActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCRollbackActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
