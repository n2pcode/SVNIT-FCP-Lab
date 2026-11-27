#include <stdio.h>

int main() {
    int n, i, j, space;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {

        // 1) leading spaces to center the triangle
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }

        // 2) stars: 1, 3, 5, 7, 9 ...
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}