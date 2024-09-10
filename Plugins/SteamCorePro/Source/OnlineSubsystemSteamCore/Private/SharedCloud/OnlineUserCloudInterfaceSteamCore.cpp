/**
* Copyright (C) 2017-2024 eelDev AB
*
*/

#include "SharedCloud/OnlineUserCloudInterfaceSteamCore.h"
#include "SharedCloud/OnlineCloudTypesSteamCore.h"
#include "SharedCloud/OnlineSharedCloudAsyncTasksSteamCore.h"
#include "OnlineSubsystemSteamCorePrivatePCH.h"

#if WITH_STEAMCORE

FOnlineUserCloudSteamCore::~FOnlineUserCloudSteamCore()
{
	if (m_SteamSubsystem)
	{
		m_SteamSubsystem->ClearUserCloudFiles();
	}
}

bool FOnlineUserCloudSteamCore::GetFileContents(const FUniqueNetId& UserId, const FString& FileName, TArray<uint8>& FileContents)
{
	FScopeLock ScopeLock(&m_SteamSubsystem->m_UserCloudDataLock);
	if (FSteamUserCloudData* UserCloudData = m_SteamSubsystem->GetUserCloudEntry(UserId))
	{
		const FCloudFile* SteamCloudFile = UserCloudData->GetFileData(FileName);
		if (SteamCloudFile && SteamCloudFile->AsyncState == EOnlineAsyncTaskState::Done && SteamCloudFile->Data.Num() > 0)
		{
			FileContents = SteamCloudFile->Data;
			return true;
		}
	}

	return false;
}

bool FOnlineUserCloudSteamCore::ClearFiles(const FUniqueNetId& UserId)
{
	LogVerbose("");
	FScopeLock ScopeLock(&m_SteamSubsystem->m_UserCloudDataLock);
	if (FSteamUserCloudData* UserCloudData = m_SteamSubsystem->GetUserCloudEntry(UserId))
	{
		return UserCloudData->ClearFiles();
	}

	return true;
}

bool FOnlineUserCloudSteamCore::ClearFile(const FUniqueNetId& UserId, const FString& FileName)
{
	LogVerbose("");
	FScopeLock ScopeLock(&m_SteamSubsystem->m_UserCloudDataLock);
	if (FSteamUserCloudData* UserCloudData = m_SteamSubsystem->GetUserCloudEntry(UserId))
	{
		return UserCloudData->ClearFileData(FileName);
	}

	return true;
}

void FOnlineUserCloudSteamCore::EnumerateUserFiles(const FUniqueNetId& UserId)
{
	LogVerbose("");
	m_SteamSubsystem->QueueAsyncTask(new FOnlineAsyncTaskSteamCoreEnumerateUserFiles(m_SteamSubsystem, FUniqueNetIdSteam::Cast(UserId)));
}

void FOnlineUserCloudSteamCore::GetUserFileList(const FUniqueNetId& UserId, TArray<FCloudFileHeader>& UserFiles)
{
	FScopeLock ScopeLock(&m_SteamSubsystem->m_UserCloudDataLock);
	const FSteamUserCloudData* UserMetadata = m_SteamSubsystem->GetUserCloudEntry(UserId);
	UserFiles = UserMetadata->m_CloudMetadata;
}

bool FOnlineUserCloudSteamCore::ReadUserFile(const FUniqueNetId& UserId, const FString& FileName)
{
	LogVerbose("");
	FScopeLock ScopeLock(&m_SteamSubsystem->m_UserCloudDataLock);
	FSteamUserCloudData* UserCloud = m_SteamSubsystem->GetUserCloudEntry(UserId);
	if (UserCloud && FileName.Len() > 0)
	{
		FCloudFile* UserCloudFile = UserCloud->GetFileData(FileName, true);
		UserCloudFile->AsyncState = EOnlineAsyncTaskState::InProgress;
		m_SteamSubsystem->QueueAsyncTask(new FOnlineAsyncTaskSteamCoreReadUserFile(m_SteamSubsystem, FUniqueNetIdSteam::Cast(UserId), FileName));
		return true;
	}

	return false;
}

bool FOnlineUserCloudSteamCore::WriteUserFile(const FUniqueNetId& UserId, const FString& FileName, TArray<uint8>& FileContents, bool bCompressBeforeUpload)
{
	LogVerbose("");
	FScopeLock ScopeLock(&m_SteamSubsystem->m_UserCloudDataLock);
	FSteamUserCloudData* UserCloud = m_SteamSubsystem->GetUserCloudEntry(UserId);
	if (UserCloud && FileName.Len() > 0)
	{
		FCloudFile* UserCloudFile = UserCloud->GetFileData(FileName, true);
		UserCloudFile->AsyncState = EOnlineAsyncTaskState::InProgress;
		m_SteamSubsystem->QueueAsyncTask(new FOnlineAsyncTaskSteamCoreWriteUserFile(m_SteamSubsystem, FUniqueNetIdSteam::Cast(UserId), FileName, FileContents));
		return true;
	}

	return false;
}

void FOnlineUserCloudSteamCore::CancelWriteUserFile(const FUniqueNetId& UserId, const FString& FileName)
{
	LogVerbose("");
}


bool FOnlineUserCloudSteamCore::DeleteUserFile(const FUniqueNetId& UserId, const FString& FileName, bool bShouldCloudDelete, bool bShouldLocallyDelete)
{
	LogVerbose("");
	m_SteamSubsystem->QueueAsyncTask(new FOnlineAsyncTaskSteamCoreDeleteUserFile(m_SteamSubsystem, FUniqueNetIdSteam::Cast(UserId), FileName, bShouldCloudDelete, bShouldLocallyDelete));
	return true;
}

bool FOnlineUserCloudSteamCore::RequestUsageInfo(const FUniqueNetId& UserId)
{
	LogVerbose("");
	return false;
}

void FOnlineUserCloudSteamCore::DumpCloudState(const FUniqueNetId& UserId)
{
	LogVerbose("");
	uint64 TotalBytes, TotalAvailable;
	
	if (SteamRemoteStorage()->GetQuota(&TotalBytes, &TotalAvailable) == false)
	{
		TotalBytes = TotalAvailable = 0;
	}

	LogVerbose("Steam Disk Quota: %llu / %llu", TotalAvailable, TotalBytes);
	LogVerbose("Game does %shave cloud storage enabled.", SteamRemoteStorage()->IsCloudEnabledForApp() ? TEXT("") : TEXT("NOT "));
	LogVerbose("User does %shave cloud storage enabled.", SteamRemoteStorage()->IsCloudEnabledForAccount() ? TEXT("") : TEXT("NOT "));
}

void FOnlineUserCloudSteamCore::DumpCloudFileState(const FUniqueNetId& UserId, const FString& FileName)
{
	LogVerbose("");
	if (FileName.Len() > 0)
	{
		LogVerbose("Cloud File State file %s:", *FileName);
		{
			FScopeLock ScopeLock(&m_SteamSubsystem->m_UserCloudDataLock);
			FSteamUserCloudData* UserCloud = m_SteamSubsystem->GetUserCloudEntry(UserId);
			if (const FCloudFileHeader* FileMetadata = UserCloud->GetFileMetadata(FileName))
			{
				LogVerbose("\tMeta: FileName:%s DLName:%s FileSize:%d Hash:%s", *FileMetadata->FileName, *FileMetadata->DLName, FileMetadata->FileSize, *FileMetadata->Hash);
			}
			else
			{
				LogVerbose("\tNo metadata found!");
			}

			if (const FCloudFile* FileData = UserCloud->GetFileData(FileName))
			{
				LogVerbose("\tFileCache: FileName:%s State:%s CacheSize:%d", *FileData->FileName, EOnlineAsyncTaskState::ToString(FileData->AsyncState), FileData->Data.Num());
			}
			else
			{
				LogVerbose("\tNo cache entry found!");
			}
		}

		const int32 FileSize = SteamRemoteStorage()->GetFileSize(TCHAR_TO_UTF8(*FileName));

		LogVerbose("\tSteam: FileName:%s Size:%d Exists:%s Persistent:%s", *FileName, FileSize, SteamRemoteStorage()->FileExists(TCHAR_TO_UTF8(*FileName)) ? TEXT("Y") : TEXT("N"), SteamRemoteStorage()->FilePersisted(TCHAR_TO_UTF8(*FileName)) ? TEXT("Y") : TEXT("N"));
	}
}
#endif