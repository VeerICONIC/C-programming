/*This is a program to swap two numbers*/
#include<stdio.h>
int main()
{
	int a, b, t;
	scanf("%d %d", &a, &b);
	t=a;
    a=b;
	b=t;
	printf(" a is %d",a);
	printf(" b is %d",b);
	return 0;
}
