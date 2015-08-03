#pragma once

#include <memory>

#ifndef MMC_EXPORT
#define MMC_DLL_EXPORT
#else
#define MMC_DLL_EXPORT __declspec(dllexport)
#endif

#include "IMinimapCreate.h"

MMC_DLL_EXPORT std::shared_ptr<IMinimapCreate> minimapCreateInit();
MMC_DLL_EXPORT FileHandler minimapCreateNewMpqHandler(const std::string& basePath);