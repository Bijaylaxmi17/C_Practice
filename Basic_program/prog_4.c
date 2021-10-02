// WAP in C to compute the perimeter and area of rectangle with height of 7 inches and width of 5 inches.


#include<stdio.h>
int main()
{
    // height=h,width=w
    int h=7,w=5,area,perimeter;
    perimeter=2*(h+w);
    printf("Perimeter of rectangle=%d inches\n",perimeter);
    area=h*w;
    printf("Area of rectangle=%d square inches\n",area);
    return 0;
}