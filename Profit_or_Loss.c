#include<stdio.h>
int main()
{
    int sp,cp;
    scanf("%d%d",&sp,&cp);
    if(cp>sp)
    {
        printf("Profit
");
    }
    else if(cp<sp)
    {
        printf("Loss");
    }
    else
    {
        printf("No Profit and No Loss");
    }

}