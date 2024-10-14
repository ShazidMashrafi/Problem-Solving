#include<stdio.h>
int main()
{
    double volume,r,pi=3.14159;
    scanf("%lf",&r);
    volume=(4/3.0)*pi*r*r*r;
    printf("VOLUME = %.3lf\n",volume);
    return 0;
}