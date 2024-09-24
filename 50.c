// C Program to find the Transpose of a Matrix
#include <stdio.h>

int main()
{
  int i, j, m, n;
  printf("Enter the number of rows\n");
  scanf("%d", &m);
  printf("Enter the number of columns\n");
  scanf("%d", &n);
  int a[m][n], b[10][10];
  printf("Enter the elements row by row\n");
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
      scanf("%d", &a[i][j]);
  }
  for (j = 0; j <= n; j++)
  {
    for (i = 0; i <= m; i++)
      b[i][j] = a[j][i];
  }
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
      printf("%d ", b[i][j]);
    printf("\n");
  }

  return 0;
}