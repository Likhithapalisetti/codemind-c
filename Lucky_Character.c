#include<stdio.h>
int main()
{
    int n = 10;
    char str[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%s",&str[i]);
    }
    printf("%c",str[7]);
}