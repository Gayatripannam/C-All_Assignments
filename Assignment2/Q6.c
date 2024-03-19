#include<stdio.h>
 
int main()

{
  int num, rev = 0, rem = 0, temp;
 // int rev = 0;
  
//  int rem =1;

  printf("Enter the number : \n");
  scanf("%d",&num);
  temp = num;
  while (num != 0)
   
    {
      rem = num % 10;
	  rev = rev * 10 + rem ;
	  num = num / 10 ;
	}
    
	if (temp == rev)

	{
       printf("palindrome  %d\n",rev);
	}
 else 
 {
   printf("Not palindrme %d \n",rev);
 }

 return 0;
 }
