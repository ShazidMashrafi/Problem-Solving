#include<stdio.h>
int main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
            printf("%d\n",i);
    }
}   