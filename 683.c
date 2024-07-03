#include <stdio.h>
int nums[30];
int outputNums[30];
int middleFliter(int position)
{
    return (nums[position - 1] + nums[position] + nums[position + 1]) / 3;
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &nums[i]);
    }
    outputNums[0] = middleFliter(1);
    outputNums[n - 1] = middleFliter(n - 2);
    for (int i = 1; i < n - 1; i++)
    {
        outputNums[i] = middleFliter(i);
    }
    for (int i = 0; i < n; i++)
    {

        printf("%d ", outputNums[i]);
    }

    return 0;
}