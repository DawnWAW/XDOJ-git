#include <stdio.h>
int numlist(int num)
{
    if (num == 1)
    {
        return 2;
    }
    else if (num == 2)
    {
        return 3;
    }
    else
    {
        return num * num + num - 4;
    }
}
int main()
{
    int k, m;
    scanf("%d %d", &m, &k);
    int mod0 = 0, mod1 = 0, modelse = 0;
    for (int i = 1; i <= k; i++)
    {
        if (numlist(i) % m == 0)
        {
            mod0++;
        }
        else if (numlist(i) % m == 1)
        {
            mod1++;
        }
        else
            modelse++;
    }
    printf("%d %d %d", mod0, mod1, modelse);
    return 0;
}