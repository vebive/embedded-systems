#include <stdio.h>

int main()
{
	int ch;

	printf("Type a character: ");
	ch = getchar();
	printf("Character '%c' received.\n", ch);

    //however, if we will put two getchar functions, 
    //any typed keys are read by the language

    int ch1, ch2;

    printf("Type a character: ");
	ch1 = getchar();

    printf("Type a character: ");
	ch2 = getchar();

	printf("Character '%c' and '%c' received.\n", ch1, ch2);

	return(0);
}
