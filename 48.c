// Sort an integer array using Bubble Sort.

#include <stdio.h>

int main()
{
    int a[100], n, i, j, temp;

    printf("enter length of array ");
    scanf("%d", &n);

    printf("enter the elements of an array ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Unsorted Array is");
    {
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
    }
    printf("\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
    }
    printf("Sorted array is: ");
    for (i = 1; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}