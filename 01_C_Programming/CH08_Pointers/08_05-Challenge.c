#include <stdio.h>

int main()
{
	char title[] = "Pointers don't intimidate me!\n";
    char *ptr;
    size_t length = sizeof(title); //Get the size of variable array 'title'

    ptr = title;

    int x;
    for( x=0; x<length; x++)
    {
        printf("%c", *(ptr+x));
    }

	return 0;
}
