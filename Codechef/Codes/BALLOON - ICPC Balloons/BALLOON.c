#include<stdio.h>
int main()
{
    int t,n,i,j,count;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int f[n];
        count=0;
        for(i=0;i<n;i++)
        { 
            scanf("%d",&f[i]);
            if(f[i]>=1 && f[i]<=7)
            {
                count++;
                if(count==7) printf("%d\n",i+1);
            }
        }
    }
}