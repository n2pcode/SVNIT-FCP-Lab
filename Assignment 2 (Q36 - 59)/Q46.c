#include <stdio.h>

int main() {
    int arr[100], n, i, max, second = 0, hasSecond = 0;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    for (i = 0; i < n; i++) {
        if (arr[i] < max) {
            if (hasSecond == 0 || arr[i] > second) {
                second = arr[i];
                hasSecond = 1;
            }
        }
    }

    printf("Max = %d\n", max);
    if (hasSecond)
        printf("Second max = %d\n", second);
    else
        printf("No second max (all numbers are equal)\n");

    return 0;
}