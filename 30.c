#include <stdio.h>
int isCompleteNum(int n)
{
    int num = 1;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            num += i;
            continue;
        }
    }
    return num;
}
int main()
{
    int a, b, list[10000], count = 0;
    scanf("%d %d", &a, &b);
    if (a == 1)
    {
        a = 2;
    }
    for (int i = a; i <= b; i++)
    {
        if (i == isCompleteNum(i))
        {
            count++;
            list[count] = i;
        }
    }
    for (int i = 1; i <= count; i++)
    {
        printf("%d\n", list[i]);
    }
    return 0;
}