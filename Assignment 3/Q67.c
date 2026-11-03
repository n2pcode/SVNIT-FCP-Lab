#include <stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0], i;

    for (i = 1; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main() {
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Maximum = %d\n", findMax(arr, n));

    return 0;
}