#include<stdio.h>
int main()
{
    int time,speed;
    float fuel;
    scanf("%d %d",&time,&speed);
    fuel=(time*speed)/12.0;
    printf("%.3f\n",fuel);
    return 0;
}