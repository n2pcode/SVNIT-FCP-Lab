#include <stdio.h>

int main() {
    float sub1, sub2, sub3, sub4, sub5;
    float total, percentage;

    printf("Enter marks of subject 1: ");
    scanf("%f", &sub1);

    printf("Enter marks of subject 2: ");
    scanf("%f", &sub2);

    printf("Enter marks of subject 3: ");
    scanf("%f", &sub3);

    printf("Enter marks of subject 4: ");
    scanf("%f", &sub4);

    printf("Enter marks of subject 5: ");
    scanf("%f", &sub5);

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (total / 500) * 100;

    printf("\nTotal Marks = %.2f\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    if (percentage >= 60) {
        printf("Division = First Division\n");
    } else if (percentage >= 45) {
        printf("Division = Second Division\n");
    } else if (percentage >= 33) {
        printf("Division = Third Division\n");
    } else {
        printf("Division = Fail\n");
    }

    return 0;
}