//Check whether a number is Armstrong number or not
#include<stdio.h>
#include<math.h>
int main()
{
    int i,in,n,digits=0,rmdr,ans=0;
    printf("Enter any integer");
    scanf("%d",&in);
    n=in; 
    while(in!=0)
       {
            digits++;
            in /= 10;
       } 
    in = n;  
       while(in!=0)
    {
        int rmdr = in%10;
        ans=ans+(pow(rmdr,digits));  
        in /= 10;
    }
    in =n;
    if(ans!=in)
        printf("%d is not an Armstrong number",in);
    else
        printf("%d is an Armstrong number",in);   

    return 0;
}