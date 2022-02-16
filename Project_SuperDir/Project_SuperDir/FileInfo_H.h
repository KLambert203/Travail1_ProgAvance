#pragma once

#include "FileInfo_Text.h"

class FileInfo_H: public FileInfo_Text 
{
public:
	FileInfo_H(const char* aFolder, const char* aFiles);
	virtual void DisplayInformation();

};