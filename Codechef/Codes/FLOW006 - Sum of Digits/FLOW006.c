#include<stdio.h>
int main()
{
    int n,r,num;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&num);
        int sum=0;
        while(num!=0)
        {
            r=num%10;
            sum=sum+r;
            num=num/10;
        }
        printf("%d\n",sum);
    }
}