#include<stdio.h>
#include<math.h>

int main()
{
    int t,x,r;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&x);
        r=sqrt(x);
        printf("%d\n",r);
    }
}