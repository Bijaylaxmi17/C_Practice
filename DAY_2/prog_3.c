// WAP in C that accepts three integer and finds the greatest among them.

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any three number :");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&b>c)
    {
        printf("%d is greater",a);
    }
    else if(c>b&&c>a)
    {
        printf("%d is greater",c);
    }
    else
    {
        printf("%d is greater",b);
    }
    return 0;
}