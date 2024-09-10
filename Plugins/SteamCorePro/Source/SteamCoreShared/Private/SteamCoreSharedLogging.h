/**
* Copyright (C) 2017-2024 eelDev AB
*/

#pragma once

#define LogDebug(format, ...) UE_LOG(LogSteamCoreShared, Log, TEXT("[%s] " format), *FString(__FUNCTION__), ##__VA_ARGS__)
#define LogVerbose(format, ...) UE_LOG(LogSteamCoreShared, Verbose, TEXT("[%s] " format), *FString(__FUNCTION__), ##__VA_ARGS__)
#define LogVeryVerbose(format, ...) UE_LOG(LogSteamCoreShared, VeryVerbose, TEXT("[%s] " format), *FString(__FUNCTION__), ##__VA_ARGS__)
#define LogError(format, ...) UE_LOG(LogSteamCoreShared, Error, TEXT("[%s] " format), *FString(__FUNCTION__), ##__VA_ARGS__)
#define LogWarning(format, ...) UE_LOG(LogSteamCoreShared, Warning, TEXT("[%s] " format), *FString(__FUNCTION__), ##__VA_ARGS__)
