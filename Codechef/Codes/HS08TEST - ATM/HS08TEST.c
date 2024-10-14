#include<stdio.h>
int main()
{
    int x;
    float y,z;
    scanf("%d %f",&x,&y);
    if(x%5==0 && x<=y-0.50)
    {
        z=y-x-0.50;
        printf("%.2f\n",z);
    }
    else
    {
        printf("%.2f\n",y);
    }
}