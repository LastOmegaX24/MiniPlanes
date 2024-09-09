// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCorePro/Public/SteamNetworking/SteamNetworkingTypes.h"
#include "SteamCorePro/Public/SteamCorePro/SteamTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamNetworkingTypes() {}

// Begin Cross Module References
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamP2PSend();
STEAMCOREPRO_API UEnum* Z_Construct_UEnum_SteamCorePro_ESteamP2PSessionError();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnP2PSessionConnectFail__DelegateSignature();
STEAMCOREPRO_API UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnP2PSessionRequest__DelegateSignature();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FP2PSessionConnectFail();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FP2PSessionRequest();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
STEAMCOREPRO_API UScriptStruct* Z_Construct_UScriptStruct_FSteamP2PSessionState();
UPackage* Z_Construct_UPackage__Script_SteamCorePro();
// End Cross Module References

// Begin Enum ESteamP2PSend
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamP2PSend;
static UEnum* ESteamP2PSend_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamP2PSend.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamP2PSend.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamP2PSend, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamP2PSend"));
	}
	return Z_Registration_Info_UEnum_ESteamP2PSend.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamP2PSend>()
{
	return ESteamP2PSend_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamP2PSend_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworkingTypes.h" },
		{ "Reliable.Name", "ESteamP2PSend::Reliable" },
		{ "ReliableWithBuffering.Name", "ESteamP2PSend::ReliableWithBuffering" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
		{ "Unreliable.Name", "ESteamP2PSend::Unreliable" },
		{ "UnreliableNoDelay.Name", "ESteamP2PSend::UnreliableNoDelay" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamP2PSend::Unreliable", (int64)ESteamP2PSend::Unreliable },
		{ "ESteamP2PSend::UnreliableNoDelay", (int64)ESteamP2PSend::UnreliableNoDelay },
		{ "ESteamP2PSend::Reliable", (int64)ESteamP2PSend::Reliable },
		{ "ESteamP2PSend::ReliableWithBuffering", (int64)ESteamP2PSend::ReliableWithBuffering },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamP2PSend_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamP2PSend",
	"ESteamP2PSend",
	Z_Construct_UEnum_SteamCorePro_ESteamP2PSend_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamP2PSend_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamP2PSend_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamP2PSend_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamP2PSend()
{
	if (!Z_Registration_Info_UEnum_ESteamP2PSend.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamP2PSend.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamP2PSend_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamP2PSend.InnerSingleton;
}
// End Enum ESteamP2PSend

// Begin Enum ESteamP2PSessionError
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESteamP2PSessionError;
static UEnum* ESteamP2PSessionError_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESteamP2PSessionError.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESteamP2PSessionError.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamCorePro_ESteamP2PSessionError, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("ESteamP2PSessionError"));
	}
	return Z_Registration_Info_UEnum_ESteamP2PSessionError.OuterSingleton;
}
template<> STEAMCOREPRO_API UEnum* StaticEnum<ESteamP2PSessionError>()
{
	return ESteamP2PSessionError_StaticEnum();
}
struct Z_Construct_UEnum_SteamCorePro_ESteamP2PSessionError_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DestinationNotLoggedIn.Name", "ESteamP2PSessionError::DestinationNotLoggedIn" },
		{ "Max.Name", "ESteamP2PSessionError::Max" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworkingTypes.h" },
		{ "None.Name", "ESteamP2PSessionError::None" },
		{ "NoRightsToApp.Name", "ESteamP2PSessionError::NoRightsToApp" },
		{ "NotRunningApp.Name", "ESteamP2PSessionError::NotRunningApp" },
		{ "Timeout.Name", "ESteamP2PSessionError::Timeout" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESteamP2PSessionError::None", (int64)ESteamP2PSessionError::None },
		{ "ESteamP2PSessionError::NotRunningApp", (int64)ESteamP2PSessionError::NotRunningApp },
		{ "ESteamP2PSessionError::NoRightsToApp", (int64)ESteamP2PSessionError::NoRightsToApp },
		{ "ESteamP2PSessionError::DestinationNotLoggedIn", (int64)ESteamP2PSessionError::DestinationNotLoggedIn },
		{ "ESteamP2PSessionError::Timeout", (int64)ESteamP2PSessionError::Timeout },
		{ "ESteamP2PSessionError::Max", (int64)ESteamP2PSessionError::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamCorePro_ESteamP2PSessionError_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	"ESteamP2PSessionError",
	"ESteamP2PSessionError",
	Z_Construct_UEnum_SteamCorePro_ESteamP2PSessionError_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamP2PSessionError_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SteamCorePro_ESteamP2PSessionError_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SteamCorePro_ESteamP2PSessionError_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SteamCorePro_ESteamP2PSessionError()
{
	if (!Z_Registration_Info_UEnum_ESteamP2PSessionError.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESteamP2PSessionError.InnerSingleton, Z_Construct_UEnum_SteamCorePro_ESteamP2PSessionError_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESteamP2PSessionError.InnerSingleton;
}
// End Enum ESteamP2PSessionError

// Begin ScriptStruct FSteamP2PSessionState
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SteamP2PSessionState;
class UScriptStruct* FSteamP2PSessionState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SteamP2PSessionState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SteamP2PSessionState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamP2PSessionState, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("SteamP2PSessionState"));
	}
	return Z_Registration_Info_UScriptStruct_SteamP2PSessionState.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FSteamP2PSessionState>()
{
	return FSteamP2PSessionState::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworkingTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConnectionActive_MetaData[] = {
		{ "Category", "Networking" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworkingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConnecting_MetaData[] = {
		{ "Category", "Networking" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworkingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_P2PSessionError_MetaData[] = {
		{ "Category", "Networking" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworkingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsingRelay_MetaData[] = {
		{ "Category", "Networking" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworkingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BytesQueuedForSend_MetaData[] = {
		{ "Category", "Networking" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworkingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PacketsQueuedForSend_MetaData[] = {
		{ "Category", "Networking" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworkingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoteIP_MetaData[] = {
		{ "Category", "Networking" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworkingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemotePort_MetaData[] = {
		{ "Category", "Networking" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworkingTypes.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bConnectionActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConnectionActive;
	static void NewProp_bConnecting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConnecting;
	static const UECodeGen_Private::FBytePropertyParams NewProp_P2PSessionError_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_P2PSessionError;
	static void NewProp_bUsingRelay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsingRelay;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BytesQueuedForSend;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PacketsQueuedForSend;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RemoteIP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RemotePort;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamP2PSessionState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bConnectionActive_SetBit(void* Obj)
{
	((FSteamP2PSessionState*)Obj)->bConnectionActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bConnectionActive = { "bConnectionActive", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSteamP2PSessionState), &Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bConnectionActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConnectionActive_MetaData), NewProp_bConnectionActive_MetaData) };
void Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bConnecting_SetBit(void* Obj)
{
	((FSteamP2PSessionState*)Obj)->bConnecting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bConnecting = { "bConnecting", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSteamP2PSessionState), &Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bConnecting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConnecting_MetaData), NewProp_bConnecting_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_P2PSessionError_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_P2PSessionError = { "P2PSessionError", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamP2PSessionState, P2PSessionError), Z_Construct_UEnum_SteamCorePro_ESteamP2PSessionError, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_P2PSessionError_MetaData), NewProp_P2PSessionError_MetaData) }; // 3623397748
void Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bUsingRelay_SetBit(void* Obj)
{
	((FSteamP2PSessionState*)Obj)->bUsingRelay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bUsingRelay = { "bUsingRelay", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSteamP2PSessionState), &Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bUsingRelay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsingRelay_MetaData), NewProp_bUsingRelay_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_BytesQueuedForSend = { "BytesQueuedForSend", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamP2PSessionState, BytesQueuedForSend), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BytesQueuedForSend_MetaData), NewProp_BytesQueuedForSend_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_PacketsQueuedForSend = { "PacketsQueuedForSend", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamP2PSessionState, PacketsQueuedForSend), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PacketsQueuedForSend_MetaData), NewProp_PacketsQueuedForSend_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_RemoteIP = { "RemoteIP", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamP2PSessionState, RemoteIP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoteIP_MetaData), NewProp_RemoteIP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_RemotePort = { "RemotePort", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSteamP2PSessionState, RemotePort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemotePort_MetaData), NewProp_RemotePort_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bConnectionActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bConnecting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_P2PSessionError_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_P2PSessionError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_bUsingRelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_BytesQueuedForSend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_PacketsQueuedForSend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_RemoteIP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewProp_RemotePort,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"SteamP2PSessionState",
	Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::PropPointers),
	sizeof(FSteamP2PSessionState),
	alignof(FSteamP2PSessionState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSteamP2PSessionState()
{
	if (!Z_Registration_Info_UScriptStruct_SteamP2PSessionState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SteamP2PSessionState.InnerSingleton, Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SteamP2PSessionState.InnerSingleton;
}
// End ScriptStruct FSteamP2PSessionState

// Begin ScriptStruct FP2PSessionRequest
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_P2PSessionRequest;
class UScriptStruct* FP2PSessionRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_P2PSessionRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_P2PSessionRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FP2PSessionRequest, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("P2PSessionRequest"));
	}
	return Z_Registration_Info_UScriptStruct_P2PSessionRequest.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FP2PSessionRequest>()
{
	return FP2PSessionRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FP2PSessionRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworkingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDRemote_MetaData[] = {
		{ "Category", "Networking" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworkingTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDRemote;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FP2PSessionRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FP2PSessionRequest_Statics::NewProp_SteamIDRemote = { "SteamIDRemote", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FP2PSessionRequest, SteamIDRemote), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDRemote_MetaData), NewProp_SteamIDRemote_MetaData) }; // 4251036166
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FP2PSessionRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FP2PSessionRequest_Statics::NewProp_SteamIDRemote,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FP2PSessionRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FP2PSessionRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"P2PSessionRequest",
	Z_Construct_UScriptStruct_FP2PSessionRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FP2PSessionRequest_Statics::PropPointers),
	sizeof(FP2PSessionRequest),
	alignof(FP2PSessionRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FP2PSessionRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FP2PSessionRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FP2PSessionRequest()
{
	if (!Z_Registration_Info_UScriptStruct_P2PSessionRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_P2PSessionRequest.InnerSingleton, Z_Construct_UScriptStruct_FP2PSessionRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_P2PSessionRequest.InnerSingleton;
}
// End ScriptStruct FP2PSessionRequest

// Begin ScriptStruct FP2PSessionConnectFail
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_P2PSessionConnectFail;
class UScriptStruct* FP2PSessionConnectFail::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_P2PSessionConnectFail.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_P2PSessionConnectFail.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FP2PSessionConnectFail, (UObject*)Z_Construct_UPackage__Script_SteamCorePro(), TEXT("P2PSessionConnectFail"));
	}
	return Z_Registration_Info_UScriptStruct_P2PSessionConnectFail.OuterSingleton;
}
template<> STEAMCOREPRO_API UScriptStruct* StaticStruct<FP2PSessionConnectFail>()
{
	return FP2PSessionConnectFail::StaticStruct();
}
struct Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworkingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIDRemote_MetaData[] = {
		{ "Category", "Networking" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworkingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_P2PSessionError_MetaData[] = {
		{ "Category", "Networking" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworkingTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDRemote;
	static const UECodeGen_Private::FBytePropertyParams NewProp_P2PSessionError_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_P2PSessionError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FP2PSessionConnectFail>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::NewProp_SteamIDRemote = { "SteamIDRemote", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FP2PSessionConnectFail, SteamIDRemote), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIDRemote_MetaData), NewProp_SteamIDRemote_MetaData) }; // 4251036166
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::NewProp_P2PSessionError_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::NewProp_P2PSessionError = { "P2PSessionError", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FP2PSessionConnectFail, P2PSessionError), Z_Construct_UEnum_SteamCorePro_ESteamP2PSessionError, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_P2PSessionError_MetaData), NewProp_P2PSessionError_MetaData) }; // 3623397748
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::NewProp_SteamIDRemote,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::NewProp_P2PSessionError_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::NewProp_P2PSessionError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamCorePro,
	nullptr,
	&NewStructOps,
	"P2PSessionConnectFail",
	Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::PropPointers),
	sizeof(FP2PSessionConnectFail),
	alignof(FP2PSessionConnectFail),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FP2PSessionConnectFail()
{
	if (!Z_Registration_Info_UScriptStruct_P2PSessionConnectFail.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_P2PSessionConnectFail.InnerSingleton, Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_P2PSessionConnectFail.InnerSingleton;
}
// End ScriptStruct FP2PSessionConnectFail

// Begin Delegate FOnP2PSessionRequest
struct Z_Construct_UDelegateFunction_SteamCorePro_OnP2PSessionRequest__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnP2PSessionRequest_Parms
	{
		FP2PSessionRequest Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworkingTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnP2PSessionRequest__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnP2PSessionRequest_Parms, Data), Z_Construct_UScriptStruct_FP2PSessionRequest, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 1096534922
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnP2PSessionRequest__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnP2PSessionRequest__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnP2PSessionRequest__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnP2PSessionRequest__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnP2PSessionRequest__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnP2PSessionRequest__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnP2PSessionRequest__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnP2PSessionRequest__DelegateSignature_Statics::_Script_SteamCorePro_eventOnP2PSessionRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnP2PSessionRequest__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnP2PSessionRequest__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnP2PSessionRequest__DelegateSignature_Statics::_Script_SteamCorePro_eventOnP2PSessionRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnP2PSessionRequest__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnP2PSessionRequest__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnP2PSessionRequest_DelegateWrapper(const FMulticastScriptDelegate& OnP2PSessionRequest, FP2PSessionRequest const& Data)
{
	struct _Script_SteamCorePro_eventOnP2PSessionRequest_Parms
	{
		FP2PSessionRequest Data;
	};
	_Script_SteamCorePro_eventOnP2PSessionRequest_Parms Parms;
	Parms.Data=Data;
	OnP2PSessionRequest.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnP2PSessionRequest

// Begin Delegate FOnP2PSessionConnectFail
struct Z_Construct_UDelegateFunction_SteamCorePro_OnP2PSessionConnectFail__DelegateSignature_Statics
{
	struct _Script_SteamCorePro_eventOnP2PSessionConnectFail_Parms
	{
		FP2PSessionConnectFail Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamNetworking/SteamNetworkingTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCorePro_OnP2PSessionConnectFail__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamCorePro_eventOnP2PSessionConnectFail_Parms, Data), Z_Construct_UScriptStruct_FP2PSessionConnectFail, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2181681508
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCorePro_OnP2PSessionConnectFail__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCorePro_OnP2PSessionConnectFail__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnP2PSessionConnectFail__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCorePro_OnP2PSessionConnectFail__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCorePro, nullptr, "OnP2PSessionConnectFail__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamCorePro_OnP2PSessionConnectFail__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnP2PSessionConnectFail__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnP2PSessionConnectFail__DelegateSignature_Statics::_Script_SteamCorePro_eventOnP2PSessionConnectFail_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCorePro_OnP2PSessionConnectFail__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamCorePro_OnP2PSessionConnectFail__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamCorePro_OnP2PSessionConnectFail__DelegateSignature_Statics::_Script_SteamCorePro_eventOnP2PSessionConnectFail_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamCorePro_OnP2PSessionConnectFail__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamCorePro_OnP2PSessionConnectFail__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnP2PSessionConnectFail_DelegateWrapper(const FMulticastScriptDelegate& OnP2PSessionConnectFail, FP2PSessionConnectFail const& Data)
{
	struct _Script_SteamCorePro_eventOnP2PSessionConnectFail_Parms
	{
		FP2PSessionConnectFail Data;
	};
	_Script_SteamCorePro_eventOnP2PSessionConnectFail_Parms Parms;
	Parms.Data=Data;
	OnP2PSessionConnectFail.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnP2PSessionConnectFail

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamNetworking_SteamNetworkingTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESteamP2PSend_StaticEnum, TEXT("ESteamP2PSend"), &Z_Registration_Info_UEnum_ESteamP2PSend, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2057104178U) },
		{ ESteamP2PSessionError_StaticEnum, TEXT("ESteamP2PSessionError"), &Z_Registration_Info_UEnum_ESteamP2PSessionError, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3623397748U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSteamP2PSessionState::StaticStruct, Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics::NewStructOps, TEXT("SteamP2PSessionState"), &Z_Registration_Info_UScriptStruct_SteamP2PSessionState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSteamP2PSessionState), 2678768600U) },
		{ FP2PSessionRequest::StaticStruct, Z_Construct_UScriptStruct_FP2PSessionRequest_Statics::NewStructOps, TEXT("P2PSessionRequest"), &Z_Registration_Info_UScriptStruct_P2PSessionRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FP2PSessionRequest), 1096534922U) },
		{ FP2PSessionConnectFail::StaticStruct, Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics::NewStructOps, TEXT("P2PSessionConnectFail"), &Z_Registration_Info_UScriptStruct_P2PSessionConnectFail, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FP2PSessionConnectFail), 2181681508U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamNetworking_SteamNetworkingTypes_h_4197316322(TEXT("/Script/SteamCorePro"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamNetworking_SteamNetworkingTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamNetworking_SteamNetworkingTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamNetworking_SteamNetworkingTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamCorePro_Source_SteamCorePro_Public_SteamNetworking_SteamNetworkingTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
