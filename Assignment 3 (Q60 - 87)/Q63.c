#include <stdio.h>

void exchange(int x, int y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;

    printf("After exchange: x = %d, y = %d\n", x, y);
}

int main()
{
    int x, y;

    printf("Enter value of x: ");
    scanf("%d", &x);

    printf("Enter value of y: ");
    scanf("%d", &y);

    printf("Before: x = %d, y = %d\n", x, y);

    exchange(x, y);

    return 0;
}