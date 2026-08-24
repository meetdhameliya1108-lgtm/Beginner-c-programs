#include <stdio.h>

int main ()

{
	int n1,n2;
	int sum,diffrence,product,quotient,remainder;
	
	printf("enter first number:");
	scanf("%d",&n1);
	
	printf("enter second number:");
	scanf("%d",&n2);
	
	sum = n1+n2;
	diffrence = n1-n2;
	product = n1*n2;
	quotient = n1/n2;
	remainder = n1%n2;
	
	printf("\n addition=%d", sum);
	printf("\n subtrection=%d", diffrence);
	printf("\n multiplication=%d", product);
	printf("\n divtion=%d", quotient);
	printf("\n modulus=%d", remainder);
	
	return 0;

}