// WAP in C that accept a year from user and check whether the given year is leap year or not.

#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year : ");
    scanf("%d",&year);
    if(year%400==0)
    {
        printf("\n%d year is leap year",year);
    }
    else if(year%100==0)
    {
        printf("\n%d year is leap year",year);
    }
    else if(year%4==0)
    {
        printf("\n%d year is leap year",year);
    }
    else
    {
        printf("\n%d year is not leap year",year);
    }
    return 0;
}