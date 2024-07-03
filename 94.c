#include <stdio.h>
void bubble(int arr[], int n);
int main()
{
    int list[4], rank[4], smallest, count;
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &list[i]);
    }
    bubble(list, 4);
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", list[i]);
    }
    return 0;
}
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
