#include <stdio.h>
#include <math.h>
int main()
{
    double n;
    int m;
    scanf("%lf", &n);
    for (int i = 0; 1; i++)
    {
        if (pow(n, 3) == n * (n + i - 1))
        {
            m = i;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", m + 2 * i);
    }

    return 0;
}