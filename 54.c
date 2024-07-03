#include <stdio.h>
int main()
{
    int a[100], c[100], ac[100], b[100], n, count1 = 0, count2 = 0;
    scanf("%d", &n);
    for (int i = 0; i <= 18; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            if (n == 101 * i + 20 * j)
            {
                ac[count1] = i;
                b[count1] = j;
                count1++;
            }
        }
    }
    for (int o = 0; o < count1; o++)
    {
        for (int i = 0; i <= 9; i++)
        {
            for (int j = 0; j <= 9; j++)
            {
                if (ac[o] == i + j)
                {
                    // a[count2] = i;
                    // c[count2] = j;
                    printf("%d %d %d\n", i, b[o], j);
                    // count2++;
                }
            }
        }
    }



    return 0;
}
