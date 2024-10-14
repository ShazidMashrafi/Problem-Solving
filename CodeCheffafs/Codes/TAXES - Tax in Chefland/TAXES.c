#include <stdio.h>

int main(void) {
    int t,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&i);
        if(i>100) printf("%d\n",i-10);
        else printf("%d\n",i);
    }
	return 0;
}