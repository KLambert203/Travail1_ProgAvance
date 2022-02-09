#pragma once
#include <iostream>;
#include "IFileInfo.h"

class FileInfo_Base:public IFileInfo {
private:

	char mFolder[512];
	char mFile[256];

	virtual void Init(const char* aFolder, const char* aFile);
};