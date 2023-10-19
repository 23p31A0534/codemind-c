#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d%d",&X,&Y);
    if(Y<=X/30)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}