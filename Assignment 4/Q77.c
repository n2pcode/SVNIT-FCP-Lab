#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100], copy[100], joined[200], rev[100];

    printf("Enter first string: ");
    scanf(" %[^\n]", s1);
    printf("Enter second string: ");
    scanf(" %[^\n]", s2);

    printf("Length of first string = %d\n", (int)strlen(s1));

    strcpy(copy, s1);
    printf("Copy of first string = %s\n", copy);

    strcpy(joined, s1);
    strcat(joined, s2);
    printf("Concatenated = %s\n", joined);

    if (strcmp(s1, s2) == 0)
        printf("Strings are Equal\n");
    else
        printf("Strings are Not Equal\n");

    strcpy(rev, s1);
    strrev(rev);
    printf("Reverse of first string = %s\n", rev);

    return 0;
}