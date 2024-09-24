//Input a string from the user and find its length (without using the string library).

#include <stdio.h>

int main() 
{
  char a[100];
  int i =0;
  printf("Enter a string ");
  scanf("%s",a);

  while(a[i]!='\0')
    {
      printf("%c",a[i]);
      i++;
    }
    printf("\n");
  printf("The length of the string is %d\n",i); 
  
  return 0;
}