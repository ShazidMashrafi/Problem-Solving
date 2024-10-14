#include<stdio.h>
int main()
{
    int h,m,t,bmi;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&m,&h);
        bmi=(m/(h*h));
        if(bmi<=18 && bmi>0) printf("1\n");
        else if(bmi<=24) printf("2\n");
        else if(bmi<=29) printf("3\n");
        else if(bmi>=30) printf("4\n");
    }
}