// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamCorePro/SteamUtilities.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class APlayerState;
class UObject;
class UServerFilter;
class USteamCoreProAsyncActionListenForControllerChange;
class USteamCoreProVoice;
enum class ESteamAccountType : uint8;
enum class ESteamAttributeType : uint8;
enum class ESteamComparisonOp : uint8;
enum class ESteamCoreNetworkingIdentityType : uint8;
enum class ESteamCoreProIdentical : uint8;
enum class ESteamCoreProValid : uint8;
enum class ESteamMessageType : uint8;
struct FBlueprintSessionResult;
struct FDateTime;
struct FLatentActionInfo;
struct FOnlineFriendSteamCoreBlueprint;
struct FPublishedFileID;
struct FSteamGameID;
struct FSteamID;
struct FSteamInventoryUpdateHandle;
struct FSteamItemInstanceID;
struct FSteamNetworkingIdentity;
struct FSteamServerAddr;
struct FSteamSessionSearchSetting;
struct FSteamSessionSetting;
struct FSteamTicketHandle;
struct FSteamUGCHandle;
#ifdef STEAMCOREPRO_SteamUtilities_generated_h
#error "SteamUtilities.generated.h already included, missing '#pragma once' in SteamUtilities.h"
#endif
#define STEAMCOREPRO_SteamUtilities_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamUtilities_h_62_DELEGATE \
STEAMCOREPRO_API void FOnSteamMessage_DelegateWrapper(const FScriptDelegate& OnSteamMessage, ESteamMessageType Type, const FString& Message);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamUtilities_h_63_DELEGATE \
STEAMCOREPRO_API void FOnHTTPResponse_DelegateWrapper(const FScriptDelegate& OnHTTPResponse, const FString& Response);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamUtilities_h_64_DELEGATE \
STEAMCOREPRO_API void FOnControllerChangedCallback_DelegateWrapper(const FMulticastScriptDelegate& OnControllerChangedCallback, bool bIsConnected, int32 UserId);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamUtilities_h_65_DELEGATE \
STEAMCOREPRO_API void FOnSessionUserInviteAcceptedCallback_DelegateWrapper(const FScriptDelegate& OnSessionUserInviteAcceptedCallback, bool bWasSuccessful, int32 LocalPlayerNum, const FString& InvitedBy, FBlueprintSessionResult const& Session);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamUtilities_h_66_DELEGATE \
STEAMCOREPRO_API void FOnSessionUserInviteRecievedCallback_DelegateWrapper(const FScriptDelegate& OnSessionUserInviteRecievedCallback, FBlueprintSessionResult const& InviteResult);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamUtilities_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConstructSteamCoreProVoice); \
	DECLARE_FUNCTION(execDestroySteamCoreProVoice); \
	DECLARE_FUNCTION(execAddAudioBuffer);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamUtilities_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreProVoice(); \
	friend struct Z_Construct_UClass_USteamCoreProVoice_Statics; \
public: \
	DECLARE_CLASS(USteamCoreProVoice, USoundWaveProcedural, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SteamCorePro"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreProVoice)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamUtilities_h_71_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USteamCoreProVoice(USteamCoreProVoice&&); \
	USteamCoreProVoice(const USteamCoreProVoice&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreProVoice); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreProVoice); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreProVoice) \
	NO_API virtual ~USteamCoreProVoice();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamUtilities_h_68_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamUtilities_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamUtilities_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamUtilities_h_71_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamUtilities_h_71_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCOREPRO_API UClass* StaticClass<class USteamCoreProVoice>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamUtilities_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCallback); \
	DECLARE_FUNCTION(execListenForControllerChange);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamUtilities_h_92_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamCoreProAsyncActionListenForControllerChange(); \
	friend struct Z_Construct_UClass_USteamCoreProAsyncActionListenForControllerChange_Statics; \
public: \
	DECLARE_CLASS(USteamCoreProAsyncActionListenForControllerChange, USteamCoreProAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCorePro"), NO_API) \
	DECLARE_SERIALIZER(USteamCoreProAsyncActionListenForControllerChange)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamUtilities_h_92_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamCoreProAsyncActionListenForControllerChange(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USteamCoreProAsyncActionListenForControllerChange(USteamCoreProAsyncActionListenForControllerChange&&); \
	USteamCoreProAsyncActionListenForControllerChange(const USteamCoreProAsyncActionListenForControllerChange&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamCoreProAsyncActionListenForControllerChange); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamCoreProAsyncActionListenForControllerChange); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamCoreProAsyncActionListenForControllerChange) \
	NO_API virtual ~USteamCoreProAsyncActionListenForControllerChange();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamUtilities_h_89_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamUtilities_h_92_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamUtilities_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamUtilities_h_92_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamUtilities_h_92_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCOREPRO_API UClass* StaticClass<class USteamCoreProAsyncActionListenForControllerChange>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamUtilities_h_167_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsLocalPlayerTalking); \
	DECLARE_FUNCTION(execIsRemotePlayerTalking); \
	DECLARE_FUNCTION(execIsPlayerMuted); \
	DECLARE_FUNCTION(execUnmuteRemoteTalker); \
	DECLARE_FUNCTION(execMuteRemoteTalker); \
	DECLARE_FUNCTION(execIsRecalculatingPing); \
	DECLARE_FUNCTION(execGetPingFromHostData); \
	DECLARE_FUNCTION(execGetHostPingData); \
	DECLARE_FUNCTION(execIsUsingP2PRelays); \
	DECLARE_FUNCTION(execSetLocalHost); \
	DECLARE_FUNCTION(execSetStadiaId); \
	DECLARE_FUNCTION(execSetPSNId); \
	DECLARE_FUNCTION(execSetXboxPairwiseId); \
	DECLARE_FUNCTION(execSetSteamId64); \
	DECLARE_FUNCTION(execSetType); \
	DECLARE_FUNCTION(execK2_IsPlayerInSession); \
	DECLARE_FUNCTION(execKickPlayer); \
	DECLARE_FUNCTION(execTryJoinServer); \
	DECLARE_FUNCTION(execWriteBytesToFile); \
	DECLARE_FUNCTION(execReadFileToBytes); \
	DECLARE_FUNCTION(execK2_HexToString); \
	DECLARE_FUNCTION(execK2_HexToBytes); \
	DECLARE_FUNCTION(execIsSteamServerInitialized); \
	DECLARE_FUNCTION(execBP_BytesToString); \
	DECLARE_FUNCTION(execBP_StringToBytes); \
	DECLARE_FUNCTION(execGetSteamIdFromPlayerState); \
	DECLARE_FUNCTION(execGetPublicIp); \
	DECLARE_FUNCTION(execEncryptString); \
	DECLARE_FUNCTION(execFromUnixTimestamp); \
	DECLARE_FUNCTION(execConstructServerFilter); \
	DECLARE_FUNCTION(execIsSteamAvailable); \
	DECLARE_FUNCTION(execIsLobby); \
	DECLARE_FUNCTION(execGetAccountType); \
	DECLARE_FUNCTION(execGetGameEngineInitialized); \
	DECLARE_FUNCTION(execReadFriendList); \
	DECLARE_FUNCTION(execGetFriendsList); \
	DECLARE_FUNCTION(execStopListeningForSessionInviteAccepted); \
	DECLARE_FUNCTION(execListenForSessionInviteAccepted); \
	DECLARE_FUNCTION(execListenForSteamMessages); \
	DECLARE_FUNCTION(execSteamItemInstanceID_Equals_Exec); \
	DECLARE_FUNCTION(execSteamItemInstanceID_Equals); \
	DECLARE_FUNCTION(execPublishedFileID_NotEquals); \
	DECLARE_FUNCTION(execPublishedFileID_Equals_Exec); \
	DECLARE_FUNCTION(execPublishedFileID_Equals); \
	DECLARE_FUNCTION(execNotEqual); \
	DECLARE_FUNCTION(execEqual_Exec); \
	DECLARE_FUNCTION(execEqual); \
	DECLARE_FUNCTION(execIsSteamInventoryUpdateHandleValid_Exec); \
	DECLARE_FUNCTION(execIsSteamInventoryUpdateHandleValid); \
	DECLARE_FUNCTION(execIsSteamTicketHandleValid_Exec); \
	DECLARE_FUNCTION(execIsSteamTicketHandleValid); \
	DECLARE_FUNCTION(execIsUGCHandleValid_Exec); \
	DECLARE_FUNCTION(execIsUGCHandleValid); \
	DECLARE_FUNCTION(execIsGameIDValid_Exec); \
	DECLARE_FUNCTION(execIsGameIDValid); \
	DECLARE_FUNCTION(execIsSteamIDValid_Exec); \
	DECLARE_FUNCTION(execIsPublishedFileIDValid_Exec); \
	DECLARE_FUNCTION(execIsPublishedFileIDValid); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execBreakTicketHandle); \
	DECLARE_FUNCTION(execBreakInventoryUpdateHandle); \
	DECLARE_FUNCTION(execBreakUGCHandle); \
	DECLARE_FUNCTION(execBreakPublishedFileID); \
	DECLARE_FUNCTION(execBreakSteamGameID); \
	DECLARE_FUNCTION(execBreakSteamID); \
	DECLARE_FUNCTION(execBreakSteamItemInstanceID); \
	DECLARE_FUNCTION(execGetType); \
	DECLARE_FUNCTION(execGetString); \
	DECLARE_FUNCTION(execGetInteger); \
	DECLARE_FUNCTION(execMakeSearchInteger); \
	DECLARE_FUNCTION(execMakeSearchString); \
	DECLARE_FUNCTION(execMakeInteger); \
	DECLARE_FUNCTION(execMakeString); \
	DECLARE_FUNCTION(execMakeTicketHandle); \
	DECLARE_FUNCTION(execMakeInventoryUpdateHandle); \
	DECLARE_FUNCTION(execMakeUGCHandle); \
	DECLARE_FUNCTION(execMakePublishedFileID); \
	DECLARE_FUNCTION(execMakeSteamGameID); \
	DECLARE_FUNCTION(execMakeSteamID); \
	DECLARE_FUNCTION(execMakeSteamItemInstanceID);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamUtilities_h_167_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamUtilities(); \
	friend struct Z_Construct_UClass_USteamUtilities_Statics; \
public: \
	DECLARE_CLASS(USteamUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SteamCorePro"), NO_API) \
	DECLARE_SERIALIZER(USteamUtilities)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamUtilities_h_167_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamUtilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USteamUtilities(USteamUtilities&&); \
	USteamUtilities(const USteamUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamUtilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamUtilities); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamUtilities) \
	NO_API virtual ~USteamUtilities();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamUtilities_h_164_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamUtilities_h_167_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamUtilities_h_167_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamUtilities_h_167_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamUtilities_h_167_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCOREPRO_API UClass* StaticClass<class USteamUtilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamUtilities_h


#define FOREACH_ENUM_EFRIENDLISTTYPE(op) \
	op(Default) \
	op(OnlinePlayers) \
	op(InGamePlayers) \
	op(InGameAndSessionPlayers) 
#define FOREACH_ENUM_ESTEAMCOREPROVALID(op) \
	op(ESteamCoreProValid::Valid) \
	op(ESteamCoreProValid::NotValid) 

enum class ESteamCoreProValid : uint8;
template<> struct TIsUEnumClass<ESteamCoreProValid> { enum { Value = true }; };
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamCoreProValid>();

#define FOREACH_ENUM_ESTEAMCOREPROIDENTICAL(op) \
	op(ESteamCoreProIdentical::Identical) \
	op(ESteamCoreProIdentical::NotIdentical) 

enum class ESteamCoreProIdentical : uint8;
template<> struct TIsUEnumClass<ESteamCoreProIdentical> { enum { Value = true }; };
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamCoreProIdentical>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
