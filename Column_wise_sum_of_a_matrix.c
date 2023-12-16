#include<stdio.h>
#include<limits.h>
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int a[r][c],i,j,column_sum=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<c;j++)
    {
        column_sum=0;
        for(i=0;i<r;i++)
        {
            column_sum=column_sum+a[i][j];
        }
        printf("%d ",column_sum);
    }
}