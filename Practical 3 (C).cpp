#include<stdio.h>

int main ()

{
	int num = 10;
	printf("lnitial value = %d\n", num);
	
	num+=5;
	printf("after+=5:%d\n", num);
	
	num-=3;
	printf("after-=3:%d\n", num);
	
	printf("pre increment (++num)=%d\n",++num);
	
	printf("post decrement (num--)=%d\n", num--);
	
	printf("final value =%d\n", num);
	
	return 0;
}