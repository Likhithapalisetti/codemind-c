#include<stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    for(i=65;i<=a+64;i++)
    {
        for(j=65;j<=i;j++)
        {
            printf( "%c ",j);
        }
        printf("
");
        
    }
    
}