#include<stdio.h>
int main()
{
    int num,t,rev=0,rem;
    scanf("%d",&num);
    while(num)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
        printf("%d
",rev);
}