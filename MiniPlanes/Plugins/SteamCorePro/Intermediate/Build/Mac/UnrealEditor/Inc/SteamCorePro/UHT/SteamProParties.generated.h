// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamParties/SteamProParties.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USteamProParties;
enum class ESteamPartiesBeaconLocationData : uint8;
struct FPartyBeaconID;
struct FSteamID;
struct FSteamPartyBeaconLocation;
#ifdef STEAMCOREPRO_SteamProParties_generated_h
#error "SteamProParties.generated.h already included, missing '#pragma once' in SteamProParties.h"
#endif
#define STEAMCOREPRO_SteamProParties_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamProParties_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBeaconLocationData); \
	DECLARE_FUNCTION(execDestroyBeacon); \
	DECLARE_FUNCTION(execChangeNumOpenSlots); \
	DECLARE_FUNCTION(execCancelReservation); \
	DECLARE_FUNCTION(execOnReservationCompleted); \
	DECLARE_FUNCTION(execCreateBeacon); \
	DECLARE_FUNCTION(execGetAvailableBeaconLocations); \
	DECLARE_FUNCTION(execGetNumAvailableBeaconLocations); \
	DECLARE_FUNCTION(execJoinParty); \
	DECLARE_FUNCTION(execGetBeaconDetails); \
	DECLARE_FUNCTION(execGetBeaconByIndex); \
	DECLARE_FUNCTION(execGetNumActiveBeacons); \
	DECLARE_FUNCTION(execGetSteamParties);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamProParties_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamProParties(); \
	friend struct Z_Construct_UClass_USteamProParties_Statics; \
public: \
	DECLARE_CLASS(USteamProParties, USteamCoreInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCorePro"), NO_API) \
	DECLARE_SERIALIZER(USteamProParties)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamProParties_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USteamProParties(USteamProParties&&); \
	USteamProParties(const USteamProParties&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamProParties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamProParties); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamProParties)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamProParties_h_24_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamProParties_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamProParties_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamProParties_h_27_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamProParties_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCOREPRO_API UClass* StaticClass<class USteamProParties>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamParties_SteamProParties_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
