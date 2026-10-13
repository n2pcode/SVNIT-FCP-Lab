#include <stdio.h>

int main() {
    int arr[10], i, sum = 0;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++) {
        sum = sum + arr[i];
    }

    printf("\nSum of all elements = %d\n", sum);

    return 0;
}