#include<stdio.h>
int main()
{
    int t,n,x,p,q;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&x);
        p=(n-x)/4;
        q=(n-x)%4;
        if(n<=x) printf("0\n");
        else if(n>x && q==0) printf ("%d\n",p);
        else printf("%d\n",p+1);
    }
}