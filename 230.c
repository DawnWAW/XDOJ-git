#include <stdio.h>
int isPrime(int n)
{
    int flag = 0;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
        }
    }
    if (flag == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void Between(int x)
{
    int count = 0, prime[1000];
    for (int i = 2; i <= x; i++)
    {
        if (isPrime(i))
        {
            prime[count++] = i;
        }
    }
    printf("%d\n", count);
    for (int i = 0; i < count; i++)
    {
        printf("%d ", prime[i]);
    }
}
int main()
{
    int x, prime[1000];
    scanf("%d", &x);
    Between(x);

    return 0;
}