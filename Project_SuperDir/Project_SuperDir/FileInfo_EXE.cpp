#include <iostream>
#include <iomanip>

#include "FileInfo_EXE.h"


FileInfo_EXE::FileInfo_EXE(const char* aFolder, const char* aFiles)
{
	Init(aFolder, aFiles);
}

void FileInfo_EXE::DisplayInformation()
{
	std::cout << mFile << std::setw(20) << nFileSize << " octets" << std::setw(20) << "Executable" << std::endl;
}