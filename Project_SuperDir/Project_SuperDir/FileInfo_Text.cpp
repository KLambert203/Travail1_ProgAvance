#include "FileInfo_Text.h"

void FileInfo_Text::RetrieveInformation()
{
	FILE* lFile;
	char lLine[1024];

	int lRet = fopen_s(&lFile, mFile, "r");
	if (0 != lRet)
	{
		std::cerr << "ERREUR: Ce fichier ne peut pas etre lu." << std::endl;
		exit;
	}
	else
	{
		while (NULL != fgets(lLine, sizeof(lLine), lFile))
		{
			nLineCount++;
		}
		fclose(lFile);
	}
}