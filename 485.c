#include <stdio.h>
#define MAX 16
int graph[MAX][MAX];
int graphProcessed[MAX][MAX];
int middleTakeIn(int i, int j);
void MeanFilter(void);
int main()
{
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            scanf("%d", &graph[i][j]);
        }
    }
    MeanFilter();
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            printf("%d ", graphProcessed[i][j]);
        }
        putchar('\n');
    }

    return 0;
}
void MeanFilter(void)
{
    for (int i = 0; i < MAX; i++)
    {
        graphProcessed[0][i] = graph[0][i];
        graphProcessed[i][0] = graph[i][0];
        graphProcessed[15][i] = graph[15][i];
        graphProcessed[i][15] = graph[i][15];
    }
    for (int i = 1; i < MAX - 1; i++)
    {
        for (int j = 1; j < MAX - 1; j++)
        {
            graphProcessed[i][j] = middleTakeIn(i, j);
        }
    }
}
int middleTakeIn(int x, int y)
{
    int array[9];
    int cnt = 0;
    for (int i = x - 1; i <= x + 1; i++)
    {
        for (int j = y - 1; j <= y + 1; j++)
        {
            array[cnt++] = graph[i][j];
        }
    }
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    return array[4];
}