/**
* Copyright (C) 2017-2024 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamTimeline
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCorePro/SteamCoreProModule.h"
#include "SteamTimelineTypes.h"
#include "SteamTimeline.generated.h"

UCLASS()
class STEAMCOREPRO_API USteamProTimeline : public USteamCoreInterface
{
	GENERATED_BODY()
public:
	USteamProTimeline();
	virtual ~USteamProTimeline() override;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore")
	static USteamProTimeline* GetSteamTimeline();
public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	* Sets a description for the current game state in the timeline. These help the user to find specific moments in the timeline when saving clips. Setting a new state description replaces any previous description.
	* 
	* Examples could include:
    * Where the user is in the world in a single player game
    * Which round is happening in a multiplayer game
    * The current score for a sports game
    * 
	* @param	Description		Provide a localized string in the language returned by SteamUtils()->GetSteamUILanguage()
	* @param	Delta			The time offset in seconds to apply to this event. Negative times indicate an event that happened in the past.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Timeline")
	static void SetTimelineStateDescription(FString Description, float Delta);
	
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Timeline")
	static void ClearTimelineStateDescription(float Delta);

	/**
	* Use this to mark an event on the Timeline. The event can be instantaneous or take some amount of time to complete, depending on the value passed in flDurationSeconds
	* 
	* Examples could include:
    * a boss battle
    * a cut scene
    * a large team fight
    * picking up a new weapon or ammunition
    * scoring a goal
    *
	* @param  Icon				        Specify the name of the icon uploaded through the Steamworks Partner Site for your title or one of the provided icons that start with steam_
	* @param  Title				        Provide a localized string in the language returned by SteamUtils()->GetSteamUILanguage()
	* @param  Description		        Provide a localized string in the language returned by SteamUtils()->GetSteamUILanguage()
	* @param  Priority			        Specify how important this range is compared to other markers provided by the game. Ranges with larger priority values will be displayed more prominently in the UI. This value may be between 0 and k_unMaxTimelinePriority.
	* @param  StartOffsetSeconds		The time that this range started relative to now. Negative times indicate an event that happened in the past.
	* @param  DurationSeconds			How long the time range should be in seconds. For instantaneous events, this should be 0
	* @param  PossibleClip				By setting this parameter to Featured or Standard, the game indicates to Steam that it would be appropriate to offer this range as a clip to the user. For instantaneous events, the suggested clip will be for a short time before and after the event itself.
	* 
	 */
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Timeline")
	static void AddTimelineEvent( FString Icon, FString Title, FString Description, int32 Priority, float StartOffsetSeconds, float DurationSeconds, ESteamTimelineEventClipPriority PossibleClip);

	/*
	 * Changes the color of the timeline bar. See ETimelineGameMode comments for how to use each value
	 */
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Timeline")
	static void SetTimelineGameMode(ESteamTimelineGameMode Mode);
	
};
