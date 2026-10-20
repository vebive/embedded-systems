#include <stdio.h>

int main()
{
    char c;
    int i;
    float f;
    double d;

    //input
    printf("Type a character: ");
    scanf("%c", &c);
    printf("Type an integer: ");
    scanf("%i", &i);
    printf("Type a small value: ");
    scanf("%f", &f);
    printf("Type a huge value: ");
    scanf("%lg", &d);

    //output
    printf("\nCharacter: %c\n", c);
    printf("\nInteger: %i", i);
    printf("\nSingle-precision: %f\n", f);
    printf("\nDouble-precision: %lg\n", d);

    return 0;
}