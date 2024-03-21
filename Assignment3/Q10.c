// To print table using for loop

#include<stdio.h>
  int main()
  {

  int num1;

  printf("Enter num1 \n");
  scanf("%d", &num1);


for(int i=1; i<=10; i++ )
{
printf(" num1 * %d = %d\n",i, i*num1);

}

   return 0;
}
