/**
* Copyright (C) 2017-2024 eelDev AB
*
* Official SteamCorePro Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "LatentActions.h"
#include "SteamCoreSharedTypes.h"
#include "TextureResource.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Sound/SoundWaveProcedural.h"
#include "SteamCorePro/SteamTypes.h"
#include "SteamCorePro/SteamCoreProAsync.h"
#include "SteamInventory/SteamInventoryTypes.h"
#include "Misc/EngineVersionComparison.h"
#include "SteamMatchmakingServers/SteamMatchmakingServersTypes.h"
#include "Engine/Texture2D.h"
#include "SteamUtilities.generated.h"

class UServerFilter;

struct FLatentActionInfo;

UENUM(BlueprintType)
enum EFriendListType
{
	/** default friends list */
	Default,
	/** online players friends list */
	OnlinePlayers,
	/** list of players running the same title/game */
	InGamePlayers,
	/** list of players running the same title/game and in a session that has started */
	InGameAndSessionPlayers,
};

struct FReadFriendListLatent : public FPendingLatentAction
{
public:
	FReadFriendListLatent(const FLatentActionInfo& LatentInfo, EFriendListType FriendListType);
	virtual ~FReadFriendListLatent() override;

	virtual void UpdateOperation(FLatentResponse& Response) override;

#if WITH_EDITOR
	// Returns a human readable description of the latent operation's current state
	virtual FString GetDescription() const override;
#endif

private:
	FName m_ExecutionFunction;
	int32 m_OutputLink;
	FWeakObjectPtr m_CallbackTarget;
	bool bUpdatedFriendsList;
	bool bRequestedFriendsList;
	EFriendListType m_FriendListType;
};

DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnSteamMessage, ESteamMessageType, Type, const FString&, Message);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnHTTPResponse, const FString&, Response);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnControllerChangedCallback, bool, bIsConnected, int32, UserId);
DECLARE_DYNAMIC_DELEGATE_FourParams(FOnSessionUserInviteAcceptedCallback, bool, bWasSuccessful, int32, LocalPlayerNum, FString, InvitedBy, const FBlueprintSessionResult&, Session);
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnSessionUserInviteRecievedCallback, const FBlueprintSessionResult&, InviteResult);

UCLASS() 
class STEAMCOREPRO_API USteamCoreProVoice : public USoundWaveProcedural
{
	GENERATED_BODY()
public:
	USteamCoreProVoice(const FObjectInitializer& ObjectInitializer);
public:
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities", meta = (DeprecatedFunction))
	void AddAudioBuffer(const TArray<uint8>& Buffer);

	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities", meta = (DeprecatedFunction))
	static void DestroySteamCoreProVoice(USteamCoreProVoice* OBJ);

	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities", meta = (DeprecatedFunction))
	static USteamCoreProVoice* ConstructSteamCoreProVoice(int32 AudioSampleRate = 24000);
};


// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreProAsyncActionListenForControllerChange
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCOREPRO_API USteamCoreProAsyncActionListenForControllerChange : public USteamCoreProAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FOnControllerChangedCallback OnControllerChanged;
public:
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"), Category = "SteamCore|Utilities")
	static USteamCoreProAsyncActionListenForControllerChange* ListenForControllerChange(UObject* WorldContextObject);
public:
	UFUNCTION()
	void HandleCallback(bool bIsConnected, int32 PlatformUserId, int32 UserId);

	virtual void Activate() override;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam Utilities Class
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

static FORCEINLINE UTexture2D* GetSteamTexture(const int ImageData)
{
	UTexture2D* Texture = nullptr;

#if WITH_STEAMCORE
	uint32 Width = 0;
	uint32 Height = 0;

	SteamUtils()->GetImageSize(ImageData, &Width, &Height);

	if (Width > 0 && Height > 0)
	{
		Texture = UTexture2D::CreateTransient(Width, Height, PF_R8G8B8A8);

		uint8* RGBA = new uint8[Width * Height * 4];

		SteamUtils()->GetImageRGBA(ImageData, RGBA, 4 * Height * Width);

#if UE_VERSION_OLDER_THAN(5,0,0)
		uint8* MipData = static_cast<uint8*>(Texture->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE));
#else
		uint8* MipData = static_cast<uint8*>(Texture->GetPlatformData()->Mips[0].BulkData.Lock(LOCK_READ_WRITE));
#endif
		FMemory::Memcpy(MipData, RGBA, Height * Width * 4);

#if UE_VERSION_OLDER_THAN(5,0,0)
		Texture->PlatformData->Mips[0].BulkData.Unlock();
#else
		Texture->GetPlatformData()->Mips[0].BulkData.Unlock();
#endif
		Texture->NeverStream = true;
		Texture->UpdateResource();

		delete[] RGBA;
	}
#endif
	
	return Texture;
}

UENUM(BlueprintType)
enum class ESteamCoreProValid : uint8
{
	Valid,
	NotValid
};

UENUM(BlueprintType)
enum class ESteamCoreProIdentical : uint8
{
	Identical,
	NotIdentical
};

UCLASS(abstract)
class STEAMCOREPRO_API USteamUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Native Make Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeMakeFunc))
	static FSteamItemInstanceID MakeSteamItemInstanceID(int64 Value);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeMakeFunc))
	static FSteamID MakeSteamID(FString Value);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeMakeFunc))
	static FSteamGameID MakeSteamGameID(FString Value);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeMakeFunc))
	static FPublishedFileID MakePublishedFileID(FString Value);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeMakeFunc))
	static FSteamUGCHandle MakeUGCHandle(FString Value);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeMakeFunc))
	static FSteamInventoryUpdateHandle MakeInventoryUpdateHandle(FString Value);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeMakeFunc))
	static FSteamTicketHandle MakeTicketHandle(FString Value);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeMakeFunc))
	static FSteamSessionSetting MakeString(const FString Value)
	{
		return FSteamSessionSetting(Value);
	};

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeMakeFunc))
	static FSteamSessionSetting MakeInteger(const int32 Value)
	{
		return FSteamSessionSetting(Value);
	};

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeMakeFunc))
	static FSteamSessionSearchSetting MakeSearchString(const FString Value)
	{
		return FSteamSessionSearchSetting(Value);
	};

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeMakeFunc))
	static FSteamSessionSearchSetting MakeSearchInteger(const ESteamComparisonOp ComparisonOperator, const int32 Value)
	{
		return FSteamSessionSearchSetting(ComparisonOperator, Value);
	};

	/*
	* Function for getting a Integer attribute from session settings
	* the function will return false if the string was not found or is not a integer
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities")
	static bool GetInteger(FSteamSessionSetting Settings, FString& Key, int32& OutValue)
	{
		Key.Empty();

		if (Settings.m_Data.IsType<int32>())
		{
			Key = Settings.m_Key;
			OutValue = Settings.m_Data.Get<int32>();

			return true;
		}

		return false;
	};

	/*
	* Function for getting a String attribute from session settings
	* the function will return false if the string was not found or is not a string
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities")
	static bool GetString(FSteamSessionSetting Settings, FString& Key, FString& OutValue)
	{
		Key.Empty();

		if (Settings.m_Data.IsType<FString>())
		{
			Key = Settings.m_Key;
			OutValue = Settings.m_Data.Get<FString>();

			return true;
		}

		return false; 
	};

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities")
		static ESteamAttributeType GetType(FSteamSessionSetting Settings)
	{
		ESteamAttributeType Result = ESteamAttributeType::NOT_SET;

		if (Settings.m_Data.IsType<int32>())
		{
			Result = ESteamAttributeType::INTEGER;
		}
		else if (Settings.m_Data.IsType<FString>())
		{
			Result = ESteamAttributeType::STRING;
		}

		return Result;
	};

	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Native Break Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeBreakFunc))
	static int64 BreakSteamItemInstanceID(FSteamItemInstanceID SteamItemInstanceID);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeBreakFunc))
	static FString BreakSteamID(FSteamID SteamID);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeBreakFunc))
	static FString BreakSteamGameID(FSteamGameID SteamID);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeBreakFunc))
	static FString BreakPublishedFileID(FPublishedFileID FileID);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeBreakFunc))
	static FString BreakUGCHandle(FSteamUGCHandle Handle);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeBreakFunc))
	static FString BreakInventoryUpdateHandle(FSteamInventoryUpdateHandle Handle);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeBreakFunc))
	static FString BreakTicketHandle(FSteamTicketHandle Handle);

	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Is Valid
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities")
	static bool IsValid(FSteamID SteamID);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (DisplayName = "Is Valid"))
	static bool IsPublishedFileIDValid(FPublishedFileID PublishedFileId);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Valid (Exec)", ExpandEnumAsExecs = "Result"), Category = "SteamCore|Utilities")
	static void IsPublishedFileIDValid_Exec(const FPublishedFileID Handle, ESteamCoreProValid& Result) { Result = Handle.IsValid() ? ESteamCoreProValid::Valid : ESteamCoreProValid::NotValid; }

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Valid (Exec)", ExpandEnumAsExecs = "Result"), Category = "SteamCore|Utilities")
	static void IsSteamIDValid_Exec(const FSteamID SteamID, ESteamCoreProValid& Result)
	{
#if WITH_STEAMCORE
		Result = SteamID.IsValid() ? ESteamCoreProValid::Valid : ESteamCoreProValid::NotValid;
#endif
	}

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Is Valid"), Category = "SteamCore|Utilities")
	static bool IsGameIDValid(const FSteamGameID GameID)
	{
#if WITH_STEAMCORE
		return GameID.IsValid();
#else
		return false;
#endif
	}

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Valid (Exec)", ExpandEnumAsExecs = "Result"), Category = "SteamCore|Utilities")
	static void IsGameIDValid_Exec(const FSteamGameID GameID, ESteamCoreProValid& Result)
	{
#if WITH_STEAMCORE
		Result = GameID.IsValid() ? ESteamCoreProValid::Valid : ESteamCoreProValid::NotValid;
#endif
	}

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Is Valid"), Category = "SteamCore|Utilities")
	static bool IsUGCHandleValid(const FSteamUGCHandle Handle)
	{
#if WITH_STEAMCORE
		return Handle.IsValid();
#else
		return false;
#endif
	}

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Valid (Exec)", ExpandEnumAsExecs = "Result"), Category = "SteamCore|Utilities")
	static void IsUGCHandleValid_Exec(const FSteamUGCHandle Handle, ESteamCoreProValid& Result)
	{
#if WITH_STEAMCORE
		Result = Handle.IsValid() ? ESteamCoreProValid::Valid : ESteamCoreProValid::NotValid;
#endif
	}

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Is Valid"), Category = "SteamCore|Utilities")
	static bool IsSteamTicketHandleValid(const FSteamTicketHandle Handle)
	{
#if WITH_STEAMCORE
		return Handle.IsValid();
#else
		return false;
#endif
	}

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Valid (Exec)", ExpandEnumAsExecs = "Result"), Category = "SteamCore|Utilities")
	static void IsSteamTicketHandleValid_Exec(const FSteamTicketHandle Handle, ESteamCoreProValid& Result)
	{
#if WITH_STEAMCORE
		Result = Handle.IsValid() ? ESteamCoreProValid::Valid : ESteamCoreProValid::NotValid;
#endif
	}

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Is Valid"), Category = "SteamCore|Utilities")
	static bool IsSteamInventoryUpdateHandleValid(const FSteamInventoryUpdateHandle Handle)
	{
#if WITH_STEAMCORE
		return Handle.IsValid();
#else
		return false;
#endif
	}

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Valid (Exec)", ExpandEnumAsExecs = "Result"), Category = "SteamCore|Utilities")
	static void IsSteamInventoryUpdateHandleValid_Exec(const FSteamInventoryUpdateHandle Handle, ESteamCoreProValid& Result)
	{
#if WITH_STEAMCORE
		Result = Handle.IsValid() ? ESteamCoreProValid::Valid : ESteamCoreProValid::NotValid;
#endif
	}

	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Equal
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (CompactNodeTitle = "==", Keywords = "equal == identical"))
	static bool Equal(FSteamID A, FSteamID B);

	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities", meta = (Keywords = "equal == identical", ExpandEnumAsExecs = "Result"))
	static void Equal_Exec(FSteamID A, const FSteamID b, ESteamCoreProIdentical& Result) { Result = A == b ? ESteamCoreProIdentical::Identical : ESteamCoreProIdentical::NotIdentical; }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (CompactNodeTitle = "!=", Keywords = "not equal != not identical"))
	static bool NotEqual(FSteamID A, FSteamID B);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (CompactNodeTitle = "==", Keywords = "equal == identical"))
	static bool PublishedFileID_Equals(FPublishedFileID A, FPublishedFileID B);

	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities", meta = (Keywords = "equal == identical", ExpandEnumAsExecs = "Result"))
	static void PublishedFileID_Equals_Exec(FPublishedFileID A, FPublishedFileID B, ESteamCoreProIdentical& Result) { Result = A == B ? ESteamCoreProIdentical::Identical : ESteamCoreProIdentical::NotIdentical; }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (CompactNodeTitle = "!=", Keywords = "not equal != not identical"))
	static bool PublishedFileID_NotEquals(FPublishedFileID A, FPublishedFileID B);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (CompactNodeTitle = "==", Keywords = "equal == identical"))
	static bool SteamItemInstanceID_Equals(struct FSteamItemInstanceID A, struct FSteamItemInstanceID B);

	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities", meta = (Keywords = "equal == identical", ExpandEnumAsExecs = "Result"))
	static void SteamItemInstanceID_Equals_Exec(struct FSteamItemInstanceID A, struct FSteamItemInstanceID B, ESteamCoreProIdentical& Result);

	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Utility Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
public:
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking")
	static void ListenForSteamMessages(const FOnSteamMessage& Callback);

	static void InvokeSteamMessage(ESteamMessageType Type, const FString& Message);
	
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking")
	static void ListenForSessionInviteAccepted(const FOnSessionUserInviteAcceptedCallback& Callback);

	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking")
	static void StopListeningForSessionInviteAccepted();

	/*
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking")
	static void ListenForSessionInviteRecieved(const FOnSessionUserInviteRecievedCallback& Callback);

	UFUNCTION(BlueprintCallable, Category = "SteamCore|Matchmaking")
	static void StopListeningForSessionInviteRecieved();
	*/

	/*
	 * Get Friends list
	 * Copies the list of friends for the player previously retrieved from the online service
	 * 
	 * Call ReadFriendList function before calling this to ensure you're getting an updated version of your friends.
	 */
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
	static TArray<FOnlineFriendSteamCoreBlueprint> GetFriendsList(EFriendListType FriendListType);

	/*
	 * Read Friend List
	 * Cache friends list
	 *
	 * Call "Get Friends List" after calling this to get a list of your friends
	 */
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends", meta = (Latent, HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject", LatentInfo = "LatentInfo", Name = "" ))
	static void ReadFriendList(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EFriendListType FriendListType);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities")
	static bool GetGameEngineInitialized();
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities")
	static ESteamAccountType GetAccountType(FSteamID SteamID);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities")
	static bool IsLobby(FSteamID SteamID);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities")
	static bool IsSteamAvailable();

	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities", meta = (WorldContext="WorldContextObject"))
	static UServerFilter* ConstructServerFilter(UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities")
	static FDateTime FromUnixTimestamp(const FString Timestamp)
	{
		return FDateTime::FromUnixTimestamp(FCString::Atoi64(*Timestamp));
	}

	// Returns a hashed/encrypted version of the string
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities")
	static FString EncryptString(FString String);

	// Try getting our public ip
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities")
	static void GetPublicIp(const FOnHTTPResponse& Callback);

	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities")
	static FSteamID GetSteamIdFromPlayerState(APlayerState* PlayerState);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (DisplayName = "String to Bytes"))
	static TArray<uint8> BP_StringToBytes(FString String);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (DisplayName = "Bytes to String"))
	static FString BP_BytesToString(TArray<uint8> Array);

	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities")
	static bool IsSteamServerInitialized();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (DisplayName = "Hex to Bytes"))
	static TArray<uint8> K2_HexToBytes(FString String);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (DisplayName = "Hex to String"))
	static FString K2_HexToString(TArray<uint8> Array);
	
	/*
	 * Reads a binary file and returns an array of uint8
	 */
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities")
	static TArray<uint8> ReadFileToBytes(const FString& AbsoluteFilePath);

	/*
	 * Writes an array of uint8 to a binary file
	 */
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities")
	static bool WriteBytesToFile(bool bOverwriteIfExists, const FString& AbsoluteFilePath, const TArray<uint8>& DataBuffer);
	
	/**
	 * Try joining a specific steam server
	 */
	UFUNCTION(BlueprintCallable, Category="SteamCorePro|Utilities",meta=(WorldContext="WorldContextObject", CallableWithoutWorldContext, ExpandBoolAsExecs = "ReturnValue"))
	static bool TryJoinServer(FString& OutErrorMessage, const UObject* WorldContextObject, const FSteamServerAddr& ServerAddr, class APlayerController* SpecificPlayer = NULL, bool bUsingSockets = true);

	/** 
	 * Forcibly remove player from the server
	 *
	 * @param KickedPlayer player to kick
	 * @param KickReason text reason to display to player
	 *
	 * @return true if player was able to be kicked, false otherwise
	 */
	UFUNCTION(BlueprintCallable, Category="SteamCorePro|Utilities",meta=(WorldContext="WorldContextObject", ExpandBoolAsExecs = "ReturnValue"))
	static bool KickPlayer(UObject* WorldContextObject, APlayerController* KickedPlayer, const FText& KickReason);

	/**
	 * Determine if the player is registered in the specified session
	 *
	 * @return true if the player is registered in the session
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (DisplayName = "Is Player In Session"))
	static bool K2_IsPlayerInSession(int32 LocalUserNum);

	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities")
	static void SetType(UPARAM(ref) FSteamNetworkingIdentity& SteamNetworkingIdentity, ESteamCoreNetworkingIdentityType Type)
	{
#if WITH_STEAMCORE
		SteamNetworkingIdentity.m_SteamNetworkingIdentity.m_eType = static_cast<ESteamNetworkingIdentityType>(Type);
#endif
	}

	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities")
	static void SetSteamId64(UPARAM(ref) FSteamNetworkingIdentity& SteamNetworkingIdentity, FSteamID SteamId)
	{
#if WITH_STEAMCORE
		SteamNetworkingIdentity.m_SteamNetworkingIdentity.SetSteamID64(SteamId);
#endif
	}

	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities")
	static void SetXboxPairwiseId(UPARAM(ref) FSteamNetworkingIdentity& SteamNetworkingIdentity, FString String)
	{
#if WITH_STEAMCORE
		SteamNetworkingIdentity.m_SteamNetworkingIdentity.SetXboxPairwiseID(TCHAR_TO_UTF8(*String));
#endif
	}

	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities", meta = (DisplayName = "Set PSN Id"))
	static void SetPSNId(UPARAM(ref) FSteamNetworkingIdentity& SteamNetworkingIdentity, int64 Id)
	{
#if WITH_STEAMCORE
		SteamNetworkingIdentity.m_SteamNetworkingIdentity.SetPSNID(Id);
#endif
	}

	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities")
	static void SetStadiaId(UPARAM(ref) FSteamNetworkingIdentity& SteamNetworkingIdentity, int64 Id)
	{
#if WITH_STEAMCORE
		SteamNetworkingIdentity.m_SteamNetworkingIdentity.SetStadiaID(Id);
#endif
	}

	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities")
	static void SetLocalHost(UPARAM(ref) FSteamNetworkingIdentity& SteamNetworkingIdentity)
	{
#if WITH_STEAMCORE
		SteamNetworkingIdentity.m_SteamNetworkingIdentity.SetLocalHost();
#endif
	}

	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Ping Utilities
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
public:
	/**
	 * Returns if this application is set up to use the Steam P2P Relay Network
	 * for communication.
	 *
	 * Uses OnlineSubsystemSteamCore.bAllowP2PPacketRelay
	 *
	 * @return true if relays are enabled for P2P connections.
	 */
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities|Ping")
	static bool IsUsingP2PRelays();

	/**
	 * Returns the P2P relay ping information for the current machine. This information can be
	 * serialized over the network and used to calculate the ping data between a client and a host.
	 *
	 * @return relay information blob stored as a string for relaying over the network.
	 *         If an error occurred, the return is an empty string.
	 */
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities|Ping")
	static FString GetHostPingData();

	/**
	 * Calculates the ping of this client using the given host's ping data obtained from GetHostPingData.
	 *
	 * @param HostPingStr The relay information blob we got from the host. This information
	 *                    should be directly serialized over the network and not tampered with.
	 *
	 * @return The ping value to the given host if it can be calculated, otherwise -1 on error.
	 */
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities|Ping")
	static int32 GetPingFromHostData(const FString& Data);

	/**
	* An informative member that allows us to check if we are recalculating our ping
	* information over the Valve network. Data is additively modified during recalculation
	* such that we do not need to block on this function returning false before using
	* ping data.
	*
	* @return true if we're recalculating our ping within the Valve relay network.
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities|Ping")
	static bool IsRecalculatingPing();

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Voice Utilities
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/*
	 * Mute a remote user for a given local player
	 */
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities|Voice", meta = (WorldContext = "WorldContextObject"))
	static bool MuteRemoteTalker(UObject* WorldContextObject, int32 LocalUserNum, APlayerState* PlayerState, bool bIsSystemWide);

	/*
	 * UnMute a remote user for a given local player
	 */
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities|Voice", meta = (WorldContext = "WorldContextObject"))
	static bool UnmuteRemoteTalker(UObject* WorldContextObject, int32 LocalUserNum, APlayerState* PlayerState, bool bIsSystemWide);

	/**
	 * Checks that a unique player id is on the specified user's mute list
	 *
	 * @param Player the id of the player being checked
	 *
	 * @return true if the specified user is muted, false otherwise
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities|Voice", meta = (WorldContext = "WorldContextObject"))
	static bool IsPlayerMuted(UObject* WorldContextObject, APlayerState* Player);

	/**
	 * Determines whether a remote talker is currently talking or not
	 *
	 * @param Player the unique id of the talker to check status on
	 *
	 * @return true if the user is talking, false otherwise
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities|Voice", meta = (WorldContext = "WorldContextObject"))
	static bool IsRemotePlayerTalking(UObject* WorldContextObject, APlayerState* Player);

	/**
	 * Determines whether a local user index is currently talking or not
	 *
	 * @param UserIndex the user to check status for
	 *
	 * @return true if the user is talking, false otherwise
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities|Voice", meta = (WorldContext = "WorldContextObject"))
	static bool IsLocalPlayerTalking(UObject* WorldContextObject, int32 LocalUserNum);
	
public:
	static TArray<FOnSteamMessage> s_SteamMessageListeners;
	static FDelegateHandle s_SessionInviteAcceptedDelegateHandle;
	static FDelegateHandle s_SessionInviteReceivedDelegateHandle;
};