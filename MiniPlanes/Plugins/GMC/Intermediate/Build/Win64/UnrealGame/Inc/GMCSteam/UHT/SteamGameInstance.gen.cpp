// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GMCSteam/Public/GameInstance/SteamGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamGameInstance() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
ENGINE_API UClass* Z_Construct_UClass_UNetDriver_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETravelFailure();
GMCSTEAM_API UClass* Z_Construct_UClass_UMainMenu_NoRegister();
GMCSTEAM_API UClass* Z_Construct_UClass_UPauseMenu_NoRegister();
GMCSTEAM_API UClass* Z_Construct_UClass_UServerListEntry_NoRegister();
GMCSTEAM_API UClass* Z_Construct_UClass_USteamGameInstance();
GMCSTEAM_API UClass* Z_Construct_UClass_USteamGameInstance_NoRegister();
GMCSTEAM_API UScriptStruct* Z_Construct_UScriptStruct_FServerInfo();
NETCORE_API UEnum* Z_Construct_UEnum_NetCore_ENetworkFailure();
UPackage* Z_Construct_UPackage__Script_GMCSteam();
// End Cross Module References

// Begin ScriptStruct FServerInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ServerInfo;
class UScriptStruct* FServerInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ServerInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ServerInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FServerInfo, (UObject*)Z_Construct_UPackage__Script_GMCSteam(), TEXT("ServerInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ServerInfo.OuterSingleton;
}
template<> GMCSTEAM_API UScriptStruct* StaticStruct<FServerInfo>()
{
	return FServerInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FServerInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameInstance/SteamGameInstance.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FServerInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FServerInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GMCSteam,
	nullptr,
	&NewStructOps,
	"ServerInfo",
	nullptr,
	0,
	sizeof(FServerInfo),
	alignof(FServerInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FServerInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FServerInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FServerInfo()
{
	if (!Z_Registration_Info_UScriptStruct_ServerInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ServerInfo.InnerSingleton, Z_Construct_UScriptStruct_FServerInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ServerInfo.InnerSingleton;
}
// End ScriptStruct FServerInfo

// Begin Class USteamGameInstance Function GetCurrentMapName
struct Z_Construct_UFunction_USteamGameInstance_GetCurrentMapName_Statics
{
	struct SteamGameInstance_eventGetCurrentMapName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Session" },
		{ "Comment", "/// Returns the name of the map the player is currently in (without path, file extension or streaming level prefix).\n" },
		{ "ModuleRelativePath", "Public/GameInstance/SteamGameInstance.h" },
		{ "ToolTip", "Returns the name of the map the player is currently in (without path, file extension or streaming level prefix)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameInstance_GetCurrentMapName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameInstance_eventGetCurrentMapName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameInstance_GetCurrentMapName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameInstance_GetCurrentMapName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameInstance_GetCurrentMapName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameInstance_GetCurrentMapName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameInstance, nullptr, "GetCurrentMapName", nullptr, nullptr, Z_Construct_UFunction_USteamGameInstance_GetCurrentMapName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameInstance_GetCurrentMapName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamGameInstance_GetCurrentMapName_Statics::SteamGameInstance_eventGetCurrentMapName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameInstance_GetCurrentMapName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameInstance_GetCurrentMapName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamGameInstance_GetCurrentMapName_Statics::SteamGameInstance_eventGetCurrentMapName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameInstance_GetCurrentMapName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameInstance_GetCurrentMapName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameInstance::execGetCurrentMapName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetCurrentMapName();
	P_NATIVE_END;
}
// End Class USteamGameInstance Function GetCurrentMapName

// Begin Class USteamGameInstance Function HostGameSession
struct Z_Construct_UFunction_USteamGameInstance_HostGameSession_Statics
{
	struct SteamGameInstance_eventHostGameSession_Parms
	{
		FString UserDesiredSessionName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Session" },
		{ "Comment", "///=============================================================================================================================================================\n/// Online Subsystem\n/// Creates a session with the passed name.\n" },
		{ "ModuleRelativePath", "Public/GameInstance/SteamGameInstance.h" },
		{ "ToolTip", "Online Subsystem\nCreates a session with the passed name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserDesiredSessionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserDesiredSessionName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameInstance_HostGameSession_Statics::NewProp_UserDesiredSessionName = { "UserDesiredSessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameInstance_eventHostGameSession_Parms, UserDesiredSessionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserDesiredSessionName_MetaData), NewProp_UserDesiredSessionName_MetaData) };
void Z_Construct_UFunction_USteamGameInstance_HostGameSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamGameInstance_eventHostGameSession_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamGameInstance_HostGameSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamGameInstance_eventHostGameSession_Parms), &Z_Construct_UFunction_USteamGameInstance_HostGameSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameInstance_HostGameSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameInstance_HostGameSession_Statics::NewProp_UserDesiredSessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameInstance_HostGameSession_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameInstance_HostGameSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameInstance_HostGameSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameInstance, nullptr, "HostGameSession", nullptr, nullptr, Z_Construct_UFunction_USteamGameInstance_HostGameSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameInstance_HostGameSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamGameInstance_HostGameSession_Statics::SteamGameInstance_eventHostGameSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameInstance_HostGameSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameInstance_HostGameSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamGameInstance_HostGameSession_Statics::SteamGameInstance_eventHostGameSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameInstance_HostGameSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameInstance_HostGameSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameInstance::execHostGameSession)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UserDesiredSessionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HostGameSession(Z_Param_UserDesiredSessionName);
	P_NATIVE_END;
}
// End Class USteamGameInstance Function HostGameSession

// Begin Class USteamGameInstance Function JoinGameSession
struct Z_Construct_UFunction_USteamGameInstance_JoinGameSession_Statics
{
	struct SteamGameInstance_eventJoinGameSession_Parms
	{
		int32 ServerEntryIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Session" },
		{ "Comment", "/// Joins the session with the passed index from the server list.\n" },
		{ "ModuleRelativePath", "Public/GameInstance/SteamGameInstance.h" },
		{ "ToolTip", "Joins the session with the passed index from the server list." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ServerEntryIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamGameInstance_JoinGameSession_Statics::NewProp_ServerEntryIndex = { "ServerEntryIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameInstance_eventJoinGameSession_Parms, ServerEntryIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USteamGameInstance_JoinGameSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamGameInstance_eventJoinGameSession_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamGameInstance_JoinGameSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamGameInstance_eventJoinGameSession_Parms), &Z_Construct_UFunction_USteamGameInstance_JoinGameSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameInstance_JoinGameSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameInstance_JoinGameSession_Statics::NewProp_ServerEntryIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameInstance_JoinGameSession_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameInstance_JoinGameSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameInstance_JoinGameSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameInstance, nullptr, "JoinGameSession", nullptr, nullptr, Z_Construct_UFunction_USteamGameInstance_JoinGameSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameInstance_JoinGameSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamGameInstance_JoinGameSession_Statics::SteamGameInstance_eventJoinGameSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameInstance_JoinGameSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameInstance_JoinGameSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamGameInstance_JoinGameSession_Statics::SteamGameInstance_eventJoinGameSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameInstance_JoinGameSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameInstance_JoinGameSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameInstance::execJoinGameSession)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ServerEntryIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->JoinGameSession(Z_Param_ServerEntryIndex);
	P_NATIVE_END;
}
// End Class USteamGameInstance Function JoinGameSession

// Begin Class USteamGameInstance Function OnNetworkFailure
struct Z_Construct_UFunction_USteamGameInstance_OnNetworkFailure_Statics
{
	struct SteamGameInstance_eventOnNetworkFailure_Parms
	{
		UWorld* World;
		UNetDriver* NetDriver;
		TEnumAsByte<ENetworkFailure::Type> FailureType;
		FString ErrorString;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/// Called when any kind of network error occurs.\n" },
		{ "ModuleRelativePath", "Public/GameInstance/SteamGameInstance.h" },
		{ "ToolTip", "Called when any kind of network error occurs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NetDriver;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FailureType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamGameInstance_OnNetworkFailure_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameInstance_eventOnNetworkFailure_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamGameInstance_OnNetworkFailure_Statics::NewProp_NetDriver = { "NetDriver", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameInstance_eventOnNetworkFailure_Parms, NetDriver), Z_Construct_UClass_UNetDriver_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameInstance_OnNetworkFailure_Statics::NewProp_FailureType = { "FailureType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameInstance_eventOnNetworkFailure_Parms, FailureType), Z_Construct_UEnum_NetCore_ENetworkFailure, METADATA_PARAMS(0, nullptr) }; // 1270560748
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameInstance_OnNetworkFailure_Statics::NewProp_ErrorString = { "ErrorString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameInstance_eventOnNetworkFailure_Parms, ErrorString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorString_MetaData), NewProp_ErrorString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameInstance_OnNetworkFailure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameInstance_OnNetworkFailure_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameInstance_OnNetworkFailure_Statics::NewProp_NetDriver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameInstance_OnNetworkFailure_Statics::NewProp_FailureType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameInstance_OnNetworkFailure_Statics::NewProp_ErrorString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameInstance_OnNetworkFailure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameInstance_OnNetworkFailure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameInstance, nullptr, "OnNetworkFailure", nullptr, nullptr, Z_Construct_UFunction_USteamGameInstance_OnNetworkFailure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameInstance_OnNetworkFailure_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamGameInstance_OnNetworkFailure_Statics::SteamGameInstance_eventOnNetworkFailure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameInstance_OnNetworkFailure_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameInstance_OnNetworkFailure_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamGameInstance_OnNetworkFailure_Statics::SteamGameInstance_eventOnNetworkFailure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameInstance_OnNetworkFailure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameInstance_OnNetworkFailure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameInstance::execOnNetworkFailure)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_OBJECT(UNetDriver,Z_Param_NetDriver);
	P_GET_PROPERTY(FByteProperty,Z_Param_FailureType);
	P_GET_PROPERTY(FStrProperty,Z_Param_ErrorString);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnNetworkFailure(Z_Param_World,Z_Param_NetDriver,ENetworkFailure::Type(Z_Param_FailureType),Z_Param_ErrorString);
	P_NATIVE_END;
}
// End Class USteamGameInstance Function OnNetworkFailure

// Begin Class USteamGameInstance Function OnTravelFailure
struct Z_Construct_UFunction_USteamGameInstance_OnTravelFailure_Statics
{
	struct SteamGameInstance_eventOnTravelFailure_Parms
	{
		UWorld* World;
		TEnumAsByte<ETravelFailure::Type> FailureType;
		FString ErrorString;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/// Called when hosting or joining fails for any reason.\n" },
		{ "ModuleRelativePath", "Public/GameInstance/SteamGameInstance.h" },
		{ "ToolTip", "Called when hosting or joining fails for any reason." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FailureType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorString;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamGameInstance_OnTravelFailure_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameInstance_eventOnTravelFailure_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamGameInstance_OnTravelFailure_Statics::NewProp_FailureType = { "FailureType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameInstance_eventOnTravelFailure_Parms, FailureType), Z_Construct_UEnum_Engine_ETravelFailure, METADATA_PARAMS(0, nullptr) }; // 294913692
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamGameInstance_OnTravelFailure_Statics::NewProp_ErrorString = { "ErrorString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SteamGameInstance_eventOnTravelFailure_Parms, ErrorString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorString_MetaData), NewProp_ErrorString_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameInstance_OnTravelFailure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameInstance_OnTravelFailure_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameInstance_OnTravelFailure_Statics::NewProp_FailureType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameInstance_OnTravelFailure_Statics::NewProp_ErrorString,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameInstance_OnTravelFailure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameInstance_OnTravelFailure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameInstance, nullptr, "OnTravelFailure", nullptr, nullptr, Z_Construct_UFunction_USteamGameInstance_OnTravelFailure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameInstance_OnTravelFailure_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamGameInstance_OnTravelFailure_Statics::SteamGameInstance_eventOnTravelFailure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameInstance_OnTravelFailure_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameInstance_OnTravelFailure_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamGameInstance_OnTravelFailure_Statics::SteamGameInstance_eventOnTravelFailure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameInstance_OnTravelFailure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameInstance_OnTravelFailure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameInstance::execOnTravelFailure)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_PROPERTY(FByteProperty,Z_Param_FailureType);
	P_GET_PROPERTY(FStrProperty,Z_Param_ErrorString);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTravelFailure(Z_Param_World,ETravelFailure::Type(Z_Param_FailureType),Z_Param_ErrorString);
	P_NATIVE_END;
}
// End Class USteamGameInstance Function OnTravelFailure

// Begin Class USteamGameInstance Function RefreshServerList
struct Z_Construct_UFunction_USteamGameInstance_RefreshServerList_Statics
{
	struct SteamGameInstance_eventRefreshServerList_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Session" },
		{ "Comment", "/// Searches for sessions and updates the server list.\n" },
		{ "ModuleRelativePath", "Public/GameInstance/SteamGameInstance.h" },
		{ "ToolTip", "Searches for sessions and updates the server list." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USteamGameInstance_RefreshServerList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SteamGameInstance_eventRefreshServerList_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamGameInstance_RefreshServerList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SteamGameInstance_eventRefreshServerList_Parms), &Z_Construct_UFunction_USteamGameInstance_RefreshServerList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamGameInstance_RefreshServerList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamGameInstance_RefreshServerList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameInstance_RefreshServerList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamGameInstance_RefreshServerList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamGameInstance, nullptr, "RefreshServerList", nullptr, nullptr, Z_Construct_UFunction_USteamGameInstance_RefreshServerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameInstance_RefreshServerList_Statics::PropPointers), sizeof(Z_Construct_UFunction_USteamGameInstance_RefreshServerList_Statics::SteamGameInstance_eventRefreshServerList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USteamGameInstance_RefreshServerList_Statics::Function_MetaDataParams), Z_Construct_UFunction_USteamGameInstance_RefreshServerList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USteamGameInstance_RefreshServerList_Statics::SteamGameInstance_eventRefreshServerList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USteamGameInstance_RefreshServerList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamGameInstance_RefreshServerList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USteamGameInstance::execRefreshServerList)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RefreshServerList();
	P_NATIVE_END;
}
// End Class USteamGameInstance Function RefreshServerList

// Begin Class USteamGameInstance
void USteamGameInstance::StaticRegisterNativesUSteamGameInstance()
{
	UClass* Class = USteamGameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentMapName", &USteamGameInstance::execGetCurrentMapName },
		{ "HostGameSession", &USteamGameInstance::execHostGameSession },
		{ "JoinGameSession", &USteamGameInstance::execJoinGameSession },
		{ "OnNetworkFailure", &USteamGameInstance::execOnNetworkFailure },
		{ "OnTravelFailure", &USteamGameInstance::execOnTravelFailure },
		{ "RefreshServerList", &USteamGameInstance::execRefreshServerList },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamGameInstance);
UClass* Z_Construct_UClass_USteamGameInstance_NoRegister()
{
	return USteamGameInstance::StaticClass();
}
struct Z_Construct_UClass_USteamGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/// Game instance class providing a basic Steam implementation for hosting and joining sessions.\n" },
		{ "IncludePath", "GameInstance/SteamGameInstance.h" },
		{ "ModuleRelativePath", "Public/GameInstance/SteamGameInstance.h" },
		{ "ToolTip", "Game instance class providing a basic Steam implementation for hosting and joining sessions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HostURL_MetaData[] = {
		{ "Category", "Session" },
		{ "Comment", "/// Project-internal path (no leading slash) to the map that should be hosted when the user launches a game through the menu. The map will always be hosted as\n/// a listen server by default.\n" },
		{ "ModuleRelativePath", "Public/GameInstance/SteamGameInstance.h" },
		{ "ToolTip", "Project-internal path (no leading slash) to the map that should be hosted when the user launches a game through the menu. The map will always be hosted as\na listen server by default." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPublicConnections_MetaData[] = {
		{ "Category", "Session" },
		{ "ClampMin", "0" },
		{ "Comment", "/// The maximum number of connections to accept for a session.\n" },
		{ "ModuleRelativePath", "Public/GameInstance/SteamGameInstance.h" },
		{ "ToolTip", "The maximum number of connections to accept for a session." },
		{ "UIMax", "16" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainMenu_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "/// The main menu class to use.\n" },
		{ "ModuleRelativePath", "Public/GameInstance/SteamGameInstance.h" },
		{ "ToolTip", "The main menu class to use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PauseMenu_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "/// The pause menu class to use.\n" },
		{ "ModuleRelativePath", "Public/GameInstance/SteamGameInstance.h" },
		{ "ToolTip", "The pause menu class to use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerListEntry_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "/// The server list entry class to use.\n" },
		{ "ModuleRelativePath", "Public/GameInstance/SteamGameInstance.h" },
		{ "ToolTip", "The server list entry class to use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerList_MetaData[] = {
		{ "Category", "Session" },
		{ "Comment", "/// List of all sessions found.\n" },
		{ "ModuleRelativePath", "Public/GameInstance/SteamGameInstance.h" },
		{ "ToolTip", "List of all sessions found." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserDesiredSessionName_MetaData[] = {
		{ "Category", "Session" },
		{ "Comment", "/// User-entered name of the online session.\n" },
		{ "ModuleRelativePath", "Public/GameInstance/SteamGameInstance.h" },
		{ "ToolTip", "User-entered name of the online session." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_HostURL;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPublicConnections;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MainMenu;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PauseMenu;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ServerListEntry;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ServerList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ServerList;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserDesiredSessionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamGameInstance_GetCurrentMapName, "GetCurrentMapName" }, // 2699770759
		{ &Z_Construct_UFunction_USteamGameInstance_HostGameSession, "HostGameSession" }, // 4032253573
		{ &Z_Construct_UFunction_USteamGameInstance_JoinGameSession, "JoinGameSession" }, // 1604450360
		{ &Z_Construct_UFunction_USteamGameInstance_OnNetworkFailure, "OnNetworkFailure" }, // 2868399420
		{ &Z_Construct_UFunction_USteamGameInstance_OnTravelFailure, "OnTravelFailure" }, // 290163078
		{ &Z_Construct_UFunction_USteamGameInstance_RefreshServerList, "RefreshServerList" }, // 1671558376
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USteamGameInstance_Statics::NewProp_HostURL = { "HostURL", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameInstance, HostURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HostURL_MetaData), NewProp_HostURL_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USteamGameInstance_Statics::NewProp_MaxPublicConnections = { "MaxPublicConnections", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameInstance, MaxPublicConnections), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPublicConnections_MetaData), NewProp_MaxPublicConnections_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USteamGameInstance_Statics::NewProp_MainMenu = { "MainMenu", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameInstance, MainMenu), Z_Construct_UClass_UClass, Z_Construct_UClass_UMainMenu_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainMenu_MetaData), NewProp_MainMenu_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USteamGameInstance_Statics::NewProp_PauseMenu = { "PauseMenu", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameInstance, PauseMenu), Z_Construct_UClass_UClass, Z_Construct_UClass_UPauseMenu_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PauseMenu_MetaData), NewProp_PauseMenu_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USteamGameInstance_Statics::NewProp_ServerListEntry = { "ServerListEntry", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameInstance, ServerListEntry), Z_Construct_UClass_UClass, Z_Construct_UClass_UServerListEntry_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerListEntry_MetaData), NewProp_ServerListEntry_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USteamGameInstance_Statics::NewProp_ServerList_Inner = { "ServerList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FServerInfo, METADATA_PARAMS(0, nullptr) }; // 2788258276
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USteamGameInstance_Statics::NewProp_ServerList = { "ServerList", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameInstance, ServerList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerList_MetaData), NewProp_ServerList_MetaData) }; // 2788258276
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USteamGameInstance_Statics::NewProp_UserDesiredSessionName = { "UserDesiredSessionName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USteamGameInstance, UserDesiredSessionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserDesiredSessionName_MetaData), NewProp_UserDesiredSessionName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameInstance_Statics::NewProp_HostURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameInstance_Statics::NewProp_MaxPublicConnections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameInstance_Statics::NewProp_MainMenu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameInstance_Statics::NewProp_PauseMenu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameInstance_Statics::NewProp_ServerListEntry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameInstance_Statics::NewProp_ServerList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameInstance_Statics::NewProp_ServerList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamGameInstance_Statics::NewProp_UserDesiredSessionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USteamGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_GMCSteam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamGameInstance_Statics::ClassParams = {
	&USteamGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USteamGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USteamGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_USteamGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USteamGameInstance()
{
	if (!Z_Registration_Info_UClass_USteamGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamGameInstance.OuterSingleton, Z_Construct_UClass_USteamGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USteamGameInstance.OuterSingleton;
}
template<> GMCSTEAM_API UClass* StaticClass<USteamGameInstance>()
{
	return USteamGameInstance::StaticClass();
}
USteamGameInstance::USteamGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USteamGameInstance);
USteamGameInstance::~USteamGameInstance() {}
// End Class USteamGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCSteam_Public_GameInstance_SteamGameInstance_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FServerInfo::StaticStruct, Z_Construct_UScriptStruct_FServerInfo_Statics::NewStructOps, TEXT("ServerInfo"), &Z_Registration_Info_UScriptStruct_ServerInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FServerInfo), 2788258276U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USteamGameInstance, USteamGameInstance::StaticClass, TEXT("USteamGameInstance"), &Z_Registration_Info_UClass_USteamGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamGameInstance), 3093944509U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCSteam_Public_GameInstance_SteamGameInstance_h_175798143(TEXT("/Script/GMCSteam"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCSteam_Public_GameInstance_SteamGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCSteam_Public_GameInstance_SteamGameInstance_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCSteam_Public_GameInstance_SteamGameInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCSteam_Public_GameInstance_SteamGameInstance_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
