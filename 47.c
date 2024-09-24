//earch for an element in an integer array (Linear search).

#include <stdio.h>

int main() 
{
  int i,n,x,flag=0;
  printf("Enter length of array");
  scanf("%d",&n);
  int a[n];

  printf("Enter elements of array");
  for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
  printf("Enter the element to search for");
  scanf("%d",&x);
  for(i=1;i<=n;i++)
   {
    if(a[i]==x)
    {
      printf("%d is found at position %d\n",x,i);
      flag=1;
    }
   }
  if(flag==0)
    printf("Element not found");
    
  return 0;
}