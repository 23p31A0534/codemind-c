#include<stdio.h>
int main()
{
    int n,sum=0,mul=1;
    int d;
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        sum=sum+d;
        mul=mul*d;
        n=n/10;
    }
    if(sum==mul)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}