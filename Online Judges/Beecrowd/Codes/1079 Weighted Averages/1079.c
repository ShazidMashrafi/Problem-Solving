#include<stdio.h>
int main()
{
    int i,n;
    float x,y,z,avg;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%f %f %f",&x,&y,&z);
        avg= (x*2+y*3+z*5)/(10);
        printf("%.1f\n",avg);
    }
}