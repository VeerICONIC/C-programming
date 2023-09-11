/*Program to find greatest of three numbers*/
#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d", &a,&b,&c);
	if( a>b && a>c)
	   printf("A is greater than b and c");
	   
	else if( b>c)
	   printf("B is greater than a and c");
	   
	else
	   printf("C is greater than a and b");
	   return 0;
}
