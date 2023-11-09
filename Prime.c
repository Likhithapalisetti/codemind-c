#include<stdio.h>
int main()
{
    int a,i,d_c = 0;
    scanf("%d",&a);
    for(i = 1; i <= a; i++)
    {
        if(a%i == 0)
        d_c++;
    }
    if(d_c == 2)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}