#include <iostream>
#include <iomanip>

#include "FileInfo_Other.h"


FileInfo_Other::FileInfo_Other(const char* aFolder, const char* aFiles)
{
	Init(aFolder, aFiles);
}

void FileInfo_Other::DisplayInformation()
{
	std::cout	<< std::fixed << std::setprecision(2);
	std::cout	<< std::left << std::setw(20) << mFile
				<< std::right << std::setw(20) << dFileSize << " " << DataSize << std::endl;
}