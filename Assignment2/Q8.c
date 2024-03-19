// Calculate price

#include<stdio.h>
 int main()
{
   int qnty,TP2,amt;
   float TP1;
   amt = 5*qnty;

   printf("Enter quantity\n");
  
   scanf("%d",&qnty);
   

   
  if (qnty <= 30)
{  amt = 5*qnty;
  printf("amt= %d\n",amt);
}

else if(qnty <= 30 && qnty >= 50)
  {
    int prc1 =( ( 5 * qnty * 10)/100);
     TP1 = ((5 * qnty) - prc1);
    printf("TP1 = %f\n", TP1);
  } 
  
  else 
  {
    int prc2 = ( 5 * qnty * 15) / 100;
    TP2 = ((5 * qnty )- prc2);

    printf("TP2=%d\n",TP2);
}  
return 0;

}
