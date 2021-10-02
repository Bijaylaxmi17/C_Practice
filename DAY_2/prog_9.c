// WAP in C that prints all odd no. between 1 to 50.

#include<stdio.h>
int main()
{
    int i;
    printf("Odd no. between 1 to 50 : ");
    for(i=1;i<50;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}