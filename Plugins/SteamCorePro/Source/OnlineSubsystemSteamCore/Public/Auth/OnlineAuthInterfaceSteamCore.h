/**
* Copyright (C) 2017-2024 eelDev AB
*
*/

#pragma once

#include "CoreMinimal.h"
#include "Auth/OnlineAuthHandlerTypesSteamCore.h"
#include "OnlineSubsystemSteamCore.h"
#include "OnlineSubsystemSteamCorePackage.h"

#if WITH_STEAMCORE
class ONLINESUBSYSTEMSTEAMCORE_API FOnlineAuthSteamCore
{
PACKAGE_SCOPE:
	FOnlineAuthSteamCore(FOnlineSubsystemSteamCore* InSubsystem, FOnlineAuthSteamCoreUtilsPtr InAuthUtils);

	struct FSteamAuthUser
	{
		FSteamAuthUser()
			: m_Status(ESteamAuthStatus::None)
		{
		}

		void SetKey(const FString& NewKey);

		FString m_RecvTicket;
		ESteamAuthStatus m_Status;
	};

	typedef TSharedPtr<FSteamAuthUser, ESPMode::NotThreadSafe> SharedAuthUserSteamPtr;

	SharedAuthUserSteamPtr GetUser(const FUniqueNetId& InUserId);
	SharedAuthUserSteamPtr GetOrCreateUser(const FUniqueNetId& InUserId);

	bool AuthenticateUser(const FUniqueNetId& InUserId);
	void EndAuthentication(const FUniqueNetId& InUserId) const;
	void MarkPlayerForKick(const FUniqueNetId& InUserId);
	void RevokeTicket(const uint32& Handle);
	void RevokeAllTickets();
	void RemoveUser(const FUniqueNetId& TargetUser);

	FString GetAuthTicket(uint32& AuthTokenHandle);

	bool Tick(float DeltaTime);
	bool Exec(const TCHAR* Cmd);

	void OnAuthResult(const FUniqueNetId& TargetId, int32 Response);
	void ExecuteResultDelegate(const FUniqueNetId& TargetId, bool bWasSuccessful, ESteamAuthResponseCode ResponseCode) const;

	void SetServerSteamId(uint64 Data);

private:
	typedef TUniqueNetIdMap<SharedAuthUserSteamPtr> m_SteamAuthentications;
	m_SteamAuthentications m_AuthUsers;
	TArray<uint32> m_SteamTicketHandles;

	FORCEINLINE bool IsServer() const
	{
		return m_SteamSubsystem != nullptr && m_SteamSubsystem->IsServer();
	}

	bool KickPlayer(const FUniqueNetId& InUserId, bool bSuppressFailure);

	FOnlineAuthSteamCore();

	ISteamUser* m_SteamUserPtr;
	ISteamGameServer* m_SteamServerPtr;
	CSteamID m_ServerSteamId;
	FOnlineSubsystemSteamCore* m_SteamSubsystem;
	FOnlineAuthSteamCoreUtilsPtr m_AuthUtils;
	bool m_bEnabled;

PACKAGE_SCOPE:
	// Send out invalid keys
	bool m_bBadKey;
	// Always send out the same key
	bool m_bReuseKey;
	// Always make the bit writers have errors
	bool m_bBadWrite;
	// Drop all packets
	bool m_bDropAll;
	// Randomly drop packets.
	bool m_bRandomDrop;
	// Client never sends their key.
	bool m_bNeverSendKey;
	// Always send invalid steam ids.
	bool m_bSendBadId;

	bool IsSessionAuthEnabled() const { return m_bEnabled; }

public:
	virtual ~FOnlineAuthSteamCore();
	static uint32 GetMaxTicketSizeInBytes();
};
#endif
