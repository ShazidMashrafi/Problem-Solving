#include<stdio.h>
int main()
{
    int a,b,c,d,i,j,temp;
    int array[3];
    scanf("%d %d %d",&a,&b,&c);
    array[0]=a;
    array[1]=b;
    array[2]=c;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(array[i]<array[j])
            {
                temp=array[j];
                array[j]=array[i];
                array[i]=temp;
            }
        }
    }
    printf("%d\n%d\n%d\n", array[0], array[1], array[2]);
    printf("\n%d\n%d\n%d\n", a, b, c);
    return 0;
}