#include <stdio.h>
void factor(int a, int arr[])
{
    int count = 0, sum = 0;
    for (int i = 1; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            arr[count] = i;
            count++;
            sum += i;
        }
    }
    arr[0] = count;
    arr[999] = sum;
}
int main()
{
    int a, b, list_a[1000], list_b[1000];
    scanf("%d %d", &a, &b);
    factor(a, list_a);
    factor(b, list_b);
    if (list_a[999] == b && list_b[999] == a)
    {
        printf("yes %d %d", list_a[0], list_b[0]);
    }
    else
    {
        printf("no %d %d", list_a[0], list_b[0]);
    }

    return 0;
}