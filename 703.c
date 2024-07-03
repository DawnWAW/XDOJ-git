#include <stdio.h>
int gcd(int a, int b)
{
    if (a % b == 0)
    {
        return b;
    }
    else
        return gcd(b, a % b);
}
int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}
int main()
{
    int n;
    scanf("%d ", &n);
    int nums[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum += lcm(nums[i], nums[i + 1]);
    }
    printf("%d", sum);

    return 0;
}