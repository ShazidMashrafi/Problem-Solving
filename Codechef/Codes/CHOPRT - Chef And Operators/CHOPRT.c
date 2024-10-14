#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d",&a,&b);
        if(a<b) printf("<\n");
        else if(a>b) printf(">\n");
        else if(a=b) printf("=\n");
    }
}