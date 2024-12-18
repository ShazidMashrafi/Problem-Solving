#include<stdio.h>
int main()
{
    double a,b,c,d,e;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a<b)
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    if(a<c)
    {
        a=a+c;
        c=a-c;
        a=a-c;
    }
    if(b<c)
    {
        b=b+c;
        c=b-c;
        b=b-c;
    }
    d=a*a;
    e=(b*b)+(c*c);
    if(a>=b+c) printf("NAO FORMA TRIANGULO\n");
    else 
    {
        if(d==e) printf("TRIANGULO RETANGULO\n");
        if(d>e) printf("TRIANGULO OBTUSANGULO\n");
        if(d<e) printf("TRIANGULO ACUTANGULO\n");
        if(a==b && a==c) printf("TRIANGULO EQUILATERO\n");
        if((a==b && a!=c) || (a==c && a!=b) || (b==c && b!=a)) printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}