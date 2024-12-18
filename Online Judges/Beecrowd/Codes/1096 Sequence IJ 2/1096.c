#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=9;i=i+2)
    {
        for(j=7;j>=5;j--)
        {
            printf("I=%d J=%d\n",i,j);
        }
    }
}