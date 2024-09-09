// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Replication/Physics.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GMCCORE_Physics_generated_h
#error "Physics.generated.h already included, missing '#pragma once' in Physics.h"
#endif
#define GMCCORE_Physics_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_Physics_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGMC_PhysicsInterpState_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GMCCORE_API UScriptStruct* StaticStruct<struct FGMC_PhysicsInterpState>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_Physics_h_109_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGMC_ServerAuthPhysicsSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GMCCORE_API UScriptStruct* StaticStruct<struct FGMC_ServerAuthPhysicsSettings>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_Physics_h_147_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGMC_ClientAuthPhysicsSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> GMCCORE_API UScriptStruct* StaticStruct<struct FGMC_ClientAuthPhysicsSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_Physics_h


#define FOREACH_ENUM_EGMC_PHYSICSINTERPOLATIONMODE(op) \
	op(EGMC_PhysicsInterpolationMode::None) \
	op(EGMC_PhysicsInterpolationMode::FixedDelay) \
	op(EGMC_PhysicsInterpolationMode::AdaptiveDelay) 

enum class EGMC_PhysicsInterpolationMode : uint8;
template<> struct TIsUEnumClass<EGMC_PhysicsInterpolationMode> { enum { Value = true }; };
template<> GMCCORE_API UEnum* StaticEnum<EGMC_PhysicsInterpolationMode>();

#define FOREACH_ENUM_EGMC_PHYSICSINTERPOLATIONMETHOD(op) \
	op(EGMC_PhysicsInterpolationMethod::Default) \
	op(EGMC_PhysicsInterpolationMethod::Custom1) \
	op(EGMC_PhysicsInterpolationMethod::Custom2) \
	op(EGMC_PhysicsInterpolationMethod::Custom3) \
	op(EGMC_PhysicsInterpolationMethod::Custom4) \
	op(EGMC_PhysicsInterpolationMethod::Custom5) \
	op(EGMC_PhysicsInterpolationMethod::Custom6) \
	op(EGMC_PhysicsInterpolationMethod::Custom7) \
	op(EGMC_PhysicsInterpolationMethod::Custom8) 

enum class EGMC_PhysicsInterpolationMethod : uint8;
template<> struct TIsUEnumClass<EGMC_PhysicsInterpolationMethod> { enum { Value = true }; };
template<> GMCCORE_API UEnum* StaticEnum<EGMC_PhysicsInterpolationMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
