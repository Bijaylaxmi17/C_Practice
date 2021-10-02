// WAP in C to convert a given integer(in days) to years , months and days, assumes that all months have 30 days and all years have 365 days.

#include<stdio.h>
int main()
{
    int days,y,m,d;
    printf("Enter no. of days :");
    scanf("%d",&days);
    y=days/365;
    days=days-(365*y);//update remaining days
    m=days/30;
    d=days-(m*30);
    printf("%d Year(s) %d Month(s) %d Day(s)",y,m,d);
    return 0;
}