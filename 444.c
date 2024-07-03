#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    double pi = 0.0;
    for (int i = 1; i <= 500000; i++)
    {
        pi += pow(-1.0, i + 1) * (1. / (2 * i - 1));
    }
    pi *= 4;

    switch (n)
    {
    case 1:
        printf("%.1lf", pi);
        break;
    case 2:
        printf("%.2lf", pi);
        break;
    case 3:
        printf("%.3lf", pi);
        break;
    case 4:
        printf("%.4lf", pi);
        break;
    case 5:
        printf("%.5lf", pi);
        break;
    case 6:
        printf("%.6lf", pi);
        break;
    case 7:
        printf("%.7lf", pi);
        break;
    case 8:
        printf("%.8lf", pi);
        break;
    case 9:
        printf("%.9lf", pi);
        break;
    case 10:
        printf("%.10lf", pi);
        break;
    case 11:
        printf("%.11lf", pi);
        break;
    case 12:
        printf("%.12lf", pi);
        break;
    case 13:
        printf("%.13lf", pi);
        break;
    case 14:
        printf("%.14lf", pi);
        break;
    case 15:
        printf("%.15lf", pi);
        break;
    }

    return 0;
}