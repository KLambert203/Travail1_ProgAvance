#include <iostream>

#include "FileInfo_EXE.h"

void FileInfo_EXE::DisplayInformation()
{
	std::cout << mFile << "        " << nFileSize << " octets" << "        Executable" << std::endl;
}