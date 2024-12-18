#include<stdio.h>
int main()
{
    float salary,increase;
    scanf("%f",&salary);

    if(salary>=0 && salary<400.01)
    {
        increase= (salary*15)/100;
        printf("Novo salario: %.2f\n",salary+increase);
        printf("Reajuste ganho: %.2f\n",increase);
        printf("Em percentual: 15 %%\n");
    }
    else if(salary>=400.01 && salary<800.01)
    {
        increase= (salary*12)/100;
        printf("Novo salario: %.2f\n",salary+increase);
        printf("Reajuste ganho: %.2f\n",increase);
        printf("Em percentual: 12 %%\n");
    }
    else if(salary>=800.01 && salary<1200.01)
    {
        increase= (salary*10)/100;
        printf("Novo salario: %.2f\n",salary+increase);
        printf("Reajuste ganho: %.2f\n",increase);
        printf("Em percentual: 10 %%\n");
    }
    else if(salary>=1200.01 && salary<=2000.00)
    {
        increase= (salary*7)/100;
        printf("Novo salario: %.2f\n",salary+increase);
        printf("Reajuste ganho: %.2f\n",increase);
        printf("Em percentual: 7 %%\n");
    }
    else if(salary>2000.00)
    {
        increase= (salary*4)/100;
        printf("Novo salario: %.2f\n",salary+increase);
        printf("Reajuste ganho: %.2f\n",increase);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}