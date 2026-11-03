#include <stdio.h>

int isEven(int n) {
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isEven(num))
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);

    return 0;
}