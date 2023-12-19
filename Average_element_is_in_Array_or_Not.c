#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0,avg;
    for( int i=0;i<n;i++)
    {
        sum = sum+arr[i];
    }
    avg = sum/n;
    for( int i=0;i<n;i++)
    {
    if(avg == arr[i])
    {
        c++;
    }
    }
    if(c>0)
    {
        printf("True");
    }
      else
    {
        printf("False");
    }
}