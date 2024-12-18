#include<stdio.h>
int main()
{
    int start,end;
    scanf("%d %d",&start,&end);
    if(start>=end)
    {
        end+=24;
    }
    printf("O JOGO DUROU %d HORA(S)\n",end-start);
    return 0;
}