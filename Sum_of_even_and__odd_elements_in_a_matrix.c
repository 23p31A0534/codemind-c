#include<stdio.h>
int main()
{
    int r1,c1,i,j;
    int sum=0,s=0;
    scanf("%d%d",&r1,&c1);
    int a[r1][c1];
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            if(a[i][j]%2==0)
            sum=sum+a[i][j];
            else
            s=s+a[i][j];
        }
    }
    printf("%d %d",sum,s);
}