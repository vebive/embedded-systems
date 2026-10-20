#include <stdio.h>

int main()
{
    //Part 1 - single char
    char a;

    printf("Type a single character: ");
    scanf("%c", &a);

    printf("You typed \"%c\", which is code %d\n", a, a);

    //return 0;

    //Part 2 - single char
    char greetings[4] = { 'H', 'i', '\x21', '\0' };

    puts(greetings);
    return 0;

    //
    //char string[] = "String ngani!\n";

    //puts(string);
}