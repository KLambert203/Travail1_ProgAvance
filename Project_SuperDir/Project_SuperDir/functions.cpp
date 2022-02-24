#include <Windows.h>
#include <iostream>
#include <stdlib.h>
#include <fileapi.h>
#include <string>

#include "functions.h"
#include "IFileInfo.h"
#include "FileInfo_Base.h"
#include "FileInfo_Binary.h"
#include "FileInfo_CPP.h"
#include "FileInfo_EXE.h"
#include "FileInfo_H.h"
#include "FileInfo_Other.h"
#include "FileInfo_Text.h"



IFileInfo** FindFiles(const char* aFolder) {
	IFileInfo** lTab = new IFileInfo * [100];
	std::string FolderName = FormatDirectory(aFolder);

	for (unsigned int i = 0; i < 100; i++)
	{
		lTab[i] = NULL;
	}

	WIN32_FIND_DATAA fileData;
	HANDLE firstFile = FindFirstFileA(FolderName.c_str(), &fileData);

	if (firstFile == INVALID_HANDLE_VALUE)
	{
		std::cerr << "FindFirstFileA a echoue" << std::endl;
		exit;
	}

	unsigned int cnt = 0;
	do
	{
		std::string fileName = fileData.cFileName;
		int index = fileName.find_last_of(".");
		std::string ext;

		if (index > 0){ext = fileName.substr(fileName.find_last_of(".") + 1);}
		else{ext = "";}

		if (strlen(ext.c_str()) <= 3 && ext != "")
		{
			if (ext == "exe")
			{
				lTab[cnt] = new FileInfo_EXE(aFolder, fileName.c_str());
				cnt++;
			}
			else if (ext == "h")
			{
				lTab[cnt] = new FileInfo_H(aFolder, fileName.c_str());
				cnt++;
			}
			else if (ext == "cpp")
			{
				lTab[cnt] = new FileInfo_CPP(aFolder, fileName.c_str());
				cnt++;
			}
			else
			{
				lTab[cnt] = new FileInfo_Other(aFolder, fileName.c_str());
				cnt++;
			}
		}
	} while (FindNextFileA(firstFile, &fileData) != 0);

	FindClose(firstFile);
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
	for (size_t i = 0; i < 100; i++)
	{
		if (aFiles[i] == NULL)
		{
			break;
		}

		aFiles[i]->DisplayInformation();
	}
}

void ReleaseMemory(IFileInfo** aFiles)
{
	for (size_t i = 0; i < sizeof(aFiles); i++)
	{
		delete aFiles[i];
	}
}

std::string FormatDirectory(const char* aFolder)
{
	std::string sFolder = aFolder;


	if ('*' != aFolder[strlen(aFolder) - 1])
	{
		sFolder.append("\\");
		sFolder.append("*");
	}

	return sFolder;
}
