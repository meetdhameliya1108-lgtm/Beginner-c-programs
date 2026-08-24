#include <stdio.h>

int main ()

{
	float principal,rate,interest,time,simpleinterest;
	
	printf("enter principal amount:");
	scanf("%f",&principal);
	
	printf("enter rat of intrest:");
	scanf("%f",&rate);
	
	printf("enter time (years):");
	scanf("%f",&time);
	
	printf("simpleintrest=%0.2f",simpleinterest);
	
	return 0;
}
