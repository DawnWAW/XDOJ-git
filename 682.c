#include <stdio.h>
#include <math.h>
int isPrime(int n)
{
    int rootOfn = sqrt((double)n);
    for (int i = 2; i <= rootOfn; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int num;
    scanf("%d", &num);
    int m = pow(2.0, num) - 1;
    printf("%d %d", m, isPrime(m));
    return 0;
}