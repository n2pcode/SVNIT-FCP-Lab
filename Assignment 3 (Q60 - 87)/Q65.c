#include <stdio.h>

int isPrime(int n) {
    int i;

    if (n <= 1)
        return 0;

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return 0;     // found a divisor, so not prime
    }
    return 1;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num) == 1)
        printf("%d is Prime\n", num);
    else
        printf("%d is Not Prime\n", num);

    return 0;
}