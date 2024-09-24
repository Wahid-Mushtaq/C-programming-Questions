// Display the Fibonacci series: 0 1 1 2 3 5 8 13 21 ....... (n terms)
#include <stdio.h>
int main()
{
    int n, i, temp, pt = 0, ct = 1;

    printf("enter the number of terms\n");
    scanf("%d", &n);

    if (n < 1)
        printf("Invalid Input");

    else
    {
        printf("0\n");
        for (i = 1; i<=(n - 1); i++)
        {
            temp = pt + ct;
            pt = ct;
            ct = temp;
            printf("%d \n", pt);
        }
        
    }
    return 0;
}