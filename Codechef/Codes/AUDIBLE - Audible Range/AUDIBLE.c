#include <stdio.h>

int main(void) {
	int t,hz;
	scanf("%d",&t);
	while(t--)
    {
        scanf("%d",&hz);
        if(hz>=67 && hz<=45000) printf("YES\n");
        else printf("NO\n");
    }
	return 0;
}