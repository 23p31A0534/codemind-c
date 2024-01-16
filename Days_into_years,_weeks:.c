#include<stdio.h>
int main()
{
    int days;
    scanf("%d",&days);
    int years=(days/365);
    int weeks=(days%365)/7;
    printf("%d
",years);
    printf("%d",weeks);
}