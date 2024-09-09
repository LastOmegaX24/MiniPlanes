/**
* Copyright (C) 2017-2024 eelDev AB
*
*/

#pragma once

#include "CoreMinimal.h"
#include "IpConnection.h"
#include "SteamCoreNetConnection.generated.h"

UCLASS(transient, config=Engine)
class USteamCoreNetConnection : public UIpConnection
{
	GENERATED_UCLASS_BODY()
	//~ Begin UIpConnection Interface
	virtual void InitRemoteConnection(class UNetDriver* InDriver, class FSocket* InSocket, const FURL& InURL, const class FInternetAddr& InRemoteAddr, EConnectionState InState, int32 InMaxPacket = 0, int32 InPacketOverhead = 0) override;
	virtual void InitLocalConnection(class UNetDriver* InDriver, class FSocket* InSocket, const FURL& InURL, EConnectionState InState, int32 InMaxPacket = 0, int32 InPacketOverhead = 0) override;
	virtual void CleanUp() override;
	//~ End UIpConnection Interface

	UPROPERTY()
	bool m_bIsPassthrough;

	friend class FSocketSubsystemSteamCore;
};
