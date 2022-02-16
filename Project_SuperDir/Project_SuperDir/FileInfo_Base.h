#pragma once
#include <iostream>
#include "IFileInfo.h"

class FileInfo_Base: public IFileInfo 
{

public:

	FileInfo_Base();
	FileInfo_Base(const char* aFolder, const char* aFile);
	virtual ~FileInfo_Base();

	char mFolder[512];
	char mFile[256];

	virtual void Init(const char* aFolder, const char* aFile);


};