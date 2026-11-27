#include<stdio.h>
int main(){

    float a, b, c;

    printf("Enter the first number: ");
    scanf("%f", &a);

    printf("Enter the second number: ");
    scanf("%f", &b);

    printf("Enter the third number: ");
    scanf("%f", &c);

     if (a >= b && a >= c) {
        printf("Maximum = %f\n", a);
    } else if (b >= a && b >= c) {
        printf("Maximum = %f\n", b);
    } else {
        printf("Maximum = %f\n", c);
    }

    return 0;
}