#include <stdio.h>
#include <string.h>

int main()
{
	const char filename[] = "hello.txt";

    char fullname[100]; // variable for get user name
    int ch; //variable for reading written text on the file

    FILE *database;

    //Part 1: 
    //Create the file
	database = fopen("hello.txt", "a"); //a stands for append
	if( database == NULL ) 
	{
		puts("Failed to create file");
		return(1);
	}

    //Prompt the user for their name
    printf("What is your name? ");
    fgets(fullname, sizeof(fullname), stdin);

    fullname[strcspn(fullname, "\n")] = '\0'; //To terminate the new line from "fullname"

    //Write name to the hello.txt file
    fprintf(database, fullname);
    fputc('\n', database);
    
    printf("%s has written to this file.\n", fullname); //Inform user with an output

	fclose(database); //Close the file

    //Part 2: Open the file
    database = fopen("hello.txt", "r"); //r stands for read
	if( database == NULL ) 
	{
		puts("Failed to create file");
		return(1);
	}

    printf("\nReading contents of the txt file:\n");
    while(1)
	{
		ch = fgetc(database);
		if( ch == EOF )
			break;
		putchar(ch);
	}

    fclose(database); //Close the file
	return 0;
}