#pragma once

#include "FileInfo_Binary.h"

class FileInfo_EXE: public FileInfo_Binary 
{
public:

	FileInfo_EXE(const char* aFolder, const char* aFiles);
	virtual void DisplayInformation();

};