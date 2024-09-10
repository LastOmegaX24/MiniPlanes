/**
* Copyright (C) 2017-2024 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamMusic
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCorePro/SteamCoreProModule.h"
#include "SteamMusicTypes.h"
#include "SteamMusic.generated.h"

UCLASS()
class STEAMCOREPRO_API USteamProMusic : public USteamCoreInterface
{
	GENERATED_BODY()
public:
	USteamProMusic();
	virtual ~USteamProMusic() override;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore")
	static USteamProMusic* GetSteamMusic();

public:
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Music|Delegates")
	FOnPlaybackStatusHasChanged PlaybackStatusHasChanged;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Music|Delegates")
	FOnVolumeHasChanged VolumeHasChanged;

public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	* Checks if Steam Music is enabled.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Music")
	bool BIsEnabled();

	/**
	* Checks if Steam Music is active. This does not necessarily a song is currently playing, it may be paused.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Music")
	bool BIsPlaying();

	/**
	* Gets the current status of the Steam Music player.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Music")
	ESteamAudioPlaybackStatus GetPlaybackStatus();

	/**
	* Have the Steam Music player resume playing.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Music")
	void Play();

	/**
	* Pause the Steam Music player.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Music")
	void Pause();

	/**
	* Have the Steam Music player play the previous song.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Music")
	void PlayPrevious();

	/**
	* Have the Steam Music player skip to the next song.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Music")
	void PlayNext();

	/**
	* Sets the volume of the Steam Music player.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Music")
	void SetVolume(float flVolume);

	/**
	* Gets the current volume of the Steam Music player.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Music")
	float GetVolume();

private:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Callbacks
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

#if WITH_STEAMCORE
	STEAM_CALLBACK_MANUAL(USteamProMusic, OnPlaybackStatusHasChanged, PlaybackStatusHasChanged_t, OnPlaybackStatusHasChangedCallback);
	STEAM_CALLBACK_MANUAL(USteamProMusic, OnVolumeHasChanged, VolumeHasChanged_t, OnVolumeHasChangedCallback);
#endif
};
