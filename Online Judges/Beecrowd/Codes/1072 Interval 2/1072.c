#include<stdio.h>
int main()
{
    int n,i,x,in=0,out=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(x>=10 && x<=20)
            in++;
        else out++;
    }
    printf("%d in\n",in);
    printf("%d out\n",out);
}