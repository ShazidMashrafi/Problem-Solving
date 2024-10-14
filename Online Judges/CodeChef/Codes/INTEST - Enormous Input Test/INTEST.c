#include<stdio.h>
int main()
{
    int n,k,num,count=0;
    scanf("%d %d",&n,&k);
    while(n--)
    {
        scanf("%d",&num);
        if(num%k==0) 
        {
            count++;
        }
    }
    printf("%d\n",count);
}