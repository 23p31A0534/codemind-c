#include<stdio.h>
int main()
{
    int N,sum=0,rem;
    scanf("%d",&N);
    while(N>0)
    {
        rem=N%10;
        sum=sum+rem;
        N=N/10;
    }
    printf("%d",sum);
}