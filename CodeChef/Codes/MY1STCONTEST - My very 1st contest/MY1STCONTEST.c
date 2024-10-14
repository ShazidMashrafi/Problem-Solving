#include<stdio.h>
int main()
{
    int user,unsub,sub,unsolve,solve;
    scanf("%d %d %d",&user,&unsub,&unsolve);
    sub=user-unsub;
    solve=sub-unsolve;
    printf("%d %d",sub,solve);
}