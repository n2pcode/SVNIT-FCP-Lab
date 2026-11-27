#include <stdio.h>

int main() {
    int n, originalNum, remainder, digits = 0;
    long sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    originalNum = n;

    // Step 1: Count number of digits
    while (originalNum != 0) {
        originalNum = originalNum / 10;
        digits++;
    }

    // Step 2: Calculate sum of each digit raised to the power of 'digits'
    originalNum = n;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        long power = 1;
        for (int i = 1; i <= digits; i++) {
            power = power * remainder;
        }
        sum = sum + power;
        originalNum = originalNum / 10;
    }

    // Step 3: Compare sum with original number
    if (sum == n) {
        printf("%d is an Armstrong number\n", n);
    } else {
        printf("%d is Not an Armstrong number\n", n);
    }

    return 0;
}