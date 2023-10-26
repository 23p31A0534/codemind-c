#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int t=n,rev=0,rem;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(t==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}