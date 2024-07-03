#include <stdio.h>
int main()
{
    int a[20], matrix[10][10], cnt = 0;

    while (scanf("%d", &a[cnt++]) != EOF)
        ;
    for (int i = 0; i < cnt / 2; i++)
    {
        matrix[0][i] = a[i];
    }
    for (int i = 0; i < cnt/2; i++)
    {
        matrix[i][0] = a[i+cnt/2];
    }
    for (int i = 1; i < cnt/2; i++)
    {
        for (int j = 1; j < cnt/2; j++)
        {
            matrix[i][j] = matrix[i - 1][j - 1];
        }
    }
    for (int i = 0; i < cnt/2; i++)
    {
        for (int j = 0; j < cnt/2; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}