#include <stdio.h>

int main()
{
	int a,b;

	printf("Enter two values, separated by a space: ");
	scanf("%d", &a);
	scanf("%d", &b);

	// add
    printf("%d + %d = %d\n", a, b, a+b);

	// subtract
    printf("%d - %d = %d\n", a, b, a-b);

	// multiply
    printf("%d * %d = %d\n", a, b, a*b);

	// divide
    printf("%d / %d = %.2f\n", a, b, (float)a/b);

	// modulus
    printf("%d modulo %d = %d\n", a, b, a%b);

	// bit shift right
    printf("%d bit shift right to %d = %d\n", a, b, a>>b);

	// bit shift left
    printf("%d bit shift left to %d = %d\n", a, b, a<<b);

    //int r;
    //r = r <<= 2;
    printf("%d << %d = %d\n", 10, 2, 10<<2);
	return 0;
}