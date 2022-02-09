#pragma once
#include <iostream>
#include "IFileInfo.h"

using std::string;

IFileInfo** FindFiles(const char* aFolder);
string Salutation();