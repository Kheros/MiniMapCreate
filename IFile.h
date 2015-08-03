#pragma once

class IFile
{
public:
	virtual void setPosition(int position) = 0;
	virtual int getPosition() const = 0;
	virtual void read(void* buffer, int numBytes) = 0;
	virtual void close() = 0;
};

typedef std::shared_ptr<IFile> FilePtr;