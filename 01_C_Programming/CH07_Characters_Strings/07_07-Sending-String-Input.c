#include <stdio.h>

int main()
{
	char string[] = "Just practicing my programming skills!\n";
	int a;

	a = 0;
	while( putchar(string[a++]) )
		;

	return(0);
}