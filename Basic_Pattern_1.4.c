#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    char ch;
    for(i=0;i<n;i++)
    {
        for(ch='A';ch<'A'+n;ch++)
        {
            printf("%c ",ch);
        }
        printf("
");
    }
    
}