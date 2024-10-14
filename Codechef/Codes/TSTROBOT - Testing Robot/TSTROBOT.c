#include<stdio.h>
int main()
{
    int i,t,x,n,max,min,count;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&x);
        char s[n];
        scanf("%s",&s);
        max=x;
        min=x;
        count=1;
        for(i=0;i<n;i++)
        {
            if(s[i]=='L') x--;
            else if(s[i]=='R') x++;
            if(x>max) 
            {
                count++;
                max=x;
            }
            else if(x<min) 
            {
                count++;
                min=x;
            }
        }
        printf("%d\n",count);
    }
}