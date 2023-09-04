/*This is a program to calculate percentage of a student*/
#include<stdio.h>
int main()
{
	int M, P, C, E, CS , R;
	scanf("%d %d %d %d %d", &M, &P, &C, &E, &CS);
	R=(M+P+C+E+CS)/5;
	printf("Percentage of the student is %d %%");
	return 0;
}

