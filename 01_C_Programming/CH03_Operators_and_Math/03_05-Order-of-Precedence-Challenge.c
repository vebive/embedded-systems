//Write a program that calculates the total no. of artifacts at the museum
// 12 Rooms
// 16 Paintings and 4 Sculptures per room
// Write an equation to calculate the artifacts
//Output the result

//Solution

#include <stdio.h>

int main()
{
	int artifacts, rooms, paintings, sculptures;

	rooms = 12;
    paintings = 16;
    sculptures = 4;
    artifacts = rooms*(paintings + sculptures);

	printf("This museum has %d artifacts\n", artifacts);

	return(0);
}