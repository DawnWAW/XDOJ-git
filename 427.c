#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double delta = b * b - 4 * a * c;
    if (delta < 0)
    {
        printf("no");
    }
    else if (delta == 0)
    {
        double x = (-b + sqrt(delta)) / (2. * a);
        printf("%.1lf", x);
    }
    else if (delta > 0)
    {
        double x2 = (-b - sqrt(delta)) / (2. * a);
        double x1 = (-b + sqrt(delta)) / (2. * a);
        printf("%.1lf %.1lf", x1, x2);
    }
    return 0;
}