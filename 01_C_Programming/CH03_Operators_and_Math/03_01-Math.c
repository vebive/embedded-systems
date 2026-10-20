#include <stdio.h>

int main()
{
    //Part 1 The Basics

	int a,b;

	a = 15;
	b = 8;

	puts("Basic Math: Part 1");
	printf("%d + %d = %d\n", a, b, a+b); //Addition
	printf("%d - %d = %d\n", a, b, a-b); //Subtration
	printf("%d * %d = %d\n", a, b, a*b); //Multiply
	printf("%d / %d = %d\n", a, b, a/b); //Divide
    printf("\n");

    //Part 2 Increment and Decrement

    a = 10;
	b = a;

    puts("Basic Math: Part 2");
	printf("a is %d, b is %d\n", a++, b--);
	//a++;
	//b--;
	printf("a is %d, b is %d\n",a,b);
    printf("a is %d, b is %d\n", ++a, --b);
    printf("\n");

    //Part 3 Using Modulo Function %

    int mod, x;
    puts("Basic Math: Part 3");
	printf("Enter a value from 2 to 10: ");
	scanf("%d",&mod);

	for(x=1; x<=10; x++)
	{
		a = x % mod;
		printf("%2d %% %d = %d\n",x,mod,a);
	}

	return(0);
}