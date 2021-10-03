// WAP in C that accepts two integer and check whether they are equal or not.

#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two number : ");
    scanf("%d%d",&num1,&num2);
    if(num1==num2)
    {
        printf("\nTwo numbers are equal.");
    }
    else
    {
        printf("\n Two numbers are not equal.");
    }

    return 0;
}