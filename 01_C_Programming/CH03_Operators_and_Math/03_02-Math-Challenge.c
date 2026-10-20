// Declare variables a, b, and c
// Add assignments to three variables
// Assign variable a to 15
// Assign variable b the value of variable a divided by 2
// Assign variable c the value of variable b multiplied by 4

#include <stdio.h>

int main()
{
	/* variable declarations */
    int a, c;
    float b;

	/* variable assignments */
    a = 15;
    b = a/2.0;
    c = b*4;

	/* output */
	printf("Value of variable A = %d\n", a);
	printf("Value of variable B = %.3f\n", b);
	printf("value of vairable C = %d\n", c);

	return(0);
}