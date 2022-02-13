#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "functions.h"


int main (int aCount, const char ** aVector)
{
	if (2 > aCount)
	{
		return 1;
	}

	FindFiles(aVector[1]);
	return 0;
}