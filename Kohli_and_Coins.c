#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d",&x);
    y = x%10;
    if(x%10==0 || x%5==0)
    {
        z = x/10+y/5;
        printf("%d",z);
    }
    else
    {
        printf("-1");
    }
}