//Find product of series: 1 2 3 4 5 .... n

#include<stdio.h>
int main()
{
    int i,n,product=1;
    printf("Enter the number upto which you want to obtain the product ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        product=product*i;
       
    }
    printf("Product of first %d no.'s is %d",n,product);
    
    return 0;
}