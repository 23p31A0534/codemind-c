#include<stdio.h>
int main()
{
    int n,n1,temp,max=0;
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
        temp=n%10;
        if(temp>max)
        {
            max=temp;
        }
        n=n/10;
    }
    printf("%d",max);
}