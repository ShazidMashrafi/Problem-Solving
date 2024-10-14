#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x>=100 && x<=1690)
    {
        if(x+7>170) printf("Yes\n");
        else printf("No\n");
    }
}