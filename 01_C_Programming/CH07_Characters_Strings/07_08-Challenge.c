#include <stdio.h>
#include <string.h>

int main()
{
    char item[] = "Egg plant";
    int quantity = 7;
    float price = 18.99;
    float total = price*quantity;

    printf("You have purchased %d '%ss' with a price of PHP%.2f.",
            quantity, item, total);
	return 0;
}
