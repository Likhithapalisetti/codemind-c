#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);
    if(b<(c-d) && e<(f-g))
    {
        printf("YES
YES");
    }
     else if(b>(c-d) && e>(f-g))
    {
        printf("NO
NO");
    }
    else if(b>(c-d) && e<(f-g))
    {
        printf("NO
YES");
    }
    else if(b<(c-d) && e>(f-g))
    {
        printf("YES
NO");
    }
}

