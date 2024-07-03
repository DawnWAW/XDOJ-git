#include <stdio.h>

#define MAXofStr 101
#define MAXofInt 1000
int main()
{
    char str[MAXofStr];
    unsigned int getNumber = 0;
    gets(str);
    char *p = str;
    // 提取数字
    while (*p != '\0')
    {
        // 字符转换为字数
        if (*p <= '9' && *p >= '0')
        {
            getNumber = getNumber * 10 + (*p - 48);
        }
        p++;
    }
    if (getNumber == 0)
    {
        printf("0");
        return 0;
    }

    // 寻找因子
    int isAnyFactor = 0;
    int numOfFactor = 0;
    int factorOfgetnumber[MAXofInt] = {0};
    for (int i = 2; i < getNumber/2; i++)
    {

        if (getNumber % i == 0)
        {
            factorOfgetnumber[numOfFactor++] = i;
            isAnyFactor = 1;
        }
    }

    //判断是否有因子
    if (isAnyFactor)
    {
        printf("%d", factorOfgetnumber[numOfFactor - 1]);
    }
    else
    {
        printf("%d", getNumber);
    }

    return 0;
}