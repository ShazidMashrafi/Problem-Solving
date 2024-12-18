#include<stdio.h>
int main()
{
    int i,n,count=1;
    scanf("%d",&n);
    for(i=n;count<=6;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
            count++;
        }
    }
}