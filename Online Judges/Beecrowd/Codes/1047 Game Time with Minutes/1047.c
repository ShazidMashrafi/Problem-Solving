#include <stdio.h>
int main()
{
    int st, sm, et, em, fm, ft;
    scanf("%d %d %d %d", &st, &sm, &et, &em);
    ft = et - st;
    fm = em - sm;
    if (ft < 0)
    {
        ft = 24 +ft;
    }
    if (fm < 0)
    {
        fm = 60 +fm;
        ft--;
    }
    if (et == st && em == sm)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", ft, fm);
    return 0;
}