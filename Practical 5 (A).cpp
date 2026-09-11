#include <stdio.h>

int main() 
{
    int num, i;
    long long factorial = 1;

    printf("Enter a positive number: ");
    scanf("%d", &num); 

    if (num < 0) 
	{
        printf("Factorial of a negative number is not defined.");
    } else {
        for (i = 1; i <= num; i++) 
		{
            factorial = factorial * i;
        }
        printf("Factorial of %d = %lld", num, factorial);
    }

    return 0;
}
