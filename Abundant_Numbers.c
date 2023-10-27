#include<stdio.h>
int main()
{
    int n,temp,sum=0,i;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
        
    }
    if(n<sum)
    {
        printf("True");
    }
    else{
        printf("False");
    }
}