#include <stdio.h>
double P(double x, int n)
{
    if (n == 0)
    {
        return 1.;
    }
    else if (n == 1)
    {
        return x;
    }
    else
    {
        return ((2 * n - 1) * x * P(x, n - 1) - (n - 1) * P(x, n - 2)) / n;
    }
}
int main()
{
    int n;
    double x,s=0;
    scanf("%d %lf", &n, &x);
    for (int i = 1; i <= n; i++)
    {
        s += P(x, i);
    }
    
    printf("%.4f", s);

    return 0;
}