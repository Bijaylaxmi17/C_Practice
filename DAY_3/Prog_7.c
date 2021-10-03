// WAP in C to read the temperature in centegrade and display a suitable message according to temperature.
// Temp<0 then freezing weather.
// Temp 0-10 then very cold weather.
// Temp 10-20 then  cold weather.
// Temp 20-30 then Normal in temperature .
// Temp 30-40 then its hot.
// Temp>=40 then its very hot.


#include<stdio.h>
int main()
{
    int temp;
    printf("Enter temperature in centegrade : ");
    scanf("%d",&temp);
    if(temp<0)
    printf("\nFreezing weather.");
    else if(temp<10)
    printf("\nVery cold weather.");
    else if(temp<20)
    printf("\nCold weather.");
    else if(temp<30)
    printf("\nNormal in temperature.");
    else if(temp<40)
    printf("\nIts hot.");
    else
    printf("\nIts very hot.");

    return 0;
}