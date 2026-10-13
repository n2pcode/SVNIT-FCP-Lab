#include <stdio.h>

int main()
{
    int n, i, is_not_prime;
    is_not_prime = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
            is_not_prime = 1;
    }

    if(is_not_prime == 0)
        printf("Number is prime");
    else
        printf("Number is not prime");

    return 0;
}