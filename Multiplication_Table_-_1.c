#include<stdio.h>
int main()
{
    int num,count;
    scanf("%d",&num);
    for(count=1;count<=12;count++)
    {
        printf("%d x %d = %d
",num,count,(num*count));
    }
}