#include<stdio.h>
int main()

{
 int n1 = 100;
 int n2 = 200;
 int n3 = 300;

 if (n1 > n2)
 {
   if(n1 > n3)

   printf(" n1 is maximum number: %d\n ",n1);

  else

   printf("n3 is maximum number: %d\n",n3);
 }
 
 else

{

 if (n2 > n3)

 {
   printf("n2 is maximum number: %d\n",n2);
 }
   else
 
 { 
  printf("n3 is maximum number : %d\n", n3);

 }

}

 //Conditional oprtator
{
  int n1 = 100;
  int n2 = 200;
  int n3 = 400;
  int max;

  max = (n1 > n2)? ((n1 > n3) ? n1 : n3 ) : ((n2 > n3 )? n2 : n3 ) ;
 
  printf("max = %d \n ", max);
}
 return 0;
 
 }
