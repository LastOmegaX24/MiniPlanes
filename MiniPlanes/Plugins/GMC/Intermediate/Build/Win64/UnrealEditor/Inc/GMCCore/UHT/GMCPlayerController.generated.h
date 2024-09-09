// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/GMCPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
struct FGMC_AdaptiveDelayClientPacket;
struct FGMC_AdaptiveDelayServerPacket;
#ifdef GMCCORE_GMCPlayerController_generated_h
#error "GMCPlayerController.generated.h already included, missing '#pragma once' in GMCPlayerController.h"
#endif
#define GMCCORE_GMCPlayerController_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCPlayerController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSV_RequestAdaptiveDelayBufferTime); \
	DECLARE_FUNCTION(execCL_SendAdaptiveDelayParams); \
	DECLARE_FUNCTION(execGetRefNonPlayerPawn); \
	DECLARE_FUNCTION(execManualUpdateCamera); \
	DECLARE_FUNCTION(execWasCameraManagerUpdateDeferred); \
	DECLARE_FUNCTION(execCL_GetAverageTimeDiscrepancy); \
	DECLARE_FUNCTION(execCL_GetSyncedWorldTimeSeconds); \
	DECLARE_FUNCTION(execGetPingInMilliseconds); \
	DECLARE_FUNCTION(execSV_OnPawnLeavingGame);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCPlayerController_h_14_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCPlayerController_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGMC_PlayerController(); \
	friend struct Z_Construct_UClass_AGMC_PlayerController_Statics; \
public: \
	DECLARE_CLASS(AGMC_PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GMCCore"), NO_API) \
	DECLARE_SERIALIZER(AGMC_PlayerController)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCPlayerController_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGMC_PlayerController(AGMC_PlayerController&&); \
	AGMC_PlayerController(const AGMC_PlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGMC_PlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGMC_PlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGMC_PlayerController) \
	NO_API virtual ~AGMC_PlayerController();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCPlayerController_h_11_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCPlayerController_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCPlayerController_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCPlayerController_h_14_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCPlayerController_h_14_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCPlayerController_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GMCCORE_API UClass* StaticClass<class AGMC_PlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Actors_GMCPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
