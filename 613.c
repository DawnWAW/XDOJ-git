#include <stdio.h>
#include<math.h>
int main()
{
    const double Au = 1.932, Ag = 1.053, Cu = 0.89;
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("%.2lf\n%.2lf\n%.2lf\n", pow(a, 3)*10*Au, pow(a, 3)*10*Ag, pow(a, 3)*10*Cu);
    return 0;
}