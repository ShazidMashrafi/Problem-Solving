#include<stdio.h>
int main()
{
    int t,x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&x,&y);
        if(((y*100)/x)>=50) printf("YES\n");
        else printf("No\n");
    }
}