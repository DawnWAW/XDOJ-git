#include <stdio.h>
int main()
{
    int n, prime[150], judge, count = 1;
    scanf("%d", &n);
    for (int i = 2; count <= n + 10; i++)
    {
        judge = 0;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                judge = 1;
            }
        }
        if (judge == 0)
        {
            prime[count] = i;
            count++;
        }
    }
    int sum = 0;
    for (int i = 0; i < 11; i++)
    {
        sum += prime[i + n];
    }

    printf("%d", sum);

    return 0;
}