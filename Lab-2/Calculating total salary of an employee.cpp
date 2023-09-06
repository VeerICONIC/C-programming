/*Program to calculate salary of an employee*/
#include<stdio.h>
int main()
{
	float BS,DA,HRA,TS;
	scanf("%f", &BS);
	DA=0.45*BS;
	HRA=0.16*BS;
	TS=BS+DA+HRA;
	printf(" DA = %f",DA);
	printf(" HRA = %f",HRA);
	printf("  Total Salary = %f",TS);
	return 0;
}