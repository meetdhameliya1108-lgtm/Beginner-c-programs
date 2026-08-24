#include <stdio.h>

int main ()

{
	float area,base,height;
	
	printf("enter base of triangle");
	scanf("%f",&base);
	
	printf("enter hight of triangle");
	scanf("%f",&height);
	
	area = (base*height)/2;
	
	printf("area of triangle = %2f",area);
	
 	return 0;
}