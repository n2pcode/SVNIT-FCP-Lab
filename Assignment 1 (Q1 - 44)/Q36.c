#include <stdio.h>

int main() {
    int n, i;

    printf("Enter value of N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i = i + 2) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}