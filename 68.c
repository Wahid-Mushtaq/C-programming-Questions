//C Program to check whether a string is a Palindrome or not using Pointers 
#include<stdio.h>
int main()
{
    char str[50],*p,*q;
    printf("Enter the string\n");
    scanf("%s",str);
    p = str;
    q = p;
    while(*p!='\0')
        p++;
    p--;
    while(q<p)
        {
            if(*p!=*q)
            {
                printf("The %s is not a Palindrome.",str);
                return 0;
            }
            q++,p--;
        } 
    printf("The %s is a Palindrome.",str);       
    
    return 0;
}