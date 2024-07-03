#include <stdio.h>
#define MAX 1000
typedef struct
{
    int number;
    int count;
} hashtable;
void hashbubble(hashtable *);
int main()
{
    // 初始化哈希表
    hashtable countOfNumber[MAX + 1];
    for (int i = 0; i < MAX + 1; i++)
    {
        countOfNumber[i].number = i;
        countOfNumber[i].count = 0;
    }
    // 输入数列，每输入一个数，该数在哈希表里面对应数字加1
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int number;
        scanf("%d", &number);
        countOfNumber[number].count++;
    }
    // 冒泡排序哈希表
    hashbubble(countOfNumber);
    hashtable *p = countOfNumber;
    while (p->count != 0)
    {
        printf("%d %d\n", p->number, p->count);
        p++;
    }

    return 0;
}
void hashbubble(hashtable *countOfNumber)
{
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX - i; j++)
        {
            if (countOfNumber[j].count <= countOfNumber[j + 1].count)
            {
                if (countOfNumber[j].count == countOfNumber[j + 1].count && countOfNumber[j].number < countOfNumber[j + 1].number)
                {
                    continue;
                }
                hashtable temp = countOfNumber[j];
                countOfNumber[j] = countOfNumber[j + 1];
                countOfNumber[j + 1] = temp;
            }
        }
    }
}