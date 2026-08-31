#include <stdio.h>

int main() {
    int rollno;
    char grade;
    float marks;

    printf("Enter roll number: ");
    scanf("%d", &rollno);

    printf("Enter marks: ");
    scanf("%f", &marks);

    while (getchar() != '\n');

    printf("Enter grade: ");
    scanf("%c", &grade);

    printf("\n----- Student Details -----\n");
    printf("Roll number: %d\n", rollno);
    printf("Marks: %.2f\n", marks);
    printf("Grade: %c\n", grade);

    return 0;
}