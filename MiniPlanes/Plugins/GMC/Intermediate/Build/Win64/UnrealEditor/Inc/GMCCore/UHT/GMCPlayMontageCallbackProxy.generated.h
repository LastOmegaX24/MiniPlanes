// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utility/GMCPlayMontageCallbackProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
class UGMC_OrganicMovementCmp;
class UGMC_PlayMontageCallbackProxy;
struct FBranchingPointNotifyPayload;
#ifdef GMCCORE_GMCPlayMontageCallbackProxy_generated_h
#error "GMCPlayMontageCallbackProxy.generated.h already included, missing '#pragma once' in GMCPlayMontageCallbackProxy.h"
#endif
#define GMCCORE_GMCPlayMontageCallbackProxy_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Utility_GMCPlayMontageCallbackProxy_h_9_DELEGATE \
GMCCORE_API void FGMC_OnMontagePlayDelegate_DelegateWrapper(const FMulticastScriptDelegate& GMC_OnMontagePlayDelegate, FName NotifyName);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Utility_GMCPlayMontageCallbackProxy_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnNotifyEndReceived_Cosmetic); \
	DECLARE_FUNCTION(execOnNotifyBeginReceived_Cosmetic); \
	DECLARE_FUNCTION(execOnMontageEnd_Cosmetic); \
	DECLARE_FUNCTION(execOnMontageBlendOut_Cosmetic); \
	DECLARE_FUNCTION(execOnMontageComplete); \
	DECLARE_FUNCTION(execOnNotifyEndReceived); \
	DECLARE_FUNCTION(execOnNotifyBeginReceived); \
	DECLARE_FUNCTION(execOnMontageBlendOut); \
	DECLARE_FUNCTION(execOnMontageBlendIn); \
	DECLARE_FUNCTION(execOnMontageStart); \
	DECLARE_FUNCTION(execCreateProxyObjectForPlayMontage);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Utility_GMCPlayMontageCallbackProxy_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGMC_PlayMontageCallbackProxy(); \
	friend struct Z_Construct_UClass_UGMC_PlayMontageCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UGMC_PlayMontageCallbackProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GMCCore"), NO_API) \
	DECLARE_SERIALIZER(UGMC_PlayMontageCallbackProxy)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Utility_GMCPlayMontageCallbackProxy_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGMC_PlayMontageCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGMC_PlayMontageCallbackProxy(UGMC_PlayMontageCallbackProxy&&); \
	UGMC_PlayMontageCallbackProxy(const UGMC_PlayMontageCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGMC_PlayMontageCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGMC_PlayMontageCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGMC_PlayMontageCallbackProxy) \
	NO_API virtual ~UGMC_PlayMontageCallbackProxy();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Utility_GMCPlayMontageCallbackProxy_h_11_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Utility_GMCPlayMontageCallbackProxy_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Utility_GMCPlayMontageCallbackProxy_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Utility_GMCPlayMontageCallbackProxy_h_14_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Utility_GMCPlayMontageCallbackProxy_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GMCCORE_API UClass* StaticClass<class UGMC_PlayMontageCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Utility_GMCPlayMontageCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
