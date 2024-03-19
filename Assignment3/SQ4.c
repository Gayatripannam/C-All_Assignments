// To display day of week from given date (day, month and year)
/*
#include<stdio.h>

int main()
{
int day;
int month;
int year;

  printf("Enter day, month, year:");
  scanf("%d,%d,%d",&day,&month,&year);

switch (day,month,year)
    {
       case 0 : 
	        printf("Monday");
		    break;   
       case 1 : 
	        printf("Tueday");
		    break;
       case 2 : 
	        printf("Wednesday");
		    break;
       case 3 : 
	        printf("Thursday");
		    break;
	   case 4 :		
	        printf("Friday");
		    break;
       case 5 : 
	        printf("Saturday");
		    break;
       case 6 : 
	        printf("Sunday");
		    break;
   }
return 0;
}
*/
#include <stdio.h>

int dayOfWeek(int d, int m, int y)
{ static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4}; y -= m < 3; 
return (y + y/4 - y/100 + y/400 + t[m-1] + d) % 7; }

int main() { int day, month, year;


printf("Enter day, month and year: ");
scanf("%d %d %d", &day, &month, &year);

int dayIndex = dayOfWeek(day, month, year);

switch(dayIndex)
{
    case 0: printf("Sunday");
    		break;

    case 1: printf("Monday ");
	        break;
	
	case 2: printf("Tuesday ");
        	break;
	
	case 3: printf("Wednesday ");
        	break;

	case 4: printf("Thursday ");
        	break;

	case 5: printf("Friday ");
	        break;
		
	case 6: printf("Saturday ");
        	break;

	default: printf("Invalid input "); 
	        break;
}


return 0;

}
