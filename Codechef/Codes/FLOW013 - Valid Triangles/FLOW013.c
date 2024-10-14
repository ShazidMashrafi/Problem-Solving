#include<stdio.h>
int main()
{
    int i,n,a,b,c;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a+b+c==180) printf("YES\n");
        else printf("NO\n");
    }
}