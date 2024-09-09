// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamInput/SteamInput.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USteamProInput;
enum class ESteamCoreInputConfigurationEnableType : uint8;
enum class ESteamCoreProControllerPad : uint8;
enum class ESteamCoreProInputLEDFlag : uint8;
enum class ESteamCoreProInputType : uint8;
enum class ESteamCoreProXboxOrigin : uint8;
struct FInputActionSetHandle;
struct FInputAnalogActionData;
struct FInputAnalogActionHandle;
struct FInputDigitalActionData;
struct FInputDigitalActionHandle;
struct FInputHandle;
struct FInputMotionData;
struct FScePadTriggerEffectCommand;
#ifdef STEAMCOREPRO_SteamInput_generated_h
#error "SteamInput.generated.h already included, missing '#pragma once' in SteamInput.h"
#endif
#define STEAMCOREPRO_SteamInput_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamInput_SteamInput_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetDualSenseTriggerEffect); \
	DECLARE_FUNCTION(execGetSessionInputConfigurationSettings); \
	DECLARE_FUNCTION(execGetStringForAnalogActionName); \
	DECLARE_FUNCTION(execGetStringForDigitalActionName); \
	DECLARE_FUNCTION(execBWaitForData); \
	DECLARE_FUNCTION(execBNewDataAvailable); \
	DECLARE_FUNCTION(execGetRemotePlaySessionID); \
	DECLARE_FUNCTION(execGetDeviceBindingRevision); \
	DECLARE_FUNCTION(execTranslateActionOrigin); \
	DECLARE_FUNCTION(execGetActionOriginFromXboxOrigin); \
	DECLARE_FUNCTION(execGetGlyphForXboxOrigin); \
	DECLARE_FUNCTION(execGetStringForXboxOrigin); \
	DECLARE_FUNCTION(execGetGamepadIndexForController); \
	DECLARE_FUNCTION(execGetControllerForGamepadIndex); \
	DECLARE_FUNCTION(execGetInputTypeForHandle); \
	DECLARE_FUNCTION(execShowBindingPanel); \
	DECLARE_FUNCTION(execLegacy_TriggerRepeatedHapticPulse); \
	DECLARE_FUNCTION(execLegacy_TriggerHapticPulse); \
	DECLARE_FUNCTION(execSetLEDColor); \
	DECLARE_FUNCTION(execTriggerVibration); \
	DECLARE_FUNCTION(execGetMotionData); \
	DECLARE_FUNCTION(execStopAnalogActionMomentum); \
	DECLARE_FUNCTION(execGetStringForActionOrigin); \
	DECLARE_FUNCTION(execGetGlyphForActionOrigin_Legacy); \
	DECLARE_FUNCTION(execGetAnalogActionOrigins); \
	DECLARE_FUNCTION(execGetAnalogActionData); \
	DECLARE_FUNCTION(execGetAnalogActionHandle); \
	DECLARE_FUNCTION(execGetDigitalActionOrigins); \
	DECLARE_FUNCTION(execGetDigitalActionData); \
	DECLARE_FUNCTION(execGetDigitalActionHandle); \
	DECLARE_FUNCTION(execGetActiveActionSetLayers); \
	DECLARE_FUNCTION(execDeactivateAllActionSetLayers); \
	DECLARE_FUNCTION(execDeactivateActionSetLayer); \
	DECLARE_FUNCTION(execActivateActionSetLayer); \
	DECLARE_FUNCTION(execGetCurrentActionSet); \
	DECLARE_FUNCTION(execActivateActionSet); \
	DECLARE_FUNCTION(execGetActionSetHandle); \
	DECLARE_FUNCTION(execGetConnectedControllers); \
	DECLARE_FUNCTION(execShutdown); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execGetSteamInput);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamInput_SteamInput_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamProInput(); \
	friend struct Z_Construct_UClass_USteamProInput_Statics; \
public: \
	DECLARE_CLASS(USteamProInput, USteamCoreInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SteamCorePro"), NO_API) \
	DECLARE_SERIALIZER(USteamProInput)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamInput_SteamInput_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USteamProInput(USteamProInput&&); \
	USteamProInput(const USteamProInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamProInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamProInput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamProInput)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamInput_SteamInput_h_14_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamInput_SteamInput_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamInput_SteamInput_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamInput_SteamInput_h_17_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamInput_SteamInput_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMCOREPRO_API UClass* StaticClass<class USteamProInput>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamInput_SteamInput_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
