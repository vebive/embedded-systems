#include <stdio.h>

int main()
{
    //Part 1
	int x;

	for(x=0; x<20; x++)
	{
		if( x<10 )
			putchar('*');
		printf("%d\n",x);
	}
    printf("\n");

    //Part 2
    int a,b;

	a = +50;
	b = -10;

	printf("%d + %d = %d\n",a,b,a+b);
    printf("\n");

    //Part 3
    int y, z;

	y = 50;
	z = 10;

	printf("%d + %d = %d\n",+y, -z, +y+-z);

	return(0);
}