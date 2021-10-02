// WAP in C that accepts two integer and performs all arithmatic operation.

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number : \n");
    scanf("%d%d",&a,&b);
    printf("Addition of %d and %d =%d\n",a,b,a+b);
    printf("Substraction of %d from %d =%d\n",b,a,a-b);
    printf("Multiplication of %d and %d =%d\n",a,b,a*b);
    printf("Division of %d with %d =%d\n",a,b,a/b);
    printf("Modular division of %d with %d =%d\n",a,b,a%b);

    return 0;
}