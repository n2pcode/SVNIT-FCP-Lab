#include <stdio.h>

int main() {
    char str[200];
    int i, chars = 0, words = 0, inWord = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    for (i = 0; str[i] != '\0'; i++) {
        chars++;

        if (str[i] != ' ') {
            if (inWord == 0) {      // a new word is starting
                words++;
                inWord = 1;
            }
        } else {
            inWord = 0;             // a space ends the word
        }
    }

    printf("Total characters (with spaces) = %d\n", chars);
    printf("Total words = %d\n", words);
    return 0;
}