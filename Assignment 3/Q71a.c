#include <stdio.h>

int stringLength(char str[]) {
    int i = 0;
    while (str[i] != '\0' && str[i] != '\n') {
        i++;
    }
    return i;
}

int main() {
    char str[200];

    printf("Enter a line of text: ");
    fgets(str, 200, stdin);

    printf("Length of string = %d\n", stringLength(str));

    return 0;
}