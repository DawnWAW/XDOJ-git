#include <stdio.h>
#include <math.h>
void bubble(int arr[], int len)
{
    int i, j, temp;
    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int list[100], n, flag = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &list[i]);
    }
    bubble(list, n);
    for (int i = 1; i < n - 1; i++)
    {
        if (2 * list[i] != list[i - 1] + list[i + 1])
        {
            flag = 1;
        }
    }
    if (flag)
        printf("no");
    else
        printf("%d", abs(list[1] - list[0]));

    return 0;
}
