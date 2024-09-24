/*Demonstrate the use of string library functions: strlen(), strcpy(), strrev(), strcat(), strcmp() etc. using
examples*/
#include <stdio.h>
#include <string.h>

int main() 
{
    char str1[60] = "Hello";  
    char str2[30] = "World";

    printf("String 1 is: %s\n", str1);
    printf("Length of string 1 is: %d\n", (int)strlen(str1));
    
    printf("String 2 is: %s\n", str2);
    printf("Length of string 2 is: %d\n", (int)strlen(str2));

    // Concatenate str2 to str1
    strcat(str1, " ");  // Added space to seperate two words
    strcat(str1, str2);
    printf("Concatenated string 1 is: %s\n", str1);

    // Compare str1 and str2
    printf("Comparing str1 and str2: %d\n", strcmp(str1, str2));

    // Copy str2 into str1
    strcpy(str1, str2);
    printf("After copying, str1 is: %s\n", str1);
    
    // Reverse str2 using strrev
    strrev(str2);
    printf("Reversed string 2 is: %s\n", str2);

    return 0;
}

