// WAP in C that accepts principle, rate of interest, time and compute the simple interest.

#include<stdio.h>
int main()
{
    int p, t,r,amount;
    printf("Enter principle,Rate of interest and time to find simple interest");
    scanf("%d%d%d",&p,&r,&t);
    amount=(p*t*r)/100;
    printf("\nSimple interest =%d",amount);
    return 0;
}