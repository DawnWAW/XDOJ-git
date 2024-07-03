#include <stdio.h>
int transf(int n);
int main()
{
    int n, time;
    scanf("%d", &n);
    for (int i = 0; n != 1; i++)
    {
        time = i + 1;
        n = transf(n);
    }
    printf("%d", time);
    return 0;
}
int transf(int n)
{
    if (n % 2 == 0)
    {
        n /= 2;
    }
    else
    {
        n = 3 * n + 1;
    }
    return n;
}