#include <stdio.h>
int an(int n)
{
    int n1 = n - 1;
    return 3 * n1 * n1 + 2 * n1 + 1;
}
int main()
{
    int sum_odd = 0;
    int sum_even = 0;
    int nums[20];
    int count_even = 0;
    int count_odd = 0;
    int m;
    scanf("%d", &m);
    for (int i = 0; count_even < m; i++)
    {
        if (an(i) > 100)
        {

            if (an(i) % 2 == 0)
            {
                count_even++;
                sum_even += an(i);
            }
        }
    }
    for (int i = 0; count_odd < m - 1; i++)
    {
        if (an(i) > 100)
        {

            if (an(i) % 2 == 1)
            {
                count_odd++;
                sum_odd += an(i);
            }
        }
    }
    printf("%d %d", sum_even, sum_odd);
    return 0;
}