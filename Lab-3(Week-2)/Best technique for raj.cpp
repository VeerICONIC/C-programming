/*Program for Raj to select best technique*/
#include<stdio.h>
int main()
{
	int T1,T2,T3;
/*Here T1,T2 and T3 are the different techniques*/
    T1=3;
    T2=14;
    T3=23;
    if( T1>T2 && T1>T3)
       printf("T1 =%d ",T1);
    else if( T2>T3)
       printf("T2 =%d ",T2);
    else
       printf("T3 =%d ",T3);
       
    T1=T2=T3=3;
	if( T1==T2 && T2==T3)
	   printf("\nT =%d",T1);
	   return 0;   
}