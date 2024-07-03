/*
#include <stdio.h>
#include <stdlib.h>
#define MAX 10
void combine(int *numberList, int position);
void sorting(int *numberList, int *length);
int sumOfArray(int *array, int length);
int adjusting(int *addtion, int *subtraction, int len_add, int len_sub);

int main()
{
    int countsOFNumber;
    scanf("%d", &countsOFNumber);
    int numberList[MAX] = {0};
    int numberOfResults = 0;

    // 存储每个数字（有组合数时这里需要改变）

    for (int i = 0; i <= countsOFNumber / 2; i++)
    {
        for (int j = 0; j < countsOFNumber; j++)
        {
            numberList[j] = j + 1;
        }
        if (i > 0)
        {
            switch (i)
            {
            case 1:
                for (int j = 0; j < countsOFNumber - 1; j++) // 组合次数
                {
                    combine(numberList, j);
                }
                break;
            case 2:
                for (int o = 0; o < countsOFNumber - 3; o++)
                {
                    combine(numberList, o);
                    for (int j = o + 2; j < countsOFNumber - 1; j++)
                    {
                        combine(numberList, j);
                    }
                }
                break;
            case 3:
                for (int o = 0; o < countsOFNumber - 5; o++)
                {
                    combine(numberList, o);
                    for (int j = o + 2; j < countsOFNumber - 3; j++)
                    {
                        combine(numberList, j);
                        for (int u = j + 2; u < countsOFNumber - 1; u++)
                        {
                            combine(numberList, u);
                        }
                    }
                }
                break;
            case 4:
                for (int y = 0; y < countsOFNumber - 7; y++)
                {
                    combine(numberList, y);
                    for (int o = y + 2; o < countsOFNumber - 5; o++)
                    {
                        combine(numberList, o);
                        for (int j = o + 2; j < countsOFNumber - 3; j++)
                        {
                            combine(numberList, j);
                            for (int u = j + 2; u < countsOFNumber - 1; u++)
                            {
                                combine(numberList, u);
                            }
                        }
                    }
                }

                break;
            }
        }
        sorting(numberList, &countsOFNumber);
        int sunOfNumber = 0;
        for (int i = 0; i < countsOFNumber; i++)
        {
            sunOfNumber += numberList[i];
        }
        if (sunOfNumber % 2 == 1)
        {
            // 没有可等的表达式组合
        }
        else
        {
            // 无合体数字情况，加减号个数为countOfNumber-1
            for (int i = 1; i < countsOFNumber; i++) // 不同加减号的组合有不同的结果
            {
                // 加减号个数>=1
                int subtractionSign = i;
                int addtionSign = countsOFNumber - subtractionSign;
                // 开辟加号数组和减号数组
                int *addtion = (int *)malloc(addtionSign * sizeof(int));
                int *subtraction = (int *)malloc(subtractionSign * sizeof(int));
                int *p = numberList;
                // 输入numberList数字进入加减两个数组
                for (int i = 0; i < addtionSign; i++, p++)
                {
                    addtion[i] = *p;
                }
                for (int i = 0; i < subtractionSign; i++, p++)
                {
                    subtraction[i] = *p;
                }
                // 计算差值
                numberOfResults += adjusting(addtion, subtraction, addtionSign, subtractionSign);
                free(addtion);
                free(subtraction);
            }
        }
    }

    printf("%d", numberOfResults);

    return 0;
}
int sumOfArray(int *array, int length)
{
    int sum = 0;
    int *p = array;
    for (int i = 0; i < length; i++)
    {
        sum += *p++;
    }
    return sum;
}
int adjusting(int *addtion, int *subtraction, int addtionSign, int subtractionSign)
{
    int gap = 0, gap_after = 0;

    do
    {
        gap = sumOfArray(addtion, addtionSign) - sumOfArray(subtraction, subtractionSign);
        // 得到解
        if (gap == 0)
        {
            return 1;
        }
        // 因为首个数字不能被减，所以只用判断一次
        else if (addtionSign == 1)
        {
            return 0;
        }
        else if (gap > 0)
        {
            int margin = 1000;
            int i_mark = 1, j_mark = 0;
            for (int i = 1; i < addtionSign; i++)
            {
                for (int j = 0; j < subtractionSign; j++)
                {
                    // 寻找使差值变小的换法
                    if (addtion[i] > subtraction[j])
                    {
                        if (abs(gap - 2 * (addtion[i] - subtraction[j])) < margin)
                        {
                            margin = abs(gap - 2 * (addtion[i] - subtraction[j]));
                            i_mark = i;
                            j_mark = j;
                        }
                    }
                }
            }
            int temp = addtion[i_mark];
            addtion[j_mark] = subtraction[j_mark];
            subtraction[j_mark] = temp;
        }
        else if (gap < 0)
        {
            int margin = 1000;
            int i_mark = 1, j_mark = 0;
            for (int i = 1; i < addtionSign; i++)
            {
                for (int j = 0; j < subtractionSign; j++)
                {
                    if (addtion[i] < subtraction[j])
                    {
                        if (abs(-gap + 2 * (addtion[i] - subtraction[j])) < margin)
                        {
                            margin = abs(-gap + 2 * (addtion[i] - subtraction[j]));
                            i_mark = i;
                            j_mark = j;
                        }
                    }
                }
            }
            int temp = addtion[i_mark];
            addtion[j_mark] = subtraction[j_mark];
            subtraction[j_mark] = temp;
        }
        gap_after = sumOfArray(addtion, addtionSign) - sumOfArray(subtraction, subtractionSign);
    } while (abs(gap) > abs(gap_after));
    return 0;
}
void combine(int *numberList, int position)
{
    int combination;
    combination = numberList[position] * 10 + numberList[position + 1];
    numberList[position] = combination;
    numberList[position + 1] = 0;
}
void sorting(int *numberList, int *length)
{
    int count = *length;
    for (int i = 0; i < count; i++)
    {
        if (numberList[i] == 0)
        {
            numberList[i] = numberList[i + 1];
        }
    }
    for (int i = 0; i < count; i++)
    {
        if (numberList[i] == 0)
        {
            (*length)--;
        }
    }
}*/

// 无输出

#include <stdio.h>
int countOfNumber = 0;
int countOfAnswer = 0;
void stepSimulator(int step, int sum);
int main()
{
    scanf("%d", &countOfNumber);
    stepSimulator(1, 0);
    printf("%d", countOfAnswer);
    return 0;
}
void stepSimulator(int step, int sum)
{
    // 终止步骤
    if (step == countOfNumber + 1)
    {
        if (sum == 0)
        {

            countOfAnswer++;
        }
        return;
    }
    else
    {

        // 无结合加减法
        stepSimulator(step + 1, sum + step);

        if (step != 1) // 1不可以被减
        {
            stepSimulator(step + 1, sum - step);
        }
        // 有结合加减
        if (step != countOfNumber) // 前一个数没有组合且不是最后一步才可以组合
        {
            int combination = (step * 10) + (step + 1);
            stepSimulator(step + 2, sum + combination);

            if (step != 1)
            {
                stepSimulator(step + 2, sum - combination);
            }
        }
    }
}

// 有输出
/*
#include <stdio.h>
int countOfNumber = 0;
int countOfAnswer = 0;
void stepSimulator(int step, int isCombined, int sum, int sign);
int main()
{
    scanf("%d", &countOfNumber);
    stepSimulator(1, 0, 0, 0);
    printf("%d", countOfAnswer);
    return 0;
}
void stepSimulator(int step, int isCombined, int sum, int sign)
{
    if (sign == 1)
    {
        if (isCombined != 0)
        {
            sum += isCombined;
            printf("+ %d ", isCombined);
        }
        else
        {
            sum += step - 1;
            printf("+ %d ", step - 1);
        }
    }
    else if (sign == 1)
    {
        if (isCombined != 0)
        {
            sum -= isCombined;
            printf("- %d ", isCombined);
        }
        else
        {
            sum -= step - 1;
            printf("- %d ", step - 1);
        }
    }

    // 终止步骤
    if (step == countOfNumber + 1)
    {
        if (sum == 0)
        {

            countOfAnswer++;
            printf(" = 0 (countOfAnswer=%d)\n", countOfAnswer);
        }
        else
        {
            printf(" != 0 (countOfAnswer=%d)\n", countOfAnswer);
        }
        return;
    }
    else
    {

        // 无结合加减法
        stepSimulator(step + 1, 0, sum, 1);
        // printf(" +%d ", step);
        if (step != 1) // 1不可以被减
        {
            stepSimulator(step + 1, 0, sum, -1);
            // printf(" -%d ", step);
        }
        // 有结合加减
        if (isCombined == 0 && step != countOfNumber) // 前一个数没有组合且不是最后一步才可以组合
        {
            int combination = (step * 10) + (step + 1);
            stepSimulator(step + 2, combination, sum, 1);
            // printf(" +%d ", combination);
            stepSimulator(step + 2, combination, sum, -1);
            // printf(" -%d ", combination);
        }
    }
}*/