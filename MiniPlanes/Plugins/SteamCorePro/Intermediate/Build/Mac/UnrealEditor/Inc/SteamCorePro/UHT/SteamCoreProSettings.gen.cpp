// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamCorePro/SteamCoreProSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreProSettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProSettings();
STEAMCOREPRO_API UClass* Z_Construct_UClass_USteamCoreProSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Class USteamCoreProSettings
void USteamCoreProSettings::StaticRegisterNativesUSteamCoreProSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamCoreProSettings);
UClass* Z_Construct_UClass_USteamCoreProSettings_NoRegister()
{
	return USteamCoreProSettings::StaticClass();
}
struct Z_Construct_UClass_USteamCoreProSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "SteamCorePro Plugin" },
		{ "IncludePath", "SteamCorePro/SteamCoreProSettings.h" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamCoreProSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09* Enable steam\n\x09* \n\x09* Make sure you add this to your DefaultEngine.ini:\n\x09* [OnlineSubsystem]\n\x09* DefaultPlatformService=Steam\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamCoreProSettings.h" },
		{ "ToolTip", "Enable steam\n\nMake sure you add this to your DefaultEngine.ini:\n[OnlineSubsystem]\nDefaultPlatformService=Steam" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRelaunchInSteam_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09* Should the game force a relaunch in Steam if the client isn't already loaded\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamCoreProSettings.h" },
		{ "ToolTip", "Should the game force a relaunch in Steam if the client isn't already loaded" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVACEnabled_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09* Enable Steam VAC\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamCoreProSettings.h" },
		{ "ToolTip", "Enable Steam VAC" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowP2PPacketRelay_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09* Should Steam P2P sockets all fall back to Steam servers relay if a direct connection fails\n\x09* Only usable with the SteamCoreSocketsNetDriver\n\x09*\n\x09* Listen servers always use this setting regardless of what this is set to\n\x09*/" },
		{ "DisplayName", "Use P2P Packet Relay on Dedicated Servers" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamCoreProSettings.h" },
		{ "ToolTip", "Should Steam P2P sockets all fall back to Steam servers relay if a direct connection fails\nOnly usable with the SteamCoreSocketsNetDriver\n\nListen servers always use this setting regardless of what this is set to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCopySteamDlls_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09* Copy steamclient dlls when packaging a dedicated server configuration\n\x09* Only windows is supported at this time.\n\x09*\n\x09* Steam Client must be installed on the machine that is packaging.\n\x09* This will throw packaging errors if enabled and steam dlls are not found.\n\x09*/" },
		{ "DisplayName", "Copy Steam Dlls (Dedicated Server, Windows Server Only)" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamCoreProSettings.h" },
		{ "ToolTip", "Copy steamclient dlls when packaging a dedicated server configuration\nOnly windows is supported at this time.\n\nSteam Client must be installed on the machine that is packaging.\nThis will throw packaging errors if enabled and steam dlls are not found." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_P2PConnectionTimeout_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09* Timeout (in seconds) period for any P2P session\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamCoreProSettings.h" },
		{ "ToolTip", "Timeout (in seconds) period for any P2P session" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamAppID_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09* AppID of your application\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamCoreProSettings.h" },
		{ "ToolTip", "AppID of your application" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamDevAppID_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09* SteamDevAppID of your application\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamCoreProSettings.h" },
		{ "ToolTip", "SteamDevAppID of your application" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09* Steam Server Port\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamCoreProSettings.h" },
		{ "ToolTip", "Steam Server Port" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameServerQueryPort_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09* Steam Server Query Port\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamCoreProSettings.h" },
		{ "ToolTip", "Steam Server Query Port" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameVersion_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09* Current game version\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamCoreProSettings.h" },
		{ "ToolTip", "Current game version" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideMinHandshakeVersion_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09*/" },
		{ "DisplayName", "Override net.MinHandshakeVersion" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamCoreProSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinHandshakeVersion_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09 * Override console variable: net.MinHandshakeVersion\n\x09*/" },
		{ "DisplayName", "net.MinHandshakeVersion" },
		{ "EditCondition", "bOverrideMinHandshakeVersion" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamCoreProSettings.h" },
		{ "ToolTip", "Override console variable: net.MinHandshakeVersion" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCurrentHandshakeVersion_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09*/" },
		{ "DisplayName", "Override net.CurrentHandshakeVersion" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamCoreProSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHandshakeVersion_MetaData[] = {
		{ "Category", "Steam Settings" },
		{ "Comment", "/**\n\x09 * Override console variable: net.CurrentHandshakeVersion\n\x09*/" },
		{ "DisplayName", "net.CurrentHandshakeVersion" },
		{ "EditCondition", "bOverrideCurrentHandshakeVersion" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/SteamCorePro/SteamCoreProSettings.h" },
		{ "ToolTip", "Override console variable: net.CurrentHandshakeVersion" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static void NewProp_bRelaunchInSteam_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRelaunchInSteam;
	static void NewProp_bVACEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVACEnabled;
	static void NewProp_bAllowP2PPacketRelay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowP2PPacketRelay;
	static void NewProp_bCopySteamDlls_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopySteamDlls;
	static const UECodeGen_Private::FIntPropertyParams NewProp_P2PConnectionTimeout;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SteamAppID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SteamDevAppID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GameServerQueryPort;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameVersion;
	static void NewProp_bOverrideMinHandshakeVersion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideMinHandshakeVersion;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinHandshakeVersion;
	static void NewProp_bOverrideCurrentHandshakeVersion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCurrentHandshakeVersion;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentHandshakeVersion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreProSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((USteamCoreProSettings*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamCoreProSettings), &Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
void Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_bRelaunchInSteam_SetBit(void* Obj)
{
	((USteamCoreProSettings*)Obj)->bRelaunchInSteam = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_bRelaunchInSteam = { "bRelaunchInSteam", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamCoreProSettings), &Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_bRelaunchInSteam_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRelaunchInSteam_MetaData), NewProp_bRelaunchInSteam_MetaData) };
void Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_bVACEnabled_SetBit(void* Obj)
{
	((USteamCoreProSettings*)Obj)->bVACEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_bVACEnabled = { "bVACEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamCoreProSettings), &Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_bVACEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVACEnabled_MetaData), NewProp_bVACEnabled_MetaData) };
void Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_bAllowP2PPacketRelay_SetBit(void* Obj)
{
	((USteamCoreProSettings*)Obj)->bAllowP2PPacketRelay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_bAllowP2PPacketRelay = { "bAllowP2PPacketRelay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamCoreProSettings), &Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_bAllowP2PPacketRelay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowP2PPacketRelay_MetaData), NewProp_bAllowP2PPacketRelay_MetaData) };
void Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_bCopySteamDlls_SetBit(void* Obj)
{
	((USteamCoreProSettings*)Obj)->bCopySteamDlls = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_bCopySteamDlls = { "bCopySteamDlls", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamCoreProSettings), &Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_bCopySteamDlls_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCopySteamDlls_MetaData), NewProp_bCopySteamDlls_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_P2PConnectionTimeout = { "P2PConnectionTimeout", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreProSettings, P2PConnectionTimeout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_P2PConnectionTimeout_MetaData), NewProp_P2PConnectionTimeout_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_SteamAppID = { "SteamAppID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreProSettings, SteamAppID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamAppID_MetaData), NewProp_SteamAppID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_SteamDevAppID = { "SteamDevAppID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreProSettings, SteamDevAppID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamDevAppID_MetaData), NewProp_SteamDevAppID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreProSettings, Port), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Port_MetaData), NewProp_Port_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_GameServerQueryPort = { "GameServerQueryPort", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreProSettings, GameServerQueryPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameServerQueryPort_MetaData), NewProp_GameServerQueryPort_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_GameVersion = { "GameVersion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreProSettings, GameVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameVersion_MetaData), NewProp_GameVersion_MetaData) };
void Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_bOverrideMinHandshakeVersion_SetBit(void* Obj)
{
	((USteamCoreProSettings*)Obj)->bOverrideMinHandshakeVersion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_bOverrideMinHandshakeVersion = { "bOverrideMinHandshakeVersion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamCoreProSettings), &Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_bOverrideMinHandshakeVersion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideMinHandshakeVersion_MetaData), NewProp_bOverrideMinHandshakeVersion_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_MinHandshakeVersion = { "MinHandshakeVersion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreProSettings, MinHandshakeVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinHandshakeVersion_MetaData), NewProp_MinHandshakeVersion_MetaData) };
void Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_bOverrideCurrentHandshakeVersion_SetBit(void* Obj)
{
	((USteamCoreProSettings*)Obj)->bOverrideCurrentHandshakeVersion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_bOverrideCurrentHandshakeVersion = { "bOverrideCurrentHandshakeVersion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USteamCoreProSettings), &Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_bOverrideCurrentHandshakeVersion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideCurrentHandshakeVersion_MetaData), NewProp_bOverrideCurrentHandshakeVersion_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_CurrentHandshakeVersion = { "CurrentHandshakeVersion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamCoreProSettings, CurrentHandshakeVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHandshakeVersion_MetaData), NewProp_CurrentHandshakeVersion_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamCoreProSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_bRelaunchInSteam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_bVACEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_bAllowP2PPacketRelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_bCopySteamDlls,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_P2PConnectionTimeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_SteamAppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_SteamDevAppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_Port,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_GameServerQueryPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_GameVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_bOverrideMinHandshakeVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_MinHandshakeVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_bOverrideCurrentHandshakeVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamCoreProSettings_Statics::NewProp_CurrentHandshakeVersion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamCoreProSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreProSettings_Statics::ClassParams = {
	&USteamCoreProSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USteamCoreProSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProSettings_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreProSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamCoreProSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamCoreProSettings()
{
	if (!Z_Registration_Info_UClass_USteamCoreProSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamCoreProSettings.OuterSingleton, Z_Construct_UClass_USteamCoreProSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamCoreProSettings.OuterSingleton;
}
template<> STEAMCOREPRO_API UClass* StaticClass<USteamCoreProSettings>()
{
	return USteamCoreProSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreProSettings);
USteamCoreProSettings::~USteamCoreProSettings() {}
// End Class USteamCoreProSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamCoreProSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamCoreProSettings, USteamCoreProSettings::StaticClass, TEXT("USteamCoreProSettings"), &Z_Registration_Info_UClass_USteamCoreProSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamCoreProSettings), 797315426U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamCoreProSettings_h_2177174302(TEXT("/Script/SteamCorePro"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamCoreProSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamCorePro_SteamCoreProSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
