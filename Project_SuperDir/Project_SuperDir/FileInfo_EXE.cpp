#include <iostream>
#include <iomanip>

#include "FileInfo_EXE.h"


FileInfo_EXE::FileInfo_EXE(const char* aFolder, const char* aFiles)
{
	Init(aFolder, aFiles);
}

void FileInfo_EXE::DisplayInformation()
{
	std::cout	<< std::setprecision(2);
	std::cout	<< std::left << std::setw(20) << mFile
				<< std::right << std::setw(18) << dFileSize << " " << DataSize 
				<< std::right << std::setw(16) << "Executable" << std::endl;
}