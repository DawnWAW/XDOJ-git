#include <stdio.h>

int main()
{
    int m;
    scanf("%d", &m);
    int box[m][m];
    for (int i = 0; i < m; i++)
    {

        for (int j = 0; j < m; j++)
        {
            scanf("%d", &box[i][j]);
        }
    }
    int sum[2*m+2];
    for (int i = 0; i < m; i++)
    {
        sum[i] = 0;
        for (int j = 0; j < m; j++)
        {
            sum[i] += box[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        sum[i + m] = 0;
        for (int j = 0; j < m; j++)
        {
            sum[i + m] += box[j][i];
        }
    }
    sum[2 * m] = 0;
    sum[2 * m + 1] = 0;
    for (int i = 0; i < m; i++)
    {
        sum[2 * m] += box[i][i];
        sum[2 * m + 1] += box[i][m - i - 1];
    }
    for (int i = 0; i < 2 * m + 1; i++)
    {
        for (int j = 0; j < 2 * m + 1 - i; j++)
        {
            if (sum[j] < sum[j + 1])
            {
                int temp = sum[j];
                sum[j ] = sum[j+1];
                sum[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 2 * m + 2; i++)
    {
        printf("%d ", sum[i]);
    }
    printf("\n");

    return 0;
}