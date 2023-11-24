#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i =0;a<=b;a++)
    {
       if(a%3==0)
       i++;
    }
    printf("%d",i);
}