#include<stdio.h>
int main()
{
    int t,a,b,c;
    float avg;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&a,&b,&c);
        avg=(a+b)/2.0;
        if(avg>c) printf("YES\n");
        else printf("NO\n");
    }
}