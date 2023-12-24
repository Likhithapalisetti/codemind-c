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
    for(int i=0;i<n;i++)
    {
        if(arr[0]>arr[i])
        {
            arr[0]=arr[i];
        }
    }
    printf("%d",arr[0]);
}