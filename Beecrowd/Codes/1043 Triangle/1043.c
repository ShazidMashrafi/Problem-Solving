#include<stdio.h>
int main()
{
    float a,b,c,s,area;
    scanf("%f %f %f",&a,&b,&c);
    if(a<b+c && b<a+c && c<a+b)
    {
        s=a+b+c;
        printf("Perimetro = %.1f\n",s);
    }
    else
    {
        area=.5*c*(a+b);
        printf("Area = %.1f\n",area);
    }
}