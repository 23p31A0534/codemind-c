#include<stdio.h>
int main()
{
    int n,i,search;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(search==a[i])
        {
            printf("True");
            break;
        }
    }
    if(i==n)
    printf("False");
}