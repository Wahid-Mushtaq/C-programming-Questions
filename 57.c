// C Program to find the factorial of a number using recursion
#include <stdio.h>
long long int factorial(int input)
{
    if (input < 0)
        return -1;
    else if (input == 1 || input == 0)
        return 1;
    else
        return input * factorial(input - 1);
}
int main()
{
    int x;
    printf("Enter any natural number\n");
    scanf("%d", &x);
    if (factorial(x) == -1)
        printf("Factorial is not defined for negative numbers. ");
    else
        printf("Factorial of %d is %lld", x, factorial(x));

    return 0;
}