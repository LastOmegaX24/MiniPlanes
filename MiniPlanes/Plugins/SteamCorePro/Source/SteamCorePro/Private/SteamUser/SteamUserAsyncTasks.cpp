/**
* Copyright (C) 2017-2024 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUGC
*/

#include "SteamUser/SteamUserAsyncTasks.h"
#include "SteamCoreProPluginPrivatePCH.h"

#if WITH_STEAMCORE
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreProUserRequestEncryptedAppTicket
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void FOnlineAsyncTaskSteamCoreProUserRequestEncryptedAppTicket::Tick()
{
	FOnlineAsyncTaskSteamCorePro::Tick();

	ISteamUtils* SteamUtilsPtr = IsRunningDedicatedServer() ? SteamGameServerUtils() : SteamUtils();
	checkf(SteamUtilsPtr, TEXT("Steam API not found, make sure your Steam Client is running and that the Steam API was loaded."));

	if (bIsComplete)
	{
		return;
	}

	if (SteamUtilsPtr)
	{
		if (!bInit)
		{
			m_CallbackHandle = SteamUser()->RequestEncryptedAppTicket(m_Data.GetData(), m_Data.Num());
			bInit = true;
		}

		if (m_CallbackHandle != k_uAPICallInvalid)
		{
			bool bFailedCall = false;

			bIsComplete = SteamUtilsPtr->IsAPICallCompleted(m_CallbackHandle, &bFailedCall) ? true : false;
			if (bIsComplete)
			{
				bool bFailedResult;
				bool bSuccessCallResult = SteamUtilsPtr->GetAPICallResult(m_CallbackHandle, &m_CallbackResults, sizeof(m_CallbackResults), m_CallbackResults.k_iCallback, &bFailedResult);
				bWasSuccessful = (bSuccessCallResult ? true : false) && (!bFailedCall ? true : false) && (!bFailedResult ? true : false) && ((m_CallbackResults.m_eResult == k_EResultOK) ? true : false);
			}
		}
		else
		{
			bIsComplete = true;
			bWasSuccessful = false;
		}
	}
	else
	{
		LogError("SteamUtilsPtr was nullptr");
		bIsComplete = true;
		bWasSuccessful = false;
	}
}

void FOnlineAsyncTaskSteamCoreProUserRequestEncryptedAppTicket::TriggerDelegates()
{
	LogVerbose("WasSuccessful: %d", WasSuccessful());

	m_OnSteamCallback.ExecuteIfBound(m_CallbackResults, bWasSuccessful);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreProUserRequestStoreAuthURL
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void FOnlineAsyncTaskSteamCoreProUserRequestStoreAuthURL::Tick()
{
	FOnlineAsyncTaskSteamCorePro::Tick();

	ISteamUtils* SteamUtilsPtr = IsRunningDedicatedServer() ? SteamGameServerUtils() : SteamUtils();
	checkf(SteamUtilsPtr, TEXT("Steam API not found, make sure your Steam Client is running and that the Steam API was loaded."));

	if (bIsComplete)
	{
		return;
	}

	if (SteamUtilsPtr)
	{
		if (!bInit)
		{
			m_CallbackHandle = SteamUser()->RequestStoreAuthURL(TCHAR_TO_UTF8(*m_RedirectURL));
			bInit = true;
		}

		if (m_CallbackHandle != k_uAPICallInvalid)
		{
			bool bFailedCall = false;

			bIsComplete = SteamUtilsPtr->IsAPICallCompleted(m_CallbackHandle, &bFailedCall) ? true : false;
			if (bIsComplete)
			{
				bool bFailedResult;
				bool bSuccessCallResult = SteamUtilsPtr->GetAPICallResult(m_CallbackHandle, &m_CallbackResults, sizeof(m_CallbackResults), m_CallbackResults.k_iCallback, &bFailedResult);
				bWasSuccessful = (bSuccessCallResult ? true : false) && (!bFailedCall ? true : false) && (!bFailedResult ? true : false);
			}
		}
		else
		{
			bIsComplete = true;
			bWasSuccessful = false;
		}
	}
	else
	{
		LogError("SteamUtilsPtr was nullptr");
		bIsComplete = true;
		bWasSuccessful = false;
	}
}

void FOnlineAsyncTaskSteamCoreProUserRequestStoreAuthURL::TriggerDelegates()
{
	LogVerbose("WasSuccessful: %d", WasSuccessful());

	m_OnSteamCallback.ExecuteIfBound(m_CallbackResults, bWasSuccessful);
}
#endif