/**
* Copyright (C) 2017-2024 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUserStats
*/

#include "SteamUserStats/SteamUserStats.h"
#include "SteamUserStats/SteamUserStatsAsyncTasks.h"
#include "SteamCoreProPluginPrivatePCH.h"

USteamProUserStats::USteamProUserStats()
{
#if WITH_STEAMCORE
	OnUserAchievementIconFetchedCallback.Register(this, &USteamProUserStats::OnUserAchievementIconFetched);
	OnUserStatsReceivedCallback.Register(this, &USteamProUserStats::OnUserStatsReceived);
	OnUserStatsStoredCallback.Register(this, &USteamProUserStats::OnUserStatsStored);
	OnUserAchievementStoredCallback.Register(this, &USteamProUserStats::OnUserAchievementStored);
	OnUserStatsUnloadedCallback.Register(this, &USteamProUserStats::OnUserStatsUnloaded);
	OnUserAchievementIconFetchedCallback.Register(this, &USteamProUserStats::OnUserAchievementIconFetched);

	if (IsRunningDedicatedServer())
	{
		OnUserAchievementIconFetchedCallback.SetGameserverFlag();
		OnUserStatsReceivedCallback.SetGameserverFlag();
		OnUserStatsStoredCallback.SetGameserverFlag();
		OnUserAchievementStoredCallback.SetGameserverFlag();
		OnUserStatsUnloadedCallback.SetGameserverFlag();
		OnUserAchievementIconFetchedCallback.SetGameserverFlag();
	}
#endif
}

USteamProUserStats::~USteamProUserStats()
{
#if WITH_STEAMCORE
	OnUserAchievementIconFetchedCallback.Unregister();
	OnUserStatsReceivedCallback.Unregister();
	OnUserStatsStoredCallback.Unregister();
	OnUserAchievementStoredCallback.Unregister();
	OnUserStatsUnloadedCallback.Unregister();
	OnUserAchievementIconFetchedCallback.Unregister();
#endif
}

USteamProUserStats* USteamProUserStats::GetSteamUserStats()
{
#if WITH_STEAMCORE
	return SteamUserStats() ? ThisClass::StaticClass()->GetDefaultObject<USteamProUserStats>() : nullptr;
#endif
	return nullptr;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void USteamProUserStats::AttachLeaderboardUGC(const FOnAttachLeaderboardUGC& Callback, FSteamLeaderboard SteamLeaderboard, FSteamUGCHandle Handle)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		FOnlineAsyncTaskSteamCoreProUserStatsAttachLeaderboardUGC* Task = new FOnlineAsyncTaskSteamCoreProUserStatsAttachLeaderboardUGC(Callback, SteamLeaderboard, Handle);
		QueueAsyncTask(Task);
	}
#endif
}

bool USteamProUserStats::ClearAchievement(FString Name)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		bResult = SteamUserStats()->ClearAchievement(TCHAR_TO_UTF8(*Name));
	}
#endif

	return bResult;
}

void USteamProUserStats::DownloadLeaderboardEntries(const FOnDownloadLeaderboardEntries& Callback, FSteamLeaderboard SteamLeaderboard, ESteamLeaderboardDataRequest DataRequest, int32 RangeStart, int32 RangeEnd)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		FOnlineAsyncTaskSteamCoreProUserStatsDownloadLeaderboardEntries* Task = new FOnlineAsyncTaskSteamCoreProUserStatsDownloadLeaderboardEntries(Callback, SteamLeaderboard, DataRequest, RangeStart, RangeEnd);
		QueueAsyncTask(Task);
	}
#endif
}

void USteamProUserStats::DownloadLeaderboardEntriesForUsers(const FOnDownloadLeaderboardEntriesForUsers& Callback, FSteamLeaderboard SteamLeaderboard, TArray<FSteamID> Users)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		FOnlineAsyncTaskSteamCoreProUserStatsDownloadLeaderboardEntriesForUsers* Task = new FOnlineAsyncTaskSteamCoreProUserStatsDownloadLeaderboardEntriesForUsers(Callback, SteamLeaderboard, Users);
		QueueAsyncTask(Task);
	}
#endif
}

void USteamProUserStats::FindLeaderboard(const FOnFindLeaderboard& Callback, FString LeaderboardName)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		FOnlineAsyncTaskSteamCoreProUserStatsFindLeaderboard* Task = new FOnlineAsyncTaskSteamCoreProUserStatsFindLeaderboard(Callback, LeaderboardName);
		QueueAsyncTask(Task);
	}
#endif
}

void USteamProUserStats::FindOrCreateLeaderboard(const FOnFindOrCreateLeaderboard& Callback, FString LeaderboardName, ESteamLeaderboardSortMethod SortMethod, ESteamLeaderboardDisplayType DisplayType)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		FOnlineAsyncTaskSteamCoreProUserStatsFindOrCreateLeaderboard* Task = new FOnlineAsyncTaskSteamCoreProUserStatsFindOrCreateLeaderboard(Callback, LeaderboardName, SortMethod, DisplayType);
		QueueAsyncTask(Task);
	}
#endif
}

bool USteamProUserStats::GetAchievement(FString Name, bool& bAchieved)
{
	LogVeryVerbose("");

	bool bResult = false;
	bAchieved = false;

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		bResult = SteamUserStats()->GetAchievement(TCHAR_TO_UTF8(*Name), &bAchieved);
	}
#endif

	return bResult;
}

bool USteamProUserStats::GetAchievementAchievedPercent(FString Name, float& OutPercent)
{
	LogVeryVerbose("");

	bool bResult = false;
	OutPercent = 0.0f;

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		bResult = SteamUserStats()->GetAchievementAchievedPercent(TCHAR_TO_UTF8(*Name), &OutPercent);
	}
#endif

	return bResult;
}

bool USteamProUserStats::GetAchievementAndUnlockTime(FString Name, bool& bAchieved, int32& OutUnlockTime)
{
	LogVeryVerbose("");

	bool bResult = false;
	bAchieved = false;
	OutUnlockTime = 0;

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		uint32 UnlockTime = 0;

		bResult = SteamUserStats()->GetAchievementAndUnlockTime(TCHAR_TO_UTF8(*Name), &bAchieved, &UnlockTime);

		OutUnlockTime = UnlockTime;
	}
#endif
	
	return bResult;
}

FString USteamProUserStats::GetAchievementDisplayAttribute(FString Name, FString Key)
{
	LogVeryVerbose("Name (%s), Key (%s)", *Name, *Key);

	FString Result;

	if (Name.Len() == 0 || Key.Len() == 0)
	{
		return Result;
	}

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		const FTCHARToUTF8 ConvertedName(*Name);
		const FTCHARToUTF8 ConvertedKey(*Key);

		Result = UTF8_TO_TCHAR(SteamUserStats()->GetAchievementDisplayAttribute(ConvertedName.Get(), ConvertedKey.Get()));
	}
#endif

	return Result;
}

UTexture2D* USteamProUserStats::GetAchievementIcon(FString Name)
{
	LogVeryVerbose("");

	UTexture2D* Texture = nullptr;

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		const int ImageData = SteamUserStats()->GetAchievementIcon(TCHAR_TO_UTF8(*Name));
		Texture = GetSteamTexture(ImageData);
	}
#endif

	return Texture;
}

bool USteamProUserStats::GetDownloadedLeaderboardEntry(FSteamLeaderboardEntries LeaderboardEntries, int32 Index, FSteamLeaderboardEntry& OutLeaderboardEntry, TArray<int32> Details, TArray<int32>& OutDetails)
{
	LogVeryVerbose("");

	bool bResult = false;
	OutLeaderboardEntry = FSteamLeaderboardEntry();
	OutDetails.Empty();

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		OutDetails.SetNum(Details.Num());

		LeaderboardEntry_t LeaderboardEntry;

		bResult = SteamUserStats()->GetDownloadedLeaderboardEntry(LeaderboardEntries, Index, &LeaderboardEntry, OutDetails.GetData(), OutDetails.Num());

		if (bResult)
		{
			OutLeaderboardEntry = LeaderboardEntry;
		}
	}
#endif

	return bResult;
}

FString USteamProUserStats::GetAchievementName(int32 Achievement)
{
	LogVeryVerbose("");

	FString Result;

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		Result = UTF8_TO_TCHAR(SteamUserStats()->GetAchievementName(Achievement));
	}
#endif

	return Result;
}

bool USteamProUserStats::GetGlobalStatInt(FString StatName, int32& OutData)
{
	LogVeryVerbose("");

	bool bResult = false;
	OutData = 0;

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		int64 pData;
		bResult = SteamUserStats()->GetGlobalStat(TCHAR_TO_UTF8(*StatName), &pData);
		OutData = pData;
	}
#endif

	return bResult;
}

bool USteamProUserStats::GetGlobalStatFloat(FString StatName, float& OutData)
{
	LogVeryVerbose("");

	bool bResult = false;
	OutData = 0.0f;

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		double pData;
		bResult = SteamUserStats()->GetGlobalStat(TCHAR_TO_UTF8(*StatName), &pData);
		OutData = pData;
	}
#endif

	return bResult;
}

int32 USteamProUserStats::GetGlobalStatHistoryInt(FString StatName, int32 HistoryDays, TArray<int32>& OutData)
{
	LogVeryVerbose("");

	int32 Result = 0;
	OutData.Empty();

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		TArray<int64> pData;
		pData.SetNum(HistoryDays);

		Result = SteamUserStats()->GetGlobalStatHistory(TCHAR_TO_UTF8(*StatName), pData.GetData(), HistoryDays);

		for (auto& Element : pData)
		{
			OutData.Add(Element);
		}
	}
#endif

	return Result;
}

int32 USteamProUserStats::GetGlobalStatHistoryFloat(FString StatName, int32 HistoryDays, TArray<float>& OutData)
{
	LogVeryVerbose("");

	int32 Result = 0;
	OutData.Empty();

#if WITH_STEAMCORE
	if (SteamUserStats() && HistoryDays > 0)
	{
		TArray<double> DataArray;
		DataArray.SetNum(HistoryDays);

		Result = SteamUserStats()->GetGlobalStatHistory(TCHAR_TO_UTF8(*StatName), DataArray.GetData(), DataArray.Num());

		for (auto& Element : DataArray)
		{
			OutData.Add(Element);
		}
	}
#endif

	return Result;
}

bool USteamProUserStats::GetAchievementProgressLimits(FString Name, int32& MinProgress, int32& MaxProgress)
{
	LogVeryVerbose("");

	bool bResult = false;
	MinProgress = 0;
	MaxProgress = 0;

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		bResult = SteamUserStats()->GetAchievementProgressLimits(TCHAR_TO_UTF8(*Name), &MinProgress, &MaxProgress);
	}
#endif

	return bResult;
}

bool USteamProUserStats::GetAchievementProgressLimitsFloat(FString Name, float& MinProgress, float& MaxProgress)
{
	LogVeryVerbose("");

	bool bResult = false;
	MinProgress = 0.0f;
	MaxProgress = 0.0f;

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		bResult = SteamUserStats()->GetAchievementProgressLimits(TCHAR_TO_UTF8(*Name), &MinProgress, &MaxProgress);
	}
#endif

	return bResult;
}

ESteamLeaderboardDisplayType USteamProUserStats::GetLeaderboardDisplayType(FSteamLeaderboard SteamLeaderboard)
{
	LogVeryVerbose("");

	ESteamLeaderboardDisplayType Result = ESteamLeaderboardDisplayType::None;

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		Result = static_cast<ESteamLeaderboardDisplayType>(SteamUserStats()->GetLeaderboardDisplayType(SteamLeaderboard));
	}
#endif

	return Result;
}

int32 USteamProUserStats::GetLeaderboardEntryCount(FSteamLeaderboard SteamLeaderboard)
{
	LogVeryVerbose("");

	int32 Result = 0;

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		Result = SteamUserStats()->GetLeaderboardEntryCount(SteamLeaderboard);
	}
#endif

	return Result;
}

FString USteamProUserStats::GetLeaderboardName(FSteamLeaderboard SteamLeaderboard)
{
	LogVeryVerbose("");

	FString Result;

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		Result = UTF8_TO_TCHAR(SteamUserStats()->GetLeaderboardName(SteamLeaderboard));
	}
#endif

	return Result;
}

ESteamLeaderboardSortMethod USteamProUserStats::GetLeaderboardSortMethod(FSteamLeaderboard SteamLeaderboard)
{
	LogVeryVerbose("");

	ESteamLeaderboardSortMethod Result = ESteamLeaderboardSortMethod::None;

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		Result = static_cast<ESteamLeaderboardSortMethod>(SteamUserStats()->GetLeaderboardSortMethod(SteamLeaderboard));
	}
#endif

	return Result;
}

int32 USteamProUserStats::GetMostAchievedAchievementInfo(FString& Name, float& OutPercent, bool& bAchieved)
{
	LogVeryVerbose("");

	int Result = 0;

	Name.Empty();
	OutPercent = 0.0f;
	bAchieved = false;

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		TArray<char> DataArray;
		DataArray.SetNum(128);

		Result = SteamUserStats()->GetMostAchievedAchievementInfo(DataArray.GetData(), 128, &OutPercent, &bAchieved);

		Name = UTF8_TO_TCHAR(DataArray.GetData());
	}
#endif

	return Result;
}

int32 USteamProUserStats::GetNextMostAchievedAchievementInfo(int32 IteratorPrevious, FString& Name, float& OutPercent, bool& bAchieved)
{
	LogVeryVerbose("");

	int Result = 0;

	Name.Empty();
	OutPercent = 0.0f;
	bAchieved = false;

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		TArray<char> DataArray;
		DataArray.SetNum(128);

		Result = SteamUserStats()->GetNextMostAchievedAchievementInfo(IteratorPrevious, DataArray.GetData(), 128, &OutPercent, &bAchieved);

		Name = UTF8_TO_TCHAR(DataArray.GetData());
	}
#endif

	return Result;
}

int32 USteamProUserStats::GetNumAchievements()
{
	LogVeryVerbose("");

	int32 Result = 0;

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		Result = SteamUserStats()->GetNumAchievements();
	}
#endif

	return Result;
}

void USteamProUserStats::GetNumberOfCurrentPlayers(const FOnGetNumberOfCurrentPlayers& Callback)
{
	LogVeryVerbose("");

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		FOnlineAsyncTaskSteamCoreProUserStatsGetNumberOfCurrentPlayers* Task = new FOnlineAsyncTaskSteamCoreProUserStatsGetNumberOfCurrentPlayers(Callback);
		QueueAsyncTask(Task);
	}
#endif
}

bool USteamProUserStats::GetUserStatInteger(FSteamID SteamIDUser, FString Name, int32& OutData)
{
	LogVeryVerbose("");

	bool bResult = false;

	OutData = 0;

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		bResult = SteamUserStats()->GetUserStat(SteamIDUser, TCHAR_TO_UTF8(*Name), &OutData);
	}
#endif

	return bResult;
}

bool USteamProUserStats::GetUserStatFloat(FSteamID SteamIDUser, FString Name, float& OutData)
{
	LogVeryVerbose("");

	bool bResult = false;
	OutData = 0.0f;

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		bResult = SteamUserStats()->GetUserStat(SteamIDUser, TCHAR_TO_UTF8(*Name), &OutData);
	}
#endif

	return bResult;
}

bool USteamProUserStats::GetUserAchievement(FSteamID SteamIDUser, FString Name, bool& bAchieved)
{
	LogVeryVerbose("");

	bool bResult = false;
	bAchieved = false;

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		bResult = SteamUserStats()->GetUserAchievement(SteamIDUser, TCHAR_TO_UTF8(*Name), &bAchieved);
	}
#endif

	return bResult;
}

bool USteamProUserStats::GetUserAchievementAndUnlockTime(FSteamID SteamIDUser, FString Name, bool& bAchieved, int32& OutUnlockTime)
{
	LogVeryVerbose("");

	bool bResult = false;
	bAchieved = false;
	OutUnlockTime = 0;
	uint32 UnlockTime = 0;

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		SteamUserStats()->GetUserAchievementAndUnlockTime(SteamIDUser, TCHAR_TO_UTF8(*Name), &bAchieved, &UnlockTime);
	}
#endif

	OutUnlockTime = UnlockTime;

	return bResult;
}

bool USteamProUserStats::GetStatInt(FString Name, int32& OutData)
{
	LogVeryVerbose("");

	bool bResult = false;
	OutData = 0;

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		bResult = SteamUserStats()->GetStat(TCHAR_TO_UTF8(*Name), &OutData);
	}
#endif

	return bResult;
}

bool USteamProUserStats::GetStatFloat(FString Name, float& OutData)
{
	LogVeryVerbose("");

	bool bResult = false;
	OutData = 0.0f;

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		bResult = SteamUserStats()->GetStat(TCHAR_TO_UTF8(*Name), &OutData);
	}
#endif

	return bResult;
}

bool USteamProUserStats::IndicateAchievementProgress(FString Name, int32 CurrentProgress, int32 MaxProgress)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		bResult = SteamUserStats()->IndicateAchievementProgress(TCHAR_TO_UTF8(*Name), CurrentProgress, MaxProgress);
	}
#endif

	return bResult;
}

bool USteamProUserStats::RequestCurrentStats()
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		bResult = SteamUserStats()->RequestCurrentStats();
	}
#endif

	return bResult;
}

void USteamProUserStats::RequestGlobalAchievementPercentages(const FOnRequestGlobalAchievementPercentages& Callback)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		FOnlineAsyncTaskSteamCoreProUserStatsRequestGlobalAchievementPercentages* Task = new FOnlineAsyncTaskSteamCoreProUserStatsRequestGlobalAchievementPercentages(Callback);
		QueueAsyncTask(Task);
	}
#endif
}

void USteamProUserStats::RequestGlobalStats(const FOnRequestGlobalStats& Callback, int32 HistoryDays)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		FOnlineAsyncTaskSteamCoreProUserStatsRequestGlobalStats* Task = new FOnlineAsyncTaskSteamCoreProUserStatsRequestGlobalStats(Callback, HistoryDays);
		QueueAsyncTask(Task);
	}
#endif
}

void USteamProUserStats::RequestUserStats(const FOnRequestUserStats& Callback, FSteamID SteamID)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		FOnlineAsyncTaskSteamCoreProUserStatsRequestUserStats* Task = new FOnlineAsyncTaskSteamCoreProUserStatsRequestUserStats(Callback, SteamID);
		QueueAsyncTask(Task);
	}
#endif
}

bool USteamProUserStats::ResetAllStats(bool bAchievementsToo)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		bResult = SteamUserStats()->ResetAllStats(bAchievementsToo);
	}
#endif

	return bResult;
}

bool USteamProUserStats::SetAchievement(FString Name)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		bResult = SteamUserStats()->SetAchievement(TCHAR_TO_UTF8(*Name));
	}
#endif

	return bResult;
}

bool USteamProUserStats::SetStatInt(FString Name, int32 Data)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		bResult = SteamUserStats()->SetStat(TCHAR_TO_UTF8(*Name), Data);
	}
#endif

	return bResult;
}

bool USteamProUserStats::SetStatFloat(FString Name, float Data)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		bResult = SteamUserStats()->SetStat(TCHAR_TO_UTF8(*Name), Data);
	}
#endif

	return bResult;
}

bool USteamProUserStats::StoreStats()
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		bResult = SteamUserStats()->StoreStats();
	}
#endif

	return bResult;
}

bool USteamProUserStats::UpdateAvgRateStat(FString Name, float CountThisSession, float SessionLength)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		bResult = SteamUserStats()->UpdateAvgRateStat(TCHAR_TO_UTF8(*Name), CountThisSession, SessionLength);
	}
#endif

	return bResult;
}

void USteamProUserStats::UploadLeaderboardScore(const FOnUploadLeaderboardScore& Callback, FSteamLeaderboard SteamLeaderboard, ESteamLeaderboardUploadScoreMethod UploadScoreMethod, int32 Score, TArray<int32> ScoreDetails)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (SteamUserStats())
	{
		FOnlineAsyncTaskSteamCoreProUserStatsUploadLeaderboardScore* Task = new FOnlineAsyncTaskSteamCoreProUserStatsUploadLeaderboardScore(Callback, SteamLeaderboard, UploadScoreMethod, Score, ScoreDetails);
		QueueAsyncTask(Task);
	}
#endif
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

#if WITH_STEAMCORE
void USteamProUserStats::OnUserStatsReceived(UserStatsReceived_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		UserStatsReceived.Broadcast(Data);
	});
}

void USteamProUserStats::OnUserStatsStored(UserStatsStored_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		UserStatsStored.Broadcast(Data);
	});
}

void USteamProUserStats::OnUserAchievementStored(UserAchievementStored_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		UserAchievementStored.Broadcast(Data);
	});
}

void USteamProUserStats::OnUserStatsUnloaded(UserStatsUnloaded_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		UserStatsUnloaded.Broadcast(Data);
	});
}

void USteamProUserStats::OnUserAchievementIconFetched(UserAchievementIconFetched_t* pParam)
{
	LogVerbose("");

	FUserAchievementIconFetched Data = *pParam;
	Data.Icon = GetSteamTexture(Data.m_nIconHandle);
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		UserAchievementIconFetched.Broadcast(Data);
	});
}
#endif
