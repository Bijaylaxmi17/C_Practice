// WAP in C to calculate the root of a quandratic equation.

#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    float x1,x2;
    printf("Enter the value of a ,b and c: ");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d==0)
    {
        printf("Both roots are equal.\n");
        x1=-b/(2*a);
        x2=x1;
        printf("First root =%f\n",x1);
        printf("Second root=%f\n",x2);
    }
    else if(d>0)
    {
        printf("Both roots are real and different.\n");
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("First root =%f\n",x1);
        printf("Second root=%f\n",x2);
    }
    else
    {
        printf("Roots are imaginary.\n No solution.\n");
    }
    return 0;
}