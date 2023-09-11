/*Pogram to print number of days in a month by taking year and month*/
#include<stdio.h>
int main()
{
	int year,month,days;
	scanf("%d %d",&year,&month);
	printf("Year = %d",year);
	printf("\nMonth = %d",month);
	if( (year%4==0 && (year%100!=0 || year%400==0)) & month==2)
	   printf("\n29");
	else if( (year%4!=0) && (year%100!=0 || year%400!=0) & month == 2)
	   printf("\n28");
	else
	   printf("");
	if( month == 1,3,5,7,8,10,12 & month!=2)
	  printf("\n31");
	else if( month == 4,6,9,11 & month!=2)
	   printf("\n30");
	else
	   printf("");
	   
	return 0;
}