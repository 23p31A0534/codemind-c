#include<stdio.h>
int main()
{
    int n;
    float sum=0.0,a,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=1/i;
        sum=sum+a;
    }
    printf("%.2f",n,sum);
}