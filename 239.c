#include <stdio.h>
int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
        return n * fact(n - 1);
}
int C(int a, int b)
{
    if ((a == b) || (a == 0))
    {
        return 1;
    }
    else
        return fact(b) / (fact(a) * fact(b - a));
}
void Yanghui(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", C(i, n - 1));
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        Yanghui(i);
        printf("\n");
    }

    return 0;
}