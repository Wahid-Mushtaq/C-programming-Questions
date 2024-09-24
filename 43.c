//Input a string from the user and display it in rev
//Input a string from the user and find its length (without using the string library).

#include <stdio.h>

int main() 
{
  char a[100];
  int i =0;
  printf("Enter a string ");
  scanf("%s",a);
  
  printf("string after reversing it is ");
  for(i=0;a[i]!='\0';i++);

  for(a[i]='\0';i>=0;i--)
  printf("%c",a[i]);

  return 0;
}