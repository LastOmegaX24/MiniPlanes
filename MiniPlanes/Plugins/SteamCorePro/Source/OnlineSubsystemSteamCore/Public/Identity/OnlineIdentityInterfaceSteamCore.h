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
#include "Interfaces/OnlineIdentityInterface.h"
#include "OnlineSubsystemSteamCorePackage.h"

class FOnlineSubsystemSteamCore;
class ISteamUser;
class ISteamFriends;

#if WITH_STEAMCORE
class ONLINESUBSYSTEMSTEAMCORE_API FOnlineIdentitySteamCore : public IOnlineIdentity
{
PACKAGE_SCOPE:
	FOnlineIdentitySteamCore(FOnlineSubsystemSteamCore* InSubsystem);

public:
	virtual ~FOnlineIdentitySteamCore() override
	{
	};

	// IOnlineIdentity

	virtual bool Login(int32 LocalUserNum, const FOnlineAccountCredentials& AccountCredentials) override;
	virtual bool Logout(int32 LocalUserNum) override;
	virtual bool AutoLogin(int32 LocalUserNum) override;
	virtual TSharedPtr<FUserOnlineAccount> GetUserAccount(const FUniqueNetId& UserId) const override;
	virtual TArray<TSharedPtr<FUserOnlineAccount>> GetAllUserAccounts() const override;
	virtual FUniqueNetIdPtr GetUniquePlayerId(int32 LocalUserNum) const override;
	virtual FUniqueNetIdPtr CreateUniquePlayerId(uint8* Bytes, int32 Size) override;
	virtual FUniqueNetIdPtr CreateUniquePlayerId(const FString& Str) override;
	virtual ELoginStatus::Type GetLoginStatus(int32 LocalUserNum) const override;
	virtual ELoginStatus::Type GetLoginStatus(const FUniqueNetId& UserId) const override;
	virtual FString GetPlayerNickname(int32 LocalUserNum) const override;
	virtual FString GetPlayerNickname(const FUniqueNetId& UserId) const override;
	virtual FString GetAuthToken(int32 LocalUserNum) const override;
	virtual void RevokeAuthToken(const FUniqueNetId& UserId, const FOnRevokeAuthTokenCompleteDelegate& Delegate) override;
#if UE_VERSION_OLDER_THAN(5,4,0) 
	virtual void GetUserPrivilege(const FUniqueNetId& UserId, EUserPrivileges::Type Privilege, const FOnGetUserPrivilegeCompleteDelegate& Delegate) override;
#else
	virtual void GetUserPrivilege(const FUniqueNetId& LocalUserId, EUserPrivileges::Type Privilege, const FOnGetUserPrivilegeCompleteDelegate& Delegate, EShowPrivilegeResolveUI ShowResolveUI = EShowPrivilegeResolveUI::Default) override;
#endif
	virtual FPlatformUserId GetPlatformUserIdFromUniqueNetId(const FUniqueNetId& UniqueNetId) const override;
	virtual FString GetAuthType() const override;
	virtual void GetLinkedAccountAuthToken(int32 LocalUserNum, const FOnGetLinkedAccountAuthTokenCompleteDelegate& Delegate) const override;

private:
	ISteamUser* m_SteamUserPtr;
	ISteamFriends* m_SteamFriendsPtr;
	FOnlineSubsystemSteamCore* m_SteamSubsystem;
};

typedef TSharedPtr<FOnlineIdentitySteamCore, ESPMode::ThreadSafe> FOnlineIdentitySteamCorePtr;
#endif
