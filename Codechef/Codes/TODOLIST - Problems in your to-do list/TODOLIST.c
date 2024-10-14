#include <stdio.h>
int main()
{
    int t, n, d;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &d);
            if (d >= 1000)
                count++;
        }
        printf("%d\n",count);
    }
}