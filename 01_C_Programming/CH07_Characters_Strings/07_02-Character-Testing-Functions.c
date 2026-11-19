#include <stdio.h>
#include <ctype.h>

int main()
{
	char string[] = "Nifty TEXT! 123\n";
	char ch;
	int x = 0;

	while( (ch = string[x]) != '\0' )
	{
		if( islower(ch) ) // you can the function into other character-testing type to see different results
			putchar('_');
		else
			putchar(ch);
		x++;
	}

	return(0);
}

//isalpha() - char is part of the alphabet
//isdigit() - char is a number (0-9)
//isupper() - char is uppercase
//islower() - char is lowercase
