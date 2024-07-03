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
    int n, list[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &list[i]);
    }
    bubble(list, n);
    if (n % 2 == 0)
    {
        if (list[n / 2 - 1] != list[n / 2])
        {
            printf("-1");
        }
        else
        {
            int mid = list[n / 2];
            for (int i = 1; i < n / 2; i++)
            {
                if ((list[n / 2 - 1 - i] != list[n / 2 + i]) && (list[n / 2 - 1 - i] == mid || list[n / 2 + i] == mid))
                {
                    printf("-1");
                    goto end;
                }
            }
            printf("%d", mid);
        }
    }
    else
    {
        int mid = list[(n - 1) / 2];
        for (int i = 1; i <= (n - 1) / 2; i++)
        {
            if ((list[(n - 1) / 2 - i] != list[(n - 1) / 2 + i]) && (list[(n - 1) / 2 - i] == mid || list[(n - 1) / 2 + i] == mid))
            {
                printf("-1");
                goto end;
            }
        }
        printf("%d", mid);
    }
end:
    return 0;
}