#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
    int n;
    char s[100];
    scanf("%d%s",&n,&s);
    int count=0;
    int j;
    for(j=0;j<n;j++)
    {
        if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')
        {
            count=0;
        }
        else
        {
            count++;
            if(count==4)
            break;
        }
    }
    if(count < 4)
    printf("yes\n");
    else
    printf("no\n");
    }
return 0;
}