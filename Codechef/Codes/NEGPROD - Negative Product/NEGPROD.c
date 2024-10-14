#include<stdio.h>
int main()
{
    int t,x,y,z;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&x,&y,&z);
        if(x*y<0 || y*z<0 || x*z<0) printf("Yes\n");
        else printf("No\n");
    }
}