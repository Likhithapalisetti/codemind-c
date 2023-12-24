#include<stdio.h>
int main()
{
    int n,sum1=0,sum2=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i=i+2)
    {
        sum1 = sum1+arr[i];
    }
    for(int i=1;i<n;i=i+2)
    {
        sum2 = sum2+arr[i];
    }
    printf("%d",sum1-sum2);
}