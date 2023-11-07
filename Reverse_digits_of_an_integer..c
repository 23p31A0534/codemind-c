#include<stdio.h>
int main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    while(n!=0)
    {
        i=n%10;
        sum=sum*10+i;
        n=n/10;
    }
    printf("%d",sum);
}