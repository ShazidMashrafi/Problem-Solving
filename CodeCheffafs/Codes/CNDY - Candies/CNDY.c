#include <stdio.h>
#include<stdbool.h>

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int a[2 * n];
        int count;
        bool terminate= false;
        for (int i = 0; i < 2 * n; i++)
        {
            scanf("%d",&a[i]);
        }
        for (int i = 0; i < 2 * n; i++)
        {
            count=0;
            for (int j = i; j < 2 * n; j++)
            {
                if(terminate) break;
                if (a[i] == a[j])
                {
                    count++;
                    if (count == 3) 
                    {
                        terminate=true;
                        break;
                    }
                }
            }
            if(terminate) break;
        }
        output:
        if (count < 3)
            printf("Yes\n");
        else
            printf("No\n");
    }
}