#include<stdio.h>
int main()
{
    float salary;
    scanf("%f",&salary);

    if(salary<=2000.00) printf("Isento\n");
    else if(salary>=2000.01 && salary<=3000.00) printf("R$ %.2f\n",(salary-2000)*0.08);
    else if(salary>=3000.01 && salary<=4500.00) printf("R$ %.2f\n",(salary-3000)*0.18+1000*0.08);
    else if(salary>4500.00) printf("R$ %.2f\n",(salary-4500.00)*0.28+1500*0.18+1000*0.08);
    return 0;
}