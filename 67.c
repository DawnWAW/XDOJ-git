#include <stdio.h>
int main()
{
    int list[100], n, k, flag = 1;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &list[i]);
        if (k == list[i])
        {
            printf("%d ", i);
            flag = 0;
        }
    }
    if (flag)
    {
        printf("%d", -1);
    }

    return 0;
}