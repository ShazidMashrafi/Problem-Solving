#include<stdio.h>
int main()
{
    int t,n,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        if(n<=m*36) printf("Yes\n");
        else printf("No\n");
    }
}