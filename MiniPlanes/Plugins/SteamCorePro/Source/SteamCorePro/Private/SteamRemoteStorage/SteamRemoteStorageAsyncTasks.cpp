/**
* Copyright (C) 2017-2024 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamRemoteStorage
*/

#include "SteamRemoteStorage/SteamRemoteStorageAsyncTasks.h"
#include "SteamCoreProPluginPrivatePCH.h"

#if WITH_STEAMCORE
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreProRemoteStorageFileWriteAsync
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void FOnlineAsyncTaskSteamCoreProRemoteStorageFileWriteAsync::Tick()
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
			m_CallbackHandle = SteamRemoteStorage()->FileWriteAsync(TCHAR_TO_UTF8(*m_File), m_Data.GetData(), m_Data.Num());
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

void FOnlineAsyncTaskSteamCoreProRemoteStorageFileWriteAsync::TriggerDelegates()
{
	LogVerbose("WasSuccessful: %d", WasSuccessful());

	m_OnSteamCallback.ExecuteIfBound(m_CallbackResults, bWasSuccessful);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreProRemoteStorageFileReadAsync
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void FOnlineAsyncTaskSteamCoreProRemoteStorageFileReadAsync::Tick()
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
			m_CallbackHandle = SteamRemoteStorage()->FileReadAsync(TCHAR_TO_UTF8(*m_File), m_Offset, m_BytesToRead);
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

void FOnlineAsyncTaskSteamCoreProRemoteStorageFileReadAsync::TriggerDelegates()
{
	LogVerbose("WasSuccessful: %d", WasSuccessful());

	m_OnSteamCallback.ExecuteIfBound(m_CallbackResults, bWasSuccessful);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreProRemoteStorageFileShare
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void FOnlineAsyncTaskSteamCoreProRemoteStorageFileShare::Tick()
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
			m_CallbackHandle = SteamRemoteStorage()->FileShare(TCHAR_TO_UTF8(*m_File));
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

void FOnlineAsyncTaskSteamCoreProRemoteStorageFileShare::TriggerDelegates()
{
	LogVeryVerbose("");

	m_OnSteamCallback.ExecuteIfBound(m_CallbackResults, bWasSuccessful);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreProRemoteStorageUGCDownload
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void FOnlineAsyncTaskSteamCoreProRemoteStorageUGCDownload::Tick()
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
			m_CallbackHandle = SteamRemoteStorage()->UGCDownload(m_Content, m_Priority);
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

void FOnlineAsyncTaskSteamCoreProRemoteStorageUGCDownload::TriggerDelegates()
{
	LogVerbose("WasSuccessful: %d", WasSuccessful());

	m_OnSteamCallback.ExecuteIfBound(m_CallbackResults, bWasSuccessful);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreProRemoteStorageUGCDownloadToLocation
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void FOnlineAsyncTaskSteamCoreProRemoteStorageUGCDownloadToLocation::Tick()
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
			m_CallbackHandle = SteamRemoteStorage()->UGCDownloadToLocation(m_Content, TCHAR_TO_UTF8(*m_Location), m_Priority);
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

void FOnlineAsyncTaskSteamCoreProRemoteStorageUGCDownloadToLocation::TriggerDelegates()
{
	LogVerbose("WasSuccessful: %d", WasSuccessful());

	m_OnSteamCallback.ExecuteIfBound(m_CallbackResults, bWasSuccessful);
}
#endif