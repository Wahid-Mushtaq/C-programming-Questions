// C Program to search an array using function(Passing an array to a function)
#include <stdio.h>
void search(int arr[], int n, int s);
int main()
{
  int n, i, s;

  printf("Enter the length of an array\n");
  scanf("%d", &n);
  int a[n];
  printf("Enter the elements of an array\n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }

  printf("Enter the number that is to be searched in an array\n");
  scanf("%d", &s);

  search(a, n, s);
  return 0;
}

void search(int arr[], int n, int s)
{
  int i, flag = 1;
  for (i = 0; i < n; i++)
    if (arr[i] == s)
    {
      printf("Number is Found at position %d\n", i + 1);
      flag = 0;
    }
  if (flag == 1)
    printf("Not found");
}