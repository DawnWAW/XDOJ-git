#include <stdio.h>
int main()
{
    int biggest = -1000000, smallest = 10000000;
    int position_b, position_s;
    int n;
    int nums[50];
    int sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        sum += nums[i];
        if (nums[i] > biggest)
        {
            biggest = nums[i];
            position_b = i+1;
        }
    }
    for (int i = 0; i < n; i++)
    {

        if (nums[i] < smallest)
        {
            smallest = nums[i];
            position_s = i+1;
        }
    }
    printf("%d %d %d %d %d", sum, biggest, position_b, smallest, position_s);
    return 0;
}