#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int nums[30];
    int sum = 0;
    int average = 0;
    int S = 0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        sum += nums[i];
    }
    average = sum / n;
    for (int i = 0; i < n; i++)
    {
        S += (nums[i] - average) * (nums[i] - average);
    }
    printf("%d", S / n);
    return 0;
}