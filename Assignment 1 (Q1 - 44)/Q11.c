#include <stdio.h>

int main() {
    int total, hours, minutes, seconds;

    printf("Enter total seconds: ");
    scanf("%d", &total);

    hours = total / 3600;
    total = total % 3600;

    minutes = total / 60;
    seconds = total % 60;

    printf("Time = %d hours, %d minutes, %d seconds\n", hours, minutes, seconds);

    return 0;
}