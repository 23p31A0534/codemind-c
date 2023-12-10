#include<stdio.h>
int main()
{
int a,b,i,r,rev=0,n;
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
    rev=0;
    n=i;
    while(n>0)
    {
    r=n%10;
    rev=rev*10+r;
    n=n/10;
    }
    if(i==rev)
    {
        printf("%d ",i);
    }
}
}