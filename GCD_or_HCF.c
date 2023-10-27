#include<stdio.h>
int main()
{
    int n,m,gcd,count=1;
    scanf("%d%d",&n,&m);
    while(count<=n && count<=m)
    {
        if(n%count==0 && m%count==0)
        {
            gcd=count;
        }
        count++;
    }
    printf("%d",gcd);
}