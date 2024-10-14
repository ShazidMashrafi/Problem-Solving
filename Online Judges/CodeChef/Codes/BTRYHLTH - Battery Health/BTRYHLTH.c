#include<stdio.h>
int main()
{
    int t,x;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&x);
        if(x>=80) printf("Yes\n");
        else printf("No\n");
    }
}