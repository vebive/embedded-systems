#include <stdio.h>
#include <ctype.h>

int main()
{
	char string[] = "123 tHE wEST pHILIPPINE sEA iS oURS!!! -fILIPINO eNGINEER\n";

    int ch;
	int x = 0;

	while( (ch = string[x]) != '\0' )
	{
        if( isupper(ch) )
            putchar( tolower(ch));

        else if( islower(ch) )
            putchar( toupper(ch));
        else
            putchar(ch);
        x++;
		//putchar( toupper(ch) ); //you can change to tolower() to toupper() :)
		//x++;
	}

	return(0);
}
