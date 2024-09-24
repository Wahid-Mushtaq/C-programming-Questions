// C Program to find the Sum of two matrices
#include <stdio.h>

int main()
{
    int i, j, m, n, sum = 0;
    printf("Enter the number of rows\n");
    scanf("%d", &m);
    printf("Enter the number of columns\n");
    scanf("%d", &n);
    int a[m][n], b[m][n], c[m][n];
    printf("Enter the elements of First matrix row by row\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    printf("Enter the elements of Second matrix row by row\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &b[i][j]);
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            c[i][j] = a[i][j] + b[i][j];
    }
    printf("Sum of two matrices is: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }

    return 0;
}