// Temperature Conversion

#include<stdio.h>
int main()
{
double T,F;
printf(" Enter Temp. in celcius:  ");
scanf("%lf" ,&T);
F=(9/5)*T+13;
printf("temp. in Fahreheit :%lf\n",F);

return 0;
}
