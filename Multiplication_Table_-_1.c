#include<stdio.h>
int main()
{
    int i,n,a;
    scanf("%d",&n);
    for(i = 1; i<13; i++)
    {
        a = n * i;
        printf("%d x %d = %d
",n,i,a);
    }
}