#include <stdio.h>
#include <math.h>
int main()
{
    int day, temperature[31];
    scanf("%d", &day);
    for (int i = 1; i <= day; i++)
    {
        scanf("%d", &temperature[i]);
    }
    int biggest = 0;
    for (int i = 1; i < day; i++)
    {
        biggest = (abs(temperature[i] - temperature[i + 1]) > biggest) ? abs(temperature[i] - temperature[i + 1]) : biggest;
    }
    printf("%d", biggest);

    return 0;
}