#include<stdio.h>
int main()
{
    int money;
    scanf("%d",&money);
    printf("%d\n",money);

    printf("%d nota(s) de R$ 100,00\n",money/100);
    money=money%100;
    printf("%d nota(s) de R$ 50,00\n",money/50);
    money=money%50;
    printf("%d nota(s) de R$ 20,00\n",money/20);
    money=money%20;
    printf("%d nota(s) de R$ 10,00\n",money/10);
    money=money%10;
    printf("%d nota(s) de R$ 5,00\n",money/5);
    money=money%5;
    printf("%d nota(s) de R$ 2,00\n",money/2);
    money=money%2;
    printf("%d nota(s) de R$ 1,00\n",money=money/1);

    return 0;
}