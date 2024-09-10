/**
* Copyright (C) 2017-2024 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamTimeline
*/

#include "SteamTimeline/SteamTimeline.h"
#include "SteamCoreProPluginPrivatePCH.h"

USteamProTimeline::USteamProTimeline()
{
}

USteamProTimeline::~USteamProTimeline()
{
}

USteamProTimeline* USteamProTimeline::GetSteamTimeline()
{
#if WITH_STEAMCORE
	return SteamTimeline() ? ThisClass::StaticClass()->GetDefaultObject<USteamProTimeline>() : nullptr;
#endif
	return nullptr;
}

void USteamProTimeline::SetTimelineStateDescription(FString Description, float Delta)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (GetTimeline())
	{
		GetTimeline()->SetTimelineStateDescription(TCHAR_TO_UTF8(*Description), Delta);
	}
#endif
}

void USteamProTimeline::ClearTimelineStateDescription(float Delta)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (GetTimeline())
	{
		GetTimeline()->ClearTimelineStateDescription(Delta);
	}
#endif
}

void USteamProTimeline::AddTimelineEvent(FString Icon, FString Title, FString Description, int32 Priority, float StartOffsetSeconds, float DurationSeconds, ESteamTimelineEventClipPriority PossibleClip)
{
#if WITH_STEAMCORE
	if (GetTimeline())
	{
		GetTimeline()->AddTimelineEvent(TCHAR_TO_UTF8(*Icon), TCHAR_TO_UTF8(*Title), TCHAR_TO_UTF8(*Description), Priority, StartOffsetSeconds, DurationSeconds, static_cast<ETimelineEventClipPriority>(PossibleClip));
	}
#endif
}

void USteamProTimeline::SetTimelineGameMode(ESteamTimelineGameMode Mode)
{
#if WITH_STEAMCORE
	if (GetTimeline())
	{
		GetTimeline()->SetTimelineGameMode(static_cast<ETimelineGameMode>(Mode));
	}
#endif
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //