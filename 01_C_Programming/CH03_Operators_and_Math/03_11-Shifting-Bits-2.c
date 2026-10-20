#include <stdio.h>

int main()
{
	int a = 1;

	while(a < 33000) // try with a > 0
	{
		printf("%d\n",a);
		a = a << 1; // you can also try a = a >> 2;
	}

    printf("\n");

    //Part 2

    int b = 1000000;

	while(b > 0)
	{
		printf("%d\n",b);
		b = b >> 1;
	}

	return(0);
}