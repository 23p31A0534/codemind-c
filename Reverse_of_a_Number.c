#include<stdio.h>
int main()
{
    int reverse=0,rem,n;
    scanf("%d",&n);
    while(n)
    {
        rem=n%10;
        reverse=(reverse*10+rem);
        n=n/10;
    }
    printf("%d",reverse);
}