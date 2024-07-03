#include <stdio.h>
int main()
{
    int n, d = 0, nums[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    int *p = nums;
    int most = 1, count = 1;
    while (p - nums != n)
    {

        if (*p == *(p + 1))
        {
            count++;
            most = ((most > count) ? most : count);
        }
        else
            count = 1;
        p++;
    }
    printf("%d", most);
    return 0;
}