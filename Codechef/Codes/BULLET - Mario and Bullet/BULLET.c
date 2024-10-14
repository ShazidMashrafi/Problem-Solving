#include<stdio.h>
int main()
{
    int t,x,y,z,s;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&x,&y,&z);
        s=z-(y/x);
        if(s<=0) printf("0\n");
        else printf("%d\n",s);
    }
}