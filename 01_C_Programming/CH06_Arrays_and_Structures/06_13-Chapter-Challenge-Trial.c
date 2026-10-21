#include <stdio.h>

struct Student {
    char name[50];
    int roll_number;
    float gpa;
};

int main() {
    struct Student s1;

    printf("Enter name (single word): ");
    // No '&' is needed for s1.name because it is a character array, 
    // which automatically decays into a pointer/address.
    scanf("%49s", s1.name); 

    printf("Enter roll number: ");
    // '&' IS required here to get the address of the integer member.
    scanf("%d", &s1.roll_number); 

    printf("Enter GPA: ");
    // '&' IS required here to get the address of the float member.
    scanf("%f", &s1.gpa); 

    printf("\nStudent Details:\nName: %s\nRoll: %d\nGPA: %.2f\n", s1.name, s1.roll_number, s1.gpa);
    return 0;
}
