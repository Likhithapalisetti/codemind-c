#include<stdio.h>
int main()
{
    int a,b,i,m;
    scanf("%d%d",&a,&b);
    for(i = 1; i<=b; i++)
    {
        m = a*i;
        printf("%d x %d = %d
",a,i,m);
    }
}