#include <stdio.h>

int main() {
    char str[100];
    int i, len = 0, isPalin = 1;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    while (str[len] != '\0') {
        len++;
    }

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalin = 0;
            break;
        }
    }

    if (isPalin)
        printf("The string is a Palindrome\n");
    else
        printf("The string is Not a Palindrome\n");

    return 0;
}