#include <stdio.h>

int main() {
    int base, exp;
    int power = 1;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exp);

    for (int i = 1; i <= exp; i++) {
        power = power * base;
    }

    printf("%d ^ %d = %d\n", base, exp, power);

    return 0;
}