#include <stdio.h>

int main(void) {
	int t;
	int x,y,z,a,b,c;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d %d %d",&a, &b ,&c);
	    x=(a+b)/2;
	    y=(a+c)/2;
	    z=(c+b)/2;
	    if(x<35 || y<35 || z<35)
	    {
	        printf("Fail\n");
	    }
	    else
	    {
	         printf("Pass\n");
	    }
	}
	return 0;
}
