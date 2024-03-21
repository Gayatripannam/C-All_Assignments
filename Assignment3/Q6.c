//factors of some excluding the numbers

#include<stdio.h>
int main()
{
int num,i=1;

  printf("Enter a number: ");
  scanf("%d", &num);

  printf("All factors excluding some the numbers %d : ", num);
  
  while (i < num)
  {
    if (num % i == 0)
	{
        printf("%d ", i);
    }
        i++;
  }
      printf("\n");
return 0;

}
