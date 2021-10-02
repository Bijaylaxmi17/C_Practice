// WAP in C that accepts an integer from user and check whether the given number is even or odd.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter any positive number :");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("\n%d is even no.",n);
    }
    else
    {
        printf("\n%d is odd no.",n);
    }
    return 0;
}