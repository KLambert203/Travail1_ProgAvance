#include <iostream>
#include <string>

#include "FileInfo_Base.h"

FileInfo_Base::FileInfo_Base(): mFolder(""), mFile("")
{
}

FileInfo_Base::FileInfo_Base(const char* aFolder, const char* aFile)
{
	strcpy_s(mFile, "");
	strcpy_s(mFolder, "");
	Init(aFolder, aFile);
}

FileInfo_Base::~FileInfo_Base()
{
}

void FileInfo_Base::Init(const char* aFolder, const char* aFile)
{
	strcpy_s(mFile, aFile);
	strcpy_s(mFolder, aFolder);
}

