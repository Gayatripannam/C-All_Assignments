#include<stdio.h>

int main()
{

    int i ,fact=1, n1;

    printf("Enter a number : ");

    scanf("%d",&n1); 

    for(i=1; i<=n1; i++)

        fact = fact * i; 

    printf("Factorial of %d is: %d\n",n1,fact);

    return 0;

}

