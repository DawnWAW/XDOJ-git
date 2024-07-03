#include <stdio.h>
int main()
{
    double tempreture[10], day, sum = 0, temp;
    scanf("%lf", &day);
    for (int i = 0; i < day; i++)
    {
        scanf("%lf", &tempreture[i]);
        tempreture[i] = tempreture[i] * 9.0 / 5.0 + 32;
    }
    for (int i = 0; i < day; i++)
    {
        if (i % 5 == 0)
        {
            printf("\n");
        }
        printf("%.1lf ", tempreture[i]);
    }

    for (int i = 0; i < day - 1; i++)
    {
        for (int j = 0; j < day - 1 - i; j++)
        {
            if (tempreture[j] > tempreture[j + 1])
            {
                temp = tempreture[j];
                tempreture[j] = tempreture[j + 1];
                tempreture[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < day; i++)
    {
        sum += tempreture[i];
    }
    printf("\n%.1lf %.1lf %.1lf", tempreture[0], tempreture[(int)day - 1], sum / day);
    return 0;
}