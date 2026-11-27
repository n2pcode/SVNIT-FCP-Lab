#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    (ch >= 'a' && ch <= 'z') ? printf("%c is a Small Case Letter\n", ch) : printf("%c is not a Small Case Letter\n", ch);

    return 0;
}