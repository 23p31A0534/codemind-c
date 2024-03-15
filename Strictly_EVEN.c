#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int c=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            if(i%2!=0){
            c=1;
            printf("False");
            }
        }
    }
    if(c==0)
    printf("True");
}