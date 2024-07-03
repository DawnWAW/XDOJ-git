#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int coefficient;
    int exponent;
} polynomial;
#define MAX 10000
int search(int exp, int cnt, polynomial *poly)
{
    for (int i = 0; i <= cnt; i++)
    {
        if (exp == poly[i].exponent)
        {
            // 找到对应项之后返回位置i
            return i;
        }
    }
    // 没找到返回-1
    return -1;
}
void bubble(polynomial *poly, int cnt)
{
    for (int i = 0; i < cnt - 1; i++)
    {
        for (int j = 0; j < cnt - 1 - i; j++)
        {
            if (poly[j].exponent > poly[j + 1].exponent)
            {
                polynomial temp = poly[j];
                poly[j] = poly[j + 1];
                poly[j + 1] = temp;
            }
        }
    }
    return;
}
int main()
{
    /*
    int n, m, t;
    scanf("%d %d %d", &n, &m, &t);
    // 将t转化成系数
    t = ((t == 0) ? 1 : -1);
    // 下标代表次数，存储系数;设置最大次数
    int polynomial[MAX] = {0};
    int biggestIndex = 0, smallestIndex = 10000;
    // 多项式1输入多项式结果中
    for (int i = 0; i < n; i++)
    {
        int coefficient, index;
        scanf("%d %d", &coefficient, &index);
        biggestIndex = ((biggestIndex > index) ? biggestIndex : index);
        smallestIndex = ((smallestIndex < index) ? smallestIndex : index);
        polynomial[index] += coefficient;
    }
    // 多项式2输入与结果计算
    for (int i = 0; i < m; i++)
    {
        int coefficient, index;
        scanf("%d %d", &coefficient, &index);
        biggestIndex = ((biggestIndex > index) ? biggestIndex : index);
        smallestIndex = ((smallestIndex < index) ? smallestIndex : index);
        polynomial[index] += t * coefficient;
    }
    // 结果输出
    int outputFlag = 0;
    for (int i = smallestIndex; i <= biggestIndex; i++)
    {
        // 判断是否输出
        if (polynomial[i] == 0)
        {
            continue;
        }
        // 输出符号
        if (outputFlag && polynomial[i] > 0)
        {

            printf("+");
        }
        else if (polynomial[i] < 0)
        {
            printf("-");
        }
        // 输出系数
        if (i == 0)
        {
            printf("%d", abs(polynomial[i]));
        }
        else
        {
            if (abs(polynomial[i]) == 1)
                ;

            else
                printf("%d", abs(polynomial[i]));
        }
        // 输出x次方
        if (i == 0)
            ;
        else if (i == 1)
        {
            printf("x");
        }
        else
        {
            printf("x^%d", i);
        }
        // 标志已输出过一项
        outputFlag = 1;
    }
    if (outputFlag == 0)
    {
        printf("0");
    }
*/
    polynomial poly[MAX] = {0};
    int n, m, t, cnt = 0;
    scanf("%d %d %d", &n, &m, &t);
    int maxExp = 0, minExp = MAX;
    // t换算成加减法
    t = ((t == 0) ? 1 : -1);
    // 多项式1输入
    for (int i = 0; i < n; i++)
    {
        int coeff, exp;
        scanf("%d %d", &coeff, &exp);
        poly[cnt].coefficient = coeff;
        poly[cnt].exponent = exp;
        cnt++;
    }
    // 多项式2输入
    for (int i = 0; i < m; i++)
    {
        int coeff, exp;
        scanf("%d %d", &coeff, &exp);
        int position = search(exp, cnt-1, poly);
        if (position != -1)
        {
            poly[position].coefficient += t * coeff;
        }
        else
        {
            poly[cnt].coefficient = t * coeff;
            poly[cnt].exponent = exp;
            cnt++;
        }
    }
    // 将系数从小到大排列
    bubble(poly, cnt);
    // 输出
    int outputFlag = 0;
    for (int i = 0; i <= cnt; i++)
    {
        if (poly[i].coefficient == 0)
        {
            continue;
        }
        // 输出符号
        if (outputFlag && poly[i].coefficient > 0)
        {
            printf("+");
        }
        else if (poly[i].coefficient < 0)
        {
            printf("-");
        }
        // 输出系数
        if (abs(poly[i].coefficient) == 1)
        {
            if (poly[i].exponent == 0)
            {
                printf("%d", abs(poly[i].coefficient));
                outputFlag = 1;
            }
            else
                outputFlag = 1;
        }
        else
        {
            printf("%d", abs(poly[i].coefficient));
            outputFlag = 1;
        }
        // 输出x项
        if (poly[i].exponent == 0)
        {
            ;
        }
        else if (poly[i].exponent == 1)
        {
            printf("x");
        }
        else
        {
            printf("x^%d", poly[i].exponent);
        }
    }
    if (outputFlag == 0)
    {
        printf("0");
    }

    return 0;
}