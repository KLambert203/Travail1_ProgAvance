#include <iostream>
#include <iomanip>

#include "FileInfo_H.h"


FileInfo_H::FileInfo_H(const char* aFolder, const char* aFiles)
{
	Init(aFolder, aFiles);
}

void FileInfo_H::DisplayInformation()
{
	std::cout << mFile << std::setw(20) << nLineCount << " lignes" << std::setw(20) <<"Language C / C++ - Fichier en-tete" << std::endl;
}