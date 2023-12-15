#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,sum=0;
    float avg;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
        avg=(float)sum/n;
    }
    printf("%.2f",avg);
}