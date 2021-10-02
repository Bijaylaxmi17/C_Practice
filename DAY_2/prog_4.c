// WAP in C to convert  a given integer(in seconds) to hours,minutes and second.

#include<stdio.h>
int main()
{
   int sec,h,m,s;
   printf("Enter time in seconds :");
   scanf("%d",&sec);
   h=sec/3600;
   sec=sec-(h*3600);//update seconds to find minutes
   m=sec/60;
   s=sec-(m*60);//remaining seconds
   printf("H:M:S = %d:%d:%d",h,m,s);

    return 0;
}