// Ternary Operator 
//  (condition) ? x : y;
//  where   x is given if condition is TRUE
//          y is given if condition is FALSE


#include <stdio.h>

int main()
{
    //Part 1
	int a, b, c;

	a = 10;
	b = 14;
	c = ( a > b ) ? a : b;
	printf("%d is the greater of %d and %d\n", c, a, b);
    printf("\n");

    //Part 2
    int x;

	for(x=1; x<=10; x++)
	{
		printf("%d - %s\n", x, x % 2 ? "odd" : "even");
	}

	return(0);
}