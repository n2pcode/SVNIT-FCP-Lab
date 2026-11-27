#include <stdio.h>

int isArmstrong(int n) {
    int original = n, remainder, digits = 0, i;
    int sum = 0, power;

    while (n != 0) {          // count digits
        n = n / 10;
        digits++;
    }

    n = original;
    while (n != 0) {
        remainder = n % 10;
        power = 1;
        for (i = 1; i <= digits; i++) {
            power = power * remainder;
        }
        sum = sum + power;
        n = n / 10;
    }

    if (sum == original)
        return 1;
    else
        return 0;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong number\n", num);
    else
        printf("%d is Not an Armstrong number\n", num);

    return 0;
}