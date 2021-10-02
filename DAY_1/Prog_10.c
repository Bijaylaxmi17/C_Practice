// WAP in C that accepts an integer  from user and finds the cube and square of that integer.

#include<stdio.h>
int main()
{
    int i;
    printf("Enter a number : ");
    scanf("%d",&i);
    printf("\nCube of no.= %d",i*i*i);
    printf("\nSquare of no.=%d",i*i);
    return 0;
}