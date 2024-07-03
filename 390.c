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
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", fact(i));
    }

    return 0;
}