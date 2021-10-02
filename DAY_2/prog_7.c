// WAP in C to find sum of n natural number.

// mathematical formula :-n*(n+1)/2

#include<stdio.h>
int main()
{
    int n,sum;
    printf("Enter the value of n :");
    scanf("%d",&n);
    sum=n*(n+1)/2;
    printf("Sum of %d natural no.=%d",n,sum);
    return 0;
}