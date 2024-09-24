// C Program to find the Sum of the diagonal elements of a square matrix
#include <stdio.h>

int main()
{
    int i, j, m, sum = 0;
    printf("Enter the number of rows and coloumns\n ");
    scanf("%d", &m);
    int a[m][m], b[m][m];
    printf("Enter the elements row by row\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
            if (i == j)
                sum = sum + a[i][j];
        }
    }
    printf("Matrix is: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    printf("Sum of diagonal elements is %d", sum);

    return 0;
}