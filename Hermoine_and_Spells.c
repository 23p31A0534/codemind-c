#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>c && b>c)
    {
        printf("%d",a+b);
    }
    else if(a>b && c>b)
    {
        printf("%d",a+c);
    }
    else if(b>a && c>a)
    {
        printf("%d",b+c);
    }
}