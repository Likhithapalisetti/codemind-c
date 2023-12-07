#include<stdio.h>
int main()
{
    int l,b,w,c,area,cost;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    area = (l*b)-((l-(2*w))*(b-(2*w)));
    if(area<l*b)
    {
        cost = c*area;
        printf("%d",cost);
    }
    else
    {
        printf("Impossible");
    }
    
}