/*
to accept a point in Cartesian co-ordinate system and decide the quadrant in
which the point lies.
*/

#include<stdio.h>

int main()
{
float x,y;

  printf("Enter the coordinates of the point (x, y): ");
  scanf("%f %f", &x, &y);

  if(x > 0 && y > 0)
  {
      printf("The point lies in the first quadrant.\n");
  }
  else if(x < 0 && y > 0) 
  {
      printf("The point lies in the second quadrant.\n");
  } 
  else if(x < 0 && y < 0)
  {
      printf("The point lies in the third quadrant.\n");
  } 
  else if(x > 0 && y < 0) 
  {
      printf("The point lies in the fourth quadrant.\n");
  } 
  else if(x == 0 && y != 0)
  {
      printf("The point lies on the y-axis.\n");
  } 
  else if(x != 0 && y == 0) 
  {
      printf("The point lies on the x-axis.\n");
  } 
  else 
  {
      printf("The point lies at the origin.\n");
  }

return 0;
}
