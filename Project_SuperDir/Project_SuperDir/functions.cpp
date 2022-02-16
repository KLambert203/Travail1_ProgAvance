#include <Windows.h>
#include <iostream>
#include <stdlib.h>
#include <fileapi.h>
#include <string>


#include "IFileInfo.h"
#include "FileInfo_Base.h"
#include "FileInfo_Binary.h"
#include "FileInfo_CPP.h"
#include "FileInfo_EXE.h"
#include "FileInfo_H.h"
#include "FileInfo_Other.h"
#include "FileInfo_Text.h"
using std::string;

IFileInfo** FindFiles(const char* aFolder) {
	IFileInfo** lTab = new IFileInfo* [100];

	for (unsigned int i = 0; i < 100; i++)
	{
		lTab[i] = NULL;
	}
	
	WIN32_FIND_DATAA fileData;
	HANDLE firstFile =  FindFirstFileA(aFolder, &fileData);

	unsigned int cnt = 0;
	do
	{		
		std::string fileName = fileData.cFileName;
		std::string ext = fileName.substr(fileName.find_last_of(".") + 1);

		if (strlen(ext.c_str()) <= 3 && fileName != "." && fileName !="..")
		{
			if (ext == "exe")
			{
				lTab[cnt] = new FileInfo_EXE();
				cnt++;
			}
			else if (ext == "h")
			{
				lTab[cnt] = new FileInfo_H();
				cnt++;
			}
			else if (ext == "cpp")
			{
				lTab[cnt] = new FileInfo_CPP();
				cnt++;
			}
			else
			{
				lTab[cnt] = new FileInfo_Other();
				cnt++;
			}			
		}
	} 
	while (FindNextFileA(firstFile, &fileData) != 0);

	std::cout << GetLastError() << std::endl;

	return lTab;
}

void RetrieveInformation(IFileInfo** aFiles) 
{
	for (size_t i = 0; i < 100; i++)
	{
		if (aFiles[i] == NULL)
		{
			break;
		}

		aFiles[i]->RetrieveInformation();
	}
}

void DisplayInformations(IFileInfo** aFiles)
{

}
