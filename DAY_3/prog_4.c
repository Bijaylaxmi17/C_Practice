// WAP in C to read the value of an integer m and display value of n is 1 when m is larger than 0 , 0 when m is 0 and -1 when m is less than 0. 

#include<stdio.h>
int main()
{
    int m;
    printf("Enter the value of m : ");
    scanf("%d",&m);
    if(m>0)
    {
        printf("\n n=1");
    }
    else if(m<0)
    {
        printf("\n n= -1");
    }
    else
    {
        printf("\n n=0");
    }
    return 0;
}