#include<stdio.h>
int main()
{
    int t,x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&x,&y);
        if(x<y) printf("REPAIR\n");
        else if(x>y) printf("NEW PHONE\n");
        else if(x==y) printf("ANY\n");
    }
}