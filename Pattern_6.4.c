#include<stdio.h>
int main()
{
    int i,j,n,k;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(k=1;k<=i-1;k++)
        {
            printf(" ");
        }
        for(j=i;j<=n;j++)
        {
            printf("%c ",i+64);
        }
        printf("
");
    }
}