#include<stdio.h>
int main()
{
    int t,num;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&num);
        int count=0;
        while(num!=0)
        {
            if(num%10==4) count++;
            num/=10;
        }
        printf("%d\n",count);
    }
}