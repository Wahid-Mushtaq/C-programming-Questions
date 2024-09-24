//Display the series: 2 4 8 16 32 64 128 ....... (n terms)
#include<stdio.h>
#include<math.h>
int main()
 {
  int i,n,ans;
  printf("Enter the terms");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    {
     ans=pow(2,i);
     printf("%d ",ans);
    }

  return 0;
}