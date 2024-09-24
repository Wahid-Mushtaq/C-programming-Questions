//Input a matrix from the user and display it.
#include <stdio.h>

int main()
 {
  int i,j,m,n;
  printf("Enter number of rows ");
  scanf("%d",&m);

  printf("Enter number of columns");
  scanf("%d",&n);

  int a[m][n];

  printf("Enter elements row by row\n");
  for(i=0;i<m;i++)
    { 
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    
  for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
        printf("%d ",a[i][j]);
      printf("\n");
    }
  
  return 0;
}