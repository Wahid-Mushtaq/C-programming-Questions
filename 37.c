//Display contents of an integer array.

#include <stdio.h>

int main() 
{
  int a[6]={1,2,3,4,5,6},i;
  printf("The array is ");
  for(i=0;i<6;i++)
  {
    printf("%d ",a[i]);
  }
  return 0;
}
