#include <stdio.h>

int main()
{
	FILE *fh;
	int a;

	/* open/create the file */
	fh = fopen("09_02-alphabet.txt", "a"); //a stands for append
	if( fh == NULL )
	{
		puts("Failed to create file");
		return(1);
	}

	/* output */
    fprintf(fh, "I'm gonna be a star");
    fputc('\n', fh);

	/* close the file */
	fclose(fh);

	return(0);
}
