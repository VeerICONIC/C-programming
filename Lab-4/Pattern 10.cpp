/*Program to print patterns*/
#include<stdio.h>
int main()
{
  int i,j,n;
  scanf("%d",&n);
  for( i=0;i<n;i++)
   	{
	   
	for( j=0; j<i+1;j++)
   	{
		   printf("*");
	}
   	    printf("\n");
	}	

   int a,b;
     
	 for(a=0;a<n;a++)
	 {
      { for(b=0;b<n-a;b++)
         printf("*");
	  }
	  printf("\n");}

}
