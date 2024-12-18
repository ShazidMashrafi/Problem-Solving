#include<stdio.h>
int main()
{
    int m,n;
    float i,j;
    for(i=0.0;i<=2.1;i=i+0.2)
    {
        for(j=1.0;j<=3.0;j=j+1.00)
        {
            if(i>0.0 && i<1.0) printf("I=%.1f J=%.1f\n",i,j+i);
            else if(i>1.0 && i<2.0) printf("I=%.1f J=%.1f\n",i,j+i);
            else
            {
                m=i;
                n=i+j;
                printf("I=%d J=%d\n",m,n);
            }
        }
    }
}