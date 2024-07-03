#include <stdio.h>
#include <math.h>
double r;
// int flag = 1;

void logistic(double x, int times)
{
    double nextX = r * x * (1 - x);
    if (fabs(x - nextX) < 1e-5)
    {
        printf("%.4f 1", nextX);
        return;
    }
    else if (times == 0)
    {
        printf("%.4f 0", nextX);
    }
    else
        logistic(nextX, times - 1);
}
int main()
{
    double x;
    scanf("%lf", &x);
    scanf("%lf", &r);
    logistic(x, 1000);
    return 0;
}