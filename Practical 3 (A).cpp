#include<stdio.h>

int main ()
{
	int a,b;
	
	printf("enter fist number:");
	scanf("%d",&a);
	
    printf("enter second number:");
	scanf("%d",&b);
	
	printf("\n addition = %d", a+b);
	printf("\n subtraction = %d", a-b);
	printf("\n multiplication = %d", a*b);
	printf("\n division = %d", a/b);
	printf("\n modulus = %d", a%b);
	
	return 0;
}