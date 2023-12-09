#include<stdio.h>
int main()
{
    int i,n,m,c=0;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        if(i%3==0)
        {
            c++;
        }
        
    }
    printf("%d",c);
}