// WAP in C that accepts two integer from the user and calculate the sum and product of the two integer.

#include<stdio.h>
int main()
{
    int a, b, sum, product;
    printf("Enter any two number :");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("\nSum of two integer=%d",sum);
    product=a*b;
    printf("\nProduct of two integer=%d",product);
    return 0;
}