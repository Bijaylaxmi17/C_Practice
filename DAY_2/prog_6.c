// WAP in C that reads three floating point values and check if it is possible to make triangle with them.Also calculate the perimeter of the triangle if the said values are valid. 

// Triangle formula :- First two side is greater than the third i.e if a, b,c are three side then a+b>c,b+c>a,a+c>b.

#include<stdio.h>
int main()
{
    float a,b,c,p;
    printf("\nEnter the first number : ");
    scanf("%f",&a);
    printf("\nEnter the second number : ");
    scanf("%f",&b);
    printf("\nEnter the third number : ");
    scanf("%f",&c);
    if(a<(b+c)&&b<(a+c)&&c<(a+b))
    {
        p=a+b+c;
        printf("\nPerimeter of triangle=%1f",p);
    }
    else
    {
        printf("\nNot possible to make triangle");
    }
    return 0;
}