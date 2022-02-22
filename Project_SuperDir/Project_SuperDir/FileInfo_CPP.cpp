#include <iostream>
#include <iomanip>

#include "FileInfo_CPP.h"

FileInfo_CPP::FileInfo_CPP(const char* aFolder, const char* aFile)
{
	Init(aFolder, aFile);
}

void FileInfo_CPP::DisplayInformation()
{
	std::cout	<< std::fixed << std::setprecision(2);
	std::cout	<< std::left << std::setw(20) << mFile
				<< std::right << std::setw(16) << nLineCount << " lignes"
				<< "	" << std::setw(16) << "Language C / C++ - Fichier source" << std::endl;
}