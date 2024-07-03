#include <stdio.h>
int main()
{
    int martix[100][100], n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &martix[i][j]);
        }
    }
    int i = 0, j = 0, o = 0;

    while (1)
    {
    rule1:
        printf("%d ", martix[i--][j++]);
        o++;
        if (o == n * n)
            return 0;
        if (j > n-1)
        {
            i += 2;
            j--;
            goto rule2;
        }
        if (i < 0)
        {
            i = 0;
            goto rule2;
        }
    }
    while (1)
    {
    rule2:
        printf("%d ", martix[i++][j--]);
        o++;
        if (o == n * n)
            return 0;
        if (i > n-1)
        {
            j += 2;
            i--;
            goto rule1;
        }
        if (j < 0)
        {
            j = 0;
            goto rule1;
        }
    }
}