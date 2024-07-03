#include <stdio.h>
int main()
{
    int day, sale[100];
    scanf("%d", &day);
    for (int i = 0; i < day; i++)
    {
        scanf("%d", &sale[i]);
    }
    int dif_former = 0, dif_latter, count = 0;
    for (int i = 0; i < day - 1; i++)
    {
        dif_latter = (sale[i] - sale[i + 1]);
        if (dif_former * dif_latter < 0)
        {
            count++;
        }
        dif_former = dif_latter;
    }
    printf("%d", count);

    return 0;
}