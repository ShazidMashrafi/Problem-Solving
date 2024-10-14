#include<stdio.h>
int main()
{
    int t,l,r,i,count;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&l,&r);
        count=0;
        for(i=l;i<=r;i++)
        {
            if(i%10==2 || i%10==3 || i%10==9) count++;
        }
        printf("%d\n",count);
    }
}