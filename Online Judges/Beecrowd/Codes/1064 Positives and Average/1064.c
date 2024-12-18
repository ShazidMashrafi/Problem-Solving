#include<stdio.h>
int main()
{
    float n,sum=0,avg;
    int i,count=0;
    for(i=1;i<=6;i++)
    {
        scanf("%f",&n);
        if(n>0)
        {
            sum=sum+n;
            count++;
        }
    }
    avg=sum/count;
    printf("%d valores positivos\n",count);
    printf("%.1f\n",avg);
    return 0;
}