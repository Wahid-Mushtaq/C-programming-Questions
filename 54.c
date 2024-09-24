// C program to swap two integers using the function(call-by-value)
#include <stdio.h>

void swap(int x, int y);
void main()
{
    int a, b;
    printf("Enter the two numbers\n ");
    scanf("%d%d", &a, &b);
    printf("Numbers before the swapping are %d %d\n", a, b);
    swap(a, b);
    // return 0;
}
void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    printf("Numbers after  swapping: %d %d", x, y);
}