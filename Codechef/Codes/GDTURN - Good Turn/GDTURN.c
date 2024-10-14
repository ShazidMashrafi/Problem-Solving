#include<stdio.h>
int main()
{
    int n,x,y;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d",&x,&y);
        if(x+y>6) printf("YES\n");
        else printf("NO\n");
    }
}