#include<stdio.h>
int main()
{
    int i,num,e=0,o=0,p=0,n=0;
    for(i=1;i<=5;i++)
    {
    scanf("%d",&num);
    if(num%2==0) e++;
    if(num%2!=0) o++;
    if(num>0) p++;
    if(num<0) n++;
    }
    printf("%d valor(es) par(es)\n",e);
    printf("%d valor(es) impar(es)\n",o);
    printf("%d valor(es) positivo(s)\n",p);
    printf("%d valor(es) negativo(s)\n",n);
}