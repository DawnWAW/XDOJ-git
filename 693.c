#include <stdio.h>
#define MAX 30
int nums[MAX];
void insertNum(int num, int n, int position);
int binarySearch(int lengthOfArray, int target);
int search(int num, int n);
void bubble(int n);
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    int target;
    scanf("%d", &target);
    bubble(n);
    insertNum(target, n, binarySearch(n, target));
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", nums[i]);
    }
    return 0;
}
int search(int num, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > num)
        {
            return i;
        }
    }
    return n;
}
int binarySearch(int lengthOfArray, int target)
{
    int left, right, middle;
    left = 0;
    right = lengthOfArray - 1;
    do
    {
        middle = (left + right) / 2;
        if (left == right)
        {
            if (target > nums[middle])
            {
                return middle + 1;
            }
            else if (target < nums[middle])
            {
                return middle;
            }
        }
        else if (nums[middle] > target)
        {
            right = middle - 1;
        }
        else if (nums[middle] < target)
        {
            left = middle + 1;
        }

    } while (nums[middle] != target);
    return middle;
}
void insertNum(int num, int n, int position)
{
    if (position == n)
    {
        nums[n] = num;
    }
    else
    {
        for (int i = n - 1; i >= position; i--)
        {
            nums[i + 1] = nums[i];
        }
        nums[position] = num;
    }
}
void bubble(int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
}
