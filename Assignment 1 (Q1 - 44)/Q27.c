#include <stdio.h>

int main() {
    int n, i;
    int isPrime = 1;   // assume prime initially

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = 0;   // 0, 1, and negatives are not prime
    } else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;   // found a divisor, so not prime
                break;
            }
        }
    }

    if (isPrime == 1) {
        printf("%d is Prime\n", n);
    } else {
        printf("%d is Not Prime\n", n);
    }

    return 0;
}