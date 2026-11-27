#include <stdio.h>

int main() {
    char str[100], oldCh, newCh;
    int i;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);
    printf("Enter character to replace: ");
    scanf(" %c", &oldCh);
    printf("Enter new character: ");
    scanf(" %c", &newCh);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == oldCh) {
            str[i] = newCh;
        }
    }

    printf("Updated string: %s\n", str);
    return 0;
}