#include<stdio.h>
#include<limits.h>
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int a[r][c],i,j,rowsum=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        rowsum=0;
        for(j=0;j<c;j++)
        {
            rowsum=rowsum+a[i][j];
        }
       printf("%d ",rowsum);
    }
}
