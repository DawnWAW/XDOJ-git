#include <stdio.h>
#include <math.h>
#include <stdlib.h>
typedef struct
{
    int x1, y1;
    int x2, y2;
    int x3, y3;
    int x4, y4;
} retangle;
int arceCalculate(int x1, int y1, int x2, int y2, int x3, int y3);
int main()
{
    retangle position;
    scanf("%d %d %d %d %d %d %d %d", &position.x1, &position.y1, &position.x2, &position.y2, &position.x3, &position.y3, &position.x4, &position.y4);
    printf("%d", arceCalculate(position.x1, position.y1, position.x2, position.y2, position.x3, position.y3));
    return 0;
}
int arceCalculate(int x1, int y1, int x2, int y2, int x3, int y3)
{
    int l1 = sqrt(pow((double)(x1 - x2), 2) + pow((double)(y1 - y2), 2));
    int l2 = sqrt(pow((double)(x1 - x3), 2) + pow((double)(y1 - y3), 2));
    return l1 * l2;
}