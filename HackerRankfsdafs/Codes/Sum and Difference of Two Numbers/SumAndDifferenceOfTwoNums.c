#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n1,n2;
    float n3,n4;
    scanf("%d %d",&n1,&n2);
    scanf("%f %f",&n3,&n4);
    printf("%d %d \n%.1f %.1f",n1+n2,n1-n2,n3+n4,n3-n4);
    
    return 0;
}