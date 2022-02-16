

#include "FileInfo_Binary.h"

void FileInfo_Binary::RetrieveInformation()
{
	FILE* lFile;
	nFileSize = 0;

	int lRet = fopen_s(&lFile, mFile, "r");
	if (0 != lRet)
	{
		std::cerr << "ERREUR: Ce fichier ne peut pas etre lu." << std::endl;
		exit(2);
	}
	else
	{
		nFileSize = ftell(lFile);
		fclose(lFile);
	}


	FormatFileSize();
}

void FileInfo_Binary::FormatFileSize()
{
	DataSize = "";

	if (nFileSize >= 0 && nFileSize < 1024) { DataSize = "o"; }
	else if (nFileSize >= 1024 && nFileSize < 2047) { DataSize = "Kio"; }
	else if (nFileSize >= 2048 && nFileSize < 4095) { DataSize = "Mio"; }
	else{ DataSize = "Gio"; }
}