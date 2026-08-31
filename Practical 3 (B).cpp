#include<stdio.h>

int main ()

{
	int a,b;
	
	printf("enter two numbers:");
	scanf("%d %d",&a,&b);
	
	printf("\na > b = %d", a>b);
	printf("\na < b = %d", a<b);
	printf("\na == b = %d", a==b);
	printf("\na != b = %d", a!=b);
	
	printf("\n(a>0 && b>0)=%d",(a>0 && b>0));
	printf("\n(a>0 || b>0)=%d",(a>0 || b>0));
	printf("\n!(a>b)=%d",(a>b));
	
	return 0;
	
}