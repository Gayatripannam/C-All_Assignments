// Pascal triangle of given number of rows.

#include <stdio.h>

void printPascalTriangle(int numRows)
{ for (int line = 1; line <= numRows; line++)
{ int C = 1;
for (int i = 1; i <= line; i++) 
{ printf("%d ", C); C = C * (line - i) / i; }
  printf("\n"); } }

int main()  

{ int numRows; printf("Enter the number of rows for Pascal triangle: ");
scanf("%d", &numRows);

 
printPascalTriangle(numRows);

return 0;

}
