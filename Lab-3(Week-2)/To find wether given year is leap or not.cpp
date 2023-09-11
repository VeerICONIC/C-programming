/*Program to find wether a given year is leap year or not*/
#include<stdio.h>
int main()
{
	int y;
	scanf("%d",&y);
	if(y%4==0 && (y%100!=0 || y%400==0))
	   printf("This year is a leap year");
	else 
       printf("This year is not a leap year");
	return 0;
}
