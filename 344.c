#include <stdio.h>
int main()
{
    int m[100], car[100], cnt;
    for (int i = 0;; i++)
    {
        scanf("%d", &m[i]);
        if (m[i] == 0)
        {
            cnt = i;
            break;
        }

        car[i] = m[i] / 90 * 180;
        car[i] += ((m[i] % 90 > 60) ? 180 : 3 * (m[i] % 90));
    }
    for (int i = 0; i < cnt; i++)
    {
        printf("%d ", car[i]);
    }

    return 0;
}