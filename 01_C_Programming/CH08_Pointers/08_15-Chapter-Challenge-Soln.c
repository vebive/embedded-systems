#include <stdio.h>
#include <stdlib.h>

// write the get_input() function here
char *get_input(int size)
{
    char *text;
    int x = 0;

    /* allocate storage */
	text = malloc( sizeof(char) *size );

	if( text == NULL)
	{
		puts("Unable to allocate storage");
		exit(1);
	}

    //Read input
    fgets(text, size, stdin);

    //Remove new line
    while( *(text+x) != '\0')
    {
        if(*(text + x) == '\n')
        {
            *(text + x) = '\0';
            break;
        }
        x++;
    }

    return(text);

}

int main()
{
	char *your_name, *your_city;

	printf("Your name: ");
	your_name = get_input(64);
	printf("Your city: ");
	your_city = get_input(64);

	printf("%s lives in %s.\n", your_name, your_city);

    free(your_name);
    free(your_city);

	return 0;
}
