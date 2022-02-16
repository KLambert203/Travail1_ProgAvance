#include <iostream>
#include <iomanip>

#include "FileInfo_CPP.h"

FileInfo_CPP::FileInfo_CPP(const char* aFolder, const char* aFile)
{
	Init(aFolder, aFile);
}

void FileInfo_CPP::DisplayInformation()
{
	std::cout << mFile << std::setw(20) << nLineCount << " lignes" << std::setw(20) << "  Language C / C++ - Fichier source" << std::endl;
}