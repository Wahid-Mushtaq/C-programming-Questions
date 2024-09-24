//C Program to swap two integers using pointers and function(call-by-reference)
#include<stdio.h>
void swap(int *r,int *s)
{
  int temp = *r;
  *r=*s;
  *s=temp;
    printf("The values after the swapping are %d  %d\n",*r,*s);
}
int main()
{
  int* p,*q;
  int x,y;
  printf("Enter the two integers\n");
  scanf("%d %d",&x,&y);
  p=&x;
  q=&y;
  printf("The values before the swapping are %d  %d\n",*p,*q);
  swap(p,q);

  return 0;
}