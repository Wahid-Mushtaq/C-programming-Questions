//Display the series: 2 4 16 256 65536 ....... (n terms)
#include <stdio.h>
#include<math.h>

int main() 
{
 int i,n;
 long long int a;
 printf("Enter the number of terms\n");
  scanf("%d",&n);
  for(i=0;i<=n;i++)
    { a=pow(2,pow(2,i));
      printf("%lld ",a);  
    }
    printf("\n");
  return 0;
}