
#include<stdio.h>

int main()
{
int month;
int year;

  printf("Enter the month: \n ");
  scanf("%d",&month);

   printf("Enter the year: \n "); 
   scanf("%d",&year);
  
  if ( month==4 || month==6 || month==9 || month==11)
    printf("Number of days = 30 \n  ");

 else if ( month==1 || month==3 || month==5 || month==7 || month==10 || month==12 )
    printf("Number of days = 31\n");
 
 else if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0   )
  printf(" leap year\n");

 else
    printf("not leap year\n");

    return 0;

 }   


