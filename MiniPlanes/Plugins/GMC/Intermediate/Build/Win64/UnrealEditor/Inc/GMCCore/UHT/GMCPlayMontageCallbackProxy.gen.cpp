// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GMCCore/Public/Utility/GMCPlayMontageCallbackProxy.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMCPlayMontageCallbackProxy() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBranchingPointNotifyPayload();
GMCCORE_API UClass* Z_Construct_UClass_UGMC_OrganicMovementCmp_NoRegister();
GMCCORE_API UClass* Z_Construct_UClass_UGMC_PlayMontageCallbackProxy();
GMCCORE_API UClass* Z_Construct_UClass_UGMC_PlayMontageCallbackProxy_NoRegister();
GMCCORE_API UFunction* Z_Construct_UDelegateFunction_GMCCore_GMC_OnMontagePlayDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_GMCCore();
// End Cross Module References

// Begin Delegate FGMC_OnMontagePlayDelegate
struct Z_Construct_UDelegateFunction_GMCCore_GMC_OnMontagePlayDelegate__DelegateSignature_Statics
{
	struct _Script_GMCCore_eventGMC_OnMontagePlayDelegate_Parms
	{
		FName NotifyName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utility/GMCPlayMontageCallbackProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_GMCCore_GMC_OnMontagePlayDelegate__DelegateSignature_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GMCCore_eventGMC_OnMontagePlayDelegate_Parms, NotifyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GMCCore_GMC_OnMontagePlayDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GMCCore_GMC_OnMontagePlayDelegate__DelegateSignature_Statics::NewProp_NotifyName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GMCCore_GMC_OnMontagePlayDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GMCCore_GMC_OnMontagePlayDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GMCCore, nullptr, "GMC_OnMontagePlayDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GMCCore_GMC_OnMontagePlayDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GMCCore_GMC_OnMontagePlayDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GMCCore_GMC_OnMontagePlayDelegate__DelegateSignature_Statics::_Script_GMCCore_eventGMC_OnMontagePlayDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GMCCore_GMC_OnMontagePlayDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GMCCore_GMC_OnMontagePlayDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_GMCCore_GMC_OnMontagePlayDelegate__DelegateSignature_Statics::_Script_GMCCore_eventGMC_OnMontagePlayDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GMCCore_GMC_OnMontagePlayDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GMCCore_GMC_OnMontagePlayDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FGMC_OnMontagePlayDelegate_DelegateWrapper(const FMulticastScriptDelegate& GMC_OnMontagePlayDelegate, FName NotifyName)
{
	struct _Script_GMCCore_eventGMC_OnMontagePlayDelegate_Parms
	{
		FName NotifyName;
	};
	_Script_GMCCore_eventGMC_OnMontagePlayDelegate_Parms Parms;
	Parms.NotifyName=NotifyName;
	GMC_OnMontagePlayDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FGMC_OnMontagePlayDelegate

// Begin Class UGMC_PlayMontageCallbackProxy Function CreateProxyObjectForPlayMontage
struct Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics
{
	struct GMC_PlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms
	{
		UGMC_OrganicMovementCmp* Target;
		UAnimMontage* MontageToPlay;
		float StartPosition;
		float PlayRate;
		FName StartSection;
		bool bInterruptOther;
		bool bCancelOnBlendIn;
		bool bCancelOnBlendOut;
		UGMC_PlayMontageCallbackProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "CPP_Default_bCancelOnBlendIn", "false" },
		{ "CPP_Default_bCancelOnBlendOut", "true" },
		{ "CPP_Default_bInterruptOther", "true" },
		{ "CPP_Default_PlayRate", "1.000000" },
		{ "CPP_Default_StartPosition", "0.000000" },
		{ "CPP_Default_StartSection", "None" },
		{ "DefaultToSelf", "Target" },
		{ "ModuleRelativePath", "Public/Utility/GMCPlayMontageCallbackProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageToPlay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartPosition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartSection;
	static void NewProp_bInterruptOther_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterruptOther;
	static void NewProp_bCancelOnBlendIn_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCancelOnBlendIn;
	static void NewProp_bCancelOnBlendOut_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCancelOnBlendOut;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_PlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms, Target), Z_Construct_UClass_UGMC_OrganicMovementCmp_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_PlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_PlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms, StartPosition), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_PlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms, PlayRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_StartSection = { "StartSection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_PlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms, StartSection), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_bInterruptOther_SetBit(void* Obj)
{
	((GMC_PlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms*)Obj)->bInterruptOther = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_bInterruptOther = { "bInterruptOther", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_PlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms), &Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_bInterruptOther_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_bCancelOnBlendIn_SetBit(void* Obj)
{
	((GMC_PlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms*)Obj)->bCancelOnBlendIn = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_bCancelOnBlendIn = { "bCancelOnBlendIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_PlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms), &Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_bCancelOnBlendIn_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_bCancelOnBlendOut_SetBit(void* Obj)
{
	((GMC_PlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms*)Obj)->bCancelOnBlendOut = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_bCancelOnBlendOut = { "bCancelOnBlendOut", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_PlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms), &Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_bCancelOnBlendOut_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_PlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms, ReturnValue), Z_Construct_UClass_UGMC_PlayMontageCallbackProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_MontageToPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_StartPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_PlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_StartSection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_bInterruptOther,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_bCancelOnBlendIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_bCancelOnBlendOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_PlayMontageCallbackProxy, nullptr, "CreateProxyObjectForPlayMontage", nullptr, nullptr, Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::GMC_PlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::GMC_PlayMontageCallbackProxy_eventCreateProxyObjectForPlayMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_CreateProxyObjectForPlayMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_PlayMontageCallbackProxy::execCreateProxyObjectForPlayMontage)
{
	P_GET_OBJECT(UGMC_OrganicMovementCmp,Z_Param_Target);
	P_GET_OBJECT(UAnimMontage,Z_Param_MontageToPlay);
	P_GET_PROPERTY(FFloatProperty,Z_Param_StartPosition);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PlayRate);
	P_GET_PROPERTY(FNameProperty,Z_Param_StartSection);
	P_GET_UBOOL(Z_Param_bInterruptOther);
	P_GET_UBOOL(Z_Param_bCancelOnBlendIn);
	P_GET_UBOOL(Z_Param_bCancelOnBlendOut);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGMC_PlayMontageCallbackProxy**)Z_Param__Result=UGMC_PlayMontageCallbackProxy::CreateProxyObjectForPlayMontage(Z_Param_Target,Z_Param_MontageToPlay,Z_Param_StartPosition,Z_Param_PlayRate,Z_Param_StartSection,Z_Param_bInterruptOther,Z_Param_bCancelOnBlendIn,Z_Param_bCancelOnBlendOut);
	P_NATIVE_END;
}
// End Class UGMC_PlayMontageCallbackProxy Function CreateProxyObjectForPlayMontage

// Begin Class UGMC_PlayMontageCallbackProxy Function OnMontageBlendIn
struct Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageBlendIn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utility/GMCPlayMontageCallbackProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageBlendIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_PlayMontageCallbackProxy, nullptr, "OnMontageBlendIn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageBlendIn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageBlendIn_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageBlendIn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageBlendIn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_PlayMontageCallbackProxy::execOnMontageBlendIn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMontageBlendIn();
	P_NATIVE_END;
}
// End Class UGMC_PlayMontageCallbackProxy Function OnMontageBlendIn

// Begin Class UGMC_PlayMontageCallbackProxy Function OnMontageBlendOut
struct Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageBlendOut_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utility/GMCPlayMontageCallbackProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageBlendOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_PlayMontageCallbackProxy, nullptr, "OnMontageBlendOut", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageBlendOut_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageBlendOut_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageBlendOut()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageBlendOut_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_PlayMontageCallbackProxy::execOnMontageBlendOut)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMontageBlendOut();
	P_NATIVE_END;
}
// End Class UGMC_PlayMontageCallbackProxy Function OnMontageBlendOut

// Begin Class UGMC_PlayMontageCallbackProxy Function OnMontageBlendOut_Cosmetic
struct Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageBlendOut_Cosmetic_Statics
{
	struct GMC_PlayMontageCallbackProxy_eventOnMontageBlendOut_Cosmetic_Parms
	{
		UAnimMontage* Montage;
		bool bInterrupted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utility/GMCPlayMontageCallbackProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static void NewProp_bInterrupted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageBlendOut_Cosmetic_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_PlayMontageCallbackProxy_eventOnMontageBlendOut_Cosmetic_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageBlendOut_Cosmetic_Statics::NewProp_bInterrupted_SetBit(void* Obj)
{
	((GMC_PlayMontageCallbackProxy_eventOnMontageBlendOut_Cosmetic_Parms*)Obj)->bInterrupted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageBlendOut_Cosmetic_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_PlayMontageCallbackProxy_eventOnMontageBlendOut_Cosmetic_Parms), &Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageBlendOut_Cosmetic_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageBlendOut_Cosmetic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageBlendOut_Cosmetic_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageBlendOut_Cosmetic_Statics::NewProp_bInterrupted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageBlendOut_Cosmetic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageBlendOut_Cosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_PlayMontageCallbackProxy, nullptr, "OnMontageBlendOut_Cosmetic", nullptr, nullptr, Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageBlendOut_Cosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageBlendOut_Cosmetic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageBlendOut_Cosmetic_Statics::GMC_PlayMontageCallbackProxy_eventOnMontageBlendOut_Cosmetic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageBlendOut_Cosmetic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageBlendOut_Cosmetic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageBlendOut_Cosmetic_Statics::GMC_PlayMontageCallbackProxy_eventOnMontageBlendOut_Cosmetic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageBlendOut_Cosmetic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageBlendOut_Cosmetic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_PlayMontageCallbackProxy::execOnMontageBlendOut_Cosmetic)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_UBOOL(Z_Param_bInterrupted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMontageBlendOut_Cosmetic(Z_Param_Montage,Z_Param_bInterrupted);
	P_NATIVE_END;
}
// End Class UGMC_PlayMontageCallbackProxy Function OnMontageBlendOut_Cosmetic

// Begin Class UGMC_PlayMontageCallbackProxy Function OnMontageComplete
struct Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageComplete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utility/GMCPlayMontageCallbackProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_PlayMontageCallbackProxy, nullptr, "OnMontageComplete", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageComplete_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_PlayMontageCallbackProxy::execOnMontageComplete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMontageComplete();
	P_NATIVE_END;
}
// End Class UGMC_PlayMontageCallbackProxy Function OnMontageComplete

// Begin Class UGMC_PlayMontageCallbackProxy Function OnMontageEnd_Cosmetic
struct Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageEnd_Cosmetic_Statics
{
	struct GMC_PlayMontageCallbackProxy_eventOnMontageEnd_Cosmetic_Parms
	{
		UAnimMontage* Montage;
		bool bInterrupted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utility/GMCPlayMontageCallbackProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static void NewProp_bInterrupted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageEnd_Cosmetic_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_PlayMontageCallbackProxy_eventOnMontageEnd_Cosmetic_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageEnd_Cosmetic_Statics::NewProp_bInterrupted_SetBit(void* Obj)
{
	((GMC_PlayMontageCallbackProxy_eventOnMontageEnd_Cosmetic_Parms*)Obj)->bInterrupted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageEnd_Cosmetic_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GMC_PlayMontageCallbackProxy_eventOnMontageEnd_Cosmetic_Parms), &Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageEnd_Cosmetic_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageEnd_Cosmetic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageEnd_Cosmetic_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageEnd_Cosmetic_Statics::NewProp_bInterrupted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageEnd_Cosmetic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageEnd_Cosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_PlayMontageCallbackProxy, nullptr, "OnMontageEnd_Cosmetic", nullptr, nullptr, Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageEnd_Cosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageEnd_Cosmetic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageEnd_Cosmetic_Statics::GMC_PlayMontageCallbackProxy_eventOnMontageEnd_Cosmetic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageEnd_Cosmetic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageEnd_Cosmetic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageEnd_Cosmetic_Statics::GMC_PlayMontageCallbackProxy_eventOnMontageEnd_Cosmetic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageEnd_Cosmetic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageEnd_Cosmetic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_PlayMontageCallbackProxy::execOnMontageEnd_Cosmetic)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_UBOOL(Z_Param_bInterrupted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMontageEnd_Cosmetic(Z_Param_Montage,Z_Param_bInterrupted);
	P_NATIVE_END;
}
// End Class UGMC_PlayMontageCallbackProxy Function OnMontageEnd_Cosmetic

// Begin Class UGMC_PlayMontageCallbackProxy Function OnMontageStart
struct Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utility/GMCPlayMontageCallbackProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_PlayMontageCallbackProxy, nullptr, "OnMontageStart", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageStart_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_PlayMontageCallbackProxy::execOnMontageStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMontageStart();
	P_NATIVE_END;
}
// End Class UGMC_PlayMontageCallbackProxy Function OnMontageStart

// Begin Class UGMC_PlayMontageCallbackProxy Function OnNotifyBeginReceived
struct Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyBeginReceived_Statics
{
	struct GMC_PlayMontageCallbackProxy_eventOnNotifyBeginReceived_Parms
	{
		FName NotifyName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utility/GMCPlayMontageCallbackProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_PlayMontageCallbackProxy_eventOnNotifyBeginReceived_Parms, NotifyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::NewProp_NotifyName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_PlayMontageCallbackProxy, nullptr, "OnNotifyBeginReceived", nullptr, nullptr, Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::GMC_PlayMontageCallbackProxy_eventOnNotifyBeginReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::GMC_PlayMontageCallbackProxy_eventOnNotifyBeginReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyBeginReceived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyBeginReceived_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_PlayMontageCallbackProxy::execOnNotifyBeginReceived)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_NotifyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnNotifyBeginReceived(Z_Param_NotifyName);
	P_NATIVE_END;
}
// End Class UGMC_PlayMontageCallbackProxy Function OnNotifyBeginReceived

// Begin Class UGMC_PlayMontageCallbackProxy Function OnNotifyBeginReceived_Cosmetic
struct Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyBeginReceived_Cosmetic_Statics
{
	struct GMC_PlayMontageCallbackProxy_eventOnNotifyBeginReceived_Cosmetic_Parms
	{
		FName NotifyName;
		FBranchingPointNotifyPayload BranchingPointNotifyPayload;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utility/GMCPlayMontageCallbackProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BranchingPointNotifyPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BranchingPointNotifyPayload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyBeginReceived_Cosmetic_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_PlayMontageCallbackProxy_eventOnNotifyBeginReceived_Cosmetic_Parms, NotifyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyBeginReceived_Cosmetic_Statics::NewProp_BranchingPointNotifyPayload = { "BranchingPointNotifyPayload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_PlayMontageCallbackProxy_eventOnNotifyBeginReceived_Cosmetic_Parms, BranchingPointNotifyPayload), Z_Construct_UScriptStruct_FBranchingPointNotifyPayload, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BranchingPointNotifyPayload_MetaData), NewProp_BranchingPointNotifyPayload_MetaData) }; // 746097459
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyBeginReceived_Cosmetic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyBeginReceived_Cosmetic_Statics::NewProp_NotifyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyBeginReceived_Cosmetic_Statics::NewProp_BranchingPointNotifyPayload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyBeginReceived_Cosmetic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyBeginReceived_Cosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_PlayMontageCallbackProxy, nullptr, "OnNotifyBeginReceived_Cosmetic", nullptr, nullptr, Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyBeginReceived_Cosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyBeginReceived_Cosmetic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyBeginReceived_Cosmetic_Statics::GMC_PlayMontageCallbackProxy_eventOnNotifyBeginReceived_Cosmetic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyBeginReceived_Cosmetic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyBeginReceived_Cosmetic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyBeginReceived_Cosmetic_Statics::GMC_PlayMontageCallbackProxy_eventOnNotifyBeginReceived_Cosmetic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyBeginReceived_Cosmetic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyBeginReceived_Cosmetic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_PlayMontageCallbackProxy::execOnNotifyBeginReceived_Cosmetic)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_NotifyName);
	P_GET_STRUCT_REF(FBranchingPointNotifyPayload,Z_Param_Out_BranchingPointNotifyPayload);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnNotifyBeginReceived_Cosmetic(Z_Param_NotifyName,Z_Param_Out_BranchingPointNotifyPayload);
	P_NATIVE_END;
}
// End Class UGMC_PlayMontageCallbackProxy Function OnNotifyBeginReceived_Cosmetic

// Begin Class UGMC_PlayMontageCallbackProxy Function OnNotifyEndReceived
struct Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyEndReceived_Statics
{
	struct GMC_PlayMontageCallbackProxy_eventOnNotifyEndReceived_Parms
	{
		FName NotifyName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utility/GMCPlayMontageCallbackProxy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyEndReceived_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_PlayMontageCallbackProxy_eventOnNotifyEndReceived_Parms, NotifyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyEndReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyEndReceived_Statics::NewProp_NotifyName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyEndReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyEndReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_PlayMontageCallbackProxy, nullptr, "OnNotifyEndReceived", nullptr, nullptr, Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyEndReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyEndReceived_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyEndReceived_Statics::GMC_PlayMontageCallbackProxy_eventOnNotifyEndReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyEndReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyEndReceived_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyEndReceived_Statics::GMC_PlayMontageCallbackProxy_eventOnNotifyEndReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyEndReceived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyEndReceived_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_PlayMontageCallbackProxy::execOnNotifyEndReceived)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_NotifyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnNotifyEndReceived(Z_Param_NotifyName);
	P_NATIVE_END;
}
// End Class UGMC_PlayMontageCallbackProxy Function OnNotifyEndReceived

// Begin Class UGMC_PlayMontageCallbackProxy Function OnNotifyEndReceived_Cosmetic
struct Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyEndReceived_Cosmetic_Statics
{
	struct GMC_PlayMontageCallbackProxy_eventOnNotifyEndReceived_Cosmetic_Parms
	{
		FName NotifyName;
		FBranchingPointNotifyPayload BranchingPointNotifyPayload;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utility/GMCPlayMontageCallbackProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BranchingPointNotifyPayload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BranchingPointNotifyPayload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyEndReceived_Cosmetic_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_PlayMontageCallbackProxy_eventOnNotifyEndReceived_Cosmetic_Parms, NotifyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyEndReceived_Cosmetic_Statics::NewProp_BranchingPointNotifyPayload = { "BranchingPointNotifyPayload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GMC_PlayMontageCallbackProxy_eventOnNotifyEndReceived_Cosmetic_Parms, BranchingPointNotifyPayload), Z_Construct_UScriptStruct_FBranchingPointNotifyPayload, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BranchingPointNotifyPayload_MetaData), NewProp_BranchingPointNotifyPayload_MetaData) }; // 746097459
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyEndReceived_Cosmetic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyEndReceived_Cosmetic_Statics::NewProp_NotifyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyEndReceived_Cosmetic_Statics::NewProp_BranchingPointNotifyPayload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyEndReceived_Cosmetic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyEndReceived_Cosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGMC_PlayMontageCallbackProxy, nullptr, "OnNotifyEndReceived_Cosmetic", nullptr, nullptr, Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyEndReceived_Cosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyEndReceived_Cosmetic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyEndReceived_Cosmetic_Statics::GMC_PlayMontageCallbackProxy_eventOnNotifyEndReceived_Cosmetic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyEndReceived_Cosmetic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyEndReceived_Cosmetic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyEndReceived_Cosmetic_Statics::GMC_PlayMontageCallbackProxy_eventOnNotifyEndReceived_Cosmetic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyEndReceived_Cosmetic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyEndReceived_Cosmetic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGMC_PlayMontageCallbackProxy::execOnNotifyEndReceived_Cosmetic)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_NotifyName);
	P_GET_STRUCT_REF(FBranchingPointNotifyPayload,Z_Param_Out_BranchingPointNotifyPayload);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnNotifyEndReceived_Cosmetic(Z_Param_NotifyName,Z_Param_Out_BranchingPointNotifyPayload);
	P_NATIVE_END;
}
// End Class UGMC_PlayMontageCallbackProxy Function OnNotifyEndReceived_Cosmetic

// Begin Class UGMC_PlayMontageCallbackProxy
void UGMC_PlayMontageCallbackProxy::StaticRegisterNativesUGMC_PlayMontageCallbackProxy()
{
	UClass* Class = UGMC_PlayMontageCallbackProxy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateProxyObjectForPlayMontage", &UGMC_PlayMontageCallbackProxy::execCreateProxyObjectForPlayMontage },
		{ "OnMontageBlendIn", &UGMC_PlayMontageCallbackProxy::execOnMontageBlendIn },
		{ "OnMontageBlendOut", &UGMC_PlayMontageCallbackProxy::execOnMontageBlendOut },
		{ "OnMontageBlendOut_Cosmetic", &UGMC_PlayMontageCallbackProxy::execOnMontageBlendOut_Cosmetic },
		{ "OnMontageComplete", &UGMC_PlayMontageCallbackProxy::execOnMontageComplete },
		{ "OnMontageEnd_Cosmetic", &UGMC_PlayMontageCallbackProxy::execOnMontageEnd_Cosmetic },
		{ "OnMontageStart", &UGMC_PlayMontageCallbackProxy::execOnMontageStart },
		{ "OnNotifyBeginReceived", &UGMC_PlayMontageCallbackProxy::execOnNotifyBeginReceived },
		{ "OnNotifyBeginReceived_Cosmetic", &UGMC_PlayMontageCallbackProxy::execOnNotifyBeginReceived_Cosmetic },
		{ "OnNotifyEndReceived", &UGMC_PlayMontageCallbackProxy::execOnNotifyEndReceived },
		{ "OnNotifyEndReceived_Cosmetic", &UGMC_PlayMontageCallbackProxy::execOnNotifyEndReceived_Cosmetic },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGMC_PlayMontageCallbackProxy);
UClass* Z_Construct_UClass_UGMC_PlayMontageCallbackProxy_NoRegister()
{
	return UGMC_PlayMontageCallbackProxy::StaticClass();
}
struct Z_Construct_UClass_UGMC_PlayMontageCallbackProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Utility/GMCPlayMontageCallbackProxy.h" },
		{ "ModuleRelativePath", "Public/Utility/GMCPlayMontageCallbackProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStarted_MetaData[] = {
		{ "Comment", "// Called when the montage started playing. Triggered from the movement component, use for predicted gameplay logic.\n" },
		{ "ModuleRelativePath", "Public/Utility/GMCPlayMontageCallbackProxy.h" },
		{ "ToolTip", "Called when the montage started playing. Triggered from the movement component, use for predicted gameplay logic." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[] = {
		{ "Comment", "// Called when the montage finished playing to the end and was not interrupted. Triggered from the movement component, use for predicted gameplay logic.\n" },
		{ "ModuleRelativePath", "Public/Utility/GMCPlayMontageCallbackProxy.h" },
		{ "ToolTip", "Called when the montage finished playing to the end and was not interrupted. Triggered from the movement component, use for predicted gameplay logic." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBlendIn_MetaData[] = {
		{ "Comment", "// Called whenever the montage passes the blend in position at the default blend in time. Triggered from the movement component, use for predicted gameplay\n// logic.\n" },
		{ "ModuleRelativePath", "Public/Utility/GMCPlayMontageCallbackProxy.h" },
		{ "ToolTip", "Called whenever the montage passes the blend in position at the default blend in time. Triggered from the movement component, use for predicted gameplay\nlogic." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBlendOut_MetaData[] = {
		{ "Comment", "// Called whenever the montage passes the blend out position at the default blend out time (from the end of the last non-looping montage section). Triggered\n// from the movement component, use for predicted gameplay logic.\n" },
		{ "ModuleRelativePath", "Public/Utility/GMCPlayMontageCallbackProxy.h" },
		{ "ToolTip", "Called whenever the montage passes the blend out position at the default blend out time (from the end of the last non-looping montage section). Triggered\nfrom the movement component, use for predicted gameplay logic." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnNotifyBegin_MetaData[] = {
		{ "Comment", "// Called when a montage notify has begun. Triggered from the movement component, use for predicted gameplay logic.\n" },
		{ "ModuleRelativePath", "Public/Utility/GMCPlayMontageCallbackProxy.h" },
		{ "ToolTip", "Called when a montage notify has begun. Triggered from the movement component, use for predicted gameplay logic." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnNotifyEnd_MetaData[] = {
		{ "Comment", "// Called when a montage notify has ended. Triggered from the movement component, use for predicted gameplay logic.\n" },
		{ "ModuleRelativePath", "Public/Utility/GMCPlayMontageCallbackProxy.h" },
		{ "ToolTip", "Called when a montage notify has ended. Triggered from the movement component, use for predicted gameplay logic." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_Cosmetic_MetaData[] = {
		{ "Comment", "// Called when the montage finished playing to the end and was not interrupted. Triggered from the anim instance, use for local effects and animations.\n" },
		{ "ModuleRelativePath", "Public/Utility/GMCPlayMontageCallbackProxy.h" },
		{ "ToolTip", "Called when the montage finished playing to the end and was not interrupted. Triggered from the anim instance, use for local effects and animations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBlendOut_Cosmetic_MetaData[] = {
		{ "Comment", "// Called when the montage started blending out. Triggered from the anim instance, use for local effects and animations.\n" },
		{ "ModuleRelativePath", "Public/Utility/GMCPlayMontageCallbackProxy.h" },
		{ "ToolTip", "Called when the montage started blending out. Triggered from the anim instance, use for local effects and animations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInterrupted_Cosmetic_MetaData[] = {
		{ "Comment", "// Called when the montage has been interrupted. Triggered from the anim instance, use for local effects and animations.\n" },
		{ "ModuleRelativePath", "Public/Utility/GMCPlayMontageCallbackProxy.h" },
		{ "ToolTip", "Called when the montage has been interrupted. Triggered from the anim instance, use for local effects and animations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnNotifyBegin_Cosmetic_MetaData[] = {
		{ "Comment", "// Called when a montage notify has begun. Triggered from the anim instance, use for local effects and animations.\n" },
		{ "ModuleRelativePath", "Public/Utility/GMCPlayMontageCallbackProxy.h" },
		{ "ToolTip", "Called when a montage notify has begun. Triggered from the anim instance, use for local effects and animations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnNotifyEnd_Cosmetic_MetaData[] = {
		{ "Comment", "// Called when a montage notify has ended. Triggered from the anim instance, use for local effects and animations.\n" },
		{ "ModuleRelativePath", "Public/Utility/GMCPlayMontageCallbackProxy.h" },
		{ "ToolTip", "Called when a montage notify has ended. Triggered from the anim instance, use for local effects and animations." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBlendIn;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBlendOut;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNotifyBegin;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNotifyEnd;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted_Cosmetic;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBlendOut_Cosmetic;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInterrupted_Cosmetic;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNotifyBegin_Cosmetic;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNotifyEnd_Cosmetic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_CreateProxyObjectForPlayMontage, "CreateProxyObjectForPlayMontage" }, // 861524684
		{ &Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageBlendIn, "OnMontageBlendIn" }, // 131416135
		{ &Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageBlendOut, "OnMontageBlendOut" }, // 174432175
		{ &Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageBlendOut_Cosmetic, "OnMontageBlendOut_Cosmetic" }, // 1368585739
		{ &Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageComplete, "OnMontageComplete" }, // 1825349483
		{ &Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageEnd_Cosmetic, "OnMontageEnd_Cosmetic" }, // 3255565184
		{ &Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnMontageStart, "OnMontageStart" }, // 4191903384
		{ &Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyBeginReceived, "OnNotifyBeginReceived" }, // 3156785452
		{ &Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyBeginReceived_Cosmetic, "OnNotifyBeginReceived_Cosmetic" }, // 765139339
		{ &Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyEndReceived, "OnNotifyEndReceived" }, // 4160265362
		{ &Z_Construct_UFunction_UGMC_PlayMontageCallbackProxy_OnNotifyEndReceived_Cosmetic, "OnNotifyEndReceived_Cosmetic" }, // 3525828304
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGMC_PlayMontageCallbackProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGMC_PlayMontageCallbackProxy_Statics::NewProp_OnStarted = { "OnStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_PlayMontageCallbackProxy, OnStarted), Z_Construct_UDelegateFunction_GMCCore_GMC_OnMontagePlayDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStarted_MetaData), NewProp_OnStarted_MetaData) }; // 1947513589
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGMC_PlayMontageCallbackProxy_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_PlayMontageCallbackProxy, OnCompleted), Z_Construct_UDelegateFunction_GMCCore_GMC_OnMontagePlayDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCompleted_MetaData), NewProp_OnCompleted_MetaData) }; // 1947513589
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGMC_PlayMontageCallbackProxy_Statics::NewProp_OnBlendIn = { "OnBlendIn", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_PlayMontageCallbackProxy, OnBlendIn), Z_Construct_UDelegateFunction_GMCCore_GMC_OnMontagePlayDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBlendIn_MetaData), NewProp_OnBlendIn_MetaData) }; // 1947513589
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGMC_PlayMontageCallbackProxy_Statics::NewProp_OnBlendOut = { "OnBlendOut", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_PlayMontageCallbackProxy, OnBlendOut), Z_Construct_UDelegateFunction_GMCCore_GMC_OnMontagePlayDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBlendOut_MetaData), NewProp_OnBlendOut_MetaData) }; // 1947513589
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGMC_PlayMontageCallbackProxy_Statics::NewProp_OnNotifyBegin = { "OnNotifyBegin", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_PlayMontageCallbackProxy, OnNotifyBegin), Z_Construct_UDelegateFunction_GMCCore_GMC_OnMontagePlayDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnNotifyBegin_MetaData), NewProp_OnNotifyBegin_MetaData) }; // 1947513589
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGMC_PlayMontageCallbackProxy_Statics::NewProp_OnNotifyEnd = { "OnNotifyEnd", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_PlayMontageCallbackProxy, OnNotifyEnd), Z_Construct_UDelegateFunction_GMCCore_GMC_OnMontagePlayDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnNotifyEnd_MetaData), NewProp_OnNotifyEnd_MetaData) }; // 1947513589
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGMC_PlayMontageCallbackProxy_Statics::NewProp_OnCompleted_Cosmetic = { "OnCompleted_Cosmetic", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_PlayMontageCallbackProxy, OnCompleted_Cosmetic), Z_Construct_UDelegateFunction_GMCCore_GMC_OnMontagePlayDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCompleted_Cosmetic_MetaData), NewProp_OnCompleted_Cosmetic_MetaData) }; // 1947513589
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGMC_PlayMontageCallbackProxy_Statics::NewProp_OnBlendOut_Cosmetic = { "OnBlendOut_Cosmetic", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_PlayMontageCallbackProxy, OnBlendOut_Cosmetic), Z_Construct_UDelegateFunction_GMCCore_GMC_OnMontagePlayDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBlendOut_Cosmetic_MetaData), NewProp_OnBlendOut_Cosmetic_MetaData) }; // 1947513589
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGMC_PlayMontageCallbackProxy_Statics::NewProp_OnInterrupted_Cosmetic = { "OnInterrupted_Cosmetic", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_PlayMontageCallbackProxy, OnInterrupted_Cosmetic), Z_Construct_UDelegateFunction_GMCCore_GMC_OnMontagePlayDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInterrupted_Cosmetic_MetaData), NewProp_OnInterrupted_Cosmetic_MetaData) }; // 1947513589
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGMC_PlayMontageCallbackProxy_Statics::NewProp_OnNotifyBegin_Cosmetic = { "OnNotifyBegin_Cosmetic", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_PlayMontageCallbackProxy, OnNotifyBegin_Cosmetic), Z_Construct_UDelegateFunction_GMCCore_GMC_OnMontagePlayDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnNotifyBegin_Cosmetic_MetaData), NewProp_OnNotifyBegin_Cosmetic_MetaData) }; // 1947513589
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGMC_PlayMontageCallbackProxy_Statics::NewProp_OnNotifyEnd_Cosmetic = { "OnNotifyEnd_Cosmetic", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGMC_PlayMontageCallbackProxy, OnNotifyEnd_Cosmetic), Z_Construct_UDelegateFunction_GMCCore_GMC_OnMontagePlayDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnNotifyEnd_Cosmetic_MetaData), NewProp_OnNotifyEnd_Cosmetic_MetaData) }; // 1947513589
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGMC_PlayMontageCallbackProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_PlayMontageCallbackProxy_Statics::NewProp_OnStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_PlayMontageCallbackProxy_Statics::NewProp_OnCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_PlayMontageCallbackProxy_Statics::NewProp_OnBlendIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_PlayMontageCallbackProxy_Statics::NewProp_OnBlendOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_PlayMontageCallbackProxy_Statics::NewProp_OnNotifyBegin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_PlayMontageCallbackProxy_Statics::NewProp_OnNotifyEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_PlayMontageCallbackProxy_Statics::NewProp_OnCompleted_Cosmetic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_PlayMontageCallbackProxy_Statics::NewProp_OnBlendOut_Cosmetic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_PlayMontageCallbackProxy_Statics::NewProp_OnInterrupted_Cosmetic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_PlayMontageCallbackProxy_Statics::NewProp_OnNotifyBegin_Cosmetic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGMC_PlayMontageCallbackProxy_Statics::NewProp_OnNotifyEnd_Cosmetic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_PlayMontageCallbackProxy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGMC_PlayMontageCallbackProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_GMCCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_PlayMontageCallbackProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGMC_PlayMontageCallbackProxy_Statics::ClassParams = {
	&UGMC_PlayMontageCallbackProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGMC_PlayMontageCallbackProxy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_PlayMontageCallbackProxy_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGMC_PlayMontageCallbackProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UGMC_PlayMontageCallbackProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGMC_PlayMontageCallbackProxy()
{
	if (!Z_Registration_Info_UClass_UGMC_PlayMontageCallbackProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGMC_PlayMontageCallbackProxy.OuterSingleton, Z_Construct_UClass_UGMC_PlayMontageCallbackProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGMC_PlayMontageCallbackProxy.OuterSingleton;
}
template<> GMCCORE_API UClass* StaticClass<UGMC_PlayMontageCallbackProxy>()
{
	return UGMC_PlayMontageCallbackProxy::StaticClass();
}
UGMC_PlayMontageCallbackProxy::UGMC_PlayMontageCallbackProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGMC_PlayMontageCallbackProxy);
UGMC_PlayMontageCallbackProxy::~UGMC_PlayMontageCallbackProxy() {}
// End Class UGMC_PlayMontageCallbackProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Utility_GMCPlayMontageCallbackProxy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGMC_PlayMontageCallbackProxy, UGMC_PlayMontageCallbackProxy::StaticClass, TEXT("UGMC_PlayMontageCallbackProxy"), &Z_Registration_Info_UClass_UGMC_PlayMontageCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGMC_PlayMontageCallbackProxy), 951838138U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Utility_GMCPlayMontageCallbackProxy_h_3023403942(TEXT("/Script/GMCCore"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Utility_GMCPlayMontageCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_GMC_Source_GMCCore_Public_Utility_GMCPlayMontageCallbackProxy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
