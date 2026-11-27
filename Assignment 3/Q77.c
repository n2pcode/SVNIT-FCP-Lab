
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], str3[100];
    int i, len;
    char temp;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // 1. Find length of string
    printf("\nLength of first string = %d", (int)strlen(str1));

    // 2. Copy string
    strcpy(str3, str1);
    printf("\nCopied string = %s", str3);

    // 3. Concatenate strings
    strcpy(str3, str1);
    strcat(str3, str2);
    printf("\nConcatenated string = %s", str3);

    // 4. Compare strings
    if(strcmp(str1, str2) == 0)
        printf("\nBoth strings are equal");
    else
        printf("\nBoth strings are not equal");

    // 5. Reverse string
    strcpy(str3, str1);

    len = strlen(str3);

    for(i = 0; i < len/2; i++)
    {
        temp = str3[i];
        str3[i] = str3[len-1-i];
        str3[len-1-i] = temp;
    }

    printf("\nReversed string = %s", str3);

    return 0;
}
