#include<stdio.h>
int main()
{
    int t,profit,n,total,rent,buy,salt;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        profit=n*50-n*50*.2-n*50*.2-n*50*.3;
        printf("%d\n",profit);
    }
}