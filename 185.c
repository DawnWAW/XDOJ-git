#include <stdio.h>
#include <math.h>
#define EPS 1e-5
int main()
{
    double a;
    scanf("%lf", &a);
    double x0, x1;
    x0 = a / 2.;
    x1 = 0.5 * (x0 + a / x0);
    while (fabs(x1 - x0) >= EPS)
    {
        x0 = x1;
        x1 = 0.5 * (x0 + a / x0);
    }
    printf("%.5lf", x1);
    return 0;
}