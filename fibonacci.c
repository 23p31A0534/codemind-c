#include<stdio.h>
int main()
{
    int n1=0,n2=1,i,n,next;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",n1);
        next=n1+n2;
        n1=n2;
        n2=next;
    }
}