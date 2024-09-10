/**
* Copyright (C) 2017-2024 eelDev AB
*/

#pragma once

#define LogDebug(format, ...) UE_LOG(LogSteamCorePro, Log, TEXT("[%s] " format), *FString(__FUNCTION__), ##__VA_ARGS__)
#define LogVerbose(format, ...) UE_LOG(LogSteamCorePro, Verbose, TEXT("[%s] " format), *FString(__FUNCTION__), ##__VA_ARGS__)
#define LogVeryVerbose(format, ...) UE_LOG(LogSteamCorePro, VeryVerbose, TEXT("[%s] " format), *FString(__FUNCTION__), ##__VA_ARGS__)
#define LogError(format, ...) UE_LOG(LogSteamCorePro, Error, TEXT("[%s] " format), *FString(__FUNCTION__), ##__VA_ARGS__)
#define LogWarning(format, ...) UE_LOG(LogSteamCorePro, Warning, TEXT("[%s] " format), *FString(__FUNCTION__), ##__VA_ARGS__)
