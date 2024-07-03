#include <stdio.h>
int collectPrime(int n, int *prime)
{
    int flag, j = 0;
    for (int o = 2; o <= n; o++)
    {
        for (int i = 2; i <= o / 2; i++)
        {
            if (o % i == 0)
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            prime[j++] = o;
        }
        flag = 0;
    }
    return j;
}
int main()
{
    int n, prime[10000], flag = 0;
    scanf("%d", &n);
    int count = collectPrime(n, prime);
    for (int i = 0; i < count - 1; i++)
    {
        if (prime[i + 1] - prime[i] == 2)
        {
            printf("%d %d\n", prime[i], prime[i + 1]);
            flag = 1;
        }
    }
    if (flag==0)
    {
        printf("empty");
    }

    return 0;
}