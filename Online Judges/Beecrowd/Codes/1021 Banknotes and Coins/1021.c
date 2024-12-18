#include<stdio.h>
int main()
{
    double m;
    int money;
    scanf("%lf",&m);
    money=m*100;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",money/10000);
    money=money%10000;
    printf("%d nota(s) de R$ 50.00\n",money/5000);
    money=money%5000;
    printf("%d nota(s) de R$ 20.00\n",money/2000);
    money=money%2000;
    printf("%d nota(s) de R$ 10.00\n",money/1000);
    money=money%1000;
    printf("%d nota(s) de R$ 5.00\n",money/500);
    money=money%500;
    printf("%d nota(s) de R$ 2.00\n",money/200);
    money=money%200;

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",money/100);
    money=money%100;
    printf("%d moeda(s) de R$ 0.50\n",money/50);
    money=money%50;
    printf("%d moeda(s) de R$ 0.25\n",money/25);
    money=money%25;
    printf("%d moeda(s) de R$ 0.10\n",money/10);
    money=money%10;
    printf("%d moeda(s) de R$ 0.05\n",money/5);
    money=money%5;
    printf("%d moeda(s) de R$ 0.01\n",money/1);
    return 0;
}