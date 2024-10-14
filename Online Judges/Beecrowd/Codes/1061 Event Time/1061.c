#include<stdio.h>
int main()
{
    int d1,h1,m1,s1,d2,h2,m2,s2;
    int start,end,d,h,m,s,diff;
    scanf("%*s %d",&d1);
    scanf("%d %*s",&h1);
    scanf("%d %*s",&m1);
    scanf("%d",&s1);
    scanf("%*s %d",&d2);
    scanf("%d %*s",&h2);
    scanf("%d %*s",&m2);
    scanf("%d",&s2);
    start=d1*86400+h1*3600+m1*60+s1;
    end=d2*86400+h2*3600+m2*60+s2;
    diff=end-start;
    d=diff/86400;
    diff=diff%86400;
    h=diff/3600;
    diff=diff%3600;
    m=diff/60;
    s=diff%60;
    printf("%d dia(s)\n",d);
    printf("%d hora(s)\n",h);
    printf("%d minuto(s)\n",m);
    printf("%d segundo(s)\n",s);
}