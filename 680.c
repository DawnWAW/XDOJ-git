#include <stdio.h>
#include <math.h>
int a;
double function(double x)
{
    double result = -pow(x, 3) + a * pow(x, 2);
    return result;
}
int main()
{
    double max = -100000, x = 0.;
    scanf("%d", &a);
    for (int i = 0; i <= 10000; i++)
    {
        max = ((max > function(x)) ? max : function(x));
        x += 0.001;
    }
    printf("%.2f", max);
    return 0;
}