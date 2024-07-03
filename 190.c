#include <stdio.h>
int main()
{
    int matrix[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < 3; i++)
    {
        sum1 += matrix[i][i];
        sum2 += matrix[i][2 - i];
    }
    printf("%d", sum1);
    return 0;
}