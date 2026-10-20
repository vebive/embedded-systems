#include <stdio.h>

// typedef - defines new data types
// special data types may differ from system to system

int main()
{
    typedef float radius;

    radius a;

    a = 27.5;

    printf("A circle with radius %.2f has an area of %.2f\n",
        a,
        a*a*3.1415926);

    return(0);
}