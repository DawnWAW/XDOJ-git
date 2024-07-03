#include <stdio.h>
#define MAX 30
int main()
{
    int n, m, cnt = 1;
    scanf("%d %d", &n, &m);
    int block[MAX][MAX] = {0};
    int blockout[MAX][MAX] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &block[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (j >= 1 && block[i][j - 1] == block[i][j])
            {
                cnt++;
                if (cnt >= 3)
                {
                    blockout[i][j] = 1;
                    blockout[i][j - 1] = 1;
                    blockout[i][j - 2] = 1;
                }
            }
            else
                cnt = 1;
        }
    }
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (i >= 1 && block[i - 1][j] == block[i][j])
            {
                cnt++;
                if (cnt >= 3)
                {
                    blockout[i][j] = 1;
                    blockout[i - 1][j] = 1;
                    blockout[i - 2][j] = 1;
                }
            }
            else
                cnt = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (blockout[i][j])
            {
                block[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d", block[i][j]);
            (j + 1 == m) ? (printf("\n")) : (printf(" "));
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         printf("%d", blockout[i][j]);
    //         (((j + 1) + (i + 1) * n) % m == 0) ? (printf("\n")) : (printf(" "));
    //     }
    // }
    return 0;
}

// int block[10][10] = {0};
// block[1][1] = 1;
// for (int i = 0; i < 10; i++)
// {
//     for (int j = 0; j < 10; j++)
//     {
//         printf("%d", block[i][j]);
//         (((j + 1) + (i + 1) * 10) % 10 == 0) ? (printf("\n")) : (printf(" "));
//     }
// }