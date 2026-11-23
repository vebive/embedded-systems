#include <stdio.h>
#include <time.h>

int main()
{
	time_t now;

	time(&now);
	//printf("It's now %ld\n", now); //displays the number of seconds since 1970
    printf("It's now %s",ctime(&now)); //displays the date and time now

	return(0);
}