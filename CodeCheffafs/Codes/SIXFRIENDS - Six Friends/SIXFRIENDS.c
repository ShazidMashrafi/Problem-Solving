#include<stdio.h>
int main()
{
    int t,x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&x,&y);
        if(3*x>=2*y) printf("%d\n",2*y);
        else printf("%d\n",3*x);
    }
}