// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamGameServer/SteamGameServerTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAssociateWithClanResult;
struct FComputeNewPlayerCompatibilityResult;
struct FGSClientApprove;
struct FGSClientDeny;
struct FGSClientGroupStatus;
struct FGSPolicyResponse;
struct FValidateAuthTicketResponse;
#ifdef STEAMCOREPRO_SteamGameServerTypes_generated_h
#error "SteamGameServerTypes.generated.h already included, missing '#pragma once' in SteamGameServerTypes.h"
#endif
#define STEAMCOREPRO_SteamGameServerTypes_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServer_SteamGameServerTypes_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGSPolicyResponse_Statics; \
	STEAMCOREPRO_API static class UScriptStruct* StaticStruct();


template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<struct FGSPolicyResponse>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServer_SteamGameServerTypes_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics; \
	STEAMCOREPRO_API static class UScriptStruct* StaticStruct();


template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<struct FGSClientGroupStatus>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServer_SteamGameServerTypes_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics; \
	STEAMCOREPRO_API static class UScriptStruct* StaticStruct();


template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<struct FAssociateWithClanResult>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServer_SteamGameServerTypes_h_94_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics; \
	STEAMCOREPRO_API static class UScriptStruct* StaticStruct();


template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<struct FComputeNewPlayerCompatibilityResult>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServer_SteamGameServerTypes_h_130_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGSClientApprove_Statics; \
	STEAMCOREPRO_API static class UScriptStruct* StaticStruct();


template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<struct FGSClientApprove>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServer_SteamGameServerTypes_h_151_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGSClientDeny_Statics; \
	STEAMCOREPRO_API static class UScriptStruct* StaticStruct();


template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<struct FGSClientDeny>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServer_SteamGameServerTypes_h_179_DELEGATE \
STEAMCOREPRO_API void FOnAssociateWithClan_DelegateWrapper(const FScriptDelegate& OnAssociateWithClan, FAssociateWithClanResult const& Data, bool bWasSuccessful);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServer_SteamGameServerTypes_h_180_DELEGATE \
STEAMCOREPRO_API void FOnComputeNewPlayerCompatibility_DelegateWrapper(const FScriptDelegate& OnComputeNewPlayerCompatibility, FComputeNewPlayerCompatibilityResult const& Data, bool bWasSuccessful);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServer_SteamGameServerTypes_h_181_DELEGATE \
STEAMCOREPRO_API void FOnGSPolicyResponse_DelegateWrapper(const FMulticastScriptDelegate& OnGSPolicyResponse, FGSPolicyResponse const& Data);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServer_SteamGameServerTypes_h_182_DELEGATE \
STEAMCOREPRO_API void FOnGSClientGroupStatus_DelegateWrapper(const FMulticastScriptDelegate& OnGSClientGroupStatus, FGSClientGroupStatus const& Data);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServer_SteamGameServerTypes_h_183_DELEGATE \
STEAMCOREPRO_API void FOnGSValidateAuthTicketResponse_DelegateWrapper(const FMulticastScriptDelegate& OnGSValidateAuthTicketResponse, FValidateAuthTicketResponse const& Data);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServer_SteamGameServerTypes_h_184_DELEGATE \
STEAMCOREPRO_API void FOnGSClientApprove_DelegateWrapper(const FMulticastScriptDelegate& OnGSClientApprove, FGSClientApprove const& Data);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServer_SteamGameServerTypes_h_185_DELEGATE \
STEAMCOREPRO_API void FOnGSClientDeny_DelegateWrapper(const FMulticastScriptDelegate& OnGSClientDeny, FGSClientDeny const& Data);


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamGameServer_SteamGameServerTypes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
