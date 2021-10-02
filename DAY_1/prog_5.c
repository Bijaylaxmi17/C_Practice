// WAP in C to compute perimeter and area of a circle with a given radius.

#include<stdio.h>
int main()
{
    int r;
    float perimeter,area;
    r=5;
    perimeter=2*3.14*r;
    printf("Perimter of circle=%f inches\n",perimeter);
    area=3.14*r*r;
    printf("Area of circle=%f square inches",area);

    return 0;
}