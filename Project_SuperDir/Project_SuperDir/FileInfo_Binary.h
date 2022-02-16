#pragma once
#include <string>
#include "FileInfo_Base.h"

class FileInfo_Binary: public FileInfo_Base 
{
public:
	virtual void RetrieveInformation();
protected:

	void FormatFileSize();

	unsigned long nFileSize;
	std::string DataSize;
};