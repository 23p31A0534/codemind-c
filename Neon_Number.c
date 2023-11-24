#include<stdio.h>
int main()
{
    int a,m,r,ds=0;
    scanf("%d",&a);
    m=a*a;
    while(m!=0)
    {
        r=m%10;
        ds=ds+r;
        m=m/10;
    }
    if(ds==a)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    
}