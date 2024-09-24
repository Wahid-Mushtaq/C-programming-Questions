//Find sum of series: 1 + 1/2 + 1/4 + 1/6 + ….+ 1/n
#include <stdio.h>
int main()
 {
  int n,i;
  float sum=1.0;
  printf("enter the number of terms");
  scanf("%d",&n);
  for(i=2;i<=n;i++)
    {
        if (i % 2 == 0)
        {sum = sum +(1.0/(i));}
      
    } 
  printf("Sum is = %f",sum);
  return 0;
}