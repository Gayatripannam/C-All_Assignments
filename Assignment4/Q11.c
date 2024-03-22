//to calculate factorial of a given number using recursion.

#include <stdio.h>

int factorial(int n)
{
    if (n == 0)
	{
        return 1;
    } 
	else
	{
        return n * factorial(n - 1);
    }
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d is %d", num, factorial(num));
 
 printf("\n");

 return 0;
}
