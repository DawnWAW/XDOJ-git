#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c;
    int numberCheck = scanf("%lf %lf %lf", &a, &b, &c);
    if (numberCheck < 3)
    {
        printf("input error");
    }
    else if (a == 0 && b == 0)
    {
        if (c == 0)
        {
            printf("arbitrary solution");
        }
        else
        {
            printf("no solution");
        }
    }
    else if (a == 0)
    {
        if (c == 0)
        {
            printf("x=0");
        }
        else
            printf("x=%lf", -c / b);
    }
    // else
    // {
    //     double delta = b * b - 4 * a * c;
    //     if (delta < 0)
    //     {
    //         double x = sqrt(-delta) / (2. * a);
    //         printf("x1=%lf+%lfi, x2=%lf-%lfi", -b / (2. * a), x, -b / (2. * a), x);
    //         // printf("x1=-0.33333+0.471405i, x2=-0.33333-0.471405i");
    //     }
    //     else if (delta == 0)
    //     {
    //         double x = (-b + sqrt(delta)) / (2. * a);
    //         if (x - (int)x >= 1e-6)
    //         {
    //             printf("x=%lf", x);
    //         }
    //         else
    //             printf("x=%d", (int)x);
    //     }
    //     else if (delta > 0)
    //     {
    //         double x2 = (-b - sqrt(delta)) / (2. * a);
    //         double x1 = (-b + sqrt(delta)) / (2. * a);
    //         printf("x1=%lf, x2=%lf", x1, x2);
    //         // printf("x1=-0.609612, x2=-1.640388");
    //     }
    // }
    return 0;
}
