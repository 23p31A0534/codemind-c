#include<stdio.h>
#include<string.h>
int main()
{
    int value;
    char s1[30],s2[30];
    scanf("%s %s",s1,s2);
    value=strcmp(s1,s2);
    if(value==0)
    {
        printf("Strings are Equal");
    }
    else
    {
        printf("Strings are not Equal");
    }
}