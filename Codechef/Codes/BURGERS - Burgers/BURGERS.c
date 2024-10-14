#include <stdio.h>

int main(void) {
	int t,p,b;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d %d",&p,&b);
	    if(p>b) printf("%d\n",b);
	    else printf("%d\n",p);
	}
	return 0;
}