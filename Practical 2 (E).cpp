#include <stdio.h>
#define pi 3.14159

int main ()

{
	float radius,area;
	
	printf("enter radius of circle:");
	scanf("%f",&radius);
	
	area = pi*radius*radius;
	
	printf("area of circle = %0.2f",area);
	     
    return 0;
}