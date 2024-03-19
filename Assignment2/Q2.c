//Even or odd number printing

#include<stdio.h>
int main()
{
int num;

printf("Enter num: \n");
scanf("%d",&num);

if ( num % 2 == 0)

{
  printf(" The number is even \n");
}
else
{
 printf("The number is odd \n");
}

return 0;
}
