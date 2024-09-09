// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/Speedometer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPawnMovementComponent;
#ifdef GMCCORE_Speedometer_generated_h
#error "Speedometer.generated.h already included, missing '#pragma once' in Speedometer.h"
#endif
#define GMCCORE_Speedometer_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Widgets_Speedometer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLocalPawnMovementComponent);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Widgets_Speedometer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGMC_Speedometer(); \
	friend struct Z_Construct_UClass_UGMC_Speedometer_Statics; \
public: \
	DECLARE_CLASS(UGMC_Speedometer, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GMCCore"), NO_API) \
	DECLARE_SERIALIZER(UGMC_Speedometer)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Widgets_Speedometer_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGMC_Speedometer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGMC_Speedometer(UGMC_Speedometer&&); \
	UGMC_Speedometer(const UGMC_Speedometer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGMC_Speedometer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGMC_Speedometer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGMC_Speedometer) \
	NO_API virtual ~UGMC_Speedometer();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Widgets_Speedometer_h_9_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Widgets_Speedometer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Widgets_Speedometer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Widgets_Speedometer_h_12_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Widgets_Speedometer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GMCCORE_API UClass* StaticClass<class UGMC_Speedometer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Widgets_Speedometer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
