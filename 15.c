//Display all even numbers from 1 to 100 [using loop and if]
//This C program displays all even numbers from 100 to 1 
#include <stdio.h>

int main()
 {
  int i;
  for(i=1;i<=100;i++)
  {
    if(i%2==0)
    {printf("%d ",i);}
  }
    
  return 0;
}