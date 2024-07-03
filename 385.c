#include <stdio.h>
int judge7(int n, int i)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n % 7 == 0 && i == 0)
    {
        return 1;
    }
    else if ((n % 10) % 7 == 0 && (n % 10 != 0))
    {
        return 1;
    }
    else
        return judge7(n / 10, 1);
}
int skiptimes(int arr[], int count)
{
    int time = 0;
    for (int i = 0; i < count; i++)
    {
        if (judge7((arr[i]), 0))
        {
            time++;
        }
    }
    return time;
}
int main()
{

    int n, arr_1[1000], arr_2[1000], arr_3[1000], count_1 = 0, count_2 = 0, count_3 = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n + skiptimes(arr_1, count_1) + skiptimes(arr_2, count_2) + skiptimes(arr_3, count_3); i++)
    {
        switch (i % 3)
        {
        case 1:
            arr_1[count_1] = i;
            count_1++;
            break;
        case 2:
            arr_2[count_2] = i;
            count_2++;
            break;
        case 0:
            arr_3[count_3] = i;
            count_3++;
            break;
        }
    }
    printf("%d %d %d", skiptimes(arr_1, count_1), skiptimes(arr_2, count_2), skiptimes(arr_3, count_3));

    return 0;
}