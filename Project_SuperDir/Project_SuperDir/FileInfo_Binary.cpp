

#include "FileInfo_Binary.h"

void FileInfo_Binary::RetrieveInformation()
{
	FILE* lFile;

	int lRet = fopen_s(&lFile, mFile, "r");
	if (0 != lRet)
	{
		std::cerr << "ERREUR: Ce fichier ne peut pas être lu." << std::endl;
		exit;
	}
}