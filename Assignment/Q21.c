#include <stdio.h>

int main()
{
    int n1, n2, result;
    char op;

    printf("Enter a number 1: ");
    scanf("%d", &n1);

    printf("Enter a number 2: ");
    scanf("%d", &n2);

    printf("Enter an operator +, -, *, /: ");
    scanf(" %c", &op);

    switch(op)
    {
        case '+':
            result = n1 + n2;
            printf("result = %d", result);
            break;

        case '-':
            result = n1 - n2;
            printf("result = %d", result);
            break;

        case '*':
            result = n1 * n2;
            printf("result = %d", result);
            break;

        case '/':
            result = n1 / n2;
            printf("result = %d", result);
            break;
    }

    return 0;
}