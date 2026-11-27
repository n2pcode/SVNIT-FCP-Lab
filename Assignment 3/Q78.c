#include <stdio.h>

int main() {
    char str[100], ch;
    int i, found = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);
    printf("Enter a character to search: ");
    scanf(" %c", &ch);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("'%c' is present in the string\n", ch);
    else
        printf("'%c' is not present in the string\n", ch);

    return 0;
}