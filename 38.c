//Input an integer array from the user and display the same.
#include <stdio.h>

int main() 
{
  int a[100],n,i,j;
  printf("Enter length of array ");
  scanf("%d",&n);
  printf("Enter the array");
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  printf("The array is ");
  for(i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
  return 0;
}
