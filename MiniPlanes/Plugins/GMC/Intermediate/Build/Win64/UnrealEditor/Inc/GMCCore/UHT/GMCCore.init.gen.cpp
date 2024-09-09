// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMCCore_init() {}
	GMCCORE_API UFunction* Z_Construct_UDelegateFunction_GMCCore_GMC_OnMontagePlayDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GMCCore;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GMCCore()
	{
		if (!Z_Registration_Info_UPackage__Script_GMCCore.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_GMCCore_GMC_OnMontagePlayDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GMCCore",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xC0E13CCC,
				0xB44F6ECC,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GMCCore.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GMCCore.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GMCCore(Z_Construct_UPackage__Script_GMCCore, TEXT("/Script/GMCCore"), Z_Registration_Info_UPackage__Script_GMCCore, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC0E13CCC, 0xB44F6ECC));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
