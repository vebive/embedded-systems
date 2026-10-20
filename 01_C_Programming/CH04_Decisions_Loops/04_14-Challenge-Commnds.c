//CHALLENGE INFO
		// if R is input, output "move right"
		// if L is input, output "move left"
		// if B is input, output "move back"
		// if Q is input, break the loop
		// if H or ? is input, output valid commands
		// identify invalid input

#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1

int main()
{
	// variable declarations
    bool done;
    char x, y, z;
			
	/* main program loop */
	done = FALSE;
	while(!done)
	{
		// prompt for input
        printf("Command: ");
        scanf("%s", &x);

		// process input
        switch(x)
        {
            case 'R':
            case 'r':
                printf("Move right ");
                printf("\n");
                continue;

            case 'L':
            case 'l':
                printf("Move left ");
                printf("\n");
                continue;

            case 'B':
            case 'b':
                printf("Move back ");
                printf("\n");
                continue;

            case 'Q':
            case 'q':
                printf("'GOodbye!'");
                done = TRUE;
                break;

            case 'H':
            case 'h':
            case '?':
                printf("' You can go (L)eft, (R)ight, (B)ack'");
                printf("' Or you can (Q)uit'");
                continue;

            default:
                printf("%c is an invalid command. Try again. ", x);
                continue;

        }

	}

	return 0;
}