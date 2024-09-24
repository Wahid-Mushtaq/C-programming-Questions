// define and use constant
#include <stdio.h>

const float PI = 3.14159;

int main() {
    float radius = 6.0;
    float circumference = 2.0 * PI * radius;
    float area = PI * radius * radius;

    printf("The Circumference of circle is %f\n", circumference);
    printf("The Area of the circle is %f\n", area);

    return 0;
}