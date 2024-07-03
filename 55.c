#include <stdio.h>
double listA(int n)
{
    if (n == 1)
        return 2.;
    else if (n == 2)
        return 3.;
    else
        return (listA(n - 1) + listA(n - 2));
}
double listB(int n)
{
    if (n == 1)
        return 1.;
    else if (n == 2)
        return 2.;
    else
        return (listB(n - 1) + listB(n - 2));
}
int main()
{
    int n;
    double sum = 0.;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += listA(i) / listB(i);
    }
    printf("%.2lf", sum);
    return 0;
}