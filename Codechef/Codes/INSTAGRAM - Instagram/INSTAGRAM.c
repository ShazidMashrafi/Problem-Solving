#include <stdio.h>

int main(void) {
	int t,x,y;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d %d",&x,&y);
	    if(x>10*y) printf("Yes\n");
	    else printf("No\n");
	}
	return 0;
}