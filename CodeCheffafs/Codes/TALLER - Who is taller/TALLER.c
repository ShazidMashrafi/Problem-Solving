#include<stdio.h>
int main()
{
    int t,a,b;
    scanf("%d",&t);
    if(t>=1 && t<=1000)
    {
    while(t--)
    {
        scanf("%d %d",&a,&b);
        if(a>=100 && a<=200 && b>=100 & b<=200)
        {
        if(a>b) printf("A\n");
        if(a<b) printf("B\n");
        }
    }
    }
}