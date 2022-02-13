#include <iostream>
#include <stdlib.h>
#include <fileapi.h>


#include "IFileInfo.h"
using std::string;

IFileInfo** FindFiles(const char* aFolder) {
	IFileInfo** lTab = new IFileInfo* [100];

	for (unsigned int i = 0; i < 100; i++)
	{
		lTab[i] = NULL;
	}

	//TODO
	
	char FolderLocation[1024];
	
	WIN32_FIND_DATAA fileData;
	HANDLE firstFile =  FindFirstFileA(aFolder, &fileData);

	lTab[0] = fileData.;
	return lTab;
}

string Salutation() {
	string test = "test";
	return test;
}
