#include <stdio.h>
int main()
{
    int list[1000], n = 0, sum = 0;
    for (int i = 0; 1; i++, n++)
    {
        scanf("%d", &list[i]);
        if (list[i] == 0)
        {
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (list[i] % 2 == 1)
        {
            sum += list[i];
        }
    }
    printf("%d", sum);

    return 0;
}