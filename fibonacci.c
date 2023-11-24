#include<stdio.h>
int main()
{
    int n,r,i,f=0,s=1;
    scanf("%d",&n);
    for(i =0;i<=n-1;i++)
    {
       printf("%d ",f);
       r = f+s;
       f = s;
       s = r;
    }
}