//Check whether a number is prime or not
#include <stdio.h>

int main() 
{
  int n,i,flag=1;
  printf("Enter  any number to check whether it is prime or not");
  scanf("%d",&n);
  for(i=2 ; i<= n-1; i++)
    {
      if(n%i==0)
      { 
        printf("%d is not a prime",n);
        flag=0;
        break;
      }  
      
    }
  if(flag==1)      
  printf("%d is a prime no.",n);
        
      

    
  return 0;
}