#include<stdio.h>
int main()
{
    int x,a,n,sum = 0;
    scanf("%d",&x);
    a = x*x;
    while(a!=0)
    {
        n = a%10;
        sum += n;
        a /= 10;
    }
    if(sum == x)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}