/**
* Copyright (C) 2017-2024 eelDev AB
*/

#pragma once

#define LogDebug(format, ...) UE_LOG(LogSteamCoreSockets, Log, TEXT("[%s] " format), *FString(__FUNCTION__), ##__VA_ARGS__)
#define LogVerbose(format, ...) UE_LOG(LogSteamCoreSockets, Verbose, TEXT("[%s] " format), *FString(__FUNCTION__), ##__VA_ARGS__)
#define LogVeryVerbose(format, ...) UE_LOG(LogSteamCoreSockets, VeryVerbose, TEXT("[%s] " format), *FString(__FUNCTION__), ##__VA_ARGS__)
#define LogError(format, ...) UE_LOG(LogSteamCoreSockets, Error, TEXT("[%s] " format), *FString(__FUNCTION__), ##__VA_ARGS__)
#define LogWarning(format, ...) UE_LOG(LogSteamCoreSockets, Warning, TEXT("[%s] " format), *FString(__FUNCTION__), ##__VA_ARGS__)
