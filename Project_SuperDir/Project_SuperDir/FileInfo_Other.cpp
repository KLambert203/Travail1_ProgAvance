#include <iostream>
#include <iomanip>

#include "FileInfo_Other.h"


FileInfo_Other::FileInfo_Other(const char* aFolder, const char* aFiles)
{
	Init(aFolder, aFiles);
}

void FileInfo_Other::DisplayInformation()
{
	std::cout.precision(2);
	std::cout << mFile << std::setw(20) << dFileSize << " " << DataSize << std::endl;
}