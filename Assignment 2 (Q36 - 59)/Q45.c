#include <stdio.h>

int main() {
    int arr[10], i;
    int posCount = 0, negCount = 0, zeroCount = 0;

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++) {
        if (arr[i] > 0) {
            posCount++;
        } else if (arr[i] < 0) {
            negCount++;
        } else {
            zeroCount++;
        }
    }

    printf("\nTotal Positive elements = %d\n", posCount);
    printf("Total Negative elements = %d\n", negCount);
    printf("Total Zero elements = %d\n", zeroCount);

    return 0;
}