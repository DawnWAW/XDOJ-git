#include <stdio.h>
#include <math.h>
int main()
{
    int num, list[100], count = 0;
    scanf("%d", &num);
    if (num % 2 != 0)
    {
        printf("-1");
    }
    else
    {
        for (int i = (int)(log((double)num) / log(2.0)); i >= 1; i--)
        {
            if (num >= (int)pow(2.0, i))
            {
                num -= (int)pow(2.0, i);
                list[count] = (int)pow(2.0, i);
                count++;
            }
        }
        for (int i = 0; i < count; i++)
        {
            printf("%d ", list[i]);
        }
    }

    return 0;
}