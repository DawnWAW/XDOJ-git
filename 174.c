#include <stdio.h>
#include <stdlib.h>
int countOfTreasure;
int smallestDifference;
int treasure[201];
int SumA[201][20001];
int sumOfArray(int array[], int left, int right)
{
    int *p = &array[left];
    int sumOfArray = 0;
    for (int i = left; i <= right; i++)
    {
        sumOfArray += *p++;
    }
    return sumOfArray;
}

int main()
{
    scanf("%d", &countOfTreasure);
    for (int i = 1; i <= countOfTreasure; i++)
    {
        scanf("%d", &treasure[i]);
    }
    int sumOftreasure = sumOfArray(treasure, 1, countOfTreasure);
    for (int count = 1; count <= countOfTreasure; count++)
    {
        for (int weight = 1; weight <= sumOftreasure / 2; weight++)
        {
            if (treasure[count] > weight)
            {
                // 物品超过背包重量
                SumA[count][weight] = SumA[count - 1][weight]; // 拿不了就别拿
            }
            else
            {
                SumA[count][weight] = ((SumA[count - 1][weight] > SumA[count - 1][weight - treasure[count]] + treasure[count]) ? SumA[count - 1][weight] : SumA[count - 1][weight - treasure[count]] + treasure[count]);
            }
        }
    }
    smallestDifference = sumOftreasure - 2 * SumA[countOfTreasure][sumOftreasure / 2];
    printf("%d", smallestDifference);
    return 0;
}
/*

这是一个动态分配的问题
我花了好长时间才搞定它
因为这位是我从来没有学到过的动态规划问题
现在搞定了好好好
*/