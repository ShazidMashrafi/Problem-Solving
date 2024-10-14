#include<stdio.h>
int main()
{
    int t,x,y,a;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&x,&y,&a);
        if(a>=x && a<y) printf("YES\n");
        else printf("NO\n");
    }
}