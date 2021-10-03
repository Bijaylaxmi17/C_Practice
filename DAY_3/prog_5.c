// WAP in C to accept a co-ordinate point in a XY co-ordinate system and determine the co-ordinate point lies.

#include<stdio.h>
int main()
{
    int co1,co2;
    printf("Enter the value of co-ordinate : ");
    scanf("%d%d",&co1,&co2);
    if(co1>0&&co2>0)
    printf("The co-ordinate point (%d,%d) lies on first quandrant .",co1,co2);
    else if(co1<0&&co2>0)
    printf("The co-ordinate point (%d,%d) lies on second quandrant .",co1,co2);
    else if(co1<0&&co2<0)
    printf("The co-ordinate point (%d,%d) lies on third quandrant .",co1,co2);
    else if(co1>0&&co2<0)
    printf("The co-ordinate point (%d,%d) lies on fourth quandrant .",co1,co2);
    else if(co1==0&&co2==0)
    printf("The co-ordinate point (%d,%d) lies on origin.",co1,co2);
    return 0;
}