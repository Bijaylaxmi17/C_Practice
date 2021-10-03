// WAP in C to display whether a person is in teenager or not.

#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);
    if(age>12&&age<20)
    printf("\nYou are in teenaged grop");
    return 0;
}