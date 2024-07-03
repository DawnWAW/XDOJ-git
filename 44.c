#include <stdio.h>
int Fibonacci(int i)
{
    if (i == 1 || i == 2)
    {
        return 1;
    }
    else
        return (Fibonacci(i - 1) + Fibonacci(i - 2));
}
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
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    if (primeJudge(Fibonacci(n)))
    {
        printf("yes");
    }
    else
        printf("%d", Fibonacci(n));

    return 0;
}
