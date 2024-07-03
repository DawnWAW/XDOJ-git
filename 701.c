#include <stdio.h>
#include <math.h>
int check(double s, double average, double num)
{
    if (num < average - 3 * s || num > average + 3 * s)
    {
        return 0;
    }
    return 1;
}
int main()
{
    int n;
    double nums[1000], average = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &nums[i]);
        average += nums[i];
    }
    double sum = 0;
    average /= n;
    for (int i = 0; i < n; i++)
    {
        sum += pow(nums[i] - average, 2);
    }
    double S = sqrt(sum / (n - 1));
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (!check(S, average, nums[i]))
        {
            count++;
        }
    }
    // printf("%.4f\n", average);
    printf("%.4f %d", S, count);
    return 0;
}