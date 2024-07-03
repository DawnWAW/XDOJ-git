#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    double a, b;
    if (scanf("%lf %lf", &a, &b) != 2)
    {
        printf("input error");
    }
    else
    {
        if (sqrt(pow(fabs(a) - 2, 2) + sqrt(pow(fabs(b) - 2, 2))) <= 1)
        {
            printf("10");
        }
        else
            printf("0");
    }

    return 0;
}