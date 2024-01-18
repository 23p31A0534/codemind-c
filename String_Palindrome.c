#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int length,k;
    char str[100];
    scanf("%s",&str);
    length=strlen(str);
    length=length-1;
    k=0;
    while(length>k)
    {
        if(str[length]!=str[k])
        {
            printf("Not Palindrome",str);
            exit(0);
        }
        length--;
        k++;
    }
    printf("Palindrome",str);
    
}