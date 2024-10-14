#include<stdio.h>
int main()
{
    int n,r,num;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d",&num,&r);
        printf("%d\n",num%r);
    }
}