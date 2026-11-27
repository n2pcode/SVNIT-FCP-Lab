#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {

        // count UP from 1 to i
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // count DOWN from i-1 to 1
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}