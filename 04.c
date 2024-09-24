// Swap 2 numbers
#include <stdio.h>

int main() {
    int x, y, mod;

    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);

    mod = x;
    x = y;
    y = mod;

    printf("After swapping ist number becomes %d and 2nd number becomes %d\n", x, y);

    return 0;
}