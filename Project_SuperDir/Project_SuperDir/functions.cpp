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
	
	//char FolderLocation[1024];
	//
	//LPWIN32_FIND_DATAA dataFound;
	//FindFirstFileA(aFolder, dataFound);
	return lTab;
}

string Salutation() {
	string test = "test";
	return test;
}
