#include<stdio.h>
int main()
{
    int t,x,h;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&x,&h);
        if(x>=h) printf("YES\n");
        else printf("NO\n");
    }
}