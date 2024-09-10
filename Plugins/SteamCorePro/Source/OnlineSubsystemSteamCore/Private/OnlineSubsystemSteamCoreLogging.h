/**
* Copyright (C) 2017-2024 eelDev AB
*/

#pragma once

#define LogDebug(format, ...) UE_LOG(LogOnlineSubsystemSteamCore, Log, TEXT("[%s] " format), *FString(__FUNCTION__), ##__VA_ARGS__)
#define LogVerbose(format, ...) UE_LOG(LogOnlineSubsystemSteamCore, Verbose, TEXT("[%s] " format), *FString(__FUNCTION__), ##__VA_ARGS__)
#define LogVeryVerbose(format, ...) UE_LOG(LogOnlineSubsystemSteamCore, VeryVerbose, TEXT("[%s] " format), *FString(__FUNCTION__), ##__VA_ARGS__)
#define LogError(format, ...) UE_LOG(LogOnlineSubsystemSteamCore, Error, TEXT("[%s] " format), *FString(__FUNCTION__), ##__VA_ARGS__)
#define LogWarning(format, ...) UE_LOG(LogOnlineSubsystemSteamCore, Warning, TEXT("[%s] " format), *FString(__FUNCTION__), ##__VA_ARGS__)
