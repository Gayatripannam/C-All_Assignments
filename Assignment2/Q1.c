// To find division and Error if divide by 0

#include<stdio.h>
int main()
{
  int n1;
  int n2;
  int result;

    printf("Enter num1: \n");
    scanf("%d",&n1);

    printf("Enter num2: \n");
    scanf("%d",&n2);

if (n2!=0)

{
  result = n1/n2;
  printf("result=%d\n",result);
}

else
{

printf("invalid division \n"); 

}

return 0;

}
