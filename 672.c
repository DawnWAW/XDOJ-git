#include <stdio.h>
#include <math.h>
int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
        return n * factorial(n - 1);
}
int main()
{
    int n;
    double x;
    scanf("%d %lf", &n, &x);
    double sin = 0.;
    for (int i = 0; i < n; i++)
    {

        sin += pow(-1.0, i) * pow(x, 2 * i + 1) / factorial(2 * i + 1);
    }
    printf("%.4f", sin);

    return 0;
}