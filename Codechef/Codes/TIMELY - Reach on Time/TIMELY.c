#include<stdio.h>
int main()
{
    int t,x;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&x);
        if(x>=30) printf("YES\n");
        else printf("NO\n");
    }
}