#include<stdio.h>
int main()
{
    int a=0,b=1,n,c;
    scanf("%d",&n);
    if(n==a || n==b)
    printf("fibonacci");
    c=a+b;
    while(c<n)
    {
        a=b;
        b=c;
        c=a+b;
    }
    if(c==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}