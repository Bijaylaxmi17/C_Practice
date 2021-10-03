// WAP in C to find out whether the given point (x,y) lies on X-axis or on Y-axis or on the origin.

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the x and y co-ordinate of the point : ");
    scanf("%d%d",&a,&b);
    if(a==0&&b==0)
    printf("\nPoint lies on the origin.");
    else if(a==0&&b!=0)
    printf("\nPoint lies on Y-axis.");
    else if(a!=0&&b==0)
    printf("\nPoint lies on X-axis.");
    else
    printf("\nPoint does not lie on any axis nor origin.");


    return 0;
}