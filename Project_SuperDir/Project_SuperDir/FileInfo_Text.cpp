#include "FileInfo_Text.h"

void FileInfo_Text::RetrieveInformation()
{
	std::string fullPath = mFolder;
	fullPath.append("\\");
	fullPath.append(mFile);

	FILE* lFile;
	char lLine[1024];
	nLineCount = 0;

	int lRet = fopen_s(&lFile, fullPath.c_str(), "r");
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