#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "functions.h"
#include "IFileInfo.h"

int main (int aCount, const char ** aVector)
{
	if (2 > aCount)
	{
		printf_s("Vous devez specifier un repertoire a analyser!");
		return 1;
	}

	IFileInfo** lTab = FindFiles(aVector[1]);

	RetrieveInformation(lTab);

	DisplayInformations(lTab);

	ReleaseMemory(lTab);

	return 0;
}