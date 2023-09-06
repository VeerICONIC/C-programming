/*Program to convert km to meter,cm and mm*/
#include<stdio.h>
int main()
{
   float a,b,c,d;
   scanf("%f", &a);
   b=a*1000;
   c=b*100;
   d=c*10;
   printf(" Kilometer = %f",a);
   printf("  Meter = %f",b);
   printf(" Centimeter = %f",c);
   printf(" Milimeter = %f",d);
   return 0;
}