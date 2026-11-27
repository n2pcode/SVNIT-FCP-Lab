#include<stdio.h>
int main(){

int hr, min, sec, totalsec;

    printf("Enter hours: ");
    scanf("%d", &hr);

    printf("Enter minutes: ");
    scanf("%d", &min);

    printf("Enter seconds: ");
    scanf("%d", &sec);

    totalsec = (hr * 3600) + (min * 60) + sec;

    printf("Total Seconds = %d\n", totalsec);
}