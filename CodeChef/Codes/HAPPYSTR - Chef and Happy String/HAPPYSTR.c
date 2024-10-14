#include<stdio.h>
#include<string.h>

int vcheck(char ch)
{
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') return 1;
    else return 0;
}

int main()
{
    int t,l,i;
    char str[1000];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",str);
        l=strlen(str);
        int count=0;
        for(i=0;i<l;i++)
        {
            if(vcheck(str[i])==1 && vcheck(str[i+1])==1 && vcheck(str[i+2])==1) count++;
        }
        if(count==0) printf("Sad\n");
        else printf("Happy\n");
    }
}