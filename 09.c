// using ternary operator
#include <stdio.h>

int main() {
    int number;
    char *s;

    printf("Enter a number");
    scanf("%d", &number);

    s=((number % 2 == 0) ? "even" : "odd");
    printf("%d is %s\n", number,s);

    return 0;
}