#include<stdio.h>
int main()
{
    int n,num,first,last;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&num);
        last=num%10;
        while(num>0)
        {
            first=num%10;
            num=num/10;
        }
        printf("%d\n",first+last);
    }
}