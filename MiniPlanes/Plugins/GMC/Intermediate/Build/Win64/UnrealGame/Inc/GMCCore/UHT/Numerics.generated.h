// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Replication/Numerics.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GMCCORE_Numerics_generated_h
#error "Numerics.generated.h already included, missing '#pragma once' in Numerics.h"
#endif
#define GMCCORE_Numerics_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_Numerics_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGMC_NumericValue_Statics; \
	GMCCORE_API static class UScriptStruct* StaticStruct();


template<> GMCCORE_API UScriptStruct* StaticStruct<struct FGMC_NumericValue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_Numerics_h


#define FOREACH_ENUM_EGMC_NUMERICTYPE(op) \
	op(EGMC_NumericType::None) \
	op(EGMC_NumericType::Int) \
	op(EGMC_NumericType::Float) \
	op(EGMC_NumericType::Vector2D) \
	op(EGMC_NumericType::Vector) \
	op(EGMC_NumericType::Rotator) \
	op(EGMC_NumericType::Quat) 

enum class EGMC_NumericType : uint8;
template<> struct TIsUEnumClass<EGMC_NumericType> { enum { Value = true }; };
template<> GMCCORE_API UEnum* StaticEnum<EGMC_NumericType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
