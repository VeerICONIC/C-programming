/*Program to calculate percentage and grade*/
#include<stdio.h>
int main()
{
	float P,C,B,M,CP,PC;
	/*P=Physics,M=Mathematics,C=Chemistry,B=Biology,CP=Computer and PC=Percentage*/
	scanf("%f %f %f %f %f",&P,&C,&B,&M,&CP);
	PC=(P+C+M+B+CP)/5;
	printf("Percentage = %f",PC);
	if(PC>=90)
	   printf("\nGRADE A");
	else if(PC>=80)
	  printf("\nGRADE B");
	else if(PC>=70)
	   printf("\nGRADE C");
	else if(PC>=60)
	   printf("\nGRADE D");
	else if(PC>=40)
	   printf("\nGRADE E");
	else
	   printf("\nGRADE F");
	return 0;
}

