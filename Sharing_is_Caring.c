#include<stdio.h>
int main()
{
    int i,j;
    scanf("%d%d",&i,&j);
    if(j*(j+1)/2<=i)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
}