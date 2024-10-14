#include <stdio.h>

int main(void) {
	int t,start,end;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d %d",&start,&end);
	    printf("%d\n",end-start);
	}
	return 0;
}