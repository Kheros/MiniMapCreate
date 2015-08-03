#pragma once

#include "IFileHandler.h"

class IMinimapCreate
{
public:
	virtual void initGraphics() = 0;
	virtual void initFileSystem(FileHandler fileHandler) = 0;
	virtual HBITMAP fromHandler(const std::string& tileName) = 0;
};