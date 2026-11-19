#include <stdio.h>

int main()
{
	char *veeps[5] = { "Adams", "Jefferson", "Burr", "Clinton", "Gerry" };
	int x;

    printf("Part 1\n");
	for(x=0;x<5;x++)
		printf("%s\n",veeps[x]);

    printf("\nPart 2\n");
    //Alternative Code using Pointers
    for(x=0;x<5;x++)
		printf("%s\n",*(veeps+x));

    printf("\nPart 3\n");
    //Getting the First letter of each char in the array using pointers
    for(x=0;x<5;x++)
		printf("%c\n",**(veeps+x));

    printf("\nPart 4\n");
    //Getting other letters of each char in the array using pointers
    for(x=0;x<5;x++)
		printf("%c\n",*(*(veeps+x)+1));

	return(0);
}
