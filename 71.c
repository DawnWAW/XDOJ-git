#include <stdio.h>
void check(int list[], int *cnt, int search)
{
    int flag = 1;
    for (int i = 0; i < *cnt; i++)
    {
        if (list[i] == search)
        {
            flag = 0;
        }
    }
    if (flag)
    {
        list[(*cnt)++] = search;
        }
}
int main()
{
    int m, n, t, k;
    scanf("%d %d %d %d", &m, &n, &t, &k);
    int matrix[20][20];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    int count[50];
    for (int o = 1; o <= t; o++)
    {
        int list[50], cnt = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (o == matrix[i][j])
                {
                    if (i > 0)
                    {
                        if (matrix[i][j] != matrix[i - 1][j])
                        {
                            check(list, &cnt, matrix[i - 1][j]);
                        }
                    }
                    if (i < m - 1)
                    {
                        if (matrix[i][j] != matrix[i + 1][j])
                        {
                            check(list, &cnt, matrix[i + 1][j]);
                        }
                    }
                    if (j > 0)
                    {
                        if (matrix[i][j] != matrix[i][j - 1])
                        {
                            check(list, &cnt, matrix[i][j - 1]);
                        }
                    }
                    if (j < n - 1)
                    {
                        if (matrix[i][j] != matrix[i][j + 1])
                        {
                            check(list, &cnt, matrix[i][j + 1]);
                        }
                    }
                }
            }
        }
        count[o - 1] = cnt;
    }
    printf("%d", count[k - 1]);
    return 0;
}