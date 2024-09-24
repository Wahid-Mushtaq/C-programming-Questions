//Use math library (pow(), sqrt(), etc
#include <stdio.h>
#include <math.h>

int main() {
  
float  number = 2.0;
float squareroot, sine, naturallog,power;
     
     power=pow(number,5);
     printf("The power of %f to 5 is %f\n",number,power);

   
    squareroot = sqrt(number);
    printf("Square root of %f is %f\n", number, squareroot);

   
    sine = sin(45 * M_PI/180);
    printf("Sine of 45 degrees is %f\n", sine);

    
    naturallog = log(number);
    printf("Natural logarithm of %f is %f\n", number, naturallog);

    return 0;
}