#include <stdio.h>

int main()
{
	int a;

	printf("Type a value: ");
	scanf("%d", &a);
	if( a < 10 )
	{
		puts("You typed a value less than 10");
	}
	puts("Thank you");
    printf("\n");

    // Part 2

    int b;

	for(b=1; b<=7; b++)
	{
		puts("Help! I'm trapped in the computer!");
        
	}
    printf("\n");

    //Part 3

    int c = 0;

	while( c <= 20 )
	{
		puts("Good day to you!");
		c++;
		if( c == 10 )
			break;
	}

	return(0);
}