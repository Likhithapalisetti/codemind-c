#include<stdio.h>
int main()
{
    int i,j,n,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=i-1;k++)
        {
            printf(" ");
        }
        for(j=n;j>=i;j--)
        {
            printf("%c ",i+64);
        }
        printf("
");
    }
}