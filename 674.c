#include <stdio.h>
#include <math.h>
typedef struct
{
    int x, y;
    int result;
} position;
int calculate(position spot)
{
    int d1, d2;
    d1 = pow((double)(spot.x - 4), 2) + pow((double)(spot.y - 4), 2);
    d2 = pow((double)(spot.x + 4), 2) + pow((double)(spot.y + 4), 2);
    if (d1 < d2)
    {
        return 1;
    }
    else
        return 2;
}
int main()
{
    position spot[20];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &spot[i].x, &spot[i].y);
        spot[i].result = calculate(spot[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", spot[i].result);
    }

    return 0;
}