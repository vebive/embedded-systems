#include <stdio.h>
#include <stdlib.h>

int main()
{
    const float ratio = 3.0/4.0;
    char a;
    int b;
    float c;

    a = 'A';
    b = 7;
    c = 1.975;

    printf("The value of variable a is %c\n", a);
    printf("The value of variable b is %d\n", b);
    printf("The value of variable c is %.3f\n", c);
    printf("The value of constant ratio is %.2f\n", ratio);

}