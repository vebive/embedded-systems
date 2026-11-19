#include <stdio.h>

int main()
{
	FILE *fh;

	/* open/create the file */
	fh = fopen("09_02-output.txt", "w");
	if( fh == NULL )
	{
		puts("Failed to create file");
		return(1);
	}

	/* output */
	fprintf(fh, "Hello there, file!\n"); //Write the given text to the file

	/* close the file */
	fclose(fh);

	return(0);
}