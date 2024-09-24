//C Program to reverse an input string using pointers
#include<stdio.h>
int main()
{
    int n=0;
    char str[50],*p;
    
    printf("Enter the string\n");
    scanf("%s",str);
    printf("The actual string is %s\n",str);
    p=&str[0];
    while(*p!='\0')
        p++,n++;
    p--;
    printf("The reversed string is\n");
    int i=0;
    while(i<n)
    {
       printf("%c",*p);
       p--;
       i++;
    }
    printf("\nLength of string is\n%d",i);
    
    return 0;
}