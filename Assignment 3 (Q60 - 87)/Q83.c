#include <stdio.h>

int main() {
    char str[100], temp;
    int i, j, len = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    while (str[len] != '\0') {
        len++;
    }

    for (i = 0; i < len - 1; i++) {
        for (j = 0; j < len - 1 - i; j++) {
            if (str[j] > str[j + 1]) {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    printf("Sorted string: %s\n", str);
    return 0;
}