#include <Windows.h>
#include <iostream>
#include <stdlib.h>
#include <fileapi.h>


#include "IFileInfo.h"
#include "FileInfo_Base.h"
using std::string;

IFileInfo** FindFiles(const char* aFolder) {
	IFileInfo** lTab = new IFileInfo* [100];

	for (unsigned int i = 0; i < 100; i++)
	{
		lTab[i] = NULL;
	}

	//TODO
	
	WIN32_FIND_DATAA fileData;
	HANDLE firstFile =  FindFirstFileA(aFolder, &fileData);

	for (unsigned int i = 0; i < 100; i++)
	{
		if (firstFile == INVALID_HANDLE_VALUE)
		{
			break;
		}

		
	}

	std::cout << fileData.dwFileAttributes << std::endl;

	FindNextFileA(firstFile, &fileData);
	std::cout << fileData.cFileName << std::endl;

	return lTab;
}
