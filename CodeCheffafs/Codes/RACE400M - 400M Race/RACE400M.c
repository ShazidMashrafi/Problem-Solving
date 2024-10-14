#include<stdio.h>
int main()
{
    int t,x,y,z;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&x,&y,&z);
        if(x<y && x<z) printf("Alice\n");
        else if(y<z && y<x) printf("Bob\n");
        else if(z<x && z<y) printf("Charlie\n");
    }
}