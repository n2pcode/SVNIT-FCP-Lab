#include <stdio.h>

int main() {
    int n, i, j;
    float term, sum = 0;
    long factorial;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        factorial = 1;
        for (j = 1; j <= i; j++) {
            factorial = factorial * j;
        }
        term = (float)i / factorial;
        sum = sum + term;
    }

    printf("Sum = %.4f\n", sum);

    return 0;
}