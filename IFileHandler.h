#pragma once

#include "IFile.h"

class IFileHandler
{
public:
	virtual FilePtr openFile(const std::string& fileName) = 0;
	virtual bool hasFile(const std::string& fileName) = 0;
};

typedef std::shared_ptr<IFileHandler> FileHandler;