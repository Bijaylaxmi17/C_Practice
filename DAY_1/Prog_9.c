// WAP in C that accepts age from user and check that eligible for voting or not.

#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age :");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("\nYou are eligible for voting.");
    }
    else
    {
        printf("\nYou are not eligible for voting.");
    }
    return 0;
}