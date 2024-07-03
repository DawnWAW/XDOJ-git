#include <stdio.h>
#include <math.h>
int main()
{
    double n;
    scanf("%lf", &n);
    if (n == round(sqrt(n)) * round(sqrt(n)))
    {
        printf("%d", (int)(sqrt(n)));
    }
    else
    {
        printf("no");
    }

    return 0;
}