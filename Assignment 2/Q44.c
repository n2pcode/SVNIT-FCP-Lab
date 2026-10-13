#include <stdio.h>

int main() {
    int arr[10], i, oddCount = 0, evenCount = 0;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("\nTotal Odd elements = %d\n", oddCount);
    printf("Total Even elements = %d\n", evenCount);

    return 0;
}