#include <stdio.h>
int primeJudge(int n)
{
    int flag = 0;
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
        }
    }
    if (flag == 0)
    {
        return n;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n, prime[1000];
    scanf("%d", &n);
    for (int i = 2,j=0; i < n;j++, i++)
    {
        prime[j] = primeJudge(i);
    }
    for (int i = 0; i < n; i++)
    {
        if ((primeJudge(n - prime[i])) != 0 && prime[i] != 0)
        {
            printf("%d %d", prime[i], n - prime[i]);
            break;
        }
    }

    return 0;
}