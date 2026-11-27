#include <stdio.h>

int main() {
    int n, originalNum, reversedNum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    originalNum = n;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        reversedNum = reversedNum * 10 + remainder;
        originalNum = originalNum / 10;
    }

    if (n == reversedNum) {
        printf("%d is a Palindrome\n", n);
    } else {
        printf("%d is Not a Palindrome\n", n);
    }

    return 0;
}