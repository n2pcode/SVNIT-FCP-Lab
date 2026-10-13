#include <stdio.h>

int main() {
    int n, i;
    int sumOdd = 0, sumEven = 0;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sumEven = sumEven + i;
        } else {
            sumOdd = sumOdd + i;
        }
    }

    printf("Sum of Even numbers = %d\n", sumEven);
    printf("Sum of Odd numbers = %d\n", sumOdd);

    return 0;
}