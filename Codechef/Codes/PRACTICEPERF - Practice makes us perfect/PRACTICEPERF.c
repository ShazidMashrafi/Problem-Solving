#include<stdio.h>
int main()
{
    int i,w[4],count=0;
    for(i=0;i<4;i++)
    {
        scanf("%d",&w[i]);
        if(w[i]>=10) count++;
    }
    printf("%d",count);
}