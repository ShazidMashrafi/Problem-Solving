#include <stdio.h>

int main(void) {
	int t,x,n,p;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d %d",&x,&n);
	    p=(x/10)*n;
	    printf("%d\n",p);
	}
	return 0;
}