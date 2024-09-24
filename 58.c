// C program to implement the Ackerman Function
#include <stdio.h>
int ack(int m, int n)
{
    if (m == 0)
        return n + 1;
    else if (m > 0 && n == 0)
        return ack(m - 1, 1);
    else if (m > 0 && n > 0)
        return ack(m - 1, ack(m, n - 1));
}
int main()
{
    int m, n;
    printf("Enter m and n : ");
    scanf("%d %d", &m, &n);
    printf("Ackerman(%d,%d) is %d .", m, n, ack(m, n));

    return 0;
}