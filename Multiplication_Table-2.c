#include<stdio.h>
int main()
{
    int i,n,s;
    scanf("%d%d",&n,&s);
    for(i=1;i<=s;i++)
    {
        printf("%d x %d = %d
",n,i,(n*i));
    }
}