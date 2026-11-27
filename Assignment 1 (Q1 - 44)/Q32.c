#include <stdio.h>

int main() {
    int n, i;
    float num, max, secondMax;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter number 1: ");
    scanf("%f", &max);
    secondMax = -99999;   // very small starting value

    for (i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &num);

        if (num > max) {
            secondMax = max;
            max = num;
        } else if (num > secondMax) {
            secondMax = num;
        }
    }

    printf("\nMaximum = %.2f\n", max);
    printf("Second Maximum = %.2f\n", secondMax);

    return 0;
}