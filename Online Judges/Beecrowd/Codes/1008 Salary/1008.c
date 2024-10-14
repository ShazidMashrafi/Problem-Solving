#include<stdio.h>
int main()
{
    int number,hour;
    float perhour;
    scanf("%d %d %f",&number,&hour,&perhour);
    printf("NUMBER = %d\n",number);
    printf("SALARY = U$ %.2f\n",hour*perhour);
    return 0;
}