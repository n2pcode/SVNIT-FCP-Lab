#include <stdio.h>

int main() {
    int n, i;
    int isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1) {
        printf("%d is Prime\n", n);
    } else {
        printf("%d is Composite\n", n);
    }

    return 0;
}