#include<stdio.h>
int main()
{
    int t,m,n,k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&m,&n,&k);
        if(m>n*k) printf("Yes\n");
        else printf("No\n");
    }
}