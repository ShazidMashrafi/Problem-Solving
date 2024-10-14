#include<stdio.h>
int main()
{
    int t,n,g;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        g=(n*60)/20;
        printf("%d\n",g);
    }
}