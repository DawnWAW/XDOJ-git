#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int horse[100][100];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &horse[i][j]);
        }
    }
    int point, line, arr, flag_no = 1;
    for (int i = 0; i < m; i++)
    {
        point = horse[i][0];
        line = 0;
        arr = 0;

        for (int j = 1; j < n; j++)
        {

            if (point > horse[i][j])
            {
                point = horse[i][j];
                line = j;
            }
        }
        int biggest = horse[0][line];
        for (int o = 1; o < m; o++)
        {
            if (biggest < horse[o][line])
            {
                biggest = horse[o][line];
                arr = o;
            }
        }
        if (point == horse[arr][line])
        {
            printf("%d %d %d\n", arr, line, point);
            flag_no = 0;
        }
    }
    if (flag_no)
    {
        printf("no\n");
    }

    return 0;
}