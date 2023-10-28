#include<stdio.h>
int main()
{
    int n,m,p=0,q=0,i;
    scanf("%d%d",&n,&m);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        p+=i;
    }
    for(i=1;i<m;i++)
    {
        if(m%i==0)
        q+=i;
    }
    if(p==m && q==n)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}