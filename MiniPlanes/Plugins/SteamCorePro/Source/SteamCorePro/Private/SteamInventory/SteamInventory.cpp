/**
* Copyright (C) 2017-2024 eelDev AB
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamInventory
*/

#include "SteamInventory/SteamInventory.h"
#include "SteamInventory/SteamInventoryAsyncTasks.h"
#include "SteamCoreProPluginPrivatePCH.h"


USteamProInventory::USteamProInventory()
{
#if WITH_STEAMCORE
	OnSteamInventoryResultReadyCallback.Register(this, &USteamProInventory::OnSteamInventoryResultReady);
	OnSteamInventoryFullUpdateCallback.Register(this, &USteamProInventory::OnSteamInventoryFullUpdate);
	OnSteamInventoryDefinitionUpdateCallback.Register(this, &USteamProInventory::OnSteamInventoryDefinitionUpdate);
	OnSteamInventoryStartPurchaseResultCallback.Register(this, &USteamProInventory::OnSteamInventoryStartPurchaseResult);
	OnSteamInventoryRequestPricesResultCallback.Register(this, &USteamProInventory::OnSteamInventoryRequestPricesResult);
	OnSteamInventoryEligiblePromoItemDefIDsCallback.Register(this, &USteamProInventory::OnSteamInventoryEligiblePromoItemDefIDs);

	if (IsRunningDedicatedServer())
	{
		OnSteamInventoryResultReadyCallback.SetGameserverFlag();
		OnSteamInventoryFullUpdateCallback.SetGameserverFlag();
		OnSteamInventoryDefinitionUpdateCallback.SetGameserverFlag();
		OnSteamInventoryStartPurchaseResultCallback.SetGameserverFlag();
		OnSteamInventoryRequestPricesResultCallback.SetGameserverFlag();
		OnSteamInventoryEligiblePromoItemDefIDsCallback.SetGameserverFlag();
	}
#endif
}

USteamProInventory::~USteamProInventory()
{
#if WITH_STEAMCORE
	OnSteamInventoryResultReadyCallback.Unregister();
	OnSteamInventoryFullUpdateCallback.Unregister();
	OnSteamInventoryDefinitionUpdateCallback.Unregister();
	OnSteamInventoryStartPurchaseResultCallback.Unregister();
	OnSteamInventoryRequestPricesResultCallback.Unregister();
	OnSteamInventoryEligiblePromoItemDefIDsCallback.Unregister();
#endif
}

USteamProInventory* USteamProInventory::GetSteamInventory()
{
#if WITH_STEAMCORE
	return SteamInventory() ? ThisClass::StaticClass()->GetDefaultObject<USteamProInventory>() : nullptr;
#endif
	return nullptr;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

ESteamResult USteamProInventory::GetResultStatus(FSteamInventoryResult Handle)
{
	LogVeryVerbose("");

	ESteamResult Result = ESteamResult::AccessDenied;

#if WITH_STEAMCORE
	if (GetInventory())
	{
		Result = _SteamResult(GetInventory()->GetResultStatus(Handle));
	}
#endif

	return Result;
}

bool USteamProInventory::GetResultItems(FSteamInventoryResult Handle, TArray<FSteamItemDetails>& OutItems)
{
	LogVeryVerbose("");

	bool bResult = false;
	OutItems.Empty();

#if WITH_STEAMCORE
	if (GetInventory())
	{
		uint32 ArraySize = 0;

		if (GetInventory()->GetResultItems(Handle, nullptr, &ArraySize))
		{
			TArray<SteamItemDetails_t> DataArray;
			DataArray.SetNum(ArraySize);

			bResult = GetInventory()->GetResultItems(Handle, DataArray.GetData(), &ArraySize);

			for (int32 i = 0; i < DataArray.Num(); i++)
			{
				OutItems.Add(DataArray[i]);
			}
		}
	}
#endif

	return bResult;
}

int32 USteamProInventory::GetResultTimestamp(FSteamInventoryResult Handle)
{
	LogVeryVerbose("");

	int32 Result = 0;

#if WITH_STEAMCORE
	if (GetInventory())
	{
		Result = GetInventory()->GetResultTimestamp(Handle);
	}
#endif

	return Result;
}

bool USteamProInventory::CheckResultSteamID(FSteamInventoryResult Handle, FSteamID SteamIDExpected)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetInventory())
	{
		bResult = GetInventory()->CheckResultSteamID(Handle, SteamIDExpected);
	}
#endif

	return bResult;
}

void USteamProInventory::DestroyResult(FSteamInventoryResult Handle)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (GetInventory())
	{
		GetInventory()->DestroyResult(Handle);
	}
#endif
}

bool USteamProInventory::GetAllItems(FSteamInventoryResult& Handle)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetInventory())
	{
		SteamInventoryResult_t Result;

		bResult = GetInventory()->GetAllItems(&Result);
		Handle = Result;
	}
#endif

	return bResult;
}

bool USteamProInventory::GetItemsByID(FSteamInventoryResult& OutInventoryResult, TArray<FSteamItemInstanceID> InstanceIDs)
{
	LogVerbose("");

	bool bResult = false;
	OutInventoryResult = FSteamInventoryResult();

#if WITH_STEAMCORE
	if (GetInventory())
	{
		if (GetInventory())
		{
			TArray<SteamItemInstanceID_t> DataArray;
			DataArray.SetNum(InstanceIDs.Num());
			SteamInventoryResult_t InventoryResult;

			for (int32 i = 0; i < InstanceIDs.Num(); i++)
			{
				DataArray[i] = InstanceIDs[i];
			}

			bResult = GetInventory()->GetItemsByID(&InventoryResult, DataArray.GetData(), DataArray.Num());
			OutInventoryResult = InventoryResult;
		}
	}
#endif

	return bResult;
}

bool USteamProInventory::GetItemPrice(FSteamItemDef ItemDef, int32& OutPrice, int32& OutBasePrice)
{
	LogVerbose("");

	bool bResult = false;
	uint64 Price = 0;
	uint64 BasePrice = 0;

#if WITH_STEAMCORE
	if (GetInventory())
	{
		bResult = GetInventory()->GetItemPrice(ItemDef, &Price, &BasePrice);
	}
#endif

	OutPrice = Price;
	OutBasePrice = BasePrice;

	return bResult;
}

bool USteamProInventory::GetItemsWithPrices(TArray<FSteamItemDef>& OutItemDefs, TArray<int32>& OutPrices, TArray<int32>& OutBasePrices)
{
	LogVerbose("");

	bool bResult = false;
	OutItemDefs.Empty();
	OutPrices.Empty();
	OutBasePrices.Empty();

#if WITH_STEAMCORE
	if (GetInventory())
	{
		if (GetInventory())
		{
			int32 ArraySize = GetInventory()->GetNumItemsWithPrices();

			TArray<SteamItemDef_t> SteamItemDefs;
			TArray<uint64> ItemPrices;
			TArray<uint64> BasePrices;
			SteamItemDefs.SetNum(ArraySize);
			ItemPrices.SetNum(ArraySize);
			BasePrices.SetNum(ArraySize);

			bResult = GetInventory()->GetItemsWithPrices(SteamItemDefs.GetData(), ItemPrices.GetData(), BasePrices.GetData(), ArraySize);

			if (bResult)
			{
				for (int32 i = 0; i < ArraySize; i++)
				{
					OutItemDefs.Add(SteamItemDefs[i]);
					OutPrices.Add(ItemPrices[i]);
					OutBasePrices.Add(BasePrices[i]);
				}
			}
		}
	}
#endif

	return bResult;
}

int32 USteamProInventory::GetNumItemsWithPrices()
{
	LogVerbose("");

	int32 Result = 0;

#if WITH_STEAMCORE
	if (GetInventory())
	{
		Result = GetInventory()->GetNumItemsWithPrices();
	}
#endif

	return Result;
}

bool USteamProInventory::GetResultItemProperty(FSteamInventoryResult Handle, int32 ItemIndex, FString PropertyName, FString& OutValue)
{
	LogVerbose("");

	bool bResult = false;
	OutValue.Empty();

#if WITH_STEAMCORE
	if (GetInventory())
	{
		const FTCHARToUTF8 ConvertedPropertyName(*PropertyName);

		uint32 DataSize = 0;

		GetInventory()->GetResultItemProperty(Handle, ItemIndex, ConvertedPropertyName.Get(), nullptr, &DataSize);

		TArray<char> DataArray;
		DataArray.SetNum(DataSize);

		bResult = GetInventory()->GetResultItemProperty(Handle, ItemIndex, ConvertedPropertyName.Get(), DataArray.GetData(), &DataSize);

		if (bResult)
		{
			OutValue = UTF8_TO_TCHAR(DataArray.GetData());
		}
	}
#endif

	return bResult;
}

bool USteamProInventory::SerializeResult(FSteamInventoryResult Handle, TArray<uint8>& OutBuffer)
{
	LogVerbose("");

	bool bResult = false;
	OutBuffer.Empty();

#if WITH_STEAMCORE
	if (GetInventory())
	{
		uint32 DataSize = 0;

		// get the size of the array
		if (GetInventory()->SerializeResult(Handle, nullptr, &DataSize))
		{
			OutBuffer.SetNum(DataSize);
			bResult = GetInventory()->SerializeResult(Handle, OutBuffer.GetData(), &DataSize);
		}
	}
#endif

	return bResult;
}

void USteamProInventory::StartPurchase(const FOnSteamInventoryStartPurchaseResult& Callback, const TArray<FSteamItemDef> ItemDefs, const TArray<int32> Quantity)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (GetInventory())
	{
		FOnlineAsyncTaskSteamCoreProInventoryStartPurchaseResult* Task = new FOnlineAsyncTaskSteamCoreProInventoryStartPurchaseResult(Callback, ItemDefs, Quantity);
		QueueAsyncTask(Task);
	}
#endif
}

bool USteamProInventory::DeserializeResult(FSteamInventoryResult& OutResult, TArray<uint8> Buffer, bool bReservedMustBeFalse)
{
	LogVerbose("");

	bool bResult = false;
	OutResult = FSteamInventoryResult();

#if WITH_STEAMCORE
	if (GetInventory())
	{
		SteamInventoryResult_t SteamInventoryResult;

		bResult = GetInventory()->DeserializeResult(&SteamInventoryResult, Buffer.GetData(), Buffer.Num(), bReservedMustBeFalse);

		if (bResult)
		{
			OutResult = SteamInventoryResult;
		}
	}
#endif

	return bResult;
}

bool USteamProInventory::GenerateItems(FSteamInventoryResult& OutResult, TArray<FSteamItemDef> ItemDefs, TArray<int32> Quantities)
{
	LogVerbose("");

	bool bResult = false;
	OutResult = FSteamInventoryResult();

#if WITH_STEAMCORE
	if (GetInventory())
	{
		SteamInventoryResult_t SteamInventoryResult;

		TArray<SteamItemDef_t> SteamItemDefs;
		TArray<uint32> ItemQuantities;

		SteamItemDefs.SetNum(ItemDefs.Num());
		ItemQuantities.SetNum(Quantities.Num());

		for (int32 i = 0; i < ItemDefs.Num(); i++)
		{
			SteamItemDefs[i] = ItemDefs[i];
			ItemQuantities[i] = Quantities[i];
		}

		bResult = GetInventory()->GenerateItems(&SteamInventoryResult, SteamItemDefs.GetData(), ItemQuantities.GetData(), SteamItemDefs.Num());

		if (bResult)
		{
			OutResult = SteamInventoryResult;
		}
	}
#endif

	return bResult;
}

bool USteamProInventory::GrantPromoItems(FSteamInventoryResult& OutResult)
{
	LogVerbose("");

	bool bResult = false;
	OutResult = FSteamInventoryResult();

#if WITH_STEAMCORE
	if (GetInventory())
	{
		SteamInventoryResult_t SteamInventoryResult;

		bResult = GetInventory()->GrantPromoItems(&SteamInventoryResult);

		if (bResult)
		{
			OutResult = SteamInventoryResult;
		}
	}
#endif

	return bResult;
}

bool USteamProInventory::AddPromoItem(FSteamInventoryResult& OutResult, FSteamItemDef ItemDefinition)
{
	LogVerbose("");

	bool bResult = false;
	OutResult = FSteamInventoryResult();

#if WITH_STEAMCORE
	if (GetInventory())
	{
		SteamInventoryResult_t SteamInventoryResult;

		bResult = GetInventory()->AddPromoItem(&SteamInventoryResult, ItemDefinition);

		if (bResult)
		{
			OutResult = SteamInventoryResult;
		}
	}
#endif

	return bResult;
}

bool USteamProInventory::AddPromoItems(FSteamInventoryResult& OutResult, TArray<FSteamItemDef> ItemDefs)
{
	LogVerbose("");

	bool bResult = false;
	OutResult = FSteamInventoryResult();

#if WITH_STEAMCORE
	if (GetInventory())
	{
		SteamInventoryResult_t SteamInventoryResult;

		TArray<SteamItemDef_t> SteamItemDefs;
		for (int32 i = 0; i < ItemDefs.Num(); i++)
		{
			SteamItemDefs.Add(ItemDefs[i]);
		}

		bResult = GetInventory()->AddPromoItems(&SteamInventoryResult, SteamItemDefs.GetData(), SteamItemDefs.Num());

		if (bResult)
		{
			OutResult = SteamInventoryResult;
		}

		return bResult;
	}
#endif

	return bResult;
}

bool USteamProInventory::ConsumeItem(FSteamInventoryResult& OutResult, FSteamItemInstanceID ItemToConsume, int32 Quantity)
{
	LogVerbose("");

	bool bResult = false;
	OutResult = FSteamInventoryResult();

#if WITH_STEAMCORE
	if (GetInventory())
	{
		SteamInventoryResult_t SteamInventoryResult;

		bResult = GetInventory()->ConsumeItem(&SteamInventoryResult, ItemToConsume, Quantity);

		OutResult = SteamInventoryResult;
	}
#endif

	return bResult;
}

bool USteamProInventory::ExchangeItems(FSteamInventoryResult& outResult, TArray<FSteamItemDef> ArrayGenerate, TArray<int32> ArrayGenerateQuantity, TArray<FSteamItemInstanceID> ArrayDestroy, TArray<int32> ArrayDestroyQuantity)
{
	LogVerbose("");

	bool bResult = false;
	outResult = FSteamInventoryResult();

#if WITH_STEAMCORE
	if (GetInventory())
	{
		TArray<SteamItemDef_t> SteamItemDefsGenerate;
		TArray<uint32> SteamGenerateQuantity;
		SteamItemDefsGenerate.SetNum(ArrayGenerate.Num());
		SteamGenerateQuantity.SetNum(ArrayGenerateQuantity.Num());

		TArray<SteamItemInstanceID_t> SteamItemInstanceIdsDestroy;
		TArray<uint32> SteamDestroyQuantity;
		SteamItemInstanceIdsDestroy.SetNum(ArrayDestroy.Num());
		SteamDestroyQuantity.SetNum(ArrayDestroyQuantity.Num());

		for (int32 i = 0; i < SteamItemDefsGenerate.Num(); i++)
		{
			SteamItemDefsGenerate[i] = ArrayGenerate[i];
			SteamGenerateQuantity[i] = ArrayGenerateQuantity[i];
		}

		for (int32 i = 0; i < ArrayDestroy.Num(); i++)
		{
			SteamItemInstanceIdsDestroy[i] = ArrayDestroy[i];
			SteamDestroyQuantity[i] = ArrayDestroyQuantity[i];
		}

		SteamInventoryResult_t SteamInventoryResult;

		bResult = GetInventory()->ExchangeItems(&SteamInventoryResult, SteamItemDefsGenerate.GetData(), SteamGenerateQuantity.GetData(), SteamGenerateQuantity.Num(), SteamItemInstanceIdsDestroy.GetData(), SteamDestroyQuantity.GetData(), SteamItemInstanceIdsDestroy.Num());

		if (bResult)
		{
			outResult = SteamInventoryResult;
		}
	}
#endif

	return bResult;
}

bool USteamProInventory::TransferItemQuantity(FSteamInventoryResult& OutResult, FSteamItemInstanceID ItemIDSource, int32 Quantity, FSteamItemInstanceID ItemIDDest)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	SteamInventoryResult_t SteamInventoryResult;

	if (GetInventory())
	{
		bResult = GetInventory()->TransferItemQuantity(&SteamInventoryResult, ItemIDSource, Quantity, ItemIDDest);

		if (bResult)
		{
			OutResult = SteamInventoryResult;
		}
	}
#endif

	return bResult;
}

bool USteamProInventory::TriggerItemDrop(FSteamInventoryResult& OutResult, FSteamItemDef ListDefinition)
{
	LogVerbose("");

	bool bResult = false;
	OutResult = FSteamInventoryResult();

#if WITH_STEAMCORE
	SteamInventoryResult_t SteamInventoryResult;

	if (GetInventory())
	{
		bResult = GetInventory()->TriggerItemDrop(&SteamInventoryResult, ListDefinition);

		if (bResult)
		{
			OutResult = SteamInventoryResult;
		}
	}
#endif

	return bResult;
}

FSteamInventoryUpdateHandle USteamProInventory::StartUpdateProperties()
{
	LogVerbose("");

	FSteamInventoryUpdateHandle Handle;

#if WITH_STEAMCORE
	if (GetInventory())
	{
		Handle = GetInventory()->StartUpdateProperties();
	}
#endif

	return Handle;
}

bool USteamProInventory::SubmitUpdateProperties(FSteamInventoryUpdateHandle Result, FSteamInventoryResult& ResultHandle)
{
	LogVerbose("");

	bool bResult = false;
	ResultHandle = FSteamInventoryResult();

#if WITH_STEAMCORE
	if (GetInventory())
	{
		SteamInventoryResult_t SteamInventoryResult;

		bResult = GetInventory()->SubmitUpdateProperties(Result, &SteamInventoryResult);

		if (bResult)
		{
			ResultHandle = SteamInventoryResult;
		}
	}
#endif

	return bResult;
}

bool USteamProInventory::RemoveProperty(FSteamInventoryUpdateHandle Result, FSteamItemInstanceID ItemID, FString PropertyName)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetInventory())
	{
		bResult = GetInventory()->RemoveProperty(Result, ItemID, TCHAR_TO_UTF8(*PropertyName));
	}
#endif

	return bResult;
}

bool USteamProInventory::SetPropertyString(FSteamInventoryUpdateHandle Result, FSteamItemInstanceID ItemID, FString PropertyName, FString Value)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetInventory())
	{
		const FTCHARToUTF8 ConvertedPropertyName(*PropertyName);
		const FTCHARToUTF8 ConvertedValue(*Value);

		bResult = GetInventory()->SetProperty(Result, ItemID, ConvertedPropertyName.Get(), ConvertedValue.Get());
	}
#endif

	return bResult;
}

bool USteamProInventory::SetPropertyBool(FSteamInventoryUpdateHandle Result, FSteamItemInstanceID ItemID, FString PropertyName, bool bValue)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetInventory())
	{
		bResult = GetInventory()->SetProperty(Result, ItemID, TCHAR_TO_UTF8(*PropertyName), bValue);
	}
#endif

	return bResult;
}

bool USteamProInventory::SetPropertyInt(FSteamInventoryUpdateHandle Result, FSteamItemInstanceID ItemID, FString PropertyName, int32 Value)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetInventory())
	{
		bResult = GetInventory()->SetProperty(Result, ItemID, TCHAR_TO_UTF8(*PropertyName), static_cast<int64>(Value));
	}
#endif

	return bResult;
}

bool USteamProInventory::SetPropertyFloat(FSteamInventoryUpdateHandle Result, FSteamItemInstanceID ItemID, FString PropertyName, float Value)
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetInventory())
	{
		bResult = GetInventory()->SetProperty(Result, ItemID, TCHAR_TO_UTF8(*PropertyName), Value);
	}
#endif

	return bResult;
}

bool USteamProInventory::LoadItemDefinitions()
{
	LogVerbose("");

	bool bResult = false;

#if WITH_STEAMCORE
	if (GetInventory())
	{
		bResult = GetInventory()->LoadItemDefinitions();
	}
#endif

	return bResult;
}

bool USteamProInventory::GetItemDefinitionIDs(TArray<FSteamItemDef>& OutItemDefs)
{
	LogVeryVerbose("");

	bool bResult = false;
	OutItemDefs.Empty();

#if WITH_STEAMCORE
	if (GetInventory())
	{
		uint32 DataSize = 0;

		// get the size of the array
		if (GetInventory()->GetItemDefinitionIDs(nullptr, &DataSize))
		{
			TArray<SteamItemDef_t> DataArray;
			DataArray.SetNum(DataSize);

			bResult = GetInventory()->GetItemDefinitionIDs(DataArray.GetData(), &DataSize);

			for (int32 i = 0; i < DataArray.Num(); i++)
			{
				OutItemDefs.Add(DataArray[i]);
			}
		}
	}
#endif

	return bResult;
}

bool USteamProInventory::GetItemDefinitionProperty(FSteamItemDef ItemDef, FString PropertyName, FString& OutValue)
{
	LogVeryVerbose("");

	bool bResult = false;
	OutValue.Empty();

#if WITH_STEAMCORE
	if (GetInventory())
	{
		const FTCHARToUTF8 ConvertedPropertyName(*PropertyName);

		uint32 DataSize = 0;

		// get the size of the array
		if (GetInventory()->GetItemDefinitionProperty(ItemDef, ConvertedPropertyName.Get(), nullptr, &DataSize))
		{
			TArray<char> DataArray;
			DataArray.SetNum(DataSize);

			bResult = GetInventory()->GetItemDefinitionProperty(ItemDef, ConvertedPropertyName.Get(), DataArray.GetData(), &DataSize);

			if (bResult)
			{
				OutValue = FString(UTF8_TO_TCHAR(DataArray.GetData()));
			}
		}
	}
#endif

	return bResult;
}

bool USteamProInventory::GetEligiblePromoItemDefinitionIDs(FSteamID SteamID, TArray<FSteamItemDef>& OutItemDefs)
{
	LogVeryVerbose("");

	bool bResult = false;
	OutItemDefs.Empty();

#if WITH_STEAMCORE
	if (GetInventory())
	{
		uint32 DataSize = 0;

		// get the size of the array
		if (GetInventory()->GetEligiblePromoItemDefinitionIDs(SteamID, nullptr, &DataSize))
		{
			TArray<SteamItemDef_t> DataArray;
			DataArray.SetNum(DataSize);

			bResult = GetInventory()->GetEligiblePromoItemDefinitionIDs(SteamID, DataArray.GetData(), &DataSize);

			for (int32 i = 0; i < DataArray.Num(); i++)
			{
				OutItemDefs.Add(DataArray[i]);
			}
		}
	}
#endif

	return bResult;
}

void USteamProInventory::RequestEligiblePromoItemDefinitionsIDs(const FOnRequestEligiblePromoItemDefinitionsIDs& Callback, FSteamID SteamID)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (GetInventory())
	{
		FOnlineAsyncTaskSteamCoreProInventoryRequestEligiblePromoItemDefinitionsIDs* Task = new FOnlineAsyncTaskSteamCoreProInventoryRequestEligiblePromoItemDefinitionsIDs(Callback, SteamID);
		QueueAsyncTask(Task);
	}
#endif
}

void USteamProInventory::RequestPrices(const FOnSteamInventoryRequestPricesResult& Callback)
{
	LogVerbose("");

#if WITH_STEAMCORE
	if (GetInventory())
	{
		FOnlineAsyncTaskSteamCoreProInventoryRequestPricesResult* Task = new FOnlineAsyncTaskSteamCoreProInventoryRequestPricesResult(Callback);
		QueueAsyncTask(Task);
	}
#endif
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

#if WITH_STEAMCORE
void USteamProInventory::OnSteamInventoryResultReady(SteamInventoryResultReady_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		SteamInventoryResultReady.Broadcast(Data);
	});
}

void USteamProInventory::OnSteamInventoryFullUpdate(SteamInventoryFullUpdate_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		SteamInventoryFullUpdate.Broadcast(Data);
	});
}

void USteamProInventory::OnSteamInventoryDefinitionUpdate(SteamInventoryDefinitionUpdate_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		SteamInventoryDefinitionUpdate.Broadcast();
	});
}

void USteamProInventory::OnSteamInventoryStartPurchaseResult(SteamInventoryStartPurchaseResult_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		SteamInventoryStartPurchaseResult.Broadcast(Data);
	});
}

void USteamProInventory::OnSteamInventoryRequestPricesResult(SteamInventoryRequestPricesResult_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		SteamInventoryRequestPricesResultDelegate.Broadcast(Data);
	});
}

void USteamProInventory::OnSteamInventoryEligiblePromoItemDefIDs(SteamInventoryEligiblePromoItemDefIDs_t* pParam)
{
	LogVerbose("");

	auto Data = *pParam;
	AsyncTask(ENamedThreads::GameThread, [this, Data]()
	{
		SteamInventoryEligiblePromoItemDefIDs.Broadcast(Data);
	});
}
#endif
