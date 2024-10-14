#include<stdio.h>
int main()
{
    int n,num,r;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&num);
        int revNum=0;
        while(num!=0)
        {
            r=num%10;
            revNum=revNum*10+r;
            num=num/10;
        }
        printf("%d\n",revNum);
    }
}