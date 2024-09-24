/*Display table of all integers from 2 to 10
(2x1=2, 2x2=4, ……., 10x10=100)*/
#include <stdio.h>

int main() 
{
  int i,j,ans=1;
  for(i=1;i<=20;i++)
    { printf("\n");
      for(j=1;j<=10;j++)
        {ans=i*j;
        printf("%d x %d = %d\n",i,j,ans);
        }
    }
  return 0;
}