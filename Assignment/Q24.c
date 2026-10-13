#include <stdio.h>

int main() {
    float x, y, power;
    int n, i;

    printf("Enter value of x: ");
    scanf("%f", &x);

    printf("Enter value of n: ");
    scanf("%d", &n);

    if (n == 1) {
        y = 1 + x;
    } else if (n == 2) {
        y = 1 + x / n;
    } else if (n == 3) {
        power = 1;
        for (i = 1; i <= n; i++) {
            power = power * x;
        }
        y = 1 + power;
    } else {   // n > 3 or n < 1
        y = 1 + n * x;
    }

    printf("Y(x, n) = %.2f\n", y);

    return 0;
}