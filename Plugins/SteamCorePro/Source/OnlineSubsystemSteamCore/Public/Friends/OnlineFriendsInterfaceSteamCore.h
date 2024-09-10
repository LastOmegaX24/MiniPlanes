/**
* Copyright (C) 2017-2024 eelDev AB
*
*/

#pragma once

#include "CoreMinimal.h"
#if UE_VERSION_OLDER_THAN(5,0,0)
#include "UObject/CoreOnline.h"
#else
#include "Online/CoreOnline.h"
#endif
#include "OnlineSubsystemTypes.h"
#include "OnlineSubsystemSteamCorePrivate.h"
#include "OnlineFriendsTypesSteamCore.h"
#include "Interfaces/OnlineFriendsInterface.h"
#include "OnlineSubsystemSteamCorePackage.h"

class FOnlineSubsystemSteamCore;

#if WITH_STEAMCORE
class ONLINESUBSYSTEMSTEAMCORE_API FOnlineFriendsSteamCore : public IOnlineFriends
{
	friend class FOnlineAsyncTaskSteamCoreReadFriendsList;
	
	struct FSteamFriendsList
	{
		TArray<TSharedRef<FOnlineFriendSteamCore>> m_Friends;
	};

PACKAGE_SCOPE:
	FOnlineFriendsSteamCore();

public:
	FOnlineFriendsSteamCore(FOnlineSubsystemSteamCore* InSteamSubsystem);

	virtual ~FOnlineFriendsSteamCore() override
	{
	};

	// IOnlineFriends

	virtual bool ReadFriendsList(int32 LocalUserNum, const FString& ListName, const FOnReadFriendsListComplete& Delegate = FOnReadFriendsListComplete()) override;
	virtual bool DeleteFriendsList(int32 LocalUserNum, const FString& ListName, const FOnDeleteFriendsListComplete& Delegate = FOnDeleteFriendsListComplete()) override;
	virtual bool SendInvite(int32 LocalUserNum, const FUniqueNetId& FriendId, const FString& ListName, const FOnSendInviteComplete& Delegate = FOnSendInviteComplete()) override;
	virtual bool AcceptInvite(int32 LocalUserNum, const FUniqueNetId& FriendId, const FString& ListName, const FOnAcceptInviteComplete& Delegate = FOnAcceptInviteComplete()) override;
	virtual bool RejectInvite(int32 LocalUserNum, const FUniqueNetId& FriendId, const FString& ListName) override;
	virtual void SetFriendAlias(int32 LocalUserNum, const FUniqueNetId& FriendId, const FString& ListName, const FString& Alias, const FOnSetFriendAliasComplete& Delegate = FOnSetFriendAliasComplete()) override;
	virtual void DeleteFriendAlias(int32 LocalUserNum, const FUniqueNetId& FriendId, const FString& ListName, const FOnDeleteFriendAliasComplete& Delegate = FOnDeleteFriendAliasComplete()) override;
	virtual bool DeleteFriend(int32 LocalUserNum, const FUniqueNetId& FriendId, const FString& ListName) override;
	virtual bool GetFriendsList(int32 LocalUserNum, const FString& ListName, TArray<TSharedRef<FOnlineFriend>>& OutFriends) override;
	virtual TSharedPtr<FOnlineFriend> GetFriend(int32 LocalUserNum, const FUniqueNetId& FriendId, const FString& ListName) override;
	virtual bool IsFriend(int32 LocalUserNum, const FUniqueNetId& FriendId, const FString& ListName) override;
	virtual bool QueryRecentPlayers(const FUniqueNetId& UserId, const FString& Namespace) override;
	virtual bool GetRecentPlayers(const FUniqueNetId& UserId, const FString& Namespace, TArray<TSharedRef<FOnlineRecentPlayer>>& OutRecentPlayers) override;
	virtual void DumpRecentPlayers() const override;
	virtual bool BlockPlayer(int32 LocalUserNum, const FUniqueNetId& PlayerId) override;
	virtual bool UnblockPlayer(int32 LocalUserNum, const FUniqueNetId& PlayerId) override;
	virtual bool QueryBlockedPlayers(const FUniqueNetId& UserId) override;
	virtual bool GetBlockedPlayers(const FUniqueNetId& UserId, TArray<TSharedRef<FOnlineBlockedPlayer>>& OutBlockedPlayers) override;
	virtual void DumpBlockedPlayers() const override;

private:
	FOnlineSubsystemSteamCore* m_SteamSubsystem;
	ISteamUser* m_SteamUserPtr;
	ISteamFriends* m_SteamFriendsPtr;
	TMap<int32, FSteamFriendsList> m_FriendsLists;
};

typedef TSharedPtr<FOnlineFriendsSteamCore, ESPMode::ThreadSafe> FOnlineFriendsSteamCorePtr;

#endif
