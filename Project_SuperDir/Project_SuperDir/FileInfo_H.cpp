#include <iostream>
#include <iomanip>

#include "FileInfo_H.h"


FileInfo_H::FileInfo_H(const char* aFolder, const char* aFiles)
{
	Init(aFolder, aFiles);
}

void FileInfo_H::DisplayInformation()
{
	std::cout	<< std::fixed << std::setprecision(2);
	std::cout	<< std::left << std::setw(20) << mFile
				<< std::right  << std::setw(16) << nLineCount << " lignes" 
				<< "	" << std::setw(16) << "Language C / C++ - Fichier en-tete" << std::endl;
}