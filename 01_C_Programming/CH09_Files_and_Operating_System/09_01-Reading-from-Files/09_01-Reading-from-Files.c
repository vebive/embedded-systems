#include <stdio.h>

int main()
{
	const char filename[] = "about-me.txt";
	FILE *fh; //File Handle
	int ch; //variable set to read the file

	/* open the file */
	fh = fopen(filename,"r");
	if( fh == NULL ) //File is tested agaisnt NULL to ensure that the file is opened properly
	{
		printf("Unable to read from file %s\n",filename);
		return(1);
	}
	
	while(1)
	{
		ch = fgetc(fh);
		if( ch == EOF )
			break;
		putchar(ch);
	}

	/* clean-up */
	fclose(fh);
	return(0);
}
