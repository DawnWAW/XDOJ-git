#include <stdio.h>
#define MAX 16
int graph[MAX][MAX];
int graphProcessed[MAX][MAX];
int averageTakeIn(int i, int j);
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
            graphProcessed[i][j] = averageTakeIn(i, j);
        }
    }
}
int averageTakeIn(int i, int j)
{
    return (graph[i - 1][j - 1] + graph[i][j - 1] + graph[i + 1][j - 1] + graph[i - 1][j] + graph[i][j] + graph[i + 1][j] + graph[i - 1][j + 1] + graph[i][j + 1] + graph[i + 1][j + 1]) / 9;
}