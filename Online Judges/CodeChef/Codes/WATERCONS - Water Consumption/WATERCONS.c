#include <stdio.h>

int main(void) {
	int x,t;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&x);
	    if(x>=2000) printf("YES\n");
	    else printf("NO\n");
	}
	return 0;
}