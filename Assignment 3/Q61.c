#include <stdio.h>

int isPalindrome(int n) {
    int original = n, reversed = 0, remainder;

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n = n / 10;
    }

    if (original == reversed)
        return 1;
    else
        return 0;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("%d is a Palindrome\n", num);
    else
        printf("%d is Not a Palindrome\n", num);

    return 0;
}