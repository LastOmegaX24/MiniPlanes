// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Replication/FloatPrecision.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GMCCORE_FloatPrecision_generated_h
#error "FloatPrecision.generated.h already included, missing '#pragma once' in FloatPrecision.h"
#endif
#define GMCCORE_FloatPrecision_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_FloatPrecision_h


#define FOREACH_ENUM_EGMC_FLOATPRECISIONBLUEPRINT(op) \
	op(EGMC_FloatPrecisionBlueprint::WholeNumber) \
	op(EGMC_FloatPrecisionBlueprint::OneDecimal) \
	op(EGMC_FloatPrecisionBlueprint::TwoDecimals) \
	op(EGMC_FloatPrecisionBlueprint::ThreeDecimals) \
	op(EGMC_FloatPrecisionBlueprint::FourDecimals) \
	op(EGMC_FloatPrecisionBlueprint::FiveDecimals) \
	op(EGMC_FloatPrecisionBlueprint::SixDecimals) \
	op(EGMC_FloatPrecisionBlueprint::FullPrecision) 

enum class EGMC_FloatPrecisionBlueprint : uint8;
template<> struct TIsUEnumClass<EGMC_FloatPrecisionBlueprint> { enum { Value = true }; };
template<> GMCCORE_API UEnum* StaticEnum<EGMC_FloatPrecisionBlueprint>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
