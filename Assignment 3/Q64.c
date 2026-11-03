#include <stdio.h>

void fibonacci(int n) {
    int first = 0, second = 1, next, i;

    for (i = 1; i <= n; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
}

int main() {
    printf("N = 5:  ");
    fibonacci(5);

    printf("N = 10: ");
    fibonacci(10);

    printf("N = 15: ");
    fibonacci(15);

    return 0;
}