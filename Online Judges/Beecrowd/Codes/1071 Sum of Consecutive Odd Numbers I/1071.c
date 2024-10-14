#include<stdio.h>
int main()
{
    int i,x,y,sum=0,min,max;
    scanf("%d %d",&x,&y);
    if(x>y)
    {
        max=x;
        min=y;
    }
    else
    {
        max=y;
        min=x;
    }
    for(i=min+1;i<max;i++)
        {
            if(i%2!=0) sum=sum+i;
        }
    printf("%d\n",sum);
}