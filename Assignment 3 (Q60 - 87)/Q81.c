#include <stdio.h>

int main() {
    char str[200];
    int i, lower = 0, upper = 0, digit = 0, special = 0;

    printf("Enter a line of text: ");
    scanf(" %[^\n]", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            lower++;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            upper++;
        else if (str[i] >= '0' && str[i] <= '9')
            digit++;
        else
            special++;
    }

    printf("Lower case letters = %d\n", lower);
    printf("Upper case letters = %d\n", upper);
    printf("Digits = %d\n", digit);
    printf("Special symbols = %d\n", special);
    return 0;
}