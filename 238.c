#include <stdio.h>
int main()
{
    int horse[4][5];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &horse[i][j]);
        }
    }
    int point, col, row, flag_no = 1;
    for (int i = 0; i < 4; i++)
    {
        point = horse[i][0];
        col = 0;
        row = 0;

        for (int j = 1; j < 5; j++)
        {

            if (point < horse[i][j])
            {
                point = horse[i][j];
                col = j;
            }
        }
        int smallest = horse[0][col];
        for (int o = 1; o < 4; o++)
        {
            if (smallest > horse[o][col])
            {
                smallest = horse[o][col];
                row = o;
            }
        }
        if (point == horse[row][col])
        {
            printf("%d %d %d\n", point, row+1, col+1);
            flag_no = 0;
        }
    }
    if (flag_no)
    {
        printf("°°µã²»´æÔÚ\n");
    }

    return 0;
}