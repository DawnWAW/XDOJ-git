#include <stdio.h>
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
    int judge[10], n, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &judge[i]);
    }
    bubble(judge, n);
    for (int i = 1; i < n - 1; i++)
    {
        sum += judge[i];
    }
    printf("%.2lf", (double)sum / (n - 2));

    return 0;
}