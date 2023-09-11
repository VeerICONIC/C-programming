/*Program to calculate electricity bill*/
#include<stdio.h>
int main()
{
	float u,s,c,b;
	/*u is Number of units*/
	/*s=Sur charge*/
	/*c=Charge per unit*/
	/*b=Total bill*/
	scanf("%f %f %f",&u,&s,&c);
	b=s+(u*c);
	printf("Total bill = %f",b);
	return 0;	
}
