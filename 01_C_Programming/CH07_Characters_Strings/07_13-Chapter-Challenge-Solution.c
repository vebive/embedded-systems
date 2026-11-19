#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define SIZE 32

/* main program */
int main()
{
	// variable declaration
    char cmd[SIZE];
    int ch;
    int x = 0;
    int i;
    int output;

	while(1)
	{
		printf("Command: ");

		// fetch input
        fgets(cmd, SIZE, stdin);

		// remove newline

		// convert to uppercase
        while ( ch = cmd[x] != '\0' )
        {
            output = toupper(ch);
            for(i=0; i<SIZE; i++)
	        {
		        if(cmd[i] == '\n')
			        cmd[i] = '\0';
                break;
	        }
            x++;
            printf("Processing command '%c'", output);
        }
        
		// output "Processing command 'cmd'"
       // printf("Processing command '%s'", );

		// break the loop on `QUIT`
	}

	return 0;
}