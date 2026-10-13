#include <stdio.h>

int main() {
    float num, sum = 0;

    printf("Enter numbers (negative number to stop):\n");
    scanf("%f", &num);

    while (num >= 0) {
        sum = sum + num;
        scanf("%f", &num);
    }

    printf("Sum = %.2f\n", sum);

    return 0;
}