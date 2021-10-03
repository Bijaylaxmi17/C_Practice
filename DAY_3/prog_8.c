// WAP in C to check whether a triangle is equilateral ,isosceles or scalene.
// Equilateral triangle : Three sides are equal and all three internal angle are congruent to each other and are each 60 degree.
// Isosceles triangle : Out of three , two sides are equal.
// Scalene  triangle : All three are unequal.

#include<stdio.h>
int main()
{
    int side1,side2,side3;
    printf("Enter three sides of a triangle : ");
    scanf("%d%d%d",&side1,&side2,&side3);
    if(side1==side2&&side2==side3)
    {
        printf("\nThis is an equilateral triangle.");
    }
    else if(side1==side2||side2==side3 ||side1==side3)
    {
        printf("\nThis is an isosceles triangle.");
    }
    else
    {
        printf("\nThis is an scalene triangle."); 
    }
    return 0;
}