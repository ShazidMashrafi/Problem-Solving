#include<stdio.h>
int main()
{
    int name[50];
    double salary,sold,total;
    scanf("%s",&name);
    scanf("%lf %lf",&salary,&sold);
    total=salary+(sold*15)/100;
    printf("TOTAL = R$ %.2lf\n",total);
    return 0;
}