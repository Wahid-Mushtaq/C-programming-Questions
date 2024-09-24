//Input a string from the user and display the same.
#include <stdio.h>

int main() 
{
  char a[100];
  int i =0;
  printf("Enter a string ");
  scanf("%s",a);
  printf("The string is ");
  while(a[i]!='\0')
    {
      printf("%c",a[i]);
      i++;
    }
 
  return 0;
}