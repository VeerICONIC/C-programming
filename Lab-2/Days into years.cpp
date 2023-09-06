/*Program to convert days into years*/
#include<stdio.h>
int main()
{
	int days,years,months,weeks;
	printf("Enter Days :");
	scanf("%d", &days);
	years = (days / 365);
	months= ((days - (years*365))/30);
	weeks = ((days - (years*365) - (months*30))/7);
	printf("Years = %d\n",years);
	printf("Months = %d\n",months);
	printf("Weeks = %d",weeks);
	return 0;
}