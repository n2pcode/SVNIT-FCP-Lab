#include <stdio.h>

int main() {
    float a, b, c, max;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    printf("Enter third number: ");
    scanf("%f", &c);

    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("Maximum = %.2f\n", max);

    return 0;
}