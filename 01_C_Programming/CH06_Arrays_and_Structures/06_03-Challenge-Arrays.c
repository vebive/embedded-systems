#include <stdio.h>

int main()
{
	int age[5];
	int x;

	for(x=0;x<5;x++)
	{
		printf("Age #%d: ", x+1);
		scanf("%d", &age[x]);
	}

    int y;
	for(y=0; y<5; y++)
    {
		printf("I know someone who is %d years old\n", age[y]);
    }

	return(0);
}
