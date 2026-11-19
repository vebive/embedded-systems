//Challenge
//

#include <stdio.h>
#include <stdlib.h>

#define SIZE 64

struct person fill(void);
void output(struct person y);

struct person {
	char name[SIZE];
	int id;
};

/* main program */
int main()
{
	struct person you;

	/* fill the structure */
	you = fill();

	/* output the structure */
	output(you);

	return 0;
}

struct person fill(void)
{
	static struct person y; //Static classifier is used in order to retain the value in multiple function calls

	printf("Enter your name: ");
    fgets(y.name,SIZE,stdin); //fgets serves as an alternative in placing user input into a structure

	printf("Enter your ID no.: ");
	scanf("%d", &y.id);

	return(y);
}

void output(struct person y)
{
	printf("ID %d belongs to %s", y.id, y.name);
}


