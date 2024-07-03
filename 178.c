#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    printf("%.2f", (1000 - 0.5 * 9.8 * t * t > 0) ? 1000 - 0.5 * 9.8 * t * t : 0.00);
    return 0;
}