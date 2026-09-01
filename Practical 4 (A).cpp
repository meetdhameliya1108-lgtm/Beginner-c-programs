#include<stdio.h>
 int main ()
 
 {
 	int num;
 	
 	printf("enter a number:");
 	scanf("%d",&num);
 	
 	if(num>0);
 	
 	{
 		printf("%d is a positiv number.",num);
	 }

	 if (num<0)
	{
	    printf("%d is a nagative number.",num);
	}
	
	if (num==0)
	{
		printf("the number is zero.");
	}
	
	return 0;
 }