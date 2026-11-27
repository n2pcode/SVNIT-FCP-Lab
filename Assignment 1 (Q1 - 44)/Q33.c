#include <stdio.h>

int main() {
    int n, i;
    float num, max, min;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter number 1: ");
    scanf("%f", &max);
    min = max;   // start both max and min with the first number

    for (i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &num);

        if (num > max) {
            max = num;
        }
        if (num < min) {
            min = num;
        }
    }

    printf("\nMaximum = %.2f\n", max);
    printf("M
        
        inimum = %.2f\n", min);

    return 0;
}