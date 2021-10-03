// WAP in C to check whether the accepted no. is positive or negative.

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(num>=0)
    {
        printf("\n%d is a positive number.",num);
    }
    else
    {
        printf("\n%d is a negative number.",num);
    }
    return 0;
}