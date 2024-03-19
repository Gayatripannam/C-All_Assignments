// face value,place value,and reverse order of 4 numbers

#include<stdio.h>
int main()
{

int num = 9361,a,b,c,d;//1
int temp = num;//num=936

d = num % 10;
num = num / 10;

c = num % 10;
num = num / 10;

b = num % 10;
num = num / 10;

a = num % 10;
num = num / 10;

a = num ;
printf("%d %d %d %d \n", a,b,c,d);
printf("%d %d %d %d %d \n", temp,a*1000,b*100,c*10,d );
printf(" %d %d %d %d \n",d,c,b,a);

return 0;
}

