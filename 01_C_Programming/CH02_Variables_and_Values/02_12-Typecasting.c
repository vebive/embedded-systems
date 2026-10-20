#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //Part 1
    //int a, b;
    //a = 100;
    //b = 7;

    //printf("%d / %d = %f\n", a, b, (float)a/b); //(float) is a typecast

    //Part 2
    int x, r[5];
    srand((unsigned)time(NULL));

    for(x=0; x<5; x++)
        r[x] = rand()%10+1;

    printf("Heres the %d random values: \n", 5);
    for(x=0; x<5; x++)
        printf("%3d\n", r[x]);

    return 0;
}