//Challenge:
//Create a structure containing:
//Your bday, height in km, and name
//Bday is nested structure (day, month, year)
//Height in km (real number)
//Name is string

#include <stdio.h>
#include <string.h>

int main()
{
    struct date{
        int day;
        int month;
        int year;
    };

    struct person{
        struct date bday;
        char name[64];
        float height;
    };

    struct person engineer;

    engineer.bday.day = 8;
    engineer.bday.month =10;
    engineer.bday.year = 1999;
    strcpy(engineer.name, "Engr. Vince Emmanuel Bive");
    engineer.height = 1.66/1000;

    printf("%s was born on %d/%d/%d and is %.6f kilometers tall",
            engineer.name,
            engineer.bday.day,
            engineer.bday.month,
            engineer.bday.year,
            engineer.height
        );

	return 0;
}
