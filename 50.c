#include <stdio.h>
int d1(int d);
int d2(int d);
int d3(int d);
int d4(int d);
int d5(int d);
int d6(int d);
int d7(int d);
int d8(int d);
int d9(int d);
int sum_d(int d);
int main()
{
    int n,                   // 号码个数
        list_num[100],       // 号码数组
        biggest_d = 0,       // 最大的号码各项和
        list_biggest_d[100], // 各位数和最大的号码的数组
        count = 0,           // 各位数和最大的号码的数组中号码的个数
        biggest_num = 0;     // 最大的号码
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &list_num[i]);
    }
    // 输入数组
    for (int i = 0; i < n; i++)
    {
        biggest_d = (sum_d(list_num[i]) >= biggest_d) ? (sum_d(list_num[i])) : biggest_d; // 取大
    }
    // 找出数组中各位数和的和
    for (int i = 0; i < n; i++)
    {
        if (biggest_d == sum_d(list_num[i]))
        {
            list_biggest_d[count] = list_num[i];
            count++;
        }
    }
    // 把各位数和最大的号码放到同一个数组
    for (int i = 0; i < count; i++)
    {
        biggest_num = (biggest_num <= list_biggest_d[i]) ? (list_biggest_d[i]) : biggest_num;
    }
    // 取出最大的号码
    printf("%d", biggest_num);
    return 0;
}
int d1(int d);
int d2(int d);
int d3(int d);
int d4(int d);
int d5(int d);
int d6(int d);
int d7(int d);
int d8(int d);
int d9(int d);
int sum_d(int d);
int sum_d(int d)
{
    int sum_d = d1(d) + d2(d) + d3(d) + d4(d) + d5(d) + d6(d) + d7(d) + d8(d) + d9(d);
    return sum_d;
}
int d1(int num)
{
    int d1 = num % 10;
    return d1;
}
int d2(int num)
{
    int d2 = num % 100 / 10;
    return d2;
}
int d3(int num)
{
    int d3 = num % 1000 / 100;
    return d3;
}
int d4(int num)
{
    int d4 = num % 10000 / 1000;
    return d4;
}
int d5(int num)
{
    int d5 = num % 100000 / 10000;
    return d5;
}
int d6(int num)
{
    int d6 = num % 1000000 / 100000;
    return d6;
}
int d7(int num)
{
    int d7 = num % 10000000 / 1000000;
    return d7;
}
int d8(int num)
{
    int d8 = num % 100000000 / 10000000;
    return d8;
}
int d9(int num)
{
    int d9 = num / 100000000;
    return d9;
}