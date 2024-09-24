// C Program to display the contents of an integer array
#include <stdio.h>
int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 6};
    int *ptr = arr;
    printf("Contents of array are as { ");
    for (int i = 0; i < 6; i++)
        printf("%d ", *ptr++);

    printf("}");

    return 0;
}