// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Replication/SyncTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GMCCORE_SyncTypes_generated_h
#error "SyncTypes.generated.h already included, missing '#pragma once' in SyncTypes.h"
#endif
#define GMCCORE_SyncTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Replication_SyncTypes_h


#define FOREACH_ENUM_EGMC_SYNCTYPE(op) \
	op(EGMC_SyncType::ActorBase) \
	op(EGMC_SyncType::LinearVelocity) \
	op(EGMC_SyncType::AngularVelocity) \
	op(EGMC_SyncType::ActorLocation) \
	op(EGMC_SyncType::ActorRotation) \
	op(EGMC_SyncType::ActorScale) \
	op(EGMC_SyncType::ControlRotation) \
	op(EGMC_SyncType::Bool) \
	op(EGMC_SyncType::HalfByte) \
	op(EGMC_SyncType::Byte) \
	op(EGMC_SyncType::Int) \
	op(EGMC_SyncType::SinglePrecisionFloat) \
	op(EGMC_SyncType::CompressedSinglePrecisionFloat) \
	op(EGMC_SyncType::DoublePrecisionFloat) \
	op(EGMC_SyncType::CompressedDoublePrecisionFloat) \
	op(EGMC_SyncType::TruncatedDoublePrecisionFloat) \
	op(EGMC_SyncType::CompressedVector2D) \
	op(EGMC_SyncType::CompressedVector) \
	op(EGMC_SyncType::CompressedRotator) \
	op(EGMC_SyncType::ActorReference) \
	op(EGMC_SyncType::ActorComponentReference) \
	op(EGMC_SyncType::AnimMontageReference) \
	op(EGMC_SyncType::Name) \
	op(EGMC_SyncType::GameplayTag) \
	op(EGMC_SyncType::GameplayTagContainer) \
	op(EGMC_SyncType::InstancedStruct) 

enum class EGMC_SyncType : uint8;
template<> struct TIsUEnumClass<EGMC_SyncType> { enum { Value = true }; };
template<> GMCCORE_API UEnum* StaticEnum<EGMC_SyncType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
