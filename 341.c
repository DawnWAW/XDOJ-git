#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    float sum = 0, average = 0, money, price;
    for (int i = 0; i < n; i++)
    {
        scanf("%f %f", &money, &price);
        sum += money * price;
        average += price;
    }
    printf("%.2f %.2f", sum, average / n);
    return 0;
}