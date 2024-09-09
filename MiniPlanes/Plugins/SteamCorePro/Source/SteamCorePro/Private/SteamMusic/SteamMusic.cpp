/**
* Copyright (C) 2017-2024 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamMusic
*/

#include "SteamMusic/SteamMusic.h"
#include "SteamCoreProPluginPrivatePCH.h"

USteamProMusic::USteamProMusic()
{
#if WITH_STEAMCORE
	OnPlaybackStatusHasChangedCallback.Register(this, &USteamProMusic::OnPlaybackStatusHasChanged);
	OnVolumeHasChangedCallback.Register(this, &USteamProMusic::OnVolumeHasChanged);

	if (IsRunningDedicatedServer())
	{
		OnPlaybackStatusHasChangedCallback.SetGameserverFlag();
		OnVolumeHasChangedCallback.SetGameserverFlag();
	}
#endif
}

USteamProMusic::~USteamProMusic()
{
#if WITH_STEAMCORE
	OnPlaybackStatusHasChangedCallback.Unregister();
	OnVolumeHasChangedCallback.Unregister();
#endif
}

USteamProMusic* USteamProMusic::GetSteamMusic()
{
#if WITH_STEAMCORE
	return SteamMusic() ? ThisClass::StaticClass()->GetDefaultObject<USteamProMusic>() : nullptr;
#endif
	return nullptr;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

bool USteamProMusic::BIsEnabled()
{
	LogVeryVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (SteamMusic())
	{
		bResult = SteamMusic()->BIsEnabled();
	}
#endif

	return bResult;
}

bool USteamProMusic::BIsPlaying()
{
	LogVeryVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (SteamMusic())
	{
		bResult = SteamMusic()->BIsPlaying();
	}
#endif

	return bResult;
}

ESteamAudioPlaybackStatus USteamProMusic::GetPlaybackStatus()
{
	LogVeryVerbose("");

	ESteamAudioPlaybackStatus Result = ESteamAudioPlaybackStatus::Idle;

#if WITH_STEAMCORE
	if (SteamMusic())
	{
		Result = static_cast<ESteamAudioPlaybackStatus>(SteamMusic()->GetPlaybackStatus());
	}
#endif

	return Result;
}

void USteamProMusic::Play()
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (SteamMusic())
	{
		SteamMusic()->Play();
	}
#endif
}

void USteamProMusic::Pause()
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (SteamMusic())
	{
		SteamMusic()->Pause();
	}
#endif
}

void USteamProMusic::PlayPrevious()
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (SteamMusic())
	{
		SteamMusic()->PlayPrevious();
	}
#endif
}

void USteamProMusic::PlayNext()
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (SteamMusic())
	{
		SteamMusic()->PlayNext();
	}
#endif
}

void USteamProMusic::SetVolume(float flVolume)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (SteamMusic())
	{
		SteamMusic()->SetVolume(flVolume);
	}
#endif
}

float USteamProMusic::GetVolume()
{
	LogVeryVerbose("");

	float Result = 0.0f;

#if WITH_STEAMCORE
	if (SteamMusic())
	{
		Result = SteamMusic()->GetVolume();
	}
#endif

	return Result;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

#if WITH_STEAMCORE
void USteamProMusic::OnPlaybackStatusHasChanged(PlaybackStatusHasChanged_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		PlaybackStatusHasChanged.Broadcast(Data);
	});
}

void USteamProMusic::OnVolumeHasChanged(VolumeHasChanged_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		VolumeHasChanged.Broadcast(Data);
	});
}
#endif
