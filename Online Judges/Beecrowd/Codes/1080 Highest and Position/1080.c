#include<stdio.h>
int main()
{
    int i,arr[100],max=0,pos;
    for(i=0;i<100;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<100;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            pos=i+1;
        }
    }
    printf("%d\n",max);
    printf("%d\n",pos);
}