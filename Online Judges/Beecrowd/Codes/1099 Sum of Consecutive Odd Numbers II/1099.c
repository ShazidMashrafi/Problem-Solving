#include<stdio.h>
int main()
{
    int n,i,j,start,end;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&start,&end);
        if(start>end)
        {
            start=start+end;
            end=start-end;
            start=start-end;
        }
        int sum=0;
        for(j=start+1;j<end;j++)
        {
            if(j%2!=0)
                sum=sum+j;
        }
        printf("%d\n",sum);
    }
}