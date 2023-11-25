#include<stdio.h>
int main()
{
    int a,b,n;
    scanf("%d",&n);
    a = n/5;
    b = (n/5)+1;
    if(n%5==0)
    {
        printf("%d",a);
    }
    else
    {
        printf("%d",b);
    }
    
}