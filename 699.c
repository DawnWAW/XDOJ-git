#include <stdio.h>
float getAverage(float list[], int monitor, int countOfJudges)
{
    float big = 0, small = 20, sum = 0;
    for (int i = 0; i < countOfJudges; i++)
    {
        sum += list[i];
        big = ((big > list[i]) ? big : list[i]);
        small = ((small < list[i]) ? small : list[i]);
    }
    int flag = 0;
    if (big == list[monitor] || small == list[monitor])
    {
        flag = 1;
    }
    return (sum - big - small + flag * list[monitor]) / (countOfJudges - 2 + flag);
}
int main()
{
    float score[20];
    int countOfJudges;
    int monitor;

    scanf("%d %d", &countOfJudges, &monitor);
    for (int i = 0; i < countOfJudges; i++)
    {
        scanf("%f", &score[i]);
    }
    printf("%.2f", getAverage(score, monitor - 1, countOfJudges));
    return 0;
}