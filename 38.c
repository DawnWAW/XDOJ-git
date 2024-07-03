#include <stdio.h>
int digital(int n)
{
    int d = 0;
    do
    {
        n /= 10;
        d++;
    } while (n > 0);
    return d;
}
int sum(int n)
{
    if (n < 10)
    {
        return n;
    }
    return n % 10 + sum(n / 10);
}
int main()
{
    int n, d;
    scanf("%d", &n);
    int n0 = n;
    d = digital(n);
    int n1=0;
    for (int i = 0; i < d; i++)
    {
        n1 = n1 * 10 + n0 % 10;
        n0 /= 10;
    }
    if (n == n1)
    {
        printf("%d", sum(n));
    }
    else
        printf("no");
    return 0;
}