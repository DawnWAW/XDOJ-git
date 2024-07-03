#include <stdio.h>
#define Max 256
int main()
{
    int m, n, img[Max][Max], box[16] = {0};
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &img[i][j]);
            box[img[i][j]]++;
        }
    }
    for (int i = 0; i < 16; i++)
    {
        if (box[i] != 0)
            printf("%d %d\n", i, box[i]);
    }

    return 0;
}