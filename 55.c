// C program to add and subtract two integers using functions(a+b,a-b,b-a)
#include <stdio.h>
int add(int x, int y);
int sub(int x, int y);
int main(void)
{
    int a, b;
    printf("Enter the two integers\n");
    scanf("%d%d", &a, &b);
    printf("%d + %d = %d\n", a, b, add(a, b));
    printf("%d - %d = %d\n", a, b, sub(a, b));
    printf("%d - %d = %d\n", b, a, sub(b, a));

    return 0;
}
int add(int x, int y)
{
    return x + y;
}
int sub(int x, int y)
{
    return x - y;
}