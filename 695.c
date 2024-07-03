#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct
{
    int position;
    int value;
} NUMS;

NUMS list[100];
int countOfNums;
int biggestDifference = 0, smallestDifference = 100000;
void bubble()
{
    for (int i = 0; i < countOfNums - 1; i++)
    {
        for (int j = 0; j < countOfNums - 1 - i; j++)
        {
            if (list[j].value > list[j + 1].value)
            {
                NUMS temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < countOfNums - 1; i++)
    {
        biggestDifference = ((biggestDifference > abs(list[i].value - list[i + 1].value)) ? biggestDifference : abs(list[i].value - list[i + 1].value));
        smallestDifference = ((smallestDifference < abs(list[i].value - list[i + 1].value)) ? smallestDifference : abs(list[i].value - list[i + 1].value));
    }
}
bool isSameDifferList()
{
    bubble();
    int difference = list[0].value - list[1].value;
    for (int i = 1; i < countOfNums - 1; i++)
    {
        if (list[i].value - list[i + 1].value != difference)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    scanf("%d", &countOfNums);
    for (int i = 0; i < countOfNums; i++)
    {
        list[i].position = i + 1;
        scanf("%d", &list[i].value);
    }
    if (isSameDifferList())
    {
        for (int i = 0; i < countOfNums; i++)
        {
            printf("%d ", list[i].position);
        }
    }
    else
    {
        printf("%d %d", biggestDifference, smallestDifference);
    }
    return 0;
}