#pragma once
#include <iostream>
#include "IFileInfo.h"

using std::string;

IFileInfo** FindFiles(const char* aFolder);

std::string FormatDirectory(const char* aFolder);

void RetrieveInformation(IFileInfo** aFiles);

void DisplayInformations(IFileInfo** aFiles);

void ReleaseMemory(IFileInfo** aFiles);

