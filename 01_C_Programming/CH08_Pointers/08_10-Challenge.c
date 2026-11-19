#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct data{
        int number;
        char letter;
    };

    struct data *content[26];
    int x;

    for (x=0; x<26; x++)
    {

    content[x] = malloc( sizeof(struct data) );
	if( content[x] == NULL )
	{
		puts("Memory Allocation Error!");
		exit(1);
	}
    
    content[x]->number = x;
    content[x]->letter = 'A' + x;

    }

    for (x=0; x<26; x++)
    {
        printf("%d, %c\n", content[x]->number, content[x]->letter);
    }

    for (x=0; x<26; x++)
    {
        free(content[x]);
    }

	return 0;
}
