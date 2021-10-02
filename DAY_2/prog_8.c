// WAP in C that prints all even no. between 1 to 50.

#include<stdio.h>
int main()
{
    int i;
    printf("Even no. between 1 to 50 : ");
    for(i=1;i<=50;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}