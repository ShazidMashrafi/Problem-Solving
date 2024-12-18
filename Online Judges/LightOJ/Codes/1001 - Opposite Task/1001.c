 #include<stdio.h>
 int main()
 {
    int t,x;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&x);
        if(x>10) printf("%d %d\n",x-10,10);
        else printf("0 %d\n",x);
    }
 }