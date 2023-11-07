#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int d_c = 0;
    while(n)
    {
      d_c++;
      n = n/10;
    }
    printf("%d",d_c);
}