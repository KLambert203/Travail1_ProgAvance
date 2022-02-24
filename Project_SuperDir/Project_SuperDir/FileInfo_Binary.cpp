#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <io.h>
#include <errno.h>

#include "FileInfo_Binary.h"

void FileInfo_Binary::RetrieveInformation()
{

	std::string fullPath = mFolder;
	fullPath.append("\\");
	fullPath.append(mFile);

	struct stat pstat;
	FILE *f;
	errno_t err = fopen_s(&f, fullPath.c_str(), "r");

	if (err != 0)
	{
		fclose(f);
		std::cerr << "ERREUR: le fichier ne peut etre ouvert";
	}
	else
	{
		fstat(_fileno(f), &pstat);
		nFileSize = pstat.st_size;
		fclose(f);
		FormatFileSize();
	}
}

void FileInfo_Binary::FormatFileSize()
{
	
	DataSize = "";
	dFileSize = nFileSize;
	if (nFileSize >= 0 && nFileSize < 1024) { DataSize = "o"; }
	else if (nFileSize >= 1024 && nFileSize < 1024000) { DataSize = "Kio"; dFileSize /= 1000; }
	else if (nFileSize >= 1024000 && nFileSize < 1024000000) { DataSize = "Mio"; dFileSize /= 1000000;}
	else{ DataSize = "Gio"; dFileSize /= 1000000000;}


}