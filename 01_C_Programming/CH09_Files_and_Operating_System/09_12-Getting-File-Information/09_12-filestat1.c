#include <stdio.h>
#include <sys/stat.h>
#include <time.h>

int main()
{
	const char filename[] = "betacopy.txt";
	struct stat fstat;

	stat(filename, &fstat);
	printf("%s is %ld bytes long\n", //%ld is byte size
			filename,
			fstat.st_size
		  );
	printf("It was modified on %s", ctime(&fstat.st_mtime));

	return(0);
}