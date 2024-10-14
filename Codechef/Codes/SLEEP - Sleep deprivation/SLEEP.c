#include<stdio.h>
int main()
{
    int t,x;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&x);
        if(x>=7) printf("NO\n");
        else printf("Yes\n");
    }
}