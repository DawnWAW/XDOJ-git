#include <stdio.h>
int main()
{
    int matrix_a[3][3], matrix_b[3][3], matrix_c[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix_a[i][j]);
            matrix_b[j][i] = matrix_a[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrix_c[i][j] = matrix_a[i][j] + matrix_b[i][j];
            printf("%d ", matrix_c[i][j]);
        }
        printf("\n");
    }

    return 0;
}