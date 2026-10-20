/*main program*/
#include <stdio.h>
#include <stdlib.h>

main()
{
    //initialization
    int a, b;

    //initial message
    puts("How fast can you finish this LinkedIn Learning Course? ");
    scanf("%d", &b);
    
    //main program loop
    for(a=0; a<b; b--)
    {
        printf("I'll finish this course in %d\n", b);
        if(b==0)
            break;
    }

    //output results
    return 0;
}