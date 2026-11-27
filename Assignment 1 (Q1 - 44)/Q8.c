#include<stdio.h>
int main(){
int totalsec = 31558150;
int day, hr, min, sec;

    day = totalsec / 86400;
    totalsec = totalsec % 86400;

    hr = totalsec / 3600;
    totalsec = totalsec % 3600;

    min = totalsec / 60;
    sec = totalsec % 60;

    printf("Period of Revolution = %d day, %d hr, %d min, %d sec\n", day, hr, min, sec);

    return 0;
}