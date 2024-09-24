/*Use switch-case to display Salaam when user enters 1, Aadaab when user enters 2, Hello when user
enters 3 and Incorrect Option when user enters any other number*/
#include<stdio.h>
int  main()
{
  int x;
  printf("Enter 1 for Salaam , 2 for Hello, 3 for Aadab\n");
  scanf("%d",&x);
  switch(x)
    {
      case 1:
      printf("Salaam");
      break;
      case 2:
      printf("Hello");
      break;
      case 3:
      printf("Aadab");
      break;
      default:
      printf("Invalid Input");
      break;
        
    }
    return 0;
}