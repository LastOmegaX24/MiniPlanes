/**
* Copyright (C) 2017-2024 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUGC
*/

#include "SteamUGC/SteamUGC.h"
#include "SteamUGC/SteamUGCAsyncTasks.h"
#include "SteamCorePro/Steam.h"
#include "SteamCoreProPluginPrivatePCH.h"
#include <string>
#include <sstream>

USteamProUGC::USteamProUGC()
{
#if WITH_STEAMCORE
	OnDownloadItemResultCallback.Register(this, &USteamProUGC::OnDownloadItemResult);
	OnItemInstalledCallback.Register(this, &USteamProUGC::OnItemInstalled);
	OnUserSubscribedItemsListChangedCallback.Register(this, &USteamProUGC::OnUserSubscribedItemsListChanged);
	OnWorkshopEULAStatusCallback.Register(this, &USteamProUGC::OnWorkshopEULAStatus);

	if (IsRunningDedicatedServer())
	{
		OnDownloadItemResultCallback.SetGameserverFlag();
		OnItemInstalledCallback.SetGameserverFlag();
		OnUserSubscribedItemsListChangedCallback.SetGameserverFlag();
		OnWorkshopEULAStatusCallback.SetGameserverFlag();
	}
#endif
}

USteamProUGC::~USteamProUGC()
{
#if WITH_STEAMCORE
	OnDownloadItemResultCallback.Unregister();
	OnItemInstalledCallback.Unregister();
	OnUserSubscribedItemsListChangedCallback.Unregister();
	OnWorkshopEULAStatusCallback.Unregister();
#endif
}

USteamProUGC* USteamProUGC::GetSteamUGC()
{
#if WITH_STEAMCORE
	return SteamUGC() ? ThisClass::StaticClass()->GetDefaultObject<USteamProUGC>() : nullptr;
#endif
	return nullptr;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void USteamProUGC::AddAppDependency(const FOnAddAppDependencyResult& Callback, FPublishedFileID PublishedFileID, int32 AppId)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreProUGCAddAppDependency* Task = new FOnlineAsyncTaskSteamCoreProUGCAddAppDependency(Callback, PublishedFileID, AppId);
		QueueAsyncTask(Task);
	}
#endif
}

void USteamProUGC::AddDependency(const FOnAddUGCDependencyResult& Callback, FPublishedFileID PublishedFileID, FPublishedFileID ChildPublishedFileID)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreProUGCAddUGCDependency* Task = new FOnlineAsyncTaskSteamCoreProUGCAddUGCDependency(Callback, PublishedFileID, ChildPublishedFileID);
		QueueAsyncTask(Task);
	}
#endif
}

bool USteamProUGC::AddExcludedTag(FUGCQueryHandle Handle, FString TagName)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->AddExcludedTag(Handle, TCHAR_TO_UTF8(*TagName));
	}
#endif

	return bResult;
}

bool USteamProUGC::AddItemKeyValueTag(FUGCUpdateHandle Handle, FString Key, FString Value)
{
	LogVerbose("");

	bool bResult = false;

	if (Key.Len() == 0 || Value.Len() == 0)
	{
		return bResult;
	}

#if WITH_STEAMCORE
	if (GetUGC())
	{
		const FTCHARToUTF8 ConvertedKey(*Key);
		const FTCHARToUTF8 ConvertedValue(*Value);

		bResult = GetUGC()->AddItemKeyValueTag(Handle, ConvertedKey.Get(), ConvertedValue.Get());
	}
#endif

	return bResult;
}

bool USteamProUGC::AddItemPreviewFile(FUGCUpdateHandle Handle, FString PreviewFile, ESteamItemPreviewType Type)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->AddItemPreviewFile(Handle, TCHAR_TO_UTF8(*PreviewFile), static_cast<EItemPreviewType>(Type));
	}
#endif

	return bResult;
}

bool USteamProUGC::AddItemPreviewVideo(FUGCUpdateHandle Handle, FString VideoID)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->AddItemPreviewVideo(Handle, TCHAR_TO_UTF8(*VideoID));
	}
#endif

	return bResult;
}

void USteamProUGC::AddItemToFavorites(const FOnAddItemToFavorites& Callback, int32 AppId, FPublishedFileID PublishedFileID)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreProUGCAddItemToFavorites* Task = new FOnlineAsyncTaskSteamCoreProUGCAddItemToFavorites(Callback, AppId, PublishedFileID);
		QueueAsyncTask(Task);
	}
#endif
}

bool USteamProUGC::AddRequiredKeyValueTag(FUGCQueryHandle Handle, FString Key, FString Value)
{
	LogVerbose("");

	bool bResult = false;

	if (Key.Len() == 0 || Value.Len() == 0)
	{
		return bResult;
	}

#if WITH_STEAMCORE
	if (GetUGC())
	{
		const FTCHARToUTF8 ConvertedKey(*Key);
		const FTCHARToUTF8 ConvertedValue(*Value);

		bResult = GetUGC()->AddRequiredKeyValueTag(Handle, ConvertedKey.Get(), ConvertedValue.Get());
	}
#endif

	return bResult;
}

bool USteamProUGC::AddRequiredTag(FUGCQueryHandle Handle, FString TagName)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->AddRequiredTag(Handle, TCHAR_TO_UTF8(*TagName));
	}
#endif

	return bResult;
}

bool USteamProUGC::AddRequiredTagGroup(FUGCQueryHandle Handle, TArray<FString> TagGroups)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		TArray<SteamParamStringArray_t> Arr;

		for (int32 i = 0; i < TagGroups.Num(); i++)
		{
			SteamParamStringArray_t Data = {};
			FCStringAnsi::Strncpy(reinterpret_cast<char*>(Data.m_ppStrings), TCHAR_TO_UTF8(*TagGroups[i]), 256);
			Data.m_nNumStrings = i;

			Arr.Add(Data);
		}

		bResult = GetUGC()->AddRequiredTagGroup(Handle, Arr.GetData());
	}
#endif

	return bResult;
}

bool USteamProUGC::BInitWorkshopForGameServer(int32 WorkshopDepotID, FString Folder)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->BInitWorkshopForGameServer(WorkshopDepotID, TCHAR_TO_UTF8(*Folder));
	}
#endif

	return bResult;
}

void USteamProUGC::CreateItem(const FOnCreateItem& Callback, int32 ConsumerAppID, ESteamWorkshopFileType FileType)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreProUGCCreateItem* Task = new FOnlineAsyncTaskSteamCoreProUGCCreateItem(Callback, ConsumerAppID, FileType);
		QueueAsyncTask(Task);
	}
#endif
}

FUGCQueryHandle USteamProUGC::CreateQueryAllUGCRequest(ESteamUGCQuery QueryType, ESteamUGCMatchingUGCType FileType, int32 CreatorAppID, int32 ConsumerAppID, int32 Page)
{
	LogVerbose("");

	FUGCQueryHandle Handle = {};

#if WITH_STEAMCORE
	if (GetUGC())
	{
		Handle = GetUGC()->CreateQueryAllUGCRequest(static_cast<EUGCQuery>(QueryType), (FileType == ESteamUGCMatchingUGCType::All ? k_EUGCMatchingUGCType_All : static_cast<EUGCMatchingUGCType>(FileType)), CreatorAppID, ConsumerAppID, Page);
	}
#endif

	return Handle;
}

FUGCQueryHandle USteamProUGC::CreateQueryUGCDetailsRequest(TArray<FPublishedFileID> PublishedFileIDs)
{
	LogVerbose("");

	FUGCQueryHandle Handle = {};

#if WITH_STEAMCORE
	if (GetUGC())
	{
		const int32 Size = PublishedFileIDs.Num();

		TArray<PublishedFileId_t> DataArray;
		DataArray.SetNum(Size);

		for (int32 i = 0; i < Size; i++)
		{
			DataArray[i] = PublishedFileIDs[i];
		}

		Handle = GetUGC()->CreateQueryUGCDetailsRequest(DataArray.GetData(), Size);
	}
#endif

	return Handle;
}

FUGCQueryHandle USteamProUGC::CreateQueryUserUGCRequest(FSteamID SteamID, ESteamUserUGCList ListType, ESteamUGCMatchingUGCType MatchingUGCType, ESteamUserUGCListSortOrder SortOrder, int32 CreatorAppID, int32 ConsumerAppID, int32 Page)
{
	LogVerbose("");

	FUGCQueryHandle Handle = {};

#if WITH_STEAMCORE
	if (GetUGC())
	{
		Handle = GetUGC()->CreateQueryUserUGCRequest(SteamID, static_cast<EUserUGCList>(ListType), (MatchingUGCType == ESteamUGCMatchingUGCType::All ? k_EUGCMatchingUGCType_All : static_cast<EUGCMatchingUGCType>(MatchingUGCType)), static_cast<EUserUGCListSortOrder>(SortOrder), CreatorAppID, ConsumerAppID, Page);
	}
#endif

	return Handle;
}

void USteamProUGC::DeleteItem(const FOnDeleteItemResult& Callback, FPublishedFileID PublishedFileID)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreProUGCDeleteItem* Task = new FOnlineAsyncTaskSteamCoreProUGCDeleteItem(Callback, PublishedFileID);
		QueueAsyncTask(Task);
	}
#endif
}

bool USteamProUGC::DownloadItem(FPublishedFileID PublishedFileID, bool bHighPriority)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->DownloadItem(PublishedFileID, bHighPriority);
	}
#endif

	return bResult;
}

void USteamProUGC::GetAppDependencies(const FOnGetAppDependenciesResult& Callback, FPublishedFileID PublishedFileID)
{
	LogVeryVerbose("");

#if WITH_STEAMCORE
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreProUGCGetAppDependencies* Task = new FOnlineAsyncTaskSteamCoreProUGCGetAppDependencies(Callback, PublishedFileID);
		QueueAsyncTask(Task);
	}
#endif
}

bool USteamProUGC::GetItemDownloadInfo(FPublishedFileID PublishedFileID, int32& OutBytesDownloaded, int32& OutBytesTotal)
{
	LogVeryVerbose("");

	bool bResult = false;

	uint64 BytesDownloaded = 0;
	uint64 BytesTotal = 0;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->GetItemDownloadInfo(PublishedFileID, &BytesDownloaded, &BytesTotal);
	}
#endif

	OutBytesDownloaded = BytesDownloaded;
	OutBytesTotal = BytesTotal;

	return bResult;
}

bool USteamProUGC::GetItemInstallInfo(FPublishedFileID PublishedFileID, int32& OutSizeOnDisk, FString& OutFolder, int32& OutTimeStamp)
{
	LogVeryVerbose("");

	bool bResult = false;

	uint32 TimeStamp = 0;
	uint64 SizeOnDisk = 0;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		TArray<char> Path;
		Path.SetNum(256);

		bResult = GetUGC()->GetItemInstallInfo(PublishedFileID, &SizeOnDisk, Path.GetData(), 256, &TimeStamp);

		OutFolder = UTF8_TO_TCHAR(Path.GetData());
	}
#endif

	OutSizeOnDisk = SizeOnDisk;
	OutTimeStamp = TimeStamp;

	return bResult;
}

int32 USteamProUGC::GetItemState(FPublishedFileID PublishedFileID, TArray<ESteamItemState>& States)
{
	LogVeryVerbose("");

	int32 Result = 0;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		Result = GetUGC()->GetItemState(PublishedFileID);

		if (Result & k_EItemStateDownloading)
		{
			States.Add(ESteamItemState::Downloading);
		}

		if (Result & k_EItemStateDownloadPending)
		{
			States.Add(ESteamItemState::DownloadPending);
		}

		if (Result & k_EItemStateInstalled)
		{
			States.Add(ESteamItemState::Installed);
		}

		if (Result & k_EItemStateLegacyItem)
		{
			States.Add(ESteamItemState::LegacyItem);
		}

		if (Result & k_EItemStateNeedsUpdate)
		{
			States.Add(ESteamItemState::NeedsUpdate);
		}

		if (Result & k_EItemStateNone)
		{
			States.Add(ESteamItemState::None);
		}

		if (Result & k_EItemStateSubscribed)
		{
			States.Add(ESteamItemState::Subscribed);
		}
	}
#endif

	return Result;
}

ESteamItemUpdateStatus USteamProUGC::GetItemUpdateProgress(FUGCUpdateHandle Handle, int32& OutBytesProcessed, int32& OutBytesTotal)
{
	LogVeryVerbose("");

	ESteamItemUpdateStatus Result = ESteamItemUpdateStatus::Invalid;

	uint64 BytesProcessed = 0;
	uint64 BytesTotal = 0;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		Result = static_cast<ESteamItemUpdateStatus>(GetUGC()->GetItemUpdateProgress(Handle, &BytesProcessed, &BytesTotal));
	}
#endif

	OutBytesProcessed = BytesProcessed;
	OutBytesTotal = BytesTotal;

	return Result;
}

int32 USteamProUGC::GetNumSubscribedItems()
{
	LogVeryVerbose("");

	int32 Result = 0;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		Result = GetUGC()->GetNumSubscribedItems();
	}
#endif

	return Result;
}

bool USteamProUGC::GetQueryUGCAdditionalPreview(FUGCQueryHandle Handle, int32 Index, int32 PreviewIndex, FString& OutUrlOrVideoID, FString& OutOriginalFileName, ESteamItemPreviewType& OutPreviewType)
{
	LogVeryVerbose("");

	bool bResult = false;
	OutUrlOrVideoID = 0;
	OutOriginalFileName.Empty();
	OutPreviewType = ESteamItemPreviewType::ReservedMax;

#if WITH_STEAMCORE
	EItemPreviewType ItemPreviewType = k_EItemPreviewType_Image;

	if (GetUGC())
	{
		TArray<char> URLOrVideoID;
		TArray<char> OriginalFileName;

		URLOrVideoID.SetNum(256);
		OriginalFileName.SetNum(256);

		bResult = GetUGC()->GetQueryUGCAdditionalPreview(Handle, Index, PreviewIndex, URLOrVideoID.GetData(), URLOrVideoID.Num(), OriginalFileName.GetData(), OriginalFileName.Num(), &ItemPreviewType);

		if (bResult)
		{
			OutUrlOrVideoID = UTF8_TO_TCHAR(URLOrVideoID.GetData());
			OutOriginalFileName = UTF8_TO_TCHAR(OriginalFileName.GetData());
		}
	}

	OutPreviewType = static_cast<ESteamItemPreviewType>(ItemPreviewType);
#endif

	return bResult;
}

bool USteamProUGC::GetQueryUGCChildren(FUGCQueryHandle Handle, int32 Index, TArray<FPublishedFileID>& OutPublishedFileIDs, int32 MaxEntries)
{
	LogVeryVerbose("");

	bool bResult = false;
	OutPublishedFileIDs.Empty();

#if WITH_STEAMCORE
	if (GetUGC())
	{
		TArray<PublishedFileId_t> DataArray;
		DataArray.SetNum(MaxEntries);

		bResult = GetUGC()->GetQueryUGCChildren(Handle, Index, DataArray.GetData(), DataArray.Num());

		if (bResult)
		{
			for (int32 i = 0; i < MaxEntries; i++)
			{
				OutPublishedFileIDs.Add(DataArray[i]);
			}
		}
	}
#endif

	return bResult;
}

bool USteamProUGC::GetQueryUGCKeyValueTag(FUGCQueryHandle Handle, int32 Index, int32 KeyValueTagIndex, FString& OutKey, FString& OutValue)
{
	LogVeryVerbose("");

	bool bResult = false;
	OutKey.Empty();
	OutValue.Empty();

#if WITH_STEAMCORE
	if (GetUGC())
	{
		TArray<char> Key;
		TArray<char> Value;

		Key.SetNum(128);
		Value.SetNum(256);

		bResult = GetUGC()->GetQueryUGCKeyValueTag(Handle, Index, KeyValueTagIndex, Key.GetData(), Key.Num(), Value.GetData(), Value.Num());

		if (bResult)
		{
			OutKey = UTF8_TO_TCHAR(Key.GetData());
			OutValue = UTF8_TO_TCHAR(Value.GetData());
		}
	}
#endif

	return bResult;
}

int32 USteamProUGC::GetNumSupportedGameVersions(FUGCQueryHandle Handle, int32 Index)
{
	LogVerbose("");

	int32 Result = 0;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		Result = GetUGC()->GetNumSupportedGameVersions(Handle, Index);
	}
#endif

	return Result;
}

bool USteamProUGC::GetSupportedGameVersionData(FUGCQueryHandle Handle, int32 Index, int32 VersionIndex, FString& GameBranchMin, FString& GameBranchMax, int32 GameBranchSize)
{
	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		char pchGameBranchMin[512];
		char pchGameBranchMax[512];
		
		bResult = GetUGC()->GetSupportedGameVersionData(Handle, Index, VersionIndex, pchGameBranchMin, pchGameBranchMax, GameBranchSize);

		if (bResult)
		{
			GameBranchMin = UTF8_TO_TCHAR(pchGameBranchMin);
			GameBranchMax = UTF8_TO_TCHAR(pchGameBranchMax);
		}
	}
#endif
	
	return bResult;
}

bool USteamProUGC::SetRequiredGameVersions(FUGCUpdateHandle Handle, FString GameBranchMin, FString GameBranchMax)
{
	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetRequiredGameVersions(Handle,TCHAR_TO_UTF8(*GameBranchMin), TCHAR_TO_UTF8(*GameBranchMax));
	}
#endif
	
	return bResult;
}

bool USteamProUGC::SetAdminQuery(FUGCUpdateHandle Handle, bool bAdminQuery)
{
	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetAdminQuery(Handle, bAdminQuery);
	}
#endif
	
	return bResult;
}

bool USteamProUGC::GetQueryUGCMetadata(FUGCQueryHandle Handle, int32 Index, FString& OutMetaData, int32 MetadataSize)
{
	LogVeryVerbose("");

	bool bResult = false;
	OutMetaData.Empty();

#if WITH_STEAMCORE
	if (GetUGC())
	{
		TArray<char> DataArray;
		DataArray.SetNum(MetadataSize);

		bResult = GetUGC()->GetQueryUGCMetadata(Handle, Index, DataArray.GetData(), DataArray.Num());

		if (bResult)
		{
			OutMetaData = UTF8_TO_TCHAR(DataArray.GetData());
		}
	}
#endif

	return bResult;
}

int32 USteamProUGC::GetQueryUGCNumAdditionalPreviews(FUGCQueryHandle Handle, int32 Index)
{
	LogVeryVerbose("");

	int32 Result = 0;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		Result = GetUGC()->GetQueryUGCNumAdditionalPreviews(Handle, Index);
	}
#endif

	return Result;
}

int32 USteamProUGC::GetQueryUGCNumKeyValueTags(FUGCQueryHandle Handle, int32 Index)
{
	LogVeryVerbose("");

	int32 Result = 0;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		Result = GetUGC()->GetQueryUGCNumKeyValueTags(Handle, Index);
	}
#endif

	return Result;
}

bool USteamProUGC::GetQueryUGCPreviewURL(FUGCQueryHandle Handle, int32 Index, FString& OutUrl)
{
	LogVeryVerbose("");

	bool bResult = false;
	OutUrl.Empty();

#if WITH_STEAMCORE
	if (GetUGC())
	{
		TArray<char> DataArray;
		DataArray.SetNum(256);

		bResult = GetUGC()->GetQueryUGCPreviewURL(Handle, Index, DataArray.GetData(), DataArray.Num());

		if (bResult)
		{
			OutUrl = UTF8_TO_TCHAR(DataArray.GetData());
		}
	}
#endif

	return bResult;
}

bool USteamProUGC::GetQueryUGCResult(FUGCQueryHandle Handle, int32 Index, FSteamUGCDetails& OutDetails)
{
	LogVeryVerbose("");

	bool bResult = false;
	OutDetails = FSteamUGCDetails();

#if WITH_STEAMCORE
	if (GetUGC())
	{
		SteamUGCDetails_t Details;

		bResult = GetUGC()->GetQueryUGCResult(Handle, Index, &Details);

		if (bResult)
		{
			OutDetails = Details;
		}
	}
#endif

	return bResult;
}

int32 USteamProUGC::GetQueryUGCNumTags(FUGCQueryHandle Handle, int32 Index)
{
	LogVeryVerbose("");

	int32 Result = 0;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		Result = GetUGC()->GetQueryUGCNumTags(Handle, Index);
	}
#endif

	return Result;
}

bool USteamProUGC::GetQueryUGCTag(FUGCQueryHandle Handle, int32 Index, int32 IndexTag, FString& Value)
{
	LogVeryVerbose("");

	bool bResult = false;
	Value.Empty();

#if WITH_STEAMCORE
	if (GetUGC())
	{
		TArray<char> ValueArr;
		ValueArr.SetNum(256);

		bResult = GetUGC()->GetQueryUGCTag(Handle, Index, IndexTag, ValueArr.GetData(), ValueArr.Num());

		if (bResult)
		{
			Value.Append(UTF8_TO_TCHAR(ValueArr.GetData()));
		}
	}
#endif

	return bResult;
}

bool USteamProUGC::GetQueryUGCTagDisplayName(FUGCQueryHandle Handle, int32 Index, int32 IndexTag, FString& Value)
{
	LogVeryVerbose("");

	bool bResult = false;
	Value.Empty();

#if WITH_STEAMCORE
	if (GetUGC())
	{
		TArray<char> ValueArr;
		ValueArr.SetNum(256);

		bResult = GetUGC()->GetQueryUGCTagDisplayName(Handle, Index, IndexTag, ValueArr.GetData(), ValueArr.Num());

		if (bResult)
		{
			Value.Append(UTF8_TO_TCHAR(ValueArr.GetData()));
		}
	}
#endif

	return bResult;
}

bool USteamProUGC::GetQueryUGCStatistic(FUGCQueryHandle Handle, int32 Index, ESteamItemStatistic StatType, FString& OutStatValue)
{
	LogVeryVerbose("");

	bool bResult = false;
	uint64 StatValue = 0;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->GetQueryUGCStatistic(Handle, Index, static_cast<EItemStatistic>(StatType), &StatValue);
	}
#endif

	OutStatValue = LexToString(StatValue);

	return bResult;
}

int32 USteamProUGC::GetSubscribedItems(TArray<FPublishedFileID>& OutPublishedFileIDs, int32 MaxEntries)
{
	LogVeryVerbose("");

	int32 Result = 0;

	OutPublishedFileIDs.Empty();

#if WITH_STEAMCORE
	if (GetUGC())
	{
		TArray<PublishedFileId_t> DataArray;
		DataArray.SetNum(MaxEntries);

		Result = GetUGC()->GetSubscribedItems(DataArray.GetData(), DataArray.Num());

		for (int32 i = 0; i < MaxEntries; i++)
		{
			OutPublishedFileIDs.Add(DataArray[i]);
		}
	}
#endif

	return Result;
}

void USteamProUGC::GetUserItemVote(const FOnGetUserItemVote& Callback, FPublishedFileID PublishedFileID)
{
	LogVeryVerbose("");

#if WITH_STEAMCORE
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreProUGCGetUserItemVote* Task = new FOnlineAsyncTaskSteamCoreProUGCGetUserItemVote(Callback, PublishedFileID);
		QueueAsyncTask(Task);
	}
#endif
}

bool USteamProUGC::ReleaseQueryUGCRequest(FUGCQueryHandle Handle)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->ReleaseQueryUGCRequest(Handle);
	}
#endif

	return bResult;
}

void USteamProUGC::RemoveAppDependency(const FOnRemoveAppDependencyResult& Callback, FPublishedFileID PublishedFileID, int32 AppId)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreProUGCRemoveAppDependency* Task = new FOnlineAsyncTaskSteamCoreProUGCRemoveAppDependency(Callback, PublishedFileID, AppId);
		QueueAsyncTask(Task);
	}
#endif
}

void USteamProUGC::RemoveDependency(const FOnRemoveUGCDependencyResult& Callback, FPublishedFileID ParentPublishedFileID, FPublishedFileID ChildPublishedFileID)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreProUGCRemoveUGCDependency* Task = new FOnlineAsyncTaskSteamCoreProUGCRemoveUGCDependency(Callback, ParentPublishedFileID, ChildPublishedFileID);
		QueueAsyncTask(Task);
	}
#endif
}

void USteamProUGC::RemoveItemFromFavorites(const FOnRemoveItemFromFavorites& Callback, int32 AppId, FPublishedFileID PublishedFileID)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreProUGCRemoveItemFromFavorites* Task = new FOnlineAsyncTaskSteamCoreProUGCRemoveItemFromFavorites(Callback, AppId, PublishedFileID);
		QueueAsyncTask(Task);
	}
#endif
}

bool USteamProUGC::RemoveItemKeyValueTags(FUGCUpdateHandle Handle, FString Key)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->RemoveItemKeyValueTags(Handle, TCHAR_TO_UTF8(*Key));
	}
#endif

	return bResult;
}

bool USteamProUGC::RemoveItemPreview(FUGCUpdateHandle Handle, int32 Index)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->RemoveItemPreview(Handle, Index);
	}
#endif

	return bResult;
}

bool USteamProUGC::AddContentDescriptor(FUGCUpdateHandle Handle, ESteamUGCContentDescriptorID DescId)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->AddContentDescriptor(Handle, static_cast<EUGCContentDescriptorID>(DescId));
	}
#endif

	return bResult;
}

bool USteamProUGC::RemoveContentDescriptor(FUGCUpdateHandle Handle, ESteamUGCContentDescriptorID DescId)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->RemoveContentDescriptor(Handle, static_cast<EUGCContentDescriptorID>(DescId));
	}
#endif

	return bResult;
}

void USteamProUGC::SendQueryUGCRequest(const FOnSendQueryUGCRequest& Callback, FUGCQueryHandle Handle)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreProUGCSendQueryUGCRequest* Data = new FOnlineAsyncTaskSteamCoreProUGCSendQueryUGCRequest(Callback, Handle);
		QueueAsyncTask(Data);
	}
#endif
}

bool USteamProUGC::SetAllowCachedResponse(FUGCQueryHandle Handle, int32 MaxAgeSeconds)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetAllowCachedResponse(Handle, MaxAgeSeconds);
	}
#endif

	return bResult;
}

bool USteamProUGC::SetAllowLegacyUpload(FUGCUpdateHandle Handle, bool bAllowLegacyUpload)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetAllowLegacyUpload(Handle, bAllowLegacyUpload);
	}
#endif

	return bResult;
}

bool USteamProUGC::SetCloudFileNameFilter(FUGCQueryHandle Handle, FString MatchCloudFileName)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetCloudFileNameFilter(Handle, TCHAR_TO_UTF8(*MatchCloudFileName));
	}
#endif

	return bResult;
}

bool USteamProUGC::SetItemContent(FUGCUpdateHandle Handle, FString ContentFolder)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetItemContent(Handle, TCHAR_TO_UTF8(*ContentFolder));
	}
#endif

	return bResult;
}

bool USteamProUGC::SetItemDescription(FUGCUpdateHandle Handle, FString Description)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetItemDescription(Handle, TCHAR_TO_UTF8(*Description));
	}
#endif

	return bResult;
}

bool USteamProUGC::SetItemMetadata(FUGCUpdateHandle Handle, FString MetaData)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetItemMetadata(Handle, TCHAR_TO_UTF8(*MetaData));
	}
#endif

	return bResult;
}

bool USteamProUGC::SetItemPreview(FUGCUpdateHandle Handle, FString PreviewFile)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetItemPreview(Handle, TCHAR_TO_UTF8(*PreviewFile));
	}
#endif

	return bResult;
}

bool USteamProUGC::SetItemTags(FUGCUpdateHandle Handle, TArray<FString> Tags)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		TArray<char*> Strings;
		Strings.SetNum(Tags.Num());

		for (int i = 0; i < Tags.Num(); i++)
		{
			Strings[i] = new char[255];
			FCStringAnsi::Strncpy(Strings[i], TCHAR_TO_UTF8(*Tags[i]), 255);
		}

		SteamParamStringArray_t SteamParamStringArray;
		SteamParamStringArray.m_ppStrings = (const char**)Strings.GetData();
		SteamParamStringArray.m_nNumStrings = Strings.Num();

		bResult = GetUGC()->SetItemTags(Handle, &SteamParamStringArray);

		for (int i = 0; i < Strings.Num(); i++)
		{
			delete[] Strings[i];
		}
	}
#endif

	return bResult;
}

bool USteamProUGC::SetItemTitle(FUGCUpdateHandle Handle, FString Title)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetItemTitle(Handle, TCHAR_TO_UTF8(*Title));
	}
#endif

	return bResult;
}

bool USteamProUGC::SetItemUpdateLanguage(FUGCUpdateHandle Handle, FString Language)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetItemUpdateLanguage(Handle, TCHAR_TO_UTF8(*Language));
	}
#endif

	return bResult;
}

bool USteamProUGC::SetItemVisibility(FUGCUpdateHandle Handle, ESteamRemoteStoragePublishedFileVisibility Visibility)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetItemVisibility(Handle, static_cast<ERemoteStoragePublishedFileVisibility>(Visibility));
	}
#endif

	return bResult;
}

bool USteamProUGC::SetLanguage(FUGCQueryHandle Handle, FString Language)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetLanguage(Handle, TCHAR_TO_UTF8(*Language));
	}
#endif

	return bResult;
}

bool USteamProUGC::SetMatchAnyTag(FUGCQueryHandle Handle, bool bMatchAnyTag)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetMatchAnyTag(Handle, bMatchAnyTag);
	}
#endif

	return bResult;
}

bool USteamProUGC::SetRankedByTrendDays(FUGCQueryHandle Handle, int32 Days)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetRankedByTrendDays(Handle, Days);
	}
#endif

	return bResult;
}

bool USteamProUGC::SetReturnAdditionalPreviews(FUGCQueryHandle Handle, bool bReturnAdditionalPreviews)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetReturnAdditionalPreviews(Handle, bReturnAdditionalPreviews);
	}
#endif

	return bResult;
}

bool USteamProUGC::SetReturnChildren(FUGCQueryHandle Handle, bool bReturnChildren)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetReturnChildren(Handle, bReturnChildren);
	}
#endif

	return bResult;
}

bool USteamProUGC::SetReturnKeyValueTags(FUGCQueryHandle Handle, bool bReturnKeyValueTags)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetReturnKeyValueTags(Handle, bReturnKeyValueTags);
	}
#endif

	return bResult;
}

bool USteamProUGC::SetReturnLongDescription(FUGCQueryHandle Handle, bool bReturnLongDescription)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetReturnLongDescription(Handle, bReturnLongDescription);
	}
#endif

	return bResult;
}

bool USteamProUGC::SetReturnMetadata(FUGCQueryHandle Handle, bool bReturnMetadata)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetReturnMetadata(Handle, bReturnMetadata);
	}
#endif

	return bResult;
}

bool USteamProUGC::SetReturnOnlyIDs(FUGCQueryHandle Handle, bool bReturnOnlyIDs)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetReturnOnlyIDs(Handle, bReturnOnlyIDs);
	}
#endif

	return bResult;
}

bool USteamProUGC::SetReturnPlaytimeStats(FUGCQueryHandle Handle, int32 Days)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetReturnPlaytimeStats(Handle, Days);
	}
#endif

	return bResult;
}

bool USteamProUGC::SetReturnTotalOnly(FUGCQueryHandle Handle, bool bReturnTotalOnly)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetReturnTotalOnly(Handle, bReturnTotalOnly);
	}
#endif

	return bResult;
}

bool USteamProUGC::SetSearchText(FUGCQueryHandle Handle, FString SearchText)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->SetSearchText(Handle, TCHAR_TO_UTF8(*SearchText));
	}
#endif

	return bResult;
}

void USteamProUGC::SetUserItemVote(const FOnSetUserItemVote& Callback, FPublishedFileID PublishedFileID, bool bVoteUp)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreProUGCSetUserItemVote* Task = new FOnlineAsyncTaskSteamCoreProUGCSetUserItemVote(Callback, bVoteUp, PublishedFileID);
		QueueAsyncTask(Task);
	}
#endif
}

FUGCUpdateHandle USteamProUGC::StartItemUpdate(int32 ConsumerAppID, FPublishedFileID PublishedFileID)
{
	LogVerbose("");

#if WITH_STEAMCORE
	return GetUGC() ? FUGCUpdateHandle(GetUGC()->StartItemUpdate(ConsumerAppID, PublishedFileID)) : FUGCUpdateHandle();
#endif
	return FUGCUpdateHandle();
}

void USteamProUGC::StartPlaytimeTracking(const FOnStartPlaytimeTracking& Callback, TArray<FPublishedFileID> PublishedFileID)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreProUGCStartPlaytimeTracking* Task = new FOnlineAsyncTaskSteamCoreProUGCStartPlaytimeTracking(Callback, PublishedFileID);
		QueueAsyncTask(Task);
	}
#endif
}

void USteamProUGC::StopPlaytimeTracking(const FOnStopPlaytimeTracking& Callback, TArray<FPublishedFileID> PublishedFileIDs)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreProUGCStopPlaytimeTracking* Task = new FOnlineAsyncTaskSteamCoreProUGCStopPlaytimeTracking(Callback, PublishedFileIDs);
		QueueAsyncTask(Task);
	}
#endif
}

void USteamProUGC::StopPlaytimeTrackingForAllItems(const FOnStopPlaytimeTrackingForAllItems& Callback)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreProUGCStopPlaytimeTrackingForAllItems* Task = new FOnlineAsyncTaskSteamCoreProUGCStopPlaytimeTrackingForAllItems(Callback);
		QueueAsyncTask(Task);
	}
#endif
}

void USteamProUGC::SubmitItemUpdate(const FOnSubmitItemUpdate& Callback, FUGCUpdateHandle Handle, FString ChangeNote)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreProUGCSubmitItemUpdate* Task = new FOnlineAsyncTaskSteamCoreProUGCSubmitItemUpdate(Callback, Handle, ChangeNote);
		QueueAsyncTask(Task);
	}
#endif
}

void USteamProUGC::SubscribeItem(const FOnSubscribeItem& Callback, FPublishedFileID PublishedFileID)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreProUGCSubscribeItem* Task = new FOnlineAsyncTaskSteamCoreProUGCSubscribeItem(Callback, PublishedFileID);
		QueueAsyncTask(Task);
	}
#endif
}

void USteamProUGC::SuspendDownloads(bool bSuspend)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (GetUGC())
	{
		GetUGC()->SuspendDownloads(bSuspend);
	}
#endif
}

void USteamProUGC::UnsubscribeItem(const FOnUnsubscribeItem& Callback, FPublishedFileID PublishedFileID)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreProUGCUnsubscribeItem* Task = new FOnlineAsyncTaskSteamCoreProUGCUnsubscribeItem(Callback, PublishedFileID);
		QueueAsyncTask(Task);
	}
#endif
}

bool USteamProUGC::UpdateItemPreviewFile(FUGCUpdateHandle Handle, int32 Index, FString PreviewFile)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->UpdateItemPreviewFile(Handle, Index, TCHAR_TO_UTF8(*PreviewFile));
	}
#endif

	return bResult;
}

bool USteamProUGC::UpdateItemPreviewVideo(FUGCUpdateHandle Handle, int32 Index, FString PreviewVideo)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->UpdateItemPreviewVideo(Handle, Index, TCHAR_TO_UTF8(*PreviewVideo));
	}
#endif

	return bResult;
}

bool USteamProUGC::ShowWorkshopEULA()
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetUGC())
	{
		bResult = GetUGC()->ShowWorkshopEULA();
	}
#endif

	return bResult;
}

void USteamProUGC::GetWorkshopEULAStatus(const FOnGetWorkshopEULAStatus& Callback)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (GetUGC())
	{
		FOnlineAsyncTaskSteamCoreProUGCGetWorkshopEULAStatus* Task = new FOnlineAsyncTaskSteamCoreProUGCGetWorkshopEULAStatus(Callback);
		QueueAsyncTask(Task);
	}
#endif
}

int32 USteamProUGC::GetUserContentDescriptorPreferences(TArray<ESteamUGCContentDescriptorID> Descriptors, int32 MaxEntries)
{
	LogVeryVerbose("");

	int32 Result = 0;

#if WITH_STEAMCORE

	TArray<EUGCContentDescriptorID> UGCContentDescriptorID;

	for (int32 i=0; i<Descriptors.Num(); i++)
	{
		UGCContentDescriptorID.Add(static_cast<EUGCContentDescriptorID>(Descriptors[i]));
	}

	if (GetUGC())
	{
		Result = GetUGC()->GetUserContentDescriptorPreferences(UGCContentDescriptorID.GetData(), MaxEntries);
	}
#endif

	return Result;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

#if WITH_STEAMCORE
void USteamProUGC::OnItemInstalled(ItemInstalled_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		ItemInstalled.Broadcast(Data);
	});
}

void USteamProUGC::OnDownloadItemResult(DownloadItemResult_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		DownloadItemResult.Broadcast(Data);
	});
}

void USteamProUGC::OnUserSubscribedItemsListChanged(UserSubscribedItemsListChanged_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		UserSubscribedItemsListChanged.Broadcast(Data);
	});
}

void USteamProUGC::OnWorkshopEULAStatus(WorkshopEULAStatus_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		WorkshopEULAStatus.Broadcast(Data);
	});
}
#endif
