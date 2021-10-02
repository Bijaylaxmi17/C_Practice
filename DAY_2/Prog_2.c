// WAP in C to convert temperature in fahrenhit into celsius.

#include<stdio.h>
int main()
{
    float f;
    int c;
    printf("Enter temperature in fahrenhit : ");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("\n Temperature in celsius= %d degree",c);
    return 0;
}