#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void create_file(const char *f)
{
    FILE *fh;
    char name [64];

    //Create the file
	fh = fopen(f, "w"); //a stands for append, w stands for write
	if( f == NULL ) 
	{
		puts("Failed to create file");
	}

    printf("A new file is created.\n");

    //Prompt user to enter name
    printf("Type your name: ");
    scanf("%s", name);

    fprintf(fh, name); //Write user output to file

    fclose(fh); //Close the file

    printf("Your input was written to the %s file.\n", f); //Inform user

}

void read_file(const char *f)
{
    FILE *fh;
    char input[64];

    //Open the file
	fh = fopen(f, "r"); //r stands for read
	if( f == NULL ) 
	{
		puts("Failed to create file");
	}

    printf("Reading the contents of the %s file:\n", f); //Inform user

    // fgets reads up to sizeof(buffer) - 1 characters and adds '\0'
    fgets(input, sizeof(input), fh);
    printf("%s \n", input);
 
    fclose(fh);

}

void delete_file(const char *f)
{
    int r;

	r = unlink(f); //to delete the file
	if( r == 0 )
		puts("File is now deleted");
	else
		puts("Something went wrong!");
}

int main()
{
	const char filename[] = "stuff.dat";

	create_file(filename);
	read_file(filename);
	delete_file(filename);

	return 0;
}