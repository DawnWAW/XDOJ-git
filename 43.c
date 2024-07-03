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
int main()
{
    int num, d, list_d[9], biggest = 0, smallest = 9;
    scanf("%d", &num);
    if (num == 0)
    {
        printf("%d %d %d", 1, 0, 0);
        return 0;
    }
    for (int i = 9; i >= 1; i--)
    {
        int judge = 0;
        switch (i)
        {
        case 9:
            judge = d9(num);
            break;
        case 8:
            judge = d8(num);
            break;
        case 7:
            judge = d7(num);
            break;
        case 6:
            judge = d6(num);
            break;
        case 5:
            judge = d5(num);
            break;
        case 4:
            judge = d4(num);
            break;
        case 3:
            judge = d3(num);
            break;
        case 2:
            judge = d2(num);
            break;
        case 1:
            judge = d1(num);
            break;
        }
        if (judge != 0)
        {
            d = i;
            break;
        }
    }
    printf("%d ", d); // 数字位数
    for (int i = d; i >= 1; i--)
    {
        switch (i)
        {
        case 9:
            list_d[i] = d9(num);
            // printf("%d",list_d[i]);
            break;
        case 8:
            list_d[i] = d8(num);
            // printf("%d",list_d[i]);
            break;
        case 7:
            list_d[i] = d7(num);
            // printf("%d",list_d[i]);
            break;
        case 6:
            list_d[i] = d6(num);
            // printf("%d",list_d[i]);
            break;
        case 5:
            list_d[i] = d5(num);
            // printf("%d",list_d[i]);
            break;
        case 4:
            list_d[i] = d4(num);
            // printf("%d",list_d[i]);
            break;
        case 3:
            list_d[i] = d3(num);
            // printf("%d",list_d[i]);
            break;
        case 2:
            list_d[i] = d2(num);
            // printf("%d",list_d[i]);
            break;
        case 1:
            list_d[i] = d1(num);
            // printf("%d",list_d[i]);
            break;
        }
    }
    for (int i = 1; i <= d; i++)
    {
        biggest = (list_d[i] >= biggest) ? list_d[i] : biggest;
        smallest = (list_d[i] <= smallest) ? list_d[i] : smallest;
    }
    printf("%d %d", biggest, smallest);

    return 0;
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