#include <stdio.h>
int nums[1 << 7];
void fold(int i, int n)
{
    nums[i] += nums[n - i - 1];
}
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int N = 1 << n;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &nums[i]);
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < N / (1 << i); j++)
        {
            fold(j, N/(1<<i));
        }
    }
    for (int i = 0; i < (1 << (n - m)); i++)
    {
        printf("%d ", nums[i]);
    }
    return 0;
}