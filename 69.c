#include <stdio.h>
int main()
{
    int box[100][100], m, n;
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &box[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        int cnt = 1, psOf1[100], countOf1[100], count = 0, flag = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (box[i][j] == box[i][j + 1] && box[i][j + 1] == 1)
            {
                cnt++;
                flag = 1;
                if (j + 1 == n - 1)
                {
                    j++;
                    goto end;
                }
            }
            else if (box[i][j] == 0 && box[i][j + 1] == 1 && j == n - 2)
            {
                j = n - 1;
                goto end;
            }

            else if (box[i][j] == 1)
            {
            end:
                flag = 1;
                psOf1[count] = j - cnt + 1;
                countOf1[count++] = cnt;
                cnt = 1;
            }
        }
        int biggest = 0, o;
        for (o = 1; o < count; o++)
        {
            if (countOf1[biggest] < countOf1[o])
            {
                biggest = o;
            }
        }
        if (flag == 1)
            printf("%d %d\n", psOf1[biggest], psOf1[biggest] + countOf1[biggest] - 1);
        else
            printf("-1 -1\n");
    }

    return 0;
}