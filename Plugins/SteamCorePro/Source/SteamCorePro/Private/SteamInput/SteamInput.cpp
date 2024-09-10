/**
* Copyright (C) 2017-2024 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamInput
*/

#include "SteamInput/SteamInput.h"
#if WITH_STEAMCORE
#include <isteamdualsense.h>
#endif
#include "SteamCoreProPluginPrivatePCH.h"

USteamProInput::USteamProInput()
{
}

USteamProInput::~USteamProInput()
{
}

USteamProInput* USteamProInput::GetSteamInput()
{
#if WITH_STEAMCORE
	return SteamInput() ? ThisClass::StaticClass()->GetDefaultObject<USteamProInput>() : nullptr;
#endif
	return nullptr;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
bool USteamProInput::Init()
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (SteamInput())
	{
		return SteamInput()->Init(false);
	}
#endif
	
	return false;
}

bool USteamProInput::Shutdown()
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (SteamInput())
	{
		return SteamInput()->Shutdown();
	}
#endif

	return false;
}

int32 USteamProInput::GetConnectedControllers(TArray<FInputHandle>& OutHandles)
{
	LogVeryVerbose("");

	OutHandles.Empty();
	int32 Result = 0;

#if WITH_STEAMCORE
	if (SteamInput())
	{
		TArray<InputHandle_t> Handles;
		Handles.SetNum(STEAM_INPUT_MAX_COUNT);
		
		Result = SteamInput()->GetConnectedControllers(Handles.GetData());

		if (Result > 0)
		{
			for (const auto& Element : Handles)
			{
				OutHandles.Add(Element);
			}
		}
	}
#endif

	return Result;
}

FInputActionSetHandle USteamProInput::GetActionSetHandle(FString ActionSetName)
{
	LogVeryVerbose("");

	FInputActionSetHandle Handle;

#if WITH_STEAMCORE
	if (SteamInput())
	{
		Handle = SteamInput()->GetActionSetHandle(TCHAR_TO_UTF8(*ActionSetName));
	}
#endif

	return Handle;
}

void USteamProInput::ActivateActionSet(FInputHandle Handle, FInputActionSetHandle ActionSetHandle)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (SteamInput())
	{
		SteamInput()->ActivateActionSet(Handle, ActionSetHandle);
	}
#endif
}

FInputActionSetHandle USteamProInput::GetCurrentActionSet(FInputHandle Handle)
{
	LogVeryVerbose("");

	FInputActionSetHandle FHandle;

#if WITH_STEAMCORE
	if (SteamInput())
	{
		FHandle = SteamInput()->GetCurrentActionSet(Handle);
	}
#endif

	return FHandle;
}

void USteamProInput::ActivateActionSetLayer(FInputHandle Handle, FInputActionSetHandle ActionSetLayerHandle)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (SteamInput())
	{
		SteamInput()->ActivateActionSetLayer(Handle, ActionSetLayerHandle);
	}
#endif
}

void USteamProInput::DeactivateActionSetLayer(FInputHandle Handle, FInputActionSetHandle ActionSetLayerHandle)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (SteamInput())
	{
		SteamInput()->DeactivateActionSetLayer(Handle, ActionSetLayerHandle);
	}
#endif
}

void USteamProInput::DeactivateAllActionSetLayers(FInputHandle Handle)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (SteamInput())
	{
		SteamInput()->DeactivateAllActionSetLayers(Handle);
	}
#endif
}

int32 USteamProInput::GetActiveActionSetLayers(FInputHandle Handle, TArray<FInputActionSetHandle>& OutData)
{
	LogVeryVerbose("");

	int32 Result = 0;
	OutData.Empty();

#if WITH_STEAMCORE
	if (SteamInput())
	{
		TArray<InputActionSetHandle_t> DataArray;
		DataArray.SetNum(STEAM_INPUT_MAX_ACTIVE_LAYERS);

		Result = SteamInput()->GetActiveActionSetLayers(Handle, DataArray.GetData());

		for (int32 i = 0; i < DataArray.Num(); i++)
		{
			OutData.Add(DataArray[i]);
		}
	}
#endif

	return Result;
}

FInputDigitalActionHandle USteamProInput::GetDigitalActionHandle(FString PszActionName)
{
	LogVeryVerbose("");

	FInputDigitalActionHandle Handle;

#if WITH_STEAMCORE
	if (SteamInput())
	{
		Handle = SteamInput()->GetDigitalActionHandle(TCHAR_TO_UTF8(*PszActionName));
	}
#endif

	return Handle;
}

FInputDigitalActionData USteamProInput::GetDigitalActionData(FInputHandle Handle, FInputDigitalActionHandle DigitalActionHandle)
{
	LogVeryVerbose("");

	FInputDigitalActionData FHandle = {};

#if WITH_STEAMCORE
	if (SteamInput())
	{
		FHandle = SteamInput()->GetDigitalActionData(Handle, DigitalActionHandle);
	}
#endif

	return FHandle;
}

int32 USteamProInput::GetDigitalActionOrigins(FInputHandle Handle, FInputActionSetHandle ActionSetHandle, FInputDigitalActionHandle DigitalActionHandle, TArray<TEnumAsByte<ESteamCoreProInputActionOrigin>>& OutOrigins)
{
	LogVeryVerbose("");

	int32 Result = 0;
	OutOrigins.Empty();

#if WITH_STEAMCORE
	if (SteamInput())
	{
		TArray<EInputActionOrigin> DataArray;
		DataArray.SetNum(STEAM_INPUT_MAX_ORIGINS);

		Result = SteamInput()->GetDigitalActionOrigins(Handle, ActionSetHandle, DigitalActionHandle, DataArray.GetData());

		for (int32 i = 0; i < DataArray.Num(); i++)
		{
			OutOrigins.Add(static_cast<ESteamCoreProInputActionOrigin>(DataArray[i]));
		}
	}
#endif

	return Result;
}

FInputAnalogActionHandle USteamProInput::GetAnalogActionHandle(FString PszActionName)
{
	LogVeryVerbose("");

	FInputAnalogActionHandle Handle;

#if WITH_STEAMCORE
	if (SteamInput())
	{
		Handle = SteamInput()->GetAnalogActionHandle(TCHAR_TO_UTF8(*PszActionName));
	}
#endif

	return Handle;
}

FInputAnalogActionData USteamProInput::GetAnalogActionData(FInputHandle Handle, FInputAnalogActionHandle AnalogActionHandle)
{
	LogVeryVerbose("");

	FInputAnalogActionData FHandle = {};

#if WITH_STEAMCORE
	if (SteamInput())
	{
		FHandle = SteamInput()->GetAnalogActionData(Handle, AnalogActionHandle);
	}
#endif
	
	return FHandle;
}

int32 USteamProInput::GetAnalogActionOrigins(FInputHandle Handle, FInputActionSetHandle ActionSetHandle, FInputAnalogActionHandle AnalogActionHandle, TArray<TEnumAsByte<ESteamCoreProInputActionOrigin>>& OutOrigins)
{
	LogVeryVerbose("");

	int32 Result = 0;
	OutOrigins.Empty();

#if WITH_STEAMCORE
	if (SteamInput())
	{
		TArray<EInputActionOrigin> DataArray;
		DataArray.SetNum(STEAM_INPUT_MAX_ORIGINS);

		Result = SteamInput()->GetAnalogActionOrigins(Handle, ActionSetHandle, AnalogActionHandle, DataArray.GetData());

		for (int32 i = 0; i < STEAM_INPUT_MAX_ORIGINS; i++)
		{
			OutOrigins.Add(static_cast<ESteamCoreProInputActionOrigin>(DataArray[i]));
		}
	}
#endif
	
	return Result;
}

FString USteamProInput::GetGlyphForActionOrigin_Legacy(ESteamCoreProInputActionOrigin Origin)
{
	LogVeryVerbose("");

	FString Result; 

#if WITH_STEAMCORE
	if (SteamInput())
	{
		Result = SteamInput()->GetGlyphForActionOrigin_Legacy(static_cast<EInputActionOrigin>(Origin));
	}
#endif

	return Result;
}

FString USteamProInput::GetStringForActionOrigin(ESteamCoreProInputActionOrigin Origin)
{
	LogVeryVerbose("");

	FString Result;

#if WITH_STEAMCORE
	Result = SteamInput()->GetStringForActionOrigin(static_cast<EInputActionOrigin>(Origin));
#endif

	return Result;
}

void USteamProInput::StopAnalogActionMomentum(FInputHandle Handle, FInputAnalogActionHandle EAction)
{
	LogVeryVerbose("");

#if WITH_STEAMCORE
	if (SteamInput())
	{
		SteamInput()->StopAnalogActionMomentum(Handle, EAction);
	}
#endif
}

FInputMotionData USteamProInput::GetMotionData(FInputHandle Handle)
{
	LogVeryVerbose("");

	FInputMotionData FHandle = {};

#if WITH_STEAMCORE
	if (SteamInput())
	{
		FHandle = SteamInput()->GetMotionData(Handle);
	}
#endif

	return FHandle;
}

void USteamProInput::TriggerVibration(FInputHandle Handle, uint8 LeftSpeed, uint8 RightSpeed)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (SteamInput())
	{
		SteamInput()->TriggerVibration(Handle, LeftSpeed, RightSpeed);
	}
#endif
}

void USteamProInput::SetLEDColor(FInputHandle Handle, uint8 ColorR, uint8 ColorG, uint8 ColorB, ESteamCoreProInputLEDFlag Flags)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (SteamInput())
	{
		SteamInput()->SetLEDColor(Handle, ColorR, ColorG, ColorB, static_cast<int32>(Flags));
	}
#endif
}

void USteamProInput::Legacy_TriggerHapticPulse(FInputHandle Handle, ESteamCoreProControllerPad TargetPad, uint8 DurationMicroSec)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (SteamInput())
	{
		SteamInput()->Legacy_TriggerHapticPulse(Handle, static_cast<ESteamControllerPad>(TargetPad), DurationMicroSec);
	}
#endif
}

void USteamProInput::Legacy_TriggerRepeatedHapticPulse(FInputHandle Handle, ESteamCoreProControllerPad TargetPad, uint8 DurationMicroSec, uint8 OffMicroSec, uint8 Repeat, uint8 Flags)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (SteamInput())
	{
		SteamInput()->Legacy_TriggerRepeatedHapticPulse(Handle, static_cast<ESteamControllerPad>(TargetPad), DurationMicroSec, OffMicroSec, Repeat, Flags);
	}
#endif
}

bool USteamProInput::ShowBindingPanel(FInputHandle Handle)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (SteamInput())
	{
		bResult = SteamInput()->ShowBindingPanel(Handle);
	}
#endif

	return bResult;
}

ESteamCoreProInputType USteamProInput::GetInputTypeForHandle(FInputHandle Handle)
{
	LogVeryVerbose("");

	ESteamCoreProInputType Result = ESteamCoreProInputType::Unknown;

#if WITH_STEAMCORE
	if (SteamInput())
	{
		Result = static_cast<ESteamCoreProInputType>(SteamInput()->GetInputTypeForHandle(Handle));
	}
#endif
	
	return Result;
}

FInputHandle USteamProInput::GetControllerForGamepadIndex(int32 Index)
{
	LogVeryVerbose("");

	FInputHandle Handle;

#if WITH_STEAMCORE
	if (SteamInput())
	{
		Handle = SteamInput()->GetControllerForGamepadIndex(Index);
	}
#endif

	UE_LOG(LogTemp, Warning, TEXT("%llu"), Handle.GetValue());
	
	return Handle;
}

int32 USteamProInput::GetGamepadIndexForController(FInputHandle Handle)
{
	LogVeryVerbose("");

	int32 Result = 0;

#if WITH_STEAMCORE
	if (SteamInput())
	{
		Result = SteamInput()->GetGamepadIndexForController(Handle); 
	}
#endif

	return Result;
}

FString USteamProInput::GetStringForXboxOrigin(ESteamCoreProXboxOrigin Origin)
{
	LogVeryVerbose("");

	FString Result;
	
#if WITH_STEAMCORE
	Result = SteamInput()->GetStringForXboxOrigin(static_cast<EXboxOrigin>(Origin)); 
#endif

	return Result;
}

FString USteamProInput::GetGlyphForXboxOrigin(ESteamCoreProXboxOrigin Origin)
{
	LogVeryVerbose("");

	FString Result;

#if WITH_STEAMCORE
	if (SteamInput())
	{
		Result = SteamInput()->GetGlyphForXboxOrigin(static_cast<EXboxOrigin>(Origin));
	}
#endif

	return Result;
}

ESteamCoreProInputActionOrigin USteamProInput::GetActionOriginFromXboxOrigin(FInputHandle Handle, ESteamCoreProXboxOrigin Origin)
{
	LogVeryVerbose("");

	ESteamCoreProInputActionOrigin Result = ESteamCoreProInputActionOrigin::EInputActionOrigin_None;

#if WITH_STEAMCORE
	if (SteamInput())
	{
		Result = static_cast<ESteamCoreProInputActionOrigin>(SteamInput()->GetActionOriginFromXboxOrigin(Handle, static_cast<EXboxOrigin>(Origin)));
	}
#endif
	
	return Result;
}

ESteamCoreProInputActionOrigin USteamProInput::TranslateActionOrigin(ESteamCoreProInputType DestinationInputType, ESteamCoreProInputActionOrigin SourceOrigin)
{
	LogVerbose("");

	ESteamCoreProInputActionOrigin Result = ESteamCoreProInputActionOrigin::EInputActionOrigin_None;

#if WITH_STEAMCORE
	if (SteamInput())
	{
		Result = static_cast<ESteamCoreProInputActionOrigin>(SteamInput()->TranslateActionOrigin(static_cast<ESteamInputType>(DestinationInputType), static_cast<EInputActionOrigin>(SourceOrigin)));
	}
#endif
	
	return Result;
}

bool USteamProInput::GetDeviceBindingRevision(FInputHandle Handle, int32& OutMajor, int32& OutMinor)
{
	LogVeryVerbose("");

	bool bResult = false;
	OutMajor = 0;
	OutMinor = 0;

#if WITH_STEAMCORE
	if (SteamInput())
	{
		bResult = SteamInput()->GetDeviceBindingRevision(Handle, &OutMajor, &OutMinor);
	}
#endif

	return bResult;
}

int32 USteamProInput::GetRemotePlaySessionID(FInputHandle Handle)
{
	LogVeryVerbose("");

	int32 Result = 0;

#if WITH_STEAMCORE
	if (SteamInput())
	{
		Result = SteamInput()->GetRemotePlaySessionID(Handle);
	}
#endif

	return Result;
}

bool USteamProInput::BNewDataAvailable()
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (SteamInput())
	{
		bResult = SteamInput()->BNewDataAvailable();
	}
#endif

	return bResult;
}

bool USteamProInput::BWaitForData(bool bWaitForever, int32 Timeout)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (SteamInput())
	{
		bResult = SteamInput()->BWaitForData(bWaitForever, Timeout);
	}
#endif

	return bResult;
}

FString USteamProInput::GetStringForDigitalActionName(FInputDigitalActionHandle ActionHandle)
{
	LogVerbose("");

	FString Result;

#if WITH_STEAMCORE
	if (SteamInput())
	{
		Result = SteamInput()->GetStringForDigitalActionName(ActionHandle);
	}
#endif

	return Result;
}

FString USteamProInput::GetStringForAnalogActionName(FInputAnalogActionHandle ActionHandle)
{
	LogVerbose("");

	FString Result;

#if WITH_STEAMCORE
	if (SteamInput())
	{
		Result = SteamInput()->GetStringForAnalogActionName(ActionHandle);
	}
#endif

	return Result;
}

TArray<ESteamCoreInputConfigurationEnableType> USteamProInput::GetSessionInputConfigurationSettings()
{
	LogVerbose("");

	TArray<ESteamCoreInputConfigurationEnableType> Result;

#if WITH_STEAMCORE
	if (SteamInput())
	{
		const uint16 SteamResult = SteamInput()->GetSessionInputConfigurationSettings();

		if (SteamResult & static_cast<int32>(ESteamInputConfigurationEnableType::k_ESteamInputConfigurationEnableType_None))
		{
			Result.Add(ESteamCoreInputConfigurationEnableType::k_ESteamInputConfigurationEnableType_None);
		}

		if (SteamResult & static_cast<int32>(ESteamInputConfigurationEnableType::k_ESteamInputConfigurationEnableType_Playstation))
		{
			Result.Add(ESteamCoreInputConfigurationEnableType::k_ESteamInputConfigurationEnableType_Playstation);
		}

		if (SteamResult & static_cast<int32>(ESteamInputConfigurationEnableType::k_ESteamInputConfigurationEnableType_Xbox))
		{
			Result.Add(ESteamCoreInputConfigurationEnableType::k_ESteamInputConfigurationEnableType_Xbox);
		}

		if (SteamResult & static_cast<int32>(ESteamInputConfigurationEnableType::k_ESteamInputConfigurationEnableType_Generic))
		{
			Result.Add(ESteamCoreInputConfigurationEnableType::k_ESteamInputConfigurationEnableType_Generic);
		}

		if (SteamResult & static_cast<int32>(ESteamInputConfigurationEnableType::k_ESteamInputConfigurationEnableType_Switch))
		{
			Result.Add(ESteamCoreInputConfigurationEnableType::k_ESteamInputConfigurationEnableType_Switch);
		}
	}
#endif

	return Result;
}

void USteamProInput::SetDualSenseTriggerEffect(FInputHandle InputHandle, FScePadTriggerEffectCommand R2, FScePadTriggerEffectCommand L2)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (SteamInput())
	{
		ScePadTriggerEffectParam Data = {};

		// R2
		{
			Data.command[SCE_PAD_TRIGGER_EFFECT_PARAM_INDEX_FOR_R2].mode = static_cast<ScePadTriggerEffectMode>(R2.Mode);
			Data.command[SCE_PAD_TRIGGER_EFFECT_PARAM_INDEX_FOR_R2].commandData.feedbackParam.position = R2.CommandData.FeedbackParam.Position;
			Data.command[SCE_PAD_TRIGGER_EFFECT_PARAM_INDEX_FOR_R2].commandData.feedbackParam.strength = R2.CommandData.FeedbackParam.Strength;
			
			Data.command[SCE_PAD_TRIGGER_EFFECT_PARAM_INDEX_FOR_R2].commandData.weaponParam.startPosition = R2.CommandData.WeaponParam.StartPosition;
			Data.command[SCE_PAD_TRIGGER_EFFECT_PARAM_INDEX_FOR_R2].commandData.weaponParam.endPosition = R2.CommandData.WeaponParam.EndPosition;
			Data.command[SCE_PAD_TRIGGER_EFFECT_PARAM_INDEX_FOR_R2].commandData.weaponParam.strength = R2.CommandData.WeaponParam.Strength;
			
			Data.command[SCE_PAD_TRIGGER_EFFECT_PARAM_INDEX_FOR_R2].commandData.vibrationParam.position = R2.CommandData.VibrationParam.Position;
			Data.command[SCE_PAD_TRIGGER_EFFECT_PARAM_INDEX_FOR_R2].commandData.vibrationParam.amplitude = R2.CommandData.VibrationParam.Amplitude;
			Data.command[SCE_PAD_TRIGGER_EFFECT_PARAM_INDEX_FOR_R2].commandData.vibrationParam.frequency = R2.CommandData.VibrationParam.Frequency;
			
			for (int32 i=0; i<R2.CommandData.MultiplePositionFeedbackParam.Strength.Num(); i++)
			{
				Data.command[SCE_PAD_TRIGGER_EFFECT_PARAM_INDEX_FOR_R2].commandData.multiplePositionFeedbackParam.strength[i] = R2.CommandData.MultiplePositionFeedbackParam.Strength[i];
			}
			
			Data.command[SCE_PAD_TRIGGER_EFFECT_PARAM_INDEX_FOR_R2].commandData.slopeFeedbackParam.startPosition = R2.CommandData.SlopeFeedbackParam.StartPosition;
			Data.command[SCE_PAD_TRIGGER_EFFECT_PARAM_INDEX_FOR_R2].commandData.slopeFeedbackParam.endPosition = R2.CommandData.SlopeFeedbackParam.EndPosition;
			Data.command[SCE_PAD_TRIGGER_EFFECT_PARAM_INDEX_FOR_R2].commandData.slopeFeedbackParam.startStrength = R2.CommandData.SlopeFeedbackParam.StartStrength;
			Data.command[SCE_PAD_TRIGGER_EFFECT_PARAM_INDEX_FOR_R2].commandData.slopeFeedbackParam.endStrength = R2.CommandData.SlopeFeedbackParam.EndStrength;
			
			Data.command[SCE_PAD_TRIGGER_EFFECT_PARAM_INDEX_FOR_R2].commandData.multiplePositionVibrationParam.frequency = R2.CommandData.MultiplePositionVibrationParam.Frequency;
			
			for (int32 i=0; i<R2.CommandData.MultiplePositionVibrationParam.Amplitude.Num(); i++)
			{
				Data.command[SCE_PAD_TRIGGER_EFFECT_PARAM_INDEX_FOR_R2].commandData.multiplePositionVibrationParam.amplitude[i] = R2.CommandData.MultiplePositionVibrationParam.Amplitude[i];
			}
		}

		// L2
		{
			Data.command[SCE_PAD_TRIGGER_EFFECT_PARAM_INDEX_FOR_L2].mode = static_cast<ScePadTriggerEffectMode>(L2.Mode);
			Data.command[SCE_PAD_TRIGGER_EFFECT_PARAM_INDEX_FOR_L2].commandData.feedbackParam.position = L2.CommandData.FeedbackParam.Position;
			Data.command[SCE_PAD_TRIGGER_EFFECT_PARAM_INDEX_FOR_L2].commandData.feedbackParam.strength = L2.CommandData.FeedbackParam.Strength;
			
			Data.command[SCE_PAD_TRIGGER_EFFECT_PARAM_INDEX_FOR_L2].commandData.weaponParam.startPosition = L2.CommandData.WeaponParam.StartPosition;
			Data.command[SCE_PAD_TRIGGER_EFFECT_PARAM_INDEX_FOR_L2].commandData.weaponParam.endPosition = L2.CommandData.WeaponParam.EndPosition;
			Data.command[SCE_PAD_TRIGGER_EFFECT_PARAM_INDEX_FOR_L2].commandData.weaponParam.strength = L2.CommandData.WeaponParam.Strength;
			
			Data.command[SCE_PAD_TRIGGER_EFFECT_PARAM_INDEX_FOR_L2].commandData.vibrationParam.position = L2.CommandData.VibrationParam.Position;
			Data.command[SCE_PAD_TRIGGER_EFFECT_PARAM_INDEX_FOR_L2].commandData.vibrationParam.amplitude = L2.CommandData.VibrationParam.Amplitude;
			Data.command[SCE_PAD_TRIGGER_EFFECT_PARAM_INDEX_FOR_L2].commandData.vibrationParam.frequency = L2.CommandData.VibrationParam.Frequency;
			
			for (int32 i=0; i<L2.CommandData.MultiplePositionFeedbackParam.Strength.Num(); i++)
			{
				Data.command[SCE_PAD_TRIGGER_EFFECT_PARAM_INDEX_FOR_L2].commandData.multiplePositionFeedbackParam.strength[i] = L2.CommandData.MultiplePositionFeedbackParam.Strength[i];
			}
			
			Data.command[SCE_PAD_TRIGGER_EFFECT_PARAM_INDEX_FOR_L2].commandData.slopeFeedbackParam.startPosition = L2.CommandData.SlopeFeedbackParam.StartPosition;
			Data.command[SCE_PAD_TRIGGER_EFFECT_PARAM_INDEX_FOR_L2].commandData.slopeFeedbackParam.endPosition = L2.CommandData.SlopeFeedbackParam.EndPosition;
			Data.command[SCE_PAD_TRIGGER_EFFECT_PARAM_INDEX_FOR_L2].commandData.slopeFeedbackParam.startStrength = L2.CommandData.SlopeFeedbackParam.StartStrength;
			Data.command[SCE_PAD_TRIGGER_EFFECT_PARAM_INDEX_FOR_L2].commandData.slopeFeedbackParam.endStrength = L2.CommandData.SlopeFeedbackParam.EndStrength;
			
			Data.command[SCE_PAD_TRIGGER_EFFECT_PARAM_INDEX_FOR_L2].commandData.multiplePositionVibrationParam.frequency = L2.CommandData.MultiplePositionVibrationParam.Frequency;
			
			for (int32 i=0; i<L2.CommandData.MultiplePositionVibrationParam.Amplitude.Num(); i++)
			{
				Data.command[SCE_PAD_TRIGGER_EFFECT_PARAM_INDEX_FOR_L2].commandData.multiplePositionVibrationParam.amplitude[i] = L2.CommandData.MultiplePositionVibrationParam.Amplitude[i];
			}
			
		}		
		SteamInput()->SetDualSenseTriggerEffect(InputHandle, &Data);
	}
#endif
}
