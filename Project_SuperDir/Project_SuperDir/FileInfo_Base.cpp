#include <iostream>
#include <string>

#include "FileInfo_Base.h"

FileInfo_Base::FileInfo_Base(): mFolder(""), mFile("")
{
}

FileInfo_Base::~FileInfo_Base()
{
}

void FileInfo_Base::Init(const char* aFolder, const char* aFile)
{
	strcpy(mFile, aFile);
	strcpy(mFolder, aFolder);

	std::string sFileExt = mFile;

	sFileExt = sFileExt.substr(sFileExt.find_last_of(".") + 1);

	
	if (sFileExt == "exe")
	{

	}
	else if (sFileExt == "cpp")
	{

	}
	else if (sFileExt == "h")
	{

	}
	else
	{

	}
}

