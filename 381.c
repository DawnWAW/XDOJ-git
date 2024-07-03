#include <stdio.h>
int main()
{
    int list[100000];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &list[i]);
    }
    printf("%d %d %d", ((list[0] > list[n - 1]) ? list[0] : list[n - 1]), ((n % 2 == 0) ? (list[n / 2] + list[(n / 2) - 1]) / 2 : list[n / 2]), ((list[0] < list[n - 1]) ? list[0] : list[n - 1]));
    return 0;
}