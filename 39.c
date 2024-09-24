//Display contents of an integer array in reverse order
#include<stdio.h>

int main()
{
    int i,n,arr[100];
    printf("Enter size of array ");
    scanf("%d",&n);
    printf("Enter an array");
    for(i=0;i<n;i++)
       { 
        scanf("%d",&arr[i]);
       }
    printf("The array after reversing it is ");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
