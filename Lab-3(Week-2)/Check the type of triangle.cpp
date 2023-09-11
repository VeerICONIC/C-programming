/*Program to check wether triangle is equilateral,isosceles or scalene*/
#include<stdio.h>
int main()
{
	/*To check if it is an equilateral triangle*/
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	if( a==b && b==c)
	   printf("It is an Equilateral triangle.");
	else if( (a==b || b==c) && ( a!=b || b!=c))
	   printf("It is an isosceles triangle");
	else
	   printf("It is an scalene triangle");
	return 0;
}