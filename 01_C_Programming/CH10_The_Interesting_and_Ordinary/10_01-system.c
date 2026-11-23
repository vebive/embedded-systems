#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Press Enter to clear the screen: ");
	getchar();
	system("cls");	//cls for windows
	puts("Thank you");

	return(0);
} 

//system() allows you to execute OS commands through this code.