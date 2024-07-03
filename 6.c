#include <stdio.h>
int sum(int n)
{
    if (n < 10)
    {
        return n;
    }
    return n % 10 + sum(n / 10);
}
// void bubble(int arr[],int len){

// }
int main()
{
    int n, num[1000], d[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
        d[i] = sum(num[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (d[j] < d[j + 1])
            {
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
                temp = d[j];
                d[j] = d[j + 1];
                d[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (d[j] == d[j + 1]&&num[j]>num[j+1])
            {
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d %d\n", num[i],sum(num[i]));
    }

    return 0;
}
// else if (d[j] == d[j + 1])
// {
//     if (num[j] > num[j + 1])
//     {
//         int temp = num[j];
//         num[j] = num[j + 1];
//         num[j + 1] = temp;
//     }
// }