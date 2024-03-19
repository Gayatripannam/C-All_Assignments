#include<stdio.h>
 int main()

{
  int year;
     
	 printf("Enter year: \n",year);
     scanf("%d",&year);
{
	 if( year % 4 == 0)
	  printf("A year is leap year\n");

	else if (year % 100 ==0)
	  printf("A year is non leap year\n" );

	else if (year % 400 == 0)
	 printf ("A year is leap year\n");

    else
	  printf("not leap year \n");
}
 // using logical operator

if( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0   )
    printf(" leap year\n");

 else 
    printf("not leap year\n");

//using conditional operator

( year % 4 == 0 && year % 100 != 0)?printf("Leap1\n")  : (year % 400 == 0)?printf("Leap2\n") : printf("Non-Leap\n");

 return 0;
}
