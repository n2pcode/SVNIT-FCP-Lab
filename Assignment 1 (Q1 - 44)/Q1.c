#include <stdio.h>

int main()
{
    float principal, rate, time, interest;
    printf("Enter principal: ");
    scanf("%f", &principal);
    printf("Enter rate: ");
    scanf("%f", &rate);
    printf("Enter time (in years): ");
    scanf("%f", &time);

    interest = (principal * rate * time) / 100;
    printf("Interest = %f\n", interest);
    return 0;
}
