#include<stdio.h>
int main()
{
    int n,i,a=0,b=0,c,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        d = i*i;
        b = b+d;
    }
    for(i=1;i<=n;i++)
    {
        a = a+i;
    }
    c = a*a;
    printf("%d",c-b);
}